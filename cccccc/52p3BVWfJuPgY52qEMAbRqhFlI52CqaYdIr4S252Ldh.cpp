
        
        #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    // Reads all boxes from the string. Otherwise, as ReadAllBoxes.
// continue_on_failure allows reading to continue even if an invalid box is
// encountered and will return true if it succeeds in reading some boxes.
// It otherwise gives up and returns false on encountering an invalid box.
bool ReadMemBoxes(int target_page, bool skip_blanks, const char* box_data,
                  bool continue_on_failure,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
        REJ & operator= (            //assign REJ
    const REJ & source) {        //from this
      flags1 = source.flags1;
      flags2 = source.flags2;
      return *this;
    }
    
      // The pointed-to Pair has changed its key value, so the location of pair
  // is reshuffled to maintain the heap invariant.
  // Must be a valid pointer to an element of the heap_!
  // Caution! Since GenericHeap is based on GenericVector, reallocs may occur
  // whenever the vector is extended and elements may get shuffled by any
  // Push or Pop operation. Therefore use this function only if Data in Pair is
  // of type DoublePtr, derived (first) from DoublePtr, or has a DoublePtr as
  // its first element. Reshuffles the heap to maintain the invariant.
  // Time = O(log n).
  void Reshuffle(Pair* pair) {
    int index = pair - &heap_[0];
    Pair hole_pair = heap_[index];
    index = SiftDown(index, hole_pair);
    index = SiftUp(index, hole_pair);
    heap_[index] = hole_pair;
  }
    
      // Return the id associated with the given unichar representation,
  // this representation MUST exist within the UNICHARMAP. The first
  // length characters (maximum) from unichar_repr are used. The length
  // MUST be non-zero.
  UNICHAR_ID unichar_to_id(const char* const unichar_repr, int length) const;
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
        const GLchar* fragment_shader_with_version[2] = { g_GlslVersionString, fragment_shader };
    g_FragHandle = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(g_FragHandle, 2, fragment_shader_with_version, NULL);
    glCompileShader(g_FragHandle);
    CheckShader(g_FragHandle, 'fragment shader');
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // Helper functions
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            continue;
        }
    }
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_5_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        psoDesc.PS = { g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize() };
    }