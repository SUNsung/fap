
        
        class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
     protected:
  explicit Event(v8::Isolate* isolate);
  ~Event() override;
    
    void PreventDefault(mate::Arguments* args) {
  mate::Dictionary self(args->isolate(), args->GetThis());
  self.Set('defaultPrevented', true);
}
    
    namespace atom {
    }
    
    #include 'content/public/browser/quota_permission_context.h'
    
    #include 'net/url_request/url_request_job_factory.h'
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
        base::win::ShortcutProperties props;
    base::string16 appID;
    if (content::Shell::GetPackage()->root()->GetString('app-id', &appID) == false)
      content::Shell::GetPackage()->root()->GetString(switches::kmName, &appID);
    const std::wstring appName = base::UTF8ToWide(content::Shell::GetPackage()->GetName());
    props.set_app_id(appID);
    
      // Try to close all windows (then will cause whole app to quit).
  static void CloseAllWindows(bool force = false, bool quit = false);
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
      static v8::Handle<v8::Object> GetObjectRegistry();
  static v8::Handle<v8::Value> GetWindowId(blink::WebFrame* frame);
  static void ZoomLevelChanged(blink::WebView* web_view);
  static void willHandleNavigationPolicy(
    content::RenderView* rv,
    blink::WebFrame* frame,
    const blink::WebURLRequest& request,
    blink::WebNavigationPolicy* policy,
    blink::WebString* manifest);
    
       bool HasIcon(int command_id) override;
    
    #include <vector>
    
            // now we have the original names from the input symbol, generate the output names
        for (int i = 0; i < fromNodes.size(); i++)
        {
            ComputationNodeBasePtr fromNode = fromNodes[i];
            std::wstring fromNodeName = fromNode->NodeName();
    }
    
    // Same as 'ReadConfigFiles' function below, but takes as input string instead of wstring
std::string ConfigParser::ReadConfigFiles(const std::string& filePaths)
{
    return ReadConfigFiles(msra::strfun::utf16(filePaths));
}
    
        void getlattices(const std::wstring& key, std::shared_ptr<const latticepair>& L, size_t expectedframes) const
    {
        std::shared_ptr<latticepair> LP(new latticepair);
        denlattices.getlattice(key, LP->second, expectedframes); // this loads the lattice from disk, using the existing L.second object
        L = LP;
    }
    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
    class float4
{
    __m128 v; // value
private:
    // return the low 'float'
    float f0() const
    {
        float f;
        _mm_store_ss(&f, v);
        return f;
    }
    // construct from a __m128, assuming it is a f32 vector (needed for directly returning __m128 below)
    float4(const __m128& v)
        : v(v)
    {
    }
    // return as a __m128 --should this be a reference?
    operator __m128() const
    {
        return v;
    }
    // assign a __m128 (needed for using nested float4 objects inside this class, e.g. sum())
    float4& operator=(const __m128& other)
    {
        v = other;
        return *this;
    }
    }
    
      // Success/failure error codes.
  enum jpgd_status
  {
    JPGD_SUCCESS = 0, JPGD_FAILED = -1, JPGD_DONE = 1,
    JPGD_BAD_DHT_COUNTS = -256, JPGD_BAD_DHT_INDEX, JPGD_BAD_DHT_MARKER, JPGD_BAD_DQT_MARKER, JPGD_BAD_DQT_TABLE, 
    JPGD_BAD_PRECISION, JPGD_BAD_HEIGHT, JPGD_BAD_WIDTH, JPGD_TOO_MANY_COMPONENTS, 
    JPGD_BAD_SOF_LENGTH, JPGD_BAD_VARIABLE_MARKER, JPGD_BAD_DRI_LENGTH, JPGD_BAD_SOS_LENGTH,
    JPGD_BAD_SOS_COMP_ID, JPGD_W_EXTRA_BYTES_BEFORE_MARKER, JPGD_NO_ARITHMITIC_SUPPORT, JPGD_UNEXPECTED_MARKER,
    JPGD_NOT_JPEG, JPGD_UNSUPPORTED_MARKER, JPGD_BAD_DQT_LENGTH, JPGD_TOO_MANY_BLOCKS,
    JPGD_UNDEFINED_QUANT_TABLE, JPGD_UNDEFINED_HUFF_TABLE, JPGD_NOT_SINGLE_SCAN, JPGD_UNSUPPORTED_COLORSPACE,
    JPGD_UNSUPPORTED_SAMP_FACTORS, JPGD_DECODE_ERROR, JPGD_BAD_RESTART_MARKER, JPGD_ASSERTION_ERROR,
    JPGD_BAD_SOS_SPECTRAL, JPGD_BAD_SOS_SUCCESSIVE, JPGD_STREAM_READ, JPGD_NOTENOUGHMEM
  };
    
  // Input stream interface.
  // Derive from this class to read input data from sources other than files or memory. Set m_eof_flag to true when no more data is available.
  // The decoder is rather greedy: it will keep on calling this method until its internal input buffer is full, or until the EOF flag is set.
  // It the input stream contains data after the JPEG stream's EOI (end of image) marker it will probably be pulled into the internal buffer.
  // Call the get_total_bytes_read() method to determine the actual size of the JPEG stream after successful decoding.
  class jpeg_decoder_stream
  {
  public:
    jpeg_decoder_stream() { }
    virtual ~jpeg_decoder_stream() { }
    }
    
     ********************************************************************/
    
    #endif

    
    /* NOTE - c is not incremented as per l2c */
