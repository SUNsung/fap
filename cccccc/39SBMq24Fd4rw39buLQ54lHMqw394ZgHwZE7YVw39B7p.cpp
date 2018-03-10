
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Given the DSO version number and the driver version file contents, extracts
  // the driver version and compares, warning the user in the case of
  // incompatibility.
  //
  // This is solely used for more informative log messages when the user is
  // running on a machine that happens to have a libcuda/kernel driver mismatch.
  static void WarnOnDsoKernelMismatch(
      port::StatusOr<DriverVersion> dso_version,
      port::StatusOr<DriverVersion> kernel_version);
    
    class RecordWriterOptions {
 public:
  enum CompressionType { NONE = 0, ZLIB_COMPRESSION = 1 };
  CompressionType compression_type = NONE;
    }
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
        // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
    #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    
    {}  // namespace leveldb
    
    
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
      virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MinTopBlobs() const { return 1; }
  virtual inline bool EqualNumBottomTopBlobs() const { return true; }
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    #include <vector>
    
    
    {    cvReleaseMat( &(*state)->preFilteredImg0 );
    cvReleaseMat( &(*state)->preFilteredImg1 );
    cvReleaseMat( &(*state)->slidingSumBuf );
    cvReleaseMat( &(*state)->disp );
    cvReleaseMat( &(*state)->cost );
    cvFree( state );
}
    
        static void CODEGEN_FUNCPTR Switch_VertexAttribI3iv(GLuint index, const GLint *v)
    {
        VertexAttribI3iv = (PFNVERTEXATTRIBI3IVPROC)IntGetProcAddress('glVertexAttribI3iv');
        VertexAttribI3iv(index, v);
    }
    
            // Version: 3.0
        COMPARE_REF_TO_TEXTURE           = 0x884E,
        CLIP_DISTANCE0                   = 0x3000,
        CLIP_DISTANCE1                   = 0x3001,
        CLIP_DISTANCE2                   = 0x3002,
        CLIP_DISTANCE3                   = 0x3003,
        CLIP_DISTANCE4                   = 0x3004,
        CLIP_DISTANCE5                   = 0x3005,
        CLIP_DISTANCE6                   = 0x3006,
        CLIP_DISTANCE7                   = 0x3007,
        MAX_CLIP_DISTANCES               = 0x0D32,
        MAJOR_VERSION                    = 0x821B,
        MINOR_VERSION                    = 0x821C,
        NUM_EXTENSIONS                   = 0x821D,
        CONTEXT_FLAGS                    = 0x821E,
        COMPRESSED_RED                   = 0x8225,
        COMPRESSED_RG                    = 0x8226,
        CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x0001,
        RGBA32F                          = 0x8814,
        RGB32F                           = 0x8815,
        RGBA16F                          = 0x881A,
        RGB16F                           = 0x881B,
        VERTEX_ATTRIB_ARRAY_INTEGER      = 0x88FD,
        MAX_ARRAY_TEXTURE_LAYERS         = 0x88FF,
        MIN_PROGRAM_TEXEL_OFFSET         = 0x8904,
        MAX_PROGRAM_TEXEL_OFFSET         = 0x8905,
        CLAMP_READ_COLOR                 = 0x891C,
        FIXED_ONLY                       = 0x891D,
        TEXTURE_1D_ARRAY                 = 0x8C18,
        PROXY_TEXTURE_1D_ARRAY           = 0x8C19,
        TEXTURE_2D_ARRAY                 = 0x8C1A,
        PROXY_TEXTURE_2D_ARRAY           = 0x8C1B,
        TEXTURE_BINDING_1D_ARRAY         = 0x8C1C,
        TEXTURE_BINDING_2D_ARRAY         = 0x8C1D,
        R11F_G11F_B10F                   = 0x8C3A,
        UNSIGNED_INT_10F_11F_11F_REV     = 0x8C3B,
        RGB9_E5                          = 0x8C3D,
        UNSIGNED_INT_5_9_9_9_REV         = 0x8C3E,
        TEXTURE_SHARED_SIZE              = 0x8C3F,
        TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76,
        TRANSFORM_FEEDBACK_BUFFER_MODE   = 0x8C7F,
        MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80,
        TRANSFORM_FEEDBACK_VARYINGS      = 0x8C83,
        TRANSFORM_FEEDBACK_BUFFER_START  = 0x8C84,
        TRANSFORM_FEEDBACK_BUFFER_SIZE   = 0x8C85,
        PRIMITIVES_GENERATED             = 0x8C87,
        TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88,
        RASTERIZER_DISCARD               = 0x8C89,
        MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A,
        MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B,
        INTERLEAVED_ATTRIBS              = 0x8C8C,
        SEPARATE_ATTRIBS                 = 0x8C8D,
        TRANSFORM_FEEDBACK_BUFFER        = 0x8C8E,
        TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F,
        RGBA32UI                         = 0x8D70,
        RGB32UI                          = 0x8D71,
        RGBA16UI                         = 0x8D76,
        RGB16UI                          = 0x8D77,
        RGBA8UI                          = 0x8D7C,
        RGB8UI                           = 0x8D7D,
        RGBA32I                          = 0x8D82,
        RGB32I                           = 0x8D83,
        RGBA16I                          = 0x8D88,
        RGB16I                           = 0x8D89,
        RGBA8I                           = 0x8D8E,
        RGB8I                            = 0x8D8F,
        RED_INTEGER                      = 0x8D94,
        GREEN_INTEGER                    = 0x8D95,
        BLUE_INTEGER                     = 0x8D96,
        RGB_INTEGER                      = 0x8D98,
        RGBA_INTEGER                     = 0x8D99,
        BGR_INTEGER                      = 0x8D9A,
        BGRA_INTEGER                     = 0x8D9B,
        SAMPLER_1D_ARRAY                 = 0x8DC0,
        SAMPLER_2D_ARRAY                 = 0x8DC1,
        SAMPLER_1D_ARRAY_SHADOW          = 0x8DC3,
        SAMPLER_2D_ARRAY_SHADOW          = 0x8DC4,
        SAMPLER_CUBE_SHADOW              = 0x8DC5,
        UNSIGNED_INT_VEC2                = 0x8DC6,
        UNSIGNED_INT_VEC3                = 0x8DC7,
        UNSIGNED_INT_VEC4                = 0x8DC8,
        INT_SAMPLER_1D                   = 0x8DC9,
        INT_SAMPLER_2D                   = 0x8DCA,
        INT_SAMPLER_3D                   = 0x8DCB,
        INT_SAMPLER_CUBE                 = 0x8DCC,
        INT_SAMPLER_1D_ARRAY             = 0x8DCE,
        INT_SAMPLER_2D_ARRAY             = 0x8DCF,
        UNSIGNED_INT_SAMPLER_1D          = 0x8DD1,
        UNSIGNED_INT_SAMPLER_2D          = 0x8DD2,
        UNSIGNED_INT_SAMPLER_3D          = 0x8DD3,
        UNSIGNED_INT_SAMPLER_CUBE        = 0x8DD4,
        UNSIGNED_INT_SAMPLER_1D_ARRAY    = 0x8DD6,
        UNSIGNED_INT_SAMPLER_2D_ARRAY    = 0x8DD7,
        QUERY_WAIT                       = 0x8E13,
        QUERY_NO_WAIT                    = 0x8E14,
        QUERY_BY_REGION_WAIT             = 0x8E15,
        QUERY_BY_REGION_NO_WAIT          = 0x8E16,
        BUFFER_ACCESS_FLAGS              = 0x911F,
        BUFFER_MAP_LENGTH                = 0x9120,
        BUFFER_MAP_OFFSET                = 0x9121,
    
    #include <string>
