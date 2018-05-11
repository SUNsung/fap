
        
        void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
    #include 'atom/browser/unresponsive_suppressor.h'
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
    #endif  // ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_

    
    #include 'base/macros.h'
#include 'v8/include/v8.h'
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      std::unique_ptr<base::ListValue> preferences_;
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #ifndef CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
    
    // MonitorFinder maps a RenderFrameHost to the display ID on which the widget
// is painting. This class operates on the IO thread while the RenderFrameHost
// is on the UI thread, so the value returned by GetMonitor() may be 0 until
// the information can be retrieved asynchronously.
class MonitorFinder : public base::RefCountedThreadSafe<MonitorFinder> {
 public:
  MonitorFinder(int process_id, int render_frame_id);
    }
    
    
    {}  // namespace chrome
    
     private:
  PepperIsolatedFileSystemMessageFilter(int render_process_id,
                                        const base::FilePath& profile_directory,
                                        const GURL& document_url,
                                        ppapi::host::PpapiHost* ppapi_host_);
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    class EventListener : public Base {
  std::map<int, BaseEvent*> listerners_;
    }
    
     protected:
  ~NwAppClearAppCacheFunction() override;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    namespace python {
    }
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedEnumFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    namespace google {
namespace protobuf {
  class FieldDescriptor;         // descriptor.h
  class Descriptor;              // descriptor.h
  class ServiceDescriptor;       // descriptor.h
  namespace compiler {
    namespace java {
      class MessageGenerator;    // message.h
      class ExtensionGenerator;  // extension.h
      class ServiceGenerator;    // service.h
      class Context;             // context.h
    }
  }
}
    }
    
    #include 'intsimdmatrix.h'
#include <memory>
#include 'genericvector.h'
#include 'include_gunit.h'
#include 'intsimdmatrixavx2.h'
#include 'intsimdmatrixsse.h'
#include 'simddetect.h'
#include 'tprintf.h'
    
      // Returns an integer reduction factor that the network applies to the
  // time sequence. Assumes that any 2-d is already eliminated. Used for
  // scaling bounding boxes of truth data.
  // WARNING: if GlobalMinimax is used to vary the scale, this will return
  // the last used scale factor. Call it before any forward, and it will return
  // the minimum scale factor of the paths through the GlobalMinimax.
  int XScaleFactor() const override;
    
    TESS_API void TESS_CALL TessBaseAPISetInputImage(TessBaseAPI* handle, Pix* pix)
{
    handle->SetInputImage(pix);
}
    
    // Viewers like evince can get really confused during copy-paste when
// the baseline wanders around. So I've decided to project every word
// onto the (straight) line baseline. All numbers are in the native
// PDF coordinate system, which has the origin in the bottom left and
// the unit is points, which is 1/72 inch. Tesseract reports baselines
// left-to-right no matter what the reading order is. We need the
// word baseline in reading order, so we do that conversion here. Returns
// the word's baseline origin and length.
void GetWordBaseline(int writing_direction, int ppi, int height,
                     int word_x1, int word_y1, int word_x2, int word_y2,
                     int line_x1, int line_y1, int line_x2, int line_y2,
                     double *x0, double *y0, double *length) {
  if (writing_direction == WRITING_DIRECTION_RIGHT_TO_LEFT) {
    Swap(&word_x1, &word_x2);
    Swap(&word_y1, &word_y2);
  }
  double word_length;
  double x, y;
  {
    int px = word_x1;
    int py = word_y1;
    double l2 = dist2(line_x1, line_y1, line_x2, line_y2);
    if (l2 == 0) {
      x = line_x1;
      y = line_y1;
    } else {
      double t = ((px - line_x2) * (line_x2 - line_x1) +
                  (py - line_y2) * (line_y2 - line_y1)) / l2;
      x = line_x2 + t * (line_x2 - line_x1);
      y = line_y2 + t * (line_y2 - line_y1);
    }
    word_length = sqrt(static_cast<double>(dist2(word_x1, word_y1,
                                                 word_x2, word_y2)));
    word_length = word_length * 72.0 / ppi;
    x = x * 72 / ppi;
    y = height - (y * 72.0 / ppi);
  }
  *x0 = x;
  *y0 = y;
  *length = word_length;
}
    
    namespace tesseract {
    }
    
        // ****************** Pass 4 *******************
    if (tessedit_enable_dict_correction) dictionary_correction_pass(page_res);
    if (tessedit_enable_bigram_correction) bigram_correction_pass(page_res);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include <chrono>
