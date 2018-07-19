
        
        #ifndef TENSORFLOW_CORE_DISTRIBUTED_RUNTIME_WORKER_CACHE_PARTIAL_H_
#define TENSORFLOW_CORE_DISTRIBUTED_RUNTIME_WORKER_CACHE_PARTIAL_H_
    
    
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

    
    namespace xla {
    }
    
      TF_ASSERT_OK_AND_ASSIGN(auto module, ParseHloString(module_str));
  BatchNormExpander rewriter(/*rewrite_training_op=*/true,
                             /*rewrite_inference_op=*/true,
                             /*rewrite_grad_op=*/true);
  ASSERT_TRUE(rewriter.Run(module.get()).ValueOrDie());
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    
    {}  // namespace xla
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
    /*
 * Supersedes `EncodeAudioOp`. Allows all parameters to be inputs
 * instead of attributes, so that the sample rate (and, probably less
 * usefully, the output file format) can be given as tensors rather than
 * constants only.
 */
class EncodeAudioOpV2 : public OpKernel {
 public:
  explicit EncodeAudioOpV2(OpKernelConstruction* context) : OpKernel(context) {}
    }
    
      // Returns true if the length field was specified in an Extent.
  static bool HasExtentLength(const TensorSliceProto::Extent& extent);
    
    
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    #ifndef SWIFT_INDEX_INDEX_H
#define SWIFT_INDEX_INDEX_H
    
    
    {    auto I = std::lower_bound(Children.begin(), Children.end(), Idx,
                              [](IndexTrieNode *a, unsigned i) {
                                return a->Index < i;
                              });
    if (I != Children.end() && (*I)->Index == Idx)
      return *I;
    auto *N = new IndexTrieNode(Idx, this);
    Children.insert(I, N);
    return N;
  }
    
    
    {    cvReleaseMat( &(*state)->preFilteredImg0 );
    cvReleaseMat( &(*state)->preFilteredImg1 );
    cvReleaseMat( &(*state)->slidingSumBuf );
    cvReleaseMat( &(*state)->disp );
    cvReleaseMat( &(*state)->cost );
    cvFree( state );
}
    
            const float max_dist = 10.0f;
        if(black_order[0].second > max_dist || black_order[1].second > max_dist ||
           white_order[0].second > max_dist || white_order[1].second > max_dist)
        {
            continue; // there will be no improvement in this corner position
        }
    
                template<typename T>
            static __device__ __forceinline__ T atomicMin(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count = ::min(*address, val);
                do
                {
                    *address = count;
                } while (*address > count);
    }
    
    // Here's what happens when an ASSERT_DEATH* or EXPECT_DEATH* is
