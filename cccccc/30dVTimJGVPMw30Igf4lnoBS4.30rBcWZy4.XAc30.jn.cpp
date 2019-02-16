
        
          /*
   * Patch a branch to the correct target.
   *
   * It decodes the branch @jmp to decide whether it's an absolute branch or an
   * offset branch and patches it properly.
   */
  static void patchBranch(CodeAddress jmp, CodeAddress dest);
  static void patchAbsolute(CodeAddress jmp, CodeAddress dest);
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
      Object createObject() const;
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    IMPLEMENT_RESOURCE_ALLOCATION(PlainDirectory)