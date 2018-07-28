using namespace v8;

/**
 * Levenshtein Distance 
 */
void Similar(const Nan::FunctionCallbackInfo<Value> &info)
{
    Isolate *isolate = info.GetIsolate();

    Local<String> source = Local<String>::Cast(info[0]);
    Local<String> target = Local<String>::Cast(info[1]);

    auto message = Nan::New("SimilarD").ToLocalChecked();
    info.GetReturnValue().Set(message);
    return;
}
