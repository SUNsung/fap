
        
        
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
    
    {}
    
    #endif // SWIFT_INDEX_INDEXDATACONSUMER_H

    
    /**
 * Disables or enables auto flush. By default, data is flushed after
 * every bidirectional_stream_write(). If the auto flush is disabled,
 * the client should explicitly call bidirectional_stream_flush to flush
 * the data.
 */
GRPC_SUPPORT_EXPORT void bidirectional_stream_disable_auto_flush(
    bidirectional_stream* stream,
    bool disable_auto_flush);
    
    
    {  GetReporter()->ReportQPSPerCore(*result);
  GetReporter()->ReportLatency(*result);
}
    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
      // gRPC Python
  grpc_python_generator::GeneratorConfiguration grpc_py_config;
  grpc_python_generator::PythonGrpcGenerator grpc_py_generator(grpc_py_config);
  cli.RegisterGenerator('--grpc_python_out', &grpc_py_generator,
                        'Generate Python source file.');
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying'', nullptr);
            return 0;
        }
        bool ret = cobj->isBackgroundMusicPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:isBackgroundMusicPlaying',argc, 0);
    return 0;
    
    
#endif // __cocos2dx_experimental_h__

    
    
    
        GLfloat                glVertices[] = {
        aabb->lowerBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->upperBound.y * mRatio,
        aabb->lowerBound.x * mRatio, aabb->upperBound.y * mRatio
    };
    
    #include <cstdlib>
    
    			b2FixtureDef fd;
			fd.shape = &shape;
    
      // Compares img with the baseline image and saves the resulting distance map
  // inside the object. The provided image must have the same dimensions as the
  // baseline image.
  virtual void Compare(const OutputImage& img) = 0;
    
    // convolve with size*size kernel
std::vector<float> Convolve2D(const std::vector<float>& image, int w, int h,
                              const double* kernel, int size) {
  auto result = image;
  int size2 = size / 2;
  for (size_t i = 0; i < image.size(); i++) {
    int x = i % w;
    int y = i / w;
    // Avoid non-normalized results at boundary by skipping edges.
    if (x < size2 || x + size - size2 - 1 >= w
        || y < size2 || y + size - size2 - 1 >= h) {
      continue;
    }
    float v = 0;
    for (int j = 0; j < size * size; j++) {
      int x2 = x + j % size - size2;
      int y2 = y + j / size - size2;
      v += static_cast<float>(kernel[j]) * image[y2 * w + x2];
    }
    result[i] = v;
  }
  return result;
}
    
    namespace guetzli {
    }
    
    size_t HistogramEntropyCost(const JpegHistogram& histo,
                            const uint8_t depths[256]);
size_t HistogramHeaderCost(const JpegHistogram& histo);
    
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
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
    #include 'rocksjni/statisticsjni.h'
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    void SyncPoint::Process(const std::string& point, void* cb_arg) {
  impl_->Process(point, cb_arg);
}
    
      class LoggerJniCallback : public JniCallback, public Logger {
   public:
     LoggerJniCallback(JNIEnv* env, jobject jLogger);
     ~LoggerJniCallback();
    }
    
        ~Config(void);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}