namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    TEST_P(StatusPropagationTest, ExecutorDoneFirst) {
  // Tests error propagation when ExecutorDone is called first.
  StatusTestParam param = GetParam();
  int step_id = 1;
    }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    bool SubProcess::Start() {
  mutex_lock procLock(proc_mu_);
  mutex_lock dataLock(data_mu_);
  if (running_) {
    LOG(ERROR) << 'Start called after the process was started.';
    return false;
  }
  if ((exec_path_ == nullptr) || (exec_argv_ == nullptr)) {
    LOG(ERROR) << 'Start called without setting a program.';
    return false;
  }
    }
    
    TEST_F(NodeDefBuilderTest, TypeListTwice) {
  Op(OpDefBuilder('TypeListTwice')
         .Input('a: T')
         .Input('b: T')
         .Attr('T: list(type) >= 0'));
    }
    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow
