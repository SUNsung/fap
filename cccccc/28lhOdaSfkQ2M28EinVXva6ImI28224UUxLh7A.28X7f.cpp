
        
        // static
void CallbackHolderBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<CallbackHolderBase>& data) {
  data.GetParameter()->v8_ref_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    Dictionary Dictionary::CreateEmpty(v8::Isolate* isolate) {
  return Dictionary(isolate, v8::Object::New(isolate));
}
    
    
    {}  // namespace mate

    
    // This function is a convenient way to create a handle from a raw pointer
// without having to write out the type of the object explicitly.
template <typename T>
mate::Handle<T> CreateHandle(v8::Isolate* isolate, T* object) {
  return mate::Handle<T>(object->GetWrapper(), object);
}
    
    // Like Dictionary, but stores object in persistent handle so you can keep it
// safely on heap.
class PersistentDictionary : public Dictionary {
 public:
  PersistentDictionary();
  PersistentDictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
  PersistentDictionary(const PersistentDictionary& other);
  ~PersistentDictionary() override;
    }
    
      // Temporary directory to hold the socket.
  base::ScopedTempDir socket_dir_;
    
      std::set<std::unique_ptr<SocketReader>> readers_;
    
    using content::BrowserThread;
    
      // If we don't have any window then quitAndInstall immediately.
  if (WindowList::IsEmpty()) {
    auto_updater::AutoUpdater::QuitAndInstall();
    return;
  }
    
    // Constants for packing an encoded CheckedCastKind and
// CastConsumptionKind together.
enum {
  // Must be large enough to store all the CheckedCastKindEncodings
  SIL_CAST_CONSUMPTION_BIT_OFFSET = 4,
  SIL_CHECKED_CAST_MASK =
    (1 << SIL_CAST_CONSUMPTION_BIT_OFFSET) - 1
};
    
    KNOWN_STDLIB_TYPE_DECL(Encoder, ProtocolDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Decoder, ProtocolDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyedEncodingContainer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyedDecodingContainer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(RangeReplaceableCollection, ProtocolDecl, 1)
    
    #if defined(_WIN32)
template <>
const char *
_swift_stdlib_strtoX_clocale_impl<float>(const char *str, float *result) {
  if (swift_stringIsSignalingNaN(str)) {
    *result = std::numeric_limits<float>::signaling_NaN();
    return str + std::strlen(str);
  }
    }
    
    /// An ASTVisitor for generating SIL from top-level declarations in a module.
class LLVM_LIBRARY_VISIBILITY SILGenModule : public ASTVisitor<SILGenModule> {
public:
  /// The Module being constructed.
  SILModule &M;
  
  /// The type converter for the module.
  TypeConverter &Types;
  
  /// The Swift module we are visiting.
  ModuleDecl *SwiftModule;
  
  /// TopLevelSGF - The SILGenFunction used to visit top-level code, or null if
  /// the current source file is not a script source file.
  SILGenFunction /*nullable*/ *TopLevelSGF;
    }
    
    static bool needToRelocate(SectionRef S) {
  if (!getSectionAddress(S))
    return false;
    }