#include <vector>
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    UsageTimer::Result UsageTimer::Mark() const {
  Result s = Sample();
  Result r;
  r.wall = s.wall - start_.wall;
  r.user = s.user - start_.user;
  r.system = s.system - start_.system;
  r.total_cpu_time = s.total_cpu_time - start_.total_cpu_time;
  r.idle_cpu_time = s.idle_cpu_time - start_.idle_cpu_time;
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
        if (!NodeNameExists(toName))
    {
        pToNode = pFromNode->Duplicate(toName, flags);
        AddNodeToNet(pToNode);
    }
    else
    {
        // node already exists
        pToNode = GetNodeFromName(toName);
    }
    
    
    {    // SaveMapping - save a map into the file
    // saveId - name of the section to save into (section:subsection format)
    // labelMapping - map we are saving to the file
    virtual void SaveMapping(std::wstring saveId, const std::map<typename BinaryWriter<ElemType>::LabelIdType, typename BinaryWriter<ElemType>::LabelType>& labelMapping);
    virtual bool SupportMultiUtterances() const 
    {
        return false;
    };
};
    
    void GranularGPUDataTransferer::WaitForSyncPointOnFetchStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetFetchStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
    template class NDLUtil<float>;
template class NDLUtil<double>;
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
    #ifndef STORAGE_LEVELDB_DB_SNAPSHOT_H_
#define STORAGE_LEVELDB_DB_SNAPSHOT_H_
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
    
  // Iterator interface methods
  bool Valid() const        { return valid_; }
  Slice key() const         { assert(Valid()); return key_; }
  Slice value() const       { assert(Valid()); return iter_->value(); }
  // Methods below require iter() != NULL
  Status status() const     { assert(iter_); return iter_->status(); }
  void Next()               { assert(iter_); iter_->Next();        Update(); }
  void Prev()               { assert(iter_); iter_->Prev();        Update(); }
  void Seek(const Slice& k) { assert(iter_); iter_->Seek(k);       Update(); }
  void SeekToFirst()        { assert(iter_); iter_->SeekToFirst(); Update(); }
  void SeekToLast()         { assert(iter_); iter_->SeekToLast();  Update(); }
    
    #include 'leveldb/comparator.h'
#include 'leveldb/iterator.h'
#include 'table/iterator_wrapper.h'
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
    TEST(MetaInfo, GetSet) {
  xgboost::MetaInfo info;
    }
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << ' 321 ';
  ss >> vals_in;
  EXPECT_EQ(vals_in[0], 321);
    
    
    {
    {void SparsePage::Writer::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(out_page->get() == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    namespace xgboost {
namespace metric {
// tag the this file, used by force static link later.
DMLC_REGISTRY_FILE_TAG(elementwise_metric);
    }
    }
    
    
    {  // Add new data and corrupt it
  ASSERT_OK(writable_file->Append(kCorrupted));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size() + kCorrupted.size());
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kCorrupted), 0);
  // Corrupted
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_NE(result.compare(kCorrupted), 0);
}
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
    Q.Score is a measure of quality of the hash function.
It depends on successfully passing SMHasher test set.
10 is a perfect score.
*/
    
    
    {  if (0 == r && 0 == kvs.size()) {
    return Status::NotFound();
  } else if (0 == r && 0 != kvs.size()) {
    fid.assign(kvs[fname].c_str(), kvs[fname].length());
    return Status::OK();
  } else {
    return err_to_status(r);
  }
}
    
        std::string log_line = 'ADD - ';
    log_line += key.ToString(true);
    log_line += ' - ';
    AppendNumberTo(&log_line, size);
  // @lint-ignore TXT2 T25377293 Grandfathered in
		log_line += '\n';