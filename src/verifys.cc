#include <nan.h>
#include <node.h>
#include <cmath>

NAN_METHOD(IsArray)
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

NAN_METHOD(IsPrime)
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
        int mid = static_cast<int>(sqrt(temp));
        int i;
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

NAN_METHOD(IsPrimeExample)
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

NAN_METHOD(IsNumber)
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

NAN_METHOD(IsFunction)
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

NAN_METHOD(IsString)
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

NAN_METHOD(IsObject)
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

NAN_METHOD(IsDate)
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

NAN_METHOD(IsBoolean)
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

NAN_METHOD(IsNativeError)
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

NAN_METHOD(IsRegExp)
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

NAN_METHOD(IsNull)
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

NAN_METHOD(IsUndefined)
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

