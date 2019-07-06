
        
        namespace tensorflow {
    }
    
    namespace tensorflow {
    }
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/stream_executor/platform.h'
    
    bool HostTimer::Start(Stream* stream) {
  return stream->ThenDoHostCallback([this]() { this->StartNow(); }).ok();
}
    
    
    {}  // namespace stream_executor
    
      // Construct a generic signature builder by collecting the constraints
  // from the requirement and the context of the conformance together,
  // because both define the capabilities of the requirement.
  GenericSignatureBuilder builder(ctx);
    
    #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    
    
    static char digit_value(int digit) {
  assert(digit < base && 'invalid punycode digit');
  if (digit < 26)
    return 'a' + digit;
  return 'A' - 26 + digit;
}
    
    #include 'IRGen.h'
#include 'llvm/IR/Value.h'
#include 'llvm/IR/Argument.h'
#include 'llvm/IR/Function.h'
#include 'llvm/IR/Instruction.h'
#include 'llvm/ADT/ilist.h'
#include 'llvm/IR/DerivedTypes.h'
    
    
    {
    {
    {			}
			if (decomposed[i].IsUsable()){
				decomposed[i].AddTo(*toAdd);
				
				bd->CreateFixture((const b2FixtureDef*)toAdd);
			} else if (B2_POLYGON_REPORT_ERRORS){
				printf('Didn't add unusable polygon.  Dumping vertices:\n');
				decomposed[i].print();
			}
Skip:
			;
        }
		delete[] pdarray;
        delete[] decomposed;
		return;// pdarray; //needs to be deleted after body is created
}
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    					if (m_afrgbaSource[uiPixel].fR != 0.0f)
					{
						m_pimageSource->m_numColorValues.fR++;
						//make sure we are getting a float between 0-1
						if (m_afrgbaSource[uiPixel].fR - 1.0f > 0.0f)
						{
							m_pimageSource->m_numOutOfRangeValues.fR++;
						}
					}
    
    			float fDRed = a_frgbaDecodedColor.fR - a_frgbaSourcePixel.fR;
			float fDGreen = a_frgbaDecodedColor.fG - a_frgbaSourcePixel.fG;
			float fDBlue = a_frgbaDecodedColor.fB - a_frgbaSourcePixel.fB;
			float fDAlpha = a_fDecodedAlpha - a_frgbaSourcePixel.fA;
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    static OPUS_INLINE opus_val16 SIG2WORD16_generic(celt_sig x)
{
   x = PSHR32(x, SIG_SHIFT);
   x = MAX32(x, -32768);
   x = MIN32(x, 32767);
   return EXTRACT16(x);
}
#define SIG2WORD16(x) (SIG2WORD16_generic(x))
    
    /* (opus_int32)((opus_int16)(a32)) * (b32 >> 16) */
#undef silk_SMULBT
static OPUS_INLINE opus_int32 silk_SMULBT_armv5e(opus_int32 a, opus_int32 b)
{
  int res;
  __asm__(
      '#silk_SMULBT\n\t'
      'smulbt %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULBT(a, b) (silk_SMULBT_armv5e(a, b))
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11>
internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
    T11> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11) {
  return internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
      T11>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
}
    
    // Implements typed tests.
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
#define GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
    
    // Removes const from a type if it is a const type, otherwise leaves
// it unchanged.  This is the same as tr1::remove_const, which is not
// widely available yet.
template <typename T>
struct RemoveConst { typedef T type; };  // NOLINT
template <typename T>
struct RemoveConst<const T> { typedef T type; };  // NOLINT
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
struct Types31 {
  typedef T1 Head;
  typedef Types30<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31> Tail;
};
    
    template <>
struct Types<$for i, [[internal::None]]> {
  typedef internal::Types0 type;
};
    
    // Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.
    }
    
    inline absl::string_view GetMethod(const grpc_slice* path) {
  if (GRPC_SLICE_IS_EMPTY(*path)) {
    return '';
  }
  // Check for leading '/' and trim it if present.
  return absl::StripPrefix(absl::string_view(reinterpret_cast<const char*>(
                                                 GRPC_SLICE_START_PTR(*path)),
                                             GRPC_SLICE_LENGTH(*path)),
                           '/');
}
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    
    {    if (follow && valid)
    {
        follow->autorelease();
        return follow;
    }
    
    delete follow;
    return nullptr;
    
}
Follow* Follow::clone() const
{
    // no copy constructor
    return Follow::createWithOffset(_followedNode, _offsetX,_offsetY,_worldRect);
    
}
    
        if(needsTranslation)
    {
        Mat4 t;
        Mat4::createTranslation(anchorPoint.x, anchorPoint.y, 0, &t);
        mv = mv * t;
    }
    
    mv = mv * lookupMatrix;
    
        /* Sets the Eye value of the Camera. 
     * 
     * @param eye The Eye value of the Camera.
     * @js NA
     */
    void setEye(const Vec3 &eye);
    void setEye(float x, float y, float z);
    /* Returns the Eye value of the Camera. 
     *
     * @return The Eye value of the Camera.
     * @js NA
     */
    const Vec3& getEye() const { return _eye; }
    /* Sets the Center value of the Camera. 
     *
     * @param center The Center value of the Camera.
     * @js NA
     */
    void setCenter(const Vec3 &center);
    /* Returns the Center value of the Camera. 
     *
     * @return The Center value of the Camera.
     * @js NA
     */
    const Vec3& getCenter() const { return _center; }
    /* Sets the Up value of the Camera. 
     *
     * @param up The Up value of the Camera.
     * @js NA
     */
    void setUp(const Vec3 &up);
    /* Returns the Up value of the Camera. 
     *
     * @return The Up value of the Camera.
     * @js NA
     */
    const Vec3& getUp() const { return _up; }
    
    bool __CCCallFuncND::initWithTarget(Ref* selectorTarget, SEL_CallFuncND selector, void* d)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _data = d;
        _callFuncND = selector;
        return true;
    }
    
    return false;
}
    
    /** @class RemoveSelf
* @brief Remove the node.
*/
class CC_DLL RemoveSelf : public ActionInstant
{
public:
    /** Create the action.
     *
     * @param isNeedCleanUp Is need to clean up, the default value is true.
     * @return An autoreleased RemoveSelf object.
     */
    static RemoveSelf * create(bool isNeedCleanUp = true);
    }
    
    NS_CC_BEGIN
    
        /**
     * set the data to be a pointer to a number of Quads
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad quads
     */
    void setQuads(V3F_C4B_T2F_Quad *quads, int numberOfQuads);
    
        // Overrides
    /**
     * @lua NA
     */
    virtual void onEnter() override;
    /**
     * @lua NA
     */
    virtual void onEnterTransitionDidFinish() override;
    /**
     * @lua NA
     */
    virtual void onExitTransitionDidStart() override;
    /**
     * @lua NA
     */
    virtual void onExit() override;
    virtual void visit(Renderer *renderer, const Mat4 &parentTransform, uint32_t parentFlags) override;
    
    virtual void setCameraMask(unsigned short mask, bool applyChildren = true) override;
    
