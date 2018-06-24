
        
        StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    #include 'swift/Markup/Markup.h'
#include 'llvm/ADT/Optional.h'
    
      ArrayRef<MarkupASTNode *> getChildren() {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
      virtual ~IndexDataConsumer() {}
    
      static ResultPlanPtr computeResultPlan(SILGenFunction &SGF,
                                         const CalleeTypeInfo &calleeTypeInfo,
                                         SILLocation loc,
                                         SGFContext evalContext);
    
      /// Print the resulting text, applying the caught fix-its to the given
  /// output stream.
  void printResult(llvm::raw_ostream &OS) const;
    
        // passthrough (pointer interface)
    std::pair<iterator, bool> insert(const value_type& value) { return m.insert(value); }
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    
    {  FindNextUserEntry(true, &saved_key_);
}
    
    
    {  int Compare(const InternalKey& a, const InternalKey& b) const;
};
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    
    {
}  // namespace leveldb
    
    
    {  FileMetaData() : refs(0), allowed_seeks(1 << 30), file_size(0) { }
};
    
    void WriteBatch::Put(const Slice& key, const Slice& value) {
  WriteBatchInternal::SetCount(this, WriteBatchInternal::Count(this) + 1);
  rep_.push_back(static_cast<char>(kTypeValue));
  PutLengthPrefixedSlice(&rep_, key);
  PutLengthPrefixedSlice(&rep_, value);
}
    
    #include <string>
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    #include <vector>
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    
    {}  // namespace caffe
    
      // We reserved the /Pages object number early, so that the /Page
  // objects could refer to their parent. We finally have enough
  // information to go fill it in. Using lower level calls to manipulate
  // the offset record in two spots, because we are placing objects
  // out of order in the file.
    
      /**
   * Moves the iterator to point to the start of the page to begin an
   * iteration.
   */
  virtual void Begin();
    
      /// Get a clone/copy of the source image rectangle.
  /// The returned Pix must be pixDestroyed.
  /// This function will be used in the future by the page layout analysis, and
  /// the layout analysis that uses it will only be available with Leptonica,
  /// so there is no raw equivalent.
  Pix* GetPixRect();
    
    /**
 * enum of the elements of the page hierarchy, used in ResultIterator
 * to provide functions that operate on each level without having to
 * have 5x as many functions.
*/
enum PageIteratorLevel {
  RIL_BLOCK,     // Block of text/image/separator line.
  RIL_PARA,      // Paragraph within a block.
  RIL_TEXTLINE,  // Line within a paragraph.
  RIL_WORD,      // Word within a textline.
  RIL_SYMBOL     // Symbol/character within a word.
};
    
    
    {  virtual R Run() {
    if (!del) {
      R result = (*function_)();
      return result;
    } else {
      R result = (*function_)();
      //  zero out the pointer to ensure segfault if used again
      function_ = nullptr;
      delete this;
      return result;
    }
  }
};
    
    const char *kHyphenLikeUTF8[] = {
  '-',       // ASCII hyphen-minus
  '\u05BE',  // word hyphen in hybrew
  '\u2010',  // hyphen
  '\u2011',  // non-breaking hyphen
  '\u2012',  // a hyphen the same width as digits
  '\u2013',  // en dash
  '\u2014',  // em dash
  '\u2015',  // horizontal bar
  '\u2212',  // arithmetic minus sign
  '\uFE58',  // small em dash
  '\uFE63',  // small hyphen-minus
  '\uFF0D',  // fullwidth hyphen-minus
  nullptr,      // end of our list
};
    
    
//#define EXPERIMENT_ON
#ifdef EXPERIMENT_ON  // This code is commented out as SampleIterator and
// TrainingSample are not reviewed/checked in yet, but these functions are a
// useful indicator of how an IntFeatureMap is setup.
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    
    {private:
  // The top of the stack of calls for the current thread.
  static tss_ptr<context> top_;
};
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP

    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    #if defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
inline std::size_t calculate_hash_value(SOCKET s)
{
  return static_cast<std::size_t>(s);
}
#endif // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
    
      ~winrt_buffer_impl()
  {
  }
    
    void dev_poll_reactor::do_remove_timer_queue(timer_queue_base& queue)
{
  mutex::scoped_lock lock(mutex_);
  timer_queues_.erase(&queue);
}
    
    #include <boost/algorithm/string.hpp>
    
    /// Select all from a table an exit the shell.
DECLARE_string(A);
    
    
    {
    {      // Each event type may use a specific event type structure.
      KernelEventContextRef ec = nullptr;
      switch (event_type) {
      case OSQUERY_PROCESS_EVENT:
        ec = createEventContextFrom<osquery_process_event_t>(event_type, event);
        fire(ec);
        break;
      case OSQUERY_FILE_EVENT:
        ec = createEventContextFrom<osquery_file_event_t>(event_type, event);
        fire(ec);
        break;
      default:
        LOG(WARNING) << 'Unknown kernel event received: ' << event_type;
        break;
      }
      max_before_lock--;
    }
    return true;
  };
    
    #ifdef BENCHMARK_HAS_CXX11
#define BENCHMARK_TEMPLATE(n, ...)                       \
  BENCHMARK_PRIVATE_DECLARE(n) =                         \
      (::benchmark::internal::RegisterBenchmarkInternal( \
          new ::benchmark::internal::FunctionBenchmark(  \
              #n '<' #__VA_ARGS__ '>', n<__VA_ARGS__>)))
#else
#define BENCHMARK_TEMPLATE(n, a) BENCHMARK_TEMPLATE1(n, a)
#endif
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    // Parses a string for a bool flag, in the form of either
// '--flag=value' or '--flag'.
//
// In the former case, the value is taken as true if it passes IsTruthyValue().
//
// In the latter case, the value is taken as true.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseBoolFlag(const char* str, const char* flag, bool* value);
    
      // State for barrier management
  int phase_number_ = 0;
  int entered_ = 0;  // Number of threads that have entered this barrier
    
    
    {      delete[] errbuf;
    }
    
    #ifdef BENCHMARK_OS_WINDOWS
#include <Windows.h>
#endif