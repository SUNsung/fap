
        
        
    {
    {    return module;
#endif
  }
}
    
    namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
      virtual bool Generate(const FileDescriptor* file, const string& parameter,
                        GeneratorContext* context, string* error) const {
    file->CopyTo(file_);
    return true;
  }
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
#include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    int ImmutableExtensionLiteGenerator::GenerateNonNestedInitializationCode(
    io::Printer* printer) {
  return 0;
}
    
    ImmutableMapFieldGenerator::
ImmutableMapFieldGenerator(const FieldDescriptor* descriptor,
                                       int messageBitIndex,
                                       int builderBitIndex,
                                       Context* context)
  : descriptor_(descriptor), name_resolver_(context->GetNameResolver())  {
  SetMessageVariables(descriptor, messageBitIndex, builderBitIndex,
                      context->GetFieldGeneratorInfo(descriptor),
                      context, &variables_);
}
    
    ClassNameResolver::~ClassNameResolver() {
}
    
        extensions_descriptor_ =
      pool_.FindMessageTypeByName('protobuf_unittest.TestAllExtensions');
    ASSERT_TRUE(extensions_descriptor_ != NULL);
    extensions_prototype_ = factory_.GetPrototype(extensions_descriptor_);
    
    
    {
    {        for (; j < size.width; j++)
        {
            dst[j] = ~src[j];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(u16, u8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src1]]                             \n\t'
             'vqmovn.u16 d4, q0                                     \n\t'
             'vld1.8 {d2-d3}, [%[src2]]                             \n\t'
             'vqmovn.u16 d5, q1                                     \n\t'
             'vst1.8 {d4-d5}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i),
               [src2] 'r' (_src + i + 8),
               [dst] 'r' (_dst + i + 0)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(u16, u8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         uint16x8_t vline1_u16 = vld1q_u16(_src + i);
         uint16x8_t vline2_u16 = vld1q_u16(_src + i + 8);
    }
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #ifndef TESSERACT_ARCH_DOTPRODUCTSSE_H_
#define TESSERACT_ARCH_DOTPRODUCTSSE_H_
    
      // The ColPartitions in part_grid_ maybe over-segmented, particularly in the
  // block equation regions. So we like to identify these partitions and merge
  // them before we do the searching.
  void MergePartsByLocation();
    
      /**
   * Returns true if the iterator is at the start of an object at the given
   * level.
   *
   * For instance, suppose an iterator it is pointed to the first symbol of the
   * first word of the third line of the second paragraph of the first block in
   * a page, then:
   *   it.IsAtBeginningOf(RIL_BLOCK) = false
   *   it.IsAtBeginningOf(RIL_PARA) = false
   *   it.IsAtBeginningOf(RIL_TEXTLINE) = true
   *   it.IsAtBeginningOf(RIL_WORD) = true
   *   it.IsAtBeginningOf(RIL_SYMBOL) = true
   */
  virtual bool IsAtBeginningOf(PageIteratorLevel level) const;
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    workspace.ResetWorkspace()
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    AuthPropertyIterator AuthPropertyIterator::operator++(int) {
  AuthPropertyIterator tmp(*this);
  operator++();
  return tmp;
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    MeasureDouble RpcClientRoundtripLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientRoundtripLatencyMeasureName,
      'Time between first byte of request sent to last byte of response '
      'received, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    	virtual void getAllContactManifolds(btManifoldArray &manifoldArray) {
		///should we use m_ownManifold to avoid adding duplicates?
		if (m_manifoldPtr && m_ownManifold)
			manifoldArray.push_back(m_manifoldPtr);
	}
	struct CreateFunc : public btCollisionAlgorithmCreateFunc {
    }
    
    	virtual PhysicsServer::JointType get_type() const { return PhysicsServer::JOINT_HINGE; }
    
    /**
	@author AndreaCatania
*/
    
    public:
	/// Reference frame is A
	SliderJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Transform &frameInA, const Transform &frameInB);
    
    
    {#ifdef TOOLS_ENABLED
	EditorPlugins::add_by_type<EditorPluginCSG>();
#endif
#endif
}
    
    
    {	bool operator()(const Pair<F, S> &A, const Pair<F, S> &B) const {
		return A.first < B.first;
	}
};
    
    
    {    if (fAltInputText != NULL) {
        pos = utext_getNativeIndex(fAltInputText);
        fAltInputText = utext_clone(fAltInputText, input, FALSE, TRUE, &status);
        if (U_FAILURE(status)) {
            return *this;
        }
        utext_setNativeIndex(fAltInputText, pos);
    }
    return *this;
}
    
    Transliterator* RemoveTransliterator::clone(void) const {
    Transliterator* result = new RemoveTransliterator();
    if (result != NULL && getFilter() != 0) {
        result->adoptFilter((UnicodeFilter*)(getFilter()->clone()));
    }
    return result;
}
    
    static const UChar kSuperscriptDigits[] = {
        0x2070,
        0xB9,
        0xB2,
        0xB3,
        0x2074,
        0x2075,
        0x2076,
        0x2077,
        0x2078,
        0x2079};
    
    int32_t SearchIterator::preceding(int32_t position, 
                                      UErrorCode &status)
{
    if (U_FAILURE(status)) {
        return USEARCH_DONE;
    }
    setOffset(position, status);
    return handlePrev(position, status);
}
    
    void
SelectFormat::applyPattern(const UnicodeString& newPattern, UErrorCode& status) {
    if (U_FAILURE(status)) {
      return;
    }
    }
    
    U_NAMESPACE_BEGIN
    
    #include 'unicode/unistr.h'
    
    #endif // #if !UCONFIG_NO_FORMATTING

    
    
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
    
    int32_t StandardPlural::indexOrNegativeFromString(const UnicodeString &keyword) {
    switch (keyword.length()) {
    case 3:
        if (keyword.compare(gOne, 3) == 0) {
            return ONE;
        } else if (keyword.compare(gTwo, 3) == 0) {
            return TWO;
        } else if (keyword.compare(gFew, 3) == 0) {
            return FEW;
        }
        break;
    case 4:
        if (keyword.compare(gMany, 4) == 0) {
            return MANY;
        } else if (keyword.compare(gZero, 4) == 0) {
            return ZERO;
        }
        break;
    case 5:
        if (keyword.compare(gOther, 5) == 0) {
            return OTHER;
        }
        break;
    default:
        break;
    }
    return -1;
}
    
    /**
 * UnicodeReplacer API
 */
int32_t StringMatcher::replace(Replaceable& text,
                               int32_t start,
                               int32_t limit,
                               int32_t& /*cursor*/) {
    
    int32_t outLen = 0;
    
    // Copy segment with out-of-band data
    int32_t dest = limit;
    // If there was no match, that means that a quantifier
    // matched zero-length.  E.g., x (a)* y matched 'xy'.
    if (matchStart >= 0) {
        if (matchStart != matchLimit) {
            text.copy(matchStart, matchLimit, dest);
            outLen = matchLimit - matchStart;
        }
    }
    
    text.handleReplaceBetween(start, limit, UnicodeString()); // delete original text
    
    return outLen;
}
    
    
    {        UnicodeReplacer* r = data->lookupReplacer(c);
        if (r == NULL) {
            ICU_Utility::appendToRule(rule, c, FALSE, escapeUnprintable, quoteBuf);
        } else {
            UnicodeString buf;
            r->toReplacerPattern(buf, escapeUnprintable);
            buf.insert(0, (UChar)0x20);
            buf.append((UChar)0x20);
            ICU_Utility::appendToRule(rule, buf,
                                      TRUE, escapeUnprintable, quoteBuf);
        }
    }