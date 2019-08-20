
        
                    // Initialize the necessary startup info struct        
            STARTUPINFOEX startupInfo{};
            if (S_OK == InitializeStartupInfoAttachedToPseudoConsole(&startupInfo, hPC))
            {
                // Launch ping to emit some text back via the pipe
                PROCESS_INFORMATION piClient{};
                hr = CreateProcess(
                    NULL,                           // No module name - use Command Line
                    szCommand,                      // Command Line
                    NULL,                           // Process handle not inheritable
                    NULL,                           // Thread handle not inheritable
                    FALSE,                          // Inherit handles
                    EXTENDED_STARTUPINFO_PRESENT,   // Creation flags
                    NULL,                           // Use parent's environment block
                    NULL,                           // Use parent's starting directory 
                    &startupInfo.StartupInfo,       // Pointer to STARTUPINFO
                    &piClient)                      // Pointer to PROCESS_INFORMATION
                    ? S_OK
                    : GetLastError();
    }
    
        if (!isa<ClangModuleUnit>(decl->getModuleScopeContext()))
      return;
    
      /// Removes entries from the vtable.
  /// \p predicate Returns true if the passed entry should be removed.
  template <typename Predicate> void removeEntries_if(Predicate predicate) {
    Entry *end = std::remove_if(Entries, Entries + NumEntries,
                                [&](Entry &entry) -> bool {
      if (predicate(entry)) {
        entry.Implementation->decrementRefCount();
        removeFromVTableCache(entry);
        return true;
      }
      return false;
    });
    NumEntries = end - Entries;
  }
                    
  /// Verify that the vtable is well-formed for the given class.
  void verify(const SILModule &M) const;
    
    KNOWN_STDLIB_TYPE_DECL(Int,   NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int64, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int32, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int16, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int8,  NominalTypeDecl, 0)
    
        auto LocalStartAddress = reinterpret_cast<uint64_t>(Buf.get());
    auto RemoteStartAddress =
        static_cast<uint64_t>(ImageStart.getAddressData());
    
    bool TypeRefBuilder::getFieldTypeRefs(
    const TypeRef *TR,
    const std::pair<const FieldDescriptor *, const ReflectionInfo *> &FD,
    std::vector<FieldTypeInfo> &Fields) {
  if (FD.first == nullptr)
    return false;
    }
    
    static int doDumpReflectionSections(ArrayRef<std::string> BinaryFilenames,
                                    StringRef Arch, ActionType Action,
                                    std::ostream &OS) {
  // Note: binaryOrError and objectOrError own the memory for our ObjectFile;
  // once they go out of scope, we can no longer do anything.
  std::vector<OwningBinary<Binary>> BinaryOwners;
  std::vector<std::unique_ptr<ObjectFile>> ObjectOwners;
  std::vector<const ObjectFile *> ObjectFiles;
    }
    
    
    {
    {} // end namespace Mangle
} // end namespace swift