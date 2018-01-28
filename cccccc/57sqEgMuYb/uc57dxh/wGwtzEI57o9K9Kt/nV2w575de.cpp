  // Check for an empty key-path string.
  auto keyPathString = keyPathOS.str();
  if (keyPathString.empty() && !isInvalid)
    diagnose(expr->getLoc(), diag::expr_keypath_empty);
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
      std::vector<Completion *> results;
  for (auto *result : swiftResults) {
    CompletionBuilder builder(sink, *result);
    if (result->getSemanticContext() == SemanticContextKind::OtherModule) {
      builder.setModuleImportDepth(depth.lookup(result->getModuleName()));
    }
    }
    
    class SILFunction;
class SILBasicBlock;
    
        size_t C1Offset = SourceNext - SourceStart;
    ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 2,
                       llvm::lenientConversion);
    
    NS_ASSUME_NONNULL_BEGIN
    
      IndexUnitWriter unitWriter(fileMgr, indexStorePath,
    'swift', swiftVersion, indexUnitToken, module->getNameStr(),
    mainFile, isSystem, /*isModuleUnit=*/false, isDebugCompilation,
    targetTriple, sysrootPath, getModuleInfoFromOpaqueModule);
    
      /// Suppress all warnings
  bool SuppressWarnings = false;
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
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
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
      bool Send(IPC::Message* message) override;
  void RenderViewHostChanged(content::RenderViewHost* old_host,
                                     content::RenderViewHost* new_host) override;
  content::RenderViewHost* render_view_host() const {
    return render_view_host_;
  }
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    
    {}  // namespace nwapi

    
    void Timer::RequestExit() {
  Dump();
}
    
      if ((cmd.getInterruptType() == BreakPointReached ||
       cmd.getInterruptType() == HardBreakPoint) && m_flow) {
    if (m_flow->is(DebuggerCommand::KindOfContinue)) {
      m_flow->onBeginInterrupt(*this, cmd);
      if (m_flow->complete()) m_flow.reset();
      return false;
    }
  }
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  // now visit the remaining ones
  for (auto& sInfo : m_clusterSuccs[cid]) {
    if (sInfo.first != bestSucc) {
      dfs(sInfo.first);
    }
  }
}
    
    /**
 * A registry mapping server type names to ServerFactory objects.
 *
 * This allows new server types to be plugged in dynamically, without having to
 * hard code the list of all possible server types.
 */
struct ServerFactoryRegistry {
  ServerFactoryRegistry();
    }
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    struct Size
{
    double width;
    double height;
    }
    
      ASSERT_FLOAT_EQ(50, YGNodeLayoutGetLeft(root_child2));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child2));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child2));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child2));
    
      YGNodeFreeRecursive(root);
    
    
    {  YGConfigFree(config);
}

    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child2));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child2));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child2));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child2));
    
    void AbstractBtMessage::setPeerConnection(PeerConnection* peerConnection)
{
  peerConnection_ = peerConnection;
}
    
      /**
   * If pred == true, calls setReadCheckSocket(socket). Otherwise, calls
   * disableReadCheckSocket().
   */
  void setReadCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                            bool pred);
  /**
   * If pred == true, calls setWriteCheckSocket(socket). Otherwise, calls
   * disableWriteCheckSocket().
   */
  void setWriteCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                             bool pred);
    
      A2_LOG_ERROR(
      fmt('Failed to lookup %s in your KeyChain', fingerprint.c_str()));
  return false;
    
    #include 'a2functional.h'