  // Post 'open' event.
  static void EmitOpenEvent(const std::string& path);
    
    #include 'base/memory/weak_ptr.h'
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
      v8::Local<v8::Array> args = v8::Array::New(isolate);
  v8::Handle<v8::Value> element = v8::Null(isolate);
  blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  v8::Handle<v8::Value> argv[] = {val, v8_str(ev), args };
    
    
    {  base::ListValue result;
  render_view->Send(new ShellViewHostMsg_Call_Static_Method_Sync(
        MSG_ROUTING_NONE,
        type,
        method,
        *static_cast<base::ListValue*>(value_args.get()),
        &result));
  args.GetReturnValue().Set(converter->ToV8Value(&result, isolate->GetCurrentContext()));
}
    
    #ifndef CONTENT_NW_SRC_API_DISPATCHER_BINDINGS_H_
#define CONTENT_NW_SRC_API_DISPATCHER_BINDINGS_H_
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    
    {  *icon = item->icon_;
  return true;
}
    
    
    {}
    
    #include <stdlib.h>
#include <sstream>
    
    void FastWriter::enableYAMLCompatibility() { yamlCompatiblityEnabled_ = true; }
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
      // Find the file that declares the given fully-qualified symbol name.
  bool FindFileContainingSymbol(const string& symbol_name,
                                FileDescriptorProto* output);
    
      // This is the top-level C++ Message object that owns the whole
  // proto tree.  Every Python RepeatedScalarContainer holds a
  // reference to it in order to keep it alive as long as there's a
  // Python object that references any part of the tree.
  shared_ptr<Message> owner;
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
    
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    #include <string>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    RepeatedMessageFieldGenerator::RepeatedMessageFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    # else
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
    
    
    {    if (next_ == this) return true;
    linked_ptr_internal const* p = next_;
    while (p->next_ != this) p = p->next_;
    p->next_ = next_;
    return false;
  }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
  const T42 v42_;
  const T43 v43_;
  const T44 v44_;
  const T45 v45_;
  const T46 v46_;
  const T47 v47_;
  const T48 v48_;
};
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40>
struct Types40 {
  typedef T1 Head;
  typedef Types39<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> Tail;
};
    
    namespace {
    }
    
    
    {
    {
    {// utility function to round an integer up to a multiple of size
size_t RoundUp(size_t value, size_t size);
// HIGH and LOW DWORD functions
DWORD HIDWORD(size_t size);
DWORD LODWORD(size_t size);
} } }

    
    
    {                    // TODO IsEqualTo not yet implemented for sparse block matrix
                    // switch type from sparse block matrix is also not yet implemented 
                    // --> (mDblock.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);)
                    BOOST_CHECK(mDblock.IsEqualTo(mC, c_epsilonFloatE4));
#endif
}
    
    PrefetchGPUDataTransferer::PrefetchGPUDataTransferer(int deviceId) : GranularGPUDataTransferer(deviceId, nullptr, nullptr, true)
{
     cudaStreamCreateWithFlags(&m_stream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed (PrefetchGPUDataTransferer ctor)';
}
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    // access the parser through one of these functions
ExpressionPtr ParseConfigDictFromString(wstring text, wstring location, vector<wstring>&& includePaths);          // parses a list of dictionary members, returns a dictionary expression
// TODO: These rvalue references are no longer adding value, change to const<>&
//ExpressionPtr ParseConfigDictFromFile(wstring path, vector<wstring> includePaths);              // likewise, but from a file path
ExpressionPtr ParseConfigExpression(const wstring& sourceText, vector<wstring>&& includePaths); // parses a single expression from sourceText, which is meant to contain an include statement, hence includePaths
    
    // ParseCommandLine - parse the command line parameters
// argc - count of arguments
// argv - array of argument parameters
// config - config to return
std::string ConfigParameters::ParseCommandLine(int argc, wchar_t* argv[], ConfigParameters& config)
{
    config.SetName(std::string('global'));
    }
    
        template<unsigned int N>
    static const char* Timestamp(char(&buf)[N])
    {
        std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        if (!std::strftime(buf, _countof(buf), '%m/%d/%Y %H:%M:%S', std::localtime(&tt)))
            LogicError('Timestamp: Buffer too small.');
        return buf;
    }
    
    /* decompress 'input' to 'output' using 'algorithm'.
   On success, appends slices to output and returns 1.
   On failure, output is unchanged, and returns 0. */
int grpc_msg_decompress(grpc_message_compression_algorithm algorithm,
                        grpc_slice_buffer* input, grpc_slice_buffer* output);
    
      response->set_message(request->message());
  MaybeEchoDeadline(context, request, response);
  if (host_) {
    response->mutable_param()->set_host(*host_);
  }
  if (request->has_param() && request->param().client_cancel_after_us()) {
    {
      std::unique_lock<std::mutex> lock(mu_);
      signal_client_ = true;
    }
    while (!context->IsCancelled()) {
      gpr_sleep_until(gpr_time_add(
          gpr_now(GPR_CLOCK_REALTIME),
          gpr_time_from_micros(request->param().client_cancel_after_us(),
                               GPR_TIMESPAN)));
    }
    return Status::CANCELLED;
  } else if (request->has_param() &&
             request->param().server_cancel_after_us()) {
    gpr_sleep_until(gpr_time_add(
        gpr_now(GPR_CLOCK_REALTIME),
        gpr_time_from_micros(request->param().server_cancel_after_us(),
                             GPR_TIMESPAN)));
    return Status::CANCELLED;
  } else if (!request->has_param() ||
             !request->param().skip_cancelled_check()) {
    EXPECT_FALSE(context->IsCancelled());
  }
    
      ServerConfig server_config;
  server_config.set_server_type(ASYNC_SERVER);
  server_config.set_async_server_threads(8);
    
    
    {  return 0;
}

    
    
    {  return 0;
}

    
    /*============================================================================
**      On Intel Pentium processors (especially PIII and probably P4), converting
**      from float to int is very slow. To meet the C specs, the code produced by
**      most C compilers targeting Pentium needs to change the FPU rounding mode
**      before the float to int conversion is performed.
**
**      Changing the FPU rounding mode causes the FPU pipeline to be flushed. It
**      is this flushing of the pipeline which is so slow.
**
**      Fortunately the ISO C99 specifications define the functions lrint, lrintf,
**      llrint and llrintf which fix this problem as a side effect.
**
**      On Unix-like systems, the configure process should have detected the
**      presence of these functions. If they weren't found we have to replace them
**      here with a standard C cast.
*/
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    #undef MULT16_32_Q15_ADD
static inline int MULT16_32_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
      Clang, in contrast, requires us to do this always for _mm_cvtepi8_epi32
  (which is fair, since technically the compiler is always allowed to do the
  dereference before invoking the function implementing the intrinsic).
  However, it is smart enough to eliminate the extra MOVD instruction.
  For _mm_cvtepi16_epi32, it does the right thing, though does *not* optimize out
  the extra MOVQ if it's specified explicitly */
    
    
/*
 * dns.h
 *
 *  Created on: 2012-11-23
 *      Author: yanguoyue
 */
    
        snprintf(processname, sizeof(processname), '>>> %s <<<', _processname.c_str());
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
    
    {  private:
    std::map<const void*, Spy*> m_thismap;
    std::map<const std::string, Spy*> m_strmap;
};
    
    class TSpy :  public Spy {
  public:
    TSpy(void* _this): Spy(_this) {}
    }
    
    struct HugePageSize : private boost::totally_ordered<HugePageSize> {
  explicit HugePageSize(size_t s) : size(s) {}
    }
    
    namespace folly {
    }
    
    
    {
    {      if (end == msgData.size()) {
        break;
      }
      idx = end + 1;
    }
  } else {
    buffer.reserve(headerLengthGuess + msgData.size());
    headerFormatter.appendTo(buffer);
    buffer.append(msgData.data(), msgData.size());
    buffer.push_back('\n');
  }
    
    /**
 * A LogWriter implementation that immediately writes to a file descriptor when
 * it is invoked.
 *
 * The downside of this class is that logging I/O occurs directly in your
 * normal program threads, so that logging I/O may block or slow down normal
 * processing.
 *
 * However, one benefit of this class is that log messages are written out
 * immediately, so if your program crashes, all log messages generated before
 * the crash will have already been written, and no messages will be lost.
 */
class ImmediateFileWriter : public LogWriter {
 public:
  /**
   * Construct an ImmediateFileWriter that appends to the file at the specified
   * path.
   */
  explicit ImmediateFileWriter(folly::StringPiece path);
    }
    
    /**
 * Configuration for a LogCategory
 */
class LogCategoryConfig {
 public:
  explicit LogCategoryConfig(
      LogLevel level = LogLevel::WARNING,
      bool inheritParentLevel = true);
  LogCategoryConfig(
      LogLevel level,
      bool inheritParentLevel,
      std::vector<std::string> handlers);
    }
    
      bool operator==(const LogConfig& other) const;
  bool operator!=(const LogConfig& other) const;
    
    #include <folly/CPortability.h>
#include <folly/Range.h>
#include <folly/experimental/logging/LogConfig.h>
    
    #endif // D_ABSTRACT_HTTP_SERVER_RESPONSE_COMMAND_H

    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);
    
    AdaptiveFileAllocationIterator::AdaptiveFileAllocationIterator(
    BinaryStream* stream, int64_t offset, int64_t totalLength)
    : stream_(stream), offset_(offset), totalLength_(totalLength)
{
}
    
    void configureAsyncNameResolverMan(AsyncNameResolverMan* asyncNameResolverMan,
                                   Option* option);