// executed:
//
//   1. It generates a warning if there is more than one active
//   thread.  This is because it's safe to fork() or clone() only
//   when there is a single thread.
//
//   2. The parent process clone()s a sub-process and runs the death
//   test in it; the sub-process exits with code 0 at the end of the
//   death test, if it hasn't exited already.
//
//   3. The parent process waits for the sub-process to terminate.
//
//   4. The parent process checks the exit code and error message of
//   the sub-process.
//
// Examples:
//
//   ASSERT_DEATH(server.SendMessage(56, 'Hello'), 'Invalid port number');
//   for (int i = 0; i < 5; i++) {
//     EXPECT_DEATH(server.ProcessRequest(i),
//                  'Invalid request .* in ProcessRequest()')
//                  << 'Failed to die on request ' << i;
//   }
//
//   ASSERT_EXIT(server.ExitNow(), ::testing::ExitedWithCode(0), 'Exiting');
//
//   bool KilledBySIGHUP(int exit_code) {
//     return WIFSIGNALED(exit_code) && WTERMSIG(exit_code) == SIGHUP;
//   }
//
//   ASSERT_EXIT(client.HangUpServer(), KilledBySIGHUP, 'Hanging up!');
//
// On the regular expressions used in death tests:
//
//   On POSIX-compliant systems (*nix), we use the <regex.h> library,
//   which uses the POSIX extended regex syntax.
//
//   On other platforms (e.g. Windows), we only support a simple regex
//   syntax implemented as part of Google Test.  This limited
//   implementation should be enough most of the time when writing
//   death tests; though it lacks many features you can find in PCRE
//   or POSIX extended regex syntax.  For example, we don't support
//   union ('x|y'), grouping ('(xy)'), brackets ('[xy]'), and
//   repetition count ('x{5,7}'), among others.
//
//   Below is the syntax that we do support.  We chose it to be a
//   subset of both PCRE and POSIX extended regex, so it's easy to
//   learn wherever you come from.  In the following: 'A' denotes a
//   literal character, period (.), or a single \\ escape sequence;
//   'x' and 'y' denote regular expressions; 'm' and 'n' are for
//   natural numbers.
//
//     c     matches any literal character c
//     \\d   matches any decimal digit
//     \\D   matches any character that's not a decimal digit
//     \\f   matches \f
//     \\n   matches \n
//     \\r   matches \r
//     \\s   matches any ASCII whitespace, including \n
//     \\S   matches any character that's not a whitespace
//     \\t   matches \t
//     \\v   matches \v
//     \\w   matches any letter, _, or decimal digit
//     \\W   matches any character that \\w doesn't match
//     \\c   matches any literal character c, which must be a punctuation
//     .     matches any single character except \n
//     A?    matches 0 or 1 occurrences of A
//     A*    matches 0 or many occurrences of A
//     A+    matches 1 or many occurrences of A
//     ^     matches the beginning of a string (not that of each line)
//     $     matches the end of a string (not that of each line)
//     xy    matches x followed by y
//
//   If you accidentally use PCRE or POSIX extended regex features
//   not implemented by us, you will get a run-time failure.  In that
//   case, please try to rewrite your regular expression within the
//   above syntax.
//
//   This implementation is *not* meant to be as highly tuned or robust
//   as a compiled regex library, but should perform well enough for a
//   death test, which already incurs significant overhead by launching
//   a child process.
//
// Known caveats:
//
//   A 'threadsafe' style death test obtains the path to the test
//   program from argv[0] and re-executes it in the sub-process.  For
//   simplicity, the current implementation doesn't search the PATH
//   when launching the sub-process.  This means that the user must
//   invoke the test program via a path that contains at least one
//   path separator (e.g. path/to/foo_test and
//   /absolute/path/to/bar_test are fine, but foo_test is not).  This
//   is rarely a problem as people usually don't put the test binary
//   directory in PATH.
//
// TODO(wan@google.com): make thread-safe death tests search the PATH.
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    // Prints the given number of elements in an array, without printing
// the curly braces.
template <typename T>
void PrintRawArrayTo(const T a[], size_t count, ::std::ostream* os) {
  UniversalPrint(a[0], os);
  for (size_t i = 1; i != count; i++) {
    *os << ', ';
    UniversalPrint(a[i], os);
  }
}
    
    # define TYPED_TEST(CaseName, TestName) \
  template <typename gtest_TypeParam_> \
  class GTEST_TEST_CLASS_NAME_(CaseName, TestName) \
      : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  bool gtest_##CaseName##_##TestName##_registered_ GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTest< \
          CaseName, \
          ::testing::internal::TemplateSel< \
              GTEST_TEST_CLASS_NAME_(CaseName, TestName)>, \
          GTEST_TYPE_PARAMS_(CaseName)>::Register(\
              '', #CaseName, #TestName, 0); \
  template <typename gtest_TypeParam_> \
  void GTEST_TEST_CLASS_NAME_(CaseName, TestName)<gtest_TypeParam_>::TestBody()
    
      // Take over ownership of a raw pointer.  This should happen as soon as
  // possible after the object is created.
  explicit linked_ptr(T* ptr = NULL) { capture(ptr); }
  ~linked_ptr() { depart(); }
    
    
template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
class CartesianProductGenerator9
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8, T9> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9> ParamType;
    }
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
    }
    
    namespace guetzli {
    }
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
      // Fills in out[] array with the floating-point precision pixel view of the
  // component.
  // REQUIRES: factor_x() == 1 and factor_y() == 1.
  void ToFloatPixels(float* out, int stride) const;
    
    
    {}  // namespace guetzli
    
      if (options->Has(String::NewSymbol('target_level')) &&
      options->Get(String::NewSymbol('target_level'))->IsInt32()) {
    target_level = (int)(options->Get(
        String::NewSymbol('target_level'))->ToInt32()->Value());
    }
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    JniCallback::~JniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    DirectComparatorJniCallback::~DirectComparatorJniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    #include 'util/sync_point.h'
    
    #ifdef ROCKSDB_JEMALLOC
// Separate inlines so they can be replaced if needed
void* jemalloc_aligned_alloc(size_t size, size_t alignment) ROCKSDB_NOEXCEPT;
void jemalloc_aligned_free(void* p) ROCKSDB_NOEXCEPT;
#endif
    
    // Analyze the performance of a db
