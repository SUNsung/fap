
        
        #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONDITIONAL_THUNK_H_

    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONVOLUTION_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONVOLUTION_THUNK_H_
    
    Status HostToDeviceCopyThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase destination_data =
      params.buffer_allocations->GetDeviceAddress(destination_buffer_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemcpy(&destination_data, source_address_, mem_size_);
  return Status::OK();
}
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    // Thunk that performs a NCCL-based All-Reduce among CUDA GPU-based replicas.
class NcclAllReduceThunk : public Thunk {
 public:
  // Returns whether NCCL operations appear possible to perform; e.g. if we
  // haven't done a build with the CUDA compiler enabled, we can't compile the
  // NCCL header, and thus this will be false.
  //
  // When this is false, the ExecuteOnStream() call will simply return a status
  // error.
  static bool NcclIsEnabled();
    }
    
    #include 'tensorflow/compiler/xla/service/gpu/outfeed_thunk.h'
#include 'tensorflow/compiler/xla/literal.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/outfeed_manager.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    #include <vector>
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_TRIANGULAR_SOLVE_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_TRIANGULAR_SOLVE_THUNK_H_
    
    template <>
struct Converter<base::ListValue> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     base::ListValue* out);
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const base::ListValue& val);
};
    
    #ifndef NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_
#define NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_
    
    bool ProcessLaunchNotification(
    const ProcessSingleton::NotificationCallback& notification_callback,
    UINT message,
    WPARAM wparam,
    LPARAM lparam,
    LRESULT* result) {
  if (message != WM_COPYDATA)
    return false;
    }
    
    #endif  // SHELL_APP_COMMAND_LINE_ARGS_H_

    
      ~LookupKey();
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
    
    
    {	bool m_isOpen;
	bool m_eos;
};
    
    
    {  MasteringMetadata* mastering_metadata;
};
    
    #define WRAPLOW(x) ((((int32_t)check_range(x)) << 16) >> 16)
#if CONFIG_VP9_HIGHBITDEPTH
#define HIGHBD_WRAPLOW(x, bd) \
    ((((int32_t)highbd_check_range((x), bd)) << (24 - bd)) >> (24 - bd))
#endif  // CONFIG_VP9_HIGHBITDEPTH
    
    #if defined(MBEDTLS_KEY_EXCHANGE_DHE_RSA_ENABLED) &&                   \
    ( !defined(MBEDTLS_DHM_C) || !defined(MBEDTLS_RSA_C) ||           \
      !defined(MBEDTLS_X509_CRT_PARSE_C) || !defined(MBEDTLS_PKCS1_V15) )
#error 'MBEDTLS_KEY_EXCHANGE_DHE_RSA_ENABLED defined, but not all prerequisites'
#endif
    
    /**
 * Free the contents of the given private key context. Note that the structure
 * itself is not freed.
 *
 * \param priv_key      Private key structure to cleanup
 */
void mbedtls_pkcs11_priv_key_free( mbedtls_pkcs11_context *priv_key );
    
    
/**
 * \brief          Compute RSA prime moduli P, Q from public modulus N=PQ
 *                 and a pair of private and public key.
 *
 * \note           This is a 'static' helper function not operating on
 *                 an RSA context. Alternative implementations need not
 *                 overwrite it.
 *
 * \param N        RSA modulus N = PQ, with P, Q to be found
 * \param E        RSA public exponent
 * \param D        RSA private exponent
 * \param P        Pointer to MPI holding first prime factor of N on success
 * \param Q        Pointer to MPI holding second prime factor of N on success
 *
 * \return
 *                 - 0 if successful. In this case, P and Q constitute a
 *                   factorization of N.
 *                 - A non-zero error code otherwise.
 *
 * \note           It is neither checked that P, Q are prime nor that
 *                 D, E are modular inverses wrt. P-1 and Q-1. For that,
 *                 use the helper function \c mbedtls_rsa_validate_params.
 *
 */
int mbedtls_rsa_deduce_primes( mbedtls_mpi const *N, mbedtls_mpi const *E,
                               mbedtls_mpi const *D,
                               mbedtls_mpi *P, mbedtls_mpi *Q );
    
    // INC(a) is the rational equivalent of a++
