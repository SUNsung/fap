
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_KERNELS_CUSTOM_OPS_REGISTER_H_
#define TENSORFLOW_LITE_KERNELS_CUSTOM_OPS_REGISTER_H_
    
    bool TfLiteDriver::Expectation::TypedCheckString(bool verbose,
                                                 const TfLiteTensor& tensor) {
  if (tensor.data.raw == nullptr) {
    if (verbose) {
      std::cerr << '  got empty string' << std::endl;
    }
    return false;
  }
  int expected_num_strings = GetStringCount(data_.raw);
  int returned_num_strings = GetStringCount(tensor.data.raw);
  if (expected_num_strings != returned_num_strings) {
    if (verbose) {
      std::cerr << '  string count differ: got ' << returned_num_strings
                << ', but expected ' << expected_num_strings << std::endl;
    }
    return false;
  }
  for (int i = 0; i < returned_num_strings; ++i) {
    auto expected_ref = GetString(data_.raw, i);
    auto returned_ref = GetString(tensor.data.raw, i);
    if (expected_ref.len != returned_ref.len) {
      if (verbose) {
        std::cerr << '  index ' << i << ': got string of size '
                  << returned_ref.len << ', but expected size '
                  << expected_ref.len << std::endl;
      }
      return false;
    }
    if (strncmp(expected_ref.str, returned_ref.str, returned_ref.len) != 0) {
      if (verbose) {
        std::cerr << '  index ' << i << ': strings are different' << std::endl;
      }
      return false;
    }
  }
    }
    
    template <typename Scalar>
struct EyeFunctor<GPUDevice, Scalar> {
  void operator()(const GPUDevice& device,
                  typename TTypes<Scalar, 3>::Tensor matrix_batch) {
    const int batch_size = matrix_batch.dimension(0);
    const int m = matrix_batch.dimension(1);
    const int n = matrix_batch.dimension(2);
    GpuLaunchConfig config = GetGpuLaunchConfig(batch_size * m * n, device);
    TF_CHECK_OK(GpuLaunchKernel(EyeKernel<Scalar>, config.block_count,
                                config.thread_per_block, 0, device.stream(),
                                config.virtual_thread_count, batch_size, m, n,
                                matrix_batch.data()));
  }
};
    
    
    {  tensorflow::Stat<int64_t> latency_stats_;
};
    
    #define REGISTER_MATRIX_DIAG(type)                                           \
  REGISTER_KERNEL_BUILDER(                                                   \
      Name('MatrixDiag').Device(DEVICE_CPU).TypeConstraint<type>('T'),       \
      MatrixDiagOp<CPUDevice, type>);                                        \
  REGISTER_KERNEL_BUILDER(                                                   \
      Name('MatrixDiagV2').Device(DEVICE_CPU).TypeConstraint<type>('T'),     \
      MatrixDiagOp<CPUDevice, type>);                                        \
  REGISTER_KERNEL_BUILDER(                                                   \
      Name('MatrixDiagPart').Device(DEVICE_CPU).TypeConstraint<type>('T'),   \
      MatrixDiagPartOp<CPUDevice, type>);                                    \
  REGISTER_KERNEL_BUILDER(                                                   \
      Name('MatrixDiagPartV2').Device(DEVICE_CPU).TypeConstraint<type>('T'), \
      MatrixDiagPartOp<CPUDevice, type>);
TF_CALL_POD_TYPES(REGISTER_MATRIX_DIAG);
#undef REGISTER_MATRIX_DIAG
    
      // Calculate the total size in bytes of the all
  // the outputs of specified TensorFlow op.
  int64 CalculateOutputSize(const OpInfo& op_info,
                            bool* found_unknown_shapes) const;
    
    
    {
    {        const auto u = dist(&gen);
        remaining_samples -= gen.kResultElementCount;
        UNROLL for (int i = 0; i < kDistSize; i++) {
          bool accept = u[i] <= Eigen::numext::exp(g[i]);
          if (accept) {
            // Accept the sample z.
            data[offset] = z[i] * stddev + mean;
            // Break out of the nested loop by updating numIterations.
            numIterations = kMaxIterations;
            break;
          } else if (numIterations + 1 >= kMaxIterations) {
            data[offset] = quietNaN;
            numIterations = kMaxIterations;
            break;
          } else {
            numIterations++;
          }
        }
      }
    } else {
      // Sample from an exponential distribution with alpha maximizing
      // acceptance probability, offset by normMin from the origin.
      // Accept only if less than normMax.
      const T alpha =
          (normMin + Eigen::numext::sqrt((normMin * normMin) + T(4))) / T(2);
      int numIterations = 0;
      while (numIterations < kMaxIterations) {
        auto rand = dist(&gen);
        remaining_samples -= gen.kResultElementCount;
        UNROLL for (int i = 0; i < kDistSize; i += 2) {
          const T z = -Eigen::numext::log(rand[i]) / alpha + normMin;
          const T x = normMin < alpha ? alpha - z : normMin - alpha;
          const T g = Eigen::numext::exp(-x * x / two);
          const T u = rand[i + 1];
          bool accept = (u <= g && z < normMax);
          if (accept) {
            data[offset] = z * stddev + mean;
            // Break out of the nested loop by updating numIterations.
            numIterations = kMaxIterations;
            break;
          } else if (numIterations + 1 >= kMaxIterations) {
            data[offset] = quietNaN;
            numIterations = kMaxIterations;
            break;
          } else {
            numIterations++;
          }
        }
      }
    }
    
    #endif  // NATIVE_MATE_NATIVE_MATE_FUNCTION_TEMPLATE_H_

    
      v8::Isolate* isolate() const { return isolate_; }
    
    template <typename T>
