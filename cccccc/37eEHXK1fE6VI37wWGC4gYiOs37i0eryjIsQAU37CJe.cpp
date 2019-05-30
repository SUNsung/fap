
        
        	//Compute normals
	b2Vec2* normals = new b2Vec2[nVertices];
	b2Vec2* vertices = new b2Vec2[nVertices];
	for (int32 i = 0; i < nVertices; ++i){
		vertices[i].Set(x[i],y[i]);
		int32 i1 = i;
		int32 i2 = i + 1 < nVertices ? i + 1 : 0;
		b2Vec2 edge(x[i2]-x[i1],y[i2]-y[i1]);
		normals[i] = b2Cross(edge, 1.0f);
		normals[i].Normalize();
	}
    
    //Constructor automatically fixes orientation to ccw
b2Triangle::b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3){
	x = new float32[3];
	y = new float32[3];
	float32 dx1 = x2-x1;
	float32 dx2 = x3-x1;
	float32 dy1 = y2-y1;
	float32 dy2 = y3-y1;
	float32 cross = dx1*dy2-dx2*dy1;
	bool ccw = (cross>0);
	if (ccw){
		x[0] = x1; x[1] = x2; x[2] = x3;
		y[0] = y1; y[1] = y2; y[2] = y3;
	} else{
		x[0] = x1; x[1] = x3; x[2] = x2;
		y[0] = y1; y[1] = y3; y[2] = y2;
	}
}
    
b2Triangle::b2Triangle(){
	x = new float32[3];
	y = new float32[3];
}
    
    #ifndef C_ADD
#define  C_ADD( res, a,b)\
    do { \
            CHECK_OVERFLOW_OP((a).r,+,(b).r)\
            CHECK_OVERFLOW_OP((a).i,+,(b).i)\
            (res).r=(a).r+(b).r;  (res).i=(a).i+(b).i; \
    }while(0)
#define  C_SUB( res, a,b)\
    do { \
            CHECK_OVERFLOW_OP((a).r,-,(b).r)\
            CHECK_OVERFLOW_OP((a).i,-,(b).i)\
            (res).r=(a).r-(b).r;  (res).i=(a).i-(b).i; \
    }while(0)
#define C_ADDTO( res , a)\
    do { \
            CHECK_OVERFLOW_OP((res).r,+,(a).r)\
            CHECK_OVERFLOW_OP((res).i,+,(a).i)\
            (res).r += (a).r;  (res).i += (a).i;\
    }while(0)
    
    typedef opus_int16 opus_val16;
typedef opus_int32 opus_val32;
    
    #ifndef FIXED_ARMv4_H
#define FIXED_ARMv4_H
    
    /*Constants used by the entropy encoder/decoder.*/
    
    /* (a32 * b32) >> 16 */
#undef silk_SMULWW
static OPUS_INLINE opus_int32 silk_SMULWW_armv4(opus_int32 a, opus_int32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMULWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(a), 'r'(b)
  );
  return (rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMULWW(a, b) (silk_SMULWW_armv4(a, b))
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
internal::ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8) {
  return internal::ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8>(v1, v2, v3, v4,
      v5, v6, v7, v8);
}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46>
class ValueArray46 {
 public:
  ValueArray46(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
      T42 v42, T43 v43, T44 v44, T45 v45, T46 v46) : v1_(v1), v2_(v2), v3_(v3),
      v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
      v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
      v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
      v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
      v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
      v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40),
      v41_(v41), v42_(v42), v43_(v43), v44_(v44), v45_(v45), v46_(v46) {}
    }
    
    
    {  // Returns the smallest prime number greater than p; or returns -1
  // if the next prime is beyond the capacity of the table.
  virtual int GetNextPrime(int p) const = 0;
};
    
      // Now, we have that n is odd and n >= 3.
    
    #ifndef GTEST_SAMPLES_SAMPLE2_H_
