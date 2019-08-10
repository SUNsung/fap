
        
          base::WeakPtrFactory<BrowserWindow> weak_factory_;
    
    namespace net {
class URLRequestContextGetter;
}
    
    #if defined(OS_WIN)
#include 'third_party/webrtc/modules/desktop_capture/win/dxgi_duplicator_controller.h'
#include 'third_party/webrtc/modules/desktop_capture/win/screen_capturer_win_directx.h'
#include 'ui/display/win/display_info.h'
#endif  // defined(OS_WIN)
    
    #endif  // SHELL_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_

    
    class Net : public mate::EventEmitter<Net> {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    void Notification::Close() {
  if (notification_) {
    notification_->Dismiss();
    notification_.reset();
  }
}
    
      void Show();
  void Close();
    
    /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    ROTATE_ARGS
	movdqa	XTMP3, XTMP2	; XTMP3 = W[-2] {BBAA}
    mov	y0, e		; y0 = e
    mov	y1, a		; y1 = a
    ror	y0, (25-11)	; y0 = e >> (25-11)
	movdqa	XTMP4, XTMP2	; XTMP4 = W[-2] {BBAA}
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    ror	y1, (22-13)	; y1 = a >> (22-13)
    mov	y2, f		; y2 = f
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
	psrlq	XTMP2, 17	; XTMP2 = W[-2] ror 17 {xBxA}
    xor	y2, g		; y2 = f^g
	psrlq	XTMP3, 19	; XTMP3 = W[-2] ror 19 {xBxA}
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
	psrld	XTMP4, 10	; XTMP4 = W[-2] >> 10 {BBAA}
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
	pxor	XTMP2, XTMP3
    add	y2, y0		; y2 = S1 + CH
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
    add	y2, [rsp + _XFER + 2*4]	; y2 = k + w + S1 + CH
	pxor	XTMP4, XTMP2	; XTMP4 = s1 {xBxA}
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pshufb	XTMP4, SHUF_00BA	; XTMP4 = s1 {00BA}
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	paddd	XTMP0, XTMP4	; XTMP0 = {..., ..., W[1], W[0]}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
	;; compute high s1
	pshufd	XTMP2, XTMP0, 01010000b	; XTMP2 = W[-2] {DDCC}
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    static std::string Shorten(const std::string& s, const std::string& l) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortestSeparator(&result, l);
  return result;
}
    
    
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
      void PartialCompactTestReopenWithFault(ResetMethod reset_method,
                                         int num_pre_sync,
                                         int num_post_sync) {
    env_->SetFilesystemActive(false);
    CloseDB();
    ResetDBState(reset_method);
    ASSERT_OK(OpenDB());
    ASSERT_OK(Verify(0, num_pre_sync, FaultInjectionTest::VAL_EXPECT_NO_ERROR));
    ASSERT_OK(Verify(num_pre_sync, num_post_sync, FaultInjectionTest::VAL_EXPECT_ERROR));
  }
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    static void async_connect_unlock_and_cleanup(async_connect* ac,
                                             grpc_winsocket* socket) {
  int done = (--ac->refs == 0);
  gpr_mu_unlock(&ac->mu);
  if (done) {
    grpc_channel_args_destroy(ac->channel_args);
    gpr_mu_destroy(&ac->mu);
    gpr_free(ac->addr_name);
    gpr_free(ac);
  }
  if (socket != NULL) grpc_winsocket_destroy(socket);
}
    
    GPR_GLOBAL_CONFIG_DEFINE_BOOL(bool_var, false, '');
GPR_GLOBAL_CONFIG_DEFINE_INT32(int32_var, 0, '');
GPR_GLOBAL_CONFIG_DEFINE_STRING(string_var, '', '');
    
    static inline std::shared_ptr<::grpc::Channel>
CreateCustomChannelWithInterceptors(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds,
    const ChannelArguments& args,
    std::vector<
        std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
        interceptor_creators) {
  return ::grpc_impl::experimental::CreateCustomChannelWithInterceptors(
      target, creds, args, std::move(interceptor_creators));
}
    
    // Possibly using buf to store characters, returns a pointer to a strerror-style error string.  This
// has the same contract as the GNU (char *)-returning strerror_r.  The return value is a pointer to
// a nul-terminated string, either equal to buf or pointing at a statically allocated string.
MUST_USE const char *errno_string_maybe_using_buffer(int errsv, char *buf, size_t buflen);
    
    #include 'btree/node.hpp'
#include 'btree/parallel_traversal.hpp'
#include 'btree/secondary_operations.hpp'
#include 'buffer_cache/types.hpp'
#include 'concurrency/auto_drainer.hpp'
#include 'concurrency/queue/disk_backed_queue_wrapper.hpp'
#include 'concurrency/new_mutex.hpp'
#include 'concurrency/new_semaphore.hpp'
#include 'concurrency/rwlock.hpp'
#include 'containers/map_sentries.hpp'
#include 'containers/optional.hpp'
#include 'containers/scoped.hpp'
#include 'perfmon/perfmon.hpp'
#include 'paths.hpp'
#include 'protocol_api.hpp'
#include 'rdb_protocol/changefeed.hpp'
#include 'rdb_protocol/protocol.hpp'
#include 'rdb_protocol/store_metainfo.hpp'
#include 'rpc/mailbox/typed.hpp'
#include 'store_view.hpp'
#include 'utils.hpp'
    
      // Gets the line in the source file where the test part took place,
  // or -1 if it's unknown.
  int line_number() const { return line_number_; }
    
      // Name of the test case.
  std::string name_;
  // Name of the parameter type, or NULL if this is not a typed or a
  // type-parameterized test.
  const internal::scoped_ptr<const ::std::string> type_param_;
  // The vector of TestInfos in their original order.  It owns the
  // elements in the vector.
  std::vector<TestInfo*> test_info_list_;
  // Provides a level of indirection for the test list to allow easy
  // shuffling and restoring the test order.  The i-th element in this
  // vector is the index of the i-th test in the shuffled test list.
  std::vector<int> test_indices_;
  // Pointer to the function that sets up the test case.
  Test::SetUpTestCaseFunc set_up_tc_;
  // Pointer to the function that tears down the test case.
  Test::TearDownTestCaseFunc tear_down_tc_;
  // True iff any test in this test case should run.
  bool should_run_;
  // Elapsed time, in milliseconds.
  TimeInMillis elapsed_time_;
  // Holds test properties recorded during execution of SetUpTestCase and
  // TearDownTestCase.
  TestResult ad_hoc_test_result_;
    
    
    { private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(ScopedTrace);
} GTEST_ATTRIBUTE_UNUSED_;  // A ScopedTrace object does its job in its
                            // c'tor and d'tor.  Therefore it doesn't
                            // need to be used otherwise.
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46>
struct Types46 {
  typedef T1 Head;
  typedef Types45<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44, T45, T46> Tail;
};