
        
        #include 'content/nw/src/api/bindings_common.h'
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
       bool HasIcon(int command_id) override;
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    class NwObjCallObjectMethodSyncFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    void NwDesktopCaptureMonitor::OnSourceAdded(DesktopMediaList* list, int index) {
    DesktopMediaList::Source src = list->GetSource(index);
    }
    
    
    {    // This function call won't return, and will engage in an infinite loop, processing events from the browser, and dispatching them.
    emscripten_set_main_loop_arg(main_loop, NULL, 0, true);
}
    
            // Rendering
        FrameContext* frameCtxt = WaitForNextFrameResources();
        UINT backBufferIdx = g_pSwapChain->GetCurrentBackBufferIndex();
        frameCtxt->CommandAllocator->Reset();
    
        // Our state
    bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    
    {        // Create the constant buffer
        {
            D3D10_BUFFER_DESC desc;
            desc.ByteWidth = sizeof(VERTEX_CONSTANT_BUFFER);
            desc.Usage = D3D10_USAGE_DYNAMIC;
            desc.BindFlags = D3D10_BIND_CONSTANT_BUFFER;
            desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
            desc.MiscFlags = 0;
            g_pd3dDevice->CreateBuffer(&desc, NULL, &g_pVertexConstantBuffer);
        }
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    #include <stdarg.h>
    
    class StageParking : public Stage {
 public:
  explicit StageParking(const ScenarioConfig::StageConfig& config)
      : Stage(config) {}
    }
    
    /**
 * @file
 **/
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
class StageApproachingParkingSpotTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    config_.set_stage_type(
        ScenarioConfig::VALET_PARKING_APPROACHING_PARKING_SPOT);
  }
    }
    }
    }
    }
    }
    
    #include <string>
#include <vector>
    
    TEST(PredictionThreadPoolTest, global_for_each) {
  std::vector<int> expect = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> real = {1, 2, 3, 4, 5, 6, 7, 8};
    }
    
    std::unique_ptr<Stage> StopSignUnprotectedScenario::CreateStage(
    const ScenarioConfig::StageConfig& stage_config) {
  if (s_stage_factory_.Empty()) {
    RegisterStages();
  }
  auto ptr = s_stage_factory_.CreateObjectOrNull(stage_config.stage_type(),
                                                 stage_config);
  if (ptr) {
    ptr->SetContext(&context_);
  }
  return ptr;
}