
        
        
    {}  // namespace atom
    
    #ifndef ATOM_APP_NODE_MAIN_H_
#define ATOM_APP_NODE_MAIN_H_
    
    
    {}  // namespace atom
    
    namespace atom {
    }
    
      bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterAll();
    
    
    {}  // namespace
    
    #ifndef ATOM_BROWSER_API_ATOM_API_LABEL_BUTTON_H_
#define ATOM_BROWSER_API_ATOM_API_LABEL_BUTTON_H_
    
    LayoutManager::LayoutManager(views::LayoutManager* layout_manager)
    : layout_manager_(layout_manager) {
  DCHECK(layout_manager_);
}
    
    void Menu::OnMenuWillShow() {
  Emit('menu-will-show');
}
    
    
    
    
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    namespace grpc {
    }
    
    ChannelCredentials::~ChannelCredentials() {}
    
    #include <grpcpp/security/credentials.h>
#include <grpcpp/support/config.h>
    
    void ChannelArguments::SetPointerWithVtable(
    const grpc::string& key, void* value,
    const grpc_arg_pointer_vtable* vtable) {
  grpc_arg arg;
  arg.type = GRPC_ARG_POINTER;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  arg.value.pointer.p = vtable->copy(value);
  arg.value.pointer.vtable = vtable;
  args_.push_back(arg);
}
    
    namespace grpc {
    }
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    namespace grpc {
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    
    {
    {    // Code should never reach this point
    LOG(ERROR) << 'osqueryd could not start worker process';
    Initializer::shutdown(EXIT_CATASTROPHIC);
    return std::shared_ptr<PlatformProcess>();
  }
  return std::make_shared<PlatformProcess>(worker_pid);
}
    
    TEST_F(ProcessTests, test_launchExtension) {
  {
    auto process =
        PlatformProcess::launchExtension(kProcessTestExecPath.c_str(),
                                         kExpectedExtensionArgs[3],
                                         kExpectedExtensionArgs[5],
                                         kExpectedExtensionArgs[7],
                                         true);
    EXPECT_NE(nullptr, process.get());
    }
    }
    
      auto& action = request.at('action');
  if (action == 'getQueries') {
    std::string queries;
    getQueries(queries);
    response.push_back({{'results', queries}});
    return Status(0, 'OK');
  } else if (action == 'writeResults') {
    if (request.count('results') == 0) {
      return Status(1, 'Missing results field');
    }
    return writeResults(request.at('results'));
  }
    
        std::string content;
    setDatabaseValue(kPersistentSettings, 'complex_example', '1');
    if (getDatabaseValue(kPersistentSettings, 'complex_example', content)) {
      r['database_test'] = content;
    }