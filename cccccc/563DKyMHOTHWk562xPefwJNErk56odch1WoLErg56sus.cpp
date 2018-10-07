
        
        class GenPythonOp {
 public:
  GenPythonOp(const OpDef& op_def, const ApiDef& api_def,
              const string& function_name);
  virtual ~GenPythonOp();
    }
    
    
    {  if (PyBfloat16_Check(arg)) {
    Py_INCREF(arg);
    return arg;
  } else {
    bfloat16 value;
    if (!AsBfloat16(arg, &value)) {
      return nullptr;
    }
    return PyBfloat16_FromBfloat16(value).release();
  }
}
    
    namespace tensorflow {
    }
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  return PlatformKind::none;
}

    
    void
SyntaxASTMap::recordSyntaxMapping(RC<syntax::SyntaxData> FromNode,
                                  ASTNode ToNode) {
  if (FromNode->getKind() == SyntaxKind::Unknown) {
    return;
  }
    }
    
    
    {  // All of these cases initialize 'length' chunks in newData.
  switch (auto length = getLengthInChunks()) {
  case 0:
    break;
  case 1:
    newData[0] = oldDataValue;
    break;
  default:
    assert(oldDataValue == 0 && 'not previously in inline-and-all-clear?');
    memset(newData, 0, length * sizeof(ChunkType));
    break;
  }
}
    
    void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
      // Set the 'os' platform condition.
  if (Target.isMacOSX())
    addPlatformConditionValue(PlatformConditionKind::OS, 'OSX');
  else if (Target.isTvOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'tvOS');
  else if (Target.isWatchOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'watchOS');
  else if (Target.isiOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'iOS');
  else if (Target.isAndroid())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Android');
  else if (Target.isOSLinux())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Linux');
  else if (Target.isOSFreeBSD())
    addPlatformConditionValue(PlatformConditionKind::OS, 'FreeBSD');
  else if (Target.isOSWindows())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Windows');
  else if (Target.isWindowsCygwinEnvironment())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Cygwin');
  else if (Target.isPS4())
    addPlatformConditionValue(PlatformConditionKind::OS, 'PS4');
  else if (Target.isOSHaiku())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Haiku');
  else
    UnsupportedOS = true;
    
        // Special case: if the word in the name ends in 's', and we have
    // a collection element type, see if this is a plural.
    if (!typeName.CollectionElement.empty() && nameWord.size() > 2 &&
        nameWord.back() == 's' && role != NameRole::BaseNameSelf) {
      // Check <element name>s.
      auto shortenedNameWord
        = name.substr(0, nameWordRevIter.base().getPosition()-1);
      auto newShortenedNameWord
        = omitNeedlessWords(shortenedNameWord, typeName.CollectionElement,
                            NameRole::Partial, allPropertyNames, scratch);
      if (shortenedNameWord == newShortenedNameWord &&
          shortenedNameWord.back() == 'e') {
        (void)shortenedNameWord.drop_back();
        newShortenedNameWord =
          omitNeedlessWords(shortenedNameWord, typeName.CollectionElement,
                            NameRole::Partial, allPropertyNames, scratch);
      }
    }
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    void run_ecdh_tests(void) {
    test_ecdh_api();
    test_ecdh_generator_basepoint();
    test_bad_scalar();
}
    
    #include <boost/test/unit_test.hpp>
    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
    namespace detail {
    }
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    
    {  // Any views left are views that don't exist in the new configuration file
  // so we tear them down and remove them from the database.
  for (const auto& old_view : erase_views) {
    osquery::query('DROP VIEW ' + old_view, r);
    deleteDatabaseValue(kQueries, kConfigViews + old_view);
  }
  return Status(0, 'OK');
}
    
    /// Unlike checkChildProcessStatus, this will block until process exits.
