
        
        REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensors,
    MergeSingleScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with scalar features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 2 && n % 2 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1', '')
    .Input(1, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values')
    .Arg('feature_ids', 'feature ids');
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
              const int dkernel_h = dilation_h * (kernel_h - 1) + 1;
          const int dkernel_w = dilation_w * (kernel_w - 1) + 1;
          CAFFE_ENFORCE(H >= dkernel_h);
          CAFFE_ENFORCE(W >= dkernel_w);
          const int out_h = (H + 2 * pad - dkernel_h) / stride_h + 1;
          const int out_w = (W + 2 * pad - dkernel_w) / stride_w + 1;
    
    namespace grpc {
    }
    
    
    {}  // namespace grpc
    
    
    {}  // namespace grpc

    
    #include 'src/cpp/server/dynamic_thread_pool.h'
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    #endif  // GPR_WINDOWS

    
    namespace grpc {
    }
    
    #include <stddef.h>
#include <limits.h>
#include 'GlobalParams.h'
#include 'Object.h'
#include 'Array.h'
#include 'Dict.h'
#include 'XRef.h'
#include 'Link.h'
#include 'OutputDev.h'
#ifndef PDF_PARSER_ONLY
#include 'Gfx.h'
#include 'GfxState.h'
#include 'Annot.h'
#include 'TextOutputDev.h'
#include 'Form.h'
#endif
#include 'Error.h'
#include 'Page.h'
#include 'Catalog.h'
#include 'Form.h'
    
    //------------------------------------------------------------------------
// Parser
//------------------------------------------------------------------------
    
      //----- get info about output device
    
      if (obj->dictLookup('D', &tmp)->isArray()) {
    Array * dim = tmp.getArray();
    
    if (dim->getLength() >= 2) {
      Object dd;
      if (dim->get(0, &dd)->isInt()) {
	width = dd.getInt();
      }
      dd.free();
      if (dim->get(1, &dd)->isInt()) {
	height = dd.getInt();
      }
      dd.free();
    }
  }
  tmp.free();
    
      GooString* getContentType() { return contentType; }
  GooString* getFileName() { return fileName; }
    
      // Create authorization data for the specified owner and user
  // passwords.  If the security handler doesn't support 'batch' mode,
  // this function should return NULL.
  virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword) = 0;
    
    Stream *Sound::getStream()
{
  return streamObj->getStream();
}
    
    void SplashOutputDev::drawType3Glyph(T3FontCache *t3Font,
				     T3FontCacheTag * /*tag*/, Guchar *data) {
  SplashGlyphBitmap glyph;
    }
    
    #include 'StdinCachedFile.h'
    
    class StdinCacheLoader : public CachedFileLoader {
    }
    
    
    {  obj.initNull();
  CachedFile *cachedFile = new CachedFile(new StdinCacheLoader(), NULL);
  return new PDFDoc(new CachedFileStream(cachedFile, 0, gFalse,
                                         cachedFile->getLength(), &obj),
                    ownerPassword, userPassword);
}
    
        // Render command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
    }
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
        ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    // All the ImGui_ImplVulkanH_XXX structures/functions are optional helpers used by the demo. 
// Your real engine/app may not use them.
static void SetupVulkanWindow(ImGui_ImplVulkanH_Window* wd, VkSurfaceKHR surface, int width, int height)
{
    wd->Surface = surface;
    }
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    
    {        // see if our best match qualifies
        if (best < 3) { // fast path literals
            ++q;
        } else if (best > 2  &&  best <= 0x80    &&  dist <= 0x100) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out(0x80 + best-1);
            stb_out(dist-1);
        } else if (best > 5  &&  best <= 0x100   &&  dist <= 0x4000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out2(0x4000 + dist-1);
            stb_out(best-1);
        } else if (best > 7  &&  best <= 0x100   &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x180000 + dist-1);
            stb_out(best-1);
        } else if (best > 8  &&  best <= 0x10000 &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x100000 + dist-1);
            stb_out2(best-1);
        } else if (best > 9                      &&  dist <= 0x1000000) {
            if (best > 65536) best = 65536;
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            if (best <= 0x100) {
                stb_out(0x06);
                stb_out3(dist-1);
                stb_out(best-1);
            } else {
                stb_out(0x04);
                stb_out3(dist-1);
                stb_out2(best-1);
            }
        } else {  // fallback literals if no match was a balanced tradeoff
            ++q;
        }
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [x] Renderer: Desktop GL only: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    
    {    CreateRenderTarget();
    return true;
}
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    #endif // D_DHT_RESPONSE_MESSAGE_H

    
      void moveBucketHead(const std::shared_ptr<DHTNode>& node);
    
      std::shared_ptr<DHTNode> localNode_;
    
    namespace aria2 {
    }
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    
    {  void setTimeout(std::chrono::seconds timeout)
  {
    timeout_ = std::move(timeout);
  }
};
    
    void DHTTaskQueueImpl::addPeriodicTask1(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue1_.addTask(task);
}
    
    public:
  DHTTokenTracker();
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    bool DHTUnknownMessage::isReply() const { return false; }
    
    bool DNSCache::CacheEntry::operator==(const CacheEntry& e) const
{
  return hostname_ == e.hostname_ && port_ == e.port_;
}
    
      struct CacheEntry {
    std::string hostname_;
    uint16_t port_;
    std::vector<AddrEntry> addrEntries_;
    }