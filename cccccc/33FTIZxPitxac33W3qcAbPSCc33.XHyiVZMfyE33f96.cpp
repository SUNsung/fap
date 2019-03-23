
        
        template <bool L2gradient, bool externalSobel>
struct _normEstimator
{
    ptrdiff_t magstep;
    ptrdiff_t dxOffset;
    ptrdiff_t dyOffset;
    ptrdiff_t shxOffset;
    ptrdiff_t shyOffset;
    std::vector<u8> buffer;
    const ptrdiff_t offsetk;
    ptrdiff_t borderyt, borderyb;
    RowFilter3x3Canny sobelRow;
    }
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vadd.f32 q10, q8, q1                                     \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                             \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                             \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(s16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
                    d &= tab[ptr[pixel[1]]] | tab[ptr[pixel[9]]];
                d &= tab[ptr[pixel[3]]] | tab[ptr[pixel[11]]];
                d &= tab[ptr[pixel[5]]] | tab[ptr[pixel[13]]];
                d &= tab[ptr[pixel[7]]] | tab[ptr[pixel[15]]];
    
    #ifndef __ANDROID__
        for (; j < roiw_base; j += step_base, js += step_base3, jd -= step_base3)
        {
            prefetch(src + js);
    }
    
            vst1q_u32(sum + j, vsuml);
        vst1q_u32(sum + j + 4, vsumh);
    
    
    {
    {        for( ; x < cols; x++ )
        {
            if (x == 0) {
                // make border
                if (border == BORDER_MODE_REPLICATE) {
                    pprevx = v0[0] + 2*v1[0] + 2*v2[0] + 2*v3[0] + v4[0];
                    prevx = 2*v0[0] - 4*v2[0] + 2*v4[0];
                } else if (border == BORDER_MODE_REFLECT) {
                    pprevx = v0[1] + 2*v1[1] + 2*v2[1] + 2*v3[1] + v4[1];
                    prevx = 2*v0[0] - 4*v2[0] + 2*v4[0];
                } else if (border == BORDER_MODE_REFLECT101) {
                    pprevx = v0[2] + 2*v1[2] + 2*v2[2] + 2*v3[2] + v4[2];
                    prevx = 2*v0[1] - 4*v2[1] + 2*v4[1];
                } else if (border == BORDER_MODE_CONSTANT) {
                    pprevx = 8 * borderValue;
                    prevx = 0;
                }
            } else if (x == 1) {
                // make border
                if (border == BORDER_MODE_REPLICATE || border == BORDER_MODE_REFLECT) {
                    pprevx = v0[0] + 2*v1[0] + 2*v2[0] + 2*v3[0] + v4[0];
                } else if (border == BORDER_MODE_REFLECT101) {
                    pprevx = v0[1] + 2*v1[1] + 2*v2[1] + 2*v3[1] + v4[1];
                } else if (border == BORDER_MODE_CONSTANT) {
                    pprevx = 8 * borderValue;
                }
                prevx = 2*v0[0] - 4*v2[0] + 2*v4[0];
            } else {
                pprevx = v0[x-2] + 2*v1[x-2] + 2*v2[x-2] + 2*v3[x-2] + v4[x-2];
                prevx = 2*v0[x-1] - 4*v2[x-1] + 2*v4[x-1];
            }
            s16 currx = 2*v0[x] - 4*v1[x] - 12*v2[x] - 4*v3[x] + 2*v4[x];
            if (x == cols-1) {
                // make border
                if (border == BORDER_MODE_REPLICATE) {
                    nextx = 2*v0[x] - 4*v2[x] + 2*v4[x];
                    nnextx = v0[x] + 2*v1[x] + 2*v2[x] + 2*v3[x] + v4[x];
                } else if (border == BORDER_MODE_REFLECT) {
                    nextx = 2*v0[x] - 4*v2[x] + 2*v4[x];
                    nnextx = v0[x-1] + 2*v1[x-1] + 2*v2[x-1] + 2*v3[x-1] + v4[x-1];
                } else if (border == BORDER_MODE_REFLECT101) {
                    nextx = 2*v0[x-1] - 4*v2[x-1] + 2*v4[x-1];
                    nnextx = v0[x-2] + 2*v1[x-2] + 2*v2[x-2] + 2*v3[x-2] + v4[x-2];
                } else if (border == BORDER_MODE_CONSTANT) {
                    nextx = 0;
                    nnextx = 8 * borderValue;
                }
            } else if (x == cols-2) {
                // make border
                if (border == BORDER_MODE_REPLICATE || border == BORDER_MODE_REFLECT) {
                    nnextx = v0[x+1] + 2*v1[x+1] + 2*v2[x+1] + 2*v3[x+1] + v4[x+1];
                } else if (border == BORDER_MODE_REFLECT101) {
                    nnextx = v0[x] + 2*v1[x] + 2*v2[x] + 2*v3[x] + v4[x];
                } else if (border == BORDER_MODE_CONSTANT) {
                    nnextx = 8 * borderValue;
                }
                nextx = 2*v0[x+1] - 4*v2[x+1] + 2*v4[x+1];
            } else {
                nextx = 2*v0[x+1] - 4*v2[x+1] + 2*v4[x+1];
                nnextx = v0[x+2] + 2*v1[x+2] + 2*v2[x+2] + 2*v3[x+2] + v4[x+2];
            }
            s16 res = pprevx + prevx + currx + nextx + nnextx;
            *(drow+x) = 2*res;
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
#endif
}
    
    
    {} // namespace caffe2

    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
        ListNode* head = new ListNode(arr[0]);
    ListNode* curNode = head;
    for(int i = 1 ; i < n ; i ++){
        curNode->next = new ListNode(arr[i]);
        curNode = curNode->next;
    }
    
    
int main() {
    }
    
        vector<int> vec2 = {2};
    Solution().sortColors(vec2);
    printArr(vec2);
    
    
/// Recursive
/// Time Complexity: O(n)
/// Space Complexity: O(n)
    
    private:
    struct Command{
        string s;   // go, print
        TreeNode* node;
        Command(string s, TreeNode* node): s(s), node(node){}
    };
    
            stack<TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode* curNode = stack.top();
            stack.pop();
            res.push_back(curNode->val);
    }
    
            TreeNode* cur = root;
        while(cur != NULL){
            if(cur->left == NULL){
                res.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode* prev = cur->left;
                while(prev->right != NULL && prev->right != cur)
                    prev = prev->right;
    }
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    int main(int, char**)
{
    // Setup Allegro
    al_init();
    al_install_keyboard();
    al_install_mouse();
    al_init_primitives_addon();
    al_set_new_display_flags(ALLEGRO_RESIZABLE);
    ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
    al_set_window_title(display, 'Dear ImGui Allegro 5 example');
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_mouse_event_source());
    }
    
    
    {    stb__running_adler = stb_adler32(stb__running_adler, start, q - start);
    return q - start;
}
    
        // Check for WSI support
    VkBool32 res;
    vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
    if (res != VK_TRUE)
    {
        fprintf(stderr, 'Error no WSI support on physical device 0\n');
        exit(-1);
    }
    
    #include 'imgui.h'
#include 'imgui_impl_opengl2.h'
#if defined(_MSC_VER) && _MSC_VER <= 1500 // MSVC 2008 or earlier
#include <stddef.h>     // intptr_t
#else
#include <stdint.h>     // intptr_t
#endif
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ALLEGRO_BITMAP*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Platform: Clipboard support (from Allegro 5.1.12)
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
// Issues:
//  [ ] Renderer: The renderer is suboptimal as we need to unindex our buffers and convert vertices manually.
//  [ ] Platform: Missing gamepad support.
    
    
    {    auto opndCmds = opndCmd.GetCommands();
    unsigned int opndCmdSize;
    opndCmds->GetSize(&opndCmdSize);
    m_dataWriter->WriteUInt32(opndCmdSize);
    for (unsigned int j = 0; j < opndCmdSize; ++j)
    {
        int eachOpndcmd;
        opndCmds->GetAt(j, &eachOpndcmd);
        m_dataWriter->WriteInt32(eachOpndcmd);
    }
}
    
    #pragma once
    
    #pragma once
    
            Windows::Foundation::Collections::IObservableVector<Platform::Object^>^ CreateUIElementsForCategories(_In_ Windows::Foundation::Collections::IObservableVector<CalculatorApp::Common::NavCategoryGroup^>^ categories);
    
    MemoryItemViewModel^ Memory::GetMemoryItemForCurrentFlyout()
{
    auto listViewItem = m_memoryItemFlyout->Target;
    }
    
    
    {
    {      auto serial = resp.content.find('serial_number');
      if (serial != resp.content.end()) {
        hw_info[serial->second] = resp.content;
      };
    }
  });
    
    namespace osquery {
namespace perf_event_open {
    }
    }
    
      // Author: @guliashvili
  // Creation Time: 4/09/2018
  bool isTotalQueryCounterMonitorEnabled();
    
    
    {
    {struct mei_version {
  uint32_t important_details[7];
  uint16_t major;
  uint16_t minor;
  uint16_t hotfix;
  uint16_t build;
  uint16_t r_major;
  uint16_t r_minor;
  uint16_t r_hotfix;
  uint16_t r_build;
  uint16_t codes[6];
};
}
}

    
    
    {
    {} // namespace events
} // namespace osquery

    
      static const Data& getData6() { return data6_; }
    
      std::chrono::seconds timeout_;
    
    std::pair<std::vector<std::unique_ptr<Command>>,
          std::vector<std::unique_ptr<Command>>>
DHTSetup::setup(DownloadEngine* e, int family)
{
  std::vector<std::unique_ptr<Command>> tempCommands;
  std::vector<std::unique_ptr<Command>> tempRoutineCommands;
  if ((family != AF_INET && family != AF_INET6) ||
      (family == AF_INET && DHTRegistry::isInitialized()) ||
      (family == AF_INET6 && DHTRegistry::isInitialized6())) {
    return {};
  }
  try {
    // load routing table and localnode id here
    std::shared_ptr<DHTNode> localNode;
    }
    }
    
    
    {} // namespace aria2
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    DHTTokenUpdateCommand::~DHTTokenUpdateCommand() = default;
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);