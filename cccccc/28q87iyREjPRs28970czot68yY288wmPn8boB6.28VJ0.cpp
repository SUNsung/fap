
        
        AutofillAgent::~AutofillAgent() = default;
    
    #if defined(OS_WIN)
#include <windows.h>
#endif  // defined(OS_WIN)
    
    
    {        return true;
      }
    
    #include 'base/callback_list.h'
#include 'gin/handle.h'
#include 'net/cookies/canonical_cookie.h'
#include 'shell/browser/api/trackable_object.h'
#include 'shell/browser/net/cookie_details.h'
#include 'shell/common/promise_util.h'
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
    static void FramePresent(ImGui_ImplVulkanH_Window* wd)
{
    VkSemaphore render_complete_semaphore = wd->FrameSemaphores[wd->SemaphoreIndex].RenderCompleteSemaphore;
    VkPresentInfoKHR info = {};
    info.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    info.waitSemaphoreCount = 1;
    info.pWaitSemaphores = &render_complete_semaphore;
    info.swapchainCount = 1;
    info.pSwapchains = &wd->Swapchain;
    info.pImageIndices = &wd->FrameIndex;
    VkResult err = vkQueuePresentKHR(g_Queue, &info);
    check_vk_result(err);
    wd->SemaphoreIndex = (wd->SemaphoreIndex + 1) % wd->ImageCount; // Now we can use the next set of semaphores
}
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
        // Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
    bool err = gl3wInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
    bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
    bool err = gladLoadGL() == 0;
#else
    bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
    if (err)
    {
        fprintf(stderr, 'Failed to initialize OpenGL loader!\n');
        return 1;
    }
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    
    {        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    }
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX12 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    bool ImGui_ImplDX9_Init(IDirect3DDevice9* device)
{
    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendRendererName = 'imgui_impl_dx9';
    io.BackendFlags |= ImGuiBackendFlags_RendererHasVtxOffset;  // We can honor the ImDrawCmd::VtxOffset field, allowing for large meshes.
    }
    
            // ------------------------------ Comparison operators ------------------------------ //
        /**
         * Less comparison operator.
         * @param point Point<T> to be compared.
         * @result Whether the instance satisfies the condition with respect to point.
         */
        inline bool operator<(const Point<T>& point) const
        {
            return area() < point.area();
        }
    
            void generateMesh(const Array<float>& poseKeypoints3D, const Array<float>& faceKeypoints3D,
                          const std::array<Array<float>, 2>& handKeypoints3D,
                          const double* const adamPosePtr,
                          const double* const adamTranslationPtr,
                          const double* const vtVecPtr, const int vtVecRows,
                          const double* const j0VecPtr, const int j0VecRows,
                          const double* const adamFaceCoeffsExpPtr);
    
    
    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{'hand/pose_deploy.prototxt'};
    const std::string HAND_TRAINED_MODEL{'hand/pose_iter_102000.caffemodel'};
    
            Array<long long> extractIdsLockThread(const Array<float>& poseKeypoints, const cv::Mat& cvMatInput,
                                              const unsigned long long imageViewIndex,
                                              const long long frameId);
    
        template<typename T>
    Point<T>& Point<T>::operator+=(const T value)
    {
        try
        {
            x += value;
            y += value;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }
    
        // Static methods
    template<typename T>
    Rectangle<T> recenter(const Rectangle<T>& rectangle, const T newWidth, const T newHeight)
    {
        try
        {
            Rectangle<T> result;
            const auto centerPoint = rectangle.center();
            result.x = centerPoint.x - T(newWidth / 2.f);
            result.y = centerPoint.y - T(newHeight / 2.f);
            result.width = newWidth;
            result.height = newHeight;
            return result;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Rectangle<T>{};
        }
    }