#include <nan.h>
#include <node.h>

using namespace v8;

void kNN(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("kNN!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}