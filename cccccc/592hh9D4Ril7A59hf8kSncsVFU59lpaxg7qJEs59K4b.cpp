
        
        
    {    return GenericTypeParamType::get(genericParam->getDepth(),
                                     genericParam->getIndex(), ctx);
  };
  auto conformanceToSyntheticConformanceFn =
      MakeAbstractConformanceForGenericType();
    
    void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
    bool importer::isCFTypeDecl(
       const clang::TypedefNameDecl *Decl) {
  if (CFPointeeInfo::classifyTypedef(Decl))
    return true;
  return false;
}
    
    static SourceLoc findEndOfLine(SourceManager &SM, SourceLoc loc,
                               unsigned bufferID) {
  CharSourceRange entireBuffer = SM.getRangeForBuffer(bufferID);
  CharSourceRange rangeFromLoc{SM, loc, entireBuffer.getEnd()};
  StringRef textFromLoc = SM.extractText(rangeFromLoc);
  size_t newlineOffset = textFromLoc.find_first_of({'\r\n\0', 3});
  if (newlineOffset == StringRef::npos)
    return entireBuffer.getEnd();
  return loc.getAdvancedLoc(newlineOffset);
}
    
    bool Mangle::needsPunycodeEncoding(StringRef str) {
  for (unsigned char c : str) {
    if (!isValidSymbolChar(c))
      return true;
  }
  return false;
}
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    
    {  // -- Build the decoded string as UTF32 first because we need random access.
  uint32_t n = initial_n;
  int i = 0;
  int bias = initial_bias;
  /// let output = an empty string indexed from 0
  // consume all code points before the last delimiter (if there is one)
  //  and copy them to output,
  size_t lastDelimiter = InputPunycode.find_last_of(delimiter);
  if (lastDelimiter != StringRef::npos) {
    for (char c : InputPunycode.slice(0, lastDelimiter)) {
      // fail on any non-basic code point
      if (static_cast<unsigned char>(c) > 0x7f)
        return true;
      OutCodePoints.push_back(c);
    }
    // if more than zero code points were consumed then consume one more
    //  (which will be the last delimiter)
    InputPunycode =
        InputPunycode.slice(lastDelimiter + 1, InputPunycode.size());
  }
  
  while (!InputPunycode.empty()) {
    int oldi = i;
    int w = 1;
    for (int k = base; ; k += base) {
      // consume a code point, or fail if there was none to consume
      if (InputPunycode.empty())
        return true;
      char codePoint = InputPunycode.front();
      InputPunycode = InputPunycode.slice(1, InputPunycode.size());
      // let digit = the code point's digit-value, fail if it has none
      int digit = digit_index(codePoint);
      if (digit < 0)
        return true;
      
      i = i + digit * w;
      int t = k <= bias ? tmin
            : k >= bias + tmax ? tmax
            : k - bias;
      if (digit < t)
        break;
      w = w * (base - t);
    }
    bias = adapt(i - oldi, OutCodePoints.size() + 1, oldi == 0);
    n = n + i / (OutCodePoints.size() + 1);
    i = i % (OutCodePoints.size() + 1);
    // if n is a basic code point then fail
    if (n < 0x80)
      return true;
    // insert n into output at position i
    OutCodePoints.insert(OutCodePoints.begin() + i, n);
    i++;
  }
  
  return true;
}
    
    void ModuleWrapJobAction::anchor() {}
    
            size_t width;
        size_t height;
    
    namespace {
    }
    
    void bitwiseOr(const Size2D &size,
               const u8 *src0Base, ptrdiff_t src0Stride,
               const u8 *src1Base, ptrdiff_t src1Stride,
               u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseOr());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
            // perform vertical convolution
        for ( ; x <= bwidth; x += 8)
        {
            internal::prefetch(srow0 + x);
            internal::prefetch(srow1 + x);
            internal::prefetch(srow2 + x);
    }
    
    #define CONTSRC2 dstStride == src0Stride && \
                 dstStride == src1Stride &&
#define CONTSRC3 dstStride == src0Stride && \
                 dstStride == src1Stride && \
                 dstStride == src2Stride &&
#define CONTSRC4 dstStride == src0Stride && \
                 dstStride == src1Stride && \
                 dstStride == src2Stride && \
                 dstStride == src3Stride &&
    
                    uint8x8x3_t vRes;
                vRes.val[0] = vrshrn_n_u16(vSum_0_4, 8);
                vRes.val[1] = vrshrn_n_u16(vSum_1_5, 8);
                vRes.val[2] = vrshrn_n_u16(vSum_2_6, 8);
    
    
    {	
};
    
    					if (imageformat == Image::Format::R11 ||
						imageformat == Image::Format::SIGNED_R11)
					{
						m_afrgbaSource[uiPixel].fA = 1.0f;
						m_afrgbaSource[uiPixel].fG = 0.0f;
						m_afrgbaSource[uiPixel].fB = 0.0f;
					}
    
    #define opus_fft_alloc_arch(_st, arch) \
   ((void)(arch), opus_fft_alloc_arm_neon(_st))
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /* (a32 * (b32 >> 16)) >> 16 */
#undef silk_SMULWT
static OPUS_INLINE opus_int32 silk_SMULWT_armv5e(opus_int32 a, opus_int32 b)
{
  int res;
  __asm__(
      '#silk_SMULWT\n\t'
      'smulwt %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULWT(a, b) (silk_SMULWT_armv5e(a, b))
    
    
    {  m_last_elem_pos += 1;
  return offset;
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
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
    public:
  virtual ~IDebuggable() {}
    
    IMPLEMENT_RESOURCE_ALLOCATION(PlainDirectory)
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionHandler> handler(new ExtensionHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
    
    {};
    
    #pragma once
    
    
    {
    {struct mei_version {
  uint32_t important_details[7];
  uint16_t major;
  uint16_t minor;
  uint16_t hotfix;
  uint16_t build;
  uint16_t r_major;
  uint16_t r_minor;
  uint16_t r_hotfix;
  uint16_t r_build;
  uint16_t codes[6];
};
}
}

    
    TEST_F(kernelExtensions, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_extensions');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'idx', IntType}
  //      {'refs', IntType}
  //      {'size', IntType}
  //      {'name', NormalType}
  //      {'version', NormalType}
  //      {'linked_against', NormalType}
  //      {'path', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    TEST_F(kernelIntegrity, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_integrity');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'sycall_addr_modified', IntType}
  //      {'text_segment_hash', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery
