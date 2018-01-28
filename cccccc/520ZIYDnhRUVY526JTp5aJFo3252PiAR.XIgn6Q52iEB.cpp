
        
        // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
      (*device.mutable_environment())['eigen'] = strings::StrCat(
      EIGEN_WORLD_VERSION, '.', EIGEN_MAJOR_VERSION, '.', EIGEN_MINOR_VERSION);
#ifdef EIGEN_USE_LIBXSMM
  (*device.mutable_environment())['libxsmm'] = LIBXSMM_VERSION;
#endif
    
      string frame_name;
  std::deque<Node*> ready;
  ready.push_back(src_node);
  while (!ready.empty()) {
    Node* curr_node = ready.front();
    ready.pop_front();
    const ControlFlowInfo& curr_info = (*info)[curr_node->id()];
    const Node* frame = curr_info.frame;
    const Node* parent = curr_info.parent_frame;
    frame_name = curr_info.frame_name;
    }
    
        // Find node in graph with that name.
    auto iter = name_index->find(id.first);
    if (iter == name_index->end()) {
      return errors::NotFound('FetchOutputs node ', t, ': not found');
    }
    Node* n = iter->second;
    DCHECK_EQ(n->name(), id.first);
    VLOG(2) << 'Found fetch node for ' << t;
    
    #include 'tensorflow/core/lib/core/coding.h'
#include 'tensorflow/core/lib/hash/crc32c.h'
#include 'tensorflow/core/lib/io/compression.h'
#include 'tensorflow/core/platform/env.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    { private:
  enum { kBufferSize = 256 << 10 /* 256 kB */ };
  const int skip_header_lines_;
  Env* const env_;
  int64 line_number_;
  std::unique_ptr<RandomAccessFile> file_;  // must outlive input_buffer_
  std::unique_ptr<io::InputBuffer> input_buffer_;
};
    
    
    {}  // namespace xla

    
    
    {  DISALLOW_COPY_AND_ASSIGN(GlobalShortcut);
};
    
    
    {}  // namespace mate
    
    #include 'net/url_request/url_request_http_job.h'
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    // The argument separating arguments intended for the relauncher process from
// those intended for the relaunched process. '---' is chosen instead of '--'
// because CommandLine interprets '--' as meaning 'end of switches', but
// for many purposes, the relauncher process' CommandLine ought to interpret
// arguments intended for the relaunched process, to get the correct settings
// for such things as logging and the user-data-dir in case it affects crash
// reporting.
extern const CharType* kRelauncherArgSeparator;
    
    namespace testing {
    }
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    // Implements printing a non-reference type T by letting the compiler
// pick the right overload of PrintTo() for T.
template <typename T>
class UniversalPrinter {
 public:
  // MSVC warns about adding const to a function type, so we want to
  // disable the warning.
#ifdef _MSC_VER
# pragma warning(push)          // Saves the current warning state.
# pragma warning(disable:4180)  // Temporarily disables warning 4180.
#endif  // _MSC_VER
    }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
    
    // Downcasts the pointer of type Base to Derived.
// Derived must be a subclass of Base. The parameter MUST
// point to a class of type Derived, not any subclass of it.
// When RTTI is available, the function performs a runtime
// check to enforce this.
template <class Derived, class Base>
Derived* CheckedDowncastToActualType(Base* base) {
#if GTEST_HAS_RTTI
  GTEST_CHECK_(typeid(*base) == typeid(Derived));
  return dynamic_cast<Derived*>(base);  // NOLINT
#else
  return static_cast<Derived*>(base);  // Poor man's downcast.
#endif
}
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    
    {}  // namespace tesseract

    
        // Adjust our expectations about the baseline for this prefix.
    if (superscript_debug >= 3) {
      tprintf(' recognizing first %d chopped blobs\n', num_chopped_leading);
    }
    recog_word_recursive(prefix);
    if (superscript_debug >= 2) {
      tprintf(' The leading bits look like %s %s\n',
              ScriptPosToString(leading_pos),
              prefix->best_choice->unichar_string().string());
    }
    
    CCStruct::CCStruct() {}
    
    #include 'detlinefit.h'
#include 'statistc.h'
#include 'ndminx.h'
#include 'tprintf.h'
    
    const int kBlnCellHeight = 256;     // Full-height for baseline normalization.
