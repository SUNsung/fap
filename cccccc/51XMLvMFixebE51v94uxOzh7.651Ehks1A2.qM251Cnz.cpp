
        
        void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    EnumGenerator::~EnumGenerator() {
}
    
    
    {
    {  printer->Outdent();
  printer->Print('}\n');
  printer->Print('#endregion\n\n');
}
    
    void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, value);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(value->DebugString())));
}
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    string ClassNameResolver::GetClassName(const ServiceDescriptor* descriptor,
                                       bool immutable) {
  return GetClassFullName(ClassNameWithoutPackage(descriptor, immutable),
                          descriptor->file(), immutable,
                          MultipleJavaFiles(descriptor->file(), immutable));
}
    
    /*
 * Call a function that produces a return value for each element of
 * `inputs' in parallel, and collect the results.
 *
 * Requires: the type returned from the function call must be
 * DefaultConstructible, and either MoveAssignable or Assignable.
 *
 * If `func' throws an exception, the results of the output vector
 * will contain some default-constructed values.
 */
template<class Func, class Items>
auto map(Items&& inputs, Func func) -> std::vector<decltype(func(inputs[0]))> {
  std::vector<decltype(func(inputs[0]))> retVec(inputs.size());
  auto const retMem = &retVec[0];
    }
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
      /**
   * Dump detailed information to return string.
   */
  virtual String debuggerDump() {
    return String();
  }
    
    
    {}

    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
      explicit OutputFile(const String& filename);
  virtual ~OutputFile();
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
    
    {}

    
    void Schedule::add(PackRef pack) {
  remove(pack->getName(), pack->getSource());
  packs_.push_back(std::move(pack));
}
    
    
    {REGISTER_INTERNAL(DecoratorsConfigParserPlugin,
                  'config_parser',
                  kDecorationsName.c_str());
}

    
    /**
 * @brief A simple ConfigParserPlugin for an 'events' dictionary key.
 */
class EventsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {'events'};
  }
    }
    
    
    {REGISTER_INTERNAL(FeatureVectorsConfigParserPlugin,
                  'config_parser',
                  'feature_vectors');
} // namespace osquery

    
    
    {} // namespace osquery

    
    DECLARE_bool(disable_database);
    
    /// Config retrieval TLS endpoint (path) using TLS hostname.
CLI_FLAG(string,
         config_tls_endpoint,
         '',
         'TLS/HTTPS endpoint for config retrieval');
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    #include <vector>
#include <memory>
    
    #include <memory>
    
      virtual void executeTask() = 0;
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    #include 'common.h'
    
      FunctionRef<int(int)> fcref = clambda;
  EXPECT_EQ(1041, fcref(5));
  EXPECT_EQ(1047, fcref(6));
  EXPECT_EQ(1054, fcref(7));
    
    #include <folly/GLog.h>
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
      /**
   * Returns a double in [min, max), if min == max, returns 0.
   */
  static double randDouble(double min, double max) {
    return randDouble(min, max, ThreadLocalPRNG());
  }
    
    //////////////////////////////////////////////////////////////////////
    
      // We don't use std::chrono_literals suffixes here since older
  // gcc versions silently truncate the literals to 32-bits.
  ts = to<struct timespec>(nanoseconds(987654321012LL));
  EXPECT_EQ(987, ts.tv_sec);
  EXPECT_EQ(654321012, ts.tv_nsec);
    
    #endif // FOLLY_HAVE_LIBZ

    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * It has the same thread-safety guarantees as shared_ptr: it is safe
 * to concurrently call get(), but reset()s must be synchronized with
 * reads and other resets().
 *
 * @author Giuseppe Ottaviano <ott@fb.com>
 */
template <class T, size_t kNumSlots = 64>
class CoreCachedSharedPtr {
 public:
  explicit CoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
    template <template <typename> class Atom = std::atomic>
struct counted_ptr_base {
 protected:
  static intrusive_shared_count<Atom>* getRef(void* pt) {
    char* p = (char*)pt;
    p -= sizeof(intrusive_shared_count<Atom>);
    return (intrusive_shared_count<Atom>*)p;
  }
};