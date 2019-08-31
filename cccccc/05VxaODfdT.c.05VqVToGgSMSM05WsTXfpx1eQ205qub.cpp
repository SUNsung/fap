
        
          GDBusProxy* registrar_proxy_;
    
    // This set of templates invokes a base::Callback by converting the Arguments
// into native types. It relies on the function_template.h to provide helper
// templates.
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*()>& callback) {
  return callback.Run();
}
    
      // The window is hung. Scan for every window to find a visible one.
  bool visible_window = false;
  ::EnumThreadWindows(thread_id, &BrowserWindowEnumeration,
                      reinterpret_cast<LPARAM>(&visible_window));
    
     private:
#if defined(OS_MACOSX)
  void OverrideNSWindowContentView(InspectableWebContents* iwc);
#endif
    
    void BrowserWindow::UpdateDraggableRegions(
    const std::vector<mojom::DraggableRegionPtr>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
    template <>
struct Converter<electron::api::DesktopCapturer::Source> {
  static v8::Local<v8::Value> ToV8(
      v8::Isolate* isolate,
      const electron::api::DesktopCapturer::Source& source) {
    mate::Dictionary dict(isolate, v8::Object::New(isolate));
    content::DesktopMediaID id = source.media_list_source.id;
    dict.Set('name', base::UTF16ToUTF8(source.media_list_source.name));
    dict.Set('id', id.ToString());
    dict.Set('thumbnail',
             electron::api::NativeImage::Create(
                 isolate, gfx::Image(source.media_list_source.thumbnail)));
    dict.Set('display_id', source.display_id);
    if (source.fetch_icon) {
      dict.Set(
          'appIcon',
          electron::api::NativeImage::Create(
              isolate, gfx::Image(GetWindowIcon(source.media_list_source.id))));
    }
    return ConvertToV8(isolate, dict);
  }
};
    
      void visitUnconditionalCheckedCastAddrInst(UnconditionalCheckedCastAddrInst *UCCAI) {
    SGM.useConformancesFromType(UCCAI->getSourceType());
    SGM.useConformancesFromType(UCCAI->getTargetType());
    SGM.useConformancesFromObjectiveCType(UCCAI->getSourceType());
    SGM.useConformancesFromObjectiveCType(UCCAI->getTargetType());
  }
    
    
    {  SILDeclRef Member = MI->getMember();
  return M.lookUpFunctionInVTable(CD, Member);
}
    
        if (auto superclass = exis->getSuperclassConstraint()) {
      // If there is a superclass constraint, we mangle it specially.
      auto result = Dem.createNode(Node::Kind::ProtocolListWithClass);
      auto superclassNode = _swift_buildDemanglingForMetadata(superclass, Dem);
    }
    
      /// Gets or creates the MethodInfo for a vtable or witness table method.
  /// \p decl The method declaration. In case of a vtable method this is always
  ///         the most overridden method.
  MethodInfo *getMethodInfo(AbstractFunctionDecl *decl, bool isWitnessMethod) {
    MethodInfo *&entry = MethodInfos[decl];
    if (entry == nullptr) {
      entry = new (MethodInfoAllocator.Allocate()) MethodInfo(isWitnessMethod);
    }
    assert(entry->isWitnessMethod == isWitnessMethod);
    return entry;
  }
    
    KNOWN_STDLIB_TYPE_DECL(UInt,   NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt64, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt32, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt16, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt8,  NominalTypeDecl, 0)
    
      const ReferenceCaptureMetadataSource *
  createReferenceCapture(unsigned Index) {
    return ReferenceCaptureMetadataSource::create(*this, Index);
  }
    
      const_iterator begin() const {
    auto Begin = getFieldRecordBuffer();
    auto End = Begin + NumFields;
    return const_iterator { Begin, End };
  }
    
      /// This class has the exception attribute.
  Exception            = 0x00020,
    
    #include <cstdint>
#include <cassert>
#include '../../../stdlib/public/SwiftShims/KeyPath.h'
    
      /// Initialize the actual call arguments.
  void initializeCallArguments(ArrayRef<Identifier> argLabels,
                               ArrayRef<SourceLoc> argLabelLocs,
                               bool hasTrailingClosure) {
    if (!argLabels.empty()) {
      std::uninitialized_copy(argLabels.begin(), argLabels.end(),
                              this->template getTrailingObjects<Identifier>());
    }
    }
    
    
    {} // end namespace swift
    
    #include <string>
    
      /// The path to which we should emit a serialized module.
  /// It is valid whenever there are any inputs.
  ///
  /// This binary format is used to describe the interface of a module when
  /// imported by client source code. The swiftmodule format is described in
  /// docs/Serialization.rst.
  ///
  /// \sa swift::serialize
  std::string ModuleOutputPath;
    
        Int64 mapping[MAX_CODE_LEN + 1];
    for (int i = 0; i < MAX_CODE_LEN + 1; ++i) 
        mapping[i] = -1;
    for (int i = _minCodeLength; i <= _maxCodeLength; ++i)
        mapping[i] = offset[i];
    
    
    
    #ifndef IMFGENERICINPUTFILE_H_
#define IMFGENERICINPUTFILE_H_
    
    const int& 
Header::chunkCount() const
{
    return typedAttribute <IntAttribute> ('chunkCount').value();
}
    
    #include 'ImfInputPart.h'
#include 'ImfNamespace.h'
    
    #ifndef IMFINPUTSTREAMMUTEX_H_
#define IMFINPUTSTREAMMUTEX_H_
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    /// 1 discovery query which will always pass
JSON getPackWithValidDiscovery() {
  auto doc = getExamplePacksConfig();
  return JSON::newFromValue(doc.doc()['packs']['valid_discovery_pack']);
}
    
    #include <osquery/utils/json/json.h>
    
      ExpectedSuccess<DatabaseError> putInt32(const std::string& domain,
                                          const std::string& key,
                                          const int32_t value) override;
  ExpectedSuccess<DatabaseError> putString(const std::string& domain,
                                           const std::string& key,
                                           const std::string& value) override;
    
    #if !defined(ROCKSDB_LITE) && !defined(OS_WIN)
    
      // atomically apply a set of updates
  {
    WriteBatch batch;
    batch.Delete('key1');
    batch.Put('key2', value);
    s = db->Write(WriteOptions(), &batch);
  }
    
      ~ManagedSnapshot();
    
      // Number of open files that can be used by the DB.  You may need to
  // increase this if your database has a large working set (budget
  // one open file per 2MB of working set).
  //
  // Default: 1000
  int max_open_files;