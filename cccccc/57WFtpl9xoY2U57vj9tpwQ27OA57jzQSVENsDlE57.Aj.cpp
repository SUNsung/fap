
        
        
    {    return GenericTypeParamType::get(genericParam->getDepth(),
                                     genericParam->getIndex(), ctx);
  };
  auto conformanceToSyntheticConformanceFn =
      MakeAbstractConformanceForGenericType();
    
    
    {}
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
    void PrefixMapKeyPrinter<unsigned char>::print(raw_ostream &out,
                                               ArrayRef<unsigned char> key) {
  out << '\'';
  for (auto byte : key) {
    if (byte < 16) out << '0';
    out.write_hex(byte);
  }
  out << '\'';
}

    
      IsFirstLine = true;
  for (auto &Line : Lines) {
    if (!IsFirstLine) {
      Line = Line.drop_front(WhitespaceToTrim);
    }
    IsFirstLine = false;
  }
    
    bool importer::isCFTypeDecl(
       const clang::TypedefNameDecl *Decl) {
  if (CFPointeeInfo::classifyTypedef(Decl))
    return true;
  return false;
}
    
    
    {
    {    switch (Bytes) {
    case 1:
      OutUTF8.push_back(S);
      break;
    case 2: {
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xC0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      break;
    }
    case 3: {
      uint8_t Byte3 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xE0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      OutUTF8.push_back(Byte3);
      break;
    }
    case 4: {
      uint8_t Byte4 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte3 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xF0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      OutUTF8.push_back(Byte3);
      OutUTF8.push_back(Byte4);
      break;
    }
    }
  }
  return true;
}
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
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
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[2]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[1]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[0]);
    
    
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
    
    									unsigned char *a_paucEncodingBits, ErrorMetric a_errormetric) = 0;
    
    #define UNIT_QUANT_SHIFT 2
#define UNIT_QUANT_FACTOR (1 << UNIT_QUANT_SHIFT)
    
      All rights reserved.
    
    
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#undef MAC16_32_Q15
#define MAC16_32_Q15(c, a, b) ADD32(c, MULT16_32_Q15(a, b))
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    void silk_insertion_sort_increasing_all_values_int16(
     opus_int16                 *a,                 /* I/O   Unsorted / Sorted vector                                   */
     const opus_int             L                   /* I     Vector length                                              */
);
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
    
    {REGISTER_INTERNAL(KafkaTopicsConfigParserPlugin,
                  'config_parser',
                  'kafka_topics');
} // namespace osquery

    
    ExpectedSuccess<DatabaseError> Database::putInt32(const std::string& domain,
                                                  const std::string& key,
                                                  const int32_t value) {
  std::string buffer = std::to_string(value);
  return putString(domain, key, buffer);
}
    
    Expected<std::string, DatabaseError> InMemoryDatabase::getString(
    const std::string& domain, const std::string& key) {
  return getValue<std::string>(domain, key);
}
    
    /// The saved exit code from a thread's request to stop the process.
volatile std::sig_atomic_t kExitCode{0};