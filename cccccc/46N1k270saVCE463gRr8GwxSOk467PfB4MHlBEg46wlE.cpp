
        
        struct cvhalFilter2D;
    
    #include 'common.hpp'
#include 'vtransform.hpp'
    
        //last line
    if(i < size.height)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp1 = internal::borderInterpolate(i + 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
            map = (u8*)(mag_buf[2] + mapstep*cn);
        memset(map, 1, mapstep);
        memset(map + mapstep*(size.height + 1), 1, mapstep);
    }
    inline void firstRow(const Size2D &size, s32 cn,
                         const u8 *, ptrdiff_t,
                         s16* dxBase, ptrdiff_t dxStride,
                         s16* dyBase, ptrdiff_t dyStride,
                         s32** mag_buf)
    {
        s32* _norm = mag_buf[1] + 1;
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    
    {    minLocCount >>= 1;
    maxLocCount >>= 1;
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)minVal;
    (void)minLocPtr;
    (void)minLocCount;
    (void)minLocCapacity;
    (void)maxVal;
    (void)maxLocPtr;
    (void)maxLocCount;
    (void)maxLocCapacity;
#endif
}
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    void Assembler::li64 (const Reg64& rt, int64_t imm64, bool fixedSize) {
  // li64 always emits 5 instructions i.e. 20 bytes of instructions.
  // Assumes that 0 bytes will be missing in the end.
  uint8_t missing = 0;
    }
    
    namespace HPHP {
    }
    
    std::string Config::IniName(const std::string& config,
                            bool prepend_hhvm /* = true */) {
  std::string out = '';
  if (prepend_hhvm) {
    out += 'hhvm.';
  }
  size_t idx = 0;
  for (auto& c : config) {
    // This is the first or last character
    if (idx == 0 || idx == config.length() - 1) {
      out += tolower(c);
    } else if (!isalpha(c)) {
      // Any . or _ or numeral is just output with no special behavior
      out += c;
    } else {
      if (isupper(c) && isupper(config[idx - 1 ]) && islower(config[idx + 1])) {
      // Handle something like 'SSLPort', and c = 'P', which will then put
      // the underscore between the 'L' and 'P'
        out += '_';
        out += tolower(c);
      } else if (islower(c) && isupper(config[idx + 1])) {
      // Handle something like 'PathDebug', and c = 'h', which will then put
      // the underscore between the 'h' and 'D'
        out += tolower(c);
        out += '_';
      } else {
      // Otherwise we just output as lower
        out += tolower(c);
      }
    }
    idx++;
  }
    }
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
        UCollationResult result;
    if(settings->dontCheckFCD()) {
        UIterCollationIterator leftIter(data, numeric, left);
        UIterCollationIterator rightIter(data, numeric, right);
        result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
    } else {
        FCDUIterCollationIterator leftIter(data, numeric, left, equalPrefixLength);
        FCDUIterCollationIterator rightIter(data, numeric, right, equalPrefixLength);
        result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
    }
    if(result != UCOL_EQUAL || settings->getStrength() < UCOL_IDENTICAL || U_FAILURE(errorCode)) {
        return result;
    }
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_NAMESPACE_BEGIN
    
    #include 'gregoimp.h'
#include 'umutex.h'
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeMatcher* pointer
 * and return the pointer.
 */
UnicodeMatcher* StringMatcher::toMatcher() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeMatcher *nonconst_base = static_cast<UnicodeMatcher *>(nonconst_this);
  
  return nonconst_base;
}
    
    
    {        // Delete the old text (the key)
        text.handleReplaceBetween(start + outLen, limit + outLen, UnicodeString());
    }        
    
    
    {    static BOOST_FORCEINLINE storage_type fetch_xor(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before(order);
        int backup;
        __asm
        {
            mov backup, ebx
            xor edx, edx
            mov edi, storage
            movzx ebx, v
            movzx eax, word ptr [edi]
            align 16
        again:
            mov dx, ax
            xor dx, bx
            lock cmpxchg word ptr [edi], dx
            jne again
            mov v, ax
            mov ebx, backup
        };
        base_type::fence_after(order);
        return v;
    }
};
    
    #include <boost/atomic/detail/config.hpp>
    
    #elif !defined(BOOST_NO_ALIGNMENT)