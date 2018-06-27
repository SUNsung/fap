
        
        namespace testing {
namespace internal {
    }
    }
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    // A function to convert T* into linked_ptr<T>
// Doing e.g. make_linked_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for linked_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
linked_ptr<T> make_linked_ptr(T* ptr) {
  return linked_ptr<T>(ptr);
}
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_)};
    return ValuesIn(array);
  }
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    // A unique struct template used as the default value for the
// arguments of class template Templates.  This allows us to simulate
// variadic templates (e.g. Templates<int>, Templates<int, double>,
// and etc), which C++ doesn't support directly.
template <typename T>
struct NoneT {};
    
    TEST_F(UnicharcompressTest, DoesKannada) {
  LOG(INFO) << 'Testing kan';
  LoadUnicharset('kan.unicharset');
  ExpectCorrect('kan');
  SerializeAndUndo();
  ExpectCorrect('kan');
}
    
    // Helper function to prevent us from accidentally writing
// scientific notation to an HOCR or PDF file. Besides, three
// decimal points are all you really need.
double prec(double x) {
  double kPrecision = 1000.0;
  double a = round(x * kPrecision) / kPrecision;
  if (a == -0)
    return 0;
  return a;
}
    
    class TESS_API PageIterator {
 public:
  /**
   * page_res and tesseract come directly from the BaseAPI.
   * The rectangle parameters are copied indirectly from the Thresholder,
   * via the BaseAPI. They represent the coordinates of some rectangle in an
   * original image (in top-left-origin coordinates) and therefore the top-left
   * needs to be added to any output boxes in order to specify coordinates
   * in the original image. See TessBaseAPI::SetRectangle.
   * The scale and scaled_yres are in case the Thresholder scaled the image
   * rectangle prior to thresholding. Any coordinates in tesseract's image
   * must be divided by scale before adding (rect_left, rect_top).
   * The scaled_yres indicates the effective resolution of the binary image
   * that tesseract has been given by the Thresholder.
   * After the constructor, Begin has already been called.
   */
  PageIterator(PAGE_RES* page_res, Tesseract* tesseract,
               int scale, int scaled_yres,
               int rect_left, int rect_top,
               int rect_width, int rect_height);
  virtual ~PageIterator();
    }
    
    
    {
    {    return true;
  } else {
    return false;
  }
}
    
    /** Number of printers' points in an inch. The unit of the pointsize return. */
constexpr int kPointsPerInch = 72;
/**
 * Minimum believable resolution. Used as a default if there is no other
 * information, as it is safer to under-estimate than over-estimate.
 */
constexpr int kMinCredibleResolution = 70;
/** Maximum believable resolution.  */
constexpr int kMaxCredibleResolution = 2400;
/**
 * Ratio between median blob size and likely resolution. Used to estimate
 * resolution when none is provided. This is basically 1/usual text size in
 * inches.  */
constexpr int kResolutionEstimationFactor = 10;
    
    
    {  private:
    int32_t n;                     //no of elements
    double a, b, c;              //result
    double sigx;                 //sum of x
    double sigy;                 //sum of y
    double sigxx;                //sum x squared
    double sigxy;                //sum of xy
    double sigyy;                //sum y squared
    long double sigxxx;          //sum x cubed
    long double sigxxy;          //sum xsquared y
    long double sigxxxx;         //sum x fourth
};
#endif

    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class P2, class P3, class P4, class A1, class A2, class A3, class A4, class A5>
inline typename _TessMemberResultCallback_4_5<true,R,T1,P1,P2,P3,P4,A1,A2,A3,A4,A5>::base*
NewTessCallback( T1* obj, R (T2::*member)(P1,P2,P3,P4,A1,A2,A3,A4,A5) , typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3, typename Identity<P4>::type p4) {
  return new _TessMemberResultCallback_4_5<true,R,T1,P1,P2,P3,P4,A1,A2,A3,A4,A5>(obj, member, p1, p2, p3, p4);
}
#endif
    
    // Include automatically generated configuration file if running autoconf.
#ifdef HAVE_CONFIG_H
#include 'config_auto.h'
#endif
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
    std::string Timer::Show() {
  auto const header = '{:<30} | {:>15} {:>15} {:>15} {:>15}\n';
  auto const row    = '{:<30} | {:>15} {:>13,}us {:>13,}ns {:>13,}ns\n';
    }
    
      if (default_magic) {
    free(default_magic);
    default_magic = NULL;
  }
    
    
    {
    {
    {}}}
    
      // Return the set of clusters that are left, which are the ones that
  // didn't get merged (so their first func is its original func).
  std::vector<Cluster> sortedClusters;
  for (auto func : sortedFuncs) {
    auto cluster = funcCluster[func];
    if (!cluster || cluster->targets.empty()) continue;
    if (cluster->targets[0] != func) continue;
    sortedClusters.emplace_back(std::move(*cluster));
    cluster->targets.clear();
  }
    
    