// Check to see if we can avoid doing this the hard way.
#define INC(a)                                                                                                                                                 \
    if ((a)->mant[0] < BASEX - 1)                                                                                                                              \
    {                                                                                                                                                          \
        (a)->mant[0]++;                                                                                                                                        \
    }                                                                                                                                                          \
    else                                                                                                                                                       \
    {                                                                                                                                                          \
        addnum(&(a), num_one, BASEX);                                                                                                                          \
    }
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
      template<typename T>
  _OutputStream &operator<< (const std::vector<T> &v) {
    m_out << '[';
    for (unsigned int i = 0; i < v.size(); i++) {
      if (i > 0) m_out << ',';
      *this << v[i];
    }
    m_out << ']';
    return *this;
  }
    
    #endif // incl_HPHP_PARSER_PARSER_H_

    
    
    {  static void Init();
  static Verb Translate(const std::string &verb, int xactionCount);
  static const char *Translate(Verb verb);
};
    
      /* Get <Envelope> element */
  env = nullptr;
  trav = response->children;
  while (trav != nullptr) {
    if (trav->type == XML_ELEMENT_NODE) {
      if (!env && node_is_equal_ex(trav,'Envelope', SOAP_1_1_ENV_NAMESPACE)) {
        env = trav;
        envelope_ns = SOAP_1_1_ENV_NAMESPACE;
        soap_version = SOAP_1_1;
      } else if (!env &&
                 node_is_equal_ex(trav, 'Envelope', SOAP_1_2_ENV_NAMESPACE)) {
        env = trav;
        envelope_ns = SOAP_1_2_ENV_NAMESPACE;
        soap_version = SOAP_1_2;
      } else {
        add_soap_fault(obj, 'VersionMismatch', 'Wrong Version');
        xmlFreeDoc(response);
        return false;
      }
    }
    trav = trav->next;
  }
  if (env == nullptr) {
    add_soap_fault(obj, 'Client',
                   'looks like we got XML without \'Envelope\' element');
    xmlFreeDoc(response);
    return false;
  }
    
    namespace HPHP { namespace Native {
//////////////////////////////////////////////////////////////////////////////
// Class NativePropHandler
    }
    }
    
    
    {        bool found = false;
        for (const char *t = p; *t; t++) {
          if (*t == ';') {
            int l = t - p;
            if (l > 0) {
              char sbuf[16] = {0};
              char *buf;
              if (l > 10) {
                buf = (char* )malloc(l + 1);
              } else {
                buf = sbuf;
              }
              memcpy(buf, p, l);
              buf[l] = '\0';
              if (decode_entity(buf, &l, true, true,
                cs_utf_8, true)) {
                found = true;
                *q++ = '&';
                for(const char *s = p; s <= t; s++) {
                  *q++ = *s;
                }
                p = t;
              }
              if (buf != sbuf) {
                free(buf);
              }
            }
            break;
          }
        }
        if (!found) {
          p--;
          *q++ = '&'; *q++ = 'a'; *q++ = 'm'; *q++ = 'p'; *q++ = ';';
        }
      } else {
        *q++ = '&'; *q++ = 'a'; *q++ = 'm'; *q++ = 'p'; *q++ = ';';
      }
      break;
    case static_cast<unsigned char>('\xc2'):
      if (htmlEnt && utf8 && p != end && *(p+1) == '\xa0') {
        *q++ = '&'; *q++ = 'n'; *q++ = 'b'; *q++ = 's'; *q++ = 'p'; *q++ = ';';
        p++;
        break;
      }
    
    // mmap_2m() maps a 2M hugetlb page from the specified NUMA node.  It returns
// nullptr upon failure. If node is set to -1, no NUMA policy is enforced.
void* mmap_2m(int node);
    
    
    {  std::chrono::milliseconds dura(UpdateFreq);
  while (!m_stopped) {
    HealthLevel newStatus = evaluate();
    notifyObservers(newStatus);
    m_condition.wait_for(guard, dura, [this] { return m_stopped; });
  }
  Logger::Info('Host health monitor exits.');
}
    
    /**
 * The server side push handler is just here to catch errors and
 * egress state changes.
 */
