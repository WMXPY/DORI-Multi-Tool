#include <node.h>
#include <v8.h>
#include <nan.h>

#include "verifys.cc"

using namespace v8;

/**
 * Without NAN
 */
// Handle<Value> Hello(const Arguments &args)
// {
//     HandleScope scope;
//     return scope.Close(String::New("Hello from C++!"));
// }

/**
 * Hard packaged way with NAN
 */
// NAN_METHOD(Hello)
// {
//     auto message = Nan::New("Hello!").ToLocalChecked();
//     info.GetReturnValue().Set(message);
//     return;
// }

/**
 * With Nan
 */
void Hello(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("Hello!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}

/**
 * Without NAN
 */
// void init(Handle<object> target)
// {
//     NODE_SET_METHOD(target, "Hello", Hello);
// }

/**
 * With NAN
 */
void Init(Local<Object> exports)
{
    exports->Set(Nan::New("Hello").ToLocalChecked(), Nan::New<FunctionTemplate>(Hello)->GetFunction());
}

/**
 * Hard packaged way with NAN
 */
// NAN_MODULE_INIT(Initialize)
// {

//     // NAN_EXPORT(target, Hello);
//     // From verifys.cc
//     NAN_EXPORT(target, IsPrime);
//     NAN_EXPORT(target, IsPrimeExample);
//     NAN_EXPORT(target, IsArray);
//     NAN_EXPORT(target, IsNumber);
//     NAN_EXPORT(target, IsFunction);
//     NAN_EXPORT(target, IsString);
//     NAN_EXPORT(target, IsObject);
//     NAN_EXPORT(target, IsDate);
//     NAN_EXPORT(target, IsBoolean);
//     NAN_EXPORT(target, IsNativeError);
//     NAN_EXPORT(target, IsRegExp);
//     NAN_EXPORT(target, IsNull);
//     NAN_EXPORT(target, IsUndefined);
// }

/**
 * Without NAN
 */
// NODE_MODULE(fv, init);

/**
 * With NAN
 */
NODE_MODULE(fv, Init);