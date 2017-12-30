#include <node.h>
#include <v8.h>
#include <nan.h>
#include <stdlib.h>

#include "verifys.cc"
#include "calcs.cc"

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
    // From verifys.cc
    exports->Set(Nan::New("IsPrime").ToLocalChecked(), Nan::New<FunctionTemplate>(IsPrime)->GetFunction());
    exports->Set(Nan::New("IsPrimeExample").ToLocalChecked(), Nan::New<FunctionTemplate>(IsPrimeExample)->GetFunction());
    exports->Set(Nan::New("IsArray").ToLocalChecked(), Nan::New<FunctionTemplate>(IsArray)->GetFunction());
    exports->Set(Nan::New("IsNumber").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNumber)->GetFunction());
    exports->Set(Nan::New("IsFunction").ToLocalChecked(), Nan::New<FunctionTemplate>(IsFunction)->GetFunction());
    exports->Set(Nan::New("IsString").ToLocalChecked(), Nan::New<FunctionTemplate>(IsString)->GetFunction());
    exports->Set(Nan::New("IsObject").ToLocalChecked(), Nan::New<FunctionTemplate>(IsObject)->GetFunction());
    exports->Set(Nan::New("IsDate").ToLocalChecked(), Nan::New<FunctionTemplate>(IsDate)->GetFunction());
    exports->Set(Nan::New("IsBoolean").ToLocalChecked(), Nan::New<FunctionTemplate>(IsBoolean)->GetFunction());
    exports->Set(Nan::New("IsNativeError").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNativeError)->GetFunction());
    exports->Set(Nan::New("IsRegExp").ToLocalChecked(), Nan::New<FunctionTemplate>(IsRegExp)->GetFunction());
    exports->Set(Nan::New("IsNull").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNull)->GetFunction());
    exports->Set(Nan::New("IsUndefined").ToLocalChecked(), Nan::New<FunctionTemplate>(IsUndefined)->GetFunction());
    // From calc.cc
    exports->Set(Nan::New("ArrStatic").ToLocalChecked(), Nan::New<FunctionTemplate>(ArrStatic)->GetFunction());
}

/**
 * Hard packaged way with NAN
 */
// NAN_MODULE_INIT(Initialize)
// {

//     NAN_EXPORT(target, Hello);
//     From verifys.cc
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