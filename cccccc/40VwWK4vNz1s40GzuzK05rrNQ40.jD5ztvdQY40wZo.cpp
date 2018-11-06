
        
        
    {    if (tmp.handle_data().is_set()) {
      input_handle_shapes_and_types[i].reset(
          new std::vector<std::pair<TensorShapeProto, DataType>>);
      auto& v = *input_handle_shapes_and_types[i];
      for (const auto& x : tmp.handle_data().shape_and_type()) {
        v.emplace_back(x.shape(), x.dtype());
      }
    }
  }
    
    class GenPythonOp {
 public:
  GenPythonOp(const OpDef& op_def, const ApiDef& api_def,
              const string& function_name);
  virtual ~GenPythonOp();
    }
    
    namespace tensorflow {
    }
    
    #include <Python.h>
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Safe_TF_TensorPtr make_safe(TF_Tensor* tensor) {
  return Safe_TF_TensorPtr(tensor);
}
    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    
    {  SE_DISALLOW_COPY_AND_ASSIGN(ScopedActivateExecutorContext);
};
    
    QT_BEGIN_NAMESPACE
class QIcon;
class QMenu;
class QWidget;
QT_END_NAMESPACE
    
        /** Specify model role to use as ordinal value (defaults to Qt::UserRole) */
    void setRole(int role);
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    
    {    secp256k1_fe_mul(&r->z, &a->z, &a->y);
    secp256k1_fe_mul_int(&r->z, 2);       /* Z' = 2*Y*Z (2) */
    secp256k1_fe_sqr(&t1, &a->x);
    secp256k1_fe_mul_int(&t1, 3);         /* T1 = 3*X^2 (3) */
    secp256k1_fe_sqr(&t2, &t1);           /* T2 = 9*X^4 (1) */
    secp256k1_fe_sqr(&t3, &a->y);
    secp256k1_fe_mul_int(&t3, 2);         /* T3 = 2*Y^2 (2) */
    secp256k1_fe_sqr(&t4, &t3);
    secp256k1_fe_mul_int(&t4, 2);         /* T4 = 8*Y^4 (2) */
    secp256k1_fe_mul(&t3, &t3, &a->x);    /* T3 = 2*X*Y^2 (1) */
    r->x = t3;
    secp256k1_fe_mul_int(&r->x, 4);       /* X' = 8*X*Y^2 (4) */
    secp256k1_fe_negate(&r->x, &r->x, 4); /* X' = -8*X*Y^2 (5) */
    secp256k1_fe_add(&r->x, &t2);         /* X' = 9*X^4 - 8*X*Y^2 (6) */
    secp256k1_fe_negate(&t2, &t2, 1);     /* T2 = -9*X^4 (2) */
    secp256k1_fe_mul_int(&t3, 6);         /* T3 = 12*X*Y^2 (6) */
    secp256k1_fe_add(&t3, &t2);           /* T3 = 12*X*Y^2 - 9*X^4 (8) */
    secp256k1_fe_mul(&r->y, &t1, &t3);    /* Y' = 36*X^3*Y^2 - 27*X^6 (1) */
    secp256k1_fe_negate(&t2, &t4, 2);     /* T2 = -8*Y^4 (3) */
    secp256k1_fe_add(&r->y, &t2);         /* Y' = 36*X^3*Y^2 - 27*X^6 - 8*Y^4 (4) */
}
    
    #define Round(a,b,c,d,e,f,g,h,k,w) do { \
    uint32_t t1 = (h) + Sigma1(e) + Ch((e), (f), (g)) + (k) + (w); \
    uint32_t t2 = Sigma0(a) + Maj((a), (b), (c)); \
    (d) += t1; \
    (h) = t1 + t2; \
} while(0)
    
    void test_ecdh_generator_basepoint(void) {
    unsigned char s_one[32] = { 0 };
    secp256k1_pubkey point[2];
    int i;
    }
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    void MenuItem::SetLabel(const std::string& label) {
  is_modified_ = true;
  label_ = base::UTF8ToUTF16(label);
    }
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    upb_pbdecoder *upb_pbdecoder_create(upb_env *e,
                                    const upb_pbdecodermethod *method,
                                    upb_sink *output);
