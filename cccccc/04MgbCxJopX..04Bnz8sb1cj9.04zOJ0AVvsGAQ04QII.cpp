
        
          /// @brief Deprecated; use <code>Blob(const vector<int>& shape)</code>.
  explicit Blob(const int num, const int channels, const int height,
      const int width);
  explicit Blob(const vector<int>& shape);
    
      /**
   * Called by SetUp to initialize the weights associated with any top blobs in
   * the loss function. Store non-zero loss weights in the diff blob.
   */
  inline void SetLossWeights(const vector<Blob<Dtype>*>& top) {
    const int num_loss_weights = layer_param_.loss_weight_size();
    if (num_loss_weights) {
      CHECK_EQ(top.size(), num_loss_weights) << 'loss_weight must be '
          'unspecified or specified once per top blob.';
      for (int top_id = 0; top_id < top.size(); ++top_id) {
        const Dtype loss_weight = layer_param_.loss_weight(top_id);
        if (loss_weight == Dtype(0)) { continue; }
        this->set_loss(top_id, loss_weight);
        const int count = top[top_id]->count();
        Dtype* loss_multiplier = top[top_id]->mutable_cpu_diff();
        caffe_set(count, loss_weight, loss_multiplier);
      }
    }
  }
    
    template <typename Dtype>
class Layer;
    
    #include <utility>
#include <vector>
    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    #include 'util/coding.h'
    
        switch (record_type) {
      case kFullType:
        if (in_fragmented_record) {
          // Handle bug in earlier versions of log::Writer where
          // it could emit an empty kFirstType record at the tail end
          // of a block followed by a kFullType or kFirstType record
          // at the beginning of the next block.
          if (!scratch->empty()) {
            ReportCorruption(scratch->size(), 'partial record without end(1)');
          }
        }
        prospective_record_offset = physical_record_offset;
        scratch->clear();
        *record = fragment;
        last_record_offset_ = prospective_record_offset;
        return true;
    }
    
      // Fragment the record if necessary and emit it.  Note that if slice
  // is empty, we still want to iterate once to emit a single
  // zero-length record
  Status s;
  bool begin = true;
  do {
    const int leftover = kBlockSize - block_offset_;
    assert(leftover >= 0);
    if (leftover < kHeaderSize) {
      // Switch to a new block
      if (leftover > 0) {
        // Fill the trailer (literal below relies on kHeaderSize being 7)
        static_assert(kHeaderSize == 7, '');
        dest_->Append(Slice('\x00\x00\x00\x00\x00\x00', leftover));
      }
      block_offset_ = 0;
    }
    }
    
      Footer() = default;
    
    Comparator::~Comparator() = default;
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size / 5 - 1048576);
}
    
    #include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
     private:
  Status FindTable(uint64_t file_number, uint64_t file_size, Cache::Handle**);
    
    
        case URX_STRING:
            {
                // Test input against a literal string.
                // Strings require two slots in the compiled pattern, one for the
                //   offset to the string text, and one for the length.
                int32_t   stringStartIdx = opValue;
                int32_t   stringLen;
    }
    
    U_CAPI UBool U_EXPORT2
uhash_equalsScriptSet(const UElement key1, const UElement key2) {
    icu::ScriptSet *s1 = static_cast<icu::ScriptSet *>(key1.pointer);
    icu::ScriptSet *s2 = static_cast<icu::ScriptSet *>(key2.pointer);
    return (*s1 == *s2);
}
    
    #include 'unicode/messagepattern.h'
