
        
        
    {
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    #define DEF_FP_LIMITS(Type, PREFIX) \
DEF_COMMON_LIMITS(Type) \
const Type MathLimits<Type>::kPosMin = PREFIX##_MIN; \
const Type MathLimits<Type>::kPosMax = PREFIX##_MAX; \
const Type MathLimits<Type>::kMin = -MathLimits<Type>::kPosMax; \
const Type MathLimits<Type>::kMax = MathLimits<Type>::kPosMax; \
const Type MathLimits<Type>::kNegMin = -MathLimits<Type>::kPosMin; \
const Type MathLimits<Type>::kNegMax = -MathLimits<Type>::kPosMax; \
const Type MathLimits<Type>::kEpsilon = PREFIX##_EPSILON; \
/* 32 is 5 bits of mantissa error; should be adequate for common errors */ \
const Type MathLimits<Type>::kStdError = \
  32 * (DBL_EPSILON * DBL_EPSILON > MathLimits<Type>::kEpsilon \
      ? DBL_EPSILON * DBL_EPSILON : MathLimits<Type>::kEpsilon); \
DEF_PRECISION_LIMITS(Type) \
const Type MathLimits<Type>::kNaN = HUGE_VAL - HUGE_VAL; \
const Type MathLimits<Type>::kPosInf = HUGE_VAL; \
const Type MathLimits<Type>::kNegInf = -HUGE_VAL;
    
    TEST(TemplateUtilTest, TestIdentity) {
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<int>::type, int>::value));
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<void>::type, void>::value));
}
    
    TEST(TimeUtilTest, TimestampStringFormat) {
  Timestamp begin, end;
  EXPECT_TRUE(TimeUtil::FromString('0001-01-01T00:00:00Z', &begin));
  EXPECT_EQ(TimeUtil::kTimestampMinSeconds, begin.seconds());
  EXPECT_EQ(0, begin.nanos());
  EXPECT_TRUE(TimeUtil::FromString('9999-12-31T23:59:59.999999999Z', &end));
  EXPECT_EQ(TimeUtil::kTimestampMaxSeconds, end.seconds());
  EXPECT_EQ(999999999, end.nanos());
  EXPECT_EQ('0001-01-01T00:00:00Z', TimeUtil::ToString(begin));
  EXPECT_EQ('9999-12-31T23:59:59.999999999Z', TimeUtil::ToString(end));
    }
    
    struct ImDrawChannel;               // Temporary storage for ImDrawList ot output draw commands out of order, used by ImDrawList::ChannelsSplit()
struct ImDrawCmd;                   // A single draw command within a parent ImDrawList (generally maps to 1 GPU draw call, unless it is a callback)
struct ImDrawData;                  // All draw command lists required to render the frame + pos/size coordinates to use for the projection matrix.
struct ImDrawList;                  // A single draw command list (generally one per window, conceptually you may see this as a dynamic 'mesh' builder)
struct ImDrawListSharedData;        // Data shared among multiple draw lists (typically owned by parent ImGui context, but you may create one yourself)
struct ImDrawVert;                  // A single vertex (pos + uv + col = 20 bytes by default. Override layout with IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT)
struct ImFont;                      // Runtime data for a single font within a parent ImFontAtlas
struct ImFontAtlas;                 // Runtime data for multiple fonts, bake multiple fonts into a single texture, TTF/OTF font loader
struct ImFontConfig;                // Configuration data when adding a font or merging fonts
struct ImFontGlyph;                 // A single font glyph (code point + coordinates within in ImFontAtlas + offset)
struct ImFontGlyphRangesBuilder;    // Helper to build glyph ranges from text/string data
struct ImColor;                     // Helper functions to create a color that can be converted to either u32 or float4 (*OBSOLETE* please avoid using)
struct ImGuiContext;                // Dear ImGui context (opaque structure, unless including imgui_internal.h)
struct ImGuiIO;                     // Main configuration and I/O between your application and ImGui
struct ImGuiInputTextCallbackData;  // Shared state of InputText() when using custom ImGuiInputTextCallback (rare/advanced use)
struct ImGuiListClipper;            // Helper to manually clip large list of items
struct ImGuiOnceUponAFrame;         // Helper for running a block of code not more than once a frame, used by IMGUI_ONCE_UPON_A_FRAME macro
struct ImGuiPayload;                // User data payload for drag and drop operations
struct ImGuiSizeCallbackData;       // Callback data when using SetNextWindowSizeConstraints() (rare/advanced use)
struct ImGuiStorage;                // Helper for key->value storage
struct ImGuiStyle;                  // Runtime data for styling/colors
struct ImGuiTextBuffer;             // Helper to hold and append into a text buffer (~string builder)
struct ImGuiTextFilter;             // Helper to parse and apply text filters (e.g. 'aaaaa[,bbbb][,ccccc]')
    
        // Fast-forward to first visible line
    const char* s = text_begin;
    if (y + line_height < clip_rect.y && !word_wrap_enabled)
        while (y + line_height < clip_rect.y && s < text_end)
        {
            s = (const char*)memchr(s, '\n', text_end - s);
            s = s ? s + 1 : text_end;
            y += line_height;
        }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX10_CreateDeviceObjects();

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    
    {        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();
    }
    
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
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
        // Upload texture to graphics system
    {
        D3D10_TEXTURE2D_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Width = width;
        desc.Height = height;
        desc.MipLevels = 1;
        desc.ArraySize = 1;
        desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        desc.SampleDesc.Count = 1;
        desc.Usage = D3D10_USAGE_DEFAULT;
        desc.BindFlags = D3D10_BIND_SHADER_RESOURCE;
        desc.CPUAccessFlags = 0;
    }
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const std::shared_ptr<DHTNode>& node) const
{
  return getBucketFor(node->getID());
}
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    void DHTTaskFactoryImpl::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    #include 'DHTMessage.h'
    
    bool DNSCache::CacheEntry::contains(const std::string& addr) const
{
  return find(addr) != addrEntries_.end();
}