class Statistics {
 public:
  virtual ~Statistics() {}
    }
    
    double HistogramStat::StandardDeviation() const {
  uint64_t cur_num = num();
  uint64_t cur_sum = sum();
  uint64_t cur_sum_squares = sum_squares();
  if (cur_num == 0) return 0;
  double variance =
      static_cast<double>(cur_sum_squares * cur_num - cur_sum * cur_sum) /
      static_cast<double>(cur_num * cur_num);
  return sqrt(variance);
}
std::string HistogramStat::ToString() const {
  uint64_t cur_num = num();
  std::string r;
  char buf[1650];
  snprintf(buf, sizeof(buf),
           'Count: %' PRIu64 ' Average: %.4f  StdDev: %.2f\n',
           cur_num, Average(), StandardDeviation());
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Min: %' PRIu64 '  Median: %.4f  Max: %' PRIu64 '\n',
           (cur_num == 0 ? 0 : min()), Median(), (cur_num == 0 ? 0 : max()));
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Percentiles: '
           'P50: %.2f P75: %.2f P99: %.2f P99.9: %.2f P99.99: %.2f\n',
           Percentile(50), Percentile(75), Percentile(99), Percentile(99.9),
           Percentile(99.99));
  r.append(buf);
  r.append('------------------------------------------------------\n');
  if (cur_num == 0) return r;   // all buckets are empty
  const double mult = 100.0 / cur_num;
  uint64_t cumulative_sum = 0;
  for (unsigned int b = 0; b < num_buckets_; b++) {
    uint64_t bucket_value = bucket_at(b);
    if (bucket_value <= 0.0) continue;
    cumulative_sum += bucket_value;
    snprintf(buf, sizeof(buf),
             '%c %7' PRIu64 ', %7' PRIu64 ' ] %8' PRIu64 ' %7.3f%% %7.3f%% ',
             (b == 0) ? '[' : '(',
             (b == 0) ? 0 : bucketMapper.BucketLimit(b-1),  // left
              bucketMapper.BucketLimit(b),  // right
              bucket_value,                   // count
             (mult * bucket_value),           // percentage
             (mult * cumulative_sum));       // cumulative percentage
    r.append(buf);
    }
    }
    
    TEST_F(OrderingTest, to_ordering) {
  EXPECT_EQ(ordering::lt, to_ordering(int(ordering::lt)));
  EXPECT_EQ(ordering::eq, to_ordering(int(ordering::eq)));
  EXPECT_EQ(ordering::gt, to_ordering(int(ordering::gt)));
    }
    
    
    {} // namespace folly

    
    
    {  bool cas(T& u, T& v) {
    Node* n = new Node(v);
    hazptr_holder<Atom> hptr;
    Node* p;
    while (true) {
      p = hptr.get_protected(node_);
      if (p->val_ != u) {
        delete n;
        return false;
      }
      if (node_.compare_exchange_weak(
              p, n, std::memory_order_relaxed, std::memory_order_release)) {
        break;
      }
    }
    hptr.reset();
    p->retire();
    return true;
  }
};
    
    
    {} // namespace folly

    
    class alignas(hardware_destructive_interference_size) hazptr_rec {
  friend class hazptr_domain;
  friend class hazptr_holder;
  friend struct hazptr_tc_entry;
    }
    
    #include <folly/stats/TDigest.h>
#include <folly/stats/detail/BufferedStat.h>
    
        /**
     * Shortcut to change the action for standard output.
     */
    Options& stdoutFd(int action) { return fd(STDOUT_FILENO, action); }
    
    std::unique_ptr<AuthConfig> AbstractAuthResolver::getDefaultAuthConfig() const
{
  return AuthConfig::create(defaultUser_, defaultPassword_);
}
    
      virtual std::string toTagString() const CXX11_OVERRIDE;
    
      const std::shared_ptr<HttpConnection>& getHttpConnection() const
  {
    return httpConnection_;
  }
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    #endif // D_ANNOUNCE_TIER_H

    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
      double v = matched_it->v();
  double theta = matched_it->path_point().theta();
  double v_x = v * std::cos(theta);
  double v_y = v * std::sin(theta);
    
      // Real-time (Per-frame) Pitch angle adjustment between camera and ground
  // Assume objects are on ground, and ground is a simple flat plane
  void GetDynamicExtrinsics(
    const std::vector<std::pair<Eigen::Vector3f, Eigen::Vector3f>> &centers);
    
    namespace apollo {
namespace planning {
    }
    }
    
    #include <memory>
#include <string>
#include <vector>