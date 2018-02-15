
        
          DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
    
    {  inline SILDebuggerClient *getAsSILDebuggerClient() {
    return this;
  }
private:
  virtual void anchor();
};
    
    #include 'swift/AST/SyntaxASTMap.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Stmt.h'
#include 'swift/Syntax/Syntax.h'
    
    //===----------------------------------------------------------------------===//
// CodeCompletionOrganizer implementation
//===----------------------------------------------------------------------===//
    
        GraphemeClusterBreakProperty GCBForC1 =
        getGraphemeClusterBreakProperty(C[1]);
    if (isExtendedGraphemeClusterBoundary(GCBForC0, GCBForC1) &&
        !graphemeBreakOverride(C[0], C[1]))
      return S.slice(0, C1Offset);
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    #include 'swift/Basic/LLVM.h'
#include 'swift/AST/DiagnosticConsumer.h'
    
        if (s)
    {
      if ((k += r) > 63)
        pD->stop_decoding(JPGD_DECODE_ERROR);
    }
    
    static const static_bookblock _resbook_44p_ln1={
  {
    {&_44pn1_l0_0,&_44pn1_l0_1,0},
    {&_44pn1_l1_0,&_44pn1_p6_1,&_44pn1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l0={
  {
    {&_44p0_l0_0,&_44p0_l0_1,0},
    {&_44p0_l1_0,&_44p0_p6_1,&_44p0_p6_2},
   }
};
static const static_bookblock _resbook_44p_l1={
  {
    {&_44p1_l0_0,&_44p1_l0_1,0},
    {&_44p1_l1_0,&_44p1_p6_1,&_44p1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l2={
  {
    {&_44p2_l0_0,&_44p2_l0_1,0},
    {&_44p2_l1_0,&_44p2_p7_2,&_44p2_p7_3},
   }
};
static const static_bookblock _resbook_44p_l3={
  {
    {&_44p3_l0_0,&_44p3_l0_1,0},
    {&_44p3_l1_0,&_44p3_p7_2,&_44p3_p7_3},
   }
};
static const static_bookblock _resbook_44p_l4={
  {
    {&_44p4_l0_0,&_44p4_l0_1,0},
    {&_44p4_l1_0,&_44p4_p7_2,&_44p4_p7_3},
   }
};
static const static_bookblock _resbook_44p_l5={
  {
    {&_44p5_l0_0,&_44p5_l0_1,0},
    {&_44p5_l1_0,&_44p5_p7_2,&_44p5_p7_3},
   }
};
static const static_bookblock _resbook_44p_l6={
  {
    {&_44p6_l0_0,&_44p6_l0_1,0},
    {&_44p6_l1_0,&_44p6_p7_2,&_44p6_p7_3},
   }
};
static const static_bookblock _resbook_44p_l7={
  {
    {&_44p7_l0_0,&_44p7_l0_1,0},
    {&_44p7_l1_0,&_44p7_p7_2,&_44p7_p7_3},
   }
};
static const static_bookblock _resbook_44p_l8={
  {
    {&_44p8_l0_0,&_44p8_l0_1,0},
    {&_44p8_l1_0,&_44p8_p7_2,&_44p8_p7_3},
   }
};
static const static_bookblock _resbook_44p_l9={
  {
    {&_44p9_l0_0,&_44p9_l0_1,0},
    {&_44p9_l1_0,&_44p9_p7_2,&_44p9_p7_3},
   }
};
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
    #undef MULT16_32_Q15_ADD
static inline int MULT16_32_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    // Number of key/values to place in database
static int FLAGS_num = 1000000;
    
    #include 'helpers/memenv/memenv.h'
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    void InitOnce(OnceType* once, void (*initializer)()) {
  PthreadCall('once', pthread_once(once, initializer));
}
    
    
    {  Status result = metaindex_handle_.DecodeFrom(input);
  if (result.ok()) {
    result = index_handle_.DecodeFrom(input);
  }
  if (result.ok()) {
    // We skip over any leftover data (just padding for now) in 'input'
    const char* end = magic_ptr + 8;
    *input = Slice(end, input->data() + input->size() - end);
  }
  return result;
}
    
    class Block;
class RandomAccessFile;
struct ReadOptions;
    
    Iterator* NewErrorIterator(const Status& status) {
  return new EmptyIterator(status);
}
    
    #ifndef STORAGE_LEVELDB_TABLE_MERGER_H_
#define STORAGE_LEVELDB_TABLE_MERGER_H_
    
      // Compares img with the baseline image and saves the resulting distance map
  // inside the object. The provided image must have the same dimensions as the
  // baseline image.
  virtual void Compare(const OutputImage& img) = 0;
    
    void OutputImage::Downsample(const DownsampleConfig& cfg) {
  if (components_[1].IsAllZero() && components_[2].IsAllZero()) {
    // If the image is already grayscale, nothing to do.
    return;
  }
  if (cfg.use_silver_screen &&
      cfg.u_factor_x == 2 && cfg.u_factor_y == 2 &&
      cfg.v_factor_x == 2 && cfg.v_factor_y == 2) {
    std::vector<uint8_t> rgb = ToSRGB();
    std::vector<std::vector<float> > yuv = RGBToYUV420(rgb, width_, height_);
    SetDownsampledCoefficients(yuv[0], 1, 1, &components_[0]);
    SetDownsampledCoefficients(yuv[1], 2, 2, &components_[1]);
    SetDownsampledCoefficients(yuv[2], 2, 2, &components_[2]);
    return;
  }
  // Get the floating-point precision YUV array represented by the set of
  // DCT coefficients.
  std::vector<std::vector<float> > yuv(3, std::vector<float>(width_ * height_));
  for (int c = 0; c < 3; ++c) {
    components_[c].ToFloatPixels(&yuv[c][0], 1);
  }
    }
    
    std::vector<float> LinearlyAveragedLuma(const std::vector<float>& rgb) {
  assert(rgb.size() % 3 == 0);
  std::vector<float> y(rgb.size() / 3);
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    y[i] = LinearToGamma(RGBToY(GammaToLinear(rgb[p + 0]),
                                GammaToLinear(rgb[p + 1]),
                                GammaToLinear(rgb[p + 2])));
  }
  return y;
}
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    #include 'guetzli/jpeg_data.h'
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
      void SaveToJpegData(JPEGData* jpg) const;
    
    #ifdef ANDROID
#include <jni.h>
    
    Test_Spy_Sample::~Test_Spy_Sample()
{
    SPY_DETACH_CLASS();
}
    
    void TSpy::TestFun0()
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->TestFun0();
}
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
        // Create texture
    int flags = al_get_new_bitmap_flags();
    int fmt = al_get_new_bitmap_format();
    al_set_new_bitmap_flags(ALLEGRO_MEMORY_BITMAP|ALLEGRO_MIN_LINEAR|ALLEGRO_MAG_LINEAR);
    al_set_new_bitmap_format(ALLEGRO_PIXEL_FORMAT_ABGR_8888_LE);
    ALLEGRO_BITMAP* img = al_create_bitmap(width, height);
    al_set_new_bitmap_flags(flags);
    al_set_new_bitmap_format(fmt);
    if (!img)
        return false;
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // Implemented features:
//  [X] User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    
    {        ImGui::Render();
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
    void ImGui_ImplDX9_InvalidateDeviceObjects()
{
    if (!g_pd3dDevice)
        return;
    if (g_pVB)
    {
        g_pVB->Release();
        g_pVB = NULL;
    }
    if (g_pIB)
    {
        g_pIB->Release();
        g_pIB = NULL;
    }
    }
    
      std::string SayHello(const std::string &name) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset = CreateHelloRequest(mb, name_offset);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<HelloRequest>();
    }
    
      virtual grpc::Status SayManyHellos(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<ManyHellosRequest> *request_msg,
      grpc::ServerWriter<flatbuffers::grpc::Message<HelloReply>> *writer)
      override {
    // The streaming usage below is simply a combination of standard gRPC
    // streaming with the FlatBuffers usage shown above.
    const ManyHellosRequest *request = request_msg->GetRoot();
    const std::string &name = request->name()->str();
    int num_greetings = request->num_greetings();
    }
    
    inline flatbuffers::Offset<Enum> CreateEnum(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<EnumVal>>> values = 0,
    bool is_union = false,
    flatbuffers::Offset<Type> underlying_type = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation = 0) {
  EnumBuilder builder_(_fbb);
  builder_.add_documentation(documentation);
  builder_.add_attributes(attributes);
  builder_.add_underlying_type(underlying_type);
  builder_.add_values(values);
  builder_.add_name(name);
  builder_.add_is_union(is_union);
  return builder_.Finish();
}
    
    
    {}  // namespace NamespaceA
    
    
    { public:
  StructInNestedNS() {
    memset(this, 0, sizeof(StructInNestedNS));
  }
  StructInNestedNS(int32_t _a, int32_t _b)
      : a_(flatbuffers::EndianScalar(_a)),
        b_(flatbuffers::EndianScalar(_b)) {
  }
  int32_t a() const {
    return flatbuffers::EndianScalar(a_);
  }
  void mutate_a(int32_t _a) {
    flatbuffers::WriteScalar(&a_, _a);
  }
  int32_t b() const {
    return flatbuffers::EndianScalar(b_);
  }
  void mutate_b(int32_t _b) {
    flatbuffers::WriteScalar(&b_, _b);
  }
};
STRUCT_END(StructInNestedNS, 8);
    
    
    {  WeaponT *AsWeapon() {
    return type == Equipment_Weapon ?
      reinterpret_cast<WeaponT *>(value) : nullptr;
  }
  const WeaponT *AsWeapon() const {
    return type == Equipment_Weapon ?
      reinterpret_cast<const WeaponT *>(value) : nullptr;
  }
};
    
    #include 'monster_test_generated.h'
#include 'flatbuffers/grpc.h'
    
    
    {
    {      for (auto part = parts.rbegin(); part != parts.rend(); part++) {
        vars['part'] = *part;
        printer->Print(vars, '}  // namespace $part$\n');
      }
      printer->Print(vars, '\n');
    }
    
      flatbuffers::grpc::MessageBuilder fbb;
  {
    grpc::ClientContext context;
    // Build a request with the name set.
    auto monster_offset = CreateMonster(fbb, 0, 0, 0, fbb.CreateString('Fred'));
    fbb.Finish(monster_offset);
    auto request = fbb.ReleaseMessage<Monster>();
    flatbuffers::grpc::Message<Stat> response;
    }
    
    #if defined(FLATBUFFERS_MEMORY_LEAK_TRACKING) && \
    defined(_MSC_VER) && defined(_DEBUG)
  #include <crtdbg.h>
  #define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
  #define new DEBUG_NEW
#endif
    
    // Example how to use FlatBuffers to create and read binary buffers.