#include <thread>
#include <vector>
    
      bool SetFailedAndReturnFalse() {
    failed_ = true;
    return false;
  }
    
    
    
    #include 'src/proto/grpc/testing/metrics.grpc.pb.h'
#include 'src/proto/grpc/testing/metrics.pb.h'
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    namespace xgboost {
    }
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    // global
#include '../src/learner.cc'
#include '../src/logging.cc'
#include '../src/common/common.cc'
#include '../src/common/host_device_vector.cc'
#include '../src/common/hist_util.cc'
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
      bool CheckConvergence() {
    if (param_.tolerance == 0.0f) return false;
    if (is_converged_) return true;
    if (previous_model_.weight.size() != model_.weight.size()) {
      previous_model_ = model_;
      return false;
    }
    float largest_dw = 0.0;
    for (size_t i = 0; i < model_.weight.size(); i++) {
      largest_dw = std::max(
          largest_dw, std::abs(model_.weight[i] - previous_model_.weight[i]));
    }
    previous_model_ = model_;
    }
    
    #endif // __cocos2dx_navmesh_h__
#endif //#if CC_USE_NAVMESH

    
    extern JSClass  *jsb_cocos2d_Physics3DSliderConstraint_class;
extern JSObject *jsb_cocos2d_Physics3DSliderConstraint_prototype;
    
    
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_PhysicsJointDistance_setDistance'.',&tolua_err);
#endif
    
    static stb_uint stb_adler32(stb_uint adler32, stb_uchar *buffer, stb_uint buflen)
{
    const unsigned long ADLER_MOD = 65521;
    unsigned long s1 = adler32 & 0xffff, s2 = adler32 >> 16;
    unsigned long blocklen, i;
    }
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    IMGUI_API bool        ImGui_ImplGlfwGL2_Init(GLFWwindow* window, bool install_callbacks);
IMGUI_API void        ImGui_ImplGlfwGL2_Shutdown();
IMGUI_API void        ImGui_ImplGlfwGL2_NewFrame();
IMGUI_API void        ImGui_ImplGlfwGL2_RenderDrawData(ImDrawData* draw_data);
    
        // Backup the DX9 state
    IDirect3DStateBlock9* d3d9_state_block = NULL;
    if (g_pd3dDevice->CreateStateBlock(D3DSBT_ALL, &d3d9_state_block) < 0)
        return;
    
    //---- Use 32-bit vertex indices (default is 16-bit) to allow meshes with more than 64K vertices. Render function needs to support it.
//#define ImDrawIdx unsigned int
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    static std::unique_ptr<Env> def_env(new NormalizingEnvWrapper(Env::Default()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvBasicTestWithParam,
                        ::testing::Values(def_env.get()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvMoreTestWithParam,
                        ::testing::Values(def_env.get()));
    
    #include <memory>
#include <string>
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
    namespace rocksdb {
    }
    
      // Notify this table rep that it will no longer be added to. By default,
  // does nothing.  After MarkReadOnly() is called, this table rep will
  // not be written to (ie No more calls to Allocate(), Insert(),
  // or any writes done directly to entries accessed through the iterator.)
  virtual void MarkReadOnly() { }
    
      int operator()(const char* a, const char* b) const {
    if (Decode(a) < Decode(b)) {
      return -1;
    } else if (Decode(a) > Decode(b)) {
      return +1;
    } else {
      return 0;
    }
  }
    
      void Clear() { key_size_ = 0; }
    
    
    {  void Open() { DBTestBase::Reopen(GetOptions()); }
};