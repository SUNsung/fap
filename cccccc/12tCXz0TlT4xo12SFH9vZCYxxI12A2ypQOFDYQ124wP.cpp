
        
          TemporaryFile() {
    path = tmppath();
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
          typename T6, typename T7, typename T8, typename T9>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9>& t,
             ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
    // This header implements a family of generic predicate assertion
// macros:
//
//   ASSERT_PRED_FORMAT1(pred_format, v1)
//   ASSERT_PRED_FORMAT2(pred_format, v1, v2)
//   ...
//
// where pred_format is a function or functor that takes n (in the
// case of ASSERT_PRED_FORMATn) values and their source expression
// text, and returns a testing::AssertionResult.  See the definition
// of ASSERT_EQ in gtest.h for an example.
//
// If you don't care about formatting, you can use the more
// restrictive version:
//
//   ASSERT_PRED1(pred, v1)
//   ASSERT_PRED2(pred, v1, v2)
//   ...
//
// where pred is an n-ary function or functor that returns bool,
// and the values v1, v2, ..., must support the << operator for
// streaming to std::ostream.
//
// We also define the EXPECT_* variations.
//
// For now we only support predicates whose arity is at most 5.
// Please email googletestframework@googlegroups.com if you need
// support for higher arities.
    
    // This exception is thrown by (and only by) a failed Google Test
// assertion when GTEST_FLAG(throw_on_failure) is true (if exceptions
// are enabled).  We derive it from std::runtime_error, which is for
// errors presumably detectable only at run time.  Since
// std::runtime_error inherits from std::exception, many testing
// frameworks know how to extract and print the message inside it.
class GTEST_API_ GoogleTestFailureException : public ::std::runtime_error {
 public:
  explicit GoogleTestFailureException(const TestPartResult& failure);
};
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_)};
    return ValuesIn(array);
  }
    
    // A handy wrapper for AddRef.
#define GTEST_ADD_REF_(T) typename ::std::tr1::gtest_internal::AddRef<T>::type
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    #include <dmlc/registry.h>
    
      virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    param_.InitAllowUnknown(kwargs);
    base_->Init(kwargs);
    rnd_.seed(kRandMagic + param_.seed);
    outimg_.set_pad(false);
    meanimg_.set_pad(false);
    if (param_.mean_img.length() != 0) {
      std::unique_ptr<dmlc::Stream> fi(
          dmlc::Stream::Create(param_.mean_img.c_str(), 'r', true));
      if (fi.get() == nullptr) {
        this->CreateMeanImg();
      } else {
        fi.reset(nullptr);
        if (param_.verbose) {
          LOG(INFO) << 'Load mean image from ' << param_.mean_img;
        }
        // use python compatible ndarray store format
        std::vector<NDArray> data;
        std::vector<std::string> keys;
        {
          std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(param_.mean_img.c_str(), 'r'));
          NDArray::Load(fi.get(), &data, &keys);
        }
        CHECK_EQ(data.size(), 1U)
            << 'Invalid mean image file format';
        data[0].WaitToRead();
        mshadow::Tensor<cpu, 3> src = data[0].data().get<cpu, 3, real_t>();
        meanimg_.Resize(src.shape_);
        mshadow::Copy(meanimg_, src);
        meanfile_ready_ = true;
      }
    }
  }
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(req[bs::kOut], kWriteTo);
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 2U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    }
    
      void EmitXX1Form(const uint8_t op,
                   const RegNumber s,
                   const RegNumber ra,
                   const RegNumber rb,
                   const uint16_t xo,
                   const bool tx) {
    }
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
            friend bool operator==(Rational const& lhs, Rational const& rhs);
        friend bool operator!=(Rational const& lhs, Rational const& rhs);
        friend bool operator<(Rational const& lhs, Rational const& rhs);
        friend bool operator>(Rational const& lhs, Rational const& rhs);
        friend bool operator<=(Rational const& lhs, Rational const& rhs);
        friend bool operator>=(Rational const& lhs, Rational const& rhs);
    
            static property Windows::UI::Xaml::DependencyProperty^ AnnouncementProperty
        {
            Windows::UI::Xaml::DependencyProperty^ get()
            {
                return s_announcementProperty;
            }
        }
    
            if (id.compare(L'sDecimal') == 0)
        {
            return localizationSettings.GetDecimalSeparatorStr();
        }
    
    void NetworkManager::OnNetworkStatusChange(_In_ Object^ /*sender*/)
{
    NetworkBehaviorChanged(GetNetworkAccessBehavior());
}
    
            TraceActivity(
            winrt::Windows::Foundation::Diagnostics::LoggingChannel channel,
            std::wstring_view activityName,
            winrt::Windows::Foundation::Diagnostics::LoggingFields fields) :
            m_channel(channel),
            m_activityName(activityName),
            m_fields(fields),
            m_activity(nullptr)
        {
            // Write the activity's START event. Note that you must not specify keyword
            // or level for START and STOP events because they always use the activity's
            // keyword and level.
            m_activity = m_channel.StartActivity(
                m_activityName,
                m_fields,
                winrt::Windows::Foundation::Diagnostics::LoggingLevel::Verbose,
                winrt::Windows::Foundation::Diagnostics::LoggingOptions(WINEVENT_KEYWORD_RESPONSE_TIME)
                );
        }
    
    void CurrencyHttpClient::SetResponseLanguage(String^ responseLanguage)
{
    m_responseLanguage = responseLanguage;
}
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
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
    
    // This is a helpful data structure to define parameters
// You do not have to use it.
// see http://dmlc-core.readthedocs.org/en/latest/parameter.html
// for introduction of this module.
struct MyLogisticParam : public dmlc::Parameter<MyLogisticParam> {
  float scale_neg_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(MyLogisticParam) {
    DMLC_DECLARE_FIELD(scale_neg_weight).set_default(1.0f).set_lower_bound(0.0f)
        .describe('Scale the weight of negative examples by this factor');
  }
};
    
        const auto ngroup = static_cast<bst_omp_uint>(gptr.size() - 1);
    #pragma omp parallel
    {
      // parall construct, declare random number generator here, so that each
      // thread use its own random number generator, seed by thread id and current iteration
      common::RandomEngine rnd(iter * 1111 + omp_get_thread_num());
    }