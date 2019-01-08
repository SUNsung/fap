
        
        
    {
    {}  // namespace python_op_gen_internal
}  // namespace tensorflow
    
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    
    {}  // namespace tensorflow
    
    // Given an numpy ndarray object 'obj', creates a corresponding tf
// Tensor in '*ret'.
Status ConvertNdarrayToTensor(PyObject* obj, Tensor* ret);
    
    
    {}  // namespace tensorflow

    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Given the driver version file contents, finds the kernel module version and
  // returns it as a string.
  //
  // This is solely used for more informative log messages when the user is
  // running on a machine that happens to have a libcuda/kernel driver mismatch.
  static port::StatusOr<DriverVersion> FindKernelModuleVersion(
      const string &driver_version_file_contents);
    
    port::Status CUDAEvent::Record(CUDAStream* stream) {
  return CUDADriver::RecordEvent(parent_->cuda_context(), cuda_event_,
                                 stream->cuda_stream());
}
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
      // Sets a new value, overriding the one supplied in the constructor.
  void SetValue(const std::string& new_value) {
    value_ = new_value;
  }
    
      // Formats an int value as '%X'.
  static std::string FormatHexInt(int value);
    
      // Constructs a MyString by cloning a 0-terminated C string.
  explicit MyString(const char* a_c_string) : c_string_(NULL) {
    Set(a_c_string);
  }
    
    // Tests the copy c'tor.
TEST(MyString, CopyConstructor) {
  const MyString s1(kHelloString);
  const MyString s2 = s1;
  EXPECT_EQ(0, strcmp(s2.c_string(), kHelloString));
}
    
    namespace grpc {
    }
    
    #include <grpc/status.h>
#include 'absl/memory/memory.h'
#include 'absl/strings/string_view.h'
#include 'absl/strings/strip.h'
#include 'opencensus/trace/span.h'
#include 'opencensus/trace/span_context.h'
#include 'opencensus/trace/trace_params.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/cpp/common/channel_filter.h'
#include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    
    {}  // namespace grpc
    
      void Add(const std::function<void()>& callback) override;
    
    
    {    // bottom-left
    v = getOriginalVertex(a);
    v.x = diff.x;
    v.z += diff.z;
    setVertex(a, v);
    
    // upper-left
    v = getOriginalVertex(b);
    v.x = diff.x;
    v.z += diff.z;
    setVertex(b, v);
    
    // bottom-right
    v = getOriginalVertex(c);
    v.x -= diff.x;
    v.z -= diff.z;
    setVertex(c, v);
    
    // upper-right
    v = getOriginalVertex(d);
    v.x -= diff.x;
    v.z -= diff.z;
    setVertex(d, v);
}
    
    ToggleVisibility * ToggleVisibility::clone() const
{
    // no copy constructor
    return ToggleVisibility::create();
}
    
    
    {    delete action;
    return nullptr;
}
    
    #include <folly/Benchmark.h>
    
    exception_wrapper::VTable const exception_wrapper::uninit_{
    &noop_<void, exception_wrapper const*, exception_wrapper*>,
    &noop_<void, exception_wrapper*, exception_wrapper*>,
    &noop_<void, exception_wrapper*>,
    &noop_<void, exception_wrapper const*>,
    &uninit_type_,
    &noop_<std::exception const*, exception_wrapper const*>,
    &noop_<exception_wrapper, exception_wrapper const*>};
    
        KeepAlive(ExecutorT* executor, bool dummy)
        : executorAndDummyFlag_(
              reinterpret_cast<intptr_t>(executor) | (dummy ? kDummyFlag : 0)) {
      assert(executor);
      assert(
          (reinterpret_cast<intptr_t>(executor) & kExecutorMask) ==
          reinterpret_cast<intptr_t>(executor));
    }
    
      tv.tv_sec = 1;
  tv.tv_usec = 10;
  EXPECT_EQ(1000010000ns, to<nanoseconds>(tv));
  EXPECT_EQ(1000010us, to<microseconds>(tv));
  EXPECT_EQ(1000ms, to<milliseconds>(tv));
  EXPECT_EQ(1s, to<seconds>(tv));
  EXPECT_EQ(
      createTimePoint<system_clock>(1000010000ns),
      to<system_clock::time_point>(tv));
  EXPECT_EQ(
      createTimePoint<steady_clock>(1000010000ns),
      to<steady_clock::time_point>(tv));
    
    #if FOLLY_HAVE_LIBZ
    
    #endif // BOOST_ATOMIC_FENCES_HPP_INCLUDED_
