
        
        void GlobalShortcut::OnKeyPressed(const ui::Accelerator& accelerator) {
  if (accelerator_callback_map_.find(accelerator) ==
      accelerator_callback_map_.end()) {
    // This should never occur, because if it does, GlobalGlobalShortcutListener
    // notifes us with wrong accelerator.
    NOTREACHED();
    return;
  }
  accelerator_callback_map_[accelerator].Run();
}
    
    int RenderProcessPreferences::AddEntry(const base::DictionaryValue& entry) {
  return preferences_.AddEntry(entry);
}
    
    #endif  // ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_

    
    
    {}  // namespace mate
    
    v8::Local<v8::Object> CreateEventFromFlags(v8::Isolate* isolate, int flags) {
  mate::Dictionary obj = mate::Dictionary::CreateEmpty(isolate);
  obj.Set('shiftKey', static_cast<bool>(flags & ui::EF_SHIFT_DOWN));
  obj.Set('ctrlKey', static_cast<bool>(flags & ui::EF_CONTROL_DOWN));
  obj.Set('altKey', static_cast<bool>(flags & ui::EF_ALT_DOWN));
  obj.Set('metaKey', static_cast<bool>(flags & ui::EF_COMMAND_DOWN));
  return obj.GetHandle();
}
    
    // A self-destroyed class for handling save page request.
class SavePageHandler : public content::DownloadManager::Observer,
                        public content::DownloadItem::Observer {
 public:
  using SavePageCallback = base::Callback<void(v8::Local<v8::Value>)>;
    }
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
    
    {}  // namespace atom
    
    Delegate* AutoUpdater::delegate_ = nullptr;
    
    AsarProtocolHandler::AsarProtocolHandler(
    const scoped_refptr<base::TaskRunner>& file_task_runner)
    : file_task_runner_(file_task_runner) {}
    
    namespace atom {
    }
    
      // URLRequestJob:
  void GetResponseInfo(net::HttpResponseInfo* info) override;
    
    
    {  base::LaunchOptions options;
  options.allow_new_privs = true;
  options.new_process_group = true;  // detach
  options.fds_to_remap = &no_stdout;
  base::Process process = base::LaunchProcess(argv, options);
  return process.IsValid() ? 0 : 1;
}
    
    
    {  cached_entries_.Clear();
  for (const auto& iter : entries_)
    cached_entries_.Append(iter.second->CreateDeepCopy());
  cache_needs_update_ = false;
}
    
    // static
void App::Call(Shell* shell,
               const std::string& method,
               const base::ListValue& arguments,
               base::ListValue* result,
               DispatcherHost* dispatcher_host) {
  if (method == 'GetDataPath') {
    ShellBrowserContext* browser_context =
      static_cast<ShellBrowserContext*>(shell->web_contents()->GetBrowserContext());
    result->AppendString(browser_context->GetPath().value());
    return;
  }else if (method == 'GetArgv') {
    nw::Package* package = shell->GetPackage();
    CommandLine* command_line = CommandLine::ForCurrentProcess();
    CommandLine::StringVector args = command_line->GetArgs();
    CommandLine::StringVector argv = command_line->original_argv();
    }
    }
    
    
    {}  // namespace nwapi
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
}
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    using namespace std;
    
            bool inWildcard = !(firstStart + firstCount == secondStart && secondCount == 0);
    
    
    {    return std::equal(s1.begin(), s1.end(), s2.begin(), [](const TElement& a, const TElement& b)
    {
        return std::tolower(a) == std::tolower(b);
    });
}
    
    // Add a second service with one sync streamed unary method.
class StreamedUnaryDupPkg
    : public duplicate::EchoTestService::WithStreamedUnaryMethod_Echo<
          TestServiceImplDupPkg> {
 public:
  Status StreamedEcho(
      ServerContext* context,
      ServerUnaryStreamer<EchoRequest, EchoResponse>* stream) override {
    EchoRequest req;
    EchoResponse resp;
    uint32_t next_msg_sz;
    stream->NextMessageSize(&next_msg_sz);
    gpr_log(GPR_INFO, 'Streamed Unary Next Message Size is %u', next_msg_sz);
    GPR_ASSERT(stream->Read(&req));
    resp.set_message(req.message() + '_dup');
    GPR_ASSERT(stream->Write(resp));
    return Status::OK;
  }
};
    
    DEFINE_string(hashed_id, '', 'Hash of the user id');
    
    /* decompress 'input' to 'output' using 'algorithm'.
   On success, appends slices to output and returns 1.
   On failure, output is unchanged, and returns 0. */
int grpc_msg_decompress(grpc_message_compression_algorithm algorithm,
                        grpc_slice_buffer* input, grpc_slice_buffer* output);
    
    static int is_compressed(grpc_byte_buffer* buffer) {
  switch (buffer->type) {
    case GRPC_BB_RAW:
      if (buffer->data.raw.compression == GRPC_COMPRESS_NONE) {
        return 0 /* GPR_FALSE */;
      }
      break;
  }
  return 1 /* GPR_TRUE */;
}
    
    static void proxy_mapper_destroy(grpc_proxy_mapper* mapper) {}