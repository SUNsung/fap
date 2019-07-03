
        
          // Now, add all generic parameters from the conforming type.
  if (conformanceSig) {
    for (auto param : conformanceSig->getGenericParams()) {
      auto substParam = Type(param).subst(conformanceToSyntheticTypeFn,
                                          conformanceToSyntheticConformanceFn);
      builder.addGenericParameter(substParam->castTo<GenericTypeParamType>());
    }
  }
    
    
    {  cache_t *cache_out = nullptr;
  cache_create(NameBuf.c_str(), &Attrs, &cache_out);
  assert(cache_out);
  return cache_out;
}
    
      char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
      inline int offset(const vector<int>& indices) const {
    CHECK_LE(indices.size(), num_axes());
    int offset = 0;
    for (int i = 0; i < num_axes(); ++i) {
      offset *= shape(i);
      if (indices.size() > i) {
        CHECK_GE(indices[i], 0);
        CHECK_LT(indices[i], shape(i));
        offset += indices[i];
      }
    }
    return offset;
  }
  /**
   * @brief Copy from a source Blob.
   *
   * @param source the Blob to copy from
   * @param copy_diff if false, copy the data; if true, copy the diff
   * @param reshape if false, require this Blob to be pre-shaped to the shape
   *        of other (and die otherwise); if true, Reshape this Blob to other's
   *        shape if necessary
   */
  void CopyFrom(const Blob<Dtype>& source, bool copy_diff = false,
      bool reshape = false);
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    namespace leveldb {
    }
    
    class Cache;
class Comparator;
class Env;
class FilterPolicy;
class Logger;
class Snapshot;
    
      BlockBuilder(const BlockBuilder&) = delete;
  BlockBuilder& operator=(const BlockBuilder&) = delete;
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}
    
      FILE* f = fopen(test_file.c_str(), 'w');
  ASSERT_TRUE(f != nullptr);
  const char kFileData[] = 'abcdefghijklmnopqrstuvwxyz';
  fputs(kFileData, f);
  fclose(f);
    
    void SearchIterator::setMatchNotFound() 
{
    setMatchStart(USEARCH_DONE);
    setMatchLength(0);
    UErrorCode status = U_ZERO_ERROR;
    // by default no errors should be returned here since offsets are within 
    // range.
    if (m_search_->isForwardSearching) {
        setOffset(m_search_->textLength, status);
    }
    else {
        setOffset(0, status);
    }
}
    
    class UnicodeSet;
    
    // -------------------------------------
    
    
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
    
    // When calendar uses hebr numbering (i.e. he@calendar=hebrew),
// offset the years within the current millenium down to 1-999
static const int32_t HEBREW_CAL_CUR_MILLENIUM_START_YEAR = 5000;
static const int32_t HEBREW_CAL_CUR_MILLENIUM_END_YEAR = 6000;
    
    
U_NAMESPACE_END
    
    // A hash code of kInvalidHashCode indicates that the hash code needs
// to be computed. A hash code of kEmptyHashCode is used for empty keys
// and for any key whose computed hash code is kInvalidHashCode.
static const int32_t kInvalidHashCode = 0;
static const int32_t kEmptyHashCode = 1;
// The 'bogus hash code' replaces a separate fBogus flag.
static const int32_t kBogusHashCode = 2;
    
    /**
 * Implement UnicodeMatcher
 */
