#include "md5.h"

inline void DDD(const Nan::FunctionCallbackInfo<Value> &info)
{
    auto message = Nan::New("Hello!s").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}