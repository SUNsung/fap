
        
        namespace atom {
    }
    
    // Platform-neutral implementation of a class that keeps track of observers and
// monitors keystrokes. It relays messages to the appropriate observer when a
// global shortcut has been struck by the user.
class GlobalShortcutListener {
 public:
  class Observer {
   public:
    // Called when your global shortcut (|accelerator|) is struck.
    virtual void OnKeyPressed(const ui::Accelerator& accelerator) = 0;
  };
    }
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    // HACK: Allow support for many newer emoji by overriding behavior of ZWJ and
// emoji modifiers. This does not make the breaks correct for any version of
// Unicode, but shifts the ways in which it is incorrect to be less harmful.
//
// TODO: Remove this hack and reevaluate whether we should have any static
// notion of what a grapheme is.
//
// Returns true if lhs and rhs shouldn't be considered as having a grapheme
// break between them. That is, whether we're overriding the behavior of the
// hard coded Unicode 8 rules surrounding ZWJ and emoji modifiers.
static inline bool graphemeBreakOverride(llvm::UTF32 lhs, llvm::UTF32 rhs) {
  return lhs == 0x200D || (rhs >= 0x1F3FB && rhs <= 0x1F3FF);
}
    
    namespace swift {
namespace syntax {
    }
    }
    
    #endif

    
    
    
    // Makes a failed assertion result.
