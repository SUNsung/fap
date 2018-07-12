Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #ifndef CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
#define CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
    
    
    {  *icon = item->icon_;
  return true;
}
    
    
    {    block_active_ = false;
    g_signal_connect(menu_item_, 'activate',
                     G_CALLBACK(OnClickThunk), this);
  }
    
    void NwDesktopCaptureMonitor::OnSourceAdded(DesktopMediaList* list, int index) {
    DesktopMediaList::Source src = list->GetSource(index);
    }
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    static HRESULT InitDevice()
{
    HRESULT hr = S_OK;
    }
    
    void CV_ModelEstimator2_Test::get_test_array_types_and_sizes( int /*test_case_idx*/,
                                                              vector<vector<Size> > &sizes, vector<vector<int> > &types )
{
    RNG &rng = ts->get_rng();
    checkPartialSubsets = (cvtest::randInt(rng) % 2 == 0);
    }
    
    // GL type for 'half' precision (s10e5) float data in host memory
#ifndef GL_ARB_half_float_pixel
    typedef unsigned short GLhalfARB;
#endif
#ifndef GL_NV_half_float
    typedef unsigned short GLhalfNV;
#endif
    
    #if defined(_WIN32)
#include <windows.h>
    
    static void RunSynchronousUnaryPingPong() {
  gpr_log(GPR_INFO, 'Running Synchronous Unary Ping Pong');
    }
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
     private:
  bool PrintPreamble(grpc_generator::Printer* out);
  bool PrintBetaPreamble(grpc_generator::Printer* out);
  bool PrintGAServices(grpc_generator::Printer* out);
  bool PrintBetaServices(grpc_generator::Printer* out);
    
    namespace grpc {
namespace testing {
    }
    }
    
    #include 'src/proto/grpc/testing/metrics.grpc.pb.h'
#include 'src/proto/grpc/testing/metrics.pb.h'
    
    
    {  gpr_subprocess* const subprocess_;
};
    
    	PoolByteArray out;
	String certs_path = GLOBAL_DEF('network/ssl/certificates', '');
	ProjectSettings::get_singleton()->set_custom_property_info('network/ssl/certificates', PropertyInfo(Variant::STRING, 'network/ssl/certificates', PROPERTY_HINT_FILE, '*.crt'));
    
    	virtual Error get_data(uint8_t *p_buffer, int p_bytes);
	virtual Error get_partial_data(uint8_t *p_buffer, int p_bytes, int &r_received);
    
    Ref<VideoStream> VideoPlayer::get_stream() const {
    }
    
    	static void _bind_methods();
    
        FreeType font driver for pcf fonts
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    void SparsePageSource::BeforeFirst() {
  base_rowid_ = 0;
  clock_ptr_ = 0;
  for (auto& p : prefetchers_) {
    p->BeforeFirst();
  }
}
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }  // NOLINT
    }
    
    TEST(Metric, LogLoss) {
  xgboost::Metric * metric = xgboost::Metric::Create('logloss');
  ASSERT_STREQ(metric->Name(), 'logloss');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              1.2039f, 0.001f);
}
    
    SEXP XGBoosterGetAttr_R(SEXP handle, SEXP name) {
  SEXP out;
  R_API_BEGIN();
  int success;
  const char *val;
  CHECK_CALL(XGBoosterGetAttr(R_ExternalPtrAddr(handle),
                              CHAR(asChar(name)),
                              &val,
                              &success));
  if (success) {
    out = PROTECT(allocVector(STRSXP, 1));
    SET_STRING_ELT(out, 0, mkChar(val));
  } else {
    out = PROTECT(R_NilValue);
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
    TEST(Metric, AMS) {
  EXPECT_ANY_THROW(xgboost::Metric::Create('ams'));
  xgboost::Metric * metric = xgboost::Metric::Create('ams@0.5f');
  ASSERT_STREQ(metric->Name(), 'ams@0.5');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.311f, 0.001f);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.29710f, 0.001f);
    }
    
    /*! \brief High precision gradient statistics pair */
using GradientPairPrecise = detail::GradientPairInternal<double>;
    
        // Compress
    int maxlen = data_sz + 512 + (data_sz >> 2) + sizeof(int); // total guess
    char* compressed = use_compression ? new char[maxlen] : data;
    int compressed_sz = use_compression ? stb_compress((stb_uchar*)compressed, (stb_uchar*)data, data_sz) : data_sz;
    if (use_compression)
		memset(compressed + compressed_sz, 0, maxlen - compressed_sz);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    #include 'env/mock_env.h'
    
       You can contact the author at :
   - xxHash source repository : http://code.google.com/p/xxhash/
*/
    
    
// The class for unit-testing
class StringAppendOperatorTest : public testing::Test {
 public:
  StringAppendOperatorTest() {
    DestroyDB(kDbName, Options());    // Start each test with a fresh DB
  }
    }
    
      if(m_jcallback_obj != nullptr) {    
    env->DeleteGlobalRef(m_jcallback_obj);
  }
    
    void SyncPoint::ClearTrace() {
  impl_->ClearTrace();
}
    
      // Same as ::Insert
  // Returns false if MemTableRepFactory::CanHandleDuplicatedKey() is true and
  // the <key, seq> already exists.
  virtual bool InsertKey(KeyHandle handle) {
    Insert(handle);
    return true;
  }
    
      // check the file is not locked
  ASSERT_TRUE( AssertFileIsNotLocked() );