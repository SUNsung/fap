
        
          std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    #include 'db/log_writer.h'
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SnapshotImpl(SequenceNumber sequence_number)
      : sequence_number_(sequence_number) {}
    }
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    
    {    elem_of_each_node_[left_node_id] = Elem(begin, split_pt, left_node_id);
    elem_of_each_node_[right_node_id] = Elem(split_pt, e.end, right_node_id);
    elem_of_each_node_[node_id] = Elem(nullptr, nullptr, -1);
  }
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
        for (size_t i = 0; i < 16; ++i) {
      ASSERT_EQ (s[i], arr[i]);
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
            // Enable debug report extension (we need additional storage, so we duplicate the user array to add our new extension to it)
        const char** extensions_ext = (const char**)malloc(sizeof(const char*) * (extensions_count + 1));
        memcpy(extensions_ext, extensions, extensions_count * sizeof(const char*));
        extensions_ext[extensions_count] = 'VK_EXT_debug_report';
        create_info.enabledExtensionCount = extensions_count + 1;
        create_info.ppEnabledExtensionNames = extensions_ext;
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color