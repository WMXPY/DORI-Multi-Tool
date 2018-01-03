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

/**
 * LeastSquares
 * Input: Array of ints
 * Output: y=ax+b trand line that a and b
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
 * Input: Basic possibility / Array of ints
 * Output: y=ax+b trand line that a and b
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
        double changeMedia = LC->Get(i)->NumberValue();
        result *= changeMedia;
    }

    auto message = Nan::New(result);
    info.GetReturnValue().Set(message);
    return;
}

/**
 * Double Bayes' theorem
 * Input: Basic possibility / Array of ints
 * Output: y=ax+b trand line that a and b
 */
void DoubleBayesTheorem(const Nan::FunctionCallbackInfo<Value> &info)
{
}

void Bezier(const Nan::FunctionCallbackInfo<Value> &info)
{
}