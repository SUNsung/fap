
        
        #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
        // Make a copy of the handler so that the memory can be deallocated before
    // the upcall is made. Even if we're not about to make an upcall, a
    // sub-object of the handler may be the true owner of the memory associated
    // with the handler. Consequently, a local copy of the handler is required
    // to ensure that any owning sub-object remains valid until after we have
    // deallocated the memory here.
    detail::binder2<Handler, boost::system::error_code, std::size_t>
      handler(o->handler_, o->ec_, o->bytes_transferred_);
    p.h = boost::asio::detail::addressof(handler.handler_);
    p.reset();
    
    
    {private:
  Handler handler_;
};
    
    #ifndef BOOST_ASIO_DETAIL_EVENT_HPP
#define BOOST_ASIO_DETAIL_EVENT_HPP
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
      // Find an entry in the map.
  const_iterator find(const K& k) const
  {
    if (num_buckets_)
    {
      size_t bucket = calculate_hash_value(k) % num_buckets_;
      const_iterator it = buckets_[bucket].first;
      if (it == values_.end())
        return it;
      const_iterator end_it = buckets_[bucket].last;
      ++end_it;
      while (it != end_it)
      {
        if (it->first == k)
          return it;
        ++it;
      }
    }
    return values_.end();
  }
    
    #include <boost/asio/detail/config.hpp>
    
    #endif // BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP

    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    
    
    
    
    
        GLfloat                glVertices[] = {
        aabb->lowerBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->upperBound.y * mRatio,
        aabb->lowerBound.x * mRatio, aabb->upperBound.y * mRatio
    };
    
    class BulletTest : public Test
{
public:
    }
    
    std::vector<float> LinearlyAveragedLuma(const std::vector<float>& rgb) {
  assert(rgb.size() % 3 == 0);
  std::vector<float> y(rgb.size() / 3);
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    y[i] = LinearToGamma(RGBToY(GammaToLinear(rgb[p + 0]),
                                GammaToLinear(rgb[p + 1]),
                                GammaToLinear(rgb[p + 2])));
  }
  return y;
}
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_IDCT_H_

    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
      if (!args[2]->IsObject()) {
    return scope.Close(Boolean::New(false));
  }
    
    
    {  // if dir is a file, returns IOError
  ASSERT_OK(env_->CreateDir(test_dir_));
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(
      env_->NewWritableFile(test_dir_ + '/file', &writable_file, soptions_));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
  ASSERT_TRUE(!env_->GetChildren(test_dir_ + '/file', &children).ok());
  ASSERT_EQ(0U, children.size());
}
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
    #ifndef ROCKSDB_LITE
#include 'redis_lists.h'
    
    namespace log {
    }
    
    void JniCallback::releaseJniEnv(jboolean& attached) const {
  JniUtil::releaseJniEnv(m_jvm, attached);
}
    
    
    {      if (r == 0) {
        _buffer.clear();
        _buffer_size = 0;
        _file_size = size;
      }
    } else if (_file_size == size) {
      _buffer.clear();
      _buffer_size = 0;
    } else {
      librados::bufferlist tmp;
      tmp.claim(_buffer);
      _buffer.substr_of(tmp, 0, size - _file_size);
      _buffer_size = size - _file_size;
    }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern InternalIterator* NewMergingIterator(
    const InternalKeyComparator* comparator, InternalIterator** children, int n,
    Arena* arena = nullptr, bool prefix_seek_mode = false);
    
    struct {
#define FUZZER_DEPRECATED_FLAG(Name)
#define FUZZER_FLAG_INT(Name, Default, Description) int Name;
#define FUZZER_FLAG_UNSIGNED(Name, Default, Description) unsigned int Name;
#define FUZZER_FLAG_STRING(Name, Description) const char *Name;
#include 'FuzzerFlags.def'
#undef FUZZER_DEPRECATED_FLAG
#undef FUZZER_FLAG_INT
#undef FUZZER_FLAG_UNSIGNED
#undef FUZZER_FLAG_STRING
} Flags;
    
    std::string Hash(const Unit &U);
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void TracePC::AddValueForMemcmp(void *caller_pc, const void *s1, const void *s2,
                              size_t n) {
  if (!n) return;
  size_t Len = std::min(n, (size_t)32);
  const uint8_t *A1 = reinterpret_cast<const uint8_t *>(s1);
  const uint8_t *A2 = reinterpret_cast<const uint8_t *>(s2);
  size_t I = 0;
  for (; I < Len; I++)
    if (A1[I] != A2[I])
      break;
  size_t PC = reinterpret_cast<size_t>(caller_pc);
  size_t Idx = I;
  // if (I < Len)
  //  Idx += __builtin_popcountl((A1[I] ^ A2[I])) - 1;
  TPC.HandleValueProfile((PC & 4095) | (Idx << 12));
}
    
      void HandleTrace(uint32_t *guard, uintptr_t PC);
  void HandleInit(uint32_t *start, uint32_t *stop);
  void HandleCallerCallee(uintptr_t Caller, uintptr_t Callee);
  void HandleValueProfile(size_t Value) { ValueProfileMap.AddValue(Value); }
  template <class T> void HandleCmp(void *PC, T Arg1, T Arg2);
  size_t GetTotalPCCoverage();
  void SetUseCounters(bool UC) { UseCounters = UC; }
  void SetUseValueProfile(bool VP) { UseValueProfile = VP; }
  void SetPrintNewPCs(bool P) { DoPrintNewPCs = P; }
  template <class Callback> size_t CollectFeatures(Callback CB);
  bool UpdateValueProfileMap(ValueBitMap *MaxValueProfileMap) {
    return UseValueProfile && MaxValueProfileMap->MergeFrom(ValueProfileMap);
  }