static uint64_t RotateRight(uint64_t value,
                            unsigned int rotate,
                            unsigned int width) {
  assert(width <= 64);
  rotate &= 63;
  return ((value & ((1UL << rotate) - 1UL)) << (width - rotate)) |
         (value >> rotate);
}
    
      static void Close();
  static bool Available();
  static void Initialize(const std::string &prefix, int count,
                         bool trackProcessTimes,
                         const std::vector<int> &inherited_fds);
  static void ChangeUser(const std::string &username);
  static void ChangeUser(int afdt, const std::string &username);
    
      std::vector<CondVarNode> m_conds;
    
    void* mmap_2m(void* addr, int prot, int node /* = -1 */,
              bool map_shared /* = false */, bool map_fixed /* = false */) {
#ifdef __linux__
  if (get_huge2m_info(node).free_hugepages <= 0) return nullptr;
  if (node >= 0 && !numa_node_allowed(node)) return nullptr;
#ifdef HAVE_NUMA
  SavedNumaPolicy numaPolicy;
  if (node >= 0 && numa_num_nodes > 1) {
    numaPolicy.save();
    unsigned long singleNodeMask = 1ul << node;
    set_mempolicy(MPOL_BIND, &singleNodeMask, sizeof(singleNodeMask));
  }
#endif
  void* ret = mmap_2m_impl(addr, prot, map_shared, map_fixed);
  s_num2MPages += !!ret;
  return ret;
#else  // not linux
  return nullptr;
#endif
}
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Check that append works.
  ASSERT_OK(env_->NewAppendableFile('/dir/f', &writable_file));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(3, file_size);
  ASSERT_OK(writable_file->Append('hello'));
  delete writable_file;
    
    #include 'leveldb/env.h'
#include 'port/port.h'
#include 'table/block.h'
#include 'util/coding.h'
#include 'util/crc32c.h'
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    #include <stdint.h>
    
    Status Writer::EmitPhysicalRecord(RecordType t, const char* ptr, size_t n) {
  assert(n <= 0xffff);  // Must fit in two bytes
  assert(block_offset_ + kHeaderSize + n <= kBlockSize);
    }
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    #ifndef STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_
#define STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_
    
      const boost::asio::detail::function<void()>& get_debug_check() const
  {
    return debug_check_;
  }
#endif // BOOST_ASIO_ENABLE_BUFFER_DEBUGGING
    
      /// Write the given data to the stream. Returns the number of bytes written,
  /// or 0 if an error occurred.
  template <typename ConstBufferSequence>
  std::size_t write_some(const ConstBufferSequence& buffers,
      boost::system::error_code& ec)
  {
    return next_layer_.write_some(buffers, ec);
  }
    
    namespace boost {
namespace asio {
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace boost {
namespace asio {
    }
    }
    
    
    {} // namespace boost
    
      static void init_native_buffer(WSABUF& buf,
      const boost::asio::const_buffer& buffer)
  {
    buf.buf = const_cast<char*>(boost::asio::buffer_cast<const char*>(buffer));
    buf.len = static_cast<ULONG>(boost::asio::buffer_size(buffer));
  }
#else // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
  // The maximum number of buffers to support in a single operation.
  enum { max_buffers = 64 < max_iov_len ? 64 : max_iov_len };
    
    #ifndef BOOST_ASIO_DETAIL_BUFFERED_STREAM_STORAGE_HPP
#define BOOST_ASIO_DETAIL_BUFFERED_STREAM_STORAGE_HPP
    
    namespace boost {
namespace date_time {
    }
    }
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_write_op_base* o(static_cast<descriptor_write_op_base*>(base));
    }
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #define BOOST_ASIO_HANDSHAKE_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'HandshakeHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
      // Get an iterator for the beginning of the map.
  const_iterator begin() const
  {
    return values_.begin();
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Block on the /dev/poll descriptor.
  ::pollfd events[128] = { { 0, 0, 0 } };
  ::dvpoll dp = { 0, 0, 0 };
  dp.dp_fds = events;
  dp.dp_nfds = 128;
  dp.dp_timeout = timeout;
  int num_events = ::ioctl(dev_poll_fd_, DP_POLL, &dp);
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    std::string stringFromCFNumber(const CFDataRef& cf_number) {
  return stringFromCFNumber(cf_number, CFNumberGetType((CFNumberRef)cf_number));
}
    
      // Test existence checks based on flags.
  EXPECT_TRUE(cl.exists());
  EXPECT_TRUE(cl.exists(EQUALS));
  EXPECT_TRUE(cl.exists(EQUALS | LESS_THAN));
  EXPECT_FALSE(cl.exists(LESS_THAN));
    
    TEST_F(RocksDBDatabasePluginTests, test_rocksdb_loglevel) {
  // Make sure a log file was created.
  EXPECT_FALSE(pathExists(path_ + '/LOG'));
    }
    
    /**
 * @brief Pretty print a QueryData object
 *
 * This is a helper method which called osquery::beautify on the supplied
 * QueryData object and prints the results to stdout.
 *
 * @param results The QueryData object to print
 * @param columns The order of the keys (since maps are unordered)
 * @param lengths A mutable set of column lengths
 */
void prettyPrint(const QueryData& results,
                 const std::vector<std::string>& columns,
                 std::map<std::string, size_t>& lengths);