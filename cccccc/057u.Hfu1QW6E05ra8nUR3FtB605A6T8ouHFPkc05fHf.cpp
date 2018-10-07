
        
        /** Generate blocks (mine) */
UniValue generateBlocks(std::shared_ptr<CReserveScript> coinbaseScript, int nGenerate, uint64_t nMaxTries, bool keepScript);
    
    static void secp256k1_gej_add_zinv_var(secp256k1_gej *r, const secp256k1_gej *a, const secp256k1_ge *b, const secp256k1_fe *bzinv) {
    /* 9 mul, 3 sqr, 4 normalize, 12 mul_int/add/negate */
    secp256k1_fe az, z12, u1, u2, s1, s2, h, i, i2, h2, h3, t;
    }
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    #include <vector>
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_CONV_LAYER_HPP_

    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace CNTK
{
    CNTK_API const std::wstring Learner::MinibatchSizeKey = L'MinibatchSize';
    ///
    /// A special value that can be used for the minibatchSize to indicate that the reference minibatch size is not specified.
    ///
    CNTK_API const size_t Learner::IgnoredMinibatchSize = TrainingParameterSchedule<double>::IgnoredMinibatchSize;
    }
    
        template <>
    std::tuple<const void *, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<float16>() const
    {
        return _SparseBlockColumnDataBuffers<float16, half>();
    }
    
            template<typename OnWriteUpdateFunc>
        void Update(size_t samples, const ValuePtr& accumulatedLoss, const ValuePtr& accumulatedMetric,
                    OnWriteUpdateFunc callback)
        {
            if (samples == 0)
            {
                return;
            }
    }
    
    #  ifdef template
#     undef template
#  endif
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
    
    {   // remember where we got to if this is a leading repeat:
   if((rep->leading) && (count < rep->max))
      restart = position;
   if(position == last)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if((m_match_flags & match_partial) && (position == last) && (position != search_base))
         m_has_partial_match = true;
      if(0 == (rep->can_be_null & mask_skip))
         return true;
   }
   else if(count == rep->max)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if(!can_start(*position, rep->_map, mask_skip))
         return true;
   }
   else
   {
      pmp->count = count;
      pmp->last_position = position;
   }
   pstate = rep->alt.p;
   return false;
}
    
    
    {
    {}
} // namespace boost
    
    #ifndef BOOST_REGEX_V4_CHAR_REGEX_TRAITS_HPP
#include <boost/regex/v4/char_regex_traits.hpp>
#endif
#ifndef BOOST_REGEX_V4_STATES_HPP
#include <boost/regex/v4/states.hpp>
#endif
#ifndef BOOST_REGEX_V4_REGBASE_HPP
#include <boost/regex/v4/regbase.hpp>
#endif
#ifndef BOOST_REGEX_V4_ITERATOR_TRAITS_HPP
#include <boost/regex/v4/iterator_traits.hpp>
#endif
#ifndef BOOST_REGEX_V4_BASIC_REGEX_HPP
#include <boost/regex/v4/basic_regex.hpp>
#endif
#ifndef BOOST_REGEX_V4_BASIC_REGEX_CREATOR_HPP
#include <boost/regex/v4/basic_regex_creator.hpp>
#endif
#ifndef BOOST_REGEX_V4_BASIC_REGEX_PARSER_HPP
#include <boost/regex/v4/basic_regex_parser.hpp>
#endif
#ifndef BOOST_REGEX_V4_SUB_MATCH_HPP
#include <boost/regex/v4/sub_match.hpp>
#endif
#ifndef BOOST_REGEX_FORMAT_HPP
#include <boost/regex/v4/regex_format.hpp>
#endif
#ifndef BOOST_REGEX_V4_MATCH_RESULTS_HPP
#include <boost/regex/v4/match_results.hpp>
#endif
#ifndef BOOST_REGEX_V4_PROTECTED_CALL_HPP
#include <boost/regex/v4/protected_call.hpp>
#endif
#ifndef BOOST_REGEX_MATCHER_HPP
#include <boost/regex/v4/perl_matcher.hpp>
#endif
//
// template instances:
//
#define BOOST_REGEX_CHAR_T char
#ifdef BOOST_REGEX_NARROW_INSTANTIATE
#  define BOOST_REGEX_INSTANTIATE
#endif
#include <boost/regex/v4/instances.hpp>
#undef BOOST_REGEX_CHAR_T
#ifdef BOOST_REGEX_INSTANTIATE
#  undef BOOST_REGEX_INSTANTIATE
#endif
    
    template <class Base, class Match>
struct format_functor3
{
   format_functor3(Base b) : func(b) {}
   template <class OutputIter>
   OutputIter operator()(const Match& m, OutputIter i, boost::regex_constants::match_flag_type f)
   {
      return boost::unwrap_ref(func)(m, i, f);
   }
   template <class OutputIter, class Traits>
   OutputIter operator()(const Match& m, OutputIter i, boost::regex_constants::match_flag_type f, const Traits&)
   {
      return (*this)(m, i, f);
   }
private:
   Base func;
   format_functor3(const format_functor3&);
   format_functor3& operator=(const format_functor3&);
};
    
       pimpl pdata;
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags = match_default)
{
   return regex_search(first, last, m, e, flags, first);
}
    
    template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetGrad() const {
  return grad_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetHess() const {
  return hess_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetGrad(float g) {
  grad_ = static_cast<int64_t>(std::round(g * 1e4));
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetHess(float h) {
  hess_ = static_cast<int64_t>(std::round(h * 1e4));
}
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    
    { private:
  std::istream &fin_;
};
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    
    {
    {XGBOOST_REGISTER_TREE_UPDATER(TreePruner, 'prune')
.describe('Pruner that prune the tree according to statistics.')
.set_body([]() {
    return new TreePruner();
  });
}  // namespace tree
}  // namespace xgboost

    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    
    {  using thirteen_thirds = std::chrono::duration<double, std::ratio<13, 3>>;
  ts.tv_sec = 39;
  ts.tv_nsec = 0;
  EXPECT_NEAR(9.0, to<thirteen_thirds>(ts).count(), 0.000000001);
  ts.tv_sec = 1;
  ts.tv_nsec = 0;
  EXPECT_NEAR(0.230769230, to<thirteen_thirds>(ts).count(), 0.000000001);
}
    
    
    {  bool initialized_{false};
  folly::Function<folly::Function<void(double)>()> initialize_;
  folly::Function<void(double)> increment_;
};
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    /**
 * Get the default options for gzip compression.
 * A codec created with these options will have type CodecType::GZIP.
 */
Options defaultGzipOptions();
    
    
    {} // namespace folly

    
    bool IsZero(double n);
    
    namespace benchmark {
// Parses 'str' for a 32-bit signed integer.  If successful, writes
// the result to *value and returns true; otherwise leaves *value
// unchanged and returns false.
bool ParseInt32(const std::string& src_text, const char* str, int32_t* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const long long_value = strtol(str, &end, 10);  // NOLINT
    }
    }
    
    struct LeastSq {
  LeastSq() : coef(0.0), rms(0.0), complexity(oNone) {}
    }
    
    #endif  // BENCHMARK_CYCLECLOCK_H_

    
    inline LogType& GetErrorLogInstance() {
  static LogType log(&std::clog);
  return log;
}
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }