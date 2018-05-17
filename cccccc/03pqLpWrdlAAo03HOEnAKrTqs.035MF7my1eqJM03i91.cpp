
        
        void cvReleaseStereoBMState( CvStereoBMState** state )
{
    if( !state )
        CV_Error( CV_StsNullPtr, '' );
    }
    
            if(quantile_sum - low_sum > out_of_bells_fraction*total_sum)
        {
            if(max_segment_length < x - start_x)
            {
                max_segment_length = x - start_x;
                max_start_x = start_x;
                max_end_x = x;
            }
    }
    
        // Extension: 1.1
    extern void (CODEGEN_FUNCPTR *CullFace)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *FrontFace)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *Hint)(GLenum target, GLenum mode);
    extern void (CODEGEN_FUNCPTR *LineWidth)(GLfloat width);
    extern void (CODEGEN_FUNCPTR *PointSize)(GLfloat size);
    extern void (CODEGEN_FUNCPTR *PolygonMode)(GLenum face, GLenum mode);
    extern void (CODEGEN_FUNCPTR *Scissor)(GLint x, GLint y, GLsizei width, GLsizei height);
    extern void (CODEGEN_FUNCPTR *TexParameterf)(GLenum target, GLenum pname, GLfloat param);
    extern void (CODEGEN_FUNCPTR *TexParameterfv)(GLenum target, GLenum pname, const GLfloat *params);
    extern void (CODEGEN_FUNCPTR *TexParameteri)(GLenum target, GLenum pname, GLint param);
    extern void (CODEGEN_FUNCPTR *TexParameteriv)(GLenum target, GLenum pname, const GLint *params);
    extern void (CODEGEN_FUNCPTR *TexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *TexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *DrawBuffer)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *Clear)(GLbitfield mask);
    extern void (CODEGEN_FUNCPTR *ClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    extern void (CODEGEN_FUNCPTR *ClearStencil)(GLint s);
    extern void (CODEGEN_FUNCPTR *ClearDepth)(GLdouble depth);
    extern void (CODEGEN_FUNCPTR *StencilMask)(GLuint mask);
    extern void (CODEGEN_FUNCPTR *ColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    extern void (CODEGEN_FUNCPTR *DepthMask)(GLboolean flag);
    extern void (CODEGEN_FUNCPTR *Disable)(GLenum cap);
    extern void (CODEGEN_FUNCPTR *Enable)(GLenum cap);
    extern void (CODEGEN_FUNCPTR *Finish)();
    extern void (CODEGEN_FUNCPTR *Flush)();
    extern void (CODEGEN_FUNCPTR *BlendFunc)(GLenum sfactor, GLenum dfactor);
    extern void (CODEGEN_FUNCPTR *LogicOp)(GLenum opcode);
    extern void (CODEGEN_FUNCPTR *StencilFunc)(GLenum func, GLint ref, GLuint mask);
    extern void (CODEGEN_FUNCPTR *StencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
    extern void (CODEGEN_FUNCPTR *DepthFunc)(GLenum func);
    extern void (CODEGEN_FUNCPTR *PixelStoref)(GLenum pname, GLfloat param);
    extern void (CODEGEN_FUNCPTR *PixelStorei)(GLenum pname, GLint param);
    extern void (CODEGEN_FUNCPTR *ReadBuffer)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *ReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *GetBooleanv)(GLenum pname, GLboolean *params);
    extern void (CODEGEN_FUNCPTR *GetDoublev)(GLenum pname, GLdouble *params);
    extern GLenum (CODEGEN_FUNCPTR *GetError)();
    extern void (CODEGEN_FUNCPTR *GetFloatv)(GLenum pname, GLfloat *params);
    extern void (CODEGEN_FUNCPTR *GetIntegerv)(GLenum pname, GLint *params);
    extern const GLubyte * (CODEGEN_FUNCPTR *GetString)(GLenum name);
    extern void (CODEGEN_FUNCPTR *GetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *GetTexParameterfv)(GLenum target, GLenum pname, GLfloat *params);
    extern void (CODEGEN_FUNCPTR *GetTexParameteriv)(GLenum target, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params);
    extern void (CODEGEN_FUNCPTR *GetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint *params);
    extern GLboolean (CODEGEN_FUNCPTR *IsEnabled)(GLenum cap);
    extern void (CODEGEN_FUNCPTR *DepthRange)(GLdouble ren_near, GLdouble ren_far);
    extern void (CODEGEN_FUNCPTR *Viewport)(GLint x, GLint y, GLsizei width, GLsizei height);
    extern void (CODEGEN_FUNCPTR *DrawArrays)(GLenum mode, GLint first, GLsizei count);
    extern void (CODEGEN_FUNCPTR *DrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
    extern void (CODEGEN_FUNCPTR *GetPointerv)(GLenum pname, GLvoid* *params);
    extern void (CODEGEN_FUNCPTR *PolygonOffset)(GLfloat factor, GLfloat units);
    extern void (CODEGEN_FUNCPTR *CopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    extern void (CODEGEN_FUNCPTR *CopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    extern void (CODEGEN_FUNCPTR *CopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    extern void (CODEGEN_FUNCPTR *CopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    extern void (CODEGEN_FUNCPTR *TexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *TexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *BindTexture)(GLenum target, GLuint texture);
    extern void (CODEGEN_FUNCPTR *DeleteTextures)(GLsizei n, const GLuint *textures);
    extern void (CODEGEN_FUNCPTR *GenTextures)(GLsizei n, GLuint *textures);
    extern GLboolean (CODEGEN_FUNCPTR *IsTexture)(GLuint texture);
    extern void (CODEGEN_FUNCPTR *Indexub)(GLubyte c);
    extern void (CODEGEN_FUNCPTR *Indexubv)(const GLubyte *c);
    
      void Preprocess(const cv::Mat& img,
                  std::vector<cv::Mat>* input_channels);
    
    
    {
  shared_ptr<Caffe::RNG> rng_;
  Phase phase_;
  Blob<Dtype> data_mean_;
  vector<Dtype> mean_values_;
};
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
    /**
 * @brief Convolve the input with a bank of learned filters, and (optionally)
 *        add biases, treating filters and convolution parameters in the
 *        opposite sense as ConvolutionLayer.
 *
 *   ConvolutionLayer computes each output value by dotting an input window with
 *   a filter; DeconvolutionLayer multiplies each input value by a filter
 *   elementwise, and sums over the resulting output windows. In other words,
 *   DeconvolutionLayer is ConvolutionLayer with the forward and backward passes
 *   reversed. DeconvolutionLayer reuses ConvolutionParameter for its
 *   parameters, but they take the opposite sense as in ConvolutionLayer (so
 *   padding is removed from the output rather than added to the input, and
 *   stride results in upsampling rather than downsampling).
 */
template <typename Dtype>
class DeconvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  explicit DeconvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    /**
 * @brief Takes two+ Blobs, interprets last Blob as a selector and
 *  filter remaining Blobs accordingly with selector data (0 means that
 * the corresponding item has to be filtered, non-zero means that corresponding
 * item needs to stay).
 */
template <typename Dtype>
class FilterLayer : public Layer<Dtype> {
 public:
  explicit FilterLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
    
    // A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not virtual.
class GTEST_API_ TestPartResult {
 public:
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };
    }
    
    namespace testing {
namespace internal {
    }
    }
    
    // Constructs a failure message for Boolean assertions such as EXPECT_TRUE.
GTEST_API_ std::string GetBoolAssertionFailureMessage(
    const AssertionResult& assertion_result,
    const char* expression_text,
    const char* actual_predicate_value,
    const char* expected_predicate_value);
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
      // Now, we have that n is odd and n >= 3.
    
        totalSize = 1;
    for (std::ptrdiff_t d = self->nDimension - 1; d >= 0; d--) {
      self->size[d] = size[d];
      if (stride && (stride[d] >= 0)) {
        self->stride[d] = stride[d];
      } else {
        if (d == self->nDimension-1)
          self->stride[d] = 1;
        else
          self->stride[d] = self->size[d+1]*self->stride[d+1];
      }
      totalSize += (self->size[d]-1)*self->stride[d];
    }
    
    using namespace std;
using namespace thd;
using namespace thd::rpc;
    
    
    {      bool inserted;
      std::tie(it, inserted) = _algorithms.emplace(
        std::move(key), std::move(algorithm));
      if (!inserted)
          throw std::runtime_error('detected a race when creating Gloo algorithm');
    }
    
    Ref<WebSocketPeer> LWSClient::get_peer(int p_peer_id) const {
    }
    
    	bool initialize();
	bool terminate();
    
      Copyright 2003 by
  Francesco Zappa Nardelli
    
        // Returns the next scan line.
    // For grayscale images, pScan_line will point to a buffer containing 8-bit pixels (get_bytes_per_pixel() will return 1). 
    // Otherwise, it will always point to a buffer containing 32-bit RGBA pixels (A will always be 255, and get_bytes_per_pixel() will return 4).
    // Returns JPGD_SUCCESS if a scan line has been returned.
    // Returns JPGD_DONE if all scan lines have been returned.
    // Returns JPGD_FAILED if an error occurred. Call get_error_code() for a more info.
    int decode(const void** pScan_line, uint* pScan_line_len);
    
    inline jpgd_status get_error_code() const { return m_error_code; }
    
    
    {  &_huff_book_line_512x17_0sub0,
  &_huff_book_line_512x17_1sub0,
  &_huff_book_line_512x17_1sub1,
  &_huff_book_line_512x17_2sub1,
  &_huff_book_line_512x17_2sub2,
  &_huff_book_line_512x17_2sub3,
  &_huff_book_line_512x17_3sub1,
  &_huff_book_line_512x17_3sub2,
  &_huff_book_line_512x17_3sub3,
};
    
    #include 'jsapi.h'
#include 'jsfriendapi.h'
    
    
    
    struct ContactPoint
{
	b2Fixture* fixtureA;
	b2Fixture* fixtureB;
	b2Vec2 normal;
	b2Vec2 position;
	b2PointState state;
	float32 normalImpulse;
	float32 tangentImpulse;
	float32 separation;
};
    
    #endif

    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    
    {    ImGuiMouseCursor imgui_cursor = io.MouseDrawCursor ? ImGuiMouseCursor_None : ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        ::SetCursor(NULL);
    }
    else
    {
        // Hardware cursor type
        LPTSTR win32_cursor = IDC_ARROW;
        switch (imgui_cursor)
        {
        case ImGuiMouseCursor_Arrow:        win32_cursor = IDC_ARROW; break;
        case ImGuiMouseCursor_TextInput:    win32_cursor = IDC_IBEAM; break;
        case ImGuiMouseCursor_ResizeAll:    win32_cursor = IDC_SIZEALL; break;
        case ImGuiMouseCursor_ResizeEW:     win32_cursor = IDC_SIZEWE; break;
        case ImGuiMouseCursor_ResizeNS:     win32_cursor = IDC_SIZENS; break;
        case ImGuiMouseCursor_ResizeNESW:   win32_cursor = IDC_SIZENESW; break;
        case ImGuiMouseCursor_ResizeNWSE:   win32_cursor = IDC_SIZENWSE; break;
        }
        ::SetCursor(::LoadCursor(NULL, win32_cursor));
    }
    return true;
}
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    
    {}
#endif

    
    jvalue JNU_CallMethodByName(JNIEnv* _env, jobject obj, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, jclass clazz, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, const char* _class_name, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByMethodInfo(JNIEnv* _env, JniMethodInfo _method_info, ...);
jvalue JNU_GetStaticField(JNIEnv* _env, jclass clazz, const char* _name, const char* sig);
jvalue JNU_GetField(JNIEnv* _env, jobject obj, const char* _name, const char* sig);