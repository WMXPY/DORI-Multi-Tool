#include <nan.h>
#include <node.h>

NAN_METHOD(Hello)
{
    auto message = Nan::New("Hello from C++!").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}

NAN_METHOD(IsPrime)
{
    if (!info[0]->IsNumber())
    {
        Nan::ThrowTypeError("Input shall be a <number>");
        return;
    }

    int number = (int)info[0]->NumberValue();

    if (number <= 2)
    {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
    else
    {
        int i;
        for (i = 3; i < number; i++)
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

NAN_MODULE_INIT(Initialize)
{
    NAN_EXPORT(target, Hello);
    NAN_EXPORT(target, IsPrime);
    NAN_EXPORT(target, IsArray);
    NAN_EXPORT(target, IsNumber);
    NAN_EXPORT(target, IsFunction);
    NAN_EXPORT(target, IsString);
    NAN_EXPORT(target, IsObject);
}

NODE_MODULE(fv, Initialize);