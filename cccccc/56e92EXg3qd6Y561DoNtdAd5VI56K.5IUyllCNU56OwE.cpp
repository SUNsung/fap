
        
          // Finally, add the generic parameters from the requirement.
  for (auto genericParam : reqSig->getGenericParams().slice(1)) {
    // The only depth that makes sense is depth == 1, the generic parameters
    // of the requirement itself. Anything else is from invalid code.
    if (genericParam->getDepth() != 1) {
      return;
    }
    }
    
    class SubstitutionMap::Storage final
  : public llvm::FoldingSetNode,
    llvm::TrailingObjects<Storage, Type, ProtocolConformanceRef>
{
  friend TrailingObjects;
    }
    
      static CFPointeeInfo forConstVoid() {
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = true;
    info.Decl = nullptr;
    return info;
  }
    
    #include 'swift/Driver/Action.h'
    
    Optional<std::set<StringRef>>
ArgsToFrontendInputsConverter::readPrimaryFiles() {
  std::set<StringRef> primaryFiles;
  for (const Arg *A : Args.filtered(options::OPT_primary_file))
    primaryFiles.insert(A->getValue());
  if (forAllFilesInFilelist(
          PrimaryFilelistPathArg,
          [&](StringRef file) -> void { primaryFiles.insert(file); }))
    return None;
  return primaryFiles;
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    const Status Status::OK = Status();
const Status Status::CANCELLED = Status(error::CANCELLED, '');
const Status Status::UNKNOWN = Status(error::UNKNOWN, '');
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
    // integral_constant, defined in tr1, is a wrapper for an integer
// value. We don't really need this generality; we could get away
// with hardcoding the integer type to bool. We use the fully
// general integer_constant for compatibility with tr1.
    
    // Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::AddressBook& address_book) {
  for (int i = 0; i < address_book.people_size(); i++) {
    const tutorial::Person& person = address_book.people(i);
    }
    }
    
    
    { private:
  const EnumDescriptor* descriptor_;
  std::vector<const EnumValueDescriptor*> base_values_;
  std::vector<const EnumValueDescriptor*> all_values_;
  std::set<const EnumValueDescriptor*> alias_values_to_skip_;
  const string name_;
};
    
    
    {  int (*getCharFunc)(void *);
  void *data;
  int charBuf;
};
    
    private:
  struct Interval {
    Interval(Object *dict, int baseA);
    ~Interval();
    GooString *prefix;
    enum NumberStyle {
      None,
      Arabic,
      LowercaseRoman,
      UppercaseRoman,
      UppercaseLatin,
      LowercaseLatin
    } style;
    int first, base, length;
  };
    
      // get length
  dict->dictLookup('Length', &obj, fetchOriginatorNums);
  if (obj.isInt()) {
    length = (Guint)obj.getInt();
    obj.free();
  } else {
    error(getPos(), 'Bad 'Length' attribute in stream');
    obj.free();
    length = 0;
  }
    
    
    {  if (inlineImg) {
    str->reset();
    j = height * ((width * colorMap->getNumPixelComps() *
		   colorMap->getBits() + 7) / 8);
    for (i = 0; i < j; ++i)
      str->getChar();
    str->close();
  }
}
    
    
    {  if (!ok) {
    return gFalse;
  }
  if (authData) {
    ownerPassword = ((StandardAuthData *)authData)->ownerPassword;
    userPassword = ((StandardAuthData *)authData)->userPassword;
  } else {
    ownerPassword = NULL;
    userPassword = NULL;
  }
  if (!Decrypt::makeFileKey(encVersion, encRevision, fileKeyLength,
			    ownerKey, userKey, permFlags, fileID,
			    ownerPassword, userPassword, fileKey,
			    encryptMetadata, &ownerPasswordOk)) {
    return gFalse;
  }
  return gTrue;
}
    
    void SplashOutputDev::drawImage(GfxState *state, Object *ref, Stream *str,
				int width, int height,
				GfxImageColorMap *colorMap,
				GBool interpolate,
				int *maskColors, GBool inlineImg) {
  double *ctm;
  SplashCoord mat[6];
  SplashOutImageData imgData;
  SplashColorMode srcMode;
  SplashImageSource src;
  GfxGray gray;
  GfxRGB rgb;
#if SPLASH_CMYK
  GfxCMYK cmyk;
#endif
  Guchar pix;
  int n, i;
    }
    
      GBool isReverseVideo() { return reverseVideo; }
  void setReverseVideo(GBool reverseVideoA) { reverseVideo = reverseVideoA; }
    
    RemoveTransliterator::~RemoveTransliterator() {}
    
    U_NAMESPACE_BEGIN
    
        case UDAT_FLEXIBLE_DAY_PERIOD_FIELD:
    {
        // TODO: Maybe fetch the DayperiodRules during initialization (instead of at the first
        // loading of an instance) if a relevant pattern character (b or B) is used.
        const DayPeriodRules *ruleSet = DayPeriodRules::getInstance(this->getSmpFmtLocale(), status);
        if (U_FAILURE(status)) {
            // Data doesn't conform to spec, therefore loading failed.
            break;
        }
        if (ruleSet == NULL) {
            // Data doesn't exist for the locale we're looking for.
            // Falling back to am/pm.
            subFormat(appendTo, 0x61, count, capitalizationContext, fieldNum,
                      handler, cal, mutableNFs, status);
            break;
        }
    }
    
    
