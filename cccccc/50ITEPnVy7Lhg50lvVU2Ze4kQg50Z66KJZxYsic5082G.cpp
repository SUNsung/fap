
        
        #include <cstdint>      // for int32_t
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
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

    
      // Expand in four directions.
  GenericVector<ColPartition*> parts_to_merge;
  ExpandSeedHorizontal(true, seed, &parts_to_merge);
  ExpandSeedHorizontal(false, seed, &parts_to_merge);
  ExpandSeedVertical(true, seed, &parts_to_merge);
  ExpandSeedVertical(false, seed, &parts_to_merge);
  SearchByOverlap(seed, &parts_to_merge);
    
    
    {}  // namespace tesseract.

    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      // Gets a VC object identified by its ID.
  static ParamContent* GetParamContentById(int id);
    
    class ModelDB: public DB {
 public:
  class ModelSnapshot : public Snapshot {
   public:
    KVMap map_;
  };
    }
    
      Slice in(encoded);
  ParsedInternalKey decoded('', 0, kTypeValue);
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
        if (resyncing_) {
      if (record_type == kMiddleType) {
        continue;
      } else if (record_type == kLastType) {
        resyncing_ = false;
        continue;
      } else {
        resyncing_ = false;
      }
    }
    
      ~Writer();
    
      /**
   * \fn  virtual void Predictor::Init(const std::vector<std::pair<std::string,
   * std::string> >&cfg ,const std::vector<std::shared_ptr<DMatrix> > &cache);
   *
   * \brief Configure and register input matrices in prediction cache.
   *
   * \param cfg   The configuration.
   * \param cache Vector of DMatrix's to be used in prediction.
   */
    
     private:
  char ch_buf_;
  std::string s_name_, s_val_, s_buf_;
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, position, radius))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
    /**
@brief Twirl action.
@details This action is used for take effect on the target node as twirl.
        You can control the effect by these parameters:
        duration, grid size, center position, twirls count, amplitude.
*/
class CC_DLL Twirl : public Grid3DAction
{
public:
    /**
    @brief Create the action with center position, number of twirls, amplitude, a grid size and duration.
    @param duration Specify the duration of the Twirl action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param position Specify the center position of the twirl action.
    @param twirls Specify the twirls count of the Twirl action.
    @param amplitude Specify the amplitude of the Twirl action.
    @return If the creation success, return a pointer of Twirl action; otherwise, return nil.
    */
    static Twirl* create(float duration, const Size& gridSize, const Vec2& position, unsigned int twirls, float amplitude);
    }
    
    CC_CONSTRUCTOR_ACCESS:
    Show(){}
    virtual ~Show(){}
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
}
    
    void ProgressTo::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    _from = ((kProgressTimerCast)(target))->getPercentage();
}
    
        /**
    @brief Get the amplitude rate of the effect.
    @return Return the amplitude rate of the effect.
    */
    float getAmplitudeRate() const { return _amplitudeRate; }
    /**
    @brief Set the amplitude rate of the effect.
    @param amplitudeRate The value of amplitude rate will be set.
    */
    void setAmplitudeRate(float amplitudeRate) { _amplitudeRate = amplitudeRate; }
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    ///////////////////////////////////////////////////////////////////////////////
// Cosine table: C(k) = cos(k.pi/16)/sqrt(2), k = 1..7 using 15 bits signed
const coeff_t kTable04[7] = { 22725, 21407, 19266, 16384, 12873,  8867, 4520 };
// rows #1 and #7 are pre-multiplied by 2.C(1) before the 2nd pass.
// This multiply is merged in the table of constants used during 1st pass:
const coeff_t kTable17[7] = { 31521, 29692, 26722, 22725, 17855, 12299, 6270 };
// rows #2 and #6 are pre-multiplied by 2.C(2):
const coeff_t kTable26[7] = { 29692, 27969, 25172, 21407, 16819, 11585, 5906 };
// rows #3 and #5 are pre-multiplied by 2.C(3):
const coeff_t kTable35[7] = { 26722, 25172, 22654, 19266, 15137, 10426, 5315 };
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    // Returns non-zero if and only if x has a zero byte, i.e. one of
// x & 0xff, x & 0xff00, ..., x & 0xff00000000000000 is zero.
inline uint64_t HasZeroByte(uint64_t x) {
  return (x - 0x0101010101010101ULL) & ~x & 0x8080808080808080ULL;
}
    
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
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    
    {} // namespace aria2

    
    
    {} // namespace aria2

    
    #include 'TimeBasedCommand.h'