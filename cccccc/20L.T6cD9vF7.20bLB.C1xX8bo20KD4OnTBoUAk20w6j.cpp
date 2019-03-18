
        
        /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
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
    
    #ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#include <dmlc/parameter.h>
#include <string>
#include <utility>
#include <vector>
#include 'mxnet/ndarray.h'
    
    template<typename xpu, typename OP>
void EvalMatFillRowElem_(const TBlob &lhs, const TBlob &mhs, const TBlob &rhs,
                         TBlob *ret, RunContext ctx) {
  using namespace mshadow::expr;
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  ret->get<xpu, 2, real_t>(s)
          = mat_fill_row_element(lhs.get<xpu, 2, real_t>(s),
                                 mhs.get<xpu, 1, real_t>(s),
                                 rhs.get<xpu, 1, real_t>(s));
}
    
      // Change the layout of matrices to column-major
  Tensor<cpu, 2, DType> out_t(Shape2(out.size(1), out.size(0)));
  AllocSpace(&out_t);
  flip<cpu, DType>(out.size(0), out.size(1), out_t.dptr_, out_t.stride_,
    out.dptr_, out.stride_);
    
       out = data / sqrt(data.shape[-1])
    
    namespace mxnet {
namespace op {
template<>
Operator* CreateOp<cpu>(CropParam param) {
  return new CropOp<cpu>(param);
}
    }
    }
    
            if (sectionShape.Rank() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The section shape '%S' rank (%d) must be <= rank (%d) of 'this' mask.', sectionShape.AsString().c_str(), (int)sectionShape.Rank(), (int)m_maskShape.Rank());
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
        /*static*/ ValuePtr Value::Create(const NDShape& sampleShape, const std::vector<NDArrayViewPtr>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly, bool createNewCopy)
    {
        auto numSequences = sequences.size();
        if (numSequences == 0)
            InvalidArgument('Value::Create:: The number of sequences must be > 0');
    }
    
    // GetMinibatch4SE - Get the next minibatch for SE training, including lattice, labels and phone boundary
// latticeinput - lattice for each utterances in this minibatch
// uids - lables stored in size_t vector instead of ElemType matrix
// boundary - phone boundaries
// returns - true if there are more minibatches, false if no more minibatches remain
bool DataReader::GetMinibatch4SE(std::vector<shared_ptr<const msra::dbn::latticepair>>& latticeinput, vector<size_t>& uids, vector<size_t>& boundaries, vector<size_t>& extrauttmap)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetMinibatch4SE(latticeinput, uids, boundaries, extrauttmap);
    return bRet;
}
    
        void Start();
    void Stop();
    void Restart();
    
            // Now we have three kinds of nodes:
        //  - unmodified nodes that will be shared with the old network
        //  - modified nodes (user edits and their parents)
        //  - original nodes that are no longer referenced
        // The new network will be constructed to have the same roots as the original.
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        Matrix<ElemType> sliceInput1Value = Input(1)->ValueFor(fr);
        Matrix<ElemType> sliceOutputValue = ValueFor(fr);
    }
    
    public:
    virtual const std::wstring GetRequestedDynamicAxis() const { return m_dynamicAxisNodeName; }
    
    template <class ElemType>
void EpochAccumulatorNode<ElemType>::ForwardPropNonLooping()
{
    TensorView<ElemType> accumulator = EnsureAccumlator();
    UpdateRunningAverage(InputRef(0), accumulator, m_numSamples);
    CopyAccumulatorToValue();
}
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
          ASSERT_TRUE(input == output);
    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::const_reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
        // create a JSON string directly from a string literal
    json j_string_literal('The quick brown fox jumps over the lazy dog.');
    
    
    {    if (size >= 0) {
        std::cerr << 'Assertion failed: `' << condition << '`, file ' << file << ', line ' << line
            << ' : ' << message << '.' << std::endl;
    }
}
    
    #define LOG_WARNING(section, format, ...) \
    LOG(section, napa::providers::LoggingProvider::Verboseness::Warning, '', format, ##__VA_ARGS__)