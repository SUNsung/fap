
        
        //  This file implements a default caching implementation that never evicts
//  its entries.
    
      struct IndentScope {
    TreePrinter *Printer;
    size_t OldLength;
    IndentScope(TreePrinter *printer, StringRef indent)
        : Printer(printer), OldLength(printer->Indent.size()) {
      Printer->Indent += indent;
    }
    ~IndentScope() { Printer->Indent.resize(OldLength); }
  };
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    
    {
    {void TaskProcessInformation::provideMapping(json::Output &out) {
  out.mapRequired('real_pid', OSPid);
  if (ProcessUsage.hasValue())
    out.mapRequired('usage', ProcessUsage.getValue());
}
}
}
    
    swift::UUID::UUID() {
#if defined(_WIN32)
  ::UUID uuid = *((::UUID *)&Value);
  UuidCreateNil(&uuid);
    }
    
    StringRef importer::getCFTypeName(
            const clang::TypedefNameDecl *decl) {
  if (auto pointee = CFPointeeInfo::classifyTypedef(decl)) {
    auto name = decl->getName();
    if (pointee.isRecord() || pointee.isTypedef())
      if (name.endswith(SWIFT_CFTYPE_SUFFIX))
        return name.drop_back(strlen(SWIFT_CFTYPE_SUFFIX));
    }
    }
    
    // POSIX sys/types.h.
MAP_STDLIB_TYPE('ssize_t', SignedWord, 0, 'Int', false, DefineOnly)
MAP_STDLIB_TYPE('u_int8_t',  UnsignedInt, 8,  'UInt8',  false, DoNothing)
MAP_STDLIB_TYPE('u_int16_t', UnsignedInt, 16, 'UInt16', false, DoNothing)
MAP_STDLIB_TYPE('u_int32_t', UnsignedInt, 32, 'UInt32', false, DoNothing)
MAP_STDLIB_TYPE('u_int64_t', UnsignedInt, 64, 'UInt64', false, DoNothing)
    
    #define TegraGenOp_Invoker(name, func, src_cnt, dst_cnt, scale_cnt, ...) \
