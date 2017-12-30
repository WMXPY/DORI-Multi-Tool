#include <nan.h>
#include <node.h>
#include <cmath>

using namespace v8;

struct graphPoint
{
    int x;
    int y;
};

void ArrStatic(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();
    // Local<Array> result = Array::New(isolate);
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

void ColorParser(const Nan::FunctionCallbackInfo<Value> &info)
{
}

graphPoint bezier()
{
}