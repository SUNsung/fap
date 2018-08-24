
        
        /** Macintosh-specific dock icon handler.
 */
class MacDockIconHandler : public QObject
{
    Q_OBJECT
    }
    
        void setModel(WalletModel *model);
    void setAddress_SM(const QString &address);
    void setAddress_VM(const QString &address);
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    
    {
    {        /* compute using ECDH function */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[0], s_one) == 1);
        CHECK(secp256k1_ecdh(ctx, output_ecdh, &point[0], s_b32) == 1);
        /* compute 'explicitly' */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[1], s_b32) == 1);
        CHECK(secp256k1_ec_pubkey_serialize(ctx, point_ser, &point_ser_len, &point[1], SECP256K1_EC_COMPRESSED) == 1);
        CHECK(point_ser_len == sizeof(point_ser));
        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, point_ser, point_ser_len);
        secp256k1_sha256_finalize(&sha, output_ser);
        /* compare */
        CHECK(memcmp(output_ecdh, output_ser, sizeof(output_ser)) == 0);
    }
}
    
    #ifndef SECP256K1_MODULE_RECOVERY_TESTS_H
#define SECP256K1_MODULE_RECOVERY_TESTS_H
    
    /* Equality between doubles is imprecise. Comparison should be done
 * with a small threshold of tolerance, rather than exact equality.
 */
static bool DoubleEquals(double a, double b, double epsilon)
{
    return std::abs(a - b) < epsilon;
}
    
    
    
      // Releases ownership of the object without decrementing the reference count.
  // The caller now owns the returned reference.
  PyObjectStruct* release() {
    PyObject* p = ptr_;
    ptr_ = NULL;
    return p;
  }
    
    void AddFile(const string& filename, const string& data) {
  GOOGLE_CHECK_OK(File::SetContents(TestTempDir() + '/' + filename, data,
                             true));
}
    
      auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena1);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
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
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vqadd(v_src0, v_src1);
    }
    
    #define SPLIT(sgn,bits,n) void split##n(const Size2D &_size,                                            \
                                    const sgn##bits * srcBase, ptrdiff_t srcStride                      \
                                    FILL_LINES##n(FARG, sgn##bits) )                                    \
{                                                                                                       \
    internal::assertSupportedConfiguration();                                                           \
    Size2D size(_size);                                                                                 \
    if (CONTDST##n                                                                                      \
        dst0Stride == (ptrdiff_t)(size.width))                                                          \
    {                                                                                                   \
        size.width *= size.height;                                                                      \
        size.height = 1;                                                                                \
    }                                                                                                   \
    typedef internal::VecTraits<sgn##bits, n>::vec128 vec128;                                           \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits)-1) ? size.width - (16/sizeof(sgn##bits)-1) : 0; \
    typedef internal::VecTraits<sgn##bits, n>::vec64 vec64;                                             \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits)-1) ? size.width - (8/sizeof(sgn##bits)-1) : 0;    \
                                                                                                        \
    for (size_t i = 0u; i < size.height; ++i)                                                           \
    {                                                                                                   \
        const sgn##bits * src = internal::getRowPtr(srcBase, srcStride, i);                             \
        FILL_LINES##n(VROW, sgn##bits)                                                                  \
        size_t sj = 0u, dj = 0u;                                                                        \
                                                                                                        \
        for (; dj < roiw16; sj += MUL##n(16)/sizeof(sgn##bits), dj += 16/sizeof(sgn##bits))             \
            SPLIT_QUAD(sgn, bits, n)                                                                    \
                                                                                                        \
        if (dj < roiw8)                                                                                 \
        {                                                                                               \
            vec64 v_src = vld##n##_##sgn##bits(src + sj);                                               \
            FILL_LINES##n(VST1, sgn##bits)                                                              \
            sj += MUL##n(8)/sizeof(sgn##bits);                                                          \
            dj += 8/sizeof(sgn##bits);                                                                  \
        }                                                                                               \
                                                                                                        \
        for (; dj < size.width; sj += n, ++dj)                                                          \
        {                                                                                               \
            FILL_LINES##n(SST, sgn##bits)                                                               \
        }                                                                                               \
    }                                                                                                   \
}
    
    COMBINE(u, 8,2)
COMBINE(u, 8,3)
COMBINE(u, 8,4)
COMBINE(u,16,2)
COMBINE(u,16,3)
COMBINE(u,16,4)
COMBINE(s,32,2)
COMBINE(s,32,3)
COMBINE(s,32,4)
COMBINE64(s, 2)
COMBINE64(s, 3)
COMBINE64(s, 4)
    
             vline_f32 = vld1q_f32(_src + i + 4);
    
                int32x2_t vnz1 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx1), vget_high_u32(vlx1)));
            int32x2_t vnz2 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx2), vget_high_u32(vlx2)));
            int32x2_t vnz3 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx3), vget_high_u32(vlx3)));
            int32x2_t vnz4 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx4), vget_high_u32(vlx4)));
    
    
    {            vec128 v_src = vld1q(src + js);
            vec128 v_dst = vrev64q(v_src);
            v_dst = vcombine(vget_high(v_dst), vget_low(v_dst));
            vst1q(dst + jd - step_base, v_dst);
        }
        for (; js < roiw_tail; js += step_tail, jd -= step_tail)
        {
            vec64 v_src = vld1(src + js);
            vst1(dst + jd - step_tail, vrev64(v_src));
        }
    
    
    {            u32 buf[8];
            vst1_u32(buf, vget_low_u32(el8shr01l));
            vst1_u32(buf+2, el2l);
            vst1_u32(buf+4, el2hl);
            vst1_u32(buf+6, el2hh);
            for(u32 k=0; k < 8; k++)
                sqsum[j+k] = prev + prevSqSum[j+k] + buf[k];
            prev += buf[7];
        }
    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
    // Returns true if a truth string was recorded for the current word.
bool LTRResultIterator::HasTruthString() const {
  if (it_->word() == nullptr) return false;  // Already at the end!
  if (it_->word()->blamer_bundle == nullptr ||
      it_->word()->blamer_bundle->NoTruth()) {
    return false;  // no truth information for this word
  }
  return true;
}
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
      bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
    // A small event handler class to process incoming events to
// this window.
class PGEventHandler : public SVEventHandler {
  public:
   PGEventHandler(tesseract::Tesseract* tess) : tess_(tess) {
   }
   void Notify(const SVEvent* sve);
  private:
    tesseract::Tesseract* tess_;
};
    
            std::shared_ptr<const Matrix<V1ElemType>> matrix = GetMatrix<V1ElemType>();
        auto matrixDims = GetMatrixDimensions(Shape());
        if (matrix->GetNumRows() != matrixDims.first)
            LogicError('The number of rows of the underlying matrix does not match the shape.');
        if (matrix->GetNumCols() != matrixDims.second)
            LogicError('The number of columns of the underlying matrix does not match the shape.');
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
                    FT_Glyph ft_glyph = NULL;
                FT_BitmapGlyph ft_glyph_bitmap = NULL; // NB: will point to bitmap within FT_Glyph
                GlyphInfo glyph_info;
                if (!font_face.CalcGlyphInfo(codepoint, glyph_info, ft_glyph, ft_glyph_bitmap))
                    continue;
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    
    {    return 0;
}

    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync