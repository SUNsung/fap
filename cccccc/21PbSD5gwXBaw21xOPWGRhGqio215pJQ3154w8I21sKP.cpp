
        
        
    {  typedef std::unordered_map<string, DeviceAttributes> StatusMap;
  StatusMap device_status_cache_ GUARDED_BY(mu_);
};
    
    namespace tensorflow {
namespace functor {
// TODO(b/32239807) No GPU ops for mod yet.
}  // namespace functor
}  // namespace tensorflow
    
    
    {#if GOOGLE_CUDA
// A special GPU kernel for int32.
// TODO(b/25387198): Also enable int32 in device memory. This kernel
// registration requires all int32 inputs and outputs to be in host memory.
REGISTER_KERNEL_BUILDER(Name('Mod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
REGISTER_KERNEL_BUILDER(Name('TruncateMod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
#endif
}  // namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/batchnorm_expander.h'
    
    #ifndef TENSORFLOW_DEBUGGER_STATE_IMPL_H_
#define TENSORFLOW_DEBUGGER_STATE_IMPL_H_
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
    Status PowGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  std::vector<FDH::Node> nodes = {
    {{'z'}, 'Pow', {'x', 'y'}},
    // dz * y * Pow(x, y - 1)
    FDH::Const('const_zero', 0.0f),
    FDH::Const('const_one', 1.0f),
    {{'zero'}, 'Cast', {'const_zero'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
    {{'one'}, 'Cast', {'const_one'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
    {{'t0'}, 'Sub', {'y', 'one'}, {}, {'dz'}},
    {{'t1'}, 'Pow', {'x', 't0'}},
    {{'t2'}, 'Mul', {'dz', 'y'}},
    {{'gx'}, 'Mul', {'t1', 't2'}},
    {{'unsafe_log'}, 'Log', {'x'}, {}, {'dz'}},
    {{'zeros'}, 'ZerosLike', {'x'}}};
  // clang-format on
  std::vector<FDH::Node> log_x_handling;
  DataType T;
  TF_RETURN_IF_ERROR(GetNodeAttr(attrs, 'T', &T));
  if (T == DT_COMPLEX64 || T == DT_COMPLEX128) {
    // dz * z * (x != 0 ? Log(x) : 0)
    // clang-format off
    log_x_handling = {
      {{'nz_x'}, 'NotEqual', {'x', 'zero'}},
      {{'safe_log'}, 'Select', {'nz_x', 'unsafe_log', 'zeros'}}};
    // clang-format on
  } else {
    // dz * z * (x > 0 ? Log(x) : 0)
    // clang-format off
    log_x_handling = {
      {{'pos_x'}, 'Greater', {'x', 'zero'}},
      {{'safe_log'}, 'Select', {'pos_x', 'unsafe_log', 'zeros'}}};
    // clang-format on
  }
  nodes.insert(nodes.end(), log_x_handling.begin(), log_x_handling.end());
  nodes.push_back({{'t4'}, 'Mul', {'dz', 'z'}});
  nodes.push_back({{'gy'}, 'Mul', {'safe_log', 't4'}});
  return GradForBinaryCwise(g, nodes);
}
REGISTER_OP_GRADIENT('Pow', PowGrad);
    
      virtual bool lookupAdditions(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
      ArrayRef<const swift::markup::MarkupASTNode *> getBodyNodes() const {
    return Parts.BodyNodes;
  }
    
    namespace swift {
namespace syntax {
    }
    }
    
      /// When emitting fixits as code edits, apply all fixits from diagnostics
  /// without any filtering.
  bool FixitCodeForAllDiagnostics = false;
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    namespace swift {
    }
    
    #endif
    
    class CanType;
class SILValue;
    
    #define JSON_ASSERT_MESSAGE(condition, message)                                \
  if (!(condition)) {                                                          \
    JSON_FAIL_MESSAGE(message);                                                \
  }
    
    PyDescriptorDatabase::PyDescriptorDatabase(PyObject* py_database)
    : py_database_(py_database) {
  Py_INCREF(py_database_);
}
    
      string data = message.SerializeAsString();
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    
    {}  // namespace caffe
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #ifndef TEST_QPS_DRIVER_H
#define TEST_QPS_DRIVER_H
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    
    {
    {}  // namespace
}  // namespace grpc
    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}
    
     private:
  static Result Sample();
    
    PowerIphone::PowerIphone() :
		nsecs_left(-1),
		percent_left(-1),
		power_state(OS::POWERSTATE_UNKNOWN) {
	// TODO Auto-generated constructor stub
}
    
    void WebSocketClient::_on_connect(String p_protocol) {
    }
    
    			if (!playback->is_playing()) {
				emit_signal(SceneStringNames::get_singleton()->finished);
			}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    int opus_fft_alloc_arm_neon(kiss_fft_state *st);
void opus_fft_free_arm_neon(kiss_fft_state *st);
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    /*Constants used by the entropy encoder/decoder.*/
    
    #endif /* CELT_FIXED_GENERIC_MIPSR1_H */

    
    # if defined(__clang__) || !defined(__OPTIMIZE__)
#  define OP_CVTEPI8_EPI32_M32(x) \
 (_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(int *)(x))))
# else
#  define OP_CVTEPI8_EPI32_M32(x) \
 (_mm_cvtepi8_epi32(*(__m128i *)(x)))
#endif
    
    
    {    ret = ops_count;
    ops_count = 0;
    return(ret);
}
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
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
    
      if (npart != 1) {
    LOG(CONSOLE) << 'Load part of data ' << partid
                 << ' of ' << npart << ' parts';
  }
  // legacy handling of binary data loading
  if (file_format == 'auto' && npart == 1) {
    int magic;
    std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
    if (fi != nullptr) {
      common::PeekableInStream is(fi.get());
      if (is.PeekRead(&magic, sizeof(magic)) == sizeof(magic) &&
          magic == data::SimpleCSRSource::kMagic) {
        std::unique_ptr<data::SimpleCSRSource> source(new data::SimpleCSRSource());
        source->LoadBinary(&is);
        DMatrix* dmat = DMatrix::Create(std::move(source), cache_file);
        if (!silent) {
          LOG(CONSOLE) << dmat->Info().num_row_ << 'x' << dmat->Info().num_col_ << ' matrix with '
                       << dmat->Info().num_nonzero_ << ' entries loaded from ' << uri;
        }
        return dmat;
      }
    }
  }
    
    
    {
    {}  // namespace data
}  // namespace xgboost

    
      fs = dmlc::Stream::Create(tmp_file.c_str(), 'r');
  xgboost::MetaInfo inforead;
  inforead.LoadBinary(fs);
  EXPECT_EQ(inforead.labels_, info.labels_);
  EXPECT_EQ(inforead.num_col_, info.num_col_);
  EXPECT_EQ(inforead.num_row_, info.num_row_);
    
    /*!
 * \brief Whether customize the logger outputs.
 */
#ifndef XGBOOST_CUSTOMIZE_LOGGER
#define XGBOOST_CUSTOMIZE_LOGGER XGBOOST_STRICT_R_MODE
#endif
    
    #include '../common/host_device_vector.h'
    
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