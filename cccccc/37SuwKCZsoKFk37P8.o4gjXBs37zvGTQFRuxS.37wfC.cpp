
        
        namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
    void SILGenModule::useConformancesFromType(CanType type) {
  if (!usedConformancesFromTypes.insert(type.getPointer()).second)
    return;
    }
    
    
    {  EXPECT_EQ(31u, vec.size());
  EXPECT_EQ(true, vec[0]);
  EXPECT_EQ(false, vec[1]);
  EXPECT_EQ(true, vec[30]);
}
    
        // Next step: delete dead witness tables.
    SILModule::WitnessTableListType &WTables = Module->getWitnessTableList();
    for (auto Iter = WTables.begin(), End = WTables.end(); Iter != End;) {
      SILWitnessTable *Wt = &*Iter;
      Iter++;
      if (!isAlive(Wt)) {
        LLVM_DEBUG(llvm::dbgs() << '  erase dead witness table '
                                << Wt->getName() << '\n');
        Module->deleteWitnessTable(Wt);
      }
    }
    
    #if defined(__CYGWIN__) || defined(_WIN32) || defined(__HAIKU__)
// Cygwin does not support uselocale(), but we can use the locale feature 
// in stringstream object.
template <typename T>
static const char *_swift_stdlib_strtoX_clocale_impl(
    const char *nptr, T *outResult) {
  if (swift_stringIsSignalingNaN(nptr)) {
    *outResult = std::numeric_limits<T>::signaling_NaN();
    return nptr + std::strlen(nptr);
  }
  
  std::istringstream ValueStream(nptr);
  ValueStream.imbue(std::locale::classic());
  T ParsedValue;
  ValueStream >> ParsedValue;
  *outResult = ParsedValue;
    }
    
    #ifndef SWIFT_SIL_DEBUGSCOPE_H
#define SWIFT_SIL_DEBUGSCOPE_H
    
      AssociatedTypeIterator &operator++() {
    const auto &ATR = this->operator*();
    size_t Size = sizeof(AssociatedTypeDescriptor) +
      ATR.NumAssociatedTypes * ATR.AssociatedTypeRecordSize;
    const void *Next = reinterpret_cast<const char *>(Cur) + Size;
    Cur = Next;
    return *this;
  }
    
      constexpr static KeyPathComponentHeader
  forStructComponentWithUnresolvedFieldOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedFieldOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithInlineOffset(bool isLet,
                                    unsigned offset) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | validateInlineOffset(offset)
      | isLetBit(isLet));
  }
    
    enum class GenericRequirementLayoutKind : uint32_t {
  // A class constraint.
  Class = 0,
};
    
    // Halt due to enabling an already enabled dynamic replacement().
SWIFT_RUNTIME_ATTRIBUTE_NORETURN SWIFT_RUNTIME_ATTRIBUTE_NOINLINE
void swift_abortDynamicReplacementEnabling();
    
    	Copyright (c) 2016 Błażej Szczygieł
    
    	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the 'Software'), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
    
        int GetDisplayCount() const;
    const Display* GetDisplay(int index) const;
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
    /**
 * \brief          Do an RSA private key decrypt, then remove the message
 *                 padding
 *
 * \param ctx      PKCS #11 context
 * \param mode     must be MBEDTLS_RSA_PRIVATE, for compatibility with rsa.c's signature
 * \param input    buffer holding the encrypted data
 * \param output   buffer that will hold the plaintext
 * \param olen     will contain the plaintext length
 * \param output_max_len    maximum length of the output buffer
 *
 * \return         0 if successful, or an MBEDTLS_ERR_RSA_XXX error code
 *
 * \note           The output buffer must be as large as the size
 *                 of ctx->N (eg. 128 bytes if RSA-1024 is used) otherwise
 *                 an error is thrown.
 */
int mbedtls_pkcs11_decrypt( mbedtls_pkcs11_context *ctx,
                       int mode, size_t *olen,
                       const unsigned char *input,
                       unsigned char *output,
                       size_t output_max_len );
    
    //-----------------------------------------------------------------------------
//  Package Title  ratpak
//  File           ratpak.h
//  Copyright      (C) 1995-99 Microsoft
//  Date           01-16-95
//
//
//  Description
//
//     Infinite precision math package header file, if you use ratpak.lib you
//  need to include this header.
//
//-----------------------------------------------------------------------------
    
    
    {    SetRadixTypeAndNumWidth(DEC_RADIX, m_numwidth);
    SettingsChanged();
    DisplayNum();
}
    
                // Implemented methods
            virtual bool MoveCurrentTo(Platform::Object ^ item) = Windows::UI::Xaml::Data::ICollectionView::MoveCurrentTo
            {
                if (item)
                {
                    unsigned int newCurrentPosition = 0;
                    bool result = m_source->IndexOf(item, &newCurrentPosition);
                    if (result)
                    {
                        m_currentPosition = newCurrentPosition;
                        m_currentChanged(this, nullptr);
                        return true;
                    }
                }
    }
    
    INarratorAnnouncementHost ^ LiveRegionHost::MakeHost()
{
    return ref new LiveRegionHost();
}
    
    template<typename StorageIndex>
class SparsePageLZ4Format : public SparsePageFormat {
 public:
  explicit SparsePageLZ4Format(bool use_lz4_hc)
      : use_lz4_hc_(use_lz4_hc) {
    raw_bytes_ = raw_bytes_value_ = raw_bytes_index_ = 0;
    encoded_bytes_value_ = encoded_bytes_index_ = 0;
    nthread_ = dmlc::GetEnv('XGBOOST_LZ4_DECODE_NTHREAD', 4);
    nthread_write_ = dmlc::GetEnv('XGBOOST_LZ4_COMPRESS_NTHREAD', 12);
  }
  virtual ~SparsePageLZ4Format() {
    size_t encoded_bytes = raw_bytes_ +  encoded_bytes_value_ + encoded_bytes_index_;
    raw_bytes_ += raw_bytes_value_ + raw_bytes_index_;
    if (raw_bytes_ != 0) {
      LOG(CONSOLE) << 'raw_bytes=' << raw_bytes_
                   << ', encoded_bytes=' << encoded_bytes
                   << ', ratio=' << double(encoded_bytes) / raw_bytes_
                   << ', ratio-index=' << double(encoded_bytes_index_) /raw_bytes_index_
                   << ', ratio-value=' << double(encoded_bytes_value_) /raw_bytes_value_;
    }
  }
    }
    
    struct MyParam : dmlc::Parameter<MyParam> {
  Foo foo;
  int bar;
  DMLC_DECLARE_PARAMETER(MyParam) {
    DMLC_DECLARE_FIELD(foo)
      .set_default(Foo::kBar)
      .add_enum('bar', Foo::kBar)
      .add_enum('frog', Foo::kFrog)
      .add_enum('cat', Foo::kCat)
      .add_enum('dog', Foo::kDog);
    DMLC_DECLARE_FIELD(bar)
      .set_default(-1);
  }
};
    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }