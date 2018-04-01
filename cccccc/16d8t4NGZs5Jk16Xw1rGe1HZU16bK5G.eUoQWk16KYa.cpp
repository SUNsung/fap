
        
        
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #include <vector>
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_ELTWISE_LAYER_HPP_

    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    struct EvalMAE : public EvalEWiseBase<EvalMAE> {
  const char *Name() const override {
    return 'mae';
  }
  inline bst_float EvalRow(bst_float label, bst_float pred) const {
    return std::abs(label - pred);
  }
};
    
      flatbuffers::Parser conform_parser;
  if (!conform_to_schema.empty()) {
    std::string contents;
    if (!flatbuffers::LoadFile(conform_to_schema.c_str(), true, &contents))
      Error('unable to load schema: ' + conform_to_schema);
    ParseFile(conform_parser, conform_to_schema, contents,
              conform_include_directories);
  }
    
      FixedTypedVector AsFixedTypedVector() const {
    if (IsFixedTypedVector(type_)) {
      uint8_t len = 0;
      auto vtype = ToFixedTypedVectorElementType(type_, &len);
      return FixedTypedVector(Indirect(), byte_width_, vtype, len);
    } else {
      return FixedTypedVector::EmptyFixedTypedVector();
    }
  }
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters);
    
    
    {    auto stream = stub_->SayManyHellos(&context, request_msg);
    while (stream->Read(&response_msg)) {
      const HelloReply *response = response_msg.GetRoot();
      callback(response->message()->str());
    }
    auto status = stream->Finish();
    if (!status.ok()) {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      callback('RPC failed');
    }
  }
    
    // Get the inline-address of a vector element. Useful for Structs (pass Struct
// as template arg), or being able to address a range of scalars in-line.
// Get elem_size from GetTypeSizeInline().
// Note: little-endian data on all platforms, use EndianScalar() instead of
// raw pointer access with scalars).
template<typename T>
T *GetAnyVectorElemAddressOf(const VectorOfAny *vec, size_t i,
                             size_t elem_size) {
  // C-cast to allow const conversion.
  return (T *)(vec->Data() + elem_size * i);
}
    
      // If schemas used contain include statements, call this function for every
  // directory the parser should search them for.
  void AddIncludeDirectory(const char *path) { include_paths_.push_back(path); }
    
    std::string BaseGenerator::GetNameSpace(const Definition &def) const {
  const Namespace *ns = def.defined_namespace;
  if (CurrentNameSpace() == ns) return '';
  std::string qualified_name = qualifying_start_;
  for (auto it = ns->components.begin(); it != ns->components.end(); ++it) {
    qualified_name += *it;
    if ((it + 1) != ns->components.end()) {
      qualified_name += qualifying_separator_;
    }
  }
    }
    
    // End the creator function signature.
static void EndBuilderArgs(std::string *code_ptr) {
  std::string &code = *code_ptr;
  code += '):\n';
}
    
    static LoadFileFunction g_load_file_function = LoadFileRaw;
static FileExistsFunction g_file_exists_function = FileExistsRaw;
    
    int DuplicateFile(int Fd) {
  return dup(Fd);
}
    
      // Parse NumFilesInFirstCorpus.
  if (!std::getline(IS, Line, '\n')) return false;
  std::istringstream L2(Line);
  NumFilesInFirstCorpus = NumFiles + 1;
  L2 >> NumFilesInFirstCorpus;
  if (NumFilesInFirstCorpus > NumFiles) return false;
    
    size_t MutationDispatcher::Mutate_ChangeBinaryInteger(uint8_t *Data,
                                                      size_t Size,
                                                      size_t MaxSize) {
  if (Size > MaxSize) return 0;
  switch (Rand(4)) {
    case 3: return ChangeBinaryInteger<uint64_t>(Data, Size, Rand);
    case 2: return ChangeBinaryInteger<uint32_t>(Data, Size, Rand);
    case 1: return ChangeBinaryInteger<uint16_t>(Data, Size, Rand);
    case 0: return ChangeBinaryInteger<uint8_t>(Data, Size, Rand);
    default: assert(0);
  }
  return 0;
}
    
    #endif  // LLVM_FUZZER_SHA1_H

    
      void StartTraceRecording() {
    if (!Options.UseMemcmp)
      return;
    RecordingMemcmp = Options.UseMemcmp;
    RecordingMemmem = Options.UseMemmem;
    NumMutations = 0;
    InterestingWords.clear();
    MD.ClearAutoDictionary();
  }
    
    bool ExecuteCommandAndReadOutput(const std::string &Command, std::string *Out) {
  FILE *Pipe = OpenProcessPipe(Command.c_str(), 'r');
  if (!Pipe) return false;
  char Buff[1024];
  size_t N;
  while ((N = fread(Buff, 1, sizeof(Buff), Pipe)) > 0)
    Out->append(Buff, N);
  return true;
}
    
          if (sigaction(SIGINT, &IgnoreSignalAction, &OldSigIntAction) == -1) {
        Printf('Failed to ignore SIGINT\n');
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
      if (sigaction(SIGQUIT, &IgnoreSignalAction, &OldSigQuitAction) == -1) {
        Printf('Failed to ignore SIGQUIT\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }