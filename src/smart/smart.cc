#include <nan.h>
#include <node.h>

using namespace v8;

void Similar(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("Similar!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}
