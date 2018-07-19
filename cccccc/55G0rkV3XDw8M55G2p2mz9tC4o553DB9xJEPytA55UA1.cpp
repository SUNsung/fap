
        
        #include 'db/builder.h'
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
    namespace leveldb {
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
    class Env;
    
    
    {  // At this point, letter_types is entirely U_LTR or U_RTL.
  for (int i = word_length_ - 1; i >= 0;) {
    if (letter_types[i] == U_RTL) {
      blob_indices->push_back(i);
      i--;
    } else {
      // left to right sequence.  scan to the beginning.
      int j = i - 1;
      for (; j >= 0 && letter_types[j] != U_RTL; j--) { }  // pass
      // Now (j, i] is LTR
      for (int k = j + 1; k <= i; k++) blob_indices->push_back(k);
      i = j;
    }
  }
  ASSERT_HOST(blob_indices->size() == word_length_);
}
    
    // Get a terminated UTF8 string: Must delete[] it after use.
char* UNICHAR::utf8_str() const {
  int len = utf8_len();
  char* str = new char[len + 1];
  memcpy(str, chars, len);
  str[len] = 0;
  return str;
}
    
     private:
  NormalizationMode norm_mode_;
  // Character set we are training for.
  UNICHARSET unicharset_;
  // Original feature space. Subspace mapping is contained in feature_map_.
  IntFeatureSpace feature_space_;
  TrainingSampleSet samples_;
  TrainingSampleSet junk_samples_;
  TrainingSampleSet verify_samples_;
  // Master shape table defines what fonts stay together until the leaves.
  ShapeTable master_shapes_;
  // Flat shape table has each unichar/font id pair in a separate shape.
  ShapeTable flat_shapes_;
  // Font metrics gathered from multiple files.
  FontInfoTable fontinfo_table_;
  // Array of xheights indexed by font ids in fontinfo_table_;
  GenericVector<int32_t> xheights_;
    
    
    {  if ((chainsum != 4 && chainsum != -4)
  || edgept != start || length < MINEDGELENGTH) {
    if (edgept != start) {
     return ScrollView::YELLOW;
    } else if (length < MINEDGELENGTH) {
     return ScrollView::MAGENTA;
    } else {
      ED_ILLEGAL_SUM.error ('check_path_legal', TESSLOG, 'chainsum=%d',
        chainsum);
      return ScrollView::GREEN;
    }
  }
                                 //colour on inside
  return chainsum < 0 ? ScrollView::BLUE : ScrollView::RED;
}
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/push_options.hpp>
    
    template <typename Stream>
class buffered_read_stream;
    
    namespace boost {
namespace asio {
    }
    }
    
      descriptor_write_op(int descriptor,
      const ConstBufferSequence& buffers, Handler& handler)
    : descriptor_write_op_base<ConstBufferSequence>(
        descriptor, buffers, &descriptor_write_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
    
    {  errno = 0;
  int result = error_wrapper(::fcntl(d, cmd), ec);
  if (result != -1)
    ec = boost::system::error_code();
  return result;
}
    
    #endif // defined(BOOST_ASIO_HAS_DEV_POLL)
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    /*!
 * \brief string flag for R library, to leave hooks when needed.
 */
#ifndef XGBOOST_STRICT_R_MODE
#define XGBOOST_STRICT_R_MODE 0
#endif
    
    #pragma once
    
    template <typename T>
constexpr ordering to_ordering(T c) {
  return c < T(0) ? ordering::lt : c > T(0) ? ordering::gt : ordering::eq;
}
    
    TEST_F(OrderingTest, to_ordering) {
  EXPECT_EQ(ordering::lt, to_ordering(int(ordering::lt)));
  EXPECT_EQ(ordering::eq, to_ordering(int(ordering::eq)));
  EXPECT_EQ(ordering::gt, to_ordering(int(ordering::gt)));
    }
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    #include <boost/container/flat_map.hpp>
#include <boost/operators.hpp>
    
    
    {  return block;
}
    
    	if (!xlogger_IsEnabledFor((TLogLevel)_level)) {
		return;
	}
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
    }
    
    
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    ScopeJEnv::ScopeJEnv(JavaVM* jvm, jint _capacity)
    : vm_(jvm), env_(NULL), we_attach_(false), status_(0) {
    ASSERT(jvm);
    do {
        env_ = (JNIEnv*)pthread_getspecific(g_env_key);
        
        if (NULL != env_) {
            break;
        }
        
        status_ = vm_->GetEnv((void**) &env_, JNI_VERSION_1_6);
    }
    }
    
    
#endif /* SCOP_JENV_H_ */

    
    // This is needed for return conversion
template <>
struct Convert<void> {
  typedef void jniType;
};
    
    #include <cstdarg>
#include <stdio.h>
    
    namespace facebook {
    }
    
    inline local_ref<jobject> autobox(alias_ref<jobject> val) {
  return make_local(val);
}