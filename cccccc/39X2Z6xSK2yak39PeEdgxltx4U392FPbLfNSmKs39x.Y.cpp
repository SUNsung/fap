
        
        TEST_F(UnicharcompressTest, DoesJapanese) {
  LOG(INFO) << 'Testing jpn';
  LoadUnicharset('jpn.unicharset');
  ExpectCorrect('jpn');
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
    
    template <class R, class P1, class P2, class P3, class P4, class A1, class A2, class A3, class A4>
inline typename _TessFunctionResultCallback_4_4<false,R,P1,P2,P3,P4,A1,A2,A3,A4>::base*
NewPermanentTessCallback(R (*function)(P1,P2,P3,P4,A1,A2,A3,A4), typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3, typename Identity<P4>::type p4) {
  return new _TessFunctionResultCallback_4_4<false,R,P1,P2,P3,P4,A1,A2,A3,A4>(function, p1, p2, p3, p4);
}
    
      const IndexMapBiDi& charset_map() const {
    return *charset_map_;
  }
  const ShapeTable* shape_table() const {
    return shape_table_;
  }
  // Sample set operations.
  const TrainingSampleSet* sample_set() const {
    return sample_set_;
  }
    
      // Accessors
  int num_samples() const {
    return samples_.size();
  }
  int num_raw_samples() const {
    return num_raw_samples_;
  }
  int NumFonts() const {
    return font_id_map_.SparseSize();
  }
  const UNICHARSET& unicharset() const {
    return unicharset_;
  }
  int charsetsize() const {
    return unicharset_size_;
  }
  const FontInfoTable& fontinfo_table() const {
    return fontinfo_table_;
  }
    
    // Sums the products of weight updates in *this and other, splitting into
// positive (same direction) in *same and negative (different direction) in
// *changed.
void WeightMatrix::CountAlternators(const WeightMatrix& other, double* same,
                                    double* changed) const {
  int num_outputs = updates_.dim1();
  int num_inputs = updates_.dim2();
  ASSERT_HOST(num_outputs == other.updates_.dim1());
  ASSERT_HOST(num_inputs == other.updates_.dim2());
  for (int i = 0; i < num_outputs; ++i) {
    const double* this_i = updates_[i];
    const double* other_i = other.updates_[i];
    for (int j = 0; j < num_inputs; ++j) {
      double product = this_i[j] * other_i[j];
      if (product < 0.0)
        *changed -= product;
      else
        *same += product;
    }
  }
}
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
      struct Hash {
    size_t operator()(Vconst c) const {
      return
        std::hash<uint64_t>()(c.val) ^ std::hash<int>()(c.kind) ^ c.isUndef;
    }
  };
    
    //////////////////////////////////////////////////////////////////////
    
    void MemoryManager::resetEagerGC() {
  if (RuntimeOption::EvalEagerGC && RuntimeOption::EvalFilterGCPoints) {
    t_surprise_filter.clear();
  }
}
    
    void OutputImageComponent::Reset(int factor_x, int factor_y) {
  factor_x_ = factor_x;
  factor_y_ = factor_y;
  width_in_blocks_ = (width_ + 8 * factor_x_ - 1) / (8 * factor_x_);
  height_in_blocks_ = (height_ + 8 * factor_y_ - 1) / (8 * factor_y_);
  num_blocks_ = width_in_blocks_ * height_in_blocks_;
  coeffs_ = std::vector<coeff_t>(num_blocks_ * kDCTBlockSize);
  pixels_ = std::vector<uint16_t>(width_ * height_, 128 << 4);
  for (int i = 0; i < kDCTBlockSize; ++i) quant_[i] = 1;
}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #include <stddef.h>
#include <stdint.h>
    
    // Functions for writing a JPEGData object into a jpeg byte stream.
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    // A builder class to build a merging iterator by adding iterators one by one.
class MergeIteratorBuilder {
 public:
  // comparator: the comparator used in merging comparator
  // arena: where the merging iterator needs to be allocated from.
  explicit MergeIteratorBuilder(const InternalKeyComparator* comparator,
                                Arena* arena, bool prefix_seek_mode = false);
  ~MergeIteratorBuilder();
    }
    
    
    {  InternalIterator* iter_;
  bool valid_;
  Slice key_;
};
    
    #include <exception>
#include <stdexcept>
    
    
    {} // namespace folly

    
    
    {
    {} // namespace detail
} // namespace folly

    
      /**
   * Set all pipes from / to child to be non-blocking.  communicate() does
   * this for you.
   */
  void setAllNonBlocking();
    
    AbstractBtMessage::AbstractBtMessage(uint8_t id, const char* name)
    : BtMessage(id),
      invalidate_(false),
      uploading_(false),
      cuid_(0),
      name_(name),
      pieceStorage_(nullptr),
      dispatcher_(nullptr),
      messageFactory_(nullptr),
      requestFactory_(nullptr),
      peerConnection_(nullptr),
      metadataGetMode_(false)
{
}
    
    class AbstractCommand : public Command {
private:
  std::shared_ptr<Request> req_;
  std::shared_ptr<FileEntry> fileEntry_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<SocketRecvBuffer> socketRecvBuffer_;
  std::shared_ptr<SocketCore> readCheckTarget_;
  std::shared_ptr<SocketCore> writeCheckTarget_;
    }
    
      virtual ssize_t readData(unsigned char* data, size_t len,
                           int64_t offset) CXX11_OVERRIDE;
    
    
    {} // namespace aria2
    
      virtual bool finished() CXX11_OVERRIDE;
    
    void AnnounceList::resetIterator()
{
  currentTier_ = std::begin(tiers_);
  if (currentTier_ != std::end(tiers_) && (*currentTier_)->urls.size()) {
    currentTracker_ = std::begin((*currentTier_)->urls);
    currentTrackerInitialized_ = true;
  }
  else {
    currentTrackerInitialized_ = false;
  }
}
    
    namespace aria2 {
    }
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
    #include <ostream>
    
      // Don't allow copying
  AuthConfig(const AuthConfig&);
  AuthConfig& operator=(const AuthConfig&);
    
    #endif // D_AUTH_RESOLVER_H

    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
     public:
    
    #include <fb/assert.h>
#include <fb/log.h>
    
    #pragma once
#include <functional>
#include <string>
#include <jni.h>
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
    // Reference counting smart pointer. This is designed to work with the
// Countable class or other implementations in the future. It is designed in a
// way to be both efficient and difficult to misuse. Typical usage is very
// simple once you learn the patterns (and the compiler will help!):
//
// By default, the internal pointer is null.
//   RefPtr<Foo> ref;
//
// Object creation requires explicit construction:
//   RefPtr<Foo> ref = createNew<Foo>(...);
//
// Or if the constructor is not public:
//   RefPtr<Foo> ref = adoptRef(new Foo(...));
//
// But you can implicitly create from nullptr:
//   RefPtr<Foo> maybeRef = cond ? ref : nullptr;
//
// Move/Copy Construction/Assignment are straightforward:
//   RefPtr<Foo> ref2 = ref;
//   ref = std::move(ref2);
//
// Destruction automatically drops the RefPtr's reference as expected.
//
// Upcasting is implicit but downcasting requires an explicit cast:
//   struct Bar : public Foo {};
//   RefPtr<Bar> barRef = static_cast<RefPtr<Bar>>(ref);
//   ref = barRef;
//
template <class T>
class RefPtr {
public:
  constexpr RefPtr() :
    m_ptr(nullptr)
  {}
    }