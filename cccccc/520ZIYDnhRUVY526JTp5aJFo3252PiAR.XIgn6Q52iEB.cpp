
        
        TEST(PartialRunMgrFindOrCreate, Create) {
  // Basic test of PartialRunMgr CancellationManager creation.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  EXPECT_TRUE(cancellation_manager != nullptr);
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
    // Estimate the cost of running a Grappler item by actually running the
// corresponding TensorFlow graph on the specified cluster and measuring the
// runtimes.
class MeasuringCostEstimator : public CostEstimator {
 public:
  // Run the model for measurement_steps to measure its average cost.
  // When measurement_threads is greater than 0, use a threadpool of as many
  // threads to run the measurements; otherwise, run them serially. Does not
  // take ownership of cluster.
  explicit MeasuringCostEstimator(Cluster* cluster, int measurement_steps,
                                  int measurement_threads);
  ~MeasuringCostEstimator() override {}
    }
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
      // Logs information about the dev nodes present on this machine: their
  // existence, permissions, accessibility from this uid/gid.
  static void LogDevNodeDiagnosticInformation();
    
    namespace tensorflow {
    }
    
    # ifdef __GNUC_PREREQ
#  if __GNUC_PREREQ(3,4)
#   include <limits.h>
/*Note the casts to (int) below: this prevents OC_CLZ{32|64}_OFFS from
   'upgrading' the type of an entire expression to an (unsigned) size_t.*/
#   if INT_MAX>=2147483647
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=2147483647L
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clzl(_x))
#   endif
#   if INT_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzl(_x))
#   elif LLONG_MAX>=9223372036854775807LL|| \
     __LONG_LONG_MAX__>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzll(_x))
