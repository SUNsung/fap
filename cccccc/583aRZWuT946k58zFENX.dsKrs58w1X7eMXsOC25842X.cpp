
        
          // Take the ClassHierarchyAnalysis into account.
  // If a given class has no subclasses and
  // - private
  // - or internal and it is a WMO compilation
  // then this class can be considered final for the purpose
  // of devirtualization.
  if (CHA) {
    if (!CHA->hasKnownDirectSubclasses(CD)) {
      switch (CD->getEffectiveAccess()) {
      case AccessLevel::Open:
        return false;
      case AccessLevel::Public:
      case AccessLevel::Internal:
        if (!M.isWholeModule())
          return false;
        break;
      case AccessLevel::FilePrivate:
      case AccessLevel::Private:
        break;
      }
    }
    }
    
    class ClassDecl;
enum IsSerialized_t : unsigned char;
class SILFunction;
class SILModule;
    
    
    {    return Impl1 == Impl2;
  }
    
    KNOWN_STDLIB_TYPE_DECL(AnyKeyPath, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(PartialKeyPath, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(WritableKeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(ReferenceWritableKeyPath, NominalTypeDecl, 2)
    
    #ifndef SWIFT_REFLECTION_METADATASOURCEBUILDER_H
#define SWIFT_REFLECTION_METADATASOURCEBUILDER_H
    
      const Derived &asDerived() const {
    return *static_cast<const Derived *>(this);
  }
    
    
    {} // end namespace swift
    
    #endif // SWIFT_BASIC_PRIMARYSPECIFICPATHS_H

    
    namespace swift {
struct SupplementaryOutputPaths {
  /// The path to which we should emit an Objective-C header for the module.
  ///
  /// Currently only makes sense when the compiler has whole module knowledge.
  /// The modes for which it makes sense incuide both WMO and the 'merge
  /// modules' job that happens after the normal compilation jobs. That's where
  /// the header is emitted in single-file mode, since it needs whole-module
  /// information.
  ///
  /// \sa swift::printAsObjC
  std::string ObjCHeaderOutputPath;
    }
    }
    
    void Config::files(std::function<void(const std::string& category,
                                      const std::vector<std::string>& files)>
                       predicate) const {
  RecursiveLock lock(config_files_mutex_);
  for (const auto& it : files_) {
    for (const auto& category : it.second) {
      predicate(category.first, category.second);
    }
  }
}
    
    boost::filesystem::path const& getTestConfigDirectory();