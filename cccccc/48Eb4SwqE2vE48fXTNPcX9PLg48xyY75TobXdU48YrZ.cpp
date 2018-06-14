
        
        
    {  base::Base64Encode(stream_as_string, &base64_result);
  base64_result.insert(
      0, base::StringPrintf('data:%s;base64,', mime_type.c_str()));
  Respond(OneArgument(std::make_unique<base::Value>(base64_result)));
}
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    #include <string>
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    void MenuDelegate::ExecuteCommand(int command_id, int event_flags) {
  if (command_id < 0)
    return;
    }
    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
    
    {}  // namespace nwapi

    
      AppWindowRegistry::AppWindowList windows =
    registry->GetAppWindowsForApp(extension()->id());
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18>
internal::ValueArray18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6,
    T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18) {
  return internal::ValueArray18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18>(v1, v2, v3, v4, v5, v6, v7, v8, v9,
      v10, v11, v12, v13, v14, v15, v16, v17, v18);
}
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
    namespace internal {
    }
    
    // This macro is for implementing ASSERT_DEATH*, EXPECT_DEATH*,
// ASSERT_EXIT*, and EXPECT_EXIT*.
# define GTEST_DEATH_TEST_(statement, predicate, regex, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    const ::testing::internal::RE& gtest_regex = (regex); \
    ::testing::internal::DeathTest* gtest_dt; \
    if (!::testing::internal::DeathTest::Create(#statement, &gtest_regex, \
        __FILE__, __LINE__, &gtest_dt)) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
    } \
    if (gtest_dt != NULL) { \
      ::testing::internal::scoped_ptr< ::testing::internal::DeathTest> \
          gtest_dt_ptr(gtest_dt); \
      switch (gtest_dt->AssumeRole()) { \
        case ::testing::internal::DeathTest::OVERSEE_TEST: \
          if (!gtest_dt->Passed(predicate(gtest_dt->Wait()))) { \
            goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
          } \
          break; \
        case ::testing::internal::DeathTest::EXECUTE_TEST: { \
          ::testing::internal::DeathTest::ReturnSentinel \
              gtest_sentinel(gtest_dt); \
          GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, gtest_dt); \
          gtest_dt->Abort(::testing::internal::DeathTest::TEST_DID_NOT_DIE); \
          break; \
        } \
        default: \
          break; \
      } \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__): \
      fail(::testing::internal::DeathTest::LastMessage())
