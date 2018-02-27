
        
        namespace mate {
class Arguments;
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomQuotaPermissionContext);
};
    
    
    {}  // namespace atom

    
    class HttpProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  explicit HttpProtocolHandler(const std::string&);
  virtual ~HttpProtocolHandler();
    }
    
    #endif  // ATOM_BROWSER_RELAUNCHER_H_

    
    
    {  UpdateCache();
  process->Send(new AtomMsg_UpdatePreferences(cached_entries_));
}
    
    #ifndef ATOM_BROWSER_UI_TRAY_ICON_GTK_H_
#define ATOM_BROWSER_UI_TRAY_ICON_GTK_H_
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
        base::FilePath shortcutPath(path);
    result->AppendBoolean(base::win::CreateOrUpdateShortcutLink(shortcutPath, props, 
      base::PathExists(shortcutPath) ? base::win::SHORTCUT_UPDATE_EXISTING : base::win::SHORTCUT_CREATE_ALWAYS));
#else
    result->AppendBoolean(false);
#endif
    return;
  } else if (method == 'GetPackage') {
    result->AppendString(shell->GetPackage()->package_string());
    return;
  } else if (method == 'SetCrashDumpDir') {
    std::string path;
    arguments.GetString(0, &path);
    //FIXME: result->AppendBoolean(SetCrashDumpPath(path.c_str()));
    return;
  } else if (method == 'RegisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    bool success = GlobalShortcutListener::GetInstance()->RegisterAccelerator(
                       shortcut->GetAccelerator(), shortcut);
    if (!success)
      shortcut->OnFailed('Register global desktop keyboard shortcut failed.');
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #ifndef CONTENT_SHELL_PATHS_MAC_H_
#define CONTENT_SHELL_PATHS_MAC_H_
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    #define V8_USE_UNSAFE_HANDLES
    
    #endif  // CONTENT_NW_SRC_API_DISPATCHER_H_
    
      if (type == 'App' && method == 'AddOriginAccessWhitelistEntry') {
    std::string sourceOrigin        = *v8::String::Utf8Value(args[2]);
    std::string destinationProtocol = *v8::String::Utf8Value(args[3]);
    std::string destinationHost     = *v8::String::Utf8Value(args[4]);
    bool allowDestinationSubdomains = args[5]->ToBoolean()->Value();
    }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    
    {    } else {
      enable_shortcut = false;
    }
    
    // This flag controls the style of death tests.  Valid values are 'threadsafe',
// meaning that the death test child process will re-execute the test binary
// from the start, running only a single death test, or 'fast',
// meaning that the child process will execute the test logic immediately
// after forking.
GTEST_DECLARE_string_(death_test_style);
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};
    
     private:
  std::string file_;
  int line_;
  int index_;
  int write_fd_;
    
      // Returns the fraction bits of this number.
  Bits fraction_bits() const { return kFractionBitMask & u_.bits_; }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33>
class ValueArray33 {
 public:
  ValueArray33(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32,
      T33 v33) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
      v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
      v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
      v33_(v33) {}
    }
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    ]]
    
    // Type utilities needed for implementing typed and type-parameterized
// tests.  This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently we support at most 50 types in a list, and at most 50
// type-parameterized tests in one type-parameterized test case.
// Please contact googletestframework@googlegroups.com if you need
// more.
    
    int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
    }
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects'', nullptr);
        return 0;
    }
#endif
    
    
    
    
    
    
    
    
    
    	// Make a small box.
	b2AABB aabb;
	b2Vec2 d;
	d.Set(0.001f, 0.001f);
	aabb.lowerBound = p - d;
	aabb.upperBound = p + d;
    
    			b2EdgeShape shape;
    
      virtual grpc::Status SayManyHellos(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<ManyHellosRequest> *request_msg,
      grpc::ServerWriter<flatbuffers::grpc::Message<HelloReply>> *writer)
      override {
    // The streaming usage below is simply a combination of standard gRPC
    // streaming with the FlatBuffers usage shown above.
    const ManyHellosRequest *request = request_msg->GetRoot();
    const std::string &name = request->name()->str();
    int num_greetings = request->num_greetings();
    }
    
    class LogMessageVoidify {
 public:
  LogMessageVoidify() {}
  // This has to be an operator with a precedence lower than << but
  // higher than ?:
  void operator&(std::ostream&) {}
};
    
        if (status.ok()) {
      auto resp = response.GetRoot()->id();
      std::cout << 'RPC response: ' << resp->str() << std::endl;
    } else {
      std::cout << 'RPC failed' << std::endl;
    }
  }
  {
    grpc::ClientContext context;
    fbb.Clear();
    auto stat_offset = CreateStat(fbb, fbb.CreateString('Fred'));
    fbb.Finish(stat_offset);
    auto request = fbb.ReleaseMessage<Stat>();