template <typename ST, typename DT> \
class TegraGenOp_##name##_Invoker : public cv::ParallelLoopBody \
{ \
public: \
    TegraGenOp_##name##_Invoker(SRC_ARG##src_cnt \
                                DST_ARG##dst_cnt \
                                int width_, int height_ \
                                SCALE_ARG##scale_cnt) : \
        cv::ParallelLoopBody(), SRC_STORE##src_cnt \
                                DST_STORE##dst_cnt \
                                width(width_), height(height_) \
                                SCALE_STORE##scale_cnt {} \
    virtual void operator()(const cv::Range& range) const \
    { \
        CAROTENE_NS::func(CAROTENE_NS::Size2D(width, range.end-range.start), __VA_ARGS__); \
    } \
private: \
    SRC_VAR##src_cnt \
    DST_VAR##dst_cnt \
    int width, height; \
    SCALE_VAR##scale_cnt \
    const TegraGenOp_##name##_Invoker& operator= (const TegraGenOp_##name##_Invoker&); \
};
    
    namespace CAROTENE_NS {
    }
    
        #define CANNY_PUSH(d)    *(d) = u8(2), *stack_top++ = (d)
    #define CANNY_POP(d)     (d) = *--stack_top
    
    
    {            if (mask)
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    // caclulate sqrt value
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
      /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
      /**
   * @brief Does layer-specific setup: your layer should implement this function
   *        as well as Reshape.
   *
   * @param bottom
   *     the preshaped input blobs, whose data fields store the input data for
   *     this layer
   * @param top
   *     the allocated but unshaped output blobs
   *
   * This method should do one-time layer specific setup. This includes reading
   * and processing relevent parameters from the <code>layer_param_</code>.
   * Setting up the shapes of top blobs and internal buffers should be done in
   * <code>Reshape</code>, which will be called before the forward pass to
   * adjust the top blob sizes.
   */
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    template <typename Dtype>
class CropLayer : public Layer<Dtype> {
 public:
  explicit CropLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
    #include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/registry.h>
#include <nnvm/node.h>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include './base.h'
#include './resource.h'
#include './op_attr_types.h'
    
    #include <caffe/layer.hpp>
#include <caffe/blob.hpp>
#include <caffe/layer_factory.hpp>
    
    template<typename Dtype>
class CaffeDataIter : public IIterator<TBlobBatch> {
 public:
  explicit CaffeDataIter(int type_flag) : batch_size_(0), channels_(1), width_(1), height_(1)
                               , type_flag_(type_flag), loc_(0)
  {}
  virtual ~CaffeDataIter(void) {}
    }
    
        for (int i = 0; i < param_.num_data; ++i) {
      TShape tshape = (*in_shape)[i];
      if (tshape.ndim() == 0) return false;
      auto blob_ptr = new Blob<float>();
      blob_ptr->Reshape(caffe::TShape2Vector(tshape));
      bot_blobs.push_back(blob_ptr);
    }
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
    MXNET_DLL int MXCVImdecode(const unsigned char *img, const mx_uint len,
                           const int flag, NDArrayHandle *out) {
  API_BEGIN();
  mx_uint dims[3];
  CHECK_GE(flag, 0) << 'flag must be 0 (grayscale) or 1 (colored).';
  dims[2] = flag == 0 ? 1 : 3;
  if (get_jpeg_size(img, len, dims+1, dims)) {
  } else if (get_png_size(img, len, dims+1, dims)) {
  } else {
    LOG(FATAL) << 'Only supports png and jpg.';
  }
  NDArray ndout(TShape(dims, dims+3), Context::CPU(), true, mshadow::kUint8);
  unsigned char *img_cpy = new unsigned char[len];
  memcpy(img_cpy, img, sizeof(unsigned char)*len);
  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(1, len, CV_8U, img_cpy);
      cv::Mat dst(dims[0], dims[1], flag == 0 ? CV_8U : CV_8UC3, ndout.data().dptr_);
#if (CV_MAJOR_VERSION > 3 || (CV_MAJOR_VERSION == 3 && CV_MINOR_VERSION >= 3))
      cv::imdecode(buf, flag | cv::IMREAD_IGNORE_ORIENTATION, &dst);
#else
      cv::imdecode(buf, flag, &dst);
#endif
      CHECK(!dst.empty());
      delete[] img_cpy;
    }, ndout.ctx(), {}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
      ~ThreadedEnginePooled() noexcept(false) {
    StopNoWait();
  }
    
    namespace mxnet {
namespace io {
/*!
 * \brief a vector of tensor with various shape
 *
 * data are stored in memory continuously
 */
template<int dim, typename DType>
class TensorVector {
 public:
  TensorVector(void) {
    this->Clear();
  }
  /*! \brief get the buffer to the i-th tensor */
  inline mshadow::Tensor<cpu, dim, DType>
  operator[](size_t i) const {
    CHECK_LT(i + 1, offset_.size());
    CHECK_EQ(shape_[i].Size(), offset_[i + 1] - offset_[i]);
    return mshadow::Tensor<cpu, dim, DType>
        ((DType*)dmlc::BeginPtr(content_) + offset_[i], shape_[i]);  // NOLINT(*)
  }
  inline mshadow::Tensor<cpu, dim, DType> Back() const {
    return (*this)[Size() - 1];
  }
  inline size_t Size(void) const {
    return shape_.size();
  }
  /*! \brief allocate space given the shape (data are copied) */
  inline void Push(mshadow::Shape<dim> shape) {
    shape_.push_back(shape);
    offset_.push_back(offset_.back() + shape.Size());
    content_.resize(offset_.back());
  }
  inline void Clear(void) {
    offset_.clear();
    offset_.push_back(0);
    content_.clear();
    shape_.clear();
  }
    }
    }
    }
    
        private:
        std::unordered_set<StreamInformation> m_streamInfos;
        bool m_epochEndReached;
        size_t m_numWorkers;
        size_t m_workerRank;
        size_t m_prevMinibatchSize;
        size_t m_maxNumSamplesToRead;
        size_t m_maxNumSweepsToRead;
        size_t m_truncationLength;
        size_t m_maxErrors;
        std::unordered_map<StreamInformation, MinibatchData> m_minibatchData;
    
    
    {        return (const TensorView<V1ElemType>*)(m_tensorView.get());
    }
    
                m_totalSummaries++;
            auto now = std::chrono::high_resolution_clock::now();
            size_t durationMs = std::chrono::duration_cast<std::chrono::milliseconds>(now - m_lastResetTime).count();
    
            static bool IsUDF(const FunctionPtr& f);
    
        template <typename ElementType, typename DestType>
    void CopyDenseToOneHot(const ElementType *source, const size_t sampleCount, const size_t sampleSize, std::vector<DestType>& dest);
    
    #include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
    
    class Timer
{
public:
    Timer()
        : m_start(0), m_end(0)
    {
    }
    }
    
    DEFINE_int32(threads, 16, 'Number of concurrent threads to run.');
DEFINE_int64(cache_size, 8 * KB * KB,
             'Number of bytes to use as a cache of uncompressed data.');
DEFINE_int32(num_shard_bits, 4, 'shard_bits.');
    
    
    {
    {  // No copying allowed
  CompactedDBImpl(const CompactedDBImpl&);
  void operator=(const CompactedDBImpl&);
};
}
#endif  // ROCKSDB_LITE

    
    std::unique_ptr<WriteControllerToken>
WriteController::GetCompactionPressureToken() {
  ++total_compaction_pressure_;
  return std::unique_ptr<WriteControllerToken>(
      new CompactionPressureToken(this));
}
    
    struct PosixMemoryMappedFileBuffer : public MemoryMappedFileBuffer {
  PosixMemoryMappedFileBuffer(void* _base, size_t _length)
      : MemoryMappedFileBuffer(_base, _length) {}
  virtual ~PosixMemoryMappedFileBuffer();
};
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
      // Is cache storing uncompressed data ?
  //
  // True if the cache is configured to store uncompressed data else false
  virtual bool IsCompressed() = 0;