// The symbol 'fail' here expands to something into which a message
// can be streamed.
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
};
    
      static pthread_key_t CreateKey() {
    pthread_key_t key;
    // When a thread exits, DeleteThreadLocalValue() will be called on
    // the object managed for that thread.
    GTEST_CHECK_POSIX_SUCCESS_(
        pthread_key_create(&key, &DeleteThreadLocalValue));
    return key;
  }
    
    
    {  // Disables compiler warning 'assignment operator could not be generated.'
  void operator=(const PreCalculatedPrimeTable& rhs);
};
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    	virtual bool has_touchscreen_ui_hint() const;
    
        jmp_buf m_jmp_state;
    mem_block *m_pMem_blocks;
    int m_image_x_size;
    int m_image_y_size;
    jpeg_decoder_stream *m_pStream;
    int m_progressive_flag;
    uint8 m_huff_ac[JPGD_MAX_HUFF_TABLES];
    uint8* m_huff_num[JPGD_MAX_HUFF_TABLES];      // pointer to number of Huffman codes per bit size
    uint8* m_huff_val[JPGD_MAX_HUFF_TABLES];      // pointer to Huffman codes per bit size
    jpgd_quant_t* m_quant[JPGD_MAX_QUANT_TABLES]; // pointer to quantization tables
    int m_scan_type;                              // Gray, Yh1v1, Yh1v2, Yh2v1, Yh2v2 (CMYK111, CMYK4114 no longer supported)
    int m_comps_in_frame;                         // # of components in frame
    int m_comp_h_samp[JPGD_MAX_COMPONENTS];       // component's horizontal sampling factor
    int m_comp_v_samp[JPGD_MAX_COMPONENTS];       // component's vertical sampling factor
    int m_comp_quant[JPGD_MAX_COMPONENTS];        // component's quantization table selector
    int m_comp_ident[JPGD_MAX_COMPONENTS];        // component's ID
    int m_comp_h_blocks[JPGD_MAX_COMPONENTS];
    int m_comp_v_blocks[JPGD_MAX_COMPONENTS];
    int m_comps_in_scan;                          // # of components in scan
    int m_comp_list[JPGD_MAX_COMPS_IN_SCAN];      // components in this scan
    int m_comp_dc_tab[JPGD_MAX_COMPONENTS];       // component's DC Huffman coding table selector
    int m_comp_ac_tab[JPGD_MAX_COMPONENTS];       // component's AC Huffman coding table selector
    int m_spectral_start;                         // spectral selection start
    int m_spectral_end;                           // spectral selection end
    int m_successive_low;                         // successive approximation low
    int m_successive_high;                        // successive approximation high
    int m_max_mcu_x_size;                         // MCU's max. X size in pixels
    int m_max_mcu_y_size;                         // MCU's max. Y size in pixels
    int m_blocks_per_mcu;
    int m_max_blocks_per_row;
    int m_mcus_per_row, m_mcus_per_col;
    int m_mcu_org[JPGD_MAX_BLOCKS_PER_MCU];
    int m_total_lines_left;                       // total # lines left in image
    int m_mcu_lines_left;                         // total # lines left in this MCU
    int m_real_dest_bytes_per_scan_line;
    int m_dest_bytes_per_scan_line;               // rounded up
    int m_dest_bytes_per_pixel;                   // 4 (RGB) or 1 (Y)
    huff_tables* m_pHuff_tabs[JPGD_MAX_HUFF_TABLES];
    coeff_buf* m_dc_coeffs[JPGD_MAX_COMPONENTS];
    coeff_buf* m_ac_coeffs[JPGD_MAX_COMPONENTS];
    int m_eob_run;
    int m_block_y_mcu[JPGD_MAX_COMPONENTS];
    uint8* m_pIn_buf_ofs;
    int m_in_buf_left;
    int m_tem_flag;
    bool m_eof_flag;
    uint8 m_in_buf_pad_start[128];
    uint8 m_in_buf[JPGD_IN_BUF_SIZE + 128];
    uint8 m_in_buf_pad_end[128];
    int m_bits_left;
    uint m_bit_buf;
    int m_restart_interval;
    int m_restarts_left;
    int m_next_restart_num;
    int m_max_mcus_per_row;
    int m_max_blocks_per_mcu;
    int m_expanded_blocks_per_mcu;
    int m_expanded_blocks_per_row;
    int m_expanded_blocks_per_component;
    bool  m_freq_domain_chroma_upsample;
    int m_max_mcus_per_col;
    uint m_last_dc_val[JPGD_MAX_COMPONENTS];
    jpgd_block_t* m_pMCU_coefficients;
    int m_mcu_block_max_zag[JPGD_MAX_BLOCKS_PER_MCU];
    uint8* m_pSample_buf;
    int m_crr[256];
    int m_cbb[256];
    int m_crg[256];
    int m_cbg[256];
    uint8* m_pScan_line_0;
    uint8* m_pScan_line_1;
    jpgd_status m_error_code;
    bool m_ready_flag;
    int m_total_bytes_read;
    
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
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #undef MULT16_16_P15
static inline int MULT16_16_P15(int a, int b)
{
    int r;
    asm volatile ('mul %0, %1, %2' :'=r' (r): 'r' (a), 'r' (b));
    asm volatile ('SHRA_R.W %0, %1, %2' : '+r' (r):  '0' (r), 'i'(15));
    return r;
}
    
    #ifdef  __cplusplus
extern 'C'
{
#endif
    }
    
    // SectionStats - section to hold statistics for a featureSet