struct PushTxnHandler : proxygen::HTTPPushTransactionHandler {
  PushTxnHandler(uint64_t pushId,
                 const std::shared_ptr<ProxygenTransport>& transport,
                 const char *host, const char *path,
                 uint8_t priority, const Array &promiseHeaders,
                 const Array &responseHeaders,
                 bool isSecure)
      : m_pushId(pushId),
        m_transport(transport) {
    createPushPromise(host, path, priority, promiseHeaders, isSecure);
    m_response.setStatusCode(200);
    addHeadersToMessage(m_response, responseHeaders);
  }
    }
    
    void cgSetOpCellVerify(IRLS& env, const IRInstruction* inst) {
  auto const op = inst->extra<SetOpData>()->op;
  auto& v = vmain(env);
    }
    
    APCGCManager& APCGCManager::getInstance() {
  static APCGCManager mm;
  return mm;
}
//////////////////////////////////////////////////////////////////////
// All gc-apc related traverse functions here
    
    #include <unistd.h>
    
    /*
 * Unique identifier for an hhvm binary, determined at build-time.  Normally
 * this is a formatted version control hash, but it can fall back to system time
 * in some cases.
 */
folly::StringPiece compilerId();
    
    String HHVM_FUNCTION(gettype, const Variant& v);
String HHVM_FUNCTION(get_resource_type, const Resource& handle);
    
      void BuildADCTrajectory(const double time_resolution);
    
      for (const KeyValueBool &pair : proto.bool_params()) {
    bool_param_map_.emplace(pair.name(), pair.value());
  }
    
    TEST(CyberNodeTest, create_writer) {
  EXPECT_TRUE(apollo::cyber::OK());
  auto msgChat = std::make_shared<apollo::cyber::proto::Chatter>();
  apollo::cyber::PyNode node('talker');
  apollo::cyber::PyWriter *pw =
      node.create_writer('channel/chatter', msgChat->GetTypeName(), 10);
  EXPECT_NE(pw, nullptr);
    }
    
      apollo::cyber::WaitForShutdown();
  delete pr;
    
      // 4. If the end of current passage region not appeared, no rerouting
  const auto& route_end_waypoint = segments.RouteEndWaypoint();
  if (!route_end_waypoint.lane) {
    return true;
  }
  auto point = route_end_waypoint.lane->GetSmoothPoint(route_end_waypoint.s);
  const auto& reference_line = reference_line_info_->reference_line();
  common::SLPoint sl_point;
  if (!reference_line.XYToSL({point.x(), point.y()}, &sl_point)) {
    AERROR << 'Failed to project point: ' << point.ShortDebugString();
    return false;
  }
  if (!reference_line.IsOnLane(sl_point)) {
    return true;
  }
  // 5. If the end of current passage region is further than kPrepareRoutingTime
  // * speed, no rerouting
  double adc_s = reference_line_info_->AdcSlBoundary().end_s();
  const auto vehicle_state = common::VehicleStateProvider::Instance();
  double speed = vehicle_state->linear_velocity();
  const double prepare_rerouting_time =
      config_.rerouting().prepare_rerouting_time();
  const double prepare_distance = speed * prepare_rerouting_time;
  if (sl_point.s() > adc_s + prepare_distance) {
    ADEBUG << 'No need rerouting now because still can drive for time: '
           << prepare_rerouting_time << ' seconds';
    return true;
  }
  // 6. Check if we have done rerouting before
  auto* rerouting = PlanningContext::Instance()
                        ->mutable_planning_status()
                        ->mutable_rerouting();
  if (rerouting == nullptr) {
    AERROR << 'rerouting is nullptr.';
    return false;
  }
  double current_time = Clock::NowInSeconds();
  if (rerouting->has_last_rerouting_time() &&
      (current_time - rerouting->last_rerouting_time() <
       config_.rerouting().cooldown_time())) {
    ADEBUG << 'Skip rerouting and wait for previous rerouting result';
    return true;
  }
  if (!frame_->Rerouting()) {
    AERROR << 'Failed to send rerouting request';
    return false;
  }
    
    
    {
    {
    {
    {}  // namespace traffic_light
}  // namespace scenario
}  // namespace planning
}  // namespace apollo

    
    #define ACHECK(cond) CHECK(cond) << LEFT_BRACKET << MODULE_NAME << RIGHT_BRACKET