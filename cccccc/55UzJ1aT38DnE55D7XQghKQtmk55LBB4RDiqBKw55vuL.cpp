
        
        #endif // SWIFT_AST_SUBSTITUTION_MAP_STORAGE_H

    
        if (info.status == serialization::Status::Valid) {
      assert(info.bytes != 0);
      if (!info.name.empty()) {
        StringRef moduleData = buf.substr(0, info.bytes);
        std::unique_ptr<llvm::MemoryBuffer> bitstream(
          llvm::MemoryBuffer::getMemBuffer(moduleData, info.name, false));
    }
    }
    
      char *oldAllocation = Allocated;
  char *oldBegin = Begin;
  std::size_t oldSize = (std::size_t) (End - oldBegin);
    
    static const StringRef SupportedConditionalCompilationOSs[] = {
  'OSX',
  'macOS',
  'tvOS',
  'watchOS',
  'iOS',
  'Linux',
  'FreeBSD',
  'Windows',
  'Android',
  'PS4',
  'Cygwin',
  'Haiku',
};
    
    
    {  PrevPosition = i;
  PrevPositionValid = true;
}
    
    
    {      ExecutingTasks.push(PidTaskPair(Pid, std::move(T)));
    }
    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart,
                     TargetStart + 1, llvm::lenientConversion);
  if (TargetStart == &C) {
    // The source string contains an ill-formed subsequence at the end.
    return false;
  }
    
    
    {}%
    
    #endif // SWIFT_IMPORTER_CFTYPEINFO_H

    
    SourceLoc ClangDiagnosticConsumer::resolveSourceLocation(
    const clang::SourceManager &clangSrcMgr,
    clang::SourceLocation clangLoc) {
  SourceManager &swiftSrcMgr = ImporterImpl.SwiftContext.SourceMgr;
  SourceLoc loc;
    }
    
    namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
    TEST(MovableMessageTest, MoveSameArena) {
  Arena arena;
    }
    
    void WritePropertyDocComment(io::Printer* printer, const FieldDescriptor* field) {
    WriteDocCommentBody(printer, field);
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      printer->Print(
      vars,
      'public static pb::MessageParser<$class_name$> Parser { get { return _parser; } }\n\n');
    
    // Factory makes and returns an IntSimdMatrix (sub)class of the best
// available type for the current architecture.
/* static */
IntSimdMatrix* IntSimdMatrix::GetFastestMultiplier() {
  IntSimdMatrix* multiplier = nullptr;
  if (SIMDDetect::IsAVX2Available()) {
    multiplier = new IntSimdMatrixAVX2();
  } else if (SIMDDetect::IsSSEAvailable()) {
    multiplier = new IntSimdMatrixSSE();
  } else {
    // Default c++ implementation.
    multiplier = new IntSimdMatrix();
  }
  return multiplier;
}
    
      ColPartitionGridSearch search(part_grid_);
  search.SetUniqueMode(true);
  const TBOX& part_box(part->bounding_box());
  int y = search_bottom ? part_box.bottom() : part_box.top();
  search.StartVerticalSearch(part_box.left(), part_box.right(), y);
  int min_y_gap = std::numeric_limits<int>::max();
  while ((neighbor = search.NextVerticalSearch(search_bottom)) != nullptr) {
    if (neighbor == part || !IsTextOrEquationType(neighbor->type())) {
      continue;
    }
    const TBOX& neighbor_box(neighbor->bounding_box());
    int y_gap = neighbor_box.y_gap(part_box);
    if (y_gap > kYGapTh) {  // Out of scope.
      break;
    }
    if (!neighbor_box.major_x_overlap(part_box) ||
        (search_bottom && neighbor_box.bottom() > part_box.bottom()) ||
        (!search_bottom && neighbor_box.top() < part_box.top())) {
      continue;
    }
    if (y_gap < min_y_gap) {
      min_y_gap = y_gap;
      nearest_neighbor = neighbor;
    }
  }
    
      // Compute special text type for each blobs in part_grid_.
  void IdentifySpecialText();
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    struct Fork {
  pid_t pid;
    }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    
    {} // namespace caffe2

    
    
    {
    {    const float* Xdata = X.template data<float>();
    float* Ydata = Y->template mutable_data<float>();
    for (int i = 0; i < X.size(); ++i) {
      Ydata[i] = std::floor(Xdata[i]);
    }
    return true;
  }
};
    
       const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   directory_iterator& operator++() { next(); return *this; }
   directory_iterator operator++(int);
   const char* operator*() { return path(); }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_short_set_repeat(bool r)
{
   saved_single_repeat<BidiIterator>* pmp = static_cast<saved_single_repeat<BidiIterator>*>(m_backup_state);
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {
      basic = basic_syntax_group | collate | no_escape_in_lists,
      extended = no_bk_refs | collate | no_perl_ex | no_escape_in_lists,
      normal = 0,
      emacs = basic_syntax_group | collate | emacs_ex | bk_vbar,
      awk = no_bk_refs | collate | no_perl_ex,
      grep = basic | newline_alt,
      egrep = extended | newline_alt,
      sed = basic,
      perl = normal,
      ECMAScript = normal,
      JavaScript = normal,
      JScript = normal
   };
   typedef unsigned int flag_type;
    
    //
// struct trivial_format_traits:
// defines minimum localisation support for formatting
// in the case that the actual regex traits is unavailable.
//
template <class charT>
struct trivial_format_traits
{
   typedef charT char_type;
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
       void BOOST_REGEX_CALL resize(size_type n);
   
   void* BOOST_REGEX_CALL extend(size_type n)
   {
      if(size_type(last - end) < n)
         resize(n + (end - start));
      pointer result = end;
      end += n;
      return result;
   }
    
    #ifdef BOOST_MSVC
#  pragma warning(push)
#  pragma warning(disable: 4800)
#endif
    
    #endif // BOOST_REGEX_V4_REGEX_TOKEN_ITERATOR_HPP
    
      void Compare(const OutputImage& img) override;
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    std::string ReadFileOrDie(const char* filename) {
  bool read_from_stdin = strncmp(filename, '-', 2) == 0;
    }
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    #include <assert.h>
#include <string.h>
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
    // Writes a string using the out callback.
inline bool JPEGWrite(JPEGOutput out, const std::string& s) {
  const uint8_t* data = reinterpret_cast<const uint8_t*>(&s[0]);
  return JPEGWrite(out, data, s.size());
}