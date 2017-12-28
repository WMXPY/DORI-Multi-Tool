#include <nan.h>
#include <node.h>
#include "./verifys.cc"

NAN_METHOD(Hello)
{
    auto message = Nan::New("Hello from C++!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}

NAN_MODULE_INIT(Initialize)
{
    NAN_EXPORT(target, Hello);
    // From verifys.cc
    NAN_EXPORT(target, IsPrime);
    NAN_EXPORT(target, IsArray);
    NAN_EXPORT(target, IsNumber);
    NAN_EXPORT(target, IsFunction);
    NAN_EXPORT(target, IsString);
    NAN_EXPORT(target, IsObject);
}

NODE_MODULE(fv, Initialize);