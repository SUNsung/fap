
        
        #include 'content/nw/src/api/base/base.h'
    
    
    {}
    
       bool HasIcon(int command_id) override;
    
    

    
    NwClipboardReadAvailableTypesFunction::NwClipboardReadAvailableTypesFunction() {
    }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    #include <Python.h>
namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    EnumGenerator::~EnumGenerator() {
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    namespace {
// Whether two fields have conflicting accessors (assuming name1 and name2
// are different). name1 and name2 are field1 and field2's camel-case name
// respectively.
bool IsConflicting(const FieldDescriptor* field1, const string& name1,
                   const FieldDescriptor* field2, const string& name2,
                   string* info) {
  if (field1->is_repeated()) {
    if (field2->is_repeated()) {
      // Both fields are repeated.
      return false;
    } else {
      // field1 is repeated, and field2 is not.
      if (name1 + 'Count' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'Count()\'';
        return true;
      }
      if (name1 + 'List' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'List()\'';
        return true;
      }
      // Well, there are obviously many more conflicting cases, but it probably
      // doesn't worth the effort to exhaust all of them because they rarely
      // happen and as we are continuing adding new methods/changing existing
      // methods the number of different conflicting cases will keep growing.
      // We can just add more cases here when they are found in the real world.
      return false;
    }
  } else {
    if (field2->is_repeated()) {
      return IsConflicting(field2, name2, field1, name1, info);
    } else {
      // None of the two fields are repeated.
      return false;
    }
  }
}
}  // namespace
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    void ImmutableMapFieldGenerator::
GenerateParsingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'if (!$get_mutable_bit_parser$) {\n'
      '  $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '      $map_field_parameter$);\n'
      '  $set_mutable_bit_parser$;\n'
      '}\n');
  if (!SupportUnknownEnumValue(descriptor_->file()) &&
      GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'com.google.protobuf.ByteString bytes = input.readBytes();\n'
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = $default_entry$.getParserForType().parseFrom(bytes);\n');
    printer->Print(
        variables_,
        'if ($value_enum_type$.forNumber($name$__.getValue()) == null) {\n'
        '  unknownFields.mergeLengthDelimitedField($number$, bytes);\n'
        '} else {\n'
        '  $name$_.getMutableMap().put(\n'
        '      $name$__.getKey(), $name$__.getValue());\n'
        '}\n');
  } else {
    printer->Print(
        variables_,
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = input.readMessage(\n'
        '    $default_entry$.getParserForType(), extensionRegistry);\n'
        '$name$_.getMutableMap().put(\n'
        '    $name$__.getKey(), $name$__.getValue());\n');
  }
}
    
    string ClassNameResolver::GetFileImmutableClassName(
    const FileDescriptor* file) {
  string& class_name = file_immutable_outer_class_names_[file];
  if (class_name.empty()) {
    if (file->options().has_java_outer_classname()) {
      class_name = file->options().java_outer_classname();
    } else {
      class_name = GetFileDefaultImmutableClassName(file);
      if (HasConflictingClassName(file, class_name)) {
        class_name += kOuterClassNameSuffix;
      }
    }
  }
  return class_name;
}
    
    
    {  decode_data.AddString(1, 'abcdefghIJ', 'abcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', '_AbcdefghIJ');
  decode_data.AddString(2, 'abcdefghIJ', 'Abcd_EfghIJ');
  EXPECT_EXIT(decode_data.AddString(2, 'xyz', 'x_yz'),
              ::testing::KilledBySignal(SIGABRT),
              'error: duplicate key \\(2\\) making TextFormat data, input:');
}
#endif  // PROTOBUF_HAS_DEATH_TEST
    
      if (argc > 1) {
    std::cerr << argv[0] << ': Unknown option: ' << argv[1] << std::endl;
    return 1;
  }
    
      // write file header
  io::CodedOutputStream output(raw_output_);
  output.WriteLittleEndian32(0x04034b50);  // magic
  WriteShort(&output, 10);  // version needed to extract
  WriteShort(&output, 0);  // flags
  WriteShort(&output, 0);  // compression method: stored
  WriteShort(&output, 0);  // last modified time
  WriteShort(&output, kDosEpoch);  // last modified date
  output.WriteLittleEndian32(info.crc32);  // crc-32
  output.WriteLittleEndian32(info.size);  // compressed size
  output.WriteLittleEndian32(info.size);  // uncompressed size
  WriteShort(&output, filename_size);  // file name length
  WriteShort(&output, 0);   // extra field length
  output.WriteString(filename);  // file name
  output.WriteString(contents);  // file data
    
      // Check default values.
  const Descriptor* descriptor = message->GetDescriptor();
  const Reflection* reflection = message->GetReflection();
  EXPECT_EQ(0, reflection->GetInt32(
      *message, descriptor->FindFieldByName('foo_int')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_string')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_cord')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_string_piece')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_bytes')));
  EXPECT_EQ(unittest::TestOneof2::FOO, reflection->GetEnum(
      *message, descriptor->FindFieldByName('foo_enum'))->number());
  const Descriptor* nested_descriptor;
  const Message* nested_prototype;
  nested_descriptor =
      pool_.FindMessageTypeByName('protobuf_unittest.TestOneof2.NestedMessage');
  nested_prototype = factory_.GetPrototype(nested_descriptor);
  EXPECT_EQ(nested_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foo_message')));
  const Descriptor* foogroup_descriptor;
  const Message* foogroup_prototype;
  foogroup_descriptor =
      pool_.FindMessageTypeByName('protobuf_unittest.TestOneof2.FooGroup');
  foogroup_prototype = factory_.GetPrototype(foogroup_descriptor);
  EXPECT_EQ(foogroup_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foogroup')));
  EXPECT_NE(foogroup_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foo_lazy_message')));
  EXPECT_EQ(5, reflection->GetInt32(
      *message, descriptor->FindFieldByName('bar_int')));
  EXPECT_EQ('STRING', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_string')));
  EXPECT_EQ('CORD', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_cord')));
  EXPECT_EQ('SPIECE', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_string_piece')));
  EXPECT_EQ('BYTES', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_bytes')));
  EXPECT_EQ(unittest::TestOneof2::BAR, reflection->GetEnum(
      *message, descriptor->FindFieldByName('bar_enum'))->number());
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32>
internal::ValueArray32<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31,
    T32 v32) {
  return internal::ValueArray32<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32>(v1, v2, v3, v4, v5, v6, v7, v8, v9,
      v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23,
      v24, v25, v26, v27, v28, v29, v30, v31, v32);
}
    
    // Then, use the TEST_P macro to define as many parameterized tests
// for this fixture as you want. The _P suffix is for 'parameterized'
// or 'pattern', whichever you prefer to think.
    
    template <typename T>
class UniversalTersePrinter {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T>
class UniversalTersePrinter<T&> {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T, size_t N>
class UniversalTersePrinter<T[N]> {
 public:
  static void Print(const T (&value)[N], ::std::ostream* os) {
    UniversalPrinter<T[N]>::Print(value, os);
  }
};
template <>
class UniversalTersePrinter<const char*> {
 public:
  static void Print(const char* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(string(str), os);
    }
  }
};
template <>
class UniversalTersePrinter<char*> {
 public:
  static void Print(char* str, ::std::ostream* os) {
    UniversalTersePrinter<const char*>::Print(str, os);
  }
};
    
    #include 'gtest/internal/gtest-port.h'
#include 'gtest/internal/gtest-type-util.h'
    
      // Creates the test object, runs it, records its result, and then
  // deletes it.
  void Run();
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
};
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    
// A simple string class.
class MyString {
 private:
  const char* c_string_;
  const MyString& operator=(const MyString& rhs);
    }
    
    // Godot TO Bullet
extern void G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void INVERT_G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void INVERT_G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void G_TO_B(Transform const &inVal, btTransform &outVal);
    
    	real_t get_hinge_angle();
    
    #include 'modules/gdnative/gdnative.h'
    
    
    {	singleton = this;
}

    
    
    {  RepairDB();
  Reopen();
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('hello', v);
}
    
      // When start user key is prefix of limit user key
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foobar', 200, kTypeValue)));
    
    namespace {
    }
    
    std::string LogFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'log');
}
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
    
    {    State() {
      for (int k = 0; k < K; k++) {
        Set(k, 0);
      }
    }
  };
    
    
    {        ImGui::Render();
    }
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    void ImGui_ImplFreeGLUT_MouseFunc(int glut_button, int state, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    int button = -1;
    if (glut_button == GLUT_LEFT_BUTTON) button = 0;
    if (glut_button == GLUT_RIGHT_BUTTON) button = 1;
    if (glut_button == GLUT_MIDDLE_BUTTON) button = 2;
    if (button != -1 && state == GLUT_DOWN)
        io.MouseDown[button] = true;
    if (button != -1 && state == GLUT_UP)
        io.MouseDown[button] = false;
}
    
        // Clamp values (+ handle overflow/wrap-around for integer types)
    if (*v != v_cur && has_min_max)
    {
        if (v_cur < v_min || (v_cur > *v && adjust_delta < 0.0f && !is_decimal))
            v_cur = v_min;
        if (v_cur > v_max || (v_cur < *v && adjust_delta > 0.0f && !is_decimal))
            v_cur = v_max;
    }
    
    static bool ImGui_ImplGlfw_Init(GLFWwindow* window, bool install_callbacks, GlfwClientApi client_api)
{
    g_Window = window;
    g_Time = 0.0;
    }
    
    
    {  return 0 != isatty(fileno(stdout)) && term_supports_color;
#endif  // BENCHMARK_OS_WINDOWS
}
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    // Parses 'str' for a double.  If successful, writes the result to *value and
// returns true; otherwise leaves *value unchanged and returns false.
bool ParseDouble(const std::string& src_text, const char* str, double* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const double double_value = strtod(str, &end);  // NOLINT
    }
    
    template <class Tp>
LogType& operator<<(LogType& log, Tp const& value) {
  if (log.out_) {
    *log.out_ << value;
  }
  return log;
}
    
    #define REQUIRES(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(requires_capability(__VA_ARGS__))
    
    inline Regex::~Regex() {}
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
    #include 'glog/logging.h'
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_general_info_60b.h'
    
    using apollo::drivers::canbus::Byte;
    
    
    {  switch (x) {
    case 0x0:
      return RCS_THRESHOLD_STANDARD;
    case 0x1:
      return RCS_THRESHOLD_HIGH_SENSITIVITY;
    default:
      return RCS_THRESHOLD_ERROR;
  }
}
    
        // overlap
    sub_node = junction_node->FirstChildElement('objectOverlapGroup');
    if (sub_node) {
      sub_node = sub_node->FirstChildElement('objectReference');
      while (sub_node) {
        std::string object_id;
        checker =
            UtilXmlParser::QueryStringAttribute(*sub_node, 'id', &object_id);
        if (checker != tinyxml2::XML_SUCCESS) {
          std::string err_msg = 'Error parse junction overlap id';
          return Status(apollo::common::ErrorCode::HDMAP_DATA_ERROR, err_msg);
        }
    }
    }
    
    namespace apollo {
namespace hdmap {
DEFINE_string(test_map_file,
              'modules/map/data/sunnyvale_loop/base_map_test.bin',
              'The test map file');
DEFINE_string(
    test_routing_file,
    'modules/map/pnc_map/testdata/sample_sunnyvale_loop_routing.pb.txt',
    'The test map file');
    }
    }
    
    /**
 * @file
 **/
    
    
    {  MatrixXd bd_golden(10, 1);
  bd_golden << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
  EXPECT_EQ(bd, bd_golden);
}
    
    #include 'modules/planning/math/smoothing_spline/spline_2d.h'