class Wrappable : public WrappableBase {
 public:
  Wrappable() {}
    }
    
    #include 'shell/browser/net/url_request_fetch_job.h'
    
    content::WebContents* InspectableWebContentsImpl::GetWebContents() const {
  return web_contents_.get();
}
    
    #include 'base/bind.h'
#include 'base/debug/leak_annotations.h'
#include 'base/logging.h'
#include 'content/public/browser/browser_thread.h'
#include 'shell/browser/ui/views/global_menu_bar_x11.h'
    
    /* Error handling
 *
 * There are several ways to report errors in RethinkDB:
 *  fail_due_to_user_error(msg, ...)    fail and report line number/stack trace. Should only be used when the user
 *                                      is at fault (e.g. provided wrong database file name) and it is reasonable to
 *                                      fail instead of handling the problem more gracefully.
 *
 *  The following macros are used only for the cases of programmer error checking. For the time being they are also used
 *  for system error checking (especially the *_err variants).
 *
 *  crash(msg, ...)                 always fails and reports line number and such. Never returns.
 *  crash_or_trap(msg, ...)         same as above, but traps into debugger if it is present instead of terminating.
 *                                  That means that it possibly can return, and one can continue stepping through the code in the debugger.
 *                                  All off the rassert/guarantee functions use crash_or_trap.
 *  rassert(cond)                   makes sure cond is true and is a no-op in release mode
 *  rassert(cond, msg, ...)         ditto, with additional message and possibly some arguments used for formatting
 *  rassert_err(cond)               same as rassert(cond), but also print errno error description
 *  rassert_err(cond, msg, ...)     same as rassert(cond, msg, ...), but also print errno error description
 *  guarantee(cond)                 same as rassert(cond), but the check is still done in release mode. Do not use for expensive checks!
 *  guarantee(cond, msg, ...)       same as rassert(cond, msg, ...), but the check is still done in release mode. Do not use for expensive checks!
 *  guarantee_err(cond)             same as guarantee(cond), but also print errno error description
 *  guarantee_err(cond, msg, ...)   same as guarantee(cond, msg, ...), but also print errno error description
 *  guarantee_xerr(cond, err, msg, ...) same as guarantee_err(cond, msg, ...), but also allows to specify errno as err argument
 *                                  (useful for async io functions, which return negated errno)
 *
 * The names rassert* are used instead of assert* because /usr/include/assert.h undefines assert macro and redefines it with its own version
 * every single time it gets included.
 */
    
    
    {            changefeed_stamp_response_t r = do_stamp(
                *geo_read.stamp,
                geo_read.region,
                read_left);
            if (r.stamp_infos) {
                res->stamp_response.set(r);
            } else {
                res->result = ql::exc_t(
                    ql::base_exc_t::OP_FAILED,
                    'Feed aborted before initial values were read.',
                    ql::backtrace_id_t::empty());
                return;
            }
        }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_SPI_H_

    
      virtual ParamIteratorInterface<ParamType>* Begin() const {
    return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
        g3_.begin(), g4_, g4_.begin());
  }
  virtual ParamIteratorInterface<ParamType>* End() const {
    return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
        g4_, g4_.end());
  }
    
    template <GTEST_10_TYPENAMES_(T)>
struct TupleElement<true, 7, GTEST_10_TUPLE_(T) > {
  typedef T7 type;
};
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47, GTEST_TEMPLATE_ T48>
struct Templates48 {
  typedef TemplateSel<T1> Head;
  typedef Templates47<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47, T48> Tail;
};
    
    // Note: a second call to this will add in front the result of the first call.
