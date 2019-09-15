
        
        protected Q_SLOTS:
    void accept();
    
        UniValue v3;
    BOOST_CHECK(v3.setNumStr('32482348723847471234'));
    BOOST_CHECK_THROW(v3.get_int64(), std::runtime_error);
    BOOST_CHECK(v3.setNumStr('1000'));
    BOOST_CHECK_EQUAL(v3.get_int64(), 1000);
    
    
    {  Status SyncParent();
};
    
    //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    #endif

    
    
template <>
void
FloatVectorAttribute::readValueFrom
    (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &is, int size, int version)
{
    int n = size / Xdr::size<float>();
    _value.resize (n);
    }
    
    inline const Slice &
FrameBuffer::ConstIterator::slice () const
{
    return _i->second;
}
    
    void
GenericOutputFile::writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os,
                                                    const Header * headers,
                                                    int parts)
{
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::write <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (os, MAGIC);
    }
    
    
    //-----------------------------------------------------------
    // Set the current frame buffer -- copies the FrameBuffer
    // object into the InputFile object.
    //
    // The current frame buffer is the destination for the pixel
    // data read from the file.  The current frame buffer must be
    // set at least once before readPixels() is called.
    // The current frame buffer can be changed after each call
    // to readPixels().
    //-----------------------------------------------------------
    
    
void
InputPart::rawTileData (int &dx, int &dy, int &lx, int &ly,
             const char *&pixelData, int &pixelDataSize)
{
    file->rawTileData(dx, dy, lx, ly, pixelData, pixelDataSize);
}
    
    
        IMF_EXPORT
        void                rawTileData (int &dx, int &dy,
                                         int &lx, int &ly,
                                         const char *&pixelData,
                                         int &pixelDataSize);
    
    #include <ImfIntAttribute.h>
    
    		if (vorbis_synthesis(&m_vorbis->block, &m_vorbis->op))
			return false;
		if (vorbis_synthesis_blockin(&m_vorbis->dspState, &m_vorbis->block))
			return false;
    
    WebMDemuxer::WebMDemuxer(mkvparser::IMkvReader *reader, int videoTrack, int audioTrack) :
	m_reader(reader),
	m_segment(NULL),
	m_cluster(NULL), m_block(NULL), m_blockEntry(NULL),
	m_blockFrameIndex(0),
	m_videoTrack(NULL), m_vCodec(NO_VIDEO),
	m_audioTrack(NULL), m_aCodec(NO_AUDIO),
	m_isOpen(false),
	m_eos(false)
{
	long long pos = 0;
	if (mkvparser::EBMLHeader().Parse(m_reader, pos))
		return;
    }
    
    	bool readFrame(WebMFrame *videoFrame, WebMFrame *audioFrame);
    
      pos += len;  // consume length of size
    
    
static const vorbis_mapping_template _mapres_template_16_uncoupled[3]={
  { _map_nominal_u, _res_16u_0 }, /* 0 */
  { _map_nominal_u, _res_16u_1 }, /* 1 */
  { _map_nominal_u, _res_16u_2 }, /* 2 */
};

    
    
/* Optimized code path for x86_64 builds. Uses SSE2 intrinsics. This can be
   done safely because all x86_64 CPUs supports SSE2. */
#if (defined(_MSC_VER) && defined(_WIN64)) || (defined(__GNUC__) && defined (__x86_64__))
#  define VORBIS_FPU_CONTROL
    
    #define toOC(n)     (log(n)*1.442695f-5.965784f)
#define fromOC(o)   (exp(((o)+5.965784f)*.693147f))
    
    class binary_blob_t;
    
        check_keys_are_present(&store, sindex_name);
    
    # define INSTANTIATE_TEST_CASE_P(prefix, test_case_name, generator) \
  ::testing::internal::ParamGenerator<test_case_name::ParamType> \
      gtest_##prefix##test_case_name##_EvalGenerator_() { return generator; } \
  int gtest_##prefix##test_case_name##_dummy_ = \
      ::testing::UnitTest::GetInstance()->parameterized_test_registry(). \
          GetTestCasePatternHolder<test_case_name>(\
              #test_case_name, __FILE__, __LINE__)->AddTestCaseInstantiation(\
                  #prefix, \
                  &gtest_##prefix##test_case_name##_EvalGenerator_, \
                  __FILE__, __LINE__)
    
    // Suppresses MSVC warnings 4072 (unreachable code) for the code following