const upb_pbdecodermethod *upb_pbdecoder_method(const upb_pbdecoder *d);
upb_bytessink *upb_pbdecoder_input(upb_pbdecoder *d);
uint64_t upb_pbdecoder_bytesparsed(const upb_pbdecoder *d);
size_t upb_pbdecoder_maxnesting(const upb_pbdecoder *d);
bool upb_pbdecoder_setmaxnesting(upb_pbdecoder *d, size_t max);
void upb_pbdecoder_reset(upb_pbdecoder *d);
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    #include <gtest/gtest.h>
    
    ImmutableMapFieldGenerator::
ImmutableMapFieldGenerator(const FieldDescriptor* descriptor,
                                       int messageBitIndex,
                                       int builderBitIndex,
                                       Context* context)
  : descriptor_(descriptor), name_resolver_(context->GetNameResolver())  {
  SetMessageVariables(descriptor, messageBitIndex, builderBitIndex,
                      context->GetFieldGeneratorInfo(descriptor),
                      context, &variables_);
}
    
      printer->Print(
    'com.google.protobuf.Descriptors.FileDescriptor.'
    'InternalDescriptorAssigner assigner =\n'
    '    new com.google.protobuf.Descriptors.FileDescriptor.'
    '    InternalDescriptorAssigner() {\n'
    '      public com.google.protobuf.ExtensionRegistry assignDescriptors(\n'
    '          com.google.protobuf.Descriptors.FileDescriptor root) {\n'
    '        descriptor = root;\n'
    // Custom options will be handled when immutable messages' outer class is
    // loaded. Here we just return null and let custom options be unknown
    // fields.
    '        return null;\n'
    '      }\n'
    '    };\n');
    
    /// @brief Fills a Blob with constant or randomly-generated data.
