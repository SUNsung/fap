namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Functor used by ReverseOp to do the computations.
template <typename Device, typename T, int Dims>
struct Reverse {
  void operator()(const Device& d, typename TTypes<T, Dims>::ConstTensor input,
                  const Eigen::array<bool, Dims>& reverse_dims,
                  typename TTypes<T, Dims>::Tensor output) {
    output.device(d) = input.reverse(reverse_dims);
  }
};
    
    template <typename T>
class ArgMaxOpModel : public ArgBaseOpModel<T> {
 public:
  ArgMaxOpModel(std::initializer_list<int> input_shape, TensorType input_type,
                TensorType output_type, TensorType index_output_type)
      : ArgBaseOpModel<T>(input_shape, input_type, output_type,
                          index_output_type) {
    ArgBaseOpModel<T>::SetBuiltinOp(
        BuiltinOperator_ARG_MAX, BuiltinOptions_ArgMaxOptions,
        CreateArgMaxOptions(ArgBaseOpModel<T>::builder_, index_output_type)
            .Union());
    ArgBaseOpModel<T>::BuildInterpreter({input_shape, {1, 1, 1, 1}});
  }
};
    
    class OperatorTest : public ::testing::Test {
 protected:
  // Return the operator for the given name and type.
  const BaseOperator& GetOperator(const string& name, OperatorType type) {
    using OpsByName = std::map<string, std::unique_ptr<BaseOperator>>;
    using OpsByType = std::map<OperatorType, std::unique_ptr<BaseOperator>>;
    }
    }
    
    class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
      // Flushes any buffered data held by underlying containers of the
  // RecordWriter to the WritableFile. Does *not* flush the
  // WritableFile.
  Status Flush();
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/contrib/mpi/mpi_utils.h'
namespace tensorflow {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39>
internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28,
    T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36,
    T37 v37, T38 v38, T39 v39) {
  return internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39>(v1,
      v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17,
      v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31,
      v32, v33, v34, v35, v36, v37, v38, v39);
}
    
    TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}
    
    // Prints a value using the type inferred by the compiler.  The
// difference between this and UniversalTersePrint() is that for a
// (const) char pointer, this prints both the pointer and the
// NUL-terminated string.
template <typename T>
void UniversalPrint(const T& value, ::std::ostream* os) {
  // A workarond for the bug in VC++ 7.1 that prevents us from instantiating
  // UniversalPrinter with T directly.
  typedef T T1;
  UniversalPrinter<T1>::Print(value, os);
}
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
    // This macro is for implementing ASSERT/EXPECT_DEBUG_DEATH when compiled in
// NDEBUG mode. In this case we need the statements to be executed, the regex is
// ignored, and the macro must accept a streamed message even though the message
// is never printed.
# define GTEST_EXECUTE_STATEMENT_(statement, regex) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
     GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } else \
    ::testing::Message()
    
        virtual const ParamGeneratorInterface<T>* BaseGenerator() const {
      return base_;
    }
    virtual void Advance() {
      value_ = value_ + step_;
      index_++;
    }
    virtual ParamIteratorInterface<T>* Clone() const {
      return new Iterator(*this);
    }
    virtual const T* Current() const { return &value_; }
    virtual bool Equals(const ParamIteratorInterface<T>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      const int other_index =
          CheckedDowncastToActualType<const Iterator>(&other)->index_;
      return index_ == other_index;
    }
    
      // Releases this mutex.
  void Unlock() {
    // Since the lock is being released the owner_ field should no longer be
    // considered valid. We don't protect writing to has_owner_ here, as it's
    // the caller's responsibility to ensure that the current thread holds the
    // mutex when this is called.
    has_owner_ = false;
    GTEST_CHECK_POSIX_SUCCESS_(pthread_mutex_unlock(&mutex_));
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
    
    
    {
]]
}  // namespace gtest_internal
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
struct Types17 {
  typedef T1 Head;
  typedef Types16<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17> Tail;
};
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
        Config(void);
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
      // Only allow implicit upcasts. A downcast will result in a compile error
  // unless you use static_cast (which will end up invoking the explicit
  // operator below).
  template <typename U>
  RefPtr(const RefPtr<U>& ref, typename std::enable_if<std::is_base_of<T,U>::value, U>::type* = nullptr) :
    m_ptr(ref.get())
  {
    refIfNecessary(m_ptr);
  }
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    /**
 * @file
 * @brief The class of Box2d. Here, the x/y axes are respectively Forward/Left,
 *        as opposed to what happens in euler_angles_zxy.h (Right/Forward).
 */
    
      /**
   * @brief Get a string containing essential information about the polygon
   *        for debugging purpose.
   * @return Essential information about the polygon for debugging purpose.
   */
  std::string DebugString() const;
    
      bool IsObstacleInGraph(const std::string& obstacle_id);
    
    TEST_F(DecisionTest, mix_yellow_red_flash) {
  std::vector<double> ts_list = {
      11.784286, 11.822046, 11.860939, 11.899873, 11.938863, 11.976958,
      12.019318, 12.060082, 12.085589, 12.142431, 12.206964, 12.244730,
      12.283630, 12.343854, 12.406436, 12.447242, 12.523147, 12.590790,
      12.637774, 12.739506, 12.778026, 12.816889, 12.854136, 12.902307,
      12.941082, 12.978899, 13.052896, 13.123380, 13.162235, 13.200546,
      13.238770, 13.276381, 13.336628, 13.397770, 13.447470, 13.506018,
      13.556838, 13.595315, 13.638051, 13.758083, 13.798111, 13.833773,
      13.872687, 13.910888, 13.949736, 13.992507, 14.055734, 14.096796,
      14.154976, 14.221338, 14.259621, 14.297711, 14.361917, 14.438549,
      14.501423, 14.565565, 14.603986, 14.670650, 14.738613, 14.777124,
      14.836051, 14.928467, 14.955982, 15.007555, 15.042017, 15.100018,
      15.141860, 15.187705, 15.236564, 15.281425, 15.320009, 15.359252,
      15.398300, 15.424032, 15.461977, 15.500767, 15.538779, 15.576964,
      15.615162, 15.681964, 15.720530, 15.750545, 15.791621, 15.854720,
      15.937057, 16.015527, 16.053107, 16.092126, 16.130880, 16.168330};
  std::vector<int> color_list = {
      3, 3, 3, 3, 3, 3, 4, 1, 4, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2,
      2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 1, 4, 4, 2, 4, 2,
      4, 4, 4, 1, 1, 1, 1, 1, 1, 4, 2, 4, 1, 4, 4, 1, 1, 4, 1, 1, 1};
    }
    
    
    {  std::unique_ptr<SimulationWorldUpdater> sim_world_updater_;
  std::unique_ptr<PointCloudUpdater> point_cloud_updater_;
  std::unique_ptr<CivetServer> server_;
  std::unique_ptr<SimControl> sim_control_;
  std::unique_ptr<WebSocketHandler> websocket_;
  std::unique_ptr<WebSocketHandler> map_ws_;
  std::unique_ptr<WebSocketHandler> point_cloud_ws_;
  std::unique_ptr<ImageHandler> image_;
  std::unique_ptr<MapService> map_service_;
  std::unique_ptr<HMI> hmi_;
};
    
    #include 'CivetServer.h'
    
    #include <memory>
#include <string>
#include <vector>