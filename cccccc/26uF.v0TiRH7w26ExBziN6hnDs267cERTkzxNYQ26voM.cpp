
        
        	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
    namespace php { struct Unit; struct Program; }
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    
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
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
    
    {  auto glob = HHVM_FN(glob)(String(path_str, path_len, CopyString));
  if (!glob.isArray()) {
    return nullptr;
  }
  return req::make<ArrayDirectory>(glob.toArray());
}
    
    #endif

    
    U_NAMESPACE_BEGIN
    
        /**
     * Implements {@link Transliterator#handleTransliterate}.
     * @param text          the buffer holding transliterated and
     *                      untransliterated text
     * @param offset        the start and limit of the text, the position
     *                      of the cursor, and the start and limit of transliteration.
     * @param incremental   if true, assume more text may be coming after
     *                      pos.contextLimit. Otherwise, assume the text is complete.
     */
    virtual void handleTransliterate(Replaceable& text, UTransPosition& offset,
                                     UBool isIncremental) const;
    
    #if !UCONFIG_NO_FORMATTING
    
    UBool SearchIterator::operator==(const SearchIterator &that) const
{
    if (this == &that) {
        return TRUE;
    }
    return (m_breakiterator_            == that.m_breakiterator_ &&
            m_search_->isCanonicalMatch == that.m_search_->isCanonicalMatch &&
            m_search_->isOverlap        == that.m_search_->isOverlap &&
            m_search_->elementComparisonType == that.m_search_->elementComparisonType &&
            m_search_->matchedIndex     == that.m_search_->matchedIndex &&
            m_search_->matchedLength    == that.m_search_->matchedLength &&
            m_search_->textLength       == that.m_search_->textLength &&
            getOffset() == that.getOffset() &&
            (uprv_memcmp(m_search_->text, that.m_search_->text, 
                              m_search_->textLength * sizeof(UChar)) == 0));
}
    
    UnicodeString&
SelectFormat::format(const Formattable& obj,
                   UnicodeString& appendTo,
                   FieldPosition& pos,
                   UErrorCode& status) const
{
    if (U_FAILURE(status)) {
        return appendTo;
    }
    if (obj.getType() == Formattable::kString) {
        return format(obj.getString(status), appendTo, pos, status);
    } else {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return appendTo;
    }
}
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }
    
    
    {    status = U_MEMORY_ALLOCATION_ERROR;
}
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    #endif /* #if !UCONFIG_NO_TRANSLITERATION */
    
     public:
    
        for (int32_t i=0; i<output.length(); ++i) {
        if (hasCursor && i == cursor) {
            ICU_Utility::appendToRule(rule, (UChar)0x007C /*|*/, TRUE, escapeUnprintable, quoteBuf);
        }
        UChar c = output.charAt(i); // Ok to use 16-bits here
    }
    
    
    {};
    
    void ExtensionException::__set_uuid(const ExtensionRouteUUID val) {
  this->uuid = val;
}
std::ostream& operator<<(std::ostream& out, const ExtensionException& obj)
{
  obj.printTo(out);
  return out;
}
    
    
    {
    {}} // namespace
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
    QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
      Status refresh();
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    
    {  auto dst = std::vector<TestMessage>{};
  auto status =
      ebpf::impl::consumeWrappedMessagesFromCircularBuffer<WrappedMessage>(
          &buf[0], tail, head, buf.size(), dst);
  ASSERT_FALSE(status.isError()) << status.getError().getMessage();
  ASSERT_EQ(dst.size(), test_size);
  for (std::size_t i = 0; i < test_size; ++i) {
    EXPECT_EQ(dst[i].c_, 't');
    EXPECT_EQ(dst[i].d_, 'i');
  }
  EXPECT_EQ(dst[0].a_, 1);
  EXPECT_EQ(dst[0].b_, 2);
  EXPECT_EQ(dst[1].a_, 3);
  EXPECT_EQ(dst[1].b_, 4);
  EXPECT_EQ(dst[2].a_, 5);
  EXPECT_EQ(dst[2].b_, 6);
}
    
    LinuxProbesControl::LinuxProbesControl(
    PerfEventCpuMap cpu_to_perf_output_map,
    ebpf::PerfOutputsPoll<events::syscall::Event> output_poll)
    : cpu_to_perf_output_map_(std::move(cpu_to_perf_output_map)),
      output_poll_(std::move(output_poll)) {}