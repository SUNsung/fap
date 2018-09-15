
        
        
    {}  // namespace atom

    
    bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    // static
void Button::BuildPrototype(v8::Isolate* isolate,
                            v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'Button'));
}
    
    template <>
struct Converter<file_dialog::DialogSettings> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::DialogSettings* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    dict.Get('window', &(out->parent_window));
    dict.Get('title', &(out->title));
    dict.Get('message', &(out->message));
    dict.Get('buttonLabel', &(out->button_label));
    dict.Get('nameFieldLabel', &(out->name_field_label));
    dict.Get('defaultPath', &(out->default_path));
    dict.Get('filters', &(out->filters));
    dict.Get('properties', &(out->properties));
    dict.Get('showsTagField', &(out->shows_tag_field));
#if defined(MAS_BUILD)
    dict.Get('securityScopedBookmarks', &(out->security_scoped_bookmarks));
#endif
    return true;
  }
};
    
    namespace api {
    }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    
    {}  // namespace atom
    
    namespace api {
    }
    
    template <>
struct Converter<atom::AtomMenuModel*> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     atom::AtomMenuModel** out) {
    // null would be tranfered to NULL.
    if (val->IsNull()) {
      *out = nullptr;
      return true;
    }
    }
    }
    
    namespace {
class InsecureChannelCredentialsImpl final : public ChannelCredentials {
 public:
  std::shared_ptr<grpc::Channel> CreateChannel(
      const string& target, const grpc::ChannelArguments& args) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_insecure_channel_create(target.c_str(), &channel_args, nullptr));
  }
    }
    }
    
    namespace grpc {
    }
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
            virtual void Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) override;
        virtual void UpdateOnMinibatch(size_t trainingSampleCount) override;
    
            if (sectionShape.Rank() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The section shape '%S' rank (%d) must be <= rank (%d) of 'this' mask.', sectionShape.AsString().c_str(), (int)sectionShape.Rank(), (int)m_maskShape.Rank());
    
            // Did we do a distributed sync?
        // We determine this by checking if the increase in total #samples is > #samples processed by local worker
        auto currentTotalNumSamples = TotalNumberOfSamplesSeen();
        if ((currentTotalNumSamples - prevTotalNumSamples) > currentWorkerNumSamples)
        {
            for (auto& progressWriter : m_progressWriters)
                progressWriter->UpdateDistributedSync(currentTotalNumSamples - m_prevDistributedTotalNumSamples, nullptr);
    }
    
            const NDShape& Shape() const override { return m_unpackedShape; }
        DeviceDescriptor Device() const override { return m_isPacked ? m_packedData->Device() : Value::Device(); }
        DataType GetDataType() const override { return m_isPacked ? m_packedData->GetDataType() : Value::GetDataType(); }
        StorageFormat GetStorageFormat() const override { return m_isPacked? m_packedData->GetStorageFormat() : Value::GetStorageFormat(); }
        bool IsReadOnly() const override { return m_isPacked ? m_packedData->IsReadOnly() : Value::IsReadOnly(); }
    
    
    {        // Creating Composite Data Reader that allow to combine deserializers.
        // This should be changed to link statically when SGD uses the new interfaces.
        wstring ioName = L'ioName';
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    else
    {
        wstring readerType = config(L'readerType', L'Cntk.Deserializers.TextFormat');
        wstring ioName = L'ioName';
        // backward support to use only one type of data reader
        // get the name for the reader we want to use, default to CNTKTextFormatReader
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    
            SetTraceLevel(config[L'traceLevel']);
        SetDeviceId((DEVICEID_TYPE)(int)config[L'deviceId']);
    
            auto dimsA = Input(0)->GetSampleLayout().GetDims();
        auto dimsB = Input(1)->GetSampleLayout().GetDims();
        auto dimsC = Input(2)->GetSampleLayout().GetDims();
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        Base::Validate(isFinalValidationPass);
        InferMBLayoutFromInputsForStandardCase(isFinalValidationPass);
    }