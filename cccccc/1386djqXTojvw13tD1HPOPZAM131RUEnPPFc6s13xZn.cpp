
        
          PointerTy get() const & {
    // Check for null.
    if (Nullable && RelativeOffset == 0)
      return nullptr;
    
    // The value is addressed relative to `this`.
    uintptr_t absolute = detail::applyRelativeOffset(this, RelativeOffset);
    return reinterpret_cast<PointerTy>(absolute);
  }
    
      constexpr ContextDescriptorFlags withVersion(uint8_t version) const {
    return ContextDescriptorFlags((Value & 0xFFFF00FFu) | (version << 8u));
  }
    
    
    {private:
  void addNode(SourceFileDepGraphNode *n) {
    n->setSequenceNumber(allNodes.size());
    assert(allNodes.size() < 2 ==
               (n->getKey().getKind() == NodeKind::sourceFileProvide) &&
           'First two and only first two nodes should be sourceFileProvide '
           'nodes.');
    allNodes.push_back(n);
  }
};
    
    
    {  /// Produces a contextual type involving archetypes within the context of
  /// the type.
  Contextual,
};
    
    class PrimarySpecificPaths {
public:
  /// The name of the main output file,
  /// that is, the .o file for this input (or a file specified by -o).
  /// If there is no such file, contains an empty string. If the output
  /// is to be written to stdout, contains '-'.
  std::string OutputFilename;
    }
    
    public:
  /// Does not take ownership of \p buffer. Does take ownership of (copy) a
  /// string.
  InputFile(StringRef name, bool isPrimary,
            llvm::MemoryBuffer *buffer = nullptr,
            StringRef outputFilename = StringRef())
      : Filename(
            convertBufferNameFromLLVM_getFileOrSTDIN_toSwiftConventions(name)),
        IsPrimary(isPrimary), Buffer(buffer), PSPs(PrimarySpecificPaths()) {
    assert(!name.empty());
  }
    
    /// Checked dynamic cast to a foreign class type.
///
/// \param object The object to cast, or nil.
/// \param targetType The type to which we are casting, which is known to be
/// a foreign class type.
///
/// \returns the object if the cast succeeds, or null otherwise.
SWIFT_RUNTIME_EXPORT
const void *
swift_dynamicCastForeignClass(const void *object,
                              const ForeignClassMetadata *targetType);
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
      // Delete all Added points.
  void Clear();
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
      // Clear the UNICHARMAP. All previous data is lost.
  void clear();
    
    /**----------------------------------------------------------------------------
          Public Function Prototypes
----------------------------------------------------------------------------**/
void InitIntegerFX();
    
      // If we manage the given dawg, decrement its count,
  // and possibly delete it if the count reaches zero.
  // If dawg is unknown to us, return false.
  bool FreeDawg(Dawg *dawg) {
    return dawgs_.Free(dawg);
  }
    
    
    {
    {        // No longer the first EQU.
        m_bNoPrevEqu = false;
    }
    else if (!m_bError)
    {
        DisplayNum();
    }
}
    
    
    {    return m_client->GetStringAsync(ratiosUri);
}

    
    
    {        return result;
    }
    
    uint64_t rattoUi64(_In_ PRAT prat, uint32_t radix, int32_t precision)
{
    PRAT pint = nullptr;
    }
    
        spHistoryItem->historyItemVector.spTokens = tokens;
    spHistoryItem->historyItemVector.spCommands = commands;
    
    
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

    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    /// Prefix used for the temp FS where carved files are stored
const std::string kCarvePathPrefix = 'osquery_carve_';
    
    fs::path getConfDirPathImpl() {
  char const* kEnvVarName = 'TEST_CONF_FILES_DIR';
  auto const value_opt = osquery::getEnvVar(kEnvVarName);
  EXPECT_TRUE(static_cast<bool>(value_opt))
      << 'Env var ' << boost::io::quoted(kEnvVarName) << ' was not found, '
      << ' looks like cxx_test argument 'env' is not set up.';
  return fs::path(value_opt.get());
}
    
    #include <boost/filesystem/path.hpp>
    
    ExpectedSuccess<DatabaseError> Database::putInt32(const std::string& domain,
                                                  const std::string& key,
                                                  const int32_t value) {
  std::string buffer = std::to_string(value);
  return putString(domain, key, buffer);
}
    
    
    {  rocksdb::Options options = getOptions();
  auto db_path = boost::filesystem::path(path_).make_preferred();
  auto destroy_status = rocksdb::DestroyDB(db_path.string(), options);
  if (!destroy_status.ok()) {
    return createError(DatabaseError::FailToDestroyDB, 'Fail to destroy db: ')
           << destroy_status.ToString();
  }
  return Success();
}
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
      /// The plugin may perform some tear down, release, not required.
  virtual void tearDown() {}