class SectionStats : public Section
{
private:
    // single pass measures
    size_t m_count; // number of elements
    double m_max;   // maximum value we have seen
    double m_min;   // minimum value we have seen
    double m_sum;   // sum of all numbers we have seen
    double m_sum2;  // sum of the squares of all numbers we have seen
    }
    
    void GranularGPUDataTransferer::WaitForSyncPointOnAssignStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetAssignStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
        int traceLevel = config(L'traceLevel', 0);
    if (config.Exists(L'createNetwork'))
    {
        createNetworkFn = GetCreateNetworkFn(config); // (we need a separate function needed due to template code)
        return true;
    }
    else if (config.Exists(L'SimpleNetworkBuilder'))
    {
        const ConfigRecordType& simpleNetworkBuilderConfig(config(L'SimpleNetworkBuilder'));
        auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(simpleNetworkBuilderConfig); // parses the configuration and stores it in the SimpleNetworkBuilder object
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription()); // this operates based on the configuration saved above
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy NDL
    else if (config.Exists(L'NDLNetworkBuilder'))
    {
        const ConfigRecordType& ndlNetworkBuilderConfig(config(L'NDLNetworkBuilder'));
        shared_ptr<NDLBuilder<ElemType>> netBuilder = make_shared<NDLBuilder<ElemType>>(ndlNetworkBuilderConfig);
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription());
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy test mode for BrainScript. Will go away once we fully integrate with BS.
    else if (config.Exists(L'BrainScriptNetworkBuilder') || config.Exists(L'ExperimentalNetworkBuilder' /*legacy name*/))
    {
        // We interface with outer old CNTK config by taking the inner part, which we get as a string, as BrainScript.
        // We prepend a few standard definitions, and also definition of deviceId and precision, which all objects will pull out again when they are being constructed.
        // BUGBUG: We are not getting TextLocations right in this way! Do we need to inject location markers into the source? Moot once we fully switch to BS
        wstring sourceOfNetwork = config.Exists(L'BrainScriptNetworkBuilder') ? config(L'BrainScriptNetworkBuilder') : config(L'ExperimentalNetworkBuilder');
        if (sourceOfNetwork.find_first_of(L'([{') != 0)
            InvalidArgument('BrainScript network description must be either a BS expression in ( ) or a config record in { }');
    }
    }
    
    // ===========================================================================
// DoConvertFromDbn() - implements CNTK 'convertdbn' command
// ===========================================================================
    
    namespace Microsoft { namespace MSR { namespace BS {
    }
    }
    }
    
        // register a new source file and return a TextPosition that points to its start
    static TextLocation NewSourceFile(SourceFile&& sourceFile);
    
    template <class _T, int _N>
class hardcoded_array
{
    _T data[_N];
    inline void check_index(size_t i) const
    {
        i;
        assert(i < _N);
    }
    inline void check_size(size_t n) const
    {
        n;
        assert(n == _N);
    }
    }
    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
      db_wrapper->columnFamilies_[cf_name] = cf;
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
    //****************************
// Deprecated function names
//****************************
// The following translations are provided to ease code transition
// You are encouraged to no longer this function names
#define XXH32_feed   XXH32_update
#define XXH32_result XXH32_digest
#define XXH32_getIntermediateResult XXH32_intermediateDigest
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      // 4. create db_pool if not exist
  ret = _rados.pool_create(_db_pool_name.c_str());
  if (ret < 0 && ret != -EEXIST && ret !=  -EPERM) {
    std::cerr << 'couldn't create pool! error ' << ret << std::endl;
    goto out;
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
    
      virtual ~AbstractAuthResolver();
    
      BtMessageDispatcher* getBtMessageDispatcher() const { return dispatcher_; }
    
      virtual void enableMmap() CXX11_OVERRIDE;
    
    #endif // D_ABSTRACT_OPTION_HANDLER_H

    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);
    
    AnnounceTier::~AnnounceTier() = default;
    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
    #endif // D_ASYNC_NAME_RESOLVER_MAN_H

    
    
    {    return 0;
}

    
    /* Driver program to test above functions */
int main()
{
    solveKT();
    return 0;
}
