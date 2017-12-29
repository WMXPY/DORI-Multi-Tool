#include <nan.h>
#include <node.h>

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