
        
            base::FilePath shortcutPath(path);
    result->AppendBoolean(base::win::CreateOrUpdateShortcutLink(shortcutPath, props, 
      base::PathExists(shortcutPath) ? base::win::SHORTCUT_UPDATE_EXISTING : base::win::SHORTCUT_CREATE_ALWAYS));
#else
    result->AppendBoolean(false);
#endif
    return;
  } else if (method == 'GetPackage') {
    result->AppendString(shell->GetPackage()->package_string());
    return;
  } else if (method == 'SetCrashDumpDir') {
    std::string path;
    arguments.GetString(0, &path);
    //FIXME: result->AppendBoolean(SetCrashDumpPath(path.c_str()));
    return;
  } else if (method == 'RegisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    bool success = GlobalShortcutListener::GetInstance()->RegisterAccelerator(
                       shortcut->GetAccelerator(), shortcut);
    if (!success)
      shortcut->OnFailed('Register global desktop keyboard shortcut failed.');
    
    namespace nwapi {
    }
    
    
    {}
    
    
    {} // namespace nwapi
    
    bool MenuDelegate::IsCommandIdEnabled(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    void Menu::Destroy() {
  gtk_widget_destroy(menu_);
  g_object_unref(G_OBJECT(menu_));
}
    
    
    {        // allocate space for non-inplace decimation
        MBLayoutPtr pDecimatedMBLayout = make_shared<MBLayout>();
        pDecimatedMBLayout->SetAxisName(pMBLayout->GetAxisName());
        StreamMinibatchInputs decimatedMB;
        // call in-place decimation
        pair<size_t, size_t> selected = DecimateMinibatch<ElemType>(mb, decimatedMB, pMBLayout, pDecimatedMBLayout, numprocs, rank);
        // move the data
        for (auto k : mb)
        {
            const auto& name = k.first;
            mb.GetInputMatrix<ElemType>(name).SetValue(decimatedMB.GetInputMatrix<ElemType>(name)); // deep-copy our local one to the output location
        }
        pMBLayout->MoveFrom(pDecimatedMBLayout);
        return selected;
    }
    
    template<> inline
dnnError_t dnnLRNCreateForward<double>(
    dnnPrimitive_t* pLrn,
    dnnPrimitiveAttributes_t attributes,
    const dnnLayout_t dataLayout,
    size_t kernel_size,
    double alpha,
    double beta,
    double k)
{
    return dnnLRNCreateForward_F64(
        pLrn, attributes, dataLayout, kernel_size, alpha, beta, k);
}
    
            // we stripe V
        // This is to ensure that we only touch a subset of columns of V at once that fit into
        // the cache. E.g. for a 1024-row V, that would be 195 columns. We then 'stream'
        // through M, where each row of M is applied to all those columns of V. This way,
        // both V and M come from the cache except for the first time. Each 'float' of V
        // is loaded once into cache. Each row of M is loaded into cache once per stripe of V,
        // in the example every 195 columns.
        const size_t cacheablerowsV = 512; // at most
        const size_t cacheablecolsV = 16;  // V.cacheablecols();    // don't get more than this of V per row of M
        // 512 * 16 -> 32 KB
    
        void SetName(const std::wstring& name)
    {
        m_name = name;
    }
    const std::wstring& GetName();
    int GetSectionCount() const
    {
        return m_sectionHeader->dataSections;
    }
    size_t GetRecordCount() const
    {
        return m_sectionHeader->elementsPerRecord != 0 ? m_sectionHeader->elementsCount / m_sectionHeader->elementsPerRecord : m_sectionHeader->elementsCount;
    }
    
        Matrix<float> mB = Matrix<float>::RandomGaussian(dim2, dim1, c_deviceIdZero, 1.0f, 4.0f, IncrementCounter());
    Matrix<float> mC = Matrix<float>::RandomGaussian(dim2, dim2, c_deviceIdZero, 1.0f, 2.0f, IncrementCounter());
    Matrix<float> mD(mC.DeepClone());
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
        // constructors that take a config name
    MELScript(const std::string& configname)
        : ConfigParser(';', configname)
    {
    }
    MELScript(const std::wstring& configname)
        : ConfigParser(';', configname)
    {
    }
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
        float4& operator&=(const float4& other)
    {
        v = _mm_and_ps(v, other);
        return *this;
    }
    float4& operator|=(const float4& other)
    {
        v = _mm_or_ps(v, other);
        return *this;
    }
    float4& operator+=(const float4& other)
    {
        v = _mm_add_ps(v, other);
        return *this;
    }
    float4& operator-=(const float4& other)
    {
        v = _mm_sub_ps(v, other);
        return *this;
    }
    float4& operator*=(const float4& other)
    {
        v = _mm_mul_ps(v, other);
        return *this;
    }
    float4& operator/=(const float4& other)
    {
        v = _mm_div_ps(v, other);
        return *this;
    }
    
    namespace leveldb {
namespace log {
    }
    }
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
    
    {  double FalsePositiveRate() {
    char buffer[sizeof(int)];
    int result = 0;
    for (int i = 0; i < 10000; i++) {
      if (Matches(Key(i + 1000000000, buffer))) {
        result++;
      }
    }
    return result / 10000.0;
  }
};
    
    void Histogram::Add(double value) {
  // Linear search is fast enough for our usage in db_bench
  int b = 0;
  while (b < kNumBuckets - 1 && kBucketLimit[b] <= value) {
    b++;
  }
  buckets_[b] += 1.0;
  if (min_ > value) min_ = value;
  if (max_ < value) max_ = value;
  num_++;
  sum_ += value;
  sum_squares_ += (value * value);
}
    
      void Clear();
  void Add(double value);
  void Merge(const Histogram& other);
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    #include 'leveldb/db.h'
#include 'db/db_impl.h'
#include 'leveldb/cache.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    
    {  if (pos != std::string::npos) {
    std::string fmt = cache_prefix.substr(pos + 5, cache_prefix.length());
    size_t cpos = fmt.rfind('-');
    if (cpos != std::string::npos) {
      return std::make_pair(fmt.substr(0, cpos), fmt.substr(cpos + 1, fmt.length()));
    } else {
      return std::make_pair(fmt, fmt);
    }
  } else {
    std::string raw = 'raw';
    return std::make_pair(raw, raw);
  }
}
    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
    TEST(Metric, Precision) {
  // When the limit for precision is not given, it takes the limit at
  // std::numeric_limits<unsigned>::max(); hence all values are very small
  // NOTE(AbdealiJK): Maybe this should be fixed to be num_row by default.
  xgboost::Metric * metric = xgboost::Metric::Create('pre');
  ASSERT_STREQ(metric->Name(), 'pre');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-7);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0, 1e-7);
    }
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
    namespace detail {
/*! \brief Implementation of gradient statistics pair. Template specialisation
 * may be used to overload different gradients types e.g. low precision, high
 * precision, integer, floating point. */
template <typename T>
class GradientPairInternal {
  /*! \brief gradient statistics */
  T grad_;
  /*! \brief second order gradient statistics */
  T hess_;
    }
    }
    
    
    {    return Node::fromYGNode(nodePtr);
}
    
        method(setPositionType);
    method(setPosition);
    method(setPositionPercent);
    
      T* operator->() const {
    return m_ptr;
  }