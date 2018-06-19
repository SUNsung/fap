
        
        
    {
    {}  // namespace
}  // namespace tesseract

    
    // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    /**********************************************************************
 * Base Renderer interface implementation
 **********************************************************************/
TessResultRenderer::TessResultRenderer(const char *outputbase,
                                       const char* extension)
    : file_extension_(extension),
      title_(''), imagenum_(-1),
      fout_(stdout),
      next_(nullptr),
      happy_(true) {
  if (strcmp(outputbase, '-') && strcmp(outputbase, 'stdout')) {
    STRING outfile = STRING(outputbase) + STRING('.') + STRING(file_extension_);
    fout_ = fopen(outfile.string(), 'wb');
    if (fout_ == nullptr) {
      happy_ = false;
    }
  }
}
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
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
    
          if (edgept == loopstart)
        stopped = 1;             /*finished */
      if (sum2 + sum1 > 2
        && linestart->prev->flags[DIR] == dir2
        && (linestart->prev->flags[RUNLENGTH] >
      linestart->flags[RUNLENGTH] || sum2 > sum1)) {
                                 /*start is back one */
        linestart = linestart->prev;
        linestart->flags[FLAGS] |= FIXED;
      }
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    #include <gtest/gtest.h>
    
      // Now test inclusive bounds.
  struct ConstraintList cl3;
  constraint = Constraint(LESS_THAN_OR_EQUALS);
  constraint.expr = '1000';
  cl3.add(constraint);
  constraint = Constraint(GREATER_THAN_OR_EQUALS);
  constraint.expr = '1';
  cl3.add(constraint);
    
      // Remove the backup and expect another reload to not create one.
  removePath(path_ + '.backup');
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    
    /**
 * @brief Generate the header string for query results
 *
 * @param lengths The data returned from computeQueryDataLengths
 * @param columns The order of the keys (since maps are unordered)
 *
 * @return A string, with a newline, representing your header
 */
std::string generateHeader(const std::map<std::string, size_t>& lengths,
                           const std::vector<std::string>& columns);
    
      MOCK_METHOD3(writeChain, void(
        folly::AsyncTransportWrapper::WriteCallback*,
        std::shared_ptr<folly::IOBuf>,
        folly::WriteFlags));
    
    void IOBuf::releaseStorage(HeapStorage* storage, uint16_t freeFlags) {
  CHECK_EQ(storage->prefix.magic, static_cast<uint16_t>(kHeapMagic));
    }
    
    
    {  std::vector<size_t> sizes {0, 1, 64, 256, 1024, 1 << 10};
  for (size_t size : sizes) {
    auto buf = IOBuf::create(size);
    uintptr_t p = reinterpret_cast<uintptr_t>(buf->data());
    EXPECT_EQ(0, p & (alignment - 1)) << 'size=' << size;
  }
}
    
    template <typename T>
struct OddCompare {
  constexpr ordering operator()(T const& a, T const& b) const {
    return b < a ? ordering::lt : a < b ? ordering::gt : ordering::eq;
  }
};
    
        std::lock_guard<std::mutex> lg(entry.mutex);
    if (entry.state == State::Living) {
      return;
    }
    
        Node(T v, Node* n) : value_(v), next_(n) {}
    
    #include <folly/synchronization/Hazptr.h>
    
    // When a and b are equivalent objects, we return a to
// make sorting stable.
template <typename T>
constexpr T constexpr_min(T a) {
  return a;
}
template <typename T, typename... Ts>
constexpr T constexpr_min(T a, T b, Ts... ts) {
  return b < a ? constexpr_min(b, ts...) : constexpr_min(a, ts...);
}
    
    void init(int* argc, char*** argv, bool removeFlags) {
#if FOLLY_USE_SYMBOLIZER
  // Install the handler now, to trap errors received during startup.
  // The callbacks, if any, can be installed later
  folly::symbolizer::installFatalSignalHandler();
#elif !defined(_WIN32)
  google::InstallFailureSignalHandler();
#endif
    }
    
    void SerialExecutor::add(Func func) {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(std::move(func));
  }
  parent_->add([keepAlive = getKeepAliveToken(this)] { keepAlive->run(); });
}
    
        void operator()(SerialExecutor* executor) {
      executor->keepAliveRelease();
    }
    
    FOLLY_ALWAYS_INLINE void __builtin___clear_cache(char* begin, char* end) {
  if (folly::kIsArchAmd64) {
    // x86_64 doesn't require the instruction cache to be flushed after
    // modification.
  } else {
    // Default to flushing it for everything else, such as ARM.
    folly::portability::detail::call_flush_instruction_cache_self_pid(
        static_cast<void*>(begin), static_cast<size_t>(end - begin));
  }
}
    
    #ifdef ANDROID
#include <jni.h>
    
    Test_Spy_Sample::~Test_Spy_Sample()
{
    SPY_DETACH_CLASS();
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//