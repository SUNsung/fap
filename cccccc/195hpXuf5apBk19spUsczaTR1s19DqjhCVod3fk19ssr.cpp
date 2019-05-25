
        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
          if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
    
    {  assert(*BufferPtr == '\r');
  unsigned Bytes = 1;
  if (BufferPtr != BufferEnd && *BufferPtr == '\n')
    Bytes++;
  return Bytes;
}
    
    %{
    }
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
    void GenerateDSYMJobAction::anchor() {}
    
    class LLVM_LIBRARY_VISIBILITY Darwin : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    }
    
    std::pair<FrontendInputsAndOutputs, std::set<StringRef>>
ArgsToFrontendInputsConverter::createInputFilesConsumingPrimaries(
    std::set<StringRef> primaryFiles) {
  bool hasAnyPrimaryFiles = !primaryFiles.empty();
    }
    
    v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope handle_scope(isolate);
    }
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
    class NwAppQuitFunction : public UIThreadExtensionFunction {
 public:
  NwAppQuitFunction();
    }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenStopMonitorFunction);
  };
    
    MeasureDouble RpcServerReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerReceivedBytesPerRpcMeasureName,
      'Total bytes received across all messages per RPC', kUnitBytes);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    Status ProtoServerReflection::ListService(ServerContext* context,
                                          ListServiceResponse* response) {
  if (services_ == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Services not found.');
  }
  for (auto it = services_->begin(); it != services_->end(); ++it) {
    ServiceResponse* service_response = response->add_service();
    service_response->set_name(*it);
  }
  return Status::OK;
}
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, const grpc::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const grpc::string& name, const grpc::string& value)
        : name_(name), value_(value) {}
    }
    }
    
    
    {}  // namespace
    
    void PerBalancerStore::MergeRow(const LoadRecordKey& key,
                                const LoadRecordValue& value) {
  // During suspension, the load data received will be dropped.
  if (!suspended_) {
    load_record_map_[key].MergeFrom(value);
    gpr_log(GPR_DEBUG,
            '[PerBalancerStore %p] Load data merged (Key: %s, Value: %s).',
            this, key.ToString().c_str(), value.ToString().c_str());
  } else {
    gpr_log(GPR_DEBUG,
            '[PerBalancerStore %p] Load data dropped (Key: %s, Value: %s).',
            this, key.ToString().c_str(), value.ToString().c_str());
  }
  // We always keep track of num_calls_in_progress_, so that when this
  // store is resumed, we still have a correct value of
  // num_calls_in_progress_.
  GPR_ASSERT(static_cast<int64_t>(num_calls_in_progress_) +
                 value.GetNumCallsInProgressDelta() >=
             0);
  num_calls_in_progress_ += value.GetNumCallsInProgressDelta();
}
    
    // A helper for the POSIX Env to facilitate testing.
class EnvPosixTestHelper {
 private:
  friend class EnvPosixTest;
    }
    
    #include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
      // Return the earliest node that comes at or after key.
  // Return nullptr if there is no such node.
  //
  // If prev is non-null, fills prev[level] with pointer to previous
  // node at 'level' for every level in [0..max_height_-1].
  Node* FindGreaterOrEqual(const Key& key, Node** prev) const;
    
    
    {  delete rand_file;
}
    
    // Options that control read operations
struct LEVELDB_EXPORT ReadOptions {
  ReadOptions() = default;
    }
    
    #ifndef STORAGE_LEVELDB_INCLUDE_STATUS_H_
#define STORAGE_LEVELDB_INCLUDE_STATUS_H_
    
    class Slice;
    
    
    {  for (int i = 0; i < h.size(); i++) {
    cache_->Release(h[i]);
  }
}
    
        Rational Invert(Rational const& rat);
    Rational Abs(Rational const& rat);
    
    namespace CalcEngine
{
    Number::Number() noexcept
        : Number(1, 0, { 0 })
    {
    }
    }
    
        Rational operator<<(Rational lhs, Rational const& rhs)
    {
        lhs <<= rhs;
        return lhs;
    }
    
    
    {    // we must now set up all the ratpak constants and our arrayed pointers
    // to these constants.
    ChangeBaseConstants(DEFAULT_RADIX, DEFAULT_MAX_DIGITS, DEFAULT_PRECISION);
}
    
    
    {
    {
    {            virtual Platform::Object
                ^ ConvertBack(
                    Platform::Object ^ /*value*/,
                    Windows::UI::Xaml::Interop::TypeName /*targetType*/,
                    Platform::Object ^ /*parameter*/,
                    Platform::String ^ /*language*/) = Windows::UI::Xaml::Data::IValueConverter::ConvertBack
            {
                return Windows::UI::Xaml::DependencyProperty::UnsetValue;
            }
        };
    }
}

    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetMemoryItemAddedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::MemoryItemAdded, AutomationNotificationKind::ItemAdded, AutomationNotificationProcessing::MostRecent);
}
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    static void UnpackAccumulativeOffsetsIntoRanges(int base_codepoint, const short* accumulative_offsets, int accumulative_offsets_count, ImWchar* out_ranges)
{
    for (int n = 0; n < accumulative_offsets_count; n++, out_ranges += 2)
    {
        out_ranges[0] = out_ranges[1] = (ImWchar)(base_codepoint + accumulative_offsets[n]);
        base_codepoint += accumulative_offsets[n];
    }
    out_ranges[0] = 0;
}
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        desc.NumDescriptors = NUM_BACK_BUFFERS;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dRtvDescHeap)) != S_OK)
            return false;
    }
    
    #include 'imgui.h'
#include 'imgui_impl_sdl.h'
#include 'imgui_impl_vulkan.h'
#include <stdio.h>          // printf, fprintf
#include <stdlib.h>         // abort
#include <SDL.h>
#include <SDL_vulkan.h>
#include <vulkan/vulkan.h>
    
      int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
    
    #include <boost/algorithm/string/join.hpp>
#include <boost/algorithm/string/predicate.hpp>
    
    
    {  // start, end are in units of 100 nanoseconds
  return (end.QuadPart - start.QuadPart) * 0.0000001;
}
#else
static double timeDiff(struct timeval* pStart, struct timeval* pEnd) {
  return (pEnd->tv_usec - pStart->tv_usec) * 0.000001 +
         static_cast<double>(pEnd->tv_sec - pStart->tv_sec);
}
#endif
    
    namespace osquery {
namespace perf_event_open {
    }
    }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
      // these three metods are querying the state of the WriteController
  bool IsStopped() const;
  bool NeedsDelay() const { return total_delayed_.load() > 0; }
  bool NeedSpeedupCompaction() const {
    return IsStopped() || NeedsDelay() || total_compaction_pressure_ > 0;
  }
  // return how many microseconds the caller needs to sleep after the call
  // num_bytes: how many number of bytes to put into the DB.
  // Prerequisite: DB mutex held.
  uint64_t GetDelay(Env* env, uint64_t num_bytes);
  void set_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    } else if (write_rate > max_delayed_write_rate()) {
      write_rate = max_delayed_write_rate();
    }
    delayed_write_rate_ = write_rate;
  }
    
    
    {}  // namespace
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }
    
    
    {  double ret = x * OBJECT_WIDTH_RES;
  return ret;
}
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    int ObjectQualityInfo60C::probexist(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(5, 3);
    }