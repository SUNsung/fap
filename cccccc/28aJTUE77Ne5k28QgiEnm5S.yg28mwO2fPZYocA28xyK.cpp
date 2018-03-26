
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #include 'base/values.h'
#include 'extensions/common/draggable_region.h'
#include 'content/public/common/common_param_traits.h'
#include 'ipc/ipc_message_macros.h'
#include 'ui/gfx/ipc/gfx_param_traits.h'
    
    #include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/base/clipboard/clipboard.h'
    
      static int AllocateId();
    
      ~EventListener() override;
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    
    {  *accelerator = item->accelerator_;
  return true;
}
    
    
    {}  // namespace nwapi

    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    std::string Value::toStyledString() const {
  StyledWriter writer;
  return writer.write(*this);
}
    
    PyObject* NewFileEnumTypesByName(const FileDescriptor* descriptor);
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ReflectionClassGenerator);
};
    
    void RepeatedPrimitiveFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.AddEntriesFrom(input, _repeated_$name$_codec);\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
    // Author: liujisi@google.com (Pherl Liu)
    
    const char *Timer::getName() const {
  switch (m_type) {
  case WallTime:  return 'wall time';
  case SystemCPU: return 'system cpu';
  case UserCPU:   return 'user cpu';
  case TotalCPU:  return 'total cpu';
  default: assert(false);
  }
  return nullptr;
}
    
    extern __thread int64_t s_extra_request_nanoseconds;
    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
    
    {  unsigned next_vr{Vreg::V0};
  Vlabel entry;
  jit::vector<Vframe> frames;
  jit::vector<Vblock> blocks;
  jit::hash_map<Vconst,Vreg,Vconst::Hash> constToReg;
  jit::hash_map<size_t,Vconst> regToConst;
  jit::vector<VregList> tuples;
  jit::vector<VcallArgs> vcallArgs;
  jit::vector<VdataBlock> dataBlocks;
  uint16_t cur_voff{0};  // current instruction index managed by Vout
  bool padding{false};
  bool profiling{false};
  folly::Optional<TransContext> context;
  StructuredLogEntry* log_entry{nullptr};
};
    
    
    {  return returnArray.toVariant();
}
    
      // set interleave for early code. we'll then force interleave for a few
  // regions, and switch to local for the threads
  numa_set_interleave_mask(numa_all_nodes_ptr);
    
    struct IRGS;
    
    // Normalize incoming arc weights and compute avgCallOffset for each node.