// An example is calling this on a copy of ChannelArguments which already has a
// prefix. The user can build up a prefix string by calling this multiple times,
// each with more significant identifier.
void ChannelArguments::SetUserAgentPrefix(
    const grpc::string& user_agent_prefix) {
  if (user_agent_prefix.empty()) {
    return;
  }
  bool replaced = false;
  auto strings_it = strings_.begin();
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    const grpc_arg& arg = *it;
    ++strings_it;
    if (arg.type == GRPC_ARG_STRING) {
      if (grpc::string(arg.key) == GRPC_ARG_PRIMARY_USER_AGENT_STRING) {
        GPR_ASSERT(arg.value.string == strings_it->c_str());
        *(strings_it) = user_agent_prefix + ' ' + arg.value.string;
        it->value.string = const_cast<char*>(strings_it->c_str());
        replaced = true;
        break;
      }
      ++strings_it;
    }
  }
  if (!replaced) {
    SetString(GRPC_ARG_PRIMARY_USER_AGENT_STRING, user_agent_prefix);
  }
}
    
    
    {
    {
    {}  // namespace
}  // namespace testing
}  // namespace grpc
    
      // shutdown should trigger cancellation causing everything to shutdown
  auto deadline =
      std::chrono::system_clock::now() + std::chrono::microseconds(100);
  server_->Shutdown(deadline);
  EXPECT_GE(std::chrono::system_clock::now(), deadline);
    
    void grpc_socket_become_ready(grpc_winsocket* socket,
                              grpc_winsocket_callback_info* info) {
  GPR_ASSERT(!info->has_pending_iocp);
  gpr_mu_lock(&socket->state_mu);
  if (info->closure) {
    GRPC_CLOSURE_SCHED(info->closure, GRPC_ERROR_NONE);
    info->closure = NULL;
  } else {
    info->has_pending_iocp = 1;
  }
  bool should_destroy = check_destroyable(socket);
  gpr_mu_unlock(&socket->state_mu);
  if (should_destroy) destroy(socket);
}
    
      if (error == GRPC_ERROR_NONE) {
    if (socket != NULL) {
      DWORD transfered_bytes = 0;
      DWORD flags;
      BOOL wsa_success =
          WSAGetOverlappedResult(socket->socket, &socket->write_info.overlapped,
                                 &transfered_bytes, FALSE, &flags);
      GPR_ASSERT(transfered_bytes == 0);
      if (!wsa_success) {
        error = GRPC_WSA_ERROR(WSAGetLastError(), 'ConnectEx');
        closesocket(socket->socket);
      } else {
        *ep = grpc_tcp_create(socket, ac->channel_args, ac->addr_name);
        socket = NULL;
      }
    } else {
      error = GRPC_ERROR_CREATE_FROM_STATIC_STRING('socket is null');
    }
  }
    
    #define GPR_GLOBAL_CONFIG_DEFINE_INT32(name, default_value, help)         \
  static char g_env_str_##name[] = #name;                                 \
  static ::grpc_core::GlobalConfigEnvInt32 g_env_##name(g_env_str_##name, \
                                                        default_value);   \
  int32_t gpr_global_config_get_##name() { return g_env_##name.Get(); }   \
  void gpr_global_config_set_##name(int32_t value) { g_env_##name.Set(value); }
    
        class Rational
    {
    public:
        Rational() noexcept;
        Rational(Number const& n) noexcept;
        Rational(Number const& p, Number const& q) noexcept;
        Rational(int32_t i);
        Rational(uint32_t ui);
        Rational(uint64_t ui);
    }
    
    /// <summary>
/// Invoked when Navigation to a certain page fails
/// </summary>
/// <param name='sender'>The Frame which failed navigation</param>
/// <param name='e'>Details about the navigation failure</param>
void App::OnNavigationFailed(Platform::Object ^ sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^ e)
{
    throw ref new FailureException('Failed to load Page ' + e->SourcePageType.Name);
}

    
            if (ullOperand <= UINT32_MAX)
        {
            *pulResult = (uint32_t)ullOperand;
            hr = S_OK;
        }
    
                bool TryParseWebResponses(
                _In_ Platform::String ^ staticDataJson,
                _In_ Platform::String ^ allRatiosJson,
                _Inout_ std::vector<UCM::CurrencyStaticData>& staticData,
                _Inout_ CurrencyRatioMap& allRatiosData);
            bool TryParseStaticData(_In_ Platform::String ^ rawJson, _Inout_ std::vector<UCM::CurrencyStaticData>& staticData);
            bool TryParseAllRatiosData(_In_ Platform::String ^ rawJson, _Inout_ CurrencyRatioMap& allRatiosData);
            concurrency::task<void> FinalizeUnits(_In_ const std::vector<UCM::CurrencyStaticData>& staticData, _In_ const CurrencyRatioMap& ratioMap);
            void GuaranteeSelectedUnits();
    
    /* StringName */
