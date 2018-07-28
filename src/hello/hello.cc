#include <nan.h>
#include <node.h>

using namespace v8;

void Hello(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("Hello!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}

void World(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("World!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}
