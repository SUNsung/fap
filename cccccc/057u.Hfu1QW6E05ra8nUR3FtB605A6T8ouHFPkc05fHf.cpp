
        
         private:
  // Resizes forward data to cope with an input image of the given width.
  void ResizeForward(const NetworkIO& input);
    
    
    {  char *p = *pdf_object;
  memcpy(p, b1, b1_len);
  p += b1_len;
  memcpy(p, colorspace, colorspace_len);
  p += colorspace_len;
  memcpy(p, b2, b2_len);
  p += b2_len;
  memcpy(p, cid->datacomp, cid->nbytescomp);
  p += cid->nbytescomp;
  memcpy(p, b3, b3_len);
  l_CIDataDestroy(&cid);
  return true;
}
    
    #include          <stdlib.h>
#ifdef __UNIX__
#include          <assert.h>
#endif
#include          'scanutils.h'
#include          'fileerr.h'
#include          'blread.h'
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    void ROW::recalc_bounding_box() {  //recalculate BB
  WERD *word;                    //current word
  WERD_IT it = &words;           //words of ROW
  int16_t left;                    //of word
  int16_t prev_left;               //old left
    }
    
      // Calculate Histogram on GPU
  OpenclDevice od;
  if (od.selectedDeviceIsOpenCL() && (num_channels == 1 || num_channels == 4) &&
      top == 0 && left == 0) {
    od.HistogramRectOCL((unsigned char*)pixGetData(src_pix), num_channels,
                        pixGetWpl(src_pix) * 4, left, top, width, height,
                        kHistogramSize, histogramAllChannels);
    }
    
    
    {  loop_box = c_outline->bounding_box();
  area = loop_box.height();
  if (!poly_wide_objects_better && loop_box.width() > area)
    area = loop_box.width();
  area *= area;
  edgesteps_to_edgepts(c_outline, edgepts);
  fix2(edgepts, area);
  EDGEPT* edgept = poly2(edgepts, area);  // 2nd approximation.
  EDGEPT* startpt = edgept;
  EDGEPT* result = nullptr;
  EDGEPT* prev_result = nullptr;
  do {
    EDGEPT* new_pt = new EDGEPT;
    new_pt->pos = edgept->pos;
    new_pt->prev = prev_result;
    if (prev_result == nullptr) {
      result = new_pt;
    } else {
      prev_result->next = new_pt;
      new_pt->prev = prev_result;
    }
    if (allow_detailed_fx) {
      new_pt->src_outline = edgept->src_outline;
      new_pt->start_step = edgept->start_step;
      new_pt->step_count = edgept->step_count;
    }
    prev_result = new_pt;
    edgept = edgept->next;
  }
  while (edgept != startpt);
  prev_result->next = result;
  result->prev = prev_result;
  if (edgepts != stack_edgepts)
    delete [] edgepts;
  return TESSLINE::BuildFromOutlineList(result);
}
    
    /**
 * The grapheme clusters within a line of text are laid out logically
 * in this direction, judged when looking at the text line rotated so that
 * its Orientation is 'page up'.
 *
 * For English text, the writing direction is left-to-right.  For the
 * Chinese text in the above example, the writing direction is top-to-bottom.
*/
enum WritingDirection {
  WRITING_DIRECTION_LEFT_TO_RIGHT = 0,
  WRITING_DIRECTION_RIGHT_TO_LEFT = 1,
  WRITING_DIRECTION_TOP_TO_BOTTOM = 2,
};
    
     private:
    
    #ifndef GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
#define GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
    
    #ifndef TEST_QPS_STATS_UTILS_H
