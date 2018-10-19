
        
        
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomContentClient);
};
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #endif  // ATOM_BROWSER_API_ATOM_API_NET_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(Screen);
};
    
    
    {  // Produce the generic signature and environment.
  // FIXME: Pass in a source location for the conformance, perhaps? It seems
  // like this could fail.
  syntheticSignature =
    std::move(builder).computeGenericSignature(SourceLoc());
  syntheticEnvironment = syntheticSignature->createGenericEnvironment();
}

    
        llvm::errs() << '\n=====================================================\n';
    SyntaxNode->dump(llvm::errs());
    llvm::errs() << '\n\n---- Maps to semantic node: ----\n\n';
    
      // An AST section consists of one or more AST modules, optionally with
  // headers. Iterate over all AST modules.
  while (!buf.empty()) {
    auto info = serialization::validateSerializedAST(buf);
    }
    
    
    {  ChunkType pattern = (addOnes ? ~ChunkType(0) : ChunkType(0));
  appendReserved(numBits, [=](size_t numBitsWanted) -> ChunkType {
    return (pattern >> (ChunkSizeInBits - numBitsWanted));
  });
}
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
      if (clangDiag.getID() == clang::diag::err_module_not_built &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    SourceLoc loc = DiagLoc;
    if (clangDiag.getLocation().isValid())
      loc = resolveSourceLocation(clangDiag.getSourceManager(),
                                  clangDiag.getLocation());
    }
    
        template <typename ElementType>
    void LearnerSGD::Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, 
                            const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const
    {
        UNUSED(smoothedGradientValue);
        const auto& gradientMatrix = GetWritableMatrix<ElementType>(gradientValue);
        const auto& parameterMatrix = GetWritableMatrix<ElementType>(parameter.Value());
        const auto learningRate = ElementType(LearningRate(trainingSampleCount));
    }
    
        template CNTK_API std::tuple<const float*, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<float>() const;
    template CNTK_API std::tuple<const double*, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<double>() const;
    template CNTK_API std::tuple<const float16*, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<float16>() const;
    template CNTK_API std::tuple<const int8_t*, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<int8_t>() const;
    template CNTK_API std::tuple<const int16_t*, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<int16_t>() const;
    
    
    {        bool isImage = configp->Get(L'isImage');
        if (!isImage)
            Init(configp->Get(L'shape'), isSparse, axisName);
        else
            Init(ImageDimensions::AsTensorShape(configp->Get(L'imageWidth'), configp->Get(L'imageHeight'), configp->Get(L'imageChannels'), ImageLayoutKindFrom(configp->Get(L'imageLayout'))), isSparse, axisName);
    }
    
      /*
   * @brief a helper variable for keeping track of the posix tar archive.
   *
   * This variable is the absolute location of the tar archive created from
   * tar'ing all of the carved files from the carve temp dir.
   */
  boost::filesystem::path archivePath_;
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json': 
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    
    {/**
 * @brief Compute a hash digest from the contents of a buffer.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param buffer A caller-controlled buffer (already allocated).
 * @param size The length of buffer in bytes.
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromBuffer(HashType hash_type, const void* buffer, size_t size);
} // namespace osquery

    
    #ifndef WIN32
#include <sys/wait.h>
#endif
    
        if (descriptor_inosubctx_.find(watch) != descriptor_inosubctx_.end()) {
      auto ino_sc = descriptor_inosubctx_.at(watch);
      if (inotify_sanity_check) {
        std::string watched_path = ino_sc->descriptor_paths_[watch];
        path_descriptors_.erase(watched_path);
      }
      ino_sc->descriptor_paths_.erase(watch);
      descriptor_inosubctx_.erase(watch);
    }
    
    TEST_F(AuditTests, test_parse_sock_addr) {
  Row r;
  std::string msg = '02001F907F0000010000000000000000';
  bool unix_socket;
  parseSockAddr(msg, r, unix_socket);
  ASSERT_FALSE(r['remote_address'].empty());
  EXPECT_EQ(r['remote_address'], '127.0.0.1');
  EXPECT_EQ(r['family'], '2');
  EXPECT_EQ(r['remote_port'], '8080');
    }
    
    int main(int, char**)
{
    IwGxInit();
    }
    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX10 sample code but remove this dependency you can: 
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL. 
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
    static void ImGui_ImplDX11_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
        if (pEvent->m_Pressed == 1)
    {
        if (pEvent->m_Button == S3E_POINTER_BUTTON_LEFTMOUSE)
            g_MousePressed[0] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_RIGHTMOUSE)
            g_MousePressed[1] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MIDDLEMOUSE)
            g_MousePressed[2] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELUP)
            io.MouseWheel += pEvent->m_y;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELDOWN)
            io.MouseWheel += pEvent->m_y;
    }
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    // Gamma Correct Blending:
//  FreeType assumes blending in linear space rather than gamma space.
//  See https://www.freetype.org/freetype2/docs/reference/ft2-base_interface.html#FT_Render_Glyph
//  For correct results you need to be using sRGB and convert to linear space in the pixel shader output.
//  The default imgui styles will be impacted by this change (alpha values will need tweaking).
    
    #ifndef SKIP_RESERVE
void BENCHFUN(reserve)(int iters, int size) {
  auto const obj = randomObject<VECTOR::value_type>();
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(random(0U, 1U), obj);
    v.reserve(size);
  }
}
BENCHMARK_PARAM(BENCHFUN(reserve), 16)
BENCHMARK_PARAM(BENCHFUN(reserve), 128)
BENCHMARK_PARAM(BENCHFUN(reserve), 1024)
#endif
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
    namespace folly {
    }
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}