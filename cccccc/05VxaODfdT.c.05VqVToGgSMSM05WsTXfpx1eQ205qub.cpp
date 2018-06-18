
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    constexpr double kPicosPerMicro = 1000000.0;
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
    #include <string>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedMessageFieldGenerator);
};
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
      printer->Print(variables_,
    // If this builder is non-null, it is used and the other fields are
    // ignored.
    'private com.google.protobuf.SingleFieldBuilder$ver$<\n'
    '    $type$, $type$.Builder, $type$OrBuilder> $name$Builder_;'
    '\n');