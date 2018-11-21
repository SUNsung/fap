
        
            return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
    
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
      DVLOG(1) << 'remote::AllocateObject(routing_id=' << routing_id << ', object_id=' << object_id << ')';
    
    
    {}  // namespace nwapi

    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vqadd(v_src0, v_src1);
    }
    
    #define COMBINE(sgn,bits,n) void combine##n(const Size2D &_size                                             \
                                        FILL_LINES##n(FARG, sgn##bits),                                     \
                                        sgn##bits * dstBase, ptrdiff_t dstStride)                           \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##bits, n>::vec128 vec128;                                               \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits) - 1) ? size.width - (16/sizeof(sgn##bits) - 1) : 0; \
    typedef internal::VecTraits<sgn##bits, n>::vec64 vec64;                                                 \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits) - 1) ? size.width - (8/sizeof(sgn##bits) - 1) : 0;    \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##bits)                                                                      \
        sgn##bits * dst = internal::getRowPtr(dstBase, dstStride, i);                                       \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < roiw16; sj += 16/sizeof(sgn##bits), dj += MUL##n(16)/sizeof(sgn##bits))                 \
            MERGE_QUAD(sgn, bits, n)                                                                        \
                                                                                                            \
        if ( sj < roiw8 )                                                                                   \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##bits)                                                                  \
            vst##n##_##sgn##bits(dst + dj, v_dst);                                                          \
            sj += 8/sizeof(sgn##bits); dj += MUL##n(8)/sizeof(sgn##bits);                                   \
        }                                                                                                   \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            FILL_LINES##n(SLD, sgn##bits)                                                                   \
        }                                                                                                   \
    }                                                                                                       \
}
    
        uint8x16_t delta = vdupq_n_u8(128);
    uint8x16_t t = vdupq_n_u8(threshold);
    uint8x16_t K16 = vdupq_n_u8((u8)K);
    
    
    {
    {    std::vector<T> ret(ret_index.size());
    for (size_t i = 0; i < ret_index.size(); ++i) {
      ret[i] = all_data[ret_index[i]];
    }
    return ret;
  }
  /*!
   * \brief create OperatorProperty
   * \param type_name the type string of the OperatorProperty
   * \return a new constructed OperatorProperty
   */
  static OperatorProperty *Create(const char* type_name);
  /*! \return execution type of the operator */
  virtual ExecType exec_type() const {
    return ExecType::kSync;
  }
};
    
    #endif  // MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#endif  // MXNET_RTC_H_

    
    template<>
void SetDataGradToBlob<mshadow::cpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_cpu_diff(data_ptr);
}
    
    
MXNET_DLL int MXCVResize(NDArrayHandle src, const mx_uint w, const mx_uint h,
                         const int interpolation, NDArrayHandle *out) {
  API_BEGIN();
  NDArray ndsrc = *static_cast<NDArray*>(src);
  CHECK_EQ(ndsrc.shape().ndim(), 3);
  CHECK_EQ(ndsrc.ctx(), Context::CPU());
  CHECK_EQ(ndsrc.dtype(), mshadow::kUint8);
    }
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
        {
      MutexLock l(shared->GetMutex());
      shared->IncInitialized();
      if (shared->AllInitialized()) {
        shared->GetCondVar()->SignalAll();
      }
      while (!shared->Started()) {
        shared->GetCondVar()->Wait();
      }
    }
    thread->shared->GetCacheBench()->OperateCache(thread);
    
    Status PosixRandomRWFile::Close() {
  if (close(fd_) < 0) {
    return IOError('While close random read/write file', filename_, errno);
  }
  fd_ = -1;
  return Status::OK();
}
    
    
    { public:
  PosixMmapReadableFile(const int fd, const std::string& fname, void* base,
                        size_t length, const EnvOptions& options);
  virtual ~PosixMmapReadableFile();
  virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
};
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
      // Start a transaction
  Transaction* txn = txn_db->BeginTransaction(write_options);
  assert(txn);
    
    static uint32_t arrayTestFunc() {
  uint32_t v1 = folly::Random::rand32();
  uint32_t v2 = folly::Random::rand32();
  uint64_t v3 = v1 + v2;
  uint32_t a[4] = {v1, v2, v1, v2};
  FOLLY_SDT(folly, test_static_tracepoint_array, a, v1, v3);
  return v1 + v2;
}
    
    
    {} // namespace folly

    
    template <class RNG, typename = void>
struct StateSize {
  // A sane default.
  using type = std::integral_constant<size_t, 512>;
};
    
    
    {} // namespace folly

    
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