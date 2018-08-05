
        
        
    {  typedef std::unordered_map<string, DeviceAttributes> StatusMap;
  StatusMap device_status_cache_ GUARDED_BY(mu_);
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    TfLiteRegistration* Register_ARG_MIN() {
  static TfLiteRegistration r = {nullptr, nullptr, arg_min_max::Prepare,
                                 arg_min_max::ArgMinEval};
  return &r;
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #ifndef TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
#define TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
    inline
static void DBSynchronize(kyotocabinet::TreeDB* db_)
{
  // Synchronize will flush writes to disk
  if (!db_->synchronize()) {
    fprintf(stderr, 'synchronize error: %s\n', db_->error().name());
  }
}
    
        // Backup the DX9 state
    IDirect3DStateBlock9* d3d9_state_block = NULL;
    if (g_pd3dDevice->CreateStateBlock(D3DSBT_ALL, &d3d9_state_block) < 0)
        return;
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
    
    {    for (int i = 0; i < IMGUI_VK_QUEUED_FRAMES; i++)
    {
        ImGui_ImplVulkanH_FrameData* fd = &wd->Frames[i];
        vkDestroyFence(device, fd->Fence, allocator);
        vkFreeCommandBuffers(device, fd->CommandPool, 1, &fd->CommandBuffer);
        vkDestroyCommandPool(device, fd->CommandPool, allocator);
        vkDestroySemaphore(device, fd->ImageAcquiredSemaphore, allocator);
        vkDestroySemaphore(device, fd->RenderCompleteSemaphore, allocator);
    }
    for (uint32_t i = 0; i < wd->BackBufferCount; i++)
    {
        vkDestroyImageView(device, wd->BackBufferView[i], allocator);
        vkDestroyFramebuffer(device, wd->Framebuffer[i], allocator);
    }
    vkDestroyRenderPass(device, wd->RenderPass, allocator);
    vkDestroySwapchainKHR(device, wd->Swapchain, allocator);
    vkDestroySurfaceKHR(instance, wd->Surface, allocator);
    *wd = ImGui_ImplVulkanH_WindowData();
}

    
    
    {    return 0;
}
