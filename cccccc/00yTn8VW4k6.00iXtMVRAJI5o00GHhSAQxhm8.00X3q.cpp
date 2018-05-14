
        
          double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    #if TENSORFLOW_USE_SYCL
    
    bool HloReachabilityMap::SetReachabilityToUnion(
    tensorflow::gtl::ArraySlice<const HloInstruction*> inputs,
    const HloInstruction* instruction) {
  BitVector& bit_vector = GetBitVector(instruction);
  tmp_bit_vector_ = bit_vector;
    }
    
      {
    // NOTE(mrry): The gRPC channel doesn't expose the target, so we
    // can't compare it for equality.
    auto a_1_1 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    auto a_1_2 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    // Poll a gRPC debug server by sending a small tensor repeatedly till success.
//
// Args:
//   server_url: gRPC URL of the server to poll, e.g., 'grpc://foo:3333'.
//   max_attempts: Maximum number of attempts.
//
// Returns:
//   Whether the polling succeeded within max_attempts.
bool PollTillFirstRequestSucceeds(const string& server_url,
                                  const size_t max_attempts);
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #ifndef ATOM_BROWSER_UI_DRAG_UTIL_H_
#define ATOM_BROWSER_UI_DRAG_UTIL_H_
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
    
    {}  // namespace atom
    
      // content::WebContentsObserver:
  void RenderViewDeleted(content::RenderViewHost*) override;
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    #define MARKUP_SIMPLE_FIELD(Id, Keyword, XMLKind) \
class Id final : public PrivateExtension, \
    private llvm::TrailingObjects<Id, MarkupASTNode *> { \
  friend TrailingObjects; \
\
  size_t NumChildren; \
\
  Id(ArrayRef<MarkupASTNode *> Children);\
\
public: \
  static Id *create(MarkupContext &MC, ArrayRef<MarkupASTNode *> Children); \
\
  ArrayRef<MarkupASTNode *> getChildren() { \
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren}; \
  } \
\
  ArrayRef<const MarkupASTNode *> getChildren() const { \
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren}; \
  } \
\
  static bool classof(const MarkupASTNode *N) { \
    return N->getKind() == ASTNodeKind::Id; \
  } \
};
#include 'swift/Markup/SimpleFields.def'
    
      void setHashbangBufferID(unsigned BufferID) {
    assert(HashbangBufferID == 0U && 'Hashbang buffer ID already set');
    HashbangBufferID = BufferID;
  }
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
        state->preFilterType = CV_STEREO_BM_XSOBEL; //CV_STEREO_BM_NORMALIZED_RESPONSE;
    state->preFilterSize = 9;
    state->preFilterCap = 31;
    state->SADWindowSize = 15;
    state->minDisparity = 0;
    state->numberOfDisparities = numberOfDisparities > 0 ? numberOfDisparities : 64;
    state->textureThreshold = 10;
    state->uniquenessRatio = 15;
    state->speckleRange = state->speckleWindowSize = 0;
    state->trySmallerWindows = 0;
    state->roi1 = state->roi2 = cvRect(0,0,0,0);
    state->disp12MaxDiff = -1;
    
    static void orderContours(const std::vector<std::vector<Point> >& contours, Point2f point, std::vector<std::pair<int, float> >& order)
{
    order.clear();
    size_t i, j, n = contours.size();
    for(i = 0; i < n; i++)
    {
        size_t ni = contours[i].size();
        double min_dist = std::numeric_limits<double>::max();
        for(j = 0; j < ni; j++)
        {
            double dist = norm(Point2f((float)contours[i][j].x, (float)contours[i][j].y) - point);
            min_dist = MIN(min_dist, dist);
        }
        order.push_back(std::pair<int, float>((int)i, (float)min_dist));
    }
    }
    
    #ifndef STREAM_PEER_OPEN_SSL_H
#define STREAM_PEER_OPEN_SSL_H
    
    	template <class N, class M>
	static MethodBind *bind_method(N p_method_name, M p_method, const Variant &p_def1, const Variant &p_def2, const Variant &p_def3) {
    }
    
    
    {	VisualScriptEditorVariableEdit() { undo_redo = NULL; }
};
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
    #include <map>
#include <functional>
    
    class FilesystemConfigPlugin : public ConfigPlugin {
 public:
  Status genConfig(std::map<std::string, std::string>& config);
  Status genPack(const std::string& name,
                 const std::string& value,
                 std::string& pack);
};
    
    std::string stringFromCFString(const CFStringRef& cf_string) {
  // Access, then convert the CFString. CFStringGetCStringPtr is less-safe.
  CFIndex length = CFStringGetLength(cf_string);
  char* buffer = (char*)malloc(length + 1);
  if (buffer == nullptr) {
    return '';
  }
    }
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  auto status = ::strncpy_s(dst, nelms, src, count);
  if (status != 0) {
    return Status(1, 'Failed to strncpy_s: ' + status);
  }
    }
    
    void WmiResultItem::PrintType(const std::string& name) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    std::cerr << 'Failed: ' << name << '\n';
  } else {
    std::cout << 'Name=' << name << ', Type=' << value.vt << '\n';
    if (value.vt == VT_I4) {
      std::cout << '  Value=' << value.lVal << '\n';
    } else if (value.vt == VT_BSTR) {
      std::wcout << '  Value=' << value.bstrVal << '\n';
    }
  }
  VariantClear(&value);
}
    
    TEST(Metric, Error) {
  xgboost::Metric * metric = xgboost::Metric::Create('error');
  ASSERT_STREQ(metric->Name(), 'error');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
    }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSaveBinary
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSaveBinary
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfname, jint jsilent) {
  DMatrixHandle handle = (DMatrixHandle) jhandle;
  const char* fname = jenv->GetStringUTFChars(jfname, 0);
  int ret = XGDMatrixSaveBinary(handle, fname, jsilent);
  if (fname) jenv->ReleaseStringUTFChars(jfname, (const char *)fname);
  return ret;
}
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
      bool CheckConvergence() {
    if (param_.tolerance == 0.0f) return false;
    if (is_converged_) return true;
    if (previous_model_.weight.size() != model_.weight.size()) {
      previous_model_ = model_;
      return false;
    }
    float largest_dw = 0.0;
    for (size_t i = 0; i < model_.weight.size(); i++) {
      largest_dw = std::max(
          largest_dw, std::abs(model_.weight[i] - previous_model_.weight[i]));
    }
    previous_model_ = model_;
    }
    
    
    {
    {XGBOOST_REGISTER_LINEAR_UPDATER(ShotgunUpdater, 'shotgun')
    .describe(
        'Update linear model according to shotgun coordinate descent '
        'algorithm.')
    .set_body([]() { return new ShotgunUpdater(); });
}  // namespace linear
}  // namespace xgboost
