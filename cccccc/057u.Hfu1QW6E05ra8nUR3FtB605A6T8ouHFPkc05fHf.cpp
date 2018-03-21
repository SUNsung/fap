
        
          /// Build the components of an Objective-C method descriptor for the given
  /// subscript's method implementations.
  void emitObjCSetterDescriptorParts(IRGenModule &IGM,
                                     SubscriptDecl *subscript,
                                     llvm::Constant *&selectorRef,
                                     llvm::Constant *&atEncoding,
                                     llvm::Constant *&impl);
    
    
    {
    {    for (auto *FU : mod->getFiles()) {
      switch (FU->getKind()) {
      case FileUnitKind::Source:
      case FileUnitKind::Derived:
      case FileUnitKind::Builtin:
        break;
      case FileUnitKind::SerializedAST:
      case FileUnitKind::ClangModule: {
        auto *LFU = cast<LoadedFile>(FU);
        if (auto *F = fileMgr.getFile(LFU->getFilename())) {
          std::string moduleName = mod->getNameStr();
          bool withoutUnitName = true;
          if (FU->getKind() == FileUnitKind::ClangModule) {
            withoutUnitName = false;
            auto clangModUnit = cast<ClangModuleUnit>(LFU);
            if (auto clangMod = clangModUnit->getUnderlyingClangModule()) {
              moduleName = clangMod->getTopLevelModuleName();
              // FIXME: clang's -Rremarks do not seem to go through Swift's
              // diagnostic emitter.
              clang::index::emitIndexDataForModuleFile(clangMod,
                                                       clangCI, unitWriter);
            }
          } else {
            // Serialized AST file.
            // Only index system modules (essentially stdlib and overlays).
            // We don't officially support binary swift modules, so normally
            // the index data for user modules would get generated while
            // building them.
            if (mod->isSystemModule() && indexSystemModules) {
              emitDataForSwiftSerializedModule(mod, indexStorePath,
                                               indexSystemModules,
                                               targetTriple, clangCI, diags,
                                               unitWriter);
              withoutUnitName = false;
            }
          }
          clang::index::writer::OpaqueModule opaqMod =
              moduleNameScratch.createString(moduleName);
          unitWriter.addASTFileDependency(F, mod->isSystemModule(), opaqMod,
                                          withoutUnitName);
        }
        break;
      }
      }
    }
  }
}
    
    
    {
    {}
}
#endif

    
    /// Create a canonicalized substitution list from subs.
/// subs is the substitution list to be canonicalized.
/// canSubs is an out-parameter, which is used to store the results in case
/// the list of substitutions was not canonical.
/// The function returns a list of canonicalized substitutions.
/// If the substitution list subs was canonical already, it will be returned and
/// canSubs out-parameter will be empty.
/// If something had to be canonicalized, then the canSubs out-parameter will be
/// populated and the returned SubstitutionList would refer to canSubs storage.
SubstitutionList
getCanonicalSubstitutionList(SubstitutionList subs,
                             SmallVectorImpl<Substitution> &canSubs);
    
      IndexSymbol() = default;
    
      SourceLoc getCodeCompletionLoc() const;
    
    #endif // SWIFT_SYNTAX_REFERENCES_H

    
    
    {    // passthrough
    bool empty() const              { return m.empty(); }
    size_type size() const          { return m.size(); }
    size_type max_size() const      { return m.max_size(); }
    void clear()                    { m.clear(); }
    iterator begin()                { return m.begin(); }
    iterator end()                  { return m.end(); }
    const_iterator begin() const    { return m.begin(); }
    const_iterator end() const      { return m.end(); }
    const_iterator cbegin() const   { return m.cbegin(); }
    const_iterator cend() const     { return m.cend(); }
};
    
        // Finish and check for file errors
    if (s.ok()) {
      s = file->Sync();
    }
    if (s.ok()) {
      s = file->Close();
    }
    delete file;
    file = NULL;
    
    void leveldb_options_set_create_if_missing(
    leveldb_options_t* opt, unsigned char v) {
  opt->rep.create_if_missing = v;
}
    
      void PrintHeader() {
    const int kKeySize = 16;
    PrintEnvironment();
    fprintf(stdout, 'Keys:       %d bytes each\n', kKeySize);
    fprintf(stdout, 'Values:     %d bytes each (%d bytes after compression)\n',
            FLAGS_value_size,
            static_cast<int>(FLAGS_value_size * FLAGS_compression_ratio + 0.5));
    fprintf(stdout, 'Entries:    %d\n', num_);
    fprintf(stdout, 'RawSize:    %.1f MB (estimated)\n',
            ((static_cast<int64_t>(kKeySize + FLAGS_value_size) * num_)
             / 1048576.0));
    fprintf(stdout, 'FileSize:   %.1f MB (estimated)\n',
            (((kKeySize + FLAGS_value_size * FLAGS_compression_ratio) * num_)
             / 1048576.0));
    PrintWarnings();
    fprintf(stdout, '------------------------------------------------\n');
  }
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
      // Adds a creator.
  static void AddCreator(const string& type, Creator creator) {
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 0)
        << 'Layer type ' << type << ' already registered.';
    registry[type] = creator;
  }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #include <vector>
    
    #endif  // CAFFE_ELTWISE_LAYER_HPP_

    
    #include 'caffe/layers/neuron_layer.hpp'
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    std::string GetDbFileContent(int argc, char** argv);
    
    class PythonGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  PythonGrpcGenerator(const GeneratorConfiguration& config);
  ~PythonGrpcGenerator();
    }
    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    grpc::string SecureAuthContext::GetPeerIdentityPropertyName() const {
  if (!ctx_) {
    return '';
  }
  const char* name = grpc_auth_context_peer_identity_property_name(ctx_);
  return name == nullptr ? '' : name;
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    
    {  gpr_subprocess* const subprocess_;
};
    
    inline
static void ErrorCheck(int status) {
  if (status != SQLITE_OK) {
    fprintf(stderr, 'sqlite3 error: status = %d\n', status);
    exit(1);
  }
}
    
      // create second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key2(i), 'value for range 2 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
      iter->Seek('5');
  ASSERT_EQ(iter->key().ToString(), '5');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '3');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '5');
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
    
            case 1: {
          if (kVerbose) fprintf(stderr, 'SeekToFirst\n');
          iter->SeekToFirst();
          model_iter = data.begin();
          ASSERT_EQ(ToString(data, model_iter), ToString(iter));
          break;
        }
    
    static int NextLength(int length) {
  if (length < 10) {
    length += 1;
  } else if (length < 100) {
    length += 10;
  } else if (length < 1000) {
    length += 100;
  } else {
    length += 1000;
  }
  return length;
}
    
    bool GetVarint64(Slice* input, uint64_t* value) {
  const char* p = input->data();
  const char* limit = p + input->size();
  const char* q = GetVarint64Ptr(p, limit, value);
  if (q == NULL) {
    return false;
  } else {
    *input = Slice(q, limit - q);
    return true;
  }
}
    
        while (-1 != __ParseStack(stream, state, strcache, strstack)) {
        if (!_processname.empty() && std::string::npos == strstack.find(processname, 0)) {
            strstack.clear();
            continue;
        }
    }
    
      private:
    CommFrequencyLimit(CommFrequencyLimit&);
    CommFrequencyLimit& operator=(CommFrequencyLimit&);
    
    
    {  private:
//    int m_t;
};
    
    jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const AutoBuffer& ab);
jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const void* _buffer, size_t _length);
void JNU_FreeJbyteArray(JNIEnv* _env, jbyteArray bytes);