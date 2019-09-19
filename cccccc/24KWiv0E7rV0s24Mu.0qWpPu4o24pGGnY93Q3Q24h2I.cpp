
        
          // TODO(amauryfa): Understand why the Python implementation differs from
  // this one, ask users to use another API and deprecate these functions.
  { 'AddFileDescriptor', AddFileDescriptor, METH_O,
    'No-op. Add() must have been called before.' },
  { 'AddDescriptor', AddDescriptor, METH_O,
    'No-op. Add() must have been called before.' },
  { 'AddEnumDescriptor', AddEnumDescriptor, METH_O,
    'No-op. Add() must have been called before.' },
  { 'AddExtensionDescriptor', AddExtensionDescriptor, METH_O,
    'No-op. Add() must have been called before.' },
  { 'AddServiceDescriptor', AddServiceDescriptor, METH_O,
    'No-op. Add() must have been called before.' },
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    string Status::ToString() const {
  if (error_code_ == error::OK) {
    return 'OK';
  } else {
    if (error_message_.empty()) {
      return error::CodeEnumToString(error_code_);
    } else {
      return error::CodeEnumToString(error_code_) + ':' +
          error_message_;
    }
  }
}
    
    class CopyNoAssign {
 public:
  explicit CopyNoAssign(int value) : foo(value) {}
  CopyNoAssign(const CopyNoAssign& other) : foo(other.foo) {}
  int foo;
 private:
  const CopyNoAssign& operator=(const CopyNoAssign&);
};
    
    TEST(TemplateUtilTest, TestSize) {
  EXPECT_GT(sizeof(GOOGLE_NAMESPACE::big_), sizeof(GOOGLE_NAMESPACE::small_));
}
    
    int main(int argc, char *argv[]) {
  if (argc % 2 == 0 || argc == 1) {
    std::cerr << 'Usage: [input_files] [output_file_names] where ' <<
        'input_files are one to one mapping to output_file_names.' <<
        std::endl;
    return 1;
  }
    }
    
    class GoGoProtoGenerator : public CodeGenerator {
 public:
  virtual bool GenerateAll(const std::vector<const FileDescriptor*>& files,
                           const string& parameter,
                           GeneratorContext* context,
                           string* error) const {
    for (int i = 0; i < files.size(); i++) {
      for (auto file : files) {
        bool can_generate =
            (new_pool_.FindFileByName(file->name()) == nullptr);
        for (int j = 0; j < file->dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->public_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->public_dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->weak_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->weak_dependency(j)->name()) != nullptr);
        }
        if (can_generate) {
          Generate(file, parameter, context, error);
          break;
        }
      }
    }
    }
    }
    
    
    {}  // namespace
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
      WebView* view = frame->view();
  if (!view)
    return NULL;  // can happen during closing.
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
      // Map point from document to screen.
  gfx::Point screen_point(x, y);
    
    
    {  base::ListValue args;
  dispatcher_host()->SendEvent(this, 'click', args);
}
    
    bool MenuItem::CanHandleAccelerators() const {
  return enable_shortcut_ && is_enabled_;
}
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.getListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardGetListSyncFunction);
};
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }