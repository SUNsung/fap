
        
          void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    IPC_SYNC_MESSAGE_ROUTED1_1(ShellViewHostMsg_SetForceClose, bool, int)
    
    
    {  int result = 0;
  RenderThread::Get()->Send(new ShellViewHostMsg_AllocateId(
      routing_id,
      &result));
  return scope.Escape(v8::Integer::New(isolate, result));
}
    
        blink::WebSecurityPolicy::addOriginAccessWhitelistEntry(GURL(sourceOrigin),
                                                             blink::WebString::fromUTF8(destinationProtocol),
                                                             blink::WebString::fromUTF8(destinationHost),
                                                             allowDestinationSubdomains);
    args.GetReturnValue().Set(v8::Undefined(isolate));
    return;
  }
  if (type == 'App' && method == 'RemoveOriginAccessWhitelistEntry') {
    std::string sourceOrigin        = *v8::String::Utf8Value(args[2]);
    std::string destinationProtocol = *v8::String::Utf8Value(args[3]);
    std::string destinationHost     = *v8::String::Utf8Value(args[4]);
    bool allowDestinationSubdomains = args[5]->ToBoolean()->Value();
    
    
namespace nwapi {
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.getListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardGetListSyncFunction);
};
    
        UINT width = 640;
    UINT height = 480;
    
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
    
    void compose_motion(InputArray _om1, InputArray _T1, InputArray _om2, InputArray _T2,
                    Mat& om3, Mat& T3, Mat& dom3dom1, Mat& dom3dT1, Mat& dom3dom2,
                    Mat& dom3dT2, Mat& dT3dom1, Mat& dT3dT1, Mat& dT3dom2, Mat& dT3dT2);
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
        static void CODEGEN_FUNCPTR Switch_GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
    {
        GetTexImage = (PFNGETTEXIMAGEPROC)IntGetProcAddress('glGetTexImage');
        GetTexImage(target, level, format, type, pixels);
    }
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CONV_LAYER_HPP_

    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    namespace caffe {
    }
    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    
    {	_lws_poll();
}
    
    		//normalize
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    #include <xgboost/logging.h>
#include <cctype>
#include <cstdio>
#include <string>
#include './io.h'
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    SEXP XGDMatrixCreateFromFile_R(SEXP fname, SEXP silent) {
  SEXP ret;
  R_API_BEGIN();
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromFile(CHAR(asChar(fname)), asInteger(silent), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    // implementation of inline functions.
inline void Learner::Predict(const SparseBatch::Inst& inst,
                             bool output_margin,
                             HostDeviceVector<bst_float>* out_preds,
                             unsigned ntree_limit) const {
  gbm_->PredictInstance(inst, &out_preds->HostVector(), ntree_limit);
  if (!output_margin) {
    obj_->PredTransform(out_preds);
  }
}
    
      // cloneCoalesced
  {
    auto chainCloneCoalesced = chainClone->cloneCoalesced();
    EXPECT_EQ(1, chainCloneCoalesced->countChainElements());
    EXPECT_EQ(fullLength, chainCloneCoalesced->computeChainDataLength());
    gen.seed(fillSeed);
    checkChain(chainCloneCoalesced.get(), gen);
  }
    
      AsyncIO* asyncIO_;
    
    path canonical_parent(const path& pth, const path& base) {
  return canonical(pth.parent_path(), base) / pth.filename();
}
    
    int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_cp) {
    if (argc != 3) {
      usage(argv[0]);
    }
    copy(argv[1], argv[2]);
  } else {
    if (argc != 1) {
      usage(argv[0]);
    }
    list();
  }
  return 0;
}

    
    TemporaryFile::~TemporaryFile() {
  try {
    fs::remove(path_);
  } catch (const fs::filesystem_error& e) {
    LOG(ERROR) << 'fs::remove: ' << folly::exceptionStr(e);
  }
}
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
    #include <folly/Optional.h>
#include <folly/Range.h>
#include <memory>
    
    #include <folly/Format.h>
#include <folly/experimental/logging/LogLevel.h>
#include <folly/experimental/logging/LogMessage.h>
#include <folly/portability/Time.h>
    
    #include <folly/FileUtil.h>
#include <folly/String.h>
#include <folly/experimental/logging/LoggerDB.h>