// statement if it returns or throws (or doesn't return or throw in some
// situations).
#define GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement) \
  if (::testing::internal::AlwaysTrue()) { statement; }
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32>
struct Templates32 {
  typedef TemplateSel<T1> Head;
  typedef Templates31<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32> Tail;
};
    
      // Write the document trailer.
  void writeTrailer();
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
    
    {  colorSpace = colorMap->getColorSpace();
  if (colorSpace->getMode() == csIndexed) {
    colorSpace = ((GfxIndexedColorSpace *)colorSpace)->getBase();
  }
  if (colorSpace->getMode() != csDeviceGray &&
      colorSpace->getMode() != csCalGray) {
    gray = gFalse;
  }
  mono = gFalse;
  transparency = gTrue;
  gdi = gFalse;
}
    
      //----- image drawing
  virtual void drawImageMask(GfxState *state, Object *ref, Stream *str,
			     int width, int height, GBool invert,
			     GBool interpolate, GBool inlineImg);
  virtual void drawImage(GfxState *state, Object *ref, Stream *str,
			 int width, int height, GfxImageColorMap *colorMap,
			 GBool interpolate, int *maskColors, GBool inlineImg);
  virtual void drawMaskedImage(GfxState *state, Object *ref, Stream *str,
			       int width, int height,
			       GfxImageColorMap *colorMap,
			       GBool interpolate,
			       Stream *maskStr, int maskWidth, int maskHeight,
			       GBool maskInvert, GBool maskInterpolate);
  virtual void drawSoftMaskedImage(GfxState *state, Object *ref, Stream *str,
				   int width, int height,
				   GfxImageColorMap *colorMap,
				   GBool interpolate,
				   Stream *maskStr,
				   int maskWidth, int maskHeight,
				   GfxImageColorMap *maskColorMap,
				   GBool maskInterpolate);
    
      // background color
  if (obj->dictLookup('B', &tmp)->isArray()) {
    Array* color = tmp.getArray();
    }
    
    GBool SplashOutputDev::gouraudTriangleShadedFill(GfxState *state, GfxGouraudTriangleShading *shading)
{
  GfxColorSpaceMode shadingMode = shading->getColorSpace()->getMode();
  GBool bDirectColorTranslation = gFalse; // triggers an optimization.
  switch (colorMode) {
    case splashModeRGB8:
      bDirectColorTranslation = (shadingMode == csDeviceRGB);
    break;
#if SPLASH_CMYK
    case splashModeCMYK8:
      bDirectColorTranslation = (shadingMode == csDeviceCMYK);
    break;
#endif
    default:
    break;
  }
  SplashGouraudColor *splashShading = new SplashGouraudPattern(bDirectColorTranslation, state, shading);
  // restore vector antialias because we support it here
  if (shading->isParameterized()) {
    GBool vaa = getVectorAntialias();
    GBool retVal = gFalse;
    setVectorAntialias(gTrue);
    retVal = splash->gouraudTriangleShadedFill(splashShading);
    setVectorAntialias(vaa);
    return retVal;
  }
  return gFalse;
}
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);                  // Edit 1 float using a slider from 0.0f to 1.0f
        ImGui::ColorEdit3('clear color', (float*)&clear_color);       // Edit 3 floats representing a color
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    // Specific OpenGL versions
//#define IMGUI_IMPL_OPENGL_ES2     // Auto-detected on Emscripten
//#define IMGUI_IMPL_OPENGL_ES3     // Auto-detected on iOS/Android
    
    // [SECTION] STB libraries implementation
// [SECTION] Style functions
// [SECTION] ImDrawList
// [SECTION] ImDrawListSplitter
// [SECTION] ImDrawData
// [SECTION] Helpers ShadeVertsXXX functions
// [SECTION] ImFontConfig
// [SECTION] ImFontAtlas
// [SECTION] ImFontAtlas glyph ranges helpers
// [SECTION] ImFontGlyphRangesBuilder
// [SECTION] ImFont
// [SECTION] Internal Render Helpers
// [SECTION] Decompression code
// [SECTION] Default font data (ProggyClean.ttf)