#define TEST_QPS_STATS_UTILS_H
    
      // Create a QpsGauge with name 'name'. is_present is set to true if the Gauge
  // is already present in the map.
  // NOTE: CreateQpsGauge can be called anytime (i.e before or after calling
  // StartServer).
  std::shared_ptr<QpsGauge> CreateQpsGauge(const grpc::string& name,
                                           bool* already_present);
    
    
    {
    {                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, colStarts.data(), rowIndices.data(), (void*)nonZeroValues.data(), totalNumNonZeroValues, device, readOnly);
            }
            else
            {
                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, DeviceDescriptor::CPUDevice());
                auto maxSequenceSizeInElements = fullyDefinedSampleShape.TotalSize() * maxSequenceLength;
                switch (dataType)
                {
                case DataType::Float:
                {
                    float* dataBuffer = valueData->WritableDataBuffer<float>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const float* currentSequenceBuffer = sequences[i]->DataBuffer<float>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                case DataType::Double:
                {
                    double* dataBuffer = valueData->WritableDataBuffer<double>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const double* currentSequenceBuffer = sequences[i]->DataBuffer<double>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                default:
                    NOT_IMPLEMENTED;
                }
            }
        }
    
    template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, float>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, double>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, float>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, double>(const ConfigParameters& config);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, float> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, double>(const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);

    
        // these are used in pretty-printing
    TextLocation where() const
    {
        return locations.front();
    }                                        // where the error happened
    virtual const wchar_t* kind() const = 0; // e.g. 'warning' or 'error'
    
            for (size_t paramNumber = params.size(); paramNumber > numFixedParams; paramNumber--)
        {
            // process optional parameter if it exists
            std::string propName, value;
            if (OptionalParameter(params[paramNumber - 1], propName, value))
            {
                if (EqualInsensitive(propName, 'copyFlag', 'copy'))
                {
                    if (EqualInsensitive(value, 'all'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeAll;
                    }
                    else if (EqualInsensitive(value, 'value'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeValue;
                    }
                    else
                    {
                        RuntimeError('Invalid optional parameter value %s in CopyNode(), valid values are copyFlag=(all|value)', value.c_str());
                    }
                }
                else
                {
                    RuntimeError('Invalid optional parameter to Copy, %s\n valid optional parameters: copyFlag=(all|value)', propName.c_str());
                }
            }
        }
    
            // allow to change current directory, for easier debugging
        wstring cdDescriptor = L'currentDirectory=';
        if (_wcsnicmp(cdDescriptor.c_str(), str.c_str(), cdDescriptor.length()) == 0)
        {
            wstring dir = str.substr(cdDescriptor.length());
            if (_wchdir(dir.c_str()) != 0)
                InvalidArgument('Failed to set the current directory to '%ls'', dir.c_str());
            fprintf(stderr, 'Changed current directory to %ls\n', dir.c_str());
        }
    
      /// Perform a blocking wait on the timer.
  /**
   * This function is used to wait for the timer to expire. This function
   * blocks and does not return until the timer has expired.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void wait()
  {
    boost::system::error_code ec;
    this->service.wait(this->implementation, ec);
    boost::asio::detail::throw_error(ec, 'wait');
  }
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      // Is there no unread data in the buffer.
  bool empty() const
  {
    return begin_offset_ == end_offset_;
  }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    #include <boost/asio/detail/push_options.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    // Implemented features:
//  [X] User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    bool    ImGui_Marmalade_Init(bool install_callbacks)
{
    ImGuiIO& io = ImGui::GetIO();
    io.KeyMap[ImGuiKey_Tab] = s3eKeyTab;                     // Keyboard mapping. ImGui will use those indices to peek into the io.KeyDown[] array.
    io.KeyMap[ImGuiKey_LeftArrow] = s3eKeyLeft;
    io.KeyMap[ImGuiKey_RightArrow] = s3eKeyRight;
    io.KeyMap[ImGuiKey_UpArrow] = s3eKeyUp;
    io.KeyMap[ImGuiKey_DownArrow] = s3eKeyDown;
    io.KeyMap[ImGuiKey_PageUp] = s3eKeyPageUp;
    io.KeyMap[ImGuiKey_PageDown] = s3eKeyPageDown;
    io.KeyMap[ImGuiKey_Home] = s3eKeyHome;
    io.KeyMap[ImGuiKey_End] = s3eKeyEnd;
    io.KeyMap[ImGuiKey_Insert] = s3eKeyInsert;
    io.KeyMap[ImGuiKey_Delete] = s3eKeyDelete;
    io.KeyMap[ImGuiKey_Backspace] = s3eKeyBackspace;
    io.KeyMap[ImGuiKey_Space] = s3eKeySpace;
    io.KeyMap[ImGuiKey_Enter] = s3eKeyEnter;
    io.KeyMap[ImGuiKey_Escape] = s3eKeyEsc;
    io.KeyMap[ImGuiKey_A] = s3eKeyA;
    io.KeyMap[ImGuiKey_C] = s3eKeyC;
    io.KeyMap[ImGuiKey_V] = s3eKeyV;
    io.KeyMap[ImGuiKey_X] = s3eKeyX;
    io.KeyMap[ImGuiKey_Y] = s3eKeyY;
    io.KeyMap[ImGuiKey_Z] = s3eKeyZ;
    }
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
        // We don't do the original first pass to determine texture height, but just rough estimate.
    // Looks ugly inaccurate and excessive, but AFAIK with FreeType we actually need to render glyphs to get exact sizes.
    // Alternatively, we could just render all glyphs into a big shadow buffer, get their sizes, do the rectangle packing and just copy back from the 
    // shadow buffer to the texture buffer. Will give us an accurate texture height, but eat a lot of temp memory. Probably no one will notice.)
    const int total_rects = total_glyphs_count + atlas->CustomRects.size();
    float min_rects_per_row = ceilf((atlas->TexWidth / (max_glyph_size.x + 1.0f)));
    float min_rects_per_column = ceilf(total_rects / min_rects_per_row);
    atlas->TexHeight = (int)(min_rects_per_column * (max_glyph_size.y + 1.0f));
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
    
    {        // Rendering
        glViewport(0, 0, (int)ImGui::GetIO().DisplaySize.x, (int)ImGui::GetIO().DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui::Render();
        ImGui_ImplSdlGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    #define LONGTHREADID2INT(a) ((a >> 32)^((a & 0xFFFF)))
DEFINE_FIND_CLASS(KXlog, 'com/tencent/mars/xlog/Xlog')
    
        snprintf(processname, sizeof(processname), '>>> %s <<<', _processname.c_str());
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include <stdint.h>
#include <cstddef>
#include <list>
    
    /*
 * JNI 1.2+ initialization.  (As of 1.6, the pre-1.2 structures are no
 * longer supported.)
 */
typedef struct JavaVMOption {
    const char* optionString;
    void*       extraInfo;
} JavaVMOption;
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    #pragma once
#include <fb/assert.h>
#include <utility>