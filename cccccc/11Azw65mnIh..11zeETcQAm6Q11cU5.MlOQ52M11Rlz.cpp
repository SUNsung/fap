// Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
        void ComputeCurrentValue() {
      if (!AtEnd())
        current_value_ = ParamType(*current1_, *current2_);
    }
    bool AtEnd() const {
      // We must report iterator past the end of the range when either of the
      // component iterators has reached the end of its range.
      return
          current1_ == end1_ ||
          current2_ == end2_;
    }
    
    // Helper class for testing Google Test's multi-threading constructs.
// To use it, write:
//
//   void ThreadFunc(int param) { /* Do things with param */ }
//   Notification thread_can_start;
//   ...
//   // The thread_can_start parameter is optional; you can supply NULL.
//   ThreadWithParam<int> thread(&ThreadFunc, 5, &thread_can_start);
//   thread_can_start.Notify();
//
// These classes are only for testing Google Test's own constructs. Do
// not use them in user tests, either directly or indirectly.
template <typename T>
class ThreadWithParam : public ThreadWithParamBase {
 public:
  typedef void (*UserThreadFunc)(T);
    }
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    	static void _bind_methods();
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    // Retrieves one character from the input stream, but does not read past markers. Will continue to return 0xFF when a marker is encountered.
inline uint8 jpeg_decoder::get_octet()
{
  bool padding_flag;
  int c = get_char(&padding_flag);
    }
    
    /*Some specific platforms may have optimized intrinsic or inline assembly
   versions of these functions which can substantially improve performance.
  We define macros for them to allow easy incorporation of these non-ANSI
   features.*/
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv4(opus_int32 a, opus_int16 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#silk_SMULWB\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(a), 'r'(b<<16)
  );
  return rd_hi;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv4(a, b))
    
      /// Peek at the incoming data on the stream. Returns the number of bytes read.
  /// Throws an exception on failure.
  template <typename MutableBufferSequence>
  std::size_t peek(const MutableBufferSequence& buffers);
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    namespace boost {
namespace asio {
    }
    }
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
    #endif // BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP

    
      // Destructor.
  ~gcc_arm_fenced_block()
  {
    barrier();
  }
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    // Reads the Define Huffman Table (DHT) marker segment and fills in *jpg with
// the parsed data. Builds the Huffman decoding table in either dc_huff_lut or
// ac_huff_lut, depending on the type and solt_id of Huffman code being read.
bool ProcessDHT(const uint8_t* data, const size_t len,
                JpegReadMode mode,
                std::vector<HuffmanTableEntry>* dc_huff_lut,
                std::vector<HuffmanTableEntry>* ac_huff_lut,
                size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  if (marker_len == 2) {
    fprintf(stderr, 'DHT marker: no Huffman table found\n');
    jpg->error = JPEG_EMPTY_DHT;
    return false;
  }
  while (*pos < start_pos + marker_len) {
    VERIFY_LEN(1 + kJpegHuffmanMaxBitLength);
    JPEGHuffmanCode huff;
    huff.slot_id = ReadUint8(data, pos);
    int huffman_index = huff.slot_id;
    int is_ac_table = (huff.slot_id & 0x10) != 0;
    HuffmanTableEntry* huff_lut;
    if (is_ac_table) {
      huffman_index -= 0x10;
      VERIFY_INPUT(huffman_index, 0, 3, HUFFMAN_INDEX);
      huff_lut = &(*ac_huff_lut)[huffman_index * kJpegHuffmanLutSize];
    } else {
      VERIFY_INPUT(huffman_index, 0, 3, HUFFMAN_INDEX);
      huff_lut = &(*dc_huff_lut)[huffman_index * kJpegHuffmanLutSize];
    }
    huff.counts[0] = 0;
    int total_count = 0;
    int space = 1 << kJpegHuffmanMaxBitLength;
    int max_depth = 1;
    for (int i = 1; i <= kJpegHuffmanMaxBitLength; ++i) {
      int count = ReadUint8(data, pos);
      if (count != 0) {
        max_depth = i;
      }
      huff.counts[i] = count;
      total_count += count;
      space -= count * (1 << (kJpegHuffmanMaxBitLength - i));
    }
    if (is_ac_table) {
      VERIFY_INPUT(total_count, 0, kJpegHuffmanAlphabetSize, HUFFMAN_CODE);
    } else {
      VERIFY_INPUT(total_count, 0, kJpegDCAlphabetSize, HUFFMAN_CODE);
    }
    VERIFY_LEN(total_count);
    std::vector<bool> values_seen(256, false);
    for (int i = 0; i < total_count; ++i) {
      uint8_t value = ReadUint8(data, pos);
      if (!is_ac_table) {
        VERIFY_INPUT(value, 0, kJpegDCAlphabetSize - 1, HUFFMAN_CODE);
      }
      if (values_seen[value]) {
        fprintf(stderr, 'Duplicate Huffman code value %d\n', value);
        jpg->error = JPEG_INVALID_HUFFMAN_CODE;
        return false;
      }
      values_seen[value] = true;
      huff.values[i] = value;
    }
    // Add an invalid symbol that will have the all 1 code.
    ++huff.counts[max_depth];
    huff.values[total_count] = kJpegHuffmanAlphabetSize;
    space -= (1 << (kJpegHuffmanMaxBitLength - max_depth));
    if (space < 0) {
      fprintf(stderr, 'Invalid Huffman code lengths.\n');
      jpg->error = JPEG_INVALID_HUFFMAN_CODE;
      return false;
    } else if (space > 0 && huff_lut[0].value != 0xffff) {
      // Re-initialize the values to an invalid symbol so that we can recognize
      // it when reading the bit stream using a Huffman code with space > 0.
      for (int i = 0; i < kJpegHuffmanLutSize; ++i) {
        huff_lut[i].bits = 0;
        huff_lut[i].value = 0xffff;
      }
    }
    huff.is_last = (*pos == start_pos + marker_len);
    if (mode == JPEG_READ_ALL &&
        !BuildJpegHuffmanTable(&huff.counts[0], &huff.values[0], huff_lut)) {
      fprintf(stderr, 'Failed to build Huffman table.\n');
      jpg->error = JPEG_INVALID_HUFFMAN_CODE;
      return false;
    }
    jpg->huffman_code.push_back(huff);
  }
  VERIFY_MARKER_END();
  return true;
}
    
    
    {  int code = 0;
  int si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while ((huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }
    code <<= 1;
    si++;
  }
  for (p = 0; p < lastp; p++) {
    int i = values[p];
    table->depth[i] = huffsize[p];
    table->code[i] = huffcode[p];
  }
}
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    /*
XXH32() :
    Calculate the 32-bits hash of sequence of length 'len' stored at memory address 'input'.
    The memory between input & input+len must be valid (allocated and read-accessible).
    'seed' can be used to alter the result predictably.
    This function successfully passes all SMHasher tests.
    Speed on Core 2 Duo @ 3 GHz (single thread, SMHasher benchmark) : 5.4 GB/s
    Note that 'len' is type 'int', which means it is limited to 2^31-1.
    If your data is larger, use the advanced functions below.
*/
    
      virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override;
    
    void JniCallback::releaseJniEnv(jboolean& attached) const {
  JniUtil::releaseJniEnv(m_jvm, attached);
}
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
    #include 'rocksdb/utilities/env_librados.h'