const int kBlnXHeight = 128;        // x-height for baseline normalization.
const int kBlnBaselineOffset = 64;  // offset for baseline normalization.
    
    static std::shared_ptr<Reporter> InitBenchmarkReporters() {
  auto* composite_reporter = new CompositeReporter;
  if (FLAGS_enable_log_reporter) {
    composite_reporter->add(
        std::unique_ptr<Reporter>(new GprLogReporter('LogReporter')));
  }
  if (FLAGS_scenario_result_file != '') {
    composite_reporter->add(std::unique_ptr<Reporter>(
        new JsonReporter('JsonReporter', FLAGS_scenario_result_file)));
  }
  if (FLAGS_enable_rpc_reporter) {
    GPR_ASSERT(!FLAGS_rpc_reporter_server_address.empty());
    composite_reporter->add(std::unique_ptr<Reporter>(new RpcReporter(
        'RpcReporter',
        grpc::CreateChannel(FLAGS_rpc_reporter_server_address,
                            grpc::InsecureChannelCredentials()))));
  }
    }
    
    /**
 * Flushes pending writes. This method should not be called before invocation of
 * on_stream_ready() method of the bidirectional_stream_callback.
 * For each previously called bidirectional_stream_write()
 * a corresponding on_write_completed() callback will be invoked when the buffer
 * is sent.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_flush(bidirectional_stream* stream);
    
    int grpc_compression_algorithm_is_message(
    grpc_compression_algorithm algorithm) {
  return (algorithm >= GRPC_COMPRESS_MESSAGE_DEFLATE &&
          algorithm <= GRPC_COMPRESS_MESSAGE_GZIP)
             ? 1
             : 0;
}
    
    
    {  for (i = 0; i <= str_len - sep_len; i++) {
    if (memcmp(str_ptr + i, sep, sep_len) == 0) {
      *begin = read_offset;
      *end = read_offset + i;
      return 1;
    }
  }
  return 0;
}
    
    
    {
    {                grpc_compression_algorithm_to_message_compression_algorithm(
                    reader->buffer_in->data.raw.compression),
                &reader->buffer_in->data.raw.slice_buffer,
                &decompressed_slices_buffer) == 0) {
          gpr_log(GPR_ERROR,
                  'Unexpected error decompressing data for algorithm with enum '
                  'value '%d'.',
                  reader->buffer_in->data.raw.compression);
          memset(reader, 0, sizeof(*reader));
          return 0;
        } else { /* all fine */
          reader->buffer_out =
              grpc_raw_byte_buffer_create(decompressed_slices_buffer.slices,
                                          decompressed_slices_buffer.count);
        }
        grpc_slice_buffer_destroy_internal(&decompressed_slices_buffer);
      } else { /* not compressed, use the input buffer as output */
        reader->buffer_out = reader->buffer_in;
      }
      reader->current.index = 0;
      break;
  }
    
    #ifndef NDEBUG
#define REF_REASON reason
#define REF_ARG , const char* reason
#else
#define REF_REASON ''
#define REF_ARG
#endif
void grpc_call_internal_ref(grpc_call* c REF_ARG) {
  GRPC_CALL_STACK_REF(CALL_STACK_FROM_CALL(c), REF_REASON);
}
void grpc_call_internal_unref(grpc_call* c REF_ARG) {
  GRPC_CALL_STACK_UNREF(CALL_STACK_FROM_CALL(c), REF_REASON);
}
    
    static const int8_t elems_r[] = {
    11, 9,  -3, 0,  10,  25, -77, 26,  0,   11,  -7,  0,   0,  0,  21, 14, 1,
    0,  0,  33, 12, 11,  0,  0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,   0,  0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,
    0,  0,  0,  0,  -56, 0,  -36, -61, -60, -39, -63, -64, 0,  36, 35, 34, 33,
    34, 33, 32, 31, 31,  30, 29,  28,  27,  26,  26,  25,  25, 24, 23, 22, 21,
    20, 19, 22, 21, 20,  19, 18,  17,  16,  15,  14,  13,  12, 12, 11, 0};
static uint32_t elems_phash(uint32_t i) {
  i -= 48;
  uint32_t x = i % 101;
  uint32_t y = i / 101;
  uint32_t h = x;
  if (y < GPR_ARRAY_SIZE(elems_r)) {
    uint32_t delta = (uint32_t)elems_r[y];
    h += delta;
  }
  return h;
}
    
    
    {  grpc_channel_args_destroy(ch_args);
}
    
        double width;
    double height;
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
  ASSERT_FLOAT_EQ(20, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetRight(root_child0));
    
    TEST(YogaTest, padding_container_match_child) {
  const YGConfigRef config = YGConfigNew();
    }
    
    #pragma once
#include <fb/assert.h>
#include <utility>
    
        Poll(Loop *loop, uv_os_sock_t fd) {
        uv_poll = new uv_poll_t;
        uv_poll_init_socket(loop, uv_poll, fd);
    }
    
        void write(const char *message, size_t length = 0,
               void(*callback)(void *httpSocket, void *data, bool cancelled, void *reserved) = nullptr,
               void *callbackData = nullptr) {
    }
    
    
    {
    {
    {            // Send upgrade header
            uv_write(new uv_write_t, connect->handle, &upgradeHeader, 1, [](uv_write_t *write_t, int status) {
                if (status < 0) {
                    cout << 'Connection error' << endl;
                    exit(-1);
                }
                delete write_t;
            });
        }
    });
}
    
        // This is the 20 byte message (JSON) according to Socket.IO
    unsigned char socketio[] = 'xxxx42[\'message\',\'yolo\']';
    for (int i = 4; i < 24; i++) {
        socketio[i] ^= 'x';
	cout << (int) socketio[i] << endl;
    }
    
        sockaddr_storage addr;
    socklen_t addrLength = sizeof(addr);
    if (getpeername(fd, (sockaddr *) &addr, &addrLength) == -1) {
        return {0, '', ''};
    }