
        
        #define SPLIT_QUAD(sgn, bits, n) { \
                                     internal::prefetch(src + sj); \
                                     vec128 v_src = vld##n##q_##sgn##bits(src + sj); \
                                     FILL_LINES##n(VST1Q, sgn##bits) \
                                 }
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(f32, u16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vcvt.u32.f32 q8, q6                                     \n\t'
            'vcvt.u32.f32 q9, q7                                     \n\t'
            'vqmovn.u32 d8, q8                                       \n\t'
            'vqmovn.u32 d9, q9                                       \n\t'
            'vst1.16 {d8-d9}, [%[dst]]                               \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC(f32, u16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        uint32x4_t vline1_u32 = vcvtq_u32_f32(vline1_f32);
        uint32x4_t vline2_u32 = vcvtq_u32_f32(vline2_f32);
        uint16x4_t vRes1 = vqmovn_u32(vline1_u32);
        uint16x4_t vRes2 = vqmovn_u32(vline2_u32);
        vst1q_u16(_dst + i, vcombine_u16(vRes1, vRes2));
    }
})
#endif
    
            int s[2];
        vst1_s32(s, vs2);
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lane[-cn+k] = lane[idx_l1 + k];
                lane[-cn-cn+k] = lane[idx_l2 + k];
    }
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    // Verify that ByteSink is subclassable and Flush() overridable.
class FlushingByteSink : public StringByteSink {
 public:
  explicit FlushingByteSink(string* dest) : StringByteSink(dest) {}
  virtual void Flush() { Append('z', 1); }
 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FlushingByteSink);
};
    
    int main(int argc, const char** argv) {
  FileOutputStream fout(STDOUT_FILENO);
  GzipOutputStream out(&fout);
  int readlen;
    }
    
    
    {
    {    return true;
  }
};
    
     public:
  EnumScrubber()
      : total_added_(0) {
  }
    
    // Main function:  Reads the entire address book from a file,
//   adds one person based on user input, then writes it back out to the same
//   file.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;
    }
    
      ListPeople(address_book);
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
      /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
    #include <vector>
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    	// ----------------------------------------------------------------------------------------------------
	// return a name for the encoding mode
	//
	const char * Block4x4::GetEncodingModeName(void)
	{
    }
    
    											ErrorMetric a_errormetric) = 0;
    
    		DifferentialTrys trys(frgbaColor1, frgbaColor2, pauiPixelMapping1, pauiPixelMapping2, 
								a_uiRadius, a_iGrayOffset1, a_iGrayOffset2);
    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
    /* a32 + (b32 * (c32 >> 16)) >> 16 */
#undef silk_SMLAWT
static OPUS_INLINE opus_int32 silk_SMLAWT_armv5e(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  int res;
  __asm__(
      '#silk_SMLAWT\n\t'
      'smlawt %0, %1, %2, %3\n\t'
      : '=r'(res)
      : 'r'(b), 'r'(c), 'r'(a)
  );
  return res;
}
#define silk_SMLAWT(a, b, c) (silk_SMLAWT_armv5e(a, b, c))
    
    
    {}  // namespace leveldb
    
      // Returns true iff an entry that compares equal to key is in the list.
  bool Contains(const Key& key) const;
    
      // Clients are allowed to register function/arg1/arg2 triples that
  // will be invoked when this iterator is destroyed.
  //
  // Note that unlike all of the preceding methods, this method is
  // not abstract and therefore clients should not override it.
  using CleanupFunction = void (*)(void* arg1, void* arg2);
  void RegisterCleanup(CleanupFunction function, void* arg1, void* arg2);
    
      WriteBatch();
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_H_

    
      if (r->pending_index_entry) {
    assert(r->data_block.empty());
    r->options.comparator->FindShortestSeparator(&r->last_key, key);
    std::string handle_encoding;
    r->pending_handle.EncodeTo(&handle_encoding);
    r->index_block.Add(r->last_key, Slice(handle_encoding));
    r->pending_index_entry = false;
  }
    
    TEST(EnvTest, ReopenWritableFile) {
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file_name = test_dir + '/reopen_writable_file.txt';
  env_->DeleteFile(test_file_name);
    }
    
    int main(int argc, char** argv) {
  // All tests currently run with the same read-only file limits.
  leveldb::EnvWindowsTest::SetFileLimits(leveldb::kMMapLimit);
  return leveldb::test::RunAllTests();
}

    
      fontIDs = NULL;
  fontFileIDs = NULL;
  fontFileNames = NULL;
  font8Info = NULL;
  font16Enc = NULL;
  imgIDs = NULL;
  formIDs = NULL;
  xobjStack = NULL;
  embFontList = NULL;
  customColors = NULL;
  haveTextClip = gFalse;
  haveCSPattern = gFalse;
  t3String = NULL;
    
    
    {  int (*getCharFunc)(void *);
  void *data;
  int charBuf;
};
    
      // Accessors.
  PDFRectangle *getMediaBox() { return &mediaBox; }
  PDFRectangle *getCropBox() { return &cropBox; }
  GBool isCropped() { return haveCropBox; }
  PDFRectangle *getBleedBox() { return &bleedBox; }
  PDFRectangle *getTrimBox() { return &trimBox; }
  PDFRectangle *getArtBox() { return &artBox; }
  int getRotate() { return rotate; }
  GooString *getLastModified()
    { return lastModified.isString()
	? lastModified.getString() : (GooString *)NULL; }
  Dict *getBoxColorInfo()
    { return boxColorInfo.isDict() ? boxColorInfo.getDict() : (Dict *)NULL; }
  Dict *getGroup()
    { return group.isDict() ? group.getDict() : (Dict *)NULL; }
  Stream *getMetadata()
    { return metadata.isStream() ? metadata.getStream() : (Stream *)NULL; }
  Dict *getPieceInfo()
    { return pieceInfo.isDict() ? pieceInfo.getDict() : (Dict *)NULL; }
  Dict *getSeparationInfo()
    { return separationInfo.isDict()
	? separationInfo.getDict() : (Dict *)NULL; }
  Dict *getResourceDict()
    { return resources.isDict() ? resources.getDict() : (Dict *)NULL; }
    
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
    
    void
ProfileData::addElement (double elapsed) {
	if (count == 0) {
		min = elapsed;
		max = elapsed;
	} else {
		if (elapsed < min)
			min = elapsed;
		if (elapsed > max)
			max = elapsed;
	}
	total += elapsed;
	count ++;
}
    
      //----- path painting
  virtual void stroke(GfxState *state);
  virtual void fill(GfxState *state);
  virtual void eoFill(GfxState *state);
  virtual GBool axialShadedFill(GfxState *state, GfxAxialShading *shading, double tMin, double tMax);
  virtual GBool gouraudTriangleShadedFill(GfxState *state, GfxGouraudTriangleShading *shading);
    
    int StdinCacheLoader::load(const std::vector<ByteRange> &ranges, CachedFileWriter *writer)
{
  return 0;
}