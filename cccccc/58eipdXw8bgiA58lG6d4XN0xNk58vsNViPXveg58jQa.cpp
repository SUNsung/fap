
        
        TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
      // Empty inputs.
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    TEST(StatusOr, TestPointerValue) {
  const int kI = 0;
  StatusOr<const int*> thing(&kI);
  EXPECT_EQ(&kI, thing.ValueOrDie());
}
    
    class Proto3DataStripper : public DataStripper {
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) {
    return field->type() == FieldDescriptor::TYPE_GROUP ||
           field->is_extension();
  }
};
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
    
    {    while (next_num_ < kMaxNaturalNumberValue) {
      n = GetBinaryReversedInteger(next_num_++);
      if (n < N_) break;
    }
    return (next_num_ > kMaxNaturalNumberValue) ? kInvalidVal : n;
  }