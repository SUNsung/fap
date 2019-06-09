
        
          // If the conforming type is a class, add a class-constrained 'Self'
  // parameter.
  if (covariantSelf) {
    auto paramTy = GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
    builder.addGenericParameter(paramTy);
  }
    
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
    
    
    
    void AutolinkExtractJobAction::anchor() {}
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    // Author: kenton@google.com (Kenton Varda)
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google

    
    using google::protobuf::Descriptor;
using google::protobuf::DescriptorProto;
using google::protobuf::FileDescriptorProto;
using google::protobuf::FieldDescriptorProto;
using google::protobuf::Message;
using google::protobuf::EnumValueDescriptorProto;
    
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
    
    				
					// for RGB8A1, set source alpha to 0.0 or 1.0
					// set punch through flag
					if (imageformat == Image::Format::RGB8A1 ||
						imageformat == Image::Format::SRGB8A1)
					{
						if (m_afrgbaSource[uiPixel].fA >= 0.5f)
						{
							m_afrgbaSource[uiPixel].fA = 1.0f;
						}
						else
						{
							m_afrgbaSource[uiPixel].fA = 0.0f;
							m_boolPunchThroughPixels = true;
						}
					}
    
    			float fDotProduct = fSourceX*fDecodedX + fSourceY*fDecodedY + fSourceZ*fDecodedZ;
			float fNormalizedDotProduct = 1.0f - 0.5f * (fDotProduct + 1.0f);
			float fDotProductError = fNormalizedDotProduct * fNormalizedDotProduct;
			
			float fLength2 = fDecodedX*fDecodedX + fDecodedY*fDecodedY + fDecodedZ*fDecodedZ;
			float fLength2Error = fabsf(1.0f - fLength2);
    
    #include <assert.h>
#include <float.h>
    
    /* Number of rightshift required to fit the multiplication */
#define silk_NSHIFT_MUL_32_32(a, b)         ( -(31- (32-silk_CLZ32(silk_abs(a)) + (32-silk_CLZ32(silk_abs(b))))) )
#define silk_NSHIFT_MUL_16_16(a, b)         ( -(15- (16-silk_CLZ16(silk_abs(a)) + (16-silk_CLZ16(silk_abs(b))))) )
    
    // Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static const int kHeaderSize = 4 + 2 + 1;
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed);
    
      // Return an iterator that yields the contents of the memtable.
  //
  // The caller must ensure that the underlying MemTable remains live
  // while the returned iterator is live.  The keys returned by this
  // iterator are internal keys encoded by AppendInternalKey in the
  // db/format.{h,cc} module.
  Iterator* NewIterator();
    
      TableBuilder(const TableBuilder&) = delete;
  TableBuilder& operator=(const TableBuilder&) = delete;
    
    class LEVELDB_EXPORT WriteBatch {
 public:
  class LEVELDB_EXPORT Handler {
   public:
    virtual ~Handler();
    virtual void Put(const Slice& key, const Slice& value) = 0;
    virtual void Delete(const Slice& key) = 0;
  };
    }
    
      size_t FilterSize() const { return filter_.size(); }
    
    TEST(EnvWindowsTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
        bool NDArrayView::IsSliceView()
    {
        switch (m_dataType)
        {
        case DataType::Float:
        {
            auto currentMatrix = GetMatrix<float>();
            return currentMatrix->IsView();
        }
        case DataType::Double:
        {
            auto currentMatrix = GetMatrix<double>();
            return currentMatrix->IsView();
        }
        case DataType::Float16:
        {
            auto currentMatrix = GetMatrix<half>();
            return currentMatrix->IsView();
        }
        case DataType::Int8:
        {
            auto currentMatrix = GetMatrix<char>();
            return currentMatrix->IsView();
        }
        case DataType::Int16:
        {
            auto currentMatrix = GetMatrix<short>();
            return currentMatrix->IsView();
        }
        }
        return false;
    }
    
            bool alreadySet = false;
        if (m_dataFields->m_initValueFlag)
        {
            // In the case of lazy initialization, try to avoid the redundant call to the initializer. 
            std::call_once(*m_dataFields->m_initValueFlag, [=, &value, &alreadySet] {
                // If the variable hasn't been initialized yet, clone the content of the supplied value and delete the initializer.
                m_dataFields->m_value = value->DeepClone(*m_dataFields->m_valueInitializationDevice, false);
                m_dataFields->m_valueInitializer = nullptr;
                m_dataFields->m_valueInitializationDevice = nullptr;
                alreadySet = true;
            });
        }
    
            VariableFields(const NDShape& shape, VariableKind varType, ::CNTK::DataType type, const std::weak_ptr<Function>& ownerFunction, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
            : m_shape(shape), m_varKind(varType), m_dataType(type), m_ownerFunction(ownerFunction), m_value(value), m_needsGradient(needsGradient), m_dynamicAxes(dynamicAxes), m_isSparse(isSparse), m_name(name), m_uid(uid), m_valueTimeStamp(0)
        {
            if (value && (type != value->GetDataType()))
                InvalidArgument('The DataType of the Parameter/Constant Variable '%S' does not match the DataType of the associated Value', AsString().c_str());
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    template <class ElemType>
class SequenceDecoderNode : public ComputationNodeNonLooping /*ComputationNode*/<ElemType>, public NumInputs<3>
{
    typedef ComputationNodeNonLooping<ElemType> Base;
    UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName()
    {
        return L'SequenceDecoderNode';
    }
    }
    
    template <class ElemType>
EpochAccumulatorNode<ElemType>::EpochAccumulatorNode(DEVICEID_TYPE deviceId, const wstring& name)
    : Base(deviceId, name), m_numSamples(0)
{
    m_accumulator = make_shared<Matrix<ElemType>>(deviceId);
}
    
    OrbitCamera * OrbitCamera::create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    OrbitCamera * obitCamera = new (std::nothrow) OrbitCamera();
    if(obitCamera && obitCamera->initWithDuration(t, radius, deltaRadius, angleZ, deltaAngleZ, angleX, deltaAngleX))
    {
        obitCamera->autorelease();
        return obitCamera;
    }
    
    delete obitCamera;
    return nullptr;
}
    
    
    {                    Action *action = _currentTarget->currentAction;
                    // Make currentAction nil to prevent removeAction from salvaging it.
                    _currentTarget->currentAction = nullptr;
                    removeAction(action);
                }
    
                if ( ! spriteFrame ) {
                CCLOG('cocos2d: AnimationCache: Animation '%s' refers to frame '%s' which is not currently in the SpriteFrameCache. This frame will not be added to the animation.', anim.first.c_str(), frameName.asString().c_str());
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    /// @endcond
#endif

    
        /** Release current FNT texture and reload it.
     CAUTION : All component use this font texture should be reset font name, though the file name is same!
               otherwise, it will cause program crash!
    */
    static void reloadFontAtlasFNT(const std::string& fontFileName, const Vec2& imageOffset = Vec2::ZERO);