bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    namespace atom {
    }
    
      // Delegate implementations.
  void OnError(const std::string& error) override;
  void OnError(const std::string& message,
               const int code,
               const std::string& domain) override;
  void OnCheckingForUpdate() override;
  void OnUpdateAvailable() override;
  void OnUpdateNotAvailable() override;
  void OnUpdateDownloaded(const std::string& release_notes,
                          const std::string& release_name,
                          const base::Time& release_date,
                          const std::string& update_url) override;
    
    #include 'atom/common/native_mate_converters/callback.h'
#include 'atom/common/native_mate_converters/file_path_converter.h'
#include 'base/bind.h'
#include 'base/files/file_util.h'
#include 'content/public/browser/tracing_controller.h'
#include 'native_mate/dictionary.h'
    
    void ShowSaveDialog(const file_dialog::DialogSettings& settings,
                    mate::Arguments* args) {
  v8::Local<v8::Value> peek = args->PeekNext();
  file_dialog::SaveDialogCallback callback;
  if (mate::Converter<file_dialog::SaveDialogCallback>::FromV8(
          args->isolate(), peek, &callback)) {
    file_dialog::ShowSaveDialog(settings, callback);
  } else {
    base::FilePath path;
    if (file_dialog::ShowSaveDialog(settings, &path))
      args->Return(path);
  }
}
    
    using atom::api::LabelButton;
    
     protected:
  explicit LabelButton(const std::string& text);
  ~LabelButton() override;
    
    using namespace swift;
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
      inline Dtype data_at(const int n, const int c, const int h,
      const int w) const {
    return cpu_data()[offset(n, c, h, w)];
  }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      Blob<Dtype> mean_, variance_, temp_, x_norm_;
  bool use_global_stats_;
  Dtype moving_average_fraction_;
  int channels_;
  Dtype eps_;
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of DeConvolutionLayer.
 *        Fallback to DeConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates deconvolution through forward kernels for filtering and
 * bias plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
*/
template <typename Dtype>
class CuDNNDeconvolutionLayer : public DeconvolutionLayer<Dtype> {
 public:
  explicit CuDNNDeconvolutionLayer(const LayerParameter& param)
    : DeconvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
                          const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
                       const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNDeconvolutionLayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
        TrainerPtr CreateTrainer(const FunctionPtr& model, const FunctionPtr& lossFunction, const std::vector<LearnerPtr>& parameterLearners,
                             const std::vector<ProgressWriterPtr>& progressWriters)
    {
        return MakeSharedObject<Trainer>(model, lossFunction, parameterLearners, progressWriters);
    }
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    
    {
    {                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, colStarts.data(), rowIndices.data(), (void*)nonZeroValues.data(), totalNumNonZeroValues, device, readOnly);
            }
            else
            {
                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, DeviceDescriptor::CPUDevice());
                auto maxSequenceSizeInElements = fullyDefinedSampleShape.TotalSize() * maxSequenceLength;
                switch (dataType)
                {
                case DataType::Float:
                {
                    float* dataBuffer = valueData->WritableDataBuffer<float>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const float* currentSequenceBuffer = sequences[i]->DataBuffer<float>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                case DataType::Double:
                {
                    double* dataBuffer = valueData->WritableDataBuffer<double>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const double* currentSequenceBuffer = sequences[i]->DataBuffer<double>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                default:
                    NOT_IMPLEMENTED;
                }
            }
        }
    
        private:
        bool m_isReadOnly;
        NDShape m_sampleShape;
        std::vector<Axis> m_sampleDynamicAxes;
        NDShape m_unpackedShape;
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    template <>
struct is_random_imp_selector<true>
{
   template <class I>
   struct rebind
   {
      typedef is_random_pointer_imp<I> type;
   };
};
    
       void BOOST_REGEX_CALL set_named_subs(boost::shared_ptr<named_sub_type> subs)
   {
      m_named_subs = subs;
   }
    
    
    {
    {#if defined(BOOST_REGEX_NON_RECURSIVE) && !defined(BOOST_NO_EXCEPTIONS)
   }
   catch(...)
   {
      // unwind all pushed states, apart from anything else this
      // ensures that all the states are correctly destructed
      // not just the memory freed.
      while(unwind(true)){}
      throw;
   }
#endif
}
    
