
        
          std::size_t capacity = End - Allocated;
  std::size_t requiredCapacity = capacity + needed;
  do {
    capacity = 2 * capacity + 16;
  } while (capacity < requiredCapacity);
    
    const uint16_t swift::unicode::ExtendedGraphemeClusterNoBoundaryRulesMatrix[] = {
% for row in get_extended_grapheme_cluster_rules_matrix(break_table):
  ${row},
% end
};
    
    void BackendJobAction::anchor() {}
    
    namespace swift {
namespace driver {
namespace toolchains {
    }
    }
    }
    
    ArgsToFrontendInputsConverter::ArgsToFrontendInputsConverter(
    DiagnosticEngine &diags, const ArgList &args)
    : Diags(diags), Args(args),
      FilelistPathArg(args.getLastArg(options::OPT_filelist)),
      PrimaryFilelistPathArg(args.getLastArg(options::OPT_primary_filelist)) {}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    
    {}  // namespace nwapi
    
    #ifndef CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
#define CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
        protected:
      ~NwScreenGetScreensFunction() override {}
      DECLARE_EXTENSION_FUNCTION('nw.Screen.getScreens', UNKNOWN)
    
    
/*
 * Given sines and cosines, tells if A's angle is less than B's on -Pi, Pi
 * (in other words, is A 'righter' than B)
 */
bool IsRighter(float32 sinA, float32 cosA, float32 sinB, float32 cosB){
	if (sinA < 0){
		if (sinB > 0 || cosA <= cosB) return true;
		else return false;
	} else {
		if (sinB < 0 || cosA <= cosB) return false;
		else return true;
	}
}
    
    int32 remainder(int32 x, int32 modulus);
int32 TriangulatePolygon(float32* xv, float32* yv, int32 vNum, b2Triangle* results);
bool IsEar(int32 i, float32* xv, float32* yv, int32 xvLength); //Not for external use
int32 PolygonizeTriangles(b2Triangle* triangulated, int32 triangulatedLength, b2Polygon* polys, int32 polysLength);
int32 DecomposeConvex(b2Polygon* p, b2Polygon* results, int32 maxPolys);
//void DecomposeConvexAndAddTo(b2Polygon* p, b2Body* bd, b2FixtureDef* prototype);
    
    	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmapImages,
		int *a_piEncodingTime_ms, 
		bool a_bVerboseOutput)
	{
		auto mipWidth = a_uiSourceWidth;
		auto mipHeight = a_uiSourceHeight;
		int totalEncodingTime = 0;
		for(unsigned int mip = 0; mip < a_uiMaxMipmaps && mipWidth >= 1 && mipHeight >= 1; mip++)
		{
			float* pImageData = nullptr;
			float* pMipImage = nullptr;
    }
    }
    
    
    {		case Image::Format::R11:
		case Image::Format::SIGNED_R11:
			m_pencoding = new Block4x4Encoding_R11;
			break;
		case Image::Format::RG11:
		case Image::Format::SIGNED_RG11:
			m_pencoding = new Block4x4Encoding_RG11;
			break;
		default:
			assert(0);
			break;
		}
    
    
    {} // namespace Etc
    
    
    {			default:
				return 0;
				break;
			}
    
    #define FASTLZ_VERSION_MAJOR     0
#define FASTLZ_VERSION_MINOR     0
#define FASTLZ_VERSION_REVISION  0
    
    /* Chirp (bandwidth expand) LP AR filter */
void silk_bwexpander(
    opus_int16                  *ar,                /* I/O  AR filter to be expanded (without leading 1)                */
    const opus_int              d,                  /* I    Length of ar                                                */
    opus_int32                  chirp_Q16           /* I    Chirp factor (typically in the range 0 to 1)                */
);
    
    /* (a32 * (b32 >> 16)) >> 16 */
