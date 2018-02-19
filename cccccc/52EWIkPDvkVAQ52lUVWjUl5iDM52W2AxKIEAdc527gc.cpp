
    {}  // namespace nw

    
    namespace nwapi {
    }
    
      v8::Handle<v8::String> source = v8::String::NewExternal(isolate,
                                                          new extensions::StaticV8ExternalOneByteStringResource(
          GetStringResource(resource_id)));
  v8::Handle<v8::String> wrapped_source = WrapSource(source);
    
    
    {} // namespace nwapi

    
    #include <map>
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
      gfx::Point* point = reinterpret_cast<gfx::Point*>(userdata);
  *x = point->x();
  *y = point->y();
    
    
#define REGISTER_LAYER_CREATOR(type, creator)                                  \
  static LayerRegisterer<float> g_creator_f_##type(#type, creator<float>);     \
  static LayerRegisterer<double> g_creator_d_##type(#type, creator<double>)    \
    
    #include <vector>
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    
    {  m_arrTypes.resize(builder.m_impl->nextId);
  for (auto& ty : builder.m_impl->types) {
    assert(m_arrTypes[ty->id()] == nullptr);
    m_arrTypes[ty->id()] = ty;
  }
  if (debug) {
    for (auto& t : m_arrTypes) {
      always_assert(t != nullptr);
    }
  }
}
    
    double TimeStamp::CurrentSecond() {
  auto now_ns = gettime_ns(CLOCK_REALTIME);
  using DoubleSeconds =
    std::chrono::duration<double, std::chrono::seconds::period>;
  auto now_double_secs = DoubleSeconds(std::chrono::nanoseconds(now_ns));
  return now_double_secs.count();
}
    
    
    {  /**
   * Check active threads and queued requests
   */
  static int GetActiveWorker();
  static int GetQueuedJobs();
};
    
    
    {  return false;
}
    
      std::string toString() const;
    
    /*
 * Get the successors of a block or instruction.  If given a non-const
 * reference, the resulting Range will allow mutation of the Vlabels.
 */
folly::Range<Vlabel*> succs(Vinstr& inst);
folly::Range<Vlabel*> succs(Vblock& block);
folly::Range<const Vlabel*> succs(const Vinstr& inst);
folly::Range<const Vlabel*> succs(const Vblock& block);
    
                // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    
        InvalidateCompiledNetwork();
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    #include <string>
    
    /// Remove a range of keys in domain.
Status deleteDatabaseRange(const std::string& domain,
                           const std::string& low,
                           const std::string& high);
    
    /**
 * @brief Initialize the extensions socket path variable for osqueryi.
 *
 * If the shell is invoked with a default extensions_socket flag there is a
 * chance the path is 'overloaded' by multiple shells, use this method to
 * determine a unique user-local path.
 *
 * @param home to user's home directory.
 */
void initShellSocket(const std::string& home);
    
    struct FlagInfo {
  std::string type;
  std::string description;
  std::string default_value;
  std::string value;
  FlagDetail detail;
};
    
    /// Database domain where we store carve table entries
const std::string kCarveDbDomain = 'carves';
    
    /// Prefix used for posix tar archive.
const std::string kTestCarveNamePrefix = 'carve_';
    
    Status TLSConfigPlugin::genConfig(std::map<std::string, std::string>& config) {
  std::string json;
  pt::ptree params;
  if (FLAGS_tls_node_api) {
    // The TLS node API morphs some verbs and variables.
    params.put('_get', true);
  }
    }
    
            ok &= luaval_to_number(tolua_S, 4,&arg2, 'cc.SimpleAudioEngine:playEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
            return 0;
        }
        unsigned int ret = cobj->playEffect(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 4) 
    {
        const char* arg0;
        bool arg1;
        double arg2;
        double arg3;
    
    
    {    virtual void DrawAABB(b2AABB* aabb, const b2Color& color);
};
    
    
    {	b2Vec2 m_point;
	b2Fixture* m_fixture;
};
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
        // store least bin id for each feature
    index_base_.resize(nfeature);
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      index_base_[fid] = gmat.cut->row_ptr[fid];
    }
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, dense_libsvm, data::CreateDenseLibSVMParser<uint32_t>);
}  // namespace dmlc

    
      delete ObjectWrap::Unwrap<DBWrapper>(args.This());
    
    
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
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
    
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
      // If hash index lookup is enabled and `use_hash_index` is true. This block
  // will do hash lookup for the key prefix.
  //
  // NOTE: for the hash based lookup, if a key prefix doesn't match any key,
  // the iterator will simply be set as 'invalid', rather than returning
  // the key that is just pass the target key.
  //
  // If iter is null, return new Iterator
  // If iter is not null, update this one and return it as Iterator*
  //
  // If total_order_seek is true, hash_index_ and prefix_index_ are ignored.
  // This option only applies for index block. For data block, hash_index_
  // and prefix_index_ are null, so this option does not matter.
  BlockIter* NewIterator(const Comparator* comparator,
                         BlockIter* iter = nullptr,
                         bool total_order_seek = true,
                         Statistics* stats = nullptr);
  void SetBlockPrefixIndex(BlockPrefixIndex* prefix_index);
    
    
    {    StopLoggingInternal();
  }