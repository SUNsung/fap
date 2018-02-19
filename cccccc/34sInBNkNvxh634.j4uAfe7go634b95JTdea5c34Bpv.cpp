  /// \c true if comments are allowed. Default: \c true.
  bool allowComments_;
    
      // Weak reference to a parent CMessage object (i.e. may be NULL.)
  //
  // Used to make sure all ancestors are also mutable when first
  // modifying the container.
  CMessage* parent;
    
    #include <google/protobuf/any_test.pb.h>
#include <gtest/gtest.h>
    
    void RepeatedEnumFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    void RepeatedMessageFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf