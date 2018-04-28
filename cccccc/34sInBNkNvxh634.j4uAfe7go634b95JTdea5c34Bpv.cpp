
        
            60,30,500,    3,18.,  1024
  },
  /* 8: 2048 x 27 */
  {
    8,{0,1,2,2,3,3,4,4},{3,4,3,4,3},{0,1,1,2,2},{-1,0,1,2,3},
    {{4},{5,6},{7,8},{-1,9,10,11},{-1,12,13,14}},
    2,{0,2048,   186,46,744, 12,92,372,1500,  28,66,130, 260,520,1112,
       6,20,36,56,  78,110,158,222,  316,440,624,  928,1300,1700},
    
     function: toplevel residue templates 16/22kHz
 last mod: $Id: residue_16.h 16962 2010-03-11 07:30:34Z xiphmont $
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c5_s_long,&_huff_book__44c5_s_long,
   &_resbook_44s_5,&_resbook_44s_5}
};
static const vorbis_residue_template _res_44s_6[]={
  {2,0,16,  &_residue_44_high,
   &_huff_book__44c6_s_short,&_huff_book__44c6_s_short,
   &_resbook_44s_6,&_resbook_44s_6},
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p5_lfe,&_huff_book__44p5_lfe,
   &_resbook_44p_l5,&_resbook_44p_l5}
};
static const vorbis_residue_template _res_44p51_6[]={
  {2,0,15,  &_residue_44p_hi,
   &_huff_book__44p6_short,&_huff_book__44p6_short,
   &_resbook_44p_6,&_resbook_44p_6},
    
    static const static_bookblock _resbook_8s_0={
  {
    {0},
    {0,0,&_8c0_s_p1_0},
    {0},
    {0,0,&_8c0_s_p3_0},
    {0,0,&_8c0_s_p4_0},
    {0,0,&_8c0_s_p5_0},
    {0,0,&_8c0_s_p6_0},
    {&_8c0_s_p7_0,&_8c0_s_p7_1},
    {&_8c0_s_p8_0,&_8c0_s_p8_1},
    {&_8c0_s_p9_0,&_8c0_s_p9_1,&_8c0_s_p9_2}
   }
};
static const static_bookblock _resbook_8s_1={
  {
    {0},
    {0,0,&_8c1_s_p1_0},
    {0},
    {0,0,&_8c1_s_p3_0},
    {0,0,&_8c1_s_p4_0},
    {0,0,&_8c1_s_p5_0},
    {0,0,&_8c1_s_p6_0},
    {&_8c1_s_p7_0,&_8c1_s_p7_1},
    {&_8c1_s_p8_0,&_8c1_s_p8_1},
    {&_8c1_s_p9_0,&_8c1_s_p9_1,&_8c1_s_p9_2}
   }
};
    
    static inline void vorbis_fpu_setround(vorbis_fpu_control *fpu){
  ogg_int16_t ret;
  ogg_int16_t temp;
  __asm__ __volatile__('fnstcw %0\n\t'
          'movw %0,%%dx\n\t'
          'andw $62463,%%dx\n\t'
          'movw %%dx,%1\n\t'
          'fldcw %1\n\t':'=m'(ret):'m'(temp): 'dx');
  *fpu=ret;
}
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
    // Upsamples img_in with a box-filter, and returns an image with output
// dimensions width x height.
std::vector<float> Upsample2x2(const std::vector<float>& img_in,
                               const int width, const int height) {
  int w = (width + 1) / 2;
  int h = (height + 1) / 2;
  assert(img_in.size() == w * h);
  std::vector<float> img_out(width * height);
  for (int y = 0, p = 0; y < h; ++y) {
    for (int x = 0; x < w; ++x, ++p) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int ix = 0; ix < 2; ++ix) {
          int yy = std::min(height - 1, 2 * y + iy);
          int xx = std::min(width - 1, 2 * x + ix);
          img_out[yy * width + xx] = img_in[p];
        }
      }
    }
  }
  return img_out;
}
    
    #include <cmath>
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
      const std::shared_ptr<SocketCore>& getSocket() const { return socket_; }
    
      OptionHandler::ARG_TYPE argType_;
    
    int64_t AdaptiveFileAllocationIterator::getCurrentLength()
{
  if (!allocator_) {
    return offset_;
  }
  else {
    return allocator_->getCurrentLength();
  }
}
    
    void AnnounceList::announceSuccess()
{
  if (currentTrackerInitialized_) {
    (*currentTier_)->nextEvent();
    auto url = *currentTracker_;
    (*currentTier_)->urls.erase(currentTracker_);
    (*currentTier_)->urls.push_front(std::move(url));
    currentTier_ = std::begin(tiers_);
    currentTracker_ = std::begin((*currentTier_)->urls);
  }
}
    
    AnnounceTier::~AnnounceTier() = default;
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
    #include 'Notifier.h'