#include 'unicode/rbnf.h'
#include 'unicode/selfmt.h'
#include 'unicode/uchar.h'
#include 'unicode/ucnv_err.h'
#include 'unicode/umsg.h'
#include 'unicode/ustring.h'
#include 'unicode/utypes.h'
#include 'cmemory.h'
#include 'messageimpl.h'
#include 'patternprops.h'
#include 'selfmtimpl.h'
#include 'uassert.h'
#include 'ustrfmt.h'
#include 'util.h'
#include 'uvector.h'
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
        /**
     * Sets maximum significant digits. 0 or negative means no maximum.
     */
    void setMax(int32_t count) {
        fMax = count <= 0 ? INT32_MAX : count;
    }
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
        case UDAT_QUARTER_FIELD:
        if (count >= 4)
            _appendSymbol(appendTo, value/3, fSymbols->fQuarters,
                          fSymbols->fQuartersCount);
        else if (count == 3)
            _appendSymbol(appendTo, value/3, fSymbols->fShortQuarters,
                          fSymbols->fShortQuartersCount);
        else
            zeroPaddingNumber(currentNumberFormat,appendTo, (value/3) + 1, count, maxIntCount);
        break;
    
    
    {    if (length > 0) {
        uprv_memcpy(getBytes(), other.getBytes(), length);
    }
}
    
    /**
 * Implement UnicodeMatcher
 */
UMatchDegree StringMatcher::matches(const Replaceable& text,
                                    int32_t& offset,
                                    int32_t limit,
                                    UBool incremental) {
    int32_t i;
    int32_t cursor = offset;
    if (limit < cursor) {
        // Match in the reverse direction
        for (i=pattern.length()-1; i>=0; --i) {
            UChar keyChar = pattern.charAt(i);
            UnicodeMatcher* subm = data->lookupMatcher(keyChar);
            if (subm == 0) {
                if (cursor > limit &&
                    keyChar == text.charAt(cursor)) {
                    --cursor;
                } else {
                    return U_MISMATCH;
                }
            } else {
                UMatchDegree m =
                    subm->matches(text, cursor, limit, incremental);
                if (m != U_MATCH) {
                    return m;
                }
            }
        }
        // Record the match position, but adjust for a normal
        // forward start, limit, and only if a prior match does not
        // exist -- we want the rightmost match.
        if (matchStart < 0) {
            matchStart = cursor+1;
            matchLimit = offset+1;
        }
    } else {
        for (i=0; i<pattern.length(); ++i) {
            if (incremental && cursor == limit) {
                // We've reached the context limit without a mismatch and
                // without completing our match.
                return U_PARTIAL_MATCH;
            }
            UChar keyChar = pattern.charAt(i);
            UnicodeMatcher* subm = data->lookupMatcher(keyChar);
            if (subm == 0) {
                // Don't need the cursor < limit check if
                // incremental is TRUE (because it's done above); do need
                // it otherwise.
                if (cursor < limit &&
                    keyChar == text.charAt(cursor)) {
                    ++cursor;
                } else {
                    return U_MISMATCH;
                }
            } else {
                UMatchDegree m =
                    subm->matches(text, cursor, limit, incremental);
                if (m != U_MATCH) {
                    return m;
                }
            }
        }
        // Record the match position
        matchStart = offset;
        matchLimit = cursor;
    }
    }
    
                    // Insert any accumulated straight text.
                if (buf.length() > 0) {
                    text.handleReplaceBetween(destLimit, destLimit, buf);
                    destLimit += buf.length();
                    buf.truncate(0);
                }
    
    #include 'gtest/gtest.h'
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    // config detail: {'name': 'latitude_minutes', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 15,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'min'}
int Latlonheadingrpt82::latitude_minutes(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }
    
    // move-only type
Expected<std::unique_ptr<int>, Err> f3(int x, double y) {
  return std::make_unique<int>(int(x + y));
}
    
    namespace folly {
    }
    
    #include <folly/concurrency/AtomicSharedPtr.h>
#include <folly/concurrency/CacheLocality.h>
#include <folly/container/Enumerate.h>
#include <folly/synchronization/Hazptr.h>
    
    struct AtForkTask {
  void* object;
  folly::Function<bool()> prepare;
  folly::Function<void()> parent;
  folly::Function<void()> child;
};
    
    #include <folly/detail/RangeCommon.h>