namespace tensorflow {
REGISTER2(BinaryOp, CPU, 'Mod', functor::safe_mod, int32, int64);
REGISTER2(BinaryOp, CPU, 'Mod', functor::fmod, float, double);
REGISTER2(BinaryOp, CPU, 'TruncateMod', functor::safe_mod, int32, int64);
REGISTER2(BinaryOp, CPU, 'TruncateMod', functor::fmod, float, double);
    }
    
    TEST(ArgMaxOpTest, GetMaxArgInt) {
  ArgMaxOpModel<int32_t> model({1, 1, 1, 4}, TensorType_INT32, TensorType_INT32,
                               TensorType_INT32);
  model.PopulateTensor<int>(model.input(), {1, 9, 7, 3});
  // Currently only support the last dimension.
  model.PopulateTensor<int>(model.axis(), {3});
  model.Invoke();
    }
    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
    #ifndef TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
#define TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
    
    /*
 * Deprecated in favor of EncodeAudioOpV2.
 */
class EncodeAudioOp : public OpKernel {
 public:
  explicit EncodeAudioOp(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context, context->GetAttr('file_format', &file_format_));
    file_format_ = str_util::Lowercase(file_format_);
    OP_REQUIRES(context, file_format_ == 'wav',
                errors::InvalidArgument('file_format arg must be \'wav\'.'));
    }
    }
    
    TEST_F(RemoveDeviceTest, TestRemoveDevice) { TestRemoveDevice(); }
    
    REGISTER_COMPLEX(CPU, float, complex64);
REGISTER_COMPLEX(CPU, double, complex128);
    
    namespace tensorflow {
namespace functor {
DEFINE_UNARY2(get_angle, complex64, complex128);
}  // namespace functor
}  // namespace tensorflow
    
    namespace swift {
    }
    
    
    {
    {} // namespace markup
} // namespace swift
    
    #ifndef SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
#define SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
    
    // On OS X and iOS, swift_once_t matches dispatch_once_t.
typedef long swift_once_t;
    
      /// A list of all of the results that we are tracking in reverse order. The
  /// reason that it is in reverse order is to allow us to simply traverse the
  /// list by popping values off the back.
  SmallVector<SILResultInfo, 8> allResults;
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
    
    
    
    {}  // namespace nw

    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    
    {} // namespace nwapi

    
    
    {    } else {
      enable_shortcut = false;
    }
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& fname,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(fname);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    static void DeleteEntry(const Slice& key, void* value) {
  TableAndFile* tf = reinterpret_cast<TableAndFile*>(value);
  delete tf->table;
  delete tf->file;
  delete tf;
}
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    void WriteBatchInternal::SetContents(WriteBatch* b, const Slice& contents) {
  assert(contents.size() >= kHeader);
  b->rep_.assign(contents.data(), contents.size());
}
    
      Benchmark()
  : db_(NULL),
    num_(FLAGS_num),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    bytes_(0),
    rand_(301) {
    std::vector<std::string> files;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    Env::Default()->GetChildren(test_dir.c_str(), &files);
    if (!FLAGS_use_existing_db) {
      for (int i = 0; i < files.size(); i++) {
        if (Slice(files[i]).starts_with('dbbench_polyDB')) {
          std::string file_name(test_dir);
          file_name += '/';
          file_name += files[i];
          Env::Default()->DeleteFile(file_name.c_str());
        }
      }
    }
  }
    
      // Return true iff 'x' is a prefix of '*this'
  bool starts_with(const Slice& x) const {
    return ((size_ >= x.size_) &&
            (memcmp(data_, x.data_, x.size_) == 0));
  }
    
    
    {    ImGuiIO& io = ImGui::GetIO();
    switch (msg)
    {
    case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
    case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
    case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK:
    {
        int button = 0;
        if (msg == WM_LBUTTONDOWN || msg == WM_LBUTTONDBLCLK) button = 0;
        if (msg == WM_RBUTTONDOWN || msg == WM_RBUTTONDBLCLK) button = 1;
        if (msg == WM_MBUTTONDOWN || msg == WM_MBUTTONDBLCLK) button = 2;
        if (!ImGui::IsAnyMouseDown() && ::GetCapture() == NULL)
            ::SetCapture(hwnd);
        io.MouseDown[button] = true;
        return 0;
    }
    case WM_LBUTTONUP:
    case WM_RBUTTONUP:
    case WM_MBUTTONUP:
    {
        int button = 0;
        if (msg == WM_LBUTTONUP) button = 0;
        if (msg == WM_RBUTTONUP) button = 1;
        if (msg == WM_MBUTTONUP) button = 2;
        io.MouseDown[button] = false;
        if (!ImGui::IsAnyMouseDown() && ::GetCapture() == hwnd)
            ::ReleaseCapture();
        return 0;
    }
    case WM_MOUSEWHEEL:
        io.MouseWheel += (float)GET_WHEEL_DELTA_WPARAM(wParam) / (float)WHEEL_DELTA;
        return 0;
    case WM_MOUSEHWHEEL:
        io.MouseWheelH += (float)GET_WHEEL_DELTA_WPARAM(wParam) / (float)WHEEL_DELTA;
        return 0;
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        if (wParam < 256)
            io.KeysDown[wParam] = 1;
        return 0;
    case WM_KEYUP:
    case WM_SYSKEYUP:
        if (wParam < 256)
            io.KeysDown[wParam] = 0;
        return 0;
    case WM_CHAR:
        // You can also use ToAscii()+GetKeyboardState() to retrieve characters.
        if (wParam > 0 && wParam < 0x10000)
            io.AddInputCharacter((unsigned short)wParam);
        return 0;
    case WM_SETCURSOR:
        if (LOWORD(lParam) == HTCLIENT && ImGui_ImplWin32_UpdateMouseCursor())
            return 1;
        return 0;
    }
    return 0;
}
    
    
    {    // Gamepad navigation mapping [BETA]
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if (io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad)
    {
        // Update gamepad inputs
        #define MAP_BUTTON(NAV_NO, BUTTON_NO)       { if (buttons_count > BUTTON_NO && buttons[BUTTON_NO] == GLFW_PRESS) io.NavInputs[NAV_NO] = 1.0f; }
        #define MAP_ANALOG(NAV_NO, AXIS_NO, V0, V1) { float v = (axes_count > AXIS_NO) ? axes[AXIS_NO] : V0; v = (v - V0) / (V1 - V0); if (v > 1.0f) v = 1.0f; if (io.NavInputs[NAV_NO] < v) io.NavInputs[NAV_NO] = v; }
        int axes_count = 0, buttons_count = 0;
        const float* axes = glfwGetJoystickAxes(GLFW_JOYSTICK_1, &axes_count);
        const unsigned char* buttons = glfwGetJoystickButtons(GLFW_JOYSTICK_1, &buttons_count);
        MAP_BUTTON(ImGuiNavInput_Activate,   0);     // Cross / A
        MAP_BUTTON(ImGuiNavInput_Cancel,     1);     // Circle / B
        MAP_BUTTON(ImGuiNavInput_Menu,       2);     // Square / X
        MAP_BUTTON(ImGuiNavInput_Input,      3);     // Triangle / Y
        MAP_BUTTON(ImGuiNavInput_DpadLeft,   13);    // D-Pad Left
        MAP_BUTTON(ImGuiNavInput_DpadRight,  11);    // D-Pad Right
        MAP_BUTTON(ImGuiNavInput_DpadUp,     10);    // D-Pad Up
        MAP_BUTTON(ImGuiNavInput_DpadDown,   12);    // D-Pad Down
        MAP_BUTTON(ImGuiNavInput_FocusPrev,  4);     // L1 / LB
        MAP_BUTTON(ImGuiNavInput_FocusNext,  5);     // R1 / RB
        MAP_BUTTON(ImGuiNavInput_TweakSlow,  4);     // L1 / LB
        MAP_BUTTON(ImGuiNavInput_TweakFast,  5);     // R1 / RB
        MAP_ANALOG(ImGuiNavInput_LStickLeft, 0,  -0.3f,  -0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickRight,0,  +0.3f,  +0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickUp,   1,  +0.3f,  +0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickDown, 1,  -0.3f,  -0.9f);
        #undef MAP_BUTTON
        #undef MAP_ANALOG
        if (axes_count > 0 && buttons_count > 0)
            io.BackendFlags |= ImGuiBackendFlags_HasGamepad;
        else
            io.BackendFlags &= ~ImGuiBackendFlags_HasGamepad;
    }
}

    
    int32 ImGui_Marmalade_CharCallback(void* system_data, void* user_data)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)system_data;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    // DirectX data
