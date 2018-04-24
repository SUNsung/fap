
        
        #include <vector>
    
    class MenuModelAdapter : public views::MenuModelAdapter {
 public:
  explicit MenuModelAdapter(AtomMenuModel* menu_model);
  virtual ~MenuModelAdapter();
    }
    
    #include 'atom/browser/unresponsive_suppressor.h'
    
    
    {}  // namespace atom
    
    
    {}  // namespace atom
    
    class RemoteCallbackFreer : public ObjectLifeMonitor,
                            public content::WebContentsObserver {
 public:
  static void BindTo(v8::Isolate* isolate,
                     v8::Local<v8::Object> target,
                     int object_id,
                     content::WebContents* web_conents);
    }
    
    
    {}  // namespace extensions
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MonitorFinder);
};
    
    class PepperFlashDRMHost : public ppapi::host::ResourceHost {
 public:
  PepperFlashDRMHost(content::BrowserPpapiHost* host,
                     PP_Instance instance,
                     PP_Resource resource);
  ~PepperFlashDRMHost() override;
    }
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    // static
void DispatcherBindings::CrashRenderer(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  RenderView* render_view = GetCurrentRenderView();
  if (!render_view) {
    args.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
                                     'Unable to get render view in CallObjectMethod'))));
    return;
  }
  int* ptr = NULL;
  *ptr = 1;
}
    
    
#include 'base/basictypes.h'
    
    void MenuDelegate::ExecuteCommand(int command_id, int event_flags) {
  if (command_id < 0)
    return;
    }
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    namespace extensions {
    }
    
      assert(peekType(msg) == thpp::Type::INT);
  int64_t arg3 = unpackInteger(msg);
  assert(arg3 == -12);
    
    /// Copies a limited number of bytes from a source buffer to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A modifiable buffer representing the memory region from which
 * the bytes will be copied. The contents of the source buffer will not be
 * modified.
 *
 * @param max_bytes_to_copy The maximum number of bytes to be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * @li @c max_bytes_to_copy
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
inline std::size_t buffer_copy(const mutable_buffers_1& target,
    const mutable_buffers_1& source, std::size_t max_bytes_to_copy)
{
  return buffer_copy(buffer(target, max_bytes_to_copy), source);
}
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #include <boost/asio/detail/config.hpp>
    
    template <>
class base_from_completion_cond<transfer_all_t>
{
protected:
  explicit base_from_completion_cond(transfer_all_t)
  {
  }
    }
    
      // Is there no unread data in the buffer.
  bool empty() const
  {
    return begin_offset_ == end_offset_;
  }
    
    #include <boost/asio/detail/posix_fd_set_adapter.hpp>
#include <boost/asio/detail/win_fd_set_adapter.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {      if ((events[i].events & (POLLERR | POLLHUP)) != 0
            && !more_except && !more_reads && !more_writes)
      {
        // If we have an event and no operations associated with the
        // descriptor then we need to delete the descriptor from /dev/poll.
        // The poll operation can produce POLLHUP or POLLERR events when there
        // is no operation pending, so if we do not remove the descriptor we
        // can end up in a tight polling loop.
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLREMOVE;
        ev.revents = 0;
        ::write(dev_poll_fd_, &ev, sizeof(ev));
      }
      else
      {
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLERR | POLLHUP;
        if (more_reads)
          ev.events |= POLLIN;
        if (more_writes)
          ev.events |= POLLOUT;
        if (more_except)
          ev.events |= POLLPRI;
        ev.revents = 0;
        int result = ::write(dev_poll_fd_, &ev, sizeof(ev));
        if (result != sizeof(ev))
        {
          boost::system::error_code ec(errno,
              boost::asio::error::get_system_category());
          for (int j = 0; j < max_ops; ++j)
            op_queue_[j].cancel_operations(descriptor, ops, ec);
        }
      }
    }
  }
  timer_queues_.get_ready_timers(ops);
}
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, true);
}
    
      typedef void (*ErrorFn)(const FlatCompiler *flatc, const std::string &err,
                          bool usage, bool show_exe_name);
    
      // Use the `CreateWeapon` shortcut to create Weapons with all fields set.
  auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
  auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);
    
    static void Warn(const flatbuffers::FlatCompiler *flatc,
                 const std::string &warn, bool show_exe_name) {
  (void)flatc;
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('warning: %s\n', warn.c_str());
}
    
     public:
  JsonSchemaGenerator(const Parser &parser, const std::string &path,
                      const std::string &file_name)
      : BaseGenerator(parser, path, file_name, '', '') {}
    
    // clang-format off
    
    template<> struct FnvTraits<uint64_t> {
  static const uint64_t kFnvPrime = 0x00000100000001b3ULL;
  static const uint64_t kOffsetBasis = 0xcbf29ce484222645ULL;
};
    
    inline flatbuffers::Offset<Enum> CreateEnum(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<EnumVal>>> values = 0,
    bool is_union = false,
    flatbuffers::Offset<Type> underlying_type = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation = 0) {
  EnumBuilder builder_(_fbb);
  builder_.add_documentation(documentation);
  builder_.add_attributes(attributes);
  builder_.add_underlying_type(underlying_type);
  builder_.add_values(values);
  builder_.add_name(name);
  builder_.add_is_union(is_union);
  return builder_.Finish();
}
    
    inline flatbuffers::Offset<TableInC> CreateTableInC(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1 = 0,
    flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2 = 0) {
  TableInCBuilder builder_(_fbb);
  builder_.add_refer_to_a2(refer_to_a2);
  builder_.add_refer_to_a1(refer_to_a1);
  return builder_.Finish();
}