static bool getProcessExitCode(osquery::PlatformProcess& process,
                               int& exitCode) {
  if (!process.isValid()) {
    return false;
  }
    }
    
      /// Allow other parts of the codebase to check worker state.
  bool isWorkerValid() const {
    WriteLock lock(worker_mutex_);
    return worker_->isValid();
  }
    
      // Get the pathname the watch fired on.
  {
    WriteLock lock(path_mutex_);
    if (descriptor_inosubctx_.find(event->wd) == descriptor_inosubctx_.end()) {
      // return a blank event context if we can't find the paths for the event
      return ec;
    } else {
      auto isc = descriptor_inosubctx_.at(event->wd);
      ec->path = isc->descriptor_paths_.at(event->wd);
      ec->isub_ctx = isc;
    }
  }
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    class DHTRoutingTableDeserializer {
private:
  int family_;
    }
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
      // do nothing
  virtual void doReceivedAction() CXX11_OVERRIDE;
    
    
    {  void remove(const std::string& hostname, uint16_t port);
};
    
      static const struct ERR2STR err2str[] = {
      {NTCAN_SUCCESS, 'NTCAN_SUCCESS'},
      {NTCAN_RX_TIMEOUT, 'NTCAN_RX_TIMEOUT'},
      {NTCAN_TX_TIMEOUT, 'NTCAN_TX_TIMEOUT'},
      {NTCAN_TX_ERROR, 'NTCAN_TX_ERROR'},
      {NTCAN_CONTR_OFF_BUS, 'NTCAN_CONTR_OFF_BUS'},
      {NTCAN_CONTR_BUSY, 'NTCAN_CONTR_BUSY'},
      {NTCAN_CONTR_WARN, 'NTCAN_CONTR_WARN'},
      {NTCAN_NO_ID_ENABLED, 'NTCAN_NO_ID_ENABLED'},
      {NTCAN_ID_ALREADY_ENABLED, 'NTCAN_ID_ALREADY_ENABLED'},
      {NTCAN_ID_NOT_ENABLED, 'NTCAN_ID_NOT_ENABLED'},
      {NTCAN_INVALID_FIRMWARE, 'NTCAN_INVALID_FIRMWARE'},
      {NTCAN_MESSAGE_LOST, 'NTCAN_MESSAGE_LOST'},
      {NTCAN_INVALID_PARAMETER, 'NTCAN_INVALID_PARAMETER'},
      {NTCAN_INVALID_HANDLE, 'NTCAN_INVALID_HANDLE'},
      {NTCAN_NET_NOT_FOUND, 'NTCAN_NET_NOT_FOUND'},
#ifdef NTCAN_IO_INCOMPLETE
      {NTCAN_IO_INCOMPLETE, 'NTCAN_IO_INCOMPLETE'},
#endif
#ifdef NTCAN_IO_PENDING
      {NTCAN_IO_PENDING, 'NTCAN_IO_PENDING'},
#endif
#ifdef NTCAN_INVALID_HARDWARE
      {NTCAN_INVALID_HARDWARE, 'NTCAN_INVALID_HARDWARE'},
#endif
#ifdef NTCAN_PENDING_WRITE
      {NTCAN_PENDING_WRITE, 'NTCAN_PENDING_WRITE'},
#endif
#ifdef NTCAN_PENDING_READ
      {NTCAN_PENDING_READ, 'NTCAN_PENDING_READ'},
#endif
#ifdef NTCAN_INVALID_DRIVER
      {NTCAN_INVALID_DRIVER, 'NTCAN_INVALID_DRIVER'},
#endif
#ifdef NTCAN_OPERATION_ABORTED
      {NTCAN_OPERATION_ABORTED, 'NTCAN_OPERATION_ABORTED'},
#endif
#ifdef NTCAN_WRONG_DEVICE_STATE
      {NTCAN_WRONG_DEVICE_STATE, 'NTCAN_WRONG_DEVICE_STATE'},
#endif
      {NTCAN_INSUFFICIENT_RESOURCES, 'NTCAN_INSUFFICIENT_RESOURCES'},
#ifdef NTCAN_HANDLE_FORCED_CLOSE
      {NTCAN_HANDLE_FORCED_CLOSE, 'NTCAN_HANDLE_FORCED_CLOSE'},
#endif
#ifdef NTCAN_NOT_IMPLEMENTED
      {NTCAN_NOT_IMPLEMENTED, 'NTCAN_NOT_IMPLEMENTED'},
#endif
#ifdef NTCAN_NOT_SUPPORTED
      {NTCAN_NOT_SUPPORTED, 'NTCAN_NOT_SUPPORTED'},
#endif
#ifdef NTCAN_SOCK_CONN_TIMEOUT
      {NTCAN_SOCK_CONN_TIMEOUT, 'NTCAN_SOCK_CONN_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_CMD_TIMEOUT
      {NTCAN_SOCK_CMD_TIMEOUT, 'NTCAN_SOCK_CMD_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_HOST_NOT_FOUND
      {NTCAN_SOCK_HOST_NOT_FOUND, 'NTCAN_SOCK_HOST_NOT_FOUND'},
#endif
#ifdef NTCAN_CONTR_ERR_PASSIVE
      {NTCAN_CONTR_ERR_PASSIVE, 'NTCAN_CONTR_ERR_PASSIVE'},
#endif
#ifdef NTCAN_ERROR_NO_BAUDRATE
      {NTCAN_ERROR_NO_BAUDRATE, 'NTCAN_ERROR_NO_BAUDRATE'},
#endif
#ifdef NTCAN_ERROR_LOM
      {NTCAN_ERROR_LOM, 'NTCAN_ERROR_LOM'},
#endif
      {(NTCAN_RESULT)0xffffffff, 'NTCAN_UNKNOWN'} /* stop-mark */
  };
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    #include 'modules/drivers/canbus/can_client/hermes_can/bcan.h'
/**
 * @namespace apollo::drivers::canbus::can
 * @brief apollo::drivers::canbus::can
 */
    
    
    {    // Synchronous transmission of CAN messages
    int ret = write(dev_handler_, &send_frames_[i], sizeof(send_frames_[i]));
    if (ret <= 0) {
      AERROR << 'send message failed, error code: ' << ret;
      return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
  }
    
    
    {  SocketCanClientRaw socket_can_client;
  EXPECT_TRUE(socket_can_client.Init(param));
  EXPECT_EQ(socket_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(socket_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(socket_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(socket_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  socket_can_client.Stop();
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }