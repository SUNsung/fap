
        
          void Generate(io::Printer* printer);
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
      // Write any attributes used to decorate generated function members (methods and properties).
  // Should not be used to decorate types.
  void WriteGeneratedCodeAttributes(io::Printer* printer);
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      virtual MessageGenerator* NewMessageGenerator(
      const Descriptor* descriptor) const;
    
      // Determine whether the specified owner is on the stack. Returns address of
  // key if present, 0 otherwise.
  static Value* contains(Key* k)
  {
    context* elem = top_;
    while (elem)
    {
      if (elem->key_ == k)
        return elem->value_;
      elem = elem->next_;
    }
    return 0;
  }
    
    template <typename ConstBufferSequence, typename Handler>
class descriptor_write_op
  : public descriptor_write_op_base<ConstBufferSequence>
{
public:
  BOOST_ASIO_DEFINE_HANDLER_PTR(descriptor_write_op);
    }
    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
      // Erase an entry from the map.
  void erase(iterator it)
  {
    BOOST_ASIO_ASSERT(it != values_.end());
    BOOST_ASIO_ASSERT(num_buckets_ != 0);
    }
    
    #include <cstdarg>
#include <iostream>
#include <string>
    
    #include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
    
    namespace benchmark {
    }