
        
          std::map<uv_timer_t*, base::OnceClosure> tasks_;
    
    #include <string>
    
    template <>
struct Converter<in_app_purchase::Transaction> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const in_app_purchase::Transaction& val) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.SetHidden('simple', true);
    dict.Set('transactionIdentifier', val.transactionIdentifier);
    dict.Set('transactionDate', val.transactionDate);
    dict.Set('originalTransactionIdentifier',
             val.originalTransactionIdentifier);
    dict.Set('transactionState', val.transactionState);
    dict.Set('errorCode', val.errorCode);
    dict.Set('errorMessage', val.errorMessage);
    dict.Set('payment', val.payment);
    return dict.GetHandle();
  }
};
    
    #ifndef ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
#define ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
    
    void Event::SetSenderAndMessage(content::RenderFrameHost* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
      SavePageHandler(content::WebContents* web_contents,
                  const SavePageCallback& callback);
  ~SavePageHandler() override;
    
    StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
    
    {  char* signedStr = reinterpret_cast<char*>(str);
  memcpy(out.data(), signedStr, StringBufferSize);
#else
  uuid_unparse_upper(Value, out.data());
#endif
  // Pop off the null terminator.
  assert(out.back() == '\0' && 'did not null-terminate?!');
  out.pop_back();
}
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
    std::string Demangle::getNodeTreeAsString(NodePointer Root) {
  DemanglerPrinter Printer;
  printNode(Printer, Root, 0);
  return std::move(Printer).str();
}
    
    static const int base         = 36;
static const int tmin         = 1;
static const int tmax         = 26;
static const int skew         = 38;
static const int damp         = 700;
static const int initial_bias = 72;
static const uint32_t initial_n = 128;
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
      // Quit the whole app.
  static void Quit(content::RenderProcessHost* rph = NULL);
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
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
    
    
    {  for (AppWindow* window : windows) {
    if (window->NWCanClose())
      window->GetBaseWindow()->Close();
  }
}
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {} // namespace extensions
#endif

    
    
    {}  // namespace leveldb

    
    
    {
      } else {                                    // Multi-element batch
        WriteBatch b;
        const int num = rnd.Uniform(8);
        for (int i = 0; i < num; i++) {
          if (i == 0 || !rnd.OneIn(10)) {
            k = RandomKey(&rnd);
          } else {
            // Periodically re-use the same key from the previous iter, so
            // we have multiple entries in the write batch for the same key
          }
          if (rnd.OneIn(2)) {
            v = RandomString(&rnd, rnd.Uniform(10));
            b.Put(k, v);
          } else {
            b.Delete(k);
          }
        }
        ASSERT_OK(model.Write(WriteOptions(), &b));
        ASSERT_OK(db_->Write(WriteOptions(), &b));
      }
    
    namespace leveldb {
namespace log {
    }
    }
    
    void MemTable::Add(SequenceNumber s, ValueType type,
                   const Slice& key,
                   const Slice& value) {
  // Format of an entry is concatenation of:
  //  key_size     : varint32 of internal_key.size()
  //  key bytes    : char[internal_key.size()]
  //  value_size   : varint32 of value.size()
  //  value bytes  : char[value.size()]
  size_t key_size = key.size();
  size_t val_size = value.size();
  size_t internal_key_size = key_size + 8;
  const size_t encoded_len =
      VarintLength(internal_key_size) + internal_key_size +
      VarintLength(val_size) + val_size;
  char* buf = arena_.Allocate(encoded_len);
  char* p = EncodeVarint32(buf, internal_key_size);
  memcpy(p, key.data(), key_size);
  p += key_size;
  EncodeFixed64(p, (s << 8) | type);
  p += 8;
  p = EncodeVarint32(p, val_size);
  memcpy(p, value.data(), val_size);
  assert(p + val_size == buf + encoded_len);
  table_.Insert(buf);
}