#undef silk_SMULWT
static OPUS_INLINE opus_int32 silk_SMULWT_armv4(opus_int32 a, opus_int32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#silk_SMULWT\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(a), 'r'(b&~0xFFFF)
  );
  return rd_hi;
}
#define silk_SMULWT(a, b) (silk_SMULWT_armv4(a, b))
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv5e(opus_int32 a, opus_int16 b)
{
  int res;
  __asm__(
      '#silk_SMULWB\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv5e(a, b))
    
    #define GTEST_ASSERT_(expression, on_failure) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (const ::testing::AssertionResult gtest_ar = (expression)) \
    ; \
  else \
    on_failure(gtest_ar.failure_message())
    
      // Returns true iff the path is ''.
  bool IsEmpty() const { return pathname_.empty(); }
    
      // Returns the fraction bits of this number.
  Bits fraction_bits() const { return kFractionBitMask & u_.bits_; }
    
    template <>
class Get<0> {
 public:
  template <class Tuple>
  static GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(0, Tuple))
  Field(Tuple& t) { return t.f0_; }  // NOLINT
    }
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
    // We will track memory used by this class.
class Water {
 public:
  // Normal Water declarations go here.
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
  // If current colorspace ist pattern,
  // need this device special handling for masks in pattern colorspace?
  // Default is false
  virtual GBool fillMaskCSPattern(GfxState * state)
  	{ return state->getFillColorSpace()->getMode() == csPattern && (level != psLevel1 && level != psLevel1Sep); }
  virtual void endMaskClip(GfxState * /*state*/);
    
    
    {    if (digit_value <= prev_digit_value)
      value += digit_value;
    else
      value += digit_value - prev_digit_value * 2;
    prev_digit_value = digit_value;
  }
    
    //------------------------------------------------------------------------
// PageTransition
//------------------------------------------------------------------------
    
    // if changed remember to keep in sync with frontend enums
enum PageTransitionType {
  transitionReplace = 0,
  transitionSplit,
  transitionBlinds,
  transitionBox,
  transitionWipe,
  transitionDissolve,
  transitionGlitter,
  transitionFly,
  transitionPush,
  transitionCover,
  transitionUncover,
  transitionFade
};
    
    //------------------------------------------------------------------------
// Parser
//------------------------------------------------------------------------
    
    
    {    Object item;
};
    
    
    {  private:
    XRef *xref;
    PopplerCache *cache;
};
    
    //------------------------------------------------------------------------
// ProfileData
//------------------------------------------------------------------------
    
    
    {	  // TODO: D might be a form XObject too
	} else {
	  error (-1, 'Invalid Media Clip Data');
	  ok = gFalse;
	}
	obj1.free();
    
    #ifdef _WIN32
#include <fcntl.h> // for O_BINARY
#include <io.h>    // for setmode
#endif
#include <stdio.h>
    
    class StdinCacheLoader : public CachedFileLoader {
    }
    
        // Identical-prefix test.
    int32_t equalPrefixLength = 0;
    {
        UChar32 leftUnit;
        UChar32 rightUnit;
        while((leftUnit = left.next(&left)) == (rightUnit = right.next(&right))) {
            if(leftUnit < 0) { return UCOL_EQUAL; }
            ++equalPrefixLength;
        }
    }
    
    
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    int ClusterGeneralInfo701::dynprop(const std::uint8_t* bytes,
                                   int32_t length) const {
  Byte t0(bytes + 6);
  uint32_t x = t0.get_byte(0, 3);
  int ret = x;
  return ret;
}
    
    
    {  int ret = x;
  return ret;
}
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
    -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     2, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    -2,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    -1,  2, -1,  0,  0,  0,  0,  0,  0,  0,
     1, -2,  1,  0,  0,  0,  0,  0,  0,  0,
     0, -1,  2, -1,  0,  0,  0,  0,  0,  0,
     0,  1, -2,  1,  0,  0,  0,  0,  0,  0,
     0,  0, -1,  2, -1,  0,  0,  0,  0,  0,
     0,  0,  1, -2,  1,  0,  0,  0,  0,  0,
     0,  0,  0, -1,  2, -1,  0,  0,  0,  0,
     0,  0,  0,  1, -2,  1,  0,  0,  0,  0,
     0,  0,  0,  0, -1,  2, -1,  0,  0,  0,
     0,  0,  0,  0,  1, -2,  1,  0,  0,  0,
     0,  0,  0,  0,  0, -1,  2, -1,  0,  0,
     0,  0,  0,  0,  0,  1, -2,  1,  0,  0,
     0,  0,  0,  0,  0,  0, -1,  2, -1,  0,
     0,  0,  0,  0,  0,  0,  1, -2,  1,  0,
     0,  0,  0,  0,  0,  0,  0, -1,  2, -1,
     0,  0,  0,  0,  0,  0,  0,  1, -2,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
      kernel.AddReferenceLineKernelMatrix(index_list, pos_list, 10.0);
    
    void SplineSegKernel::CalculateFx(const uint32_t num_params) {
  kernel_fx_ = Eigen::MatrixXd::Zero(num_params, num_params);
  for (int r = 0; r < kernel_fx_.rows(); ++r) {
    for (int c = 0; c < kernel_fx_.cols(); ++c) {
      kernel_fx_(r, c) = 1.0 / (r + c + 1.0);
    }
  }
}
    
    // config detail: {'name': 'manual_input', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 7,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::manual_input(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    // config detail: {'name': 'veh_can_timeout', 'offset': 0.0, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 2,
// 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
bool Globalrpt6a::veh_can_timeout(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(2, 1);
    }
    
    Lens3D* Lens3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Lens3D();
    a->initWithDuration(_duration, _gridSize, _position, _radius);
    a->autorelease();
    return a;
}
    
    /** @class __CCCallFuncND
 * @deprecated Please use CallFuncN instead.
 * @brief Calls a 'callback' with the node as the first argument and the 2nd argument is data.
 * ND means: Node and Data. Data is void *, so it could be anything.
 * @js NA
 */
class CC_DLL  __CCCallFuncND : public CallFunc
{
public:
    /** Creates the action with the callback and the data to pass as an argument.
     *
     * @param target    A certain target.
     * @param selector  The callback need to be executed.
     * @param d Data, is void* type.
     * @return An autoreleased __CCCallFuncND object.
     */
    CC_DEPRECATED_ATTRIBUTE static __CCCallFuncND * create(Ref* target, SEL_CallFuncND selector, void* d);
    
    //
    // Overrides
    //
    virtual __CCCallFuncND* clone() const override;
    virtual void execute() override;
    
CC_CONSTRUCTOR_ACCESS:
    __CCCallFuncND() {}
    virtual ~__CCCallFuncND() {}
    
    /** initializes the action with the callback and the data to pass as an argument */
    bool initWithTarget(Ref* target, SEL_CallFuncND selector, void* d);
    }
    
        /** Removes an action given its tag and the target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     */
    virtual void removeActionByTag(int tag, Node *target);
    
    /** Removes all actions given its tag and the target.
     *
     * @param tag       The actions' tag.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeAllActionsByTag(int tag, Node *target);
    
    /**
@brief TurnOffTiles action.
@details Turn off the target node with many tiles in random order.
 */
class CC_DLL TurnOffTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize);
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
        /** Returns the tile gid at a given tile coordinate. It also returns the tile flags.
     * 
     * @param tileCoordinate The tile coordinate.
     * @param flags A TMXTileFlags.
     * @return The tile gid at a given tile coordinate. It also returns the tile flags.
     */
    int getTileGIDAt(const Vec2& tileCoordinate, TMXTileFlags* flags = nullptr);
    
    
