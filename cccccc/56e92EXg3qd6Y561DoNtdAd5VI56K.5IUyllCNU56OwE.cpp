
        
        using namespace swift;
    
    class SubstitutionMap::Storage final
  : public llvm::FoldingSetNode,
    llvm::TrailingObjects<Storage, Type, ProtocolConformanceRef>
{
  friend TrailingObjects;
    }
    
    void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    
    {  // Lowercase the first letter, append the rest.
  scratch.clear();
  scratch.push_back(clang::toLowercase(string[0]));
  scratch.append(string.begin() + 1, string.end());
  return StringRef(scratch.data(), scratch.size());
}
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
      bool isGetter() const {
    return accessorKind == IAMAccessorKind::Getter;
  }
    
    #include 'swift/Demangling/Demangle.h'
#include 'swift/Demangling/Demangler.h'
#include <cstdio>
    
            if (policy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src0 + j);
                internal::prefetch(src1 + j);
                uint8x16_t v_src0 = vld1q_u8(src0 + j);
                int16x8_t v_src00 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src0)));
                int16x8_t v_src01 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src0)));
                int16x8_t v_src10 = vld1q_s16(src1 + j), v_src11 = vld1q_s16(src1 + j + 8);
                int16x8_t v_dst0 = vqaddq_s16(v_src00, v_src10);
                int16x8_t v_dst1 = vqaddq_s16(v_src01, v_src11);
                vst1q_s16(dst + j, v_dst0);
                vst1q_s16(dst + j + 8, v_dst1);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src0 + j)));
                int16x8_t v_src1 = vld1q_s16(src1 + j);
                int16x8_t v_dst = vqaddq_s16(v_src0, v_src1);
                vst1q_s16(dst + j, v_dst);
            }
    }
    
        void operator() (const uint8x8_t & v_src0, const uint8x8_t & v_src1,
                     uint8x8_t & v_dst) const
    {
        v_dst = vand_u8(v_src0, v_src1);
    }
    
                float32x4_t va = vaddq_f32(lane0a, lane2a);
            float32x4_t vb = vaddq_f32(lane0b, lane2b);
            float32x4_t vc = vaddq_f32(lane0c, lane2c);
            float32x4_t wa = vaddq_f32(va, lane1a);
            float32x4_t wb = vaddq_f32(vb, lane1b);
            float32x4_t wc = vaddq_f32(vc, lane1c);
    
        for (size_t y = 0; y < size.height; ++y)
    {
        const type * src0 = internal::getRowPtr(src0Base, src0Stride, y);
        const type * src1 = internal::getRowPtr(src1Base, src1Stride, y);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, y);
        size_t x = 0;
    }
    
    
    {
    {
    {                for (; j < size.width; j++)
                {
                    dst[j] = src[j] >= 0 ? 0 : 255;
                }
            }
        }
        else
        {
            for (size_t i = 0; i < size.height; ++i)
            {
                u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
                std::memset(dst, 0, sizeof(u8) * size.width);
            }
        }
        return;
    }
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
    #include 'utypeinfo.h'  // for 'typeid' to work
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    /**
 * Decode the end rule and validate the parameters.  This method is exactly
 * analogous to decodeStartRule().
 * @see decodeStartRule
 */
void 
SimpleTimeZone::decodeEndRule(UErrorCode& status) 
{
    if(U_FAILURE(status)) return;
    }
    
    
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
    
    U_NAMESPACE_BEGIN
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
 * and return the pointer.
 */
UnicodeReplacer* StringMatcher::toReplacer() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeReplacer *nonconst_base = static_cast<UnicodeReplacer *>(nonconst_this);
  
  return nonconst_base;
}
    
    #include <folly/GLog.h>
    
    
    {} // namespace folly

    
      bool hasImplementation() {
    performLazyInit();
    return static_cast<bool>(increment_);
  }