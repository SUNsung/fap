
        
            void absDiff(const Size2D &size,
                 const u16 *src0Base, ptrdiff_t src0Stride,
                 const u16 *src1Base, ptrdiff_t src1Stride,
                 u16 *dstBase, ptrdiff_t dstStride);
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>(src0[0] >= src1[0] ? (s64)src0[0] - src1[0] : (s64)src1[0] - src0[0]);
    }
};
    
    void add(const Size2D &size,
         const s8 * src0Base, ptrdiff_t src0Stride,
         const s8 * src1Base, ptrdiff_t src1Stride,
         s8 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s8, s16>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s8, s16>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8* src = internal::getRowPtr(srcBase, srcStride, i);
        u8* dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
                int32x4_t va = vaddq_s32(lane0a, lane2a);
            int32x4_t vb = vaddq_s32(lane0b, lane2b);
            int32x4_t wa = vaddq_s32(va, lane1a);
            int32x4_t wb = vaddq_s32(vb, lane1b);
    
    bool isLaplacianOpenCVSupported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() &&
        size.width >= 8 && size.height >= 1 &&
        (border == BORDER_MODE_CONSTANT   ||
         border == BORDER_MODE_REFLECT    ||
         border == BORDER_MODE_REFLECT101 ||
         border == BORDER_MODE_REPLICATE);
}
    
    
    {	if (a0 == b0 || a0 == b1 || a1 == b0 || a1 == b1) return false;
	float x1 = a0.x; float y1 = a0.y;
	float x2 = a1.x; float y2 = a1.y;
	float x3 = b0.x; float y3 = b0.y;
	float x4 = b1.x; float y4 = b1.y;
	
	//AABB early exit
	if (b2Max(x1,x2) < b2Min(x3,x4) || b2Max(x3,x4) < b2Min(x1,x2) ) return false;
	if (b2Max(y1,y2) < b2Min(y3,y4) || b2Max(y3,y4) < b2Min(y1,y2) ) return false;
	
	float ua = ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3));
	float ub = ((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3));
	float denom = (y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1);
	if (b2Abs(denom) < CMP_EPSILON) {
		//Lines are too close to parallel to call
		return false;
	}
	ua /= denom;
	ub /= denom;
	
	if ((0 < ua) && (ua < 1) && (0 < ub) && (ub < 1)) {
		//if (intersectionPoint){
			intersectionPoint.x = (x1 + ua * (x2 - x1));
			intersectionPoint.y = (y1 + ua * (y2 - y1));
		//}
		//printf('%f, %f -> %f, %f crosses %f, %f -> %f, %f\n',x1,y1,x2,y2,x3,y3,x4,y4);
		return true;
	}
	
	return false;
}
    
    namespace Etc
{
	class Block4x4;
    }
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
        // Create Logical Device (with 1 queue)
    {
        int device_extension_count = 1;
        const char* device_extensions[] = { 'VK_KHR_swapchain' };
        const float queue_priority[] = { 1.0f };
        VkDeviceQueueCreateInfo queue_info[1] = {};
        queue_info[0].sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
        queue_info[0].queueFamilyIndex = g_QueueFamily;
        queue_info[0].queueCount = 1;
        queue_info[0].pQueuePriorities = queue_priority;
        VkDeviceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
        create_info.queueCreateInfoCount = sizeof(queue_info) / sizeof(queue_info[0]);
        create_info.pQueueCreateInfos = queue_info;
        create_info.enabledExtensionCount = device_extension_count;
        create_info.ppEnabledExtensionNames = device_extensions;
        err = vkCreateDevice(g_PhysicalDevice, &create_info, g_Allocator, &g_Device);
        check_vk_result(err);
        vkGetDeviceQueue(g_Device, g_QueueFamily, 0, &g_Queue);
    }
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
        if      (numlit ==     0)    ;
    else if (numlit <=    32)    stb_out (0x000020 + numlit-1);
    else if (numlit <=  2048)    stb_out2(0x000800 + numlit-1);
    else /*  numlit <= 65536) */ stb_out3(0x070000 + numlit-1);
    
        // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        desc.NumDescriptors = NUM_BACK_BUFFERS;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dRtvDescHeap)) != S_OK)
            return false;
    }
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

    
            if (ImGui::Button('Button'))                                  // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    //----------------------------------------
// OpenGL    GLSL      GLSL
// version   version   string
//----------------------------------------
//  2.0       110       '#version 110'
//  2.1       120       '#version 120'
//  3.0       130       '#version 130'
//  3.1       140       '#version 140'
//  3.2       150       '#version 150'
//  3.3       330       '#version 330 core'
//  4.0       400       '#version 400 core'
//  4.1       410       '#version 410 core'
//  4.2       420       '#version 410 core'
//  4.3       430       '#version 430 core'
//  ES 2.0    100       '#version 100'      = WebGL 1.0
//  ES 3.0    300       '#version 300 es'   = WebGL 2.0
//----------------------------------------
    
    #define SIZE    100
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
        public slots:
        void run();
    
        cache.set('test2', val2);
    ASSERT_EQ(cache.get('test2').get(), val2.get());
    val2.reset();
    ASSERT_EQ(dtor_num, 1);
    ASSERT_EQ(cache.get('test'), nullptr);
    
            auto iter = cache_map.find(key);
        if (iter != cache_map.end())
        {
            iter->second->second.first = expire_time;
            iter->second->second.second = val;
            cache_list.splice(cache_list.begin(), cache_list, iter->second);
            return;
        }
    
    TEST(coroutine_channel, push_timeout)
{
    coro_test([](void *arg)
    {
        Channel chan(1);
        bool ret;
    }
    }
    
        fd1 = socket(AF_UNIX,SOCK_DGRAM,0);
    strncpy(un1.sun_path, sock1_path, sizeof(un1.sun_path) - 1); 
    bind(fd1,(struct sockaddr *)&un1,sizeof(un1));
    
    
    {    ret = swServer_start(&serv);
    if (ret < 0)
    {
        swTrace('start server fail[error=%d].\n', ret);
        exit(0);
    }
    return 0;
}