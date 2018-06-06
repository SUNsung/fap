
        
        
    {  virtual SILDebuggerClient *getAsSILDebuggerClient() = 0;
private:
  virtual void anchor();
};
    
    /// The basic structure of a doc comment attached to a Swift
/// declaration.
struct CommentParts {
  Optional<const Paragraph *> Brief;
  ArrayRef<const MarkupASTNode *> BodyNodes;
  ArrayRef<ParamField *> ParamFields;
  Optional<const ReturnsField *> ReturnsField;
  Optional<const ThrowsField *> ThrowsField;
  llvm::SmallSetVector<StringRef, 8> Tags;
  Optional<const LocalizationKeyField *> LocalizationKeyField;
    }
    
    #include 'swift/Basic/SourceLoc.h'
#include 'llvm/ADT/Optional.h'
#include 'llvm/ADT/StringMap.h'
#include 'llvm/Support/SourceMgr.h'
#include <map>
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
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
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.crashBrowser', UNKNOWN)
};
    
    
    {      data.data.reset(new std::string(encoded_image_base64));
      LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ')';
      return true;
    }
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    
    {} // namespace facebook

    
      RefPtr(T* ptr, ConstructionMode mode) :
    m_ptr(ptr)
  {
    FBASSERTMSGF(ptr, 'Got null pointer in %s construction mode', mode == ConstructionMode::Adopted ? 'adopted' : 'external');
    ptr->ref();
    if (mode == ConstructionMode::Adopted) {
      FBASSERT(ptr->hasOnlyOneRef());
    }
  }
    
    #include 'CoreClasses.h'
    
    #include <fb/visibility.h>