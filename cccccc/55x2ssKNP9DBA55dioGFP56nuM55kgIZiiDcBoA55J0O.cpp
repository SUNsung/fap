
        
        
    {  DISALLOW_COPY_AND_ASSIGN(Debugger);
};
    
    
    {}  // namespace api
    
    namespace content {
class WebContents;
}
    
    
    {}  // namespace asar

    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
    #ifndef TESSERACT_CCUTIL_QRSEQUENCE_H_
#define TESSERACT_CCUTIL_QRSEQUENCE_H_
    
    /*---------------------------------------------------------------------------
          Macros
----------------------------------------------------------------------------*/
/* macros for controlling the display of recognized characters */
#define EnableCharDisplay()   (DisplayCharacters = TRUE)
#define DisableCharDisplay()    (DisplayCharacters = FALSE)
    
    FLOAT32 DistanceBetween(FPOINT A, FPOINT B);
    
    void FindDirectionChanges(MFOUTLINE Outline,
                          FLOAT32 MinSlope,
                          FLOAT32 MaxSlope);
    
      /// Start an asynchronous fill.
  template <typename ReadHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(ReadHandler,
      void (boost::system::error_code, std::size_t))
  async_fill(BOOST_ASIO_MOVE_ARG(ReadHandler) handler);
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/pop_options.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
        // Push the key/value pair on to the stack.
    context(Key* k, Value& v)
      : key_(k),
        value_(&v),
        next_(call_stack<Key, Value>::top_)
    {
      call_stack<Key, Value>::top_ = this;
    }
    
    #include <boost/asio/detail/config.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    #include <boost/asio/detail/push_options.hpp>
    
      STDMETHODIMP put_Length(UINT32 value)
  {
    if (value > capacity_)
      return E_INVALIDARG;
    length_ = value;
    return S_OK;
  }
    
    Handle<Value> DBWrapper::Dump(const Arguments& args) {
  HandleScope scope;
  std::unique_ptr<rocksdb::Iterator> iterator;
  DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  std::string arg0      = *v8::String::Utf8Value(args[0]->ToString());
    }
    
    
    {} // namespace rocksdb

    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    
    {    RecordTick(GetStatistics(), READ_AMP_TOTAL_READ_BYTES, block_size);
  }
    
     private:
  std::shared_ptr<Logger> info_log_;
  const unique_ptr<SequentialFileReader> file_;
  Reporter* const reporter_;
  bool const checksum_;
  char* const backing_store_;
  Slice buffer_;
  bool eof_;   // Last Read() indicated EOF by returning < kBlockSize
  bool read_error_;   // Error occurred while reading from file
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
      explicit TestState(int s)
      : seed_(s),
        quit_flag_(false),
        state_(STARTING),
        pending_writers_(0),
        state_cv_(&mu_) {}