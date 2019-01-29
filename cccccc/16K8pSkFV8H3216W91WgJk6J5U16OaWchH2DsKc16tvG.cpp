
        
        const std::string doc = R'DOC(
  Single-feature representation:
  - scalar features:
    <feature full name> T
  - list features:
    <feature full name>.lengths int32
    <feature full name>.values T
  - map features:
    <feature full name>.lengths int32
    <feature full name>.keys K
    <feature full name>.values V
    
    #if GTEST_OS_SYMBIAN
  // Streams a value (either a pointer or not) to this object.
  template <typename T>
  inline Message& operator <<(const T& value) {
    StreamHelper(typename internal::is_pointer<T>::type(), value);
    return *this;
  }
#else
  // Streams a non-pointer value to this object.
  template <typename T>
  inline Message& operator <<(const T& val) {
    // Some libraries overload << for STL containers.  These
    // overloads are defined in the global namespace instead of ::std.
    //
    // C++'s symbol lookup rule (i.e. Koenig lookup) says that these
    // overloads are visible in either the std namespace or the global
    // namespace, but not other namespaces, including the testing
    // namespace which Google Test's Message class is in.
    //
    // To allow STL containers (and other types that has a << operator
    // defined in the global namespace) to be used in Google Test
    // assertions, testing::Message must access the custom << operator
    // from the global namespace.  With this using declaration,
    // overloads of << defined in the global namespace and those
    // visible via Koenig lookup are both exposed in this function.
    using ::operator <<;
    *ss_ << val;
    return *this;
  }
    
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
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
      // Returns true iff the current test has a (either fatal or
  // non-fatal) failure.
  static bool HasFailure() { return HasFatalFailure() || HasNonfatalFailure(); }
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
    
    {    if (next_ == this) return true;
    linked_ptr_internal const* p = next_;
    while (p->next_ != this) p = p->next_;
    p->next_ = next_;
    return false;
  }
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    
    {  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
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
    
    
    {  return clone;
}
    
    
#endif  // GTEST_SAMPLES_SAMPLE2_H_

    
    namespace b2ConvexDecomp {
    }
    
    #include 'EtcConfig.h'
#include 'EtcImage.h'
#include 'EtcColor.h'
#include 'EtcErrorMetric.h'
#include <memory>
    
    
  /* Properties are specific to a writing system.  We assume that a given  */
  /* blue string can't be used in more than a single writing system, which */
  /* is a safe bet.                                                        */
#define AF_BLUE_PROPERTY_LATIN_TOP       ( 1U << 0 )  /* must have value 1 */
#define AF_BLUE_PROPERTY_LATIN_SUB_TOP   ( 1U << 1 )
#define AF_BLUE_PROPERTY_LATIN_NEUTRAL   ( 1U << 2 )
#define AF_BLUE_PROPERTY_LATIN_X_HEIGHT  ( 1U << 3 )
#define AF_BLUE_PROPERTY_LATIN_LONG      ( 1U << 4 )
    
    // Constants:
//  for (int i = 1; i< 32; ++i)
//    printf('static const int cospi_%d_64 = %.0f;\n', i,
//           round(16384 * cos(i*M_PI/64)));
// Note: sin(k*Pi/64) = cos((32-k)*Pi/64)
static const tran_high_t cospi_1_64  = 16364;
static const tran_high_t cospi_2_64  = 16305;
static const tran_high_t cospi_3_64  = 16207;
static const tran_high_t cospi_4_64  = 16069;
static const tran_high_t cospi_5_64  = 15893;
static const tran_high_t cospi_6_64  = 15679;
static const tran_high_t cospi_7_64  = 15426;
static const tran_high_t cospi_8_64  = 15137;
static const tran_high_t cospi_9_64  = 14811;
static const tran_high_t cospi_10_64 = 14449;
static const tran_high_t cospi_11_64 = 14053;
static const tran_high_t cospi_12_64 = 13623;
static const tran_high_t cospi_13_64 = 13160;
static const tran_high_t cospi_14_64 = 12665;
static const tran_high_t cospi_15_64 = 12140;
static const tran_high_t cospi_16_64 = 11585;
static const tran_high_t cospi_17_64 = 11003;
static const tran_high_t cospi_18_64 = 10394;
static const tran_high_t cospi_19_64 = 9760;
static const tran_high_t cospi_20_64 = 9102;
static const tran_high_t cospi_21_64 = 8423;
static const tran_high_t cospi_22_64 = 7723;
static const tran_high_t cospi_23_64 = 7005;
static const tran_high_t cospi_24_64 = 6270;
static const tran_high_t cospi_25_64 = 5520;
static const tran_high_t cospi_26_64 = 4756;
static const tran_high_t cospi_27_64 = 3981;
static const tran_high_t cospi_28_64 = 3196;
static const tran_high_t cospi_29_64 = 2404;
static const tran_high_t cospi_30_64 = 1606;
static const tran_high_t cospi_31_64 = 804;
    
    
    {
    {    if (Reverse1)
    {
      op1b = DupOutPt(op1, false);
      op2b = DupOutPt(op2, true);
      op1->Prev = op2;
      op2->Next = op1;
      op1b->Next = op2b;
      op2b->Prev = op1b;
      j->OutPt1 = op1;
      j->OutPt2 = op1b;
      return true;
    } else
    {
      op1b = DupOutPt(op1, true);
      op2b = DupOutPt(op2, false);
      op1->Next = op2;
      op2->Prev = op1;
      op1b->Prev = op2b;
      op2b->Next = op1b;
      j->OutPt1 = op1;
      j->OutPt2 = op1b;
      return true;
    }
  }
}
//----------------------------------------------------------------------
    
    /**
  Compress a block of data in the input buffer and returns the size of
  compressed block. The size of input buffer is specified by length. The
  minimum input buffer size is 16.
    
    #ifdef FIXED_POINT
/*#  define KISS_FFT_COS(phase)  TRIG_UPSCALE*floor(MIN(32767,MAX(-32767,.5+32768 * cos (phase))))
#  define KISS_FFT_SIN(phase)  TRIG_UPSCALE*floor(MIN(32767,MAX(-32767,.5+32768 * sin (phase))))*/
#  define KISS_FFT_COS(phase)  floor(.5+TWID_MAX*cos (phase))
#  define KISS_FFT_SIN(phase)  floor(.5+TWID_MAX*sin (phase))
#  define HALF_OF(x) ((x)>>1)
#elif defined(USE_SIMD)
#  define KISS_FFT_COS(phase) _mm_set1_ps( cos(phase) )
#  define KISS_FFT_SIN(phase) _mm_set1_ps( sin(phase) )
#  define HALF_OF(x) ((x)*_mm_set1_ps(.5f))
#else
#  define KISS_FFT_COS(phase) (kiss_fft_scalar) cos(phase)
#  define KISS_FFT_SIN(phase) (kiss_fft_scalar) sin(phase)
#  define HALF_OF(x) ((x)*.5f)
#endif
    
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
    
            outputs.insert(outputsToFetch.begin(), outputsToFetch.end());
    
            bool IsPacked() const { return m_isPacked; }
    
            bool isSparse = dict[isSparseKey].Value<bool>();
        std::wstring name = L'';
        if (dict.Contains(nameKey))
            name = dict[nameKey].Value<std::wstring>();
        bool needsGradient = dict[needsGradientKey].Value<bool>();
        const auto& shape = dict[shapeKey].Value<NDShape>();
    
        // Releases the mutex
    void Release()
    {
        assert(m_fd != -1);
        // removing file
        unlink(m_fileName.c_str());
        // Note: file is intentionally removed *before* releasing the lock
        // to ensure that locked file isn't deleted by the non-owner of the lock
        m_lock.l_type = F_UNLCK;
        // Now removing the lock and closing the file descriptor
        // waiting processes will be notified
        int rc = fcntl(m_fd, F_SETLKW, &m_lock);
        if (rc == FCNTL_ERROR)
        {
            RuntimeError('Mutex Release: Failed to release mutex %s', m_fileName.c_str());
        }
        close(m_fd);
        m_fd = -1;
    }
    
            // If node derives from ILateAttachingNode() then it has unresolved inputs. Resolve them now.
        // This may generate a whole new load of nodes, including nodes which in turn have late init.
        // Note: In case of editing, we may be adding a new node that references nodes from the old
        // network that must be mapped because their inputs have changed. Hence, it is important to
        // to the mapping *after* late attaching.
        if (node->GetNumInputs() == 0) // (if this function is called during model editing, we may already have our inputs)
        {
            let lateAttachingNode = dynamic_pointer_cast<ILateAttachingNode>(node);
            if (lateAttachingNode)
                lateAttachingNode->LateAttachInputs();
        }
    
     protected:
  /**
   * \struct  PredictionCacheEntry
   *
   * \brief Contains pointer to input matrix and associated cached predictions.
   */
  struct PredictionCacheEntry {
    std::shared_ptr<DMatrix> data;
    HostDeviceVector<bst_float> predictions;
  };
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
          CompressedIterator<int> ci(buffer.data(), alphabet_size);
      std::vector<int> output(input.size());
      for (int i = 0; i < input.size(); i++) {
        output[i] = ci[i];
      }
    
    #include <dmlc/registry.h>
#include <vector>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include './base.h'
#include './data.h'
#include './objective.h'
#include './feature_map.h'
#include '../../src/common/host_device_vector.h'
    
      {
    float arr[16];
    InitializeRange(arr, arr + 16);
    }