CC_CONSTRUCTOR_ACCESS:
    ClippingNode();
    
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ClippingNode();
    
    int main(int argc, char** argv) {
  folly::init(&argc, &argv);
  CHECK_GT(argc, 2);
  folly::compareBenchmarkResults(argv[1], argv[2]);
  return 0;
}

    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_array', 0, arguments));
  std::array<int, 3> expected{{sizeof(void*), sizeof(int), sizeof(int64_t)}};
  checkTracepointArguments(arguments, expected);
}
    
      /**
   * Returns a double in [0, 1)
   */
  static double randDouble01() {
    return randDouble01(ThreadLocalPRNG());
  }
    
    /*
 * Encode a single unicode code point into a UTF-8 byte sequence.
 *
 * Return value is undefined if `cp' is an invalid code point.
 */
std::string codePointToUtf8(char32_t cp);
    
      void addWithPriority(Func f, int8_t priority) override {
    executor_->addWithPriority(wrapFunc(std::move(f)), priority);
  }
    
    #include <type_traits>
    
      // no permutations in locality index mapping
  for (size_t cpu = 0; cpu < numCpus; ++cpu) {
    rv.localityIndexByCpu.push_back(cpu);
  }
    
    
    {  T* get() const {
    return p_;
  }
  T* operator->() const {
    return p_;
  }
  explicit operator bool() const {
    return p_ == nullptr ? false : true;
  }
  bool operator==(const counted_ptr<T, Atom>& p) const {
    return get() == p.get();
  }
};
    
    inline std::string familyNameStr(sa_family_t family) {
  switch (family) {
    case AF_INET:
      return 'AF_INET';
    case AF_INET6:
      return 'AF_INET6';
    case AF_UNSPEC:
      return 'AF_UNSPEC';
    case AF_UNIX:
      return 'AF_UNIX';
    default:
      return familyNameStrDefault(family);
  }
}