
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    namespace content {
class RenderView;
}
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    
    {REGISTER_CPU_OPERATOR(Glu, GluOp<float, CPUContext>);
} // namespace caffe2

    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    int32_t GlobalConfigEnvInt32::Get() {
  UniquePtr<char> str = GetValue();
  if (str == nullptr) {
    return default_value_;
  }
  // parsing given value string.
  char* end = str.get();
  long result = strtol(str.get(), &end, 10);
  if (*end != 0) {
    LogParsingError(GetName(), str.get());
    result = default_value_;
  }
  return static_cast<int32_t>(result);
}
    
    static inline std::shared_ptr<::grpc::Channel> CreateChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds) {
  return ::grpc_impl::CreateChannelImpl(target, creds);
}
    
    TEST_F(HealthServiceEnd2endTest, DefaultHealthServiceShutdown) {
  EnableDefaultHealthCheckService(true);
  EXPECT_TRUE(DefaultHealthCheckServiceEnabled());
  SetUpServer(true, false, false, nullptr);
  VerifyHealthCheckServiceShutdown();
}
    
      void CompareMethod(const grpc::string& method) {
    const protobuf::MethodDescriptor* method_desc =
        desc_pool_->FindMethodByName(method);
    const protobuf::MethodDescriptor* ref_method_desc =
        ref_desc_pool_->FindMethodByName(method);
    EXPECT_TRUE(method_desc != nullptr);
    EXPECT_TRUE(ref_method_desc != nullptr);
    EXPECT_EQ(method_desc->DebugString(), ref_method_desc->DebugString());
    }
    
      // For the client to give to gRPC to be populated by incoming response
  // from server.
  EchoResponse recv_response_;
  ::grpc::ByteBuffer recv_response_buffer_;
  Status recv_status_;
    
    
    {    get_btree_superblock_and_txn_for_writing(
            general_cache_conn.get(),
            &write_superblock_acq_semaphore,
            write_access_t::write,
            expected_change_count,
            durability,
            sb_out,
            txn_out);
}
    
    
    {        response->response =
            rdb_batched_replace(
                btree_info_t(btree, timestamp, datum_string_t(br.pkey)),
                superblock,
                br.keys,
                &replacer,
                &sindex_cb,
                ql_env.limits(),
                sampler,
                trace);
    }
    
                const hash_region_t<key_range_t> test_range = hash_region_t<key_range_t>::universe();
            rdb_protocol::range_key_tester_t tester(&test_range);
            buf_lock_t sindex_block(
                super_block->expose_buf(),
                super_block->get_sindex_block_id(),
                access_t::write);
    
    #endif  // GTEST_HAS_PARAM_TEST
    
    
    {}  // namespace testing
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
    template <GTEST_0_TYPENAMES_(T)>
struct tuple_size<GTEST_0_TUPLE_(T) > {
  static const int value = 0;
};
    
    
    {
    {
    {}  // namespace velodyne
}  // namespace drivers
}  // namespace apollo

    
      for (auto& item : responses) {
    int fd = item.first;
    auto& response = item.second;
    }
    
      common::Status ApplyRule(Frame* const frame,
                           ReferenceLineInfo* const reference_line_info);
    
      void SendThreadFunc() {
    using common::ErrorCode;
    using common::time::AsInt64;
    using common::time::Clock;
    using common::time::micros;
    AINFO << 'Send thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    std::vector<CanFrame> frames;
    frames.resize(MAX_CAN_SEND_FRAME_LEN);
    }
    
    #include 'modules/control/controller/controller_agent.h'
    
    
    {  ADEBUG << 'Dimension hwl: ' << dimension_hwl[0] << ', ' << dimension_hwl[1]
         << ', ' << dimension_hwl[2];
  ADEBUG << 'Obj ry:' << rotation_y;
  ADEBUG << 'Obj theta: ' << obj->theta;
  ADEBUG << 'Obj center from transformer: ' << obj->center.transpose();
}
    
    #define PF_NONBLOCK 0x0020
#define PF_APPEND 0x0040
    
    namespace {
extern 'C' {
static inline bool hasWorkerVariable() {
  return ::osquery::getEnvVar('OSQUERY_WORKER').is_initialized();
}
    }
    }
    
    void* platformModuleGetSymbol(ModuleHandle module, const std::string& symbol) {
  return ::dlsym(module, symbol.c_str());
}
    
    #ifdef WIN32
/**
 * @brief Handles the resource lifetime of a PSECURITY_DESCRIPTOR
 *
 * Class to handle the scope of a PSECURITY_DESCRIPTOR from
 * GetSecurityInfo/GetNamedSecurityInfo class of functions (or any
 * PSECURITY_DESCRIPTOR pointer where the buffer is allocated via LocalAlloc)
 */
class SecurityDescriptor {
 public:
  explicit SecurityDescriptor(PSECURITY_DESCRIPTOR sd) : sd_(sd) {}
    }
    
    
    {  if (!::GetExitCodeProcess(launcher.nativeHandle(), &code)) {
    LOG(WARNING) << 'GetExitCodeProcess did not return a value, error code ('
                 << GetLastError() << ')';
    return false;
  }
  return (code != STILL_ACTIVE);
}
    
    const std::map<unsigned long, std::string> kMemoryConstants = {
    {PAGE_EXECUTE, 'PAGE_EXECUTE'},
    {PAGE_EXECUTE_READ, 'PAGE_EXECUTE_READ'},
    {PAGE_EXECUTE_READWRITE, 'PAGE_EXECUTE_READWRITE'},
    {PAGE_EXECUTE_WRITECOPY, 'PAGE_EXECUTE_WRITECOPY'},
    {PAGE_NOACCESS, 'PAGE_NOACCESS'},
    {PAGE_READONLY, 'PAGE_READONLY'},
    {PAGE_READWRITE, 'PAGE_READWRITE'},
    {PAGE_WRITECOPY, 'PAGE_WRITECOPY'},
    {PAGE_GUARD, 'PAGE_GUARD'},
    {PAGE_NOCACHE, 'PAGE_NOCACHE'},
    {PAGE_WRITECOMBINE, 'PAGE_WRITECOMBINE'},
};
    
      /*
   * @brief a helper variable for keeping track of the posix tar archive.
   *
   * This variable is the absolute location of the tar archive created from
   * tar'ing all of the carved files from the carve temp dir.
   */
  boost::filesystem::path archivePath_;
    
    #include <boost/filesystem.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
    
    #include <osquery/utils/info/platform_type.h>
#include <osquery/utils/json/json.h>
#include <osquery/utils/system/time.h>