template <typename Dtype>
class Filler {
 public:
  explicit Filler(const FillerParameter& param) : filler_param_(param) {}
  virtual ~Filler() {}
  virtual void Fill(Blob<Dtype>* blob) = 0;
 protected:
  FillerParameter filler_param_;
};  // class Filler
    
    #include 'caffe/layers/neuron_layer.hpp'
    
      virtual inline const char* type() const { return 'BatchNorm'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'BatchReindex'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
      // Delete everything
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Delete(WriteOptions(), Key(i)));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      for (int i = 1; i < argc; i++) {
    double d;
    int n;
    char junk;
    if (leveldb::Slice(argv[i]).starts_with('--benchmarks=')) {
      FLAGS_benchmarks = argv[i] + strlen('--benchmarks=');
    } else if (sscanf(argv[i], '--compression_ratio=%lf%c', &d, &junk) == 1) {
      FLAGS_compression_ratio = d;
    } else if (sscanf(argv[i], '--histogram=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_histogram = n;
    } else if (sscanf(argv[i], '--use_existing_db=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_use_existing_db = n;
    } else if (sscanf(argv[i], '--reuse_logs=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_reuse_logs = n;
    } else if (sscanf(argv[i], '--num=%d%c', &n, &junk) == 1) {
      FLAGS_num = n;
    } else if (sscanf(argv[i], '--reads=%d%c', &n, &junk) == 1) {
      FLAGS_reads = n;
    } else if (sscanf(argv[i], '--threads=%d%c', &n, &junk) == 1) {
      FLAGS_threads = n;
    } else if (sscanf(argv[i], '--value_size=%d%c', &n, &junk) == 1) {
      FLAGS_value_size = n;
    } else if (sscanf(argv[i], '--write_buffer_size=%d%c', &n, &junk) == 1) {
      FLAGS_write_buffer_size = n;
    } else if (sscanf(argv[i], '--max_file_size=%d%c', &n, &junk) == 1) {
      FLAGS_max_file_size = n;
    } else if (sscanf(argv[i], '--block_size=%d%c', &n, &junk) == 1) {
      FLAGS_block_size = n;
    } else if (sscanf(argv[i], '--cache_size=%d%c', &n, &junk) == 1) {
      FLAGS_cache_size = n;
    } else if (sscanf(argv[i], '--bloom_bits=%d%c', &n, &junk) == 1) {
      FLAGS_bloom_bits = n;
    } else if (sscanf(argv[i], '--open_files=%d%c', &n, &junk) == 1) {
      FLAGS_open_files = n;
    } else if (strncmp(argv[i], '--db=', 5) == 0) {
      FLAGS_db = argv[i] + 5;
    } else {
      fprintf(stderr, 'Invalid flag '%s'\n', argv[i]);
      exit(1);
    }
  }
    
    // Convenience methods
Status DBImpl::Put(const WriteOptions& o, const Slice& key, const Slice& val) {
  return DB::Put(o, key, val);
}
    
    
    {}  // namespace leveldb

    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      // Offset of the last record returned by ReadRecord.
  uint64_t last_record_offset_;
  // Offset of the first location past the end of buffer_.
  uint64_t end_of_buffer_offset_;
    
    namespace leveldb {
    }
    
    template<typename Key, class Comparator>
inline void SkipList<Key,Comparator>::Iterator::Prev() {
  // Instead of using explicit 'prev' links, we just search for the
  // last node that falls before key.
  assert(Valid());
  node_ = list_->FindLessThan(node_->key);
  if (node_ == list_->head_) {
    node_ = nullptr;
  }
}
    
        /*virtual*/ void LearnerRMSProp::ResetSmoothedGradients() /*override*/
    {
        LearnerBase::ResetSmoothedGradients();
        m_smoothedCount = 0.0;
    }
    
        private:
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    
    {
    {            if (map.size() > RAND_MAX * (size_t) RAND_MAX)
                RuntimeError('RandomOrdering: too large training set: need to change to different random generator!');
            srand((unsigned int) seed);
            size_t retries = 0;
            foreach_index (t, map)
            {
                for (int tries = 0; tries < 5; tries++)
                {
                    // swap current pos with a random position
                    // Random positions are limited to t+randomizationrange.
                    // This ensures some locality suitable for paging with a sliding window.
                    const size_t tbegin = max((size_t) t, randomizationrange / 2) - randomizationrange / 2; // range of window  --TODO: use bounds() function above
                    const size_t tend = min(t + randomizationrange / 2, map.size());
                    assert(tend >= tbegin);                  // (guard against potential numeric-wraparound bug)
                    const size_t trand = rand(tbegin, tend); // random number within windows
                    assert((size_t) t <= trand + randomizationrange / 2 && trand < (size_t) t + randomizationrange / 2);
                    // if range condition is fulfilled then swap
                    if (trand <= map[t] + randomizationrange / 2 && map[t] < trand + randomizationrange / 2 && (size_t) t <= map[trand] + randomizationrange / 2 && map[trand] < (size_t) t + randomizationrange / 2)
                    {
                        std::swap(map[t], map[trand]);
                        break;
                    }
                    // but don't multi-swap stuff out of its range (for swapping positions that have been swapped before)
                    // instead, try again with a different random number
                    retries++;
                }
            }
            fprintf(stderr, 'RandomOrdering: %lu retries for %lu elements (%.1f%%) to ensure window condition\n', (unsigned long) retries, (unsigned long) map.size(), 100.0 * retries / map.size());
            // ensure the window condition
            foreach_index (t, map)
                assert((size_t) t <= map[t] + randomizationrange / 2 && map[t] < (size_t) t + randomizationrange / 2);
#if 0 // and a live check since I don't trust myself here yet
            foreach_index (t, map) if (!((size_t) t <= map[t] + randomizationrange/2 && map[t] < (size_t) t + randomizationrange/2))
            {
                fprintf (stderr, 'RandomOrdering: windowing condition violated %d -> %d\n', t, map[t]);
                LogicError('RandomOrdering: windowing condition violated');
            }
#endif
#if 0 // test whether it is indeed a unique complete sequence
            auto map2 = map;
            ::sort (map2.begin(), map2.end());
            foreach_index (t, map2) assert (map2[t] == (size_t) t);
#endif
            fprintf(stderr, 'RandomOrdering: recached sequence for seed %d: %d, %d, ...\n', (int) seed, (int) map[0], (int) map[1]);
            currentseed = seed;
        }
        return map; // caller can now access it through operator[]
    }