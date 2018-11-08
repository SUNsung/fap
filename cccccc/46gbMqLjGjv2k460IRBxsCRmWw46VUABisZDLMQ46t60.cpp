
        
        Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
      // Set the '_endian' platform condition.
  switch (Target.getArch()) {
  case llvm::Triple::ArchType::arm:
  case llvm::Triple::ArchType::thumb:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::aarch64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::ppc64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'big');
    break;
  case llvm::Triple::ArchType::ppc64le:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::x86:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::x86_64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::systemz:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'big');
    break;
  default:
    llvm_unreachable('undefined architecture endianness');
  }
    
    unsigned swift::measureNewline(const char *BufferPtr, const char *BufferEnd) {
  if (BufferPtr == BufferEnd)
    return 0;
    }
    
    TaskQueue::~TaskQueue() = default;
    
    
    {
    {}}
    
    int64_t VMTOC::allocTOC(int64_t target) {
  folly::MSLGuard g{s_TOC};
  HPHP::Address addr = m_tocvector->frontier();
  m_tocvector->qword(target);
  return addr - (m_tocvector->base() + INT16_MAX + 1);
}
    
          XS_form_t xs_formater {{
                            rc,
                            static_cast<uint32_t>(sh >> 5),
                            xop,
                            static_cast<uint32_t>(sh & 0x1F),
                            static_cast<uint32_t>(ra),
                            static_cast<uint32_t>(rt),
                            op
                          }};
    
    inline APCLocalArray::APCLocalArray(const APCArray* source)
  : ArrayData(kApcKind)
  , m_arr(source)
{
  m_size = m_arr->size();
  source->reference();
  tl_heap->addApcArray(this);
  memset(localCache(), static_cast<data_type_t>(KindOfUninit),
         m_size * sizeof(TypedValue));
  assertx(hasExactlyOneRef());
}
    
    
    {  static void
  StringInsert(std::vector<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.push_back(value);
  }
  static void
  StringInsert(boost::container::flat_set<std::string>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string, stdltistr>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.insert(value);
  }
  static void StringInsert(std::map<std::string, std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(std::map<std::string, std::string,
                           stdltistr> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(hphp_string_imap<std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                     const std::string& iniStr,
                                     std::string& with_includes);
};
    
      /**
   * Dump detailed information to return string.
   */
  virtual String debuggerDump() {
    return String();
  }
    
    #ifndef incl_HPHP_CPP_BASE_EXCEPTIONS_H_
#define incl_HPHP_CPP_BASE_EXCEPTIONS_H_
    
    inline void ExecutionContext::setTimeZone(const String& timezone) {
  m_timezone = timezone;
}
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    TEST_F(PacksTests, test_discovery_zero_state) {
  Pack pack('discovery_pack', getPackWithDiscovery().doc());
  auto stats = pack.getStats();
  EXPECT_EQ(stats.total, 0U);
  EXPECT_EQ(stats.hits, 0U);
  EXPECT_EQ(stats.misses, 0U);
}
    
    
    {  WriteLock lock(scratch_mutex_);
  scratch_ = (char*)malloc(kINotifyBufferSize);
  if (scratch_ == nullptr) {
    return Status(1, 'Could not allocate scratch space');
  }
  return Status(0, 'OK');
}