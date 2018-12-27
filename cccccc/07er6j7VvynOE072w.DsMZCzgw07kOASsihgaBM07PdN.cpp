
        
        // Unlike test_ops.cc, these are built with the 'require_shapes' option in the
// BUILD file.
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Converts Python object `obj` representing a rectangular array of
// Python values (a scalar, a sequence of scalars, a sequence of
// sequences, etc.) into a C++ TensorFlow Tensor and stores it in
// *ret.  If dtype is not None it should by a Python integer
// representing the desired dtype of the resulting Tensor.
// This is used only as a hint, *ret may not have that dtype on
// success and may require a cast.
Status PySeqToTensor(PyObject* obj, PyObject* dtype, Tensor* ret);
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_

    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
      ~ScopedActivateExecutorContext();
    
      static string GetDevNodePath(int dev_node_ordinal);
    
    
    {private:
    Ui::OpenURIDialog *ui;
};
    
        /** Colorize an icon (given object) with the text color */
    QIcon TextColorIcon(const QIcon& icon) const;
    
        memset(rng->v, 0x01, 32); /* RFC6979 3.2.b. */
    memset(rng->k, 0x00, 32); /* RFC6979 3.2.c. */
    
    static int secp256k1_ecdsa_sig_recover(const secp256k1_ecmult_context *ctx, const secp256k1_scalar *sigr, const secp256k1_scalar* sigs, secp256k1_ge *pubkey, const secp256k1_scalar *message, int recid) {
    unsigned char brx[32];
    secp256k1_fe fx;
    secp256k1_ge x;
    secp256k1_gej xj;
    secp256k1_scalar rn, u1, u2;
    secp256k1_gej qj;
    int r;
    }
    
    static void RejectDifficultyMismatch(double difficulty, double expected_difficulty) {
     BOOST_CHECK_MESSAGE(
        DoubleEquals(difficulty, expected_difficulty, 0.00001),
        'Difficulty was ' + std::to_string(difficulty)
            + ' but was expected to be ' + std::to_string(expected_difficulty));
}
    
    BOOST_AUTO_TEST_SUITE_END()

    
    #include <google/protobuf/python/python_protobuf.h>
    
    #include <google/protobuf/generated_message_util.h>
    
    #include <memory>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/descriptor.pb.h>
    
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
    
    void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, method);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(method->DebugString())));
}
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    class DynamicMessageTest : public ::testing::TestWithParam<bool> {
 protected:
  DescriptorPool pool_;
  DynamicMessageFactory factory_;
  const Descriptor* descriptor_;
  const Message* prototype_;
  const Descriptor* extensions_descriptor_;
  const Message* extensions_prototype_;
  const Descriptor* packed_descriptor_;
  const Message* packed_prototype_;
  const Descriptor* oneof_descriptor_;
  const Message* oneof_prototype_;
  const Descriptor* proto3_descriptor_;
  const Message* proto3_prototype_;
    }
    
        // Setup render state
    const float blend_factor[4] = { 0.f, 0.f, 0.f, 0.f };
    ctx->OMSetBlendFactor(blend_factor);
    
        // Glut has 1 function for characters and one for 'special keys'. We map the characters in the 0..255 range and the keys above.
    io.KeyMap[ImGuiKey_Tab]         = '\t'; // == 9 == CTRL+I
    io.KeyMap[ImGuiKey_LeftArrow]   = 256 + GLUT_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow]  = 256 + GLUT_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow]     = 256 + GLUT_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow]   = 256 + GLUT_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp]      = 256 + GLUT_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown]    = 256 + GLUT_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home]        = 256 + GLUT_KEY_HOME;
    io.KeyMap[ImGuiKey_End]         = 256 + GLUT_KEY_END;
    io.KeyMap[ImGuiKey_Insert]      = 256 + GLUT_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete]      = 127;
    io.KeyMap[ImGuiKey_Backspace]   = 8;  // == CTRL+H
    io.KeyMap[ImGuiKey_Space]       = ' ';
    io.KeyMap[ImGuiKey_Enter]       = 13; // == CTRL+M
    io.KeyMap[ImGuiKey_Escape]      = 27;
    io.KeyMap[ImGuiKey_A]           = 'A';
    io.KeyMap[ImGuiKey_C]           = 'C';
    io.KeyMap[ImGuiKey_V]           = 'V';
    io.KeyMap[ImGuiKey_X]           = 'X';
    io.KeyMap[ImGuiKey_Y]           = 'Y';
    io.KeyMap[ImGuiKey_Z]           = 'Z';
    
        // Destroy old Framebuffer
    for (uint32_t i = 0; i < wd->BackBufferCount; i++)
    {
        if (wd->BackBufferView[i])
            vkDestroyImageView(device, wd->BackBufferView[i], allocator);
        if (wd->Framebuffer[i])
            vkDestroyFramebuffer(device, wd->Framebuffer[i], allocator);
    }
    wd->BackBufferCount = 0;
    if (wd->RenderPass)
        vkDestroyRenderPass(device, wd->RenderPass, allocator);
   
    // If min image count was not specified, request different count of images dependent on selected present mode
    if (min_image_count == 0)
        min_image_count = ImGui_ImplVulkanH_GetMinImageCountFromPresentMode(wd->PresentMode);
    
        // Set OS mouse position if requested (rarely used, only when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
    if (io.WantSetMousePos)
    {
        POINT pos = { (int)io.MousePos.x, (int)io.MousePos.y };
        ::ClientToScreen(g_hWnd, &pos);
        ::SetCursorPos(pos.x, pos.y);
    }
    
    namespace folly {
    }
    
    TEST(Expected, CoroutineFailure) {
  auto r1 = []() -> Expected<int, Err> {
    auto x = co_await f1();
    auto y = co_await f2(x);
    auto z = co_await f4(x, y, Err::badder());
    ADD_FAILURE();
    co_return z;
  }();
  EXPECT_TRUE(r1.hasError());
  EXPECT_EQ(Err::badder(), r1.error());
}
    
    
    {} // namespace folly

    
      void add_external(BasePtr* res, int64_t c = 0) const {
    assert(res);
    CountedDetail::inc_shared_count(res, EXTERNAL_OFFSET + c);
  }
  void release_external(PackedPtr& res, int64_t c = 0) const {
    if (!res.get()) {
      return;
    }
    int64_t count = get_local_count(res) + c;
    int64_t diff = EXTERNAL_OFFSET - count;
    assert(diff >= 0);
    CountedDetail::template release_shared<T>(res.get(), diff);
  }
  PackedPtr get_newptr(const SharedPtr& n) const {
    BasePtr* newval;
    unsigned count = 0;
    if (!n) {
      newval = nullptr;
    } else {
      newval = CountedDetail::get_counted_base(n);
      if (n.get() != CountedDetail::template get_shared_ptr<T>(newval)) {
        // This is an aliased sharedptr.  Make an un-aliased one
        // by wrapping in *another* shared_ptr.
        auto data = CountedDetail::template make_ptr<SharedPtr>(n);
        newval = CountedDetail::get_counted_base(data);
        count = ALIASED_PTR;
        // (add external must happen before data goes out of scope)
        add_external(newval);
      } else {
        add_external(newval);
      }
    }
    }
    
    // basically shared_ptr, but only supports make_counted, and provides
// access to add_ref / release_ref with a count.  Alias not supported.
template <typename T, template <typename> class Atom = std::atomic>
class counted_ptr : public counted_ptr_base<Atom> {
 public:
  T* p_;
  counted_ptr() : p_(nullptr) {}
  counted_ptr(counted_shared_tag, T* p) : p_(p) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
    }
    
        static BOOST_FORCEINLINE bool compare_exchange_weak(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order success_order, memory_order failure_order) BOOST_NOEXCEPT
    {
        return compare_exchange_strong(storage, expected, desired, success_order, failure_order);
    }
    
        struct aligned
    {
        BOOST_ALIGNMENT(16) type value;
    }