SimpleDateFormatStaticSets::~SimpleDateFormatStaticSets() {
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
}
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
      explicit Assembler(HPHP::CodeBlock& cb) : codeBlock(cb) {}
  ~Assembler(){}
    
    #ifndef incl_HPHP_OUTPUT_FILE_H_
#define incl_HPHP_OUTPUT_FILE_H_
    
    #endif // incl_HPHP_URL_FILE_H_

    
    using apollo::common::ErrorCode;
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    
    {  // Report Messages
  AddRecvProtocolData<Accelrpt68, true>();
  AddRecvProtocolData<Brakemotorrpt170, true>();
  AddRecvProtocolData<Brakemotorrpt271, true>();
  AddRecvProtocolData<Brakemotorrpt372, true>();
  AddRecvProtocolData<Brakerpt6c, true>();
  AddRecvProtocolData<Datetimerpt83, true>();
  AddRecvProtocolData<Globalrpt6a, true>();
  AddRecvProtocolData<Headlightrpt77, true>();
  AddRecvProtocolData<Hornrpt79, true>();
  AddRecvProtocolData<Latlonheadingrpt82, true>();
  AddRecvProtocolData<Parkingbrakestatusrpt80, true>();
  AddRecvProtocolData<Shiftrpt66, true>();
  AddRecvProtocolData<Steeringmotorrpt173, true>();
  AddRecvProtocolData<Steeringmotorrpt274, true>();
  AddRecvProtocolData<Steeringmotorrpt375, true>();
  AddRecvProtocolData<Steeringrpt16e, true>();
  AddRecvProtocolData<Turnrpt64, true>();
  AddRecvProtocolData<Vehiclespeedrpt6f, true>();
  AddRecvProtocolData<Wheelspeedrpt7a, true>();
  AddRecvProtocolData<Wiperrpt91, true>();
  AddRecvProtocolData<Yawraterpt81, true>();
}
    
    
    {
    {
    {
    {  Brake_rpt_6c::Brake_on_offType ret =
      static_cast<Brake_rpt_6c::Brake_on_offType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    
    {  Global_rpt_6a::Pacmod_statusType ret =
      static_cast<Global_rpt_6a::Pacmod_statusType>(x);
  return ret;
}
    
    // config detail: {'name': 'commanded_value', 'enum': {0: 'COMMANDED_VALUE_OFF',
// 1: 'COMMANDED_VALUE_ON'}, 'precision': 1.0, 'len': 8, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 15, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Horn_rpt_79::Commanded_valueType Hornrpt79::commanded_value(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }