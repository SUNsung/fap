
        
        
    {}  // namespace
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    {}  // namespace atom
    
      // content::DownloadManager::Observer:
  void OnDownloadCreated(content::DownloadManager* manager,
                         download::DownloadItem* item) override;
    
    class AtomJavaScriptDialogManager : public content::JavaScriptDialogManager {
 public:
  explicit AtomJavaScriptDialogManager(api::WebContents* api_web_contents);
  ~AtomJavaScriptDialogManager() override;
    }
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    RenderView* GetCurrentRenderView() {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::Local<v8::Context> ctx = isolate->GetCurrentContext();
  return GetRenderView(ctx);
}
    
    bool MenuDelegate::IsCommandIdChecked(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    #include 'modules/common/macro.h'
#include 'modules/common/util/factory.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
    
      CANCardParameter can_client_conf_b;
  std::unique_ptr<CanClient> client_b;
  if (!FLAGS_only_one_send) {
    if (!apollo::common::util::GetProtoFromFile(FLAGS_can_client_conf_file_b,
                                                &can_client_conf_b)) {
      AERROR << 'Unable to load canbus conf file: '
             << FLAGS_can_client_conf_file_b;
      return 1;
    } else {
      AINFO << 'Conf file is loaded: ' << FLAGS_can_client_conf_file_b;
    }
    AINFO << can_client_conf_b.ShortDebugString();
    client_b = can_client_factory->CreateObject(can_client_conf_b.brand());
    if (!client_b || !client_b->Init(can_client_conf_b) ||
        client_b->Start() != ErrorCode::OK) {
      AERROR << 'Create can client b failed.';
      return 1;
    }
    param_ptr_b->can_client = client_b.get();
    param_ptr_b->conf = can_client_conf_b;
  }
    
    #ifdef NTCAN_ERROR_FORMAT_LONG
  {
    NTCAN_RESULT res;
    char sz_error_text[60];
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    
    {  if (static_cast<size_t>(*frame_num) != frames.size()) {
    AERROR << 'frame num is incorrect.';
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
  for (size_t i = 0; i < frames.size(); ++i) {
    ADEBUG << 'send frame i:' << i;
    ADEBUG << frames[i].CanFrameString();
    frame_info_ << frames[i].CanFrameString();
  }
  ++send_counter_;
  return ErrorCode::OK;
}
    
    #endif  // MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_HERMES_CAN_CLIENT_H
    
      if (ret < 0) {
    AERROR << 'bind socket to network interface error code: ' << ret;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
      /**
   * @brief Constructor which takes a reference to a one-byte unsigned integer.
   * @param value The reference to a one-byte unsigned integer for construction.
   */
  Byte(const Byte &value);
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
    
      if (can_receiver_.Init(can_client_.get(), sensor_message_manager_.get(),
                         canbus_conf_.enable_receiver_log()) != ErrorCode::OK) {
    return OnError('Failed to init can receiver.');
  }
  AINFO << 'The can receiver is successfully initialized.';
    
    namespace v8 {
namespace internal {
    }
    }
    
    void Builtins::Generate_InterpreterPushArgsThenCallWithFinalSpread(
    MacroAssembler* masm) {
  return Generate_InterpreterPushArgsThenCallImpl(
      masm, ConvertReceiverMode::kAny,
      InterpreterPushArgsMode::kWithFinalSpread);
}
    
    // ES6 #sec-math.sqrt
TF_BUILTIN(MathSqrt, MathBuiltinsAssembler) {
  Node* context = Parameter(Descriptor::kContext);
  Node* x = Parameter(Descriptor::kX);
  MathUnaryOperation(context, x, &CodeStubAssembler::Float64Sqrt);
}
    
    #ifndef V8_BUILTINS_BUILTINS_MATH_GEN_H_
#define V8_BUILTINS_BUILTINS_MATH_GEN_H_
    
      BIND(&u8);
  Return(SmiFromInt32((this->*function)(MachineType::Uint8(), backing_store,
                                        index_word, value_word32)));
    
    class TestBuiltinsAssembler : public BaseBuiltinsFromDSLAssembler {
 public:
  explicit TestBuiltinsAssembler(compiler::CodeAssemblerState* state)
      : BaseBuiltinsFromDSLAssembler(state) {}
};
    
    QStringList ListLikeKeyModel::getColumnNames()
{
    return QStringList() << 'row'  << 'value';
}
    
    class StringKeyModel : public KeyModel<QByteArray>
{    
public:
    StringKeyModel(QSharedPointer<RedisClient::Connection> connection,
                   QByteArray fullPath, int dbIndex, long long ttl);
    }
    
            public:
            enum class State { READY, RUNNING, FINISHED };
        public:
            CurrentOperation(QSharedPointer<RedisClient::Connection> connection, int dbIndex,
                             Manager::Operation op=Manager::Operation::DELETE_KEYS,
                             QRegExp keyPattern=QRegExp('*', Qt::CaseSensitive, QRegExp::Wildcard));
    
        QObject::connect(manager, SIGNAL(finished(QNetworkReply*)),
        this, SLOT(requestFinished(QNetworkReply*)));