#include 'util/random.h'
#include <mutex>
#include <cstdlib>
    
    DirectComparatorJniCallback::DirectComparatorJniCallback(
    JNIEnv* env, jobject jComparator,
    const ComparatorJniCallbackOptions* copt) :
    BaseComparatorJniCallback(env, jComparator, copt) {
  m_jSliceA = env->NewGlobalRef(DirectSliceJni::construct0(env));
  if(m_jSliceA == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    }
    
    #include <jni.h>
#include <memory>
#include <string>
#include 'rocksjni/jnicallback.h'
#include 'port/port.h'
#include 'rocksdb/env.h'
    
    double HistogramStat::Average() const {
  uint64_t cur_num = num();
  uint64_t cur_sum = sum();
  if (cur_num == 0) return 0;
  return static_cast<double>(cur_sum) / static_cast<double>(cur_num);
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo
    
      bool SetExtrinsics(const Eigen::Matrix<double, 4, 4>& extrinsics) override {
    return true;
  }
    
    using apollo::common::math::Box2d;
using apollo::common::math::PathMatcher;
using apollo::common::math::Vec2d;
using apollo::common::PathPoint;
using apollo::common::TrajectoryPoint;
    
      std::vector<Vec2d> new_points;
  for (int i = 0; i < n; ++i) {
    if (side[i] >= 0) {
      new_points.push_back((*points)[i]);
    }
    const int j = ((i == n - 1) ? 0 : (i + 1));
    if (side[i] * side[j] < 0) {
      const double ratio = prod[j] / (prod[j] - prod[i]);
      new_points.emplace_back(
          (*points)[i].x() * ratio + (*points)[j].x() * (1.0 - ratio),
          (*points)[i].y() * ratio + (*points)[j].y() * (1.0 - ratio));
    }
  }
    
      virtual std::string name() const;
    
    
    {  std::vector<common::TrajectoryPoint> complete_rtk_trajectory_;
};
    
    // This will register a benchmark for a templatized function.  For example:
//
// template<int arg>
// void BM_Foo(int iters);
//
// BENCHMARK_TEMPLATE(BM_Foo, 1);
//
// will register BM_Foo<1> as a benchmark.
#define BENCHMARK_TEMPLATE1(n, a)                        \
  BENCHMARK_PRIVATE_DECLARE(n) =                         \
      (::benchmark::internal::RegisterBenchmarkInternal( \
          new ::benchmark::internal::FunctionBenchmark(#n '<' #a '>', n<a>)))
    
    #define arraysize(array) (sizeof(::benchmark::internal::ArraySizeHelper(array)))
    
    
    {bool IsTruthyFlagValue(const std::string& value) {
  if (value.empty()) return true;
  char ch = value[0];
  return isalnum(ch) &&
         !(ch == '0' || ch == 'f' || ch == 'F' || ch == 'n' || ch == 'N');
}
}  // end namespace benchmark

    
    template <class Tp>
LogType& operator<<(LogType& log, Tp const& value) {
  if (log.out_) {
    *log.out_ << value;
  }
  return log;
}
    
    inline Regex::~Regex() {}