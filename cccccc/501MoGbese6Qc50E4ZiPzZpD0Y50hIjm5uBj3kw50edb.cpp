
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    template <typename T>
class ArgMinOpModel : public ArgBaseOpModel<T> {
 public:
  ArgMinOpModel(std::initializer_list<int> input_shape, TensorType input_type,
                TensorType output_type, TensorType index_output_type)
      : ArgBaseOpModel<T>(input_shape, input_type, output_type,
                          index_output_type) {
    ArgBaseOpModel<T>::SetBuiltinOp(
        BuiltinOperator_ARG_MIN, BuiltinOptions_ArgMinOptions,
        CreateArgMinOptions(ArgBaseOpModel<T>::builder_, index_output_type)
            .Union());
    ArgBaseOpModel<T>::BuildInterpreter({input_shape, {1, 1, 1, 1}});
  }
};
    
    #include 'tensorflow/core/lib/core/notification.h'
#include 'tensorflow/core/platform/test.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      void set_length(int d, int64 x) {
    DCHECK_GE(d, 0);
    DCHECK_LT(d, dims());
    lengths_[d] = x;
  }
    
    
    {}  // namespace atom
    
    #endif  // CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_

    
    #ifndef CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
    
    // filenames
extern const base::FilePath::CharType kCacheDirname[];
extern const base::FilePath::CharType kChannelIDFilename[];
extern const base::FilePath::CharType kCookieFilename[];
extern const base::FilePath::CharType kCRLSetFilename[];
extern const base::FilePath::CharType kCustomDictionaryFileName[];
extern const base::FilePath::CharType kExtensionActivityLogFilename[];
extern const base::FilePath::CharType kExtensionsCookieFilename[];
extern const base::FilePath::CharType kFirstRunSentinel[];
extern const base::FilePath::CharType kGCMStoreDirname[];
extern const base::FilePath::CharType kLocalStateFilename[];
extern const base::FilePath::CharType kLocalStorePoolName[];
extern const base::FilePath::CharType kMediaCacheDirname[];
extern const base::FilePath::CharType kNetworkPersistentStateFilename[];
extern const base::FilePath::CharType kOfflinePageArchviesDirname[];
extern const base::FilePath::CharType kOfflinePageMetadataDirname[];
extern const base::FilePath::CharType kPreferencesFilename[];
extern const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[];
extern const base::FilePath::CharType kReadmeFilename[];
extern const base::FilePath::CharType kResetPromptMementoFilename[];
extern const base::FilePath::CharType kSafeBrowsingBaseFilename[];
extern const base::FilePath::CharType kSecurePreferencesFilename[];
extern const base::FilePath::CharType kServiceStateFileName[];
extern const base::FilePath::CharType kSingletonCookieFilename[];
extern const base::FilePath::CharType kSingletonLockFilename[];
extern const base::FilePath::CharType kSingletonSocketFilename[];
extern const base::FilePath::CharType kSupervisedUserSettingsFilename[];
extern const base::FilePath::CharType kThemePackFilename[];
extern const base::FilePath::CharType kThemePackMaterialDesignFilename[];
extern const base::FilePath::CharType kWebAppDirname[];
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    // Get render process host.
RenderProcessHost* GetRenderProcessHost() {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      break;
    }
  }
    }
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
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
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                       views::MENU_ANCHOR_TOPRIGHT,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    void MenuItem::SetLabel(const std::string& label) {
  is_modified_ = true;
  label_ = base::UTF8ToUTF16(label);
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
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethodSync(render_frame_host(), id, type, method, *arguments, response);
  return true;
}
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
          case kDeletedFile:
        if (GetLevel(&input, &level) &&
            GetVarint64(&input, &number)) {
          deleted_files_.insert(std::make_pair(level, number));
        } else {
          msg = 'deleted file';
        }
        break;
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
      // Choose a location for the test database if none given with --db=<path>
  if (FLAGS_db == NULL) {
      leveldb::Env::Default()->GetTestDirectory(&default_db_path);
      default_db_path += '/dbbench';
      FLAGS_db = default_db_path.c_str();
  }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
      virtual int ExtraRuntimeHasBitsNeeded(void) const;
  virtual void SetExtraRuntimeHasBitsBase(int index_base);
    
    class VersionEditTest { };
    
      void StartBlock(uint64_t block_offset);
  void AddKey(const Slice& key);
  Slice Finish();
    
    TEST(CRC, Mask) {
  uint32_t crc = Value('foo', 3);
  ASSERT_NE(crc, Mask(crc));
  ASSERT_NE(crc, Mask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Unmask(Mask(Mask(crc)))));
}
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    struct Options;
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  std::string key       = *v8::String::Utf8Value(args[0]->ToString());
  std::string value     = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
    
    {}  //namespace rocksdb
    
    #endif  // JAVA_ROCKSJNI_COMPARATORJNICALLBACK_H_
