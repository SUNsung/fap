
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    static void secp256k1_ecdsa_recoverable_signature_load(const secp256k1_context* ctx, secp256k1_scalar* r, secp256k1_scalar* s, int* recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    (void)ctx;
    if (sizeof(secp256k1_scalar) == 32) {
        /* When the secp256k1_scalar type is exactly 32 byte, use its
         * representation inside secp256k1_ecdsa_signature, as conversion is very fast.
         * Note that secp256k1_ecdsa_signature_save must use the same representation. */
        memcpy(r, &sig->data[0], 32);
        memcpy(s, &sig->data[32], 32);
    } else {
        secp256k1_scalar_set_b32(r, &sig->data[0], NULL);
        secp256k1_scalar_set_b32(s, &sig->data[32], NULL);
    }
    *recid = sig->data[64];
}
    
    #ifndef BITCOIN_BECH32_H
#define BITCOIN_BECH32_H
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    namespace {
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    
    {  desired_output_for_decode = 'abcdefghIJz';
  expected = string('\0abcdefghIJz\0', 13);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
}
    
    // We use this class instead of ArrayByteSource to simulate a ByteSource that
// contains multiple fragments.  ArrayByteSource returns the entire array in
// one fragment.
class MockByteSource : public ByteSource {
 public:
  MockByteSource(StringPiece data, int block_size)
    : data_(data), block_size_(block_size) {}
    }
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// Template metaprogramming utility functions.
//
// This code is compiled directly on many platforms, including client
// platforms like Windows, Mac, and embedded systems.  Before making
// any changes here, make sure that you're not breaking any platforms.
//
//
// The names chosen here reflect those used in tr1 and the boost::mpl
// library, there are similar operations used in the Loki library as
// well.  I prefer the boost names for 2 reasons:
// 1.  I think that portions of the Boost libraries are more likely to
// be included in the c++ standard.
// 2.  It is not impossible that some of the boost libraries will be
// included in our own build in the future.
// Both of these outcomes means that we may be able to directly replace
// some of these with boost equivalents.
//
#ifndef GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
#define GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
    
        for (size_t i = 0; i < set_fields.size(); i++) {
      const FieldDescriptor* field = set_fields[i];
      if (ShouldBeClear(field)) {
        reflection->ClearField(message, field);
        continue;
      }
      if (field->type() == FieldDescriptor::TYPE_MESSAGE) {
        if (field->is_repeated()) {
          for (int j = 0; j < reflection->FieldSize(*message, field); j++) {
            StripMessage(reflection->MutableRepeatedMessage(message, field, j));
          }
        } else {
          StripMessage(reflection->MutableMessage(message, field));
        }
      }
    }
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      GogoDataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
    
    {
    {    return true;
  }
};
    
        EnumScrubber enum_scrubber;
    enum_scrubber.ScrubFile(&new_file);
    ExtensionStripper::StripFile(&new_file);
    FieldScrubber::ScrubFile(&new_file);
    new_file.set_syntax('proto3');
    
    
    {};
    
    			for (unsigned int uiPixelOrder = 0; uiPixelOrder < PIXELS / 2; uiPixelOrder++)
			{
				unsigned int uiPixel1 = pauiPixelMapping1[uiPixelOrder];
				unsigned int uiPixel2 = pauiPixelMapping2[uiPixelOrder];
    }
    
    // Constants:
//  for (int i = 1; i< 32; ++i)
//    printf('static const int cospi_%d_64 = %.0f;\n', i,
//           round(16384 * cos(i*M_PI/64)));
// Note: sin(k*Pi/64) = cos((32-k)*Pi/64)
static const tran_high_t cospi_1_64  = 16364;
static const tran_high_t cospi_2_64  = 16305;
static const tran_high_t cospi_3_64  = 16207;
static const tran_high_t cospi_4_64  = 16069;
static const tran_high_t cospi_5_64  = 15893;
static const tran_high_t cospi_6_64  = 15679;
static const tran_high_t cospi_7_64  = 15426;
static const tran_high_t cospi_8_64  = 15137;
static const tran_high_t cospi_9_64  = 14811;
static const tran_high_t cospi_10_64 = 14449;
static const tran_high_t cospi_11_64 = 14053;
static const tran_high_t cospi_12_64 = 13623;
static const tran_high_t cospi_13_64 = 13160;
static const tran_high_t cospi_14_64 = 12665;
static const tran_high_t cospi_15_64 = 12140;
static const tran_high_t cospi_16_64 = 11585;
static const tran_high_t cospi_17_64 = 11003;
static const tran_high_t cospi_18_64 = 10394;
static const tran_high_t cospi_19_64 = 9760;
static const tran_high_t cospi_20_64 = 9102;
static const tran_high_t cospi_21_64 = 8423;
static const tran_high_t cospi_22_64 = 7723;
static const tran_high_t cospi_23_64 = 7005;
static const tran_high_t cospi_24_64 = 6270;
static const tran_high_t cospi_25_64 = 5520;
static const tran_high_t cospi_26_64 = 4756;
static const tran_high_t cospi_27_64 = 3981;
static const tran_high_t cospi_28_64 = 3196;
static const tran_high_t cospi_29_64 = 2404;
static const tran_high_t cospi_30_64 = 1606;
static const tran_high_t cospi_31_64 = 804;
    
    /** 16x32 multiply, followed by a 16-bit shift right and 32-bit add.
    Result fits in 32 bits. */
#undef MAC16_32_Q16
#define MAC16_32_Q16(c, a, b) ADD32(c, MULT16_32_Q16(a, b))
    
      //----- update graphics state
  virtual void updateCTM(GfxState *state, double m11, double m12,
			 double m21, double m22, double m31, double m32);
  virtual void updateLineDash(GfxState *state);
  virtual void updateFlatness(GfxState *state);
  virtual void updateLineJoin(GfxState *state);
  virtual void updateLineCap(GfxState *state);
  virtual void updateMiterLimit(GfxState *state);
  virtual void updateLineWidth(GfxState *state);
  virtual void updateFillColorSpace(GfxState *state);
  virtual void updateStrokeColorSpace(GfxState *state);
  virtual void updateFillColor(GfxState *state);
  virtual void updateStrokeColor(GfxState *state);
  virtual void updateFillOverprint(GfxState *state);
  virtual void updateStrokeOverprint(GfxState *state);
  virtual void updateTransfer(GfxState *state);
    
      if (*keys[0] == key) {
    return items[0];
  }
  for (int i = 1; i <= lastValidCacheIndex; i++) {
    if (*keys[i] == key) {
      PopplerCacheKey *keyHit = keys[i];
      PopplerCacheItem *itemHit = items[i];
    }
    }
    
    public:
    
    #include <config.h>
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    static void outliterals(stb_uchar *in, int numlit)
{
    while (numlit > 65536) {
        outliterals(in,65536);
        in     += 65536;
        numlit -= 65536;
    }
    }
    
        // Backup Allegro state that will be modified
    ALLEGRO_TRANSFORM last_transform = *al_get_current_transform();
    ALLEGRO_TRANSFORM last_projection_transform = *al_get_current_projection_transform();
    int last_clip_x, last_clip_y, last_clip_w, last_clip_h;
    al_get_clipping_rectangle(&last_clip_x, &last_clip_y, &last_clip_w, &last_clip_h);
    int last_blender_op, last_blender_src, last_blender_dst;
    al_get_blender(&last_blender_op, &last_blender_src, &last_blender_dst);
    
    
    {    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None || io.MouseDrawCursor)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
    }
    else
    {
        // Show OS mouse cursor
        // FIXME-PLATFORM: Unfocused windows seems to fail changing the mouse cursor with GLFW 3.2, but 3.3 works here.
        glfwSetCursor(g_Window, g_MouseCursors[imgui_cursor] ? g_MouseCursors[imgui_cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    }
}
    
        // If you are using this code with non-legacy OpenGL header/contexts (which you should not, prefer using imgui_impl_opengl3.cpp!!),
    // you may need to backup/reset/restore current shader using the lines below. DO NOT MODIFY THIS FILE! Add the code in your calling function:
    //  GLint last_program;
    //  glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
    //  glUseProgram(0);
    //  ImGui_ImplOpenGL2_RenderDrawData(...);
    //  glUseProgram(last_program)
    
    //---- Using 32-bits vertex indices (default is 16-bits) is one way to allow large meshes with more than 64K vertices. 
// Your renderer back-end will need to support it (most example renderer back-ends support both 16/32-bits indices).
// Another way to allow large meshes while keeping 16-bits indices is to handle ImDrawCmd::VtxOffset in your renderer. 
// Read about ImGuiBackendFlags_RendererHasVtxOffset for details.
//#define ImDrawIdx unsigned int
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    // We intentionally avoid using ImVec2 and its math operators here to reduce cost to a minimum for debug/non-inlined builds.
void ImDrawList::AddConvexPolyFilled(const ImVec2* points, const int points_count, ImU32 col)
{
    if (points_count < 3)
        return;
    }
    
        // change the string
    j.at('/string'_json_pointer) = 'bar';
    // output the changed string
    std::cout << j['string'] << '\n';
    
        // create an object from std::unordered_map
    std::unordered_map<const char*, double> c_umap
    {
        {'one', 1.2}, {'two', 2.3}, {'three', 3.4}
    };
    json j_umap(c_umap);
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      x <<= 4;
  x |= t;
    
    TEST(Brake61Test, General) {
  int32_t length = 8;
  ChassisDetail chassis_detail;
  uint8_t bytes[8] = {0x01, 0x02, 0x03, 0x04, 0x11, 0x12, 0x13, 0x14};
    }
    
    
    {  Horn_rpt_79::Output_valueType ret =
      static_cast<Horn_rpt_79::Output_valueType>(x);
  return ret;
}