#define GTEST_SAMPLES_SAMPLE2_H_
    
            case URX_CTR_LOOP_NG:
            {
                // Non-greedy {min, max} loops
                U_ASSERT(opValue>0 && opValue < fp->fPatIdx-2);
                int32_t initOp = (int32_t)pat[opValue];
                U_ASSERT(URX_TYPE(initOp) == URX_CTR_INIT_NG);
                int64_t *pCounter = &fp->fExtra[URX_VAL(initOp)];
                int32_t minCount  = (int32_t)pat[opValue+2];
                int32_t maxCount  = (int32_t)pat[opValue+3];
    }
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_NAMESPACE_BEGIN
    
    /**
 * Sets the daylight savings starting rule. For example, in the U.S., Daylight Savings
 * Time starts at the first Sunday in April, at 2 AM in standard time.
 * Therefore, you can set the start rule by calling:
 * setStartRule(TimeFields.APRIL, 1, TimeFields.SUNDAY, 2*60*60*1000);
 * The dayOfWeekInMonth and dayOfWeek parameters together specify how to calculate
 * the exact starting date.  Their exact meaning depend on their respective signs,
 * allowing various types of rules to be constructed, as follows:<ul>
 *   <li>If both dayOfWeekInMonth and dayOfWeek are positive, they specify the
 *       day of week in the month (e.g., (2, WEDNESDAY) is the second Wednesday
 *       of the month).
 *   <li>If dayOfWeek is positive and dayOfWeekInMonth is negative, they specify
 *       the day of week in the month counting backward from the end of the month.
 *       (e.g., (-1, MONDAY) is the last Monday in the month)
 *   <li>If dayOfWeek is zero and dayOfWeekInMonth is positive, dayOfWeekInMonth
 *       specifies the day of the month, regardless of what day of the week it is.
 *       (e.g., (10, 0) is the tenth day of the month)
 *   <li>If dayOfWeek is zero and dayOfWeekInMonth is negative, dayOfWeekInMonth
 *       specifies the day of the month counting backward from the end of the
 *       month, regardless of what day of the week it is (e.g., (-2, 0) is the
 *       next-to-last day of the month).
 *   <li>If dayOfWeek is negative and dayOfWeekInMonth is positive, they specify the
 *       first specified day of the week on or after the specfied day of the month.
 *       (e.g., (15, -SUNDAY) is the first Sunday after the 15th of the month
 *       [or the 15th itself if the 15th is a Sunday].)
 *   <li>If dayOfWeek and DayOfWeekInMonth are both negative, they specify the
 *       last specified day of the week on or before the specified day of the month.
 *       (e.g., (-20, -TUESDAY) is the last Tuesday before the 20th of the month
 *       [or the 20th itself if the 20th is a Tuesday].)</ul>
 * @param month the daylight savings starting month. Month is 0-based.
 * eg, 0 for January.
 * @param dayOfWeekInMonth the daylight savings starting
 * day-of-week-in-month. Please see the member description for an example.
 * @param dayOfWeek the daylight savings starting day-of-week. Please see
 * the member description for an example.
 * @param time the daylight savings starting time. Please see the member
 * description for an example.
 */
 
void
SimpleTimeZone::setStartRule(int32_t month, int32_t dayOfWeekInMonth, int32_t dayOfWeek,
                             int32_t time, TimeMode mode, UErrorCode& status)
{
    startMonth     = (int8_t)month;
    startDay       = (int8_t)dayOfWeekInMonth;
    startDayOfWeek = (int8_t)dayOfWeek;
    startTime      = time;
    startTimeMode  = mode;
    decodeStartRule(status);
    transitionRulesInitialized = FALSE;
}
    
    
    
    /**
 * UnicodeReplacer API
 */
int32_t StringReplacer::replace(Replaceable& text,
                                int32_t start,
                                int32_t limit,
                                int32_t& cursor) {
    int32_t outLen;
    int32_t newStart = 0;
    }
    
    
    {    // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    {
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        ALLEGRO_TRANSFORM transform;
        al_identity_transform(&transform);
        al_use_transform(&transform);
        al_orthographic_transform(&transform, L, T, 1.0f, R, B, -1.0f);
        al_use_projection_transform(&transform);
    }
}
    
    #include 'imgui.h'      // IMGUI_API, ImFontAtlas
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    static int stb__window = 0x40000; // 256K
    
    // Data
static ID3D10Device*            g_pd3dDevice = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D10RenderTargetView*  g_mainRenderTargetView = NULL;
    
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
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // Start the Dear ImGui frame
        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
    
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