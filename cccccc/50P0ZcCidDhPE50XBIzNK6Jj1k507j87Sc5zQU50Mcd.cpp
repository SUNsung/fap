
        
        #include <QIcon>
#include <QPixmap>
#include <QString>
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, sigin);
    secp256k1_ecdsa_signature_save(sig, &r, &s);
    return 1;
}
    
    // Namespace alias to encourage brevity
namespace tfm = tinyformat;
    
        BOOST_CHECK_EQUAL(arr.empty(), false);
    BOOST_CHECK_EQUAL(arr.size(), 9);
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    void PointMenuPositionFunc(GtkMenu* menu,
                           int* x,
                           int* y,
                           gboolean* push_in,
                           gpointer userdata) {
  *push_in = TRUE;
    }
    
      protected:
    ~NwScreenStopMonitorFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.stopMonitor', UNKNOWN)
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
      // Delete all Added points.
  void Clear();
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
    #include 'publictypes.h'
#include 'elst.h'
#include 'strngs.h'
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    #endif  // TESSERACT_CCUTIL_KDPAIR_H_

    
    namespace dmlc {
namespace data {
    }
    }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
    namespace xgboost {
/*!
 * \brief Learner class that does training and prediction.
 *  This is the user facing module of xgboost training.
 *  The Load/Save function corresponds to the model used in python/R.
 *  \code
 *
 *  std::unique_ptr<Learner> learner(new Learner::Create(cache_mats));
 *  learner.Configure(configs);
 *
 *  for (int iter = 0; iter < max_iter; ++iter) {
 *    learner->UpdateOneIter(iter, train_mat);
 *    LOG(INFO) << learner->EvalOneIter(iter, data_sets, data_names);
 *  }
 *
 *  \endcode
 */
class Learner : public rabit::Serializable {
 public:
  /*! \brief virtual destructor */
  ~Learner() override = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief Initialize the model using the specified configurations via Configure.
   *  An model have to be either Loaded or initialized before Update/Predict/Save can be called.
   */
  virtual void InitModel() = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  void Load(dmlc::Stream* fi) override = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  void Save(dmlc::Stream* fo) const override = 0;
  /*!
   * \brief update the model for one iteration
   *  With the specified objective function.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   */
  virtual void UpdateOneIter(int iter, DMatrix* train) = 0;
  /*!
   * \brief Do customized gradient boosting with in_gpair.
   *  in_gair can be mutated after this call.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   * \param in_gpair The input gradient statistics.
   */
  virtual void BoostOneIter(int iter,
                            DMatrix* train,
                            HostDeviceVector<GradientPair>* in_gpair) = 0;
  /*!
   * \brief evaluate the model for specific iteration using the configured metrics.
   * \param iter iteration number
   * \param data_sets datasets to be evaluated.
   * \param data_names name of each dataset
   * \return a string corresponding to the evaluation result
   */
  virtual std::string EvalOneIter(int iter,
                                  const std::vector<DMatrix*>& data_sets,
                                  const std::vector<std::string>& data_names) = 0;
  /*!
   * \brief get prediction given the model.
   * \param data input data
   * \param output_margin whether to only predict margin value instead of transformed prediction
   * \param out_preds output vector that stores the prediction
   * \param ntree_limit limit number of trees used for boosted tree
   *   predictor, when it equals 0, this means we are using all the trees
   * \param pred_leaf whether to only predict the leaf index of each tree in a boosted tree predictor
   * \param pred_contribs whether to only predict the feature contributions
   * \param approx_contribs whether to approximate the feature contributions for speed
   * \param pred_interactions whether to compute the feature pair contributions
   */
  virtual void Predict(DMatrix* data,
                       bool output_margin,
                       HostDeviceVector<bst_float> *out_preds,
                       unsigned ntree_limit = 0,
                       bool pred_leaf = false,
                       bool pred_contribs = false,
                       bool approx_contribs = false,
                       bool pred_interactions = false) = 0;
    }
    }
    
      T* HostPointer() { return HostVector().data(); }
  const T* ConstHostPointer() const { return ConstHostVector().data(); }
  const T* HostPointer() const { return ConstHostPointer(); }
    
    
    {
    {XGBOOST_REGISTER_GBM(GBLinear, 'gblinear')
    .describe('Linear booster, implement generalized linear model.')
    .set_body([](const std::vector<std::shared_ptr<DMatrix> > &cache,
                 bst_float base_margin) {
      return new GBLinear(cache, base_margin);
    });
}  // namespace gbm
}  // namespace xgboost

    
    
    {};
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    
    {#if !UCONFIG_NO_BREAK_ITERATION
    delete fCapitalizationBrkIter;
#endif
}
    
    int32_t
