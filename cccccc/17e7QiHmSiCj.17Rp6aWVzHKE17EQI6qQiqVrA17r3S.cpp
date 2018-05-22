
        
        bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_Frame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_Frame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_Frame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_Frame_clone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTweenType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_isEnterWhenPassed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getTweenType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_apply(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_isTween(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTween(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getNode(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
        GLESDebugDraw( float32 ratio );
    
    #endif

    
    		{
			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 0.5f);
    }
    
    
    {				if (i == (e_count >> 1))
				{
					m_middle = body;
				}
				prevBody = body;
			}
    
    			b2PolygonShape shape;
			shape.Set(vertices, 3);
    
    		// Car
		{
			b2PolygonShape chassis;
			b2Vec2 vertices[8];
			vertices[0].Set(-1.5f, -0.5f);
			vertices[1].Set(1.5f, -0.5f);
			vertices[2].Set(1.5f, 0.0f);
			vertices[3].Set(0.0f, 0.9f);
			vertices[4].Set(-1.15f, 0.9f);
			vertices[5].Set(-1.5f, 0.2f);
			chassis.Set(vertices, 6);
    }
    
        // stop short of the end so we don't scan off the end doing
    // the hashing; this means we won't compress the last few bytes
    // unless they were part of something longer
    while (q < start+length && q+12 < end) {
        int m;
        stb_uint h1,h2,h3,h4, h;
        stb_uchar *t;
        int best = 2, dist=0;
    }
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    static void ImGui_ImplDX12_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
        // Create custom vertex declaration.
    // Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats.
    // We still use a custom declaration to use 'ALLEGRO_PRIM_TEX_COORD' instead of 'ALLEGRO_PRIM_TEX_COORD_PIXEL' else we can't do a reliable conversion.
    ALLEGRO_VERTEX_ELEMENT elems[] =
    {
        { ALLEGRO_PRIM_POSITION, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, pos) },
        { ALLEGRO_PRIM_TEX_COORD, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, uv) },
        { ALLEGRO_PRIM_COLOR_ATTR, 0, IM_OFFSETOF(ImDrawVertAllegro, col) },
        { 0, 0, 0 }
    };
    g_VertexDecl = al_create_vertex_decl(elems, sizeof(ImDrawVertAllegro));
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Create Vulkan Instance
    {
        uint32_t extensions_count;
        const char** glfw_extensions = glfwGetRequiredInstanceExtensions(&extensions_count);
    }
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int display_w, display_h;
    SDL_GetWindowSize(window, &w, &h);
    SDL_GL_GetDrawableSize(window, &display_w, &display_h);
    io.DisplaySize = ImVec2((float)w, (float)h);
    io.DisplayFramebufferScale = ImVec2(w > 0 ? ((float)display_w / w) : 0, h > 0 ? ((float)display_h / h) : 0);
    
    // Transient per-window flags, reset at the beginning of the frame. For child window, inherited from parent on first Begin().
// This is going to be exposed in imgui.h when stabilized enough.
enum ImGuiItemFlags_
{
    ImGuiItemFlags_AllowKeyboardFocus           = 1 << 0,  // true
    ImGuiItemFlags_ButtonRepeat                 = 1 << 1,  // false    // Button() will return true multiple times based on io.KeyRepeatDelay and io.KeyRepeatRate settings.
    ImGuiItemFlags_Disabled                     = 1 << 2,  // false    // FIXME-WIP: Disable interactions but doesn't affect visuals. Should be: grey out and disable interactions with widgets that affect data + view widgets (WIP)
    ImGuiItemFlags_NoNav                        = 1 << 3,  // false
    ImGuiItemFlags_NoNavDefaultFocus            = 1 << 4,  // false
    ImGuiItemFlags_SelectableDontClosePopup     = 1 << 5,  // false    // MenuItem/Selectable() automatically closes current Popup window
    ImGuiItemFlags_Default_                     = ImGuiItemFlags_AllowKeyboardFocus
};
    
      const size_t kMaxSaneLen = 1 << 20;
  const size_t kMinDefaultLen = 64;
  FuzzingOptions Options;
  Options.Verbosity = Flags.verbosity;
  Options.MaxLen = Flags.max_len;
  Options.UnitTimeoutSec = Flags.timeout;
  Options.ErrorExitCode = Flags.error_exitcode;
  Options.TimeoutExitCode = Flags.timeout_exitcode;
  Options.MaxTotalTimeSec = Flags.max_total_time;
  Options.DoCrossOver = Flags.cross_over;
  Options.MutateDepth = Flags.mutate_depth;
  Options.UseCounters = Flags.use_counters;
  Options.UseIndirCalls = Flags.use_indir_calls;
  Options.UseMemcmp = Flags.use_memcmp;
  Options.UseMemmem = Flags.use_memmem;
  Options.UseCmp = Flags.use_cmp;
  Options.UseValueProfile = Flags.use_value_profile;
  Options.Shrink = Flags.shrink;
  Options.ShuffleAtStartUp = Flags.shuffle;
  Options.PreferSmall = Flags.prefer_small;
  Options.ReloadIntervalSec = Flags.reload;
  Options.OnlyASCII = Flags.only_ascii;
  Options.OutputCSV = Flags.output_csv;
  Options.DetectLeaks = Flags.detect_leaks;
  Options.TraceMalloc = Flags.trace_malloc;
  Options.RssLimitMb = Flags.rss_limit_mb;
  if (Flags.runs >= 0)
    Options.MaxNumberOfRuns = Flags.runs;
  if (!Inputs->empty() && !Flags.minimize_crash_internal_step)
    Options.OutputCorpus = (*Inputs)[0];
  Options.ReportSlowUnits = Flags.report_slow_units;
  if (Flags.artifact_prefix)
    Options.ArtifactPrefix = Flags.artifact_prefix;
  if (Flags.exact_artifact_path)
    Options.ExactArtifactPath = Flags.exact_artifact_path;
  std::vector<Unit> Dictionary;
  if (Flags.dict)
    if (!ParseDictionaryFile(FileToString(Flags.dict), &Dictionary))
      return 1;
  if (Flags.verbosity > 0 && !Dictionary.empty())
    Printf('Dictionary: %zd entries\n', Dictionary.size());
  bool DoPlainRun = AllInputsAreFiles();
  Options.SaveArtifacts =
      !DoPlainRun || Flags.minimize_crash_internal_step;
  Options.PrintNewCovPcs = Flags.print_pcs;
  Options.PrintFinalStats = Flags.print_final_stats;
  Options.PrintCorpusStats = Flags.print_corpus_stats;
  Options.PrintCoverage = Flags.print_coverage;
  Options.DumpCoverage = Flags.dump_coverage;
  if (Flags.exit_on_src_pos)
    Options.ExitOnSrcPos = Flags.exit_on_src_pos;
  if (Flags.exit_on_item)
    Options.ExitOnItem = Flags.exit_on_item;
    
    void CloseStdout() {
  CloseFile(1);
}
    
      /// Mutates data by adding a word from the TORC.
  size_t Mutate_AddWordFromTORC(uint8_t *Data, size_t Size, size_t MaxSize);
    
    namespace fuzzer {
    }
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void TracePC::AddValueForMemcmp(void *caller_pc, const void *s1, const void *s2,
                              size_t n) {
  if (!n) return;
  size_t Len = std::min(n, (size_t)32);
  const uint8_t *A1 = reinterpret_cast<const uint8_t *>(s1);
  const uint8_t *A2 = reinterpret_cast<const uint8_t *>(s2);
  size_t I = 0;
  for (; I < Len; I++)
    if (A1[I] != A2[I])
      break;
  size_t PC = reinterpret_cast<size_t>(caller_pc);
  size_t Idx = I;
  // if (I < Len)
  //  Idx += __builtin_popcountl((A1[I] ^ A2[I])) - 1;
  TPC.HandleValueProfile((PC & 4095) | (Idx << 12));
}
    
    std::string DescribePC(const char *SymbolizedFMT, uintptr_t PC);
    
    // This is a reimplementation of Libc's `system()`. On Darwin the Libc
// implementation contains a mutex which prevents it from being used
// concurrently. This implementation **can** be used concurrently. It sets the
// signal handlers when the first thread enters and restores them when the last
// thread finishes execution of the function and ensures this is not racey by
// using a mutex.
int ExecuteCommand(const std::string &Command) {
  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;
  // Block and ignore signals of the current process when the first thread
  // enters.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    if (ActiveThreadCount == 0) {
      static struct sigaction IgnoreSignalAction;
      sigset_t BlockedSignalsSet;
      memset(&IgnoreSignalAction, 0, sizeof(IgnoreSignalAction));
      IgnoreSignalAction.sa_handler = SIG_IGN;
    }
    }
    }