
        
          // Get the normal conformance. If we don't have one, this is a self
  // conformance, which we can ignore.
  auto normal = dyn_cast<NormalProtocolConformance>(
      conformance->getRootConformance());
  if (normal == nullptr)
    return;
    
    
    {    return tryDevirtualizeClassMethod(FAS, Instance, CD, ORE);
  }
    
      /// Return whether this function has a foreign implementation which can
  /// be emitted on demand.
  bool hasForeignBody() const;
    
      ClusteredBitVector emptyVec;
  vec.append(emptyVec);
    
    enum class KeyPathComponentKindEncoding : uint8_t {
  StoredProperty,
  TupleElement,
  GettableProperty,
  SettableProperty,
  OptionalChain,
  OptionalForce,
  OptionalWrap,
  Trivial,
};
enum class KeyPathComputedComponentIdKindEncoding : uint8_t {
  Property,
  Function,
  DeclRef,
};
    
    /// Knows how to make a deep copy of a debug scope.
class ScopeCloner {
  llvm::SmallDenseMap<const SILDebugScope *,
                      const SILDebugScope *> ClonedScopeCache;
  SILFunction &NewFn;
public:
  /// ScopeCloner expects NewFn to be a clone of the original
  /// function, with all debug scopes and locations still pointing to
  /// the original function.
  ScopeCloner(SILFunction &NewFn);
  /// Return a (cached) deep copy of a scope.
  const SILDebugScope *getOrCreateClonedScope(const SILDebugScope *OrigScope);
};
    
      StringRef getFieldName(uintptr_t Offset, uintptr_t Low,
                         uintptr_t High) const {
    uintptr_t nameAddr = (uintptr_t)FieldName.get() + Offset;
    if (nameAddr < Low || nameAddr > High)
      return '';
    return (const char *)nameAddr;
  }
    
          return CaptureAddress;
    }
    case MetadataSourceKind::GenericArgument: {
      auto *GAMS = cast<GenericArgumentMetadataSource>(MS);
      auto Base = readMetadataSource(Context, GAMS->getSource(), Builder);
      if (!Base)
        break;
    
    
    {
    {}} // namespace

    
    template <> IMF_EXPORT const char *EnvmapAttribute::staticTypeName ();
    
        #else
    
    
    {    for (int i = 0; i < n; ++i)
       Xdr::read <StreamIO> (is, _value[i]);
}
    
    typedef TypedAttribute<OPENEXR_IMF_INTERNAL_NAMESPACE::FloatVector>
    FloatVectorAttribute;
    
    ////////////////////////////////////////////////////////////////////
//
// Forward declarations for OpenEXR - correctly declares namespace
//
////////////////////////////////////////////////////////////////////
    
    	    if (i.channel().xSampling < 1)
	    {
		THROW (IEX_NAMESPACE::ArgExc, 'The x subsampling factor for the '
				    '\'' << i.name() << '\' channel '
				    'is invalid.');
	    }
    
    
    //--------------------------------------------------------------------
    // Constructor -- the data window is specified explicitly; the display
    // window is set to Box2i (V2i (0, 0), V2i (width-1, height-1).
    //--------------------------------------------------------------------
    
    
//
// Struct InputFile::Data stores things that will be
// needed between calls to readPixels
//
    
    
    //-------------------------------------------------------------
    // A constructor that attaches the new InputFile object to a
    // file that has already been opened.  Destroying the InputFile
    // object will not close the file.
    //
    // numThreads determines the number of threads that will be
    // used to read the file (see ImfThreading.h).
    //-------------------------------------------------------------
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
      case BInitPrim:
  case BPrim:
  case BInitUnc:
  case BUnc:
  case BInitCell:
  case BInitGen:
  case BCell:
  case BGen:
  case BTop:
    return false;
    
      // When a file is loaded inside of a request context we perform a consistency
  // check to ensure that all files loaded within the request use the same
  // options.
  void onLoadWithOptions(const char* f, const RepoOptions& options);
    
    void ActRec::setJitReturn(void* retAddr) {
  FTRACE(1, 'Replace m_savedRip in fp {}, {:#x} -> {}, func {}\n',
         this, m_savedRip, retAddr, func()->fullName()->data());
  m_savedRip = reinterpret_cast<uintptr_t>(retAddr);
}
    
      /*
   * Determine whether p is a Class* or an ObjectData* based
   * on kHasClassBit.
   *
   * @requires: p != nullptr
   */
  static bool checkThis(void* p);
    
      Variant d = data.toDouble();
  String sd = d.toString();
  xmlNodeSetContentLen(ret, BAD_CAST(sd.data()), sd.size());
    
    
    {  if (m_slabManager && m_hugeBytes < RuntimeOption::RequestHugeMaxBytes) {
    if (auto slab = m_slabManager->tryAlloc()) {
      stats.mmap_volume += kSlabSize;
      stats.mmap_cap += kSlabSize;
      stats.peakCap = std::max(stats.peakCap, stats.capacity());
      m_pooled_slabs.emplace_back(slab.ptr(), kSlabSize, slab.tag());
      m_bigs.insert((HeapObject*)slab.ptr(), kSlabSize);
      m_hugeBytes += kSlabSize;
      return finish(slab.ptr());
    }
  }
#ifdef USE_JEMALLOC
  auto const flags = MALLOCX_ALIGN(kSlabAlign) |
    (RuntimeOption::EvalBigAllocUseLocalArena ? local_arena_flags : 0);
  auto slab = mallocx(kSlabSize, flags);
#else
  auto slab = safe_aligned_alloc(kSlabAlign, kSlabSize);
#endif
  m_bigs.insert((HeapObject*)slab, kSlabSize);
  stats.malloc_cap += kSlabSize;
  stats.peakCap = std::max(stats.peakCap, stats.capacity());
  return finish(slab);
}
    
          // For use with loading xml
      HHVM_RC_INT(LIBXML_NOENT, XML_PARSE_NOENT);
      HHVM_RC_INT(LIBXML_DTDLOAD, XML_PARSE_DTDLOAD);
      HHVM_RC_INT(LIBXML_DTDATTR, XML_PARSE_DTDATTR);
      HHVM_RC_INT(LIBXML_DTDVALID, XML_PARSE_DTDVALID);
      HHVM_RC_INT(LIBXML_NOERROR, XML_PARSE_NOERROR);
      HHVM_RC_INT(LIBXML_NOWARNING, XML_PARSE_NOWARNING);
      HHVM_RC_INT(LIBXML_NOBLANKS, XML_PARSE_NOBLANKS);
      HHVM_RC_INT(LIBXML_XINCLUDE, XML_PARSE_XINCLUDE);
      HHVM_RC_INT(LIBXML_NSCLEAN, XML_PARSE_NSCLEAN);
      HHVM_RC_INT(LIBXML_NOCDATA, XML_PARSE_NOCDATA);
      HHVM_RC_INT(LIBXML_NONET, XML_PARSE_NONET);
      HHVM_RC_INT(LIBXML_PEDANTIC, XML_PARSE_PEDANTIC);
      HHVM_RC_INT(LIBXML_COMPACT, XML_PARSE_COMPACT);
      HHVM_RC_INT(LIBXML_NOXMLDECL, XML_SAVE_NO_DECL);
      HHVM_RC_INT(LIBXML_PARSEHUGE, XML_PARSE_HUGE);
      HHVM_RC_INT(LIBXML_NOEMPTYTAG, LIBXML_SAVE_NOEMPTYTAG);
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
    
    {        ImGui::Render();
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
    
    // ===========
    // array types
    // ===========
    
      size_t sizeGuess() const {
    size_t total_size = 0;
    for (auto& q : queues_) {
      // MPMCQueue can have a negative size if there are pending readers.
      // Since we don't expose a blocking interface this shouldn't happen,
      // But just in case we put a floor at 0
      total_size += std::max<ssize_t>(0, q.sizeGuess());
    }
    return total_size;
  }
    
    TEST_F(ScopedEventBaseThreadTest, custom_manager) {
  EventBaseManager ebm;
  ScopedEventBaseThread sebt(&ebm);
  auto sebt_eb = sebt.getEventBase();
  auto ebm_eb = static_cast<EventBase*>(nullptr);
  sebt_eb->runInEventBaseThreadAndWait([&] { ebm_eb = ebm.getEventBase(); });
  EXPECT_EQ(uintptr_t(sebt_eb), uintptr_t(ebm_eb));
}
    
      size_t idx = 0;
  while (idx < ioQueue->size()) {
    int numIovecs = 0;
    while (numIovecs < kNumIovecs && idx < ioQueue->size()) {
      const auto& str = (*ioQueue)[idx];
      iovecs[numIovecs].iov_base = const_cast<char*>(str.data());
      iovecs[numIovecs].iov_len = str.size();
      ++numIovecs;
      ++idx;
    }
    }
    
    using folly::File;
using folly::StringPiece;
    
    template <
    typename Key,
    typename Mapped,
    typename Hasher = f14::DefaultHasher<Key>,
    typename KeyEqual = f14::DefaultKeyEqual<Key>>
using F14VectorMap = folly::F14VectorMap<
    Key,
    Mapped,
    Hasher,
    KeyEqual,
    folly::detail::std_pmr::polymorphic_allocator<
        std::pair<Key const, Mapped>>>;
    
      template <typename... Args>
  std::pair<iterator, bool> try_emplace(key_type&& key, Args&&... args) {
    auto rv = table_.tryEmplaceValue(
        key,
        std::piecewise_construct,
        std::forward_as_tuple(std::move(key)),
        std::forward_as_tuple(std::forward<Args>(args)...));
    return std::make_pair(table_.makeIter(rv.first), rv.second);
  }
    
    #if FOLLY_HAS_MEMORY_RESOURCE
namespace pmr {
template <
    typename Key,
    typename Hasher = f14::DefaultHasher<Key>,
    typename KeyEqual = f14::DefaultKeyEqual<Key>>
using F14NodeSet = folly::F14NodeSet<
    Key,
    Hasher,
    KeyEqual,
    folly::detail::std_pmr::polymorphic_allocator<Key>>;
    }
    
    
    {  // Nuke 'em all
  for (const auto& item : allocatedItems) {
    arena.deallocate(item, 0 /* unused */);
  }
  // The total size should be the same
  EXPECT_TRUE(arena.totalSize() >= minimum_size);
  EXPECT_TRUE(arena.totalSize() <= maximum_size);
  VLOG(4) << minimum_size << ' < ' << arena.totalSize() << ' < '
          << maximum_size;
}
    
      auto collectObserver = makeObserver([observer, observerA, &observerB]() {
    auto value = **observer;
    auto valueA = **observerA;
    auto valueB = ***observerB;
    }