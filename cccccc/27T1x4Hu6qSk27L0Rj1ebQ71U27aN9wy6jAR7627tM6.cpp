
        
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
    
    void AutolinkExtractJobAction::anchor() {}
    
    
    {public:
  Windows(const Driver &D, const llvm::Triple &Triple) : ToolChain(D, Triple) {}
  ~Windows() = default;
  std::string sanitizerRuntimeLibName(StringRef Sanitizer,
                                      bool shared = true) const override;
};
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    
    {
    {
    {
    {}  // namespace
}  // namespace strings
}  // namespace protobuf
}  // namespace google

    
    #include <ostream>
#include <stdio.h>
#include <string>
#include <utility>
    
    TEST(StatusOr, TestPointerDefaultCtor) {
  StatusOr<int*> thing;
  EXPECT_FALSE(thing.ok());
  EXPECT_EQ(Status::UNKNOWN, thing.status());
}
    
    #include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    
    {}  // namespace leveldb
    
    #include 'db/filename.h'
#include 'leveldb/env.h'
#include 'leveldb/table.h'
#include 'util/coding.h'
    
      static size_t ByteSize(const WriteBatch* batch) { return batch->rep_.size(); }
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    
    {  Byte t1(bytes + 2);
  uint32_t t = t1.get_byte(3, 5);
  x <<= 5;
  x |= t;
  double ret = x * CLUSTER_DIST_RES + CLUSTER_DIST_LONG_MIN;
  return ret;
}
    
      x <<= 4;
  x |= t;
    
    unsigned int BaseMapMatrix::LoadBinary(unsigned char* buf) { return 0; }
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    // config detail: {'name': 'latitude_seconds', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 23,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'sec'}
int Latlonheadingrpt82::latitude_seconds(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }