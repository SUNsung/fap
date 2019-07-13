
        
         private:
  CertificateManagerModel(net::NSSCertDatabase* nss_cert_database,
                          bool is_user_db_available);
    
      template <typename T>
  bool GetNext(T* out) {
    if (next_ >= info_->Length()) {
      insufficient_arguments_ = true;
      return false;
    }
    v8::Local<v8::Value> val = (*info_)[next_];
    bool success = ConvertFromV8(isolate_, val, out);
    if (success)
      next_++;
    return success;
  }
    
    
    { private:
  v8::Local<v8::Object> object_;
};
    
      // In the following methods, T and U can be function pointer, member function
  // pointer, base::Callback, or v8::FunctionTemplate. Most clients will want to
  // use one of the first two options. Also see mate::CreateFunctionTemplate()
  // for creating raw function templates.
  template <typename T>
  ObjectTemplateBuilder& SetMethod(const base::StringPiece& name, T callback) {
    return SetImpl(name, CallbackTraits<T>::CreateTemplate(isolate_, callback));
  }
  template <typename T>
  ObjectTemplateBuilder& SetProperty(const base::StringPiece& name, T getter) {
    return SetPropertyImpl(name,
                           CallbackTraits<T>::CreateTemplate(isolate_, getter),
                           v8::Local<v8::FunctionTemplate>());
  }
  template <typename T, typename U>
  ObjectTemplateBuilder& SetProperty(const base::StringPiece& name,
                                     T getter,
                                     U setter) {
    return SetPropertyImpl(name,
                           CallbackTraits<T>::CreateTemplate(isolate_, getter),
                           CallbackTraits<U>::CreateTemplate(isolate_, setter));
  }
    
    #include <string>
    
    template <>
void accumulateSquareConst<0>(const Size2D &size,
                              const u8 *srcBase, ptrdiff_t srcStride,
                              s16 *dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #define SPLIT_QUAD(sgn, bits, n) { \
                                     internal::prefetch(src + sj); \
                                     vec128 v_src = vld##n##q_##sgn##bits(src + sj); \
                                     FILL_LINES##n(VST1Q, sgn##bits) \
                                 }
    
    
    {
    {        for (; sj < size.width; ++sj, syj += 2, dj += 4)
        {
            dst[dj] = srcy[syj];
            dst[dj + 1] = srcu[sj];
            dst[dj + 2] = srcy[syj + 1];
            dst[dj + 3] = srcv[sj];
        }
    }
#else
    (void)size;
    (void)srcyBase;
    (void)srcyStride;
    (void)srcuBase;
    (void)srcuStride;
    (void)srcvBase;
    (void)srcvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, internal::vmovn(v_dst));
            x+=8;
        }
    }
};
template <typename Op> struct vtail<Op, 1>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<type>::vec64 vec64;
        typedef typename internal::VecTraits<type>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    
    
    {            ws = vpadalq_u32(ws, s1);
            ws = vpadalq_u32(ws, s2);
        }
    
        std::vector<u8> _buf((size.width+16)*3*(sizeof(ptrdiff_t) + sizeof(u8)) + 128);
    u8* buf[3];
    buf[0] = &_buf[0]; buf[1] = buf[0] + size.width; buf[2] = buf[1] + size.width;
    ptrdiff_t* cpbuf[3];
    cpbuf[0] = (ptrdiff_t*)internal::alignPtr(buf[2] + size.width, sizeof(ptrdiff_t)) + 1;
    cpbuf[1] = cpbuf[0] + size.width + 1;
    cpbuf[2] = cpbuf[1] + size.width + 1;
    memset(buf[0], 0, size.width*3);
    
    
    {    minLocCount >>= 1;
    maxLocCount >>= 1;
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)minVal;
    (void)minLocPtr;
    (void)minLocCount;
    (void)minLocCapacity;
    (void)maxVal;
    (void)maxLocPtr;
    (void)maxLocCount;
    (void)maxLocCapacity;
#endif
}
    
                v_dst.val[0] = vcombine(vget_high(v_src.val[0]), vget_low(v_src.val[0]));
            v_dst.val[1] = vcombine(vget_high(v_src.val[1]), vget_low(v_src.val[1]));
            v_dst.val[2] = vcombine(vget_high(v_src.val[2]), vget_low(v_src.val[2]));
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
      DHTTaskExecutor periodicTaskQueue2_;
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    namespace aria2 {
    }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
      delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
  snapshot = nullptr;
    
      // atomically apply a set of updates
  {
    WriteBatch batch;
    batch.Delete('key1');
    batch.Put('key2', value);
    s = db->Write(WriteOptions(), &batch);
  }
    
    
    {  // Create a LevelDBOptions object with default values for all fields.
  LevelDBOptions();
};
    
    
    {  FLAGS_minloglevel = prev;
}
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_always_inline', 0, arguments));
  std::array<int, 2> expected{{sizeof(uint32_t), sizeof(uint32_t)}};
  checkTracepointArguments(arguments, expected);
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    template <class UIntType, UIntType a, UIntType c, UIntType m>
struct StateSize<std::linear_congruential_engine<UIntType, a, c, m>> {
  // From the standard [rand.eng.lcong], this is ceil(log2(m) / 32) + 3,
  // which is the same as ceil(ceil(log2(m) / 32) + 3, and
  // ceil(log2(m)) <= std::numeric_limits<UIntType>::digits
  using type = std::integral_constant<
      size_t,
      (std::numeric_limits<UIntType>::digits + 31) / 32 + 3>;
};
    
      /**
   * Create a new RNG, seeded with a good seed.
   *
   * Note that you should usually use ThreadLocalPRNG unless you need
   * reproducibility (such as during a test), in which case you'd want
   * to create a RNG with a good seed in production, and seed it yourself
   * in test.
   */
  template <class RNG = DefaultGenerator, class /* EnableIf */ = ValidRNG<RNG>>
  static RNG create();
    
    /**
 * VirtualExecutor implements a light-weight view onto existing Executor.
 *
 * Multiple VirtualExecutors can be backed by a single Executor.
 *
 * VirtualExecutor's destructor blocks until all tasks scheduled through it are
 * complete. Executor's destructor also blocks until all VirtualExecutors
 * backed by it are released.
 */
class VirtualExecutor : public DefaultKeepAliveExecutor {
  auto wrapFunc(Func f) {
    class FuncAndKeepAlive {
     public:
      FuncAndKeepAlive(Func&& f, VirtualExecutor* executor)
          : keepAlive_(getKeepAliveToken(executor)), f_(std::move(f)) {}
    }
    }
    }
    
      // one cache shared by all cpus
  rv.numCachesByLevel.push_back(numCpus);
    
    template <class T, size_t kNumSlots = 64>
class CoreCachedWeakPtr {
 public:
  explicit CoreCachedWeakPtr(const CoreCachedSharedPtr<T, kNumSlots>& p) {
    for (auto slot : folly::enumerate(slots_)) {
      *slot = p.slots_[slot.index];
    }
  }
    }
    
      template <typename T>
  static T* get_shared_ptr(counted_base* base) {
    return (T*)base;
  }
    
    using namespace std;
using namespace folly;