
        
        
    {  for (auto &rel : sym.Relations) {
    if (!rel.group.empty())
      return rel.group;
    if (rel.decl)
      return findGroupNameForDecl(rel.decl);
  }
  llvm_unreachable('did not find group name for reference');
}
    
      ArrayRef<MarkupASTNode *> getChildren() {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
    namespace swift {
    }
    
        return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
    #include 'base/logging.h'
#include 'base/memory/ptr_util.h'
#include 'chrome/browser/browser_process.h'
#include 'content/public/browser/browser_thread.h'
#include 'net/base/net_errors.h'
#include 'net/cert/caching_cert_verifier.h'
#include 'net/cert/cert_verify_proc.h'
#include 'net/cert/multi_threaded_cert_verifier.h'
    
    namespace nw {
    }
    
    namespace nwapi {
    }
    
      // Remote objects.
  static void AllocateId(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AllocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DeallocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CrashRenderer(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCrashDumpDir(const v8::FunctionCallbackInfo<v8::Value>& args);
#if defined(OS_MACOSX)
  static void InitMsgIDMap();
  static void GetNSStringWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetNSStringFWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
#endif
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    
    {  *y = CalculateMenuYPosition(&screen_rect, &menu_req, NULL, *y);
}
    
    MenuItem::~MenuItem() {
  Destroy();
}
    
    
    {    block_active_ = false;
    g_signal_connect(menu_item_, 'activate',
                     G_CALLBACK(OnClickThunk), this);
  }
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list) {
  feature_list->clear();
  std::string db_content(db);
  db_content.erase(
      std::remove_if(db_content.begin(), db_content.end(), isspace),
      db_content.end());
    }
    
    #include 'src/compiler/config.h'
#include 'src/compiler/generator_helpers.h'
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
     */
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}