CollationKey::hashCode() const
{
    // (Cribbed from UnicodeString)
    // We cache the hashCode; when it becomes invalid, due to any change to the
    // string, we note this by setting it to kInvalidHashCode. [LIU]
    }
    
    /**
 * Copy constructor.
 */
StringReplacer::StringReplacer(const StringReplacer& other) :
    UnicodeFunctor(other),
    UnicodeReplacer(other)
{
    output = other.output;
    cursorPos = other.cursorPos;
    hasCursor = other.hasCursor;
    data = other.data;
    isComplex = other.isComplex;
}
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    #define CONTAINER_CONFIG_BODY(T, METHOD) \
T Config::Get##METHOD(const IniSetting::Map& ini, const Hdf& config, \
                      const std::string& name /* = '' */, \
                      const T& defValue /* = T() */, \
                      const bool prepend_hhvm /* = true */) { \
  auto ini_name = IniName(name, prepend_hhvm); \
  Hdf hdf = name != '' ? config[name] : config; \
  T ini_ret, hdf_ret; \
  auto value = ini_iterate(ini, ini_name); \
  if (value.isArray() || value.isObject()) { \
    ini_on_update(value.toVariant(), ini_ret); \
    /** Make sure that even if we have an ini value, that if we also **/ \
    /** have an hdf value, that it maintains its edge as beating out **/ \
    /** ini                                                          **/ \
    if (hdf.exists() && !hdf.isEmpty()) { \
      hdf.configGet(hdf_ret); \
      if (hdf_ret != ini_ret) { \
        ini_ret = hdf_ret; \
        IniSetting::SetSystem(ini_name, ini_get(ini_ret)); \
      } \
    } \
    return ini_ret; \
  } \
  if (hdf.exists() && !hdf.isEmpty()) { \
    hdf.configGet(hdf_ret); \
    return hdf_ret; \
  } \
  return defValue; \
} \
void Config::Bind(T& loc, const IniSetting::Map& ini, const Hdf& config, \
                  const std::string& name /* = '' */, \
                  const T& defValue /* = T() */, \
                  const bool prepend_hhvm /* = true */) { \
  loc = Get##METHOD(ini, config, name, defValue, prepend_hhvm); \
  IniSetting::Bind(IniSetting::CORE, IniSetting::PHP_INI_SYSTEM, \
                   IniName(name, prepend_hhvm), &loc); \
}
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    #endif // incl_HPHP_OUTPUT_FILE_H_

    
    
    {}

    
      Time serializedTime_;
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    namespace aria2 {
    }
    
    #include <memory>
    
      DHTTaskExecutor periodicTaskQueue2_;
    
    public:
  DHTTokenTracker();
    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;
    
    
    {  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, 'ExtensionManager.deregisterExtension', bytes);
  }
}
    
      bool operator == (const ExtensionManager_registerExtension_args & rhs) const
  {
    if (!(info == rhs.info))
      return false;
    if (!(registry == rhs.registry))
      return false;
    return true;
  }
  bool operator != (const ExtensionManager_registerExtension_args &rhs) const {
    return !(*this == rhs);
  }
    
    void genNFSShare(const std::string& share_line, QueryData& results) {
  auto line = osquery::split(share_line);
  if (line.size() == 0 || boost::starts_with(line[0], '#')) {
    return;
  }
    }
    
      hardwareDriver* type = nullptr;
  if (types.size() == 1) {
    type = &(types[0]);
  }
    
    namespace osquery {
namespace perf_event_open {
    }
    }
    
      static Killswitch& get() {
    static Killswitch killswitch;
    return killswitch;
  }
    
    TEST_F(PerfOutputTests, load) {
  auto output_exp = ebpf::PerfOutput<TestMessage>::load(0u, 512u);
  // permission denied, test runs under non root user
  ASSERT_TRUE(output_exp.isError());
}
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    TEST_F(KernelInfo, test_sanity) {
  QueryData data = execute_query('select * from kernel_info');
  ValidatatioMap row_map = {{'version', NonEmptyString},
                            {'arguments', NormalType},
                            {'path', NormalType},
                            {'device', NonEmptyString}};
  validate_rows(data, row_map);
}
    
    // Sanity check integration test for kernel_panics
// Spec file: specs/darwin/kernel_panics.table