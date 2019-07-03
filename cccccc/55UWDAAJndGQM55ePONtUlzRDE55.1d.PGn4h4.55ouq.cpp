
        
        int32 remainder(int32 x, int32 modulus);
int32 TriangulatePolygon(float32* xv, float32* yv, int32 vNum, b2Triangle* results);
bool IsEar(int32 i, float32* xv, float32* yv, int32 xvLength); //Not for external use
int32 PolygonizeTriangles(b2Triangle* triangulated, int32 triangulatedLength, b2Polygon* polys, int32 polysLength);
int32 DecomposeConvex(b2Polygon* p, b2Polygon* results, int32 maxPolys);
//void DecomposeConvexAndAddTo(b2Polygon* p, b2Body* bd, b2FixtureDef* prototype);
    
    
    {};
    
    		inline SourceAlphaMix GetSourceAlphaMix(void)
		{
			return m_sourcealphamix;
		}
    
    
    {} // namespace Etc

    
    void SimplifyPolygon(const Path &in_poly, Paths &out_polys, PolyFillType fillType = pftEvenOdd);
void SimplifyPolygons(const Paths &in_polys, Paths &out_polys, PolyFillType fillType = pftEvenOdd);
void SimplifyPolygons(Paths &polys, PolyFillType fillType = pftEvenOdd);
    
    #endif /* KISS_FFT_GUTS_H */

    
    #define SCALEIN(a)      (a)
#define SCALEOUT(a)     (a)
    
    /* a32 + (b32 * (c32 >> 16)) >> 16 */
#undef silk_SMLAWT
#define silk_SMLAWT(a, b, c) ((a) + silk_SMULWT(b, c))
    
    /* a32 + (opus_int32)((opus_int16)(b32)) * (opus_int32)((opus_int16)(c32)) output have to be 32bit int */
#undef silk_SMLABB
static OPUS_INLINE opus_int32 silk_SMLABB_armv5e(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  int res;
  __asm__(
      '#silk_SMLABB\n\t'
      'smlabb %0, %1, %2, %3\n\t'
      : '=r'(res)
      : '%r'(b), 'r'(c), 'r'(a)
  );
  return res;
}
#define silk_SMLABB(a, b, c) (silk_SMLABB_armv5e(a, b, c))
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}
    
    private:
  bool m_get;
  bool m_ignoreErrors;
  const char* m_method;
  Array m_headers;
  String m_postData;
  int m_maxRedirect;
  int m_timeout;
  std::string m_error;
  StringBuffer m_response;
  Array m_responseHeaders;
    
    //////////////////////////////////////////////////////////////////////