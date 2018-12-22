
    {}  // namespace atom

    
      // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    namespace {
    }
    
     protected:
  RenderProcessPreferences(
      v8::Isolate* isolate,
      const atom::RenderProcessPreferences::Predicate& predicate);
  ~RenderProcessPreferences() override;
    
    #ifndef ATOM_BROWSER_API_ATOM_API_TRAY_H_
#define ATOM_BROWSER_API_ATOM_API_TRAY_H_
    
    UPB_DECLARE_TYPE(upb::BufferHandle, upb_bufhandle)
UPB_DECLARE_TYPE(upb::BytesHandler, upb_byteshandler)
UPB_DECLARE_TYPE(upb::HandlerAttributes, upb_handlerattr)
UPB_DECLARE_DERIVED_TYPE(upb::Handlers, upb::RefCounted,
                         upb_handlers, upb_refcounted)
    
    void Context::InitializeFieldGeneratorInfo(const FileDescriptor* file) {
  for (int i = 0; i < file->message_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(file->message_type(i));
  }
}
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      CodeGeneratorRequest request;
  if (!request.ParseFromFileDescriptor(STDIN_FILENO)) {
    std::cerr << argv[0] << ': protoc sent unparseable request to plugin.'
              << std::endl;
    return 1;
  }
    
    
    {    output.WriteLittleEndian32(0x02014b50);  // magic
    WriteShort(&output, 10);  // version made by
    WriteShort(&output, 10);  // version needed to extract
    WriteShort(&output, 0);  // flags
    WriteShort(&output, 0);  // compression method: stored
    WriteShort(&output, 0);  // last modified time
    WriteShort(&output, kDosEpoch);  // last modified date
    output.WriteLittleEndian32(crc32);  // crc-32
    output.WriteLittleEndian32(size);  // compressed size
    output.WriteLittleEndian32(size);  // uncompressed size
    WriteShort(&output, filename_size);  // file name length
    WriteShort(&output, 0);   // extra field length
    WriteShort(&output, 0);   // file comment length
    WriteShort(&output, 0);   // starting disk number
    WriteShort(&output, 0);   // internal file attributes
    output.WriteLittleEndian32(0);  // external file attributes
    output.WriteLittleEndian32(offset);  // local header offset
    output.WriteString(filename);  // file name
  }
  uint32 dir_len = output.ByteCount();
    
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
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8* src = internal::getRowPtr(srcBase, srcStride, i);
        s16* dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
                s32 val = 0;
            for (s32 _y = 0; _y < 3; ++_y)
                val += prevx[_y] * kernelBase[(2 - _y) * 3 + 2] +
                       currx[_y] * kernelBase[(2 - _y) * 3 + 1] +
                       nextx[_y] * kernelBase[(2 - _y) * 3 + 0];
    
    #if GTEST_HAS_STD_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::std::wstring& wstr);
#endif  // GTEST_HAS_STD_WSTRING
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
      // Asserts that s.c_string() returns NULL.
  //
  // <TechnicalDetails>
  //
  // If we write NULL instead of
  //
  //   static_cast<const char *>(NULL)
  //
  // in this assertion, it will generate a warning on gcc 3.4.  The
  // reason is that EXPECT_EQ needs to know the types of its
  // arguments in order to print them when it fails.  Since NULL is
  // #defined as 0, the compiler will use the formatter function for
  // int to print it.  However, gcc thinks that NULL should be used as
  // a pointer, not an int, and therefore complains.
  //
  // The root of the problem is C++'s lack of distinction between the
  // integer number 0 and the null pointer constant.  Unfortunately,
  // we have to live with this fact.
  //
  // </TechnicalDetails>
  EXPECT_STREQ(NULL, s.c_string());
    
    
    {    // Cleanup
    delete[] data;
    if (use_compression)
	    delete[] compressed;
    return true;
}
    
    
    {    return true;
}

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    void ImGui_ImplFreeGLUT_SpecialFunc(int key, int x, int y)
{
    //printf('key_down_func %d\n', key);
    ImGuiIO& io = ImGui::GetIO();
    if (key + 256 < IM_ARRAYSIZE(io.KeysDown))
        io.KeysDown[key + 256] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
    
    
    {  int ret = x;
  return ret;
}
    
      x <<= 4;
  x |= t;
    
    TEST_F(RouteSegmentsTest, Shrink) {
  auto lane1 = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-1'));
  auto lane2 = hdmap_.GetLaneById(hdmap::MakeMapId('13_1_-1'));
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 5, 10));
    EXPECT_EQ(3, seg.size());
    EXPECT_EQ(lane1, seg[0].lane);
    EXPECT_FLOAT_EQ(15, seg[0].start_s);
    EXPECT_FLOAT_EQ(20, seg[0].end_s);
    EXPECT_EQ(lane2, seg[1].lane);
    EXPECT_FLOAT_EQ(15, seg[1].start_s);
    EXPECT_FLOAT_EQ(20, seg[1].end_s);
    EXPECT_FLOAT_EQ(20, seg[2].start_s);
    EXPECT_FLOAT_EQ(25, seg[2].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 50, 10));
    EXPECT_EQ(3, seg.size());
    EXPECT_EQ(lane1, seg[0].lane);
    EXPECT_FLOAT_EQ(10, seg[0].start_s);
    EXPECT_FLOAT_EQ(20, seg[0].end_s);
    EXPECT_EQ(lane2, seg[1].lane);
    EXPECT_FLOAT_EQ(15, seg[1].start_s);
    EXPECT_FLOAT_EQ(20, seg[1].end_s);
    EXPECT_EQ(lane2, seg[2].lane);
    EXPECT_FLOAT_EQ(20, seg[2].start_s);
    EXPECT_FLOAT_EQ(25, seg[2].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, -5, 50));
    EXPECT_EQ(1, seg.size());
    EXPECT_EQ(lane2, seg[0].lane);
    EXPECT_FLOAT_EQ(20, seg[0].start_s);
    EXPECT_FLOAT_EQ(30, seg[0].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane2, 10, 30);
    auto point = lane2->GetSmoothPoint(20.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 5, 5));
    EXPECT_EQ(1, seg.size());
    EXPECT_EQ(lane2, seg[0].lane);
    EXPECT_FLOAT_EQ(15, seg[0].start_s);
    EXPECT_FLOAT_EQ(25, seg[0].end_s);
  }
}
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
    const std::vector<double>& Spline2d::t_knots() const { return t_knots_; }
    
    
    {
    {  } else {
    for (uint32_t r = 3; r < num_params; ++r) {
      for (uint32_t c = 3; c < num_params; ++c) {
        (*term_matrix)(r, c) = x_pow[r + c - 5];
      }
    }
    (*term_matrix).block(0, 0, num_params, 3) =
        Eigen::MatrixXd::Zero(num_params, 3);
    (*term_matrix).block(0, 0, 3, num_params) =
        Eigen::MatrixXd::Zero(3, num_params);
  }
}
    
            // We don't care for comparison result here; the previous value will be stored into value anyway.
        // Also we don't care for rbx and rcx values, they just have to be equal to rax and rdx before cmpxchg16b.
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            : '=&A' (value)
            : [storage] 'm' (storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
    
    template< >
struct make_storage_type< 4u, true >
{
    typedef mars_boost::int32_t type;
    }