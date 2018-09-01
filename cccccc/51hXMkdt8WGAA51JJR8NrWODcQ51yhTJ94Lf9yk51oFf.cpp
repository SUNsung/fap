
        
        #include <set>
#include <string>
#include <vector>
    
      // brightray::MainDelegate:
  std::unique_ptr<brightray::ContentClient> CreateContentClient() override;
#if defined(OS_MACOSX)
  void OverrideChildProcessPath() override;
  void OverrideFrameworkBundlePath() override;
#endif
    
    #include 'base/command_line.h'
    
      // Delegate implementations.
  void OnError(const std::string& error) override;
  void OnError(const std::string& message,
               const int code,
               const std::string& domain) override;
  void OnCheckingForUpdate() override;
  void OnUpdateAvailable() override;
  void OnUpdateNotAvailable() override;
  void OnUpdateDownloaded(const std::string& release_notes,
                          const std::string& release_name,
                          const base::Time& release_date,
                          const std::string& update_url) override;
    
    BoxLayout::~BoxLayout() {}
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
      // content::DevToolsAgentHostClient:
  void AgentHostClosed(content::DevToolsAgentHost* agent_host) override;
  void DispatchProtocolMessage(content::DevToolsAgentHost* agent_host,
                               const std::string& message) override;
    
      AcceleratorCallbackMap accelerator_callback_map_;
    
    #ifdef DEBUG_LOG
#define COLOR '\033[31;1m'
#define RESET '\033[0m'
#define __DEBUG(msg, ...) fprintf(stderr, COLOR msg '%c' RESET, __VA_ARGS__);
#define DEBUG(...) __DEBUG(__VA_ARGS__, '\n')
#else
#define DEBUG(...) (void)0
#endif
    
    
    {} // namespace caffe2

    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/core/tensor.h'
    
    
    {} // namespace caffe2

    
    
    {} // namespace caffe2
    
    
    {} // namespace caffe2

    
    	PathRemoveFileSpec(exeDir);
    
    Follow* Follow::create(Node *followedNode, const Rect& rect/* = Rect::ZERO*/)
{
    return createWithOffset(followedNode, 0.0, 0.0,rect);
}
    
    #include '2d/CCActionCamera.h'
#include '2d/CCNode.h'
#include 'platform/CCStdC.h'
    
    
    {    return ret;
}
    
    void ActionManager::resumeTargets(const Vector<Node*>& targetsToResume)
{
    for(const auto &node : targetsToResume)
    {
        this->resumeTarget(node);
    }
}
    
    NS_CC_BEGIN
    
    void ProgressFromTo::update(float time)
{
    ((kProgressTimerCast)(_target))->setPercentage(_from + (_to - _from) * time);
}
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    Animation* Animation::createWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithSpriteFrames(frames, delay, loops);
    animation->autorelease();
    }
    
    /** Read an NSDictionary from a plist file and parse it automatically for animations */
void AnimationCache::addAnimationsWithFile(const std::string& plist)
{
    CCASSERT(!plist.empty(), 'Invalid texture file name');
    if (plist.empty()) {
        log('%s error:file name is empty!', __FUNCTION__);
        return;
    }
    
    ValueMap dict = FileUtils::getInstance()->getValueMapFromFile(plist);
    }
    
    /** @brief AtlasNode is a subclass of Node that implements the RGBAProtocol and TextureProtocol protocol.
 * It knows how to render a TextureAtlas object.
 * If you are going to render a TextureAtlas consider subclassing AtlasNode (or a subclass of AtlasNode).
 * All features from Node are valid, plus the following features:
 * - opacity and RGB colors.
 */
class CC_DLL AtlasNode : public Node, public TextureProtocol
{    
public:
	/** creates a AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render.
     *
     * @param filename The path of Atlas file.
     * @param tileWidth The width of the item.
     * @param tileHeight The height of the item.
     * @param itemsToRender The quantity of items to render.
     */
	static AtlasNode * create(const std::string& filename, int tileWidth, int tileHeight, int itemsToRender);
    }
    
    
    {        ImGui::Render();
    }
    
            // Allegro's implementation of al_draw_indexed_prim() for DX9 is completely broken. Unindex our buffers ourselves.
        // FIXME-OPT: Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 float as well..
        static ImVector<ImDrawVertAllegro> vertices;
        vertices.resize(cmd_list->IdxBuffer.Size);
        for (int i = 0; i < cmd_list->IdxBuffer.Size; i++)
        {
            const ImDrawVert* src_v = &cmd_list->VtxBuffer[cmd_list->IdxBuffer[i]];
            ImDrawVertAllegro* dst_v = &vertices[i];
            dst_v->pos = src_v->pos;
            dst_v->uv = src_v->uv;
            unsigned char* c = (unsigned char*)&src_v->col;
            dst_v->col = al_map_rgba(c[0], c[1], c[2], c[3]);
        }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    static void FramePresent(ImGui_ImplVulkanH_WindowData* wd)
{
    ImGui_ImplVulkanH_FrameData* fd = &wd->Frames[wd->FrameIndex];
    VkPresentInfoKHR info = {};
    info.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    info.waitSemaphoreCount = 1;
    info.pWaitSemaphores = &fd->RenderCompleteSemaphore;
    info.swapchainCount = 1;
    info.pSwapchains = &wd->Swapchain;
	info.pImageIndices = &wd->FrameIndex;
	VkResult err = vkQueuePresentKHR(g_Queue, &info);
    check_vk_result(err);
}