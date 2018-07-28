#include <nan.h>
#include <node.h>
#include <cmath>

using namespace v8;

void ArrStatic(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();

    Local<Array> input = Local<Array>::Cast(info[0]);
    const unsigned int length = input->Length();

    Local<Object> obj = Object::New(isolate);

    unsigned int i;
    double sum = 0;

    for (i = 0; i < length; i++)
    {
        sum = sum + input->Get(i)->NumberValue();
    }

    const double result = sum / length;

    obj->Set(String::NewFromUtf8(isolate, "average"),
             Number::New(isolate, result));

    info.GetReturnValue().Set(obj);
    return;
}

void ForEach(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();

    Local<Array> input = Local<Array>::Cast(info[0]);
    Local<Function> eachFunc = Local<Function>::Cast(info[1]);

    const unsigned int length = input->Length();
    Local<Object> obj = Object::New(isolate);

    unsigned int i;

    for (i = 0; i < length; i++)
    {
        const unsigned argc = 1;
        Local<Value> argv[argc] = {input->Get(i)};
        eachFunc->Call(isolate->GetCurrentContext()->Global(), argc, argv);
    }

    auto undefined = Nan::Undefined();
    info.GetReturnValue().Set(undefined);
    return;
}

/**
 * LeastSquares
 * @arguments Array of ints
 * @return y=ax+b trend line that a and b
 */
void LeastSquares(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();
    Local<Array> input = Local<Array>::Cast(info[0]);
    const unsigned int length = input->Length();

    unsigned int i;
    int sumX = 0, sumXX = 0;
    double sumY = 0.0, sumXY = 0.0;

    for (i = 1; i <= length; i++)
    {
        sumX += i;
        sumY += input->Get(i - 1)->NumberValue();
        sumXX += (i * i);
        sumXY += (i * input->Get(i - 1)->NumberValue());
    }

    double a = (length * sumXY - sumX * sumY) / (length * sumXX - sumX * sumX);
    double b = (sumY - a * sumX) / length;

    Local<Object> obj = Object::New(isolate);

    obj->Set(String::NewFromUtf8(isolate, "a"),
             Number::New(isolate, a));
    obj->Set(String::NewFromUtf8(isolate, "b"),
             Number::New(isolate, b));

    info.GetReturnValue().Set(obj);
    return;
}

/**
 * Bayes' theorem
 * @arguments Basic possibility / Array of ints
 * @return y=ax+b trend line that a and b
 */
void BayesTheorem(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();
    if (!info[0]->IsNumber())
    {
        Nan::ThrowTypeError("Input 0 shall be a <number>");
        return;
    }
    if (!info[1]->IsArray())
    {
        Nan::ThrowTypeError("Input 1 shall be a <array>");
        return;
    }

    Local<Array> LC = Local<Array>::Cast(info[1]);
    double IL = (double)info[0]->NumberValue();
    double result = IL;
    const unsigned int length = LC->Length();
    unsigned int i;

    for (i = 0; i < length; i++)
    {
        if (LC->Get(i)->NumberValue() < 0 || LC->Get(i)->NumberValue() > 2)
        {
            Nan::ThrowTypeError("Every change media must between 0 and 2");
            return;
        }
        else if (result == 0)
        {
            break;
        }
        double changeMedia = LC->Get(i)->NumberValue();
        result *= changeMedia;
    }

    auto message = Nan::New(result);
    info.GetReturnValue().Set(message);
    return;
}

/**
 * Double Bayes' theorem
 * @arguments Basic possibility / Array of ints
 * @return y=ax+b trend line that a and b
 */
void DoubleBayesTheorem(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();
    if (!info[0]->IsNumber())
    {
        Nan::ThrowTypeError("Input 0 shall be a <number>");
        return;
    }
    if (!info[1]->IsArray())
    {
        Nan::ThrowTypeError("Input 1 shall be a <array>");
        return;
    }

    Local<Array> LC = Local<Array>::Cast(info[1]);
    double IL = (double)info[0]->NumberValue();
    double result = IL;
    const unsigned int length = LC->Length();
    unsigned int i;

    for (i = 0; i < length; i++)
    {
        if (LC->Get(i)->NumberValue() < 0 || LC->Get(i)->NumberValue() > 2)
        {
            Nan::ThrowTypeError("Every change media must between 0 and 2");
            return;
        }
        else if (result == 0)
        {
            break;
        }
        double changeMedia = LC->Get(i)->NumberValue();
        result *= changeMedia;
    }

    auto message = Nan::New(result);
    info.GetReturnValue().Set(message);
    return;
}

void Bezier(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();

    Local<String> source = Local<String>::Cast(info[0]);
    Local<String> target = Local<String>::Cast(info[1]);

    auto message = Nan::New("Bezier").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}
