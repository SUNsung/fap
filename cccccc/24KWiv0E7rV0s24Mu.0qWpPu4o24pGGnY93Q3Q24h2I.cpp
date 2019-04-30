
        
        CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  return new DefaultCache(CBs);
}
    
      char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
    #if LANG_CXX11
#include <type_traits>
#endif
    
    TEST(ByteSourceTest, CopyTo) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  string str;
  StringByteSink sink(&str);
    }
    
    // Copyright 2008 Google Inc. All Rights Reserved.
// Author: xpeng@google.com (Peter Peng)
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google
    
    using google::protobuf::util::Proto3DataStripper;
    
      while (true) {
    cout << 'Enter a phone number (or leave blank to finish): ';
    string number;
    getline(cin, number);
    if (number.empty()) {
      break;
    }
    }
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    #ifndef B2_POLYGON_H
#define B2_POLYGON_H
    
    	struct RawImage
	{
		int uiExtendedWidth;
		int uiExtendedHeight;
		unsigned int uiEncodingBitsBytes;
		std::shared_ptr<unsigned char> paucEncodingBits;
	};
    
    		inline bool HasPunchThroughPixels(void)
		{
			return m_boolPunchThroughPixels;
		}
    
    
#if !defined(FFT_ARM_H)
#define FFT_ARM_H
    
    /* PSEUDO-RANDOM GENERATOR                                                          */
/* Make sure to store the result as the seed for the next call (also in between     */
/* frames), otherwise result won't be random at all. When only using some of the    */
/* bits, take the most significant bits by right-shifting.                          */
#define silk_RAND(seed)                     (silk_MLA_ovflw(907633515, (seed), 196314165))
    
    	// Set path to Cmder default ConEmu config file
	PathCombine(defaultCfgPath, exeDir, L'vendor\\ConEmu.xml.default');
    
    
    {    if (cmdSize == 1)
    {
        int eachOpndcmd = m_dataReader->ReadInt32();
        return CUnaryCommand(eachOpndcmd);
    }
    else
    {
        int eachOpndcmd1 = m_dataReader->ReadInt32();
        int eachOpndcmd2 = m_dataReader->ReadInt32();
        return CUnaryCommand(eachOpndcmd1, eachOpndcmd2);
    }
}
    
                static void OnVirtualKeyControlInverseChordPropertyChanged(
                Windows::UI::Xaml::DependencyObject^ target,
                MyVirtualKey oldValue,
                MyVirtualKey newValue);
    
            private:
            CalculationManager::CalculatorManager* const m_calculatorManager;
            CalculatorDisplay m_calculatorDisplay;
            CalculationManager::CALCULATOR_MODE m_currentMode;
            Platform::String^ m_localizedHistoryCleared;
    
    //////////////////////////////////////////////////////////////////////
    
    void VMTOC::forceAlignment(HPHP::Address& addr) {
  folly::MSLGuard g{s_TOC};
  // keep 8-byte alignment
  while (reinterpret_cast<uintptr_t>(addr) % 8 != 0) {
    uint8_t fill_byte = 0xf0;
    m_tocvector->assertCanEmit(sizeof(uint8_t));
    m_tocvector->byte(fill_byte);
    addr = m_tocvector->frontier();
  }
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      void requestInit() override;
  void requestShutdown() override;
    
        // output changed array
    std::cout << array << '\n';