GTEST_API_ AssertionResult AssertionFailure();
    
      // Join an existing circle.
  void join(linked_ptr_internal const* ptr)
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    $for k [[
$range m 0..k-1
$range m2 k..n-1
#define GTEST_$(k)_TUPLE_(T) tuple<$for m, [[T##$m]]$for m2 [[, void]]>
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
      THDGroup newGroup(const std::vector<rank_type>& ranks) override;
  void clearGroupCache(THDGroup group_id = THDGroupWORLD) override;
    
    #define THDPDoubleStorage_CData(obj)  (obj)->cdata
#define THDPFloatStorage_CData(obj)   (obj)->cdata
#define THDPLongStorage_CData(obj)    (obj)->cdata
#define THDPIntStorage_CData(obj)     (obj)->cdata
#define THDPShortStorage_CData(obj)   (obj)->cdata
#define THDPCharStorage_CData(obj)    (obj)->cdata
#define THDPByteStorage_CData(obj)    (obj)->cdata
    
    #define THPStorage TH_CONCAT_3(THP,Real,Storage)
#define THPStorageStr TH_CONCAT_STRING_3(torch.,Real,Storage)
#define THPStorageClass TH_CONCAT_3(THP,Real,StorageClass)
#define THPStorage_(NAME) TH_CONCAT_4(THP,Real,Storage_,NAME)
    
      struct addrinfo *next_addr = addresses.get();
  int socket;
  // we'll loop over the addresses only if at least of them gave us ECONNREFUSED.
  // Maybe the host was up, but the server wasn't running.
  bool any_refused = false;
  while (true) {
    try {
      SYSCHECK(socket = ::socket(next_addr->ai_family, next_addr->ai_socktype, next_addr->ai_protocol))
      ResourceGuard socket_guard([socket]() { ::close(socket); });
    }
    }
    
    template<> inline
dnnError_t dnnGroupsConvolutionCreateBackwardData<double>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t groups,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnGroupsConvolutionCreateBackwardData_F64(
        pConvolution,
        attributes,
        algorithm,
        groups,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
        template<unsigned int N>
    static const char* Timestamp(char(&buf)[N])
    {
        std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        if (!std::strftime(buf, _countof(buf), '%m/%d/%Y %H:%M:%S', std::localtime(&tt)))
            LogicError('Timestamp: Buffer too small.');
        return buf;
    }
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    // ---------------------------------------------------------------------------
// const_array_ref -- same as array_ref for 'const' (read-only) pointers
// ---------------------------------------------------------------------------
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    
#endif  // STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_

    
    
    {  size_t read = 0;
  std::string read_data;
  while (read < kWriteSize) {
    ASSERT_OK(seq_file->Read(kWriteSize - read, &result, scratch));
    read_data.append(result.data(), result.size());
    read += result.size();
  }
  ASSERT_TRUE(write_data == read_data);
  delete seq_file;
  delete [] scratch;
}
    
     private:
  void GenerateFilter();
    
    // The FALLTHROUGH_INTENDED macro can be used to annotate implicit fall-through
// between switch labels. The real definition should be provided externally.
// This one is a fallback version for unsupported compilers.
#ifndef FALLTHROUGH_INTENDED
#define FALLTHROUGH_INTENDED do { } while (0)
#endif
    
    class HASH { };
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
    bool js_cocos2dx_physics3d_Physics3DSliderConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DSliderConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DSliderConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLinearPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getAngularPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseLinearReferenceFrameA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_Physics3DSliderConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
        virtual void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
    
    	enum
	{
		e_count = 8
	};
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    
    {        ImGui::Render();
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            // Basic columns
        if (ImGui::TreeNode('Basic'))
        {
            ImGui::Text('Without border:');
            ImGui::Columns(3, 'mycolumns3', false);  // 3-ways, no border
            ImGui::Separator();
            for (int n = 0; n < 14; n++)
            {
                char label[32];
                sprintf(label, 'Item %d', n);
                if (ImGui::Selectable(label)) {}
                //if (ImGui::Button(label, ImVec2(-1,0))) {}
                ImGui::NextColumn();
            }
            ImGui::Columns(1);
            ImGui::Separator();
    }
    
    static VkAllocationCallbacks*       g_Allocator = NULL;
static VkInstance                   g_Instance = VK_NULL_HANDLE;
static VkPhysicalDevice             g_PhysicalDevice = VK_NULL_HANDLE;
static VkDevice                     g_Device = VK_NULL_HANDLE;
static uint32_t                     g_QueueFamily = (uint32_t)-1;
static VkQueue                      g_Queue = VK_NULL_HANDLE;
static VkDebugReportCallbackEXT     g_DebugReport = VK_NULL_HANDLE;
static VkPipelineCache              g_PipelineCache = VK_NULL_HANDLE;
static VkDescriptorPool             g_DescriptorPool = VK_NULL_HANDLE;
    
        // Create Vulkan Instance
    {
        VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = extensions;
    }
    
        // Parameters stacks (current window)
    IMGUI_API void          PushItemWidth(float item_width);                                // width of items for the common item+label case, pixels. 0.0f = default to ~2/3 of windows width, >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -1.0f always align width to the right side)
    IMGUI_API void          PopItemWidth();
    IMGUI_API float         CalcItemWidth();                                                // width of item given pushed settings and current cursor position
    IMGUI_API void          PushTextWrapPos(float wrap_pos_x = 0.0f);                       // word-wrapping for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space
    IMGUI_API void          PopTextWrapPos();
    IMGUI_API void          PushAllowKeyboardFocus(bool allow_keyboard_focus);              // allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets
    IMGUI_API void          PopAllowKeyboardFocus();
    IMGUI_API void          PushButtonRepeat(bool repeat);                                  // in 'repeat' mode, Button*() functions return repeated true in a typematic manner (using io.KeyRepeatDelay/io.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
    IMGUI_API void          PopButtonRepeat();
    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
    class AbstractCommand : public Command {
private:
  std::shared_ptr<Request> req_;
  std::shared_ptr<FileEntry> fileEntry_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<SocketRecvBuffer> socketRecvBuffer_;
  std::shared_ptr<SocketCore> readCheckTarget_;
  std::shared_ptr<SocketCore> writeCheckTarget_;
    }
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
      virtual ~AbstractProxyResponseCommand();
    
      virtual bool finished() CXX11_OVERRIDE;
    
      ~AnnounceTier();
    
    std::unique_ptr<AuthConfig> AuthConfig::create(std::string user,
                                               std::string password)
{
  if (user.empty()) {
    return nullptr;
  }
  else {
    return make_unique<AuthConfig>(std::move(user), std::move(password));
  }
}
    
    YG_EXTERN_C_BEGIN
    
        int unit;
    double value;
    
    template <typename T>
inline JniType<T> callToJni(local_ref<T>&& sref) {
  return sref.get();
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    namespace facebook {
    }
    
    // As above, but tolerant of nullptr.
template <typename T>
static inline RefPtr<T> assumeAlreadyReffedOrNull(T* ptr) {
  return ptr ? RefPtr<T>::assumeAlreadyReffed(ptr) : nullptr;
}
    
      /**
   * As above but with a custom cleanup function
   */
  typedef void (*CleanupFunction)(void* obj);
  explicit ThreadLocal(CleanupFunction cleanup) :
    m_key(0),
    m_cleanup(cleanup) {
    FBASSERT(cleanup);
    initialize();
  }