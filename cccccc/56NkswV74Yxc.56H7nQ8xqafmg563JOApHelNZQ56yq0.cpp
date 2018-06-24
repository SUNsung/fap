
        
        // A pass which performs constant folding in order to avoid unnecessary
// computation on constants.
class HloConstantFolding : public HloPassInterface {
 public:
  tensorflow::StringPiece name() const override { return 'constant_folding'; }
    }
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/inputbuffer.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
    #endif  // GOOGLE_CUDA

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      virtual bool lookupAdditions(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
      Optional<const swift::markup::Paragraph *> getBrief() const {
    return Parts.Brief;
  }
    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
    #include 'Callee.h'
#include 'ManagedValue.h'
#include 'swift/AST/Types.h'
#include 'swift/Basic/LLVM.h'
#include 'swift/SIL/SILLocation.h'
#include <memory>
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
      scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
        bool ReadImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::vector<unsigned char> encoded_image;
      SkBitmap bitmap = clipboard_->ReadImage(ui::CLIPBOARD_TYPE_COPY_PASTE);
    }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    #endif //NW_SRC_API_NW_SCREEN_API_H_

    
    #include <google/protobuf/pyext/descriptor_database.h>
    
    namespace google {
namespace protobuf {
namespace {
    }
    }
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    #include <string>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
    class ImmutableLazyMessageFieldGenerator
    : public ImmutableMessageFieldGenerator {
 public:
  explicit ImmutableLazyMessageFieldGenerator(
      const FieldDescriptor* descriptor, int messageBitIndex,
      int builderBitIndex, Context* context);
  ~ImmutableLazyMessageFieldGenerator();
    }
    
    
    {
    {}}
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    
    {  int words_appended = 0;
  do {
    int numSpaces = preserve_interword_spaces_ ? it_->word()->word->space()
                                               : (words_appended > 0);
    for (int i = 0; i < numSpaces; ++i) {
      *text += ' ';
    }
    AppendUTF8WordText(text);
    words_appended++;
    if (BidiDebug(2)) {
      tprintf('Num spaces=%d, text=%s\n', numSpaces, text->string());
    }
  } while (Next(RIL_WORD) && !IsAtBeginningOf(RIL_TEXTLINE));
  if (BidiDebug(1)) {
    tprintf('%d words printed\n', words_appended);
  }
  *text += line_separator_;
  // If we just finished a paragraph, add an extra newline.
  if (IsAtBeginningOf(RIL_PARA)) {
    *text += paragraph_separator_;
  }
}
    
      /// Pix vs raw, which to use? Pix is the preferred input for efficiency,
  /// since raw buffers are copied.
  /// SetImage for Pix clones its input, so the source pix may be pixDestroyed
  /// immediately after, but may not go away until after the Thresholder has
  /// finished with it.
  void SetImage(const Pix* pix);
    
    const int16_t idirtab[] = {
  1000, 0, 998, 49, 995, 98, 989, 146,
  980, 195, 970, 242, 956, 290, 941, 336,
  923, 382, 903, 427, 881, 471, 857, 514,
  831, 555, 803, 595, 773, 634, 740, 671,
  707, 707, 671, 740, 634, 773, 595, 803,
  555, 831, 514, 857, 471, 881, 427, 903,
  382, 923, 336, 941, 290, 956, 242, 970,
  195, 980, 146, 989, 98, 995, 49, 998,
  0, 1000, -49, 998, -98, 995, -146, 989,
  -195, 980, -242, 970, -290, 956, -336, 941,
  -382, 923, -427, 903, -471, 881, -514, 857,
  -555, 831, -595, 803, -634, 773, -671, 740,
  -707, 707, -740, 671, -773, 634, -803, 595,
  -831, 555, -857, 514, -881, 471, -903, 427,
  -923, 382, -941, 336, -956, 290, -970, 242,
  -980, 195, -989, 146, -995, 98, -998, 49,
  -1000, 0, -998, -49, -995, -98, -989, -146,
  -980, -195, -970, -242, -956, -290, -941, -336,
  -923, -382, -903, -427, -881, -471, -857, -514,
  -831, -555, -803, -595, -773, -634, -740, -671,
  -707, -707, -671, -740, -634, -773, -595, -803,
  -555, -831, -514, -857, -471, -881, -427, -903,
  -382, -923, -336, -941, -290, -956, -242, -970,
  -195, -980, -146, -989, -98, -995, -49, -998,
  0, -1000, 49, -998, 98, -995, 146, -989,
  195, -980, 242, -970, 290, -956, 336, -941,
  382, -923, 427, -903, 471, -881, 514, -857,
  555, -831, 595, -803, 634, -773, 671, -740,
  707, -707, 740, -671, 773, -634, 803, -595,
  831, -555, 857, -514, 881, -471, 903, -427,
  923, -382, 941, -336, 956, -290, 970, -242,
  980, -195, 989, -146, 995, -98, 998, -49
};
    
    // TODO(rays) further cleanup by redirecting calls to new and creating proper
// constructors.
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    
    {  bool failed_ = false;
  std::string db_;
  size_t current_ = 0;
  const std::string location_ = '\'location\':';
  const std::string latitude_ = '\'latitude\':';
  const std::string longitude_ = '\'longitude\':';
  const std::string name_ = '\'name\':';
};
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    bool SecureAuthContext::IsPeerAuthenticated() const {
  if (!ctx_) return false;
  return grpc_auth_context_peer_is_authenticated(ctx_) != 0;
}
    
    gpr_atm grpc::testing::interop::g_got_sigint;
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
    #endif  // TEST_QPS_TIMER_H

    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    
    {
    {
    {}}}
    
      case KindOfInt64:
  case KindOfBoolean:
    mpz_init_set_si(gmpData, data.toInt64());
    return true;
    
      int max_node = numa_max_node();
  if (!max_node || max_node >= 32) return;
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    void SynchronizableMulti::notifyAll() {
  for (auto& cond_list : m_cond_list_vec) {
    while (!cond_list.empty()) {
      pthread_cond_signal(cond_list.front());
      cond_list.pop_front();
    }
  }
}