    template <class BidiIterator>
struct saved_single_repeat : public saved_state
{
   std::size_t count;
   const re_repeat* rep;
   BidiIterator last_position;
   saved_single_repeat(std::size_t c, const re_repeat* r, BidiIterator lp, int arg_id) 
      : saved_state(arg_id), count(c), rep(r), last_position(lp){}
};
    
          //
      // options specific to basic group:
      //
      no_char_classes = 1 << 8,                   // [[:CLASS:]] not allowed
      no_intervals = 1 << 9,                      // {x,y} not allowed
      bk_plus_qm = 1 << 10,                       // uses \+ and \?
      bk_vbar = 1 << 11,                          // use \| for alternatives
      emacs_ex = 1 << 12,                         // enables emacs extensions
    
    template <class charT>
class cpp_regex_traits;
template <class charT>
struct c_regex_traits;
template <class charT>
class w32_regex_traits;
    
       pimpl pdata;
    
    
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags,
                  BidiIterator base)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
      virtual void PredictBatch(DMatrix* dmat, HostDeviceVector<bst_float>* out_preds,
                            const gbm::GBTreeModel& model, int tree_begin,
                            unsigned ntree_limit = 0) = 0;
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
    /*!
 * \brief perform numerically safe logsum
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline float LogSum(Iterator begin, Iterator end) {
  float mx = *begin;
  for (Iterator it = begin; it != end; ++it) {
    mx = std::max(mx, *it);
  }
  float sum = 0.0f;
  for (Iterator it = begin; it != end; ++it) {
    sum += std::exp(*it - mx);
  }
  return mx + std::log(sum);
}
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
    
    {
    {      // View has been updated
      osquery::query('DROP VIEW ' + name, r);
      auto s = osquery::query('CREATE VIEW ' + name + ' AS ' + query, r);
      if (s.ok()) {
        setDatabaseValue(kQueries, kConfigViews + name, query);
      } else {
        LOG(INFO) << 'Error creating view (' << name << '): ' << s.getMessage();
      }
    }
  }
    
    TEST_F(PacksTests, test_discovery_cache) {
  Config c;
  // This pack and discovery query are valid, expect the SQL to execute.
  c.addPack('valid_discovery_pack', '', getPackWithValidDiscovery().doc());
  size_t query_count = 0U;
  size_t query_attemts = 5U;
  for (size_t i = 0; i < query_attemts; i++) {
    c.scheduledQueries(
        ([&query_count](std::string name, const ScheduledQuery& query) {
          query_count++;
        }));
  }
  EXPECT_EQ(query_count, query_attemts);
    }
    
      if (WIFEXITED(process_status)) {
    status = WEXITSTATUS(process_status);
    return PROCESS_EXITED;
  }
    
    
    {  if (code != STILL_ACTIVE) {
    exitCode = code;
    return true;
  }
#else
  int status = 0;
  if (::waitpid(process.nativeHandle(), &status, 0) == -1) {
    return false;
  }
  if (WIFEXITED(status)) {
    exitCode = WEXITSTATUS(status);
    return true;
  }
#endif
  return false;
}
    
    TEST_F(QueryTests, test_add_and_get_current_results) {
  // Test adding a 'current' set of results to a scheduled query instance.
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  uint64_t counter = 128;
  auto status = cf.addNewResults(getTestDBExpectedResults(), 0, counter);
  EXPECT_TRUE(status.ok());
  EXPECT_EQ(status.toString(), 'OK');
  EXPECT_EQ(counter, 0UL);
    }
    
    TEST_F(TablesTests, test_constraint_matching) {
  struct ConstraintList cl;
  // An empty constraint list has expectations.
  EXPECT_FALSE(cl.exists());
  EXPECT_FALSE(cl.exists(GREATER_THAN));
  EXPECT_TRUE(cl.notExistsOrMatches('some'));
    }
    
    void DHTRoutingTable::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
    public:
  DHTTaskExecutor(int numConcurrent);
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    public:
  DHTTokenTracker();