# undef l2cn
# define l2cn(l1,l2,c,n) { \
                        c+=n; \
                        switch (n) { \
                        case 8: *(--(c))=(unsigned char)(((l2)>>24L)&0xff); \
                        case 7: *(--(c))=(unsigned char)(((l2)>>16L)&0xff); \
                        case 6: *(--(c))=(unsigned char)(((l2)>> 8L)&0xff); \
                        case 5: *(--(c))=(unsigned char)(((l2)     )&0xff); \
                        case 4: *(--(c))=(unsigned char)(((l1)>>24L)&0xff); \
                        case 3: *(--(c))=(unsigned char)(((l1)>>16L)&0xff); \
                        case 2: *(--(c))=(unsigned char)(((l1)>> 8L)&0xff); \
                        case 1: *(--(c))=(unsigned char)(((l1)     )&0xff); \
                                } \
                        }
    
    	CAST_set_key(&key, 16,d);
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    bool js_cocos2dx_studio_BlendFuncFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BlendFuncFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BlendFuncFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BlendFuncFrame_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_BlendFuncFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }
    
    
    {	b2Body* m_body;
	b2Body* m_bullet;
	float32 m_x;
};
    
    		case 'q':
			m_hz = b2Max(0.0f, m_hz - 1.0f);
			m_spring1->SetSpringFrequencyHz(m_hz);
			m_spring2->SetSpringFrequencyHz(m_hz);
			break;
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, LoadCursor(NULL, IDC_ARROW), NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            ImGui::Text('Hello, world!');                           // Some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float as a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats as a color
            if (ImGui::Button('Demo Window'))                       // Use buttons to toggle our bools. We could use Checkbox() as well.
                show_demo_window ^= 1;
            if (ImGui::Button('Another Window'))
                show_another_window ^= 1;
            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
    
    {    return 0;
}
    
    
    {        ImGui::Render();
    }
    
    int Node::getAlignSelf(void) const
{
    return YGNodeStyleGetAlignSelf(m_node);
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
    #include <yoga/Yoga.h>
    
    TEST(YogaTest, computed_layout_padding) {
  const YGNodeRef root = YGNodeNew();
  YGNodeStyleSetWidth(root, 100);
  YGNodeStyleSetHeight(root, 100);
  YGNodeStyleSetPaddingPercent(root, YGEdgeStart, 10);
    }
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      const YGNodeRef root_child3 = YGNodeNewWithConfig(config);
  YGNodeStyleSetFlexGrow(root_child3, 1);
  YGNodeStyleSetFlexShrink(root_child3, 1);
  YGNodeStyleSetFlexBasisPercent(root_child3, 0);
  YGNodeStyleSetWidth(root_child3, 50);
  YGNodeInsertChild(root, root_child3, 3);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));
    
      YGNodeCalculateLayout(root, 100, YGUndefined, YGDirectionLTR);
  YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
    
    {} // namespace facebook

    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
      RefPtr<T>& operator=(const RefPtr<T>& ref) {
    if (m_ptr != ref.m_ptr) {
      unrefIfNecessary(m_ptr);
      m_ptr = ref.m_ptr;
      refIfNecessary(m_ptr);
    }
    return *this;
  }
    
    
    {}

    
    namespace nlohmann
{
template<typename, typename>
struct adl_serializer
{
    /*!
    @brief convert a JSON value to any value type
    }
    }
    
        /*!
    @brief  add to iterator
    @pre The iterator is initialized; i.e. `m_object != nullptr`.
    */
    iter_impl operator+(difference_type i) const
    {
        auto result = *this;
        result += i;
        return result;
    }
    
        /// post-decrement (it--)
    json_reverse_iterator const operator--(int)
    {
        return static_cast<json_reverse_iterator>(base_iterator::operator--(1));
    }
    
    
    {  std::string OutputCorpus;
};
    
    
    {  DIR *D = opendir(Dir.c_str());
  if (!D) {
    Printf('No such directory: %s; exiting\n', Dir.c_str());
    exit(1);
  }
  while (auto E = readdir(D)) {
    std::string Path = DirPlusFile(Dir, E->d_name);
    if (E->d_type == DT_REG || E->d_type == DT_LNK)
      V->push_back(Path);
    else if (E->d_type == DT_DIR && *E->d_name != '.')
      ListFilesInDirRecursive(Path, Epoch, V, false);
  }
  closedir(D);
  if (Epoch && TopDir)
    *Epoch = E;
}
    
    
    {}  // namespace fuzzer
    
    
    {}  // namespace fuzzer