void TargetGraph::normalizeArcWeights() {
  for (TargetId f = 0; f < targets.size(); f++) {
    auto& func = targets[f];
    for (auto src : func.preds) {
      auto& arc = *arcs.find(Arc(src, f));
      arc.normalizedWeight = arc.weight / func.samples;
      if (arc.weight == 0) continue;
      arc.avgCallOffset = arc.avgCallOffset / arc.weight;
      assert(arc.avgCallOffset < targets[src].size);
    }
  }
}
    
    
Instruction* Instruction::ImmPCOffsetTarget(Instruction* from) {
  ptrdiff_t offset;
  if (IsPCRelAddressing()) {
    // PC-relative addressing. Only ADR is supported.
    offset = ImmPCRel();
  } else if (IsLoadOrStore()) {
    offset = ImmLLiteral() << kInstructionSizeLog2;
  } else {
    // All PC-relative branches.
    assert(BranchType() != UnknownBranchType);
    // Relative branch offsets are instruction-size-aligned.
    offset = ImmBranch() << kInstructionSizeLog2;
  }
  return (!from ? this : from) + offset;
}
    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
        inline int get_num_components() const { return m_comps_in_frame; }
    
    static const static_bookblock _resbook_16u_0={
  {
    {0},
    {0,0,&_16u0__p1_0},
    {0,0,&_16u0__p2_0},
    {0,0,&_16u0__p3_0},
    {0,0,&_16u0__p4_0},
    {0,0,&_16u0__p5_0},
    {&_16u0__p6_0,&_16u0__p6_1},
    {&_16u0__p7_0,&_16u0__p7_1,&_16u0__p7_2}
   }
};
static const static_bookblock _resbook_16u_1={
  {
    {0},
    {0,0,&_16u1__p1_0},
    {0,0,&_16u1__p2_0},
    {0,0,&_16u1__p3_0},
    {0,0,&_16u1__p4_0},
    {0,0,&_16u1__p5_0},
    {0,0,&_16u1__p6_0},
    {&_16u1__p7_0,&_16u1__p7_1},
    {&_16u1__p8_0,&_16u1__p8_1},
    {&_16u1__p9_0,&_16u1__p9_1,&_16u1__p9_2}
   }
};
static const static_bookblock _resbook_16u_2={
  {
    {0},
    {0,0,&_16u2_p1_0},
    {0,0,&_16u2_p2_0},
    {0,0,&_16u2_p3_0},
    {0,0,&_16u2_p4_0},
    {&_16u2_p5_0,&_16u2_p5_1},
    {&_16u2_p6_0,&_16u2_p6_1},
    {&_16u2_p7_0,&_16u2_p7_1},
    {&_16u2_p8_0,&_16u2_p8_1},
    {&_16u2_p9_0,&_16u2_p9_1,&_16u2_p9_2}
   }
};
    
    static const static_bookblock _resbook_44s_0={
  {
    {0},{0,0,&_44c0_s_p1_0},{0,0,&_44c0_s_p2_0},
    {0,0,&_44c0_s_p3_0},{0,0,&_44c0_s_p4_0},{0,0,&_44c0_s_p5_0},
    {&_44c0_s_p6_0,&_44c0_s_p6_1},{&_44c0_s_p7_0,&_44c0_s_p7_1},
    {&_44c0_s_p8_0,&_44c0_s_p8_1,&_44c0_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_0={
  {
    {0},{0,0,&_44c0_sm_p1_0},{0,0,&_44c0_sm_p2_0},
    {0,0,&_44c0_sm_p3_0},{0,0,&_44c0_sm_p4_0},{0,0,&_44c0_sm_p5_0},
    {&_44c0_sm_p6_0,&_44c0_sm_p6_1},{&_44c0_sm_p7_0,&_44c0_sm_p7_1},
    {&_44c0_sm_p8_0,&_44c0_sm_p8_1,&_44c0_sm_p8_2}
   }
};
    
    
    {  {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p6_lfe,&_huff_book__44p6_lfe,
   &_resbook_44p_l6,&_resbook_44p_l6}
};
    
    static const static_bookblock _resbook_8u_0={
  {
    {0},
    {0,0,&_8u0__p1_0},
    {0,0,&_8u0__p2_0},
    {0,0,&_8u0__p3_0},
    {0,0,&_8u0__p4_0},
    {0,0,&_8u0__p5_0},
    {&_8u0__p6_0,&_8u0__p6_1},
    {&_8u0__p7_0,&_8u0__p7_1,&_8u0__p7_2}
   }
};
static const static_bookblock _resbook_8u_1={
  {
    {0},
    {0,0,&_8u1__p1_0},
    {0,0,&_8u1__p2_0},
    {0,0,&_8u1__p3_0},
    {0,0,&_8u1__p4_0},
    {0,0,&_8u1__p5_0},
    {0,0,&_8u1__p6_0},
    {&_8u1__p7_0,&_8u1__p7_1},
    {&_8u1__p8_0,&_8u1__p8_1},
    {&_8u1__p9_0,&_8u1__p9_1,&_8u1__p9_2}
   }
};
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
    #ifndef CPU_SUPPORT_H
#define CPU_SUPPORT_H
    
    #endif /* FLOAT_CAST_H */

    
    #undef MULT16_16_Q15_SUB
static inline int MULT16_16_Q15_SUB(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('msub $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
      for (const auto& iter : line) {
    options_index++;
    if (iter[0] == '/') {
      line_exports.push_back(iter);
    } else {
      break;
    }
  }
    
    class DropPrivileges;
using DropPrivilegesRef = std::shared_ptr<DropPrivileges>;
    
    #include <osquery/config.h>
#include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/extensions.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/status.h>
#include <osquery/tables.h>
    
      /**
   * @brief Forcefully request the application to stop.
   *
   * See #requestShutdown, this overloaded alternative allows the caller to
   * also log a reason/message to the system log. This is intended for extreme
   * failure cases and thus requires an explicit error code.
   *
   * @param retcode the request return code for the process.
   * @param system_log A log line to write to the system's log.
   */
  static void requestShutdown(int retcode, const std::string& system_log);
    
      /*
   * @brief a helper variable for keeping track of the posix tar archive.
   *
   * This variable is the absolute location of the tar archive created from
   * tar'ing all of the carved files from the carve temp dir.
   */
  boost::filesystem::path archivePath_;
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    w = al_get_display_width(g_Display);
    h = al_get_display_height(g_Display);
    io.DisplaySize = ImVec2((float)w, (float)h);
    
            IwGxSetVertStreamScreenSpace(pVertStream, nVert);
        IwGxSetUVStream(pUVStream);
        IwGxSetColStream(pColStream, nVert);
        IwGxSetNormStream(0);
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return E_FAIL;
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL3_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL3_CreateDeviceObjects();
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    ImGui_ImplGlfwGL3_Init(window, true);
    
        SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
            VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = glfw_extensions;
    
            ID3D11Texture2D *pTexture = NULL;
        D3D11_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = pixels;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);
    
    
    {  Benchmark& operator=(Benchmark const&);
};
    
    bool FindBenchmarksInternal(const std::string& re,
                            std::vector<Benchmark::Instance>* benchmarks,
                            std::ostream* Err);
    
    #endif  // CHECK_H_

    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    
    {  return true;
}
    
      // Do not print iteration on bigO and RMS report
  if (!run.report_big_o && !run.report_rms) {
    Out << run.iterations;
  }
  Out << ',';