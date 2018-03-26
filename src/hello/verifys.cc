#include <nan.h>
#include <node.h>
#include <cmath>

using namespace v8;

void IsArray(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsArray())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsPrime(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (!info[0]->IsNumber())
    {
        Nan::ThrowTypeError("Input shall be a <number>");
        return;
    }

    int number = (int)info[0]->NumberValue();

    if (number < 2)
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
    else if (number == 2)
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        float temp = static_cast<float>(number);
        unsigned int mid = static_cast<int>(sqrt(temp));
        unsigned int i;
        for (i = 3; i <= mid; i += 2)
        {
            if (number % i == 0)
            {
                break;
            }
        }
        if (i > mid)
        {
            info.GetReturnValue().Set(Nan::True());
            return;
        }
    }
    info.GetReturnValue().Set(Nan::False());
    return;
}

void IsPrimeExample(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (!info[0]->IsNumber())
    {
        Nan::ThrowTypeError("Input shall be a <number>");
        return;
    }

    int number = (int)info[0]->NumberValue();

    if (number < 2)
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
    else
    {
        int i;
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                info.GetReturnValue().Set(Nan::False());
                return;
            }
        }
    }
    info.GetReturnValue().Set(Nan::True());
    return;
}

void IsNumber(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsNumber())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsFunction(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsFunction())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsString(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsString())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsObject(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsObject())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsDate(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsDate())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsBoolean(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsBoolean())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsNativeError(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsNativeError())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsRegExp(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsRegExp())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsNull(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsNull())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}

void IsUndefined(const Nan::FunctionCallbackInfo<Value> &info)
{
    if (info[0]->IsUndefined())
    {
        info.GetReturnValue().Set(Nan::True());
        return;
    }
    else
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
}