static ID3D10Device*            g_pd3dDevice = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D10Buffer*            g_pVB = NULL;
static ID3D10Buffer*            g_pIB = NULL;
static ID3D10Blob *             g_pVertexShaderBlob = NULL;
static ID3D10VertexShader*      g_pVertexShader = NULL;
static ID3D10InputLayout*       g_pInputLayout = NULL;
static ID3D10Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob *             g_pPixelShaderBlob = NULL;
static ID3D10PixelShader*       g_pPixelShader = NULL;
static ID3D10SamplerState*      g_pFontSampler = NULL;
static ID3D10ShaderResourceView*g_pFontTextureView = NULL;
static ID3D10RasterizerState*   g_pRasterizerState = NULL;
static ID3D10BlendState*        g_pBlendState = NULL;
static ID3D10DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    #include <vector>
#include <string>
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
      EXPECT_FLOAT_EQ(prt_c_d(0, 0), 2);
  EXPECT_FLOAT_EQ(prt_c_d(0, 1), 2);
    
    // Obstacle features
DECLARE_bool(enable_kf_tracking);
DECLARE_double(max_acc);
DECLARE_double(min_acc);
DECLARE_double(max_speed);
DECLARE_double(q_var);
DECLARE_double(r_var);
DECLARE_double(p_var);
DECLARE_double(go_approach_rate);
    
    
    {  std::unique_ptr<SimulationWorldUpdater> sim_world_updater_;
  std::unique_ptr<PointCloudUpdater> point_cloud_updater_;
  std::unique_ptr<CivetServer> server_;
  std::unique_ptr<SimControl> sim_control_;
  std::unique_ptr<WebSocketHandler> websocket_;
  std::unique_ptr<WebSocketHandler> map_ws_;
  std::unique_ptr<WebSocketHandler> point_cloud_ws_;
  std::unique_ptr<ImageHandler> image_;
  std::unique_ptr<MapService> map_service_;
  std::unique_ptr<HMI> hmi_;
};
    
      virtual ~MultiCamerasProjection() = default;
  virtual bool Init();
  virtual bool Project(const CarPose &pose, const ProjectOption &option,
                       Light *light) const;
  std::string name() const { return 'TLPreprocessor'; }
    
    
    {
    {
    {}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo
