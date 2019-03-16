
        
        bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    #ifndef ATOM_APP_COMMAND_LINE_ARGS_H_
#define ATOM_APP_COMMAND_LINE_ARGS_H_
    
    namespace api {
    }
    
    
    {}  // namespace auto_updater

    
      canvas_.reset();
  bitmap_.reset(new SkBitmap);
  bitmap_->allocN32Pixels(viewport_pixel_size_.width(),
                          viewport_pixel_size_.height(), !transparent_);
  if (bitmap_->drawsNothing()) {
    NOTREACHED();
    bitmap_.reset();
    return;
  }
    
    
    {}  // namespace atom

    
    const CharType* kWaitEventName = L'ElectronRelauncherWaitEvent';
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
      // Don't search a block if we'd be in the trailer
  if (offset_in_block > kBlockSize - 6) {
    block_start_location += kBlockSize;
  }
    
      virtual bool Valid() const { return iter_.Valid(); }
  virtual void Seek(const Slice& k) { iter_.Seek(EncodeKey(&tmp_, k)); }
  virtual void SeekToFirst() { iter_.SeekToFirst(); }
  virtual void SeekToLast() { iter_.SeekToLast(); }
  virtual void Next() { iter_.Next(); }
  virtual void Prev() { iter_.Prev(); }
  virtual Slice key() const { return GetLengthPrefixedSlice(iter_.key()); }
  virtual Slice value() const {
    Slice key_slice = GetLengthPrefixedSlice(iter_.key());
    return GetLengthPrefixedSlice(key_slice.data() + key_slice.size());
  }
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
    namespace leveldb {
    }
    
    #include <map>
#include <set>
#include <vector>
#include 'db/dbformat.h'
#include 'db/version_edit.h'
#include 'port/port.h'
#include 'port/thread_annotations.h'
    
    class CaffeDataIterWrapper : public PrefetcherIter {
 public:
  CaffeDataIterWrapper() : PrefetcherIter(NULL), next_time_(0) {}
  virtual ~CaffeDataIterWrapper() {
    IF_CHECK_TIMING(
      if (next_time_.load() > 0) {
        LOG(WARNING) << 'Caffe data loader was blocked for '
                     << next_time_.load()
                     << ' ms waiting for incoming data';
      }
    )
  }
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    // We need to init prefetcher args in order to get dtype
    this->param_.InitAllowUnknown(kwargs);
    if (!this->param_.dtype) this->param_.dtype = mshadow::kFloat32;
    switch (this->param_.dtype.value()) {
      case mshadow::kFloat32:
        this->loader_.reset(new CaffeDataIter<float>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat64:
        this->loader_.reset(new CaffeDataIter<double>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat16:
        LOG(FATAL) << 'float16 layer is not supported by caffe';
        return;
      default:
        LOG(FATAL) << 'Unsupported type ' << this->param_.dtype.value();
        return;
    }
    PrefetcherIter::Init(kwargs);
    this->param_.prefetch_buffer = 1;
  }
  virtual void BeforeFirst(void) {
    return PrefetcherIter::BeforeFirst();
  }
  virtual bool Next(void) {
    IF_CHECK_TIMING(
      const uint64_t start_time = GetTickCountMS();
    )
    const bool rc = PrefetcherIter::Next();
    IF_CHECK_TIMING(
      const uint64_t diff_time  = GetTickCountMS() - start_time;
      next_time_.fetch_add(diff_time);
    )
    return rc;
  }
    }
    
    /*!
 * \file gradient_compression.h
 * \brief Gradient compression for kvstore
 * \author Rahul Huilgol
 */
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
    #ifndef DECL_TERNARY
#define DECL_TERNARY(XPU, OP, FUN)                                          \
  template<>                                                                \
  void Eval<XPU, OP>(const TBlob &lhs, const TBlob &mhs,                    \
                     const TBlob &rhs, TBlob *ret, RunContext ctx) {        \
    FUN<XPU, OP>(lhs, mhs, rhs, ret, ctx);                                  \
  }
#endif
    
    #include <algorithm>
#include <vector>
#include './spatial_transformer-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNSpatialTransformerOp : public Operator {
 public:
  explicit CuDNNSpatialTransformerOp(SpatialTransformerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    if (param_.sampler_type == st::kBilinear) {
      sampler_ = CUDNN_SAMPLER_BILINEAR;
    }
  }
    }
    }
    }
    
    
    {  CHECK(param_.pinfo->forward(ptrs.size(), ptrs.data(), tags.data(), param_.pinfo->p_forward));
  Engine::Get()->PushAsync(
      [ndcpy, ctx](RunContext rctx, Engine::CallbackOnComplete on_complete) {
        ctx.async_on_complete();
        on_complete();
      }, ndctx, ndvar, {}, FnProperty::kNormal, 0, 'NDArrayOpForward');
}
    
        void NDArrayView::SetValue(float16 value)
    {
        if (IsSparse())
            LogicError('NDArrayView::SetValue: Setting a NDArrayView contents to a scalar is only allowed for objects with dense storage format.');
    }
    
        // TODO: This could actually be strided?
    const MaskKind* NDMask::DataBuffer() const
    {
        // First make sure that the underlying matrix is on the right device
        auto matrix = GetMatrix();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(m_device), true);
        return (const MaskKind*)(matrix->Data());
    }
    
        private:
        bool ShouldWriteUpdate(size_t update) const
        {
            if (m_frequency == 0)
            {
                // Geometric schedule - write at every 2^(i) steps, with i = 1, 2, 3, ...
                return ((update + 1) & update) == 0;
            }
    }
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
            auto mainWorkerId = std::to_wstring(0);
        auto localWorkerId = std::to_wstring(communicator->CurrentWorker().m_globalRank);
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
                for (auto &url : qu.m_urls)
            {
                if (url.m_rank == 0)
                {
                    metric = urlDiscountedGain1(0, url.m_id);
                    break;
                }
            }
    
    
    
      bool StyleExist(const std::string &key);
    
    // Return the services for generated mock file.
grpc::string GetMockServices(grpc_generator::File *file,
                             const Parameters &params);
    
    namespace NamespaceC {
    }
    
    
    {
// Returns source for the service
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters) {
	grpc::string out;
	auto p = file->CreatePrinter(&out);
	auto printer = p.get();
	std::map<grpc::string, grpc::string> vars;
	vars['Package'] = parameters->package_name;
	vars['ServicePrefix'] = parameters->service_prefix;
	vars['grpc'] = 'grpc';
	vars['context'] = 'context';
	GenerateImports(file, printer, vars);
	if (parameters->custom_method_io_type != '') {
		vars['CustomMethodIO'] = parameters->custom_method_io_type;
	}
	GenerateService(service, printer, vars);
	return out;
}
}// Namespace grpc_go_generator