UBool StringMatcher::matchesIndexValue(uint8_t v) const {
    if (pattern.length() == 0) {
        return TRUE;
    }
    UChar32 c = pattern.char32At(0);
    const UnicodeMatcher *m = data->lookupMatcher(c);
    return (m == 0) ? ((c & 0xFF) == v) : m->matchesIndexValue(v);
}
    
    
    {};
    
            // The temporary buffer starts at tempStart, and extends
        // to destLimit.  The start of the buffer has a single
        // character from before the key.  This provides style
        // data when addition characters are filled into the
        // temporary buffer.  If there is nothing to the left, use
        // the non-character U+FFFF, which Replaceable subclasses
        // should treat specially as a 'no-style character.'
        // destStart points to the point after the style context
        // character, so it is tempStart+1 or tempStart+2.
        int32_t tempStart = text.length(); // start of temp buffer
        int32_t destStart = tempStart; // copy new text to here
        if (start > 0) {
            int32_t len = U16_LENGTH(text.char32At(start-1));
            text.copy(start-len, start, tempStart);
            destStart += len;
        } else {
            UnicodeString str((UChar) 0xFFFF);
            text.handleReplaceBetween(tempStart, tempStart, str);
            destStart++;
        }
        int32_t destLimit = destStart;
    
    namespace {
    }
    
      explicit OutputFile(const String& filename);
  virtual ~OutputFile();
    
    #include <folly/Random.h>
    
    
    {}
    
      void requestInit() override;
  void requestShutdown() override;
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
        // the literals are everything from lit_start to q
    *pending_literals = (q - lit_start);
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_4_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreatePixelShader((DWORD*)g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize(), NULL, &g_pPixelShader) != S_OK)
            return false;
    }
    
    #pragma once
    
        io.KeyMap[ImGuiKey_Tab] = s3eKeyTab;                     // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_LeftArrow] = s3eKeyLeft;
    io.KeyMap[ImGuiKey_RightArrow] = s3eKeyRight;
    io.KeyMap[ImGuiKey_UpArrow] = s3eKeyUp;
    io.KeyMap[ImGuiKey_DownArrow] = s3eKeyDown;
    io.KeyMap[ImGuiKey_PageUp] = s3eKeyPageUp;
    io.KeyMap[ImGuiKey_PageDown] = s3eKeyPageDown;
    io.KeyMap[ImGuiKey_Home] = s3eKeyHome;
    io.KeyMap[ImGuiKey_End] = s3eKeyEnd;
    io.KeyMap[ImGuiKey_Insert] = s3eKeyInsert;
    io.KeyMap[ImGuiKey_Delete] = s3eKeyDelete;
    io.KeyMap[ImGuiKey_Backspace] = s3eKeyBackspace;
    io.KeyMap[ImGuiKey_Space] = s3eKeySpace;
    io.KeyMap[ImGuiKey_Enter] = s3eKeyEnter;
    io.KeyMap[ImGuiKey_Escape] = s3eKeyEsc;
    io.KeyMap[ImGuiKey_A] = s3eKeyA;
    io.KeyMap[ImGuiKey_C] = s3eKeyC;
    io.KeyMap[ImGuiKey_V] = s3eKeyV;
    io.KeyMap[ImGuiKey_X] = s3eKeyX;
    io.KeyMap[ImGuiKey_Y] = s3eKeyY;
    io.KeyMap[ImGuiKey_Z] = s3eKeyZ;
    
    // OpenGL3 Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
// Note that this implementation is little overcomplicated because we are saving/setting up/restoring every OpenGL state explicitly, in order to be able to run within any OpenGL engine that doesn't do so.
void    ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized, scale coordinates for retina displays (screen coordinates != framebuffer coordinates)
    int fb_width = (int)(draw_data->DisplaySize.x * draw_data->FramebufferScale.x);
    int fb_height = (int)(draw_data->DisplaySize.y * draw_data->FramebufferScale.y);
    if (fb_width <= 0 || fb_height <= 0)
        return;
    }
    
    BENCHMARK(dev_null_log_overhead, iter) {
  auto prev = FLAGS_minloglevel;
  FLAGS_minloglevel = 2;
    }
    
    #include <folly/Executor.h>
    
    template <class RNG>
struct SeedData {
  SeedData() {
    Random::secureRandom(seedData.data(), seedData.size() * sizeof(uint32_t));
  }
    }
    
    #include <string>
    
    
    {} // namespace folly

    
    
    {    return false;
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_strong(
        expected, desired, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    return compare_exchange_strong(expected, desired, success, failure);
  }
    
    #include <folly/concurrency/AtomicSharedPtr.h>
#include <folly/concurrency/CacheLocality.h>
#include <folly/container/Enumerate.h>
#include <folly/synchronization/Hazptr.h>
    
      counted_ptr(const counted_ptr& o) : p_(o.p_) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
  counted_ptr& operator=(const counted_ptr& o) {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
    p_ = o.p_;
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
    return *this;
  }
  explicit counted_ptr(T* p) : p_(p) {
    CHECK(!p);
  }
  ~counted_ptr() {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
  }
  typename std::add_lvalue_reference<T>::type operator*() const {
    return *p_;
  }
    
    uint ServerConfig::databaseScanLimit() const
{
    return param<uint>('db_scan_limit', DEFAULT_DB_SCAN_LIMIT);
}
    
    void SortFilterProxyModel::setFilterString(const QString &filter)
{
    setFilterRegExp(QRegExp(filter, filterCaseSensitivity(), static_cast<QRegExp::PatternSyntax>(filterSyntax())));
    emit filterStringChanged();
}
    
    
    {  try {
    m_connection->connect(false);
  } catch (RedisClient::Connection::Exception&) {
    emit error(QCoreApplication::translate(
        'RDM', 'Invalid Connection. Check connection settings.'));
    return;
  }
}
    
     signals:
  void error(const QString& error);
    
    int TabViewModel::tabsCount() const { return m_models.count(); }
    
      Q_INVOKABLE int tabsCount() const;