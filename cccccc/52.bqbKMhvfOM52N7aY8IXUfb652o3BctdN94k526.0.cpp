
        
            Status Model::LoadFromBytes(int count, void *pBytes, /*out*/ std::shared_ptr<Model>* p_model)
    {
        std::unique_ptr<ModelProto> modelProto(new ModelProto);
        bool result = modelProto->ParseFromArray(pBytes, count);
        if (!result)
        {
            return Status(ONNX, INVALID_PROTOBUF, 'Protobuf parsing failed.');
        }
    }
    
                // Get formal parameter description.
            const std::string& GetDescription() const;
    
            const Status& Status::OK()
        {
            static Status s_ok;
            return s_ok;
        }
    
            bool OpUtils::IsValidDataTypeString(const std::string& p_dataType)
        {
            TypesWrapper& t = TypesWrapper::GetTypesWrapper();
            const auto& allowedSet = t.GetAllowedDataTypes();
            return (allowedSet.find(p_dataType) != allowedSet.end());
        }
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorActivationArgs() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Attr('activation_alpha',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
            schema.Attr('activation_beta',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
        };
    }
    
        // Gets data for the sequence.
    virtual void GetSequence(size_t sequenceId, vector<SequenceDataPtr>& result) override
    {
        m_parent->GetSequenceById(m_chunkId, sequenceId, result);
    }
    
        // Now we can be sure, no prefetch thread is running and there are no outstanding memcopies.
    // Let's check that requested devices are ok and see whether we need to change our data transferers.
    auto device = std::find_if(inputs.begin(), inputs.end(),
        [](const InputStreamDescription& d) { return d.GetDeviceId() != CPUDEVICE; });
    auto deviceId = device != inputs.end() ? device->GetDeviceId() : CPUDEVICE;
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
#endif

    
    class BodyTypes : public Test
{
public:
	BodyTypes()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    }
    
      for (std::vector<int>::size_type i = 0; i < cfs.size(); i++) {
    families.push_back(rocksdb::ColumnFamilyDescriptor(
        cfs[i], rocksdb::ColumnFamilyOptions()));
  }
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
      bool BinarySeek(const Slice& target, uint32_t left, uint32_t right,
                  uint32_t* index);
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
      virtual std::string GetPrintableOptions() const override {
    std::string ret;
    ret.reserve(20000);
    ret.append('    cache_options:\n');
    ret.append(cache_->GetPrintableOptions());
    ret.append('    sim_cache_options:\n');
    ret.append(key_only_cache_->GetPrintableOptions());
    return ret;
  }
    
    
    {    CopyOrCreateWorkItem(std::string _src_path, std::string _dst_path,
                         std::string _contents, Env* _src_env, Env* _dst_env,
                         bool _sync, RateLimiter* _rate_limiter,
                         uint64_t _size_limit,
                         std::function<void()> _progress_callback = []() {})
        : src_path(std::move(_src_path)),
          dst_path(std::move(_dst_path)),
          contents(std::move(_contents)),
          src_env(_src_env),
          dst_env(_dst_env),
          sync(_sync),
          rate_limiter(_rate_limiter),
          size_limit(_size_limit),
          progress_callback(_progress_callback) {}
  };
    
    
    {  // Return true if the current MemTableRep supports detecting duplicate
  // <key,seq> at insertion time. If true, then MemTableRep::Insert* returns
  // false when if the <key,seq> already exists.
  // Default: false
  virtual bool CanHandleDuplicatedKey() const { return false; }
};
    
    void PrintSourceServerMethod(grpc_generator::Printer *printer,
                             const grpc_generator::Method *method,
                             std::map<grpc::string, grpc::string> *vars) {
  (*vars)['Method'] = method->name();
  (*vars)['Request'] = method->input_type_name();
  (*vars)['Response'] = method->output_type_name();
  if (method->NoStreaming()) {
    printer->Print(*vars,
                   '::grpc::Status $ns$$Service$::Service::$Method$('
                   '::grpc::ServerContext* context, '
                   'const $Request$* request, $Response$* response) {\n');
    printer->Print('  (void) context;\n');
    printer->Print('  (void) request;\n');
    printer->Print('  (void) response;\n');
    printer->Print(
        '  return ::grpc::Status('
        '::grpc::StatusCode::UNIMPLEMENTED, \'\');\n');
    printer->Print('}\n\n');
  } else if (ClientOnlyStreaming(method)) {
    printer->Print(*vars,
                   '::grpc::Status $ns$$Service$::Service::$Method$('
                   '::grpc::ServerContext* context, '
                   '::grpc::ServerReader< $Request$>* reader, '
                   '$Response$* response) {\n');
    printer->Print('  (void) context;\n');
    printer->Print('  (void) reader;\n');
    printer->Print('  (void) response;\n');
    printer->Print(
        '  return ::grpc::Status('
        '::grpc::StatusCode::UNIMPLEMENTED, \'\');\n');
    printer->Print('}\n\n');
  } else if (ServerOnlyStreaming(method)) {
    printer->Print(*vars,
                   '::grpc::Status $ns$$Service$::Service::$Method$('
                   '::grpc::ServerContext* context, '
                   'const $Request$* request, '
                   '::grpc::ServerWriter< $Response$>* writer) {\n');
    printer->Print('  (void) context;\n');
    printer->Print('  (void) request;\n');
    printer->Print('  (void) writer;\n');
    printer->Print(
        '  return ::grpc::Status('
        '::grpc::StatusCode::UNIMPLEMENTED, \'\');\n');
    printer->Print('}\n\n');
  } else if (method->BidiStreaming()) {
    printer->Print(*vars,
                   '::grpc::Status $ns$$Service$::Service::$Method$('
                   '::grpc::ServerContext* context, '
                   '::grpc::ServerReaderWriter< $Response$, $Request$>* '
                   'stream) {\n');
    printer->Print('  (void) context;\n');
    printer->Print('  (void) stream;\n');
    printer->Print(
        '  return ::grpc::Status('
        '::grpc::StatusCode::UNIMPLEMENTED, \'\');\n');
    printer->Print('}\n\n');
  }
}
    
    class FlatCompiler {
 public:
  // Output generator for the various programming languages and formats we
  // support.
  struct Generator {
    typedef bool (*GenerateFn)(const flatbuffers::Parser &parser,
                               const std::string &path,
                               const std::string &file_name);
    typedef std::string (*MakeRuleFn)(const flatbuffers::Parser &parser,
                                      const std::string &path,
                                      const std::string &file_name);
    }
    }
    
      // Generate text from an arbitrary FlatBuffer by looking up its
  // file_identifier in the registry.
  bool FlatBufferToText(const uint8_t *flatbuf, size_t len, std::string *dest) {
    // Get the identifier out of the buffer.
    // If the buffer is truncated, exit.
    if (len < sizeof(uoffset_t) + FlatBufferBuilder::kFileIdentifierLength) {
      lasterror_ = 'buffer truncated';
      return false;
    }
    std::string ident(
        reinterpret_cast<const char *>(flatbuf) + sizeof(uoffset_t),
        FlatBufferBuilder::kFileIdentifierLength);
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(ident, &parser)) return false;
    // Now we're ready to generate text.
    if (!GenerateText(parser, flatbuf, dest)) {
      lasterror_ = 'unable to generate text for FlatBuffer binary';
      return false;
    }
    return true;
  }
    
      // ** file/network code goes here :) **
  // access builder.GetBufferPointer() for builder.GetSize() bytes
    
    static std::string GenGetter(const Type &type);
static std::string GenMethod(const FieldDef &field);
static void GenStructBuilder(const StructDef &struct_def,
                             std::string *code_ptr);
static void GenReceiver(const StructDef &struct_def, std::string *code_ptr);
static std::string GenTypeBasic(const Type &type);
static std::string GenTypeGet(const Type &type);
static std::string TypeName(const FieldDef &field);