#   endif
#  endif
# endif
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
      &_huff_book_line_128x17_0sub0,
  &_huff_book_line_128x17_1sub0,
  &_huff_book_line_128x17_1sub1,
  &_huff_book_line_128x17_2sub1,
  &_huff_book_line_128x17_2sub2,
  &_huff_book_line_128x17_2sub3,
  &_huff_book_line_128x17_3sub1,
  &_huff_book_line_128x17_3sub2,
  &_huff_book_line_128x17_3sub3,
};
static const static_codebook*const _floor_256x4low_books[]={
  &_huff_book_line_256x4low_class0,
  &_huff_book_line_256x4low_0sub0,
  &_huff_book_line_256x4low_0sub1,
  &_huff_book_line_256x4low_0sub2,
  &_huff_book_line_256x4low_0sub3,
};
static const static_codebook*const _floor_1024x27_books[]={
  &_huff_book_line_1024x27_class1,
  &_huff_book_line_1024x27_class2,
  &_huff_book_line_1024x27_class3,
  &_huff_book_line_1024x27_class4,
    
      {2,0,32,  &_residue_44_low,
   &_huff_book__44cn1_s_long,&_huff_book__44cn1_sm_long,
   &_resbook_44s_n1,&_resbook_44sm_n1}
};
static const vorbis_residue_template _res_44s_0[]={
  {2,0,16,  &_residue_44_low,
   &_huff_book__44c0_s_short,&_huff_book__44c0_sm_short,
   &_resbook_44s_0,&_resbook_44sm_0},
    
    static const static_bookblock _resbook_44p_ln1={
  {
    {&_44pn1_l0_0,&_44pn1_l0_1,0},
    {&_44pn1_l1_0,&_44pn1_p6_1,&_44pn1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l0={
  {
    {&_44p0_l0_0,&_44p0_l0_1,0},
    {&_44p0_l1_0,&_44p0_p6_1,&_44p0_p6_2},
   }
};
static const static_bookblock _resbook_44p_l1={
  {
    {&_44p1_l0_0,&_44p1_l0_1,0},
    {&_44p1_l1_0,&_44p1_p6_1,&_44p1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l2={
  {
    {&_44p2_l0_0,&_44p2_l0_1,0},
    {&_44p2_l1_0,&_44p2_p7_2,&_44p2_p7_3},
   }
};
static const static_bookblock _resbook_44p_l3={
  {
    {&_44p3_l0_0,&_44p3_l0_1,0},
    {&_44p3_l1_0,&_44p3_p7_2,&_44p3_p7_3},
   }
};
static const static_bookblock _resbook_44p_l4={
  {
    {&_44p4_l0_0,&_44p4_l0_1,0},
    {&_44p4_l1_0,&_44p4_p7_2,&_44p4_p7_3},
   }
};
static const static_bookblock _resbook_44p_l5={
  {
    {&_44p5_l0_0,&_44p5_l0_1,0},
    {&_44p5_l1_0,&_44p5_p7_2,&_44p5_p7_3},
   }
};
static const static_bookblock _resbook_44p_l6={
  {
    {&_44p6_l0_0,&_44p6_l0_1,0},
    {&_44p6_l1_0,&_44p6_p7_2,&_44p6_p7_3},
   }
};
static const static_bookblock _resbook_44p_l7={
  {
    {&_44p7_l0_0,&_44p7_l0_1,0},
    {&_44p7_l1_0,&_44p7_p7_2,&_44p7_p7_3},
   }
};
static const static_bookblock _resbook_44p_l8={
  {
    {&_44p8_l0_0,&_44p8_l0_1,0},
    {&_44p8_l1_0,&_44p8_p7_2,&_44p8_p7_3},
   }
};
static const static_bookblock _resbook_44p_l9={
  {
    {&_44p9_l0_0,&_44p9_l0_1,0},
    {&_44p9_l1_0,&_44p9_p7_2,&_44p9_p7_3},
   }
};
    
    /* 20log10(x) */
#define VORBIS_IEEE_FLOAT32 1
#ifdef VORBIS_IEEE_FLOAT32
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(s1);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e2);
			des_encrypt3(&data[0],key1,key2,key3);
			}
    }
    
      /// Set the timer's expiry time relative to now.
  /**
   * This function sets the expiry time. Any pending asynchronous wait
   * operations will be cancelled. The handler for each cancelled operation will
   * be invoked with the boost::asio::error::operation_aborted error code.
   *
   * @param expiry_time The expiry time to be used for the timer.
   *
   * @return The number of asynchronous operations that were cancelled.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when expires_from_now() is called,
   * then the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t expires_from_now(const duration& expiry_time)
  {
    boost::system::error_code ec;
    std::size_t s = this->service.expires_from_now(
        this->implementation, expiry_time, ec);
    boost::asio::detail::throw_error(ec, 'expires_from_now');
    return s;
  }
    
    namespace boost {
namespace asio {
    }
    }
    
    template <typename Stream>
class buffered_write_stream;
    
    
    {
    {} // namespace posix_time
} // namespace boost
    
    #include <boost/asio/detail/config.hpp>
    
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
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
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
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Get an iterator for the beginning of the map.
  const_iterator begin() const
  {
    return values_.begin();
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace osquery {
namespace tables {
    }
    }
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
      /// Set of instantiated EventSubscriber subscriptions.
  std::map<std::string, EventSubscriberRef> event_subs_;
    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
     public:
  /**
   * @brief A getter for the status code property
   *
   * @return an integer representing the status code of the operation.
   */
  int getCode() const { return code_; }
    
    
    {    auto paths = platformGlob(kFakeDirectory + '/files_to_carve/*');
    for (const auto& p : paths) {
      carvePaths.insert(p);
    }
  };
    
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
    
    /**
 * @brief Decode a base64 encoded string.
 *
 * @param encoded The encode base64 string.
 * @return Decoded string.
 */
std::string base64Decode(const std::string& encoded);
    
    namespace xgboost {
    }
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    
    {    // loop over all rows and fill column entries
    // num_nonzeros[fid] = how many nonzeros have this feature accumulated so far?
    std::vector<size_t> num_nonzeros;
    num_nonzeros.resize(nfeature);
    std::fill(num_nonzeros.begin(), num_nonzeros.end(), 0);
    for (size_t rid = 0; rid < nrow; ++rid) {
      const size_t ibegin = gmat.row_ptr[rid];
      const size_t iend = gmat.row_ptr[rid + 1];
      size_t fid = 0;
      for (size_t i = ibegin; i < iend; ++i) {
        const uint32_t bin_id = gmat.index[i];
        while (bin_id >= gmat.cut->row_ptr[fid + 1]) {
          ++fid;
        }
        if (type_[fid] == kDenseColumn) {
          XGBOOST_TYPE_SWITCH(this->dtype, {
            const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
            const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
            DType* begin = reinterpret_cast<DType*>(&index_[block_offset]) + elem_offset;
            begin[rid] = static_cast<DType>(bin_id - index_base_[fid]);
          });
        } else {
          XGBOOST_TYPE_SWITCH(this->dtype, {
            const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
            const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
            DType* begin = reinterpret_cast<DType*>(&index_[block_offset]) + elem_offset;
            begin[num_nonzeros[fid]] = static_cast<DType>(bin_id - index_base_[fid]);
          });
          row_ind_[boundary_[fid].row_ind_begin + num_nonzeros[fid]] = rid;
          ++num_nonzeros[fid];
        }
      }
    }
  }
    
      xgboost::tree::SplitEntry se2;
  EXPECT_FALSE(se1.Update(se2));
  EXPECT_FALSE(se2.Update(-1, 100, 0, true));
  ASSERT_TRUE(se2.Update(1, 100, 0, true));
  ASSERT_TRUE(se1.Update(se2));
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        if (install_callbacks)
    {
        glfwSetMouseButtonCallback(window, ImGui_ImplGlfwGL2_MouseButtonCallback);
        glfwSetScrollCallback(window, ImGui_ImplGlfwGL2_ScrollCallback);
        glfwSetKeyCallback(window, ImGui_ImplGlfwGL2_KeyCallback);
        glfwSetCharCallback(window, ImGui_ImplGlfwGL2_CharCallback);
    }
    
    static uint32_t                 g_FrameIndex = 0;
static VkCommandPool            g_CommandPool[IMGUI_VK_QUEUED_FRAMES];
static VkCommandBuffer          g_CommandBuffer[IMGUI_VK_QUEUED_FRAMES];
static VkFence                  g_Fence[IMGUI_VK_QUEUED_FRAMES];
static VkSemaphore              g_PresentCompleteSemaphore[IMGUI_VK_QUEUED_FRAMES];
static VkSemaphore              g_RenderCompleteSemaphore[IMGUI_VK_QUEUED_FRAMES];
    
    // Vertex layout
#ifndef IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT
struct ImDrawVert
{
    ImVec2  pos;
    ImVec2  uv;
    ImU32   col;
};
#else
// You can override the vertex format layout by defining IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT in imconfig.h
// The code expect ImVec2 pos (8 bytes), ImVec2 uv (8 bytes), ImU32 col (4 bytes), but you can re-order them or add other fields as needed to simplify integration in your engine.
// The type has to be described within the macro (you can either declare the struct or use a typedef)
// NOTE: IMGUI DOESN'T CLEAR THE STRUCTURE AND DOESN'T CALL A CONSTRUCTOR SO ANY CUSTOM FIELD WILL BE UNINITIALIZED. IF YOU ADD EXTRA FIELDS (SUCH AS A 'Z' COORDINATES) YOU WILL NEED TO CLEAR THEM DURING RENDER OR TO IGNORE THEM. 
IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT;
#endif