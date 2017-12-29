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
    NAN_EXPORT(target, IsPrimeExample);
    NAN_EXPORT(target, IsArray);
    NAN_EXPORT(target, IsNumber);
    NAN_EXPORT(target, IsFunction);
    NAN_EXPORT(target, IsString);
    NAN_EXPORT(target, IsObject);
    NAN_EXPORT(target, IsDate);
    NAN_EXPORT(target, IsBoolean);
    NAN_EXPORT(target, IsNativeError);
    NAN_EXPORT(target, IsRegExp);
    NAN_EXPORT(target, IsNull);
    NAN_EXPORT(target, IsUndefined);
}

NODE_MODULE(fv, Initialize);