#define GLU_VERSION                        100800
#define GLU_EXTENSIONS                     100801
    
    #if OPI_SUPPORT
  //----- OPI functions
  virtual void opiBegin(GfxState *state, Dict *opiDict);
  virtual void opiEnd(GfxState *state, Dict *opiDict);
#endif
    
      // thumb
  pageDict->lookupNF('Thumb', &thumb);
  if (!(thumb.isStream() || thumb.isNull() || thumb.isRef())) {
      error(-1, 'Page thumb object (page %d) is wrong type (%s)',
            num, thumb.getTypeName());
      thumb.initNull(); 
  }
    
      // get direction
  if (dict->lookup('M', &obj)->isName()) {
    const char *m = obj.getName();
    
    if (strcmp('I', m) == 0)
      direction = transitionInward;
    else if (strcmp('O', m) == 0)
      direction = transitionOutward;
  }
  obj.free();
    
      // indirect reference or integer
  } else if (buf1.isInt()) {
    num = buf1.getInt();
    shift();
    if (buf1.isInt() && buf2.isCmd('R')) {
      obj->initRef(num, buf1.getInt());
      shift();
      shift();
    } else {
      obj->initInt(num);
    }
    
      // Get stream.
  Stream *getStream() { return lexer->getStream(); }
    
    class PopplerCacheKey
{
  public:
    virtual ~PopplerCacheKey();
    virtual bool operator==(const PopplerCacheKey &key) const = 0;
};
    
    #endif

    
    MediaRendition::MediaRendition(Object* obj) {
  Object tmp, tmp2;
  GBool hasClip = gFalse;
    }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}
    
    BSONObj getErrorLabels(const OperationSessionInfoFromClient& sessionOptions,
                       const std::string& commandName,
                       ErrorCodes::Error code,
                       bool hasWriteConcernError) {
    BSONArrayBuilder labelArray;
    }
    
    using TargetedBatchMap = std::map<const ShardEndpoint*, TargetedWriteBatch*, EndpointComp>;
    
    namespace mongo {
    }
    
    void TemporaryKVRecordStore::deleteTemporaryTable(OperationContext* opCtx) {
    // Need at least Global IS before calling into the storage engine, to protect against it being
    // destructed while we're using it.
    invariant(opCtx->lockState()->isReadLocked());
    }
    
    #include 'mongo/db/client.h'
#include 'mongo/db/db_raii.h'
#include 'mongo/db/json.h'
#include 'mongo/db/matcher/expression_text.h'
#include 'mongo/db/matcher/extensions_callback_real.h'
#include 'mongo/db/namespace_string.h'
#include 'mongo/dbtests/dbtests.h'
#include 'mongo/unittest/unittest.h'
    
            // Set up count stage
        auto params = makeCountScanParams(&_opCtx, getIndex(ctx.db(), BSON('a' << 1)));
        params.startKey = BSON('' << 2);
        params.startKeyInclusive = false;
        params.endKey = BSON('' << 6);
        params.endKeyInclusive = true;
    
    #include 'unicode/utypes.h'
    
    U_NAMESPACE_BEGIN
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
            // parameters at the last model aggregation point
        std::map<std::wstring, std::shared_ptr<Matrix<ElemType>>> m_prevParameters;
        std::map<std::wstring, std::shared_ptr<Matrix<ElemType>>> m_blockLevelSmoothedGradient;
    
            output = builder.Times(w, input);
    
        TrainingCriterion m_trainCriterion;
    EvalCriterion m_evalCriterion;
    
        shared_ptr<DataReader> cvDataReader;
    ConfigParameters cvReaderConfig(config(L'cvReader', L''));
    
            // comment the following argument for current stringargvector need to be empty.[v-xieche]
        // if (toks.empty()) RuntimeError ('argvector: arg must not be empty');
        foreach_index (i, toks)
        {
            // split off repeat factor
            std::vector<std::wstring> toks2 = msra::strfun::split(toks[i], L'*');
    }
    
        std::shared_ptr<IDistGradAggregator<ElemType>> m_distGradAgg;
    std::shared_ptr<struct DistGradHeader> m_gradHeader;
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
        // Prepare header.
    const size_t c_evalNodes = 1;
    if (gradHeader == nullptr)
        gradHeader.reset(DistGradHeader::Create(c_evalNodes),
                         [](DistGradHeader* ptr) { DistGradHeader::Destroy(ptr); });
    gradHeader->numEvalNode = c_evalNodes;
    gradHeader->numSamples = sampleCount;
    gradHeader->numSamplesWithLabel = sampleCount;
    gradHeader->criterion = 0.0; // (not used here)
    for (size_t i = 0; i < c_evalNodes; i++)
        // Not used here, but at least one is required by aggregation.
        gradHeader->evalErrors[i] = std::make_pair<double, size_t>(0.0, 0);
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}
