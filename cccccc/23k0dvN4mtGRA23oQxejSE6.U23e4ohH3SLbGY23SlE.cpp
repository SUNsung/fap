
        
        IPC_MESSAGE_ROUTED1(ShellViewHostMsg_Deallocate_Object,
                    int /* object id */)
    
      // Post 'open' event.
  static void EmitOpenEvent(const std::string& path);
    
    
namespace nwapi {
    }
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->is_checked_;
}
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    #if defined(OS_WIN) || defined(OS_LINUX)
bool MenuItem::AcceleratorPressed(const ui::Accelerator& accelerator) {
#if defined(OS_WIN)
  if (meta_down_flag_) {
    if ((::GetKeyState(VK_APPS) & 0x8000) != 0x8000) {
      return true;
    }
  }
#endif
  OnClick();
  return true;
}
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    bool NwClipboardClearSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
  return true;
}
    
    ProgressDialog::ProgressDialog() {
    }
    
    	if (enabled == p_enabled)
		return;
	enabled = p_enabled;
    
    static inline uint64_t hash_djb2_one_64(uint64_t p_in, uint64_t p_prev = 5381) {
    }
    
    	memdelete_arr(allocs);
	memdelete(alloc_mutex);
    
    #endif // ALSAMIDI_ENABLED

    
    	void lock() const;
	void unlock() const;
    
    #ifdef COREMIDI_ENABLED
    
    public:
	static int s_active;
    
    
    {	cgsem_wait(&sem);
	return OK;
}
    
        // The `double` is the progress of the secondary index construction.
    typedef std::map<uuid_u, std::pair<microtime_t, double const *> >
        sindex_context_map_t;
    sindex_context_map_t *get_sindex_context_map();
    
        check_keys_are_present(&store, sindex_name);
    
    #  define ASSERT_DEBUG_DEATH(statement, regex) \
  GTEST_EXECUTE_STATEMENT_(statement, regex)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
internal::ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17) {
  return internal::ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17);
}
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Returns the elapsed time, in milliseconds.
  TimeInMillis elapsed_time() const { return elapsed_time_; }
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    // #ifdef __GNUC__ is too general here.  It is possible to use gcc without using
// libstdc++ (which is where cxxabi.h comes from).
# if GTEST_HAS_CXXABI_H_
#  include <cxxabi.h>
# elif defined(__HP_aCC)
#  include <acxx_demangle.h>
# endif  // GTEST_HASH_CXXABI_H_
    
    
    {  Corrupt(kTableFile, -2000, 500);
  Reopen();
  Check(5000, 9999);
}
    
    namespace leveldb {
    }
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-null, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or to nullptr if no Table object
  // underlies the returned iterator.  The returned '*tableptr' object is owned
  // by the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options, uint64_t file_number,
                        uint64_t file_size, Table** tableptr = nullptr);
    
      // Calls (*handle_result)(arg, ...) with the entry found after a call
  // to Seek(key).  May not make such a call if filter policy says
  // that key is not present.
  Status InternalGet(const ReadOptions&, const Slice& key, void* arg,
                     void (*handle_result)(void* arg, const Slice& k,
                                           const Slice& v));
    
    #endif  // STORAGE_LEVELDB_INCLUDE_WRITE_BATCH_H_

    
    #include 'leveldb/slice.h'
    
    static int NextLength(int length) {
  if (length < 10) {
    length += 1;
  } else if (length < 100) {
    length += 10;
  } else if (length < 1000) {
    length += 100;
  } else {
    length += 1000;
  }
  return length;
}
    
    Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
        IMGUI_API bool BuildFontAtlas(ImFontAtlas* atlas, unsigned int extra_flags = 0);
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [x] Renderer: Desktop GL only: Support for large meshes (64k+ vertices) with 16-bits indices.
    
        // Setup Platform/Renderer bindings
    ImGui_ImplGlfw_InitForVulkan(window, true);
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = g_Instance;
    init_info.PhysicalDevice = g_PhysicalDevice;
    init_info.Device = g_Device;
    init_info.QueueFamily = g_QueueFamily;
    init_info.Queue = g_Queue;
    init_info.PipelineCache = g_PipelineCache;
    init_info.DescriptorPool = g_DescriptorPool;
    init_info.Allocator = g_Allocator;
    init_info.MinImageCount = g_MinImageCount;
    init_info.ImageCount = wd->ImageCount;
    init_info.CheckVkResultFn = check_vk_result;
    ImGui_ImplVulkan_Init(&init_info, wd->RenderPass);
    
    void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
                    if (clip_rect.x < fb_width && clip_rect.y < fb_height && clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
                    // Apply scissor/clipping rectangle
                    glScissor((int)clip_rect.x, (int)(fb_height - clip_rect.w), (int)(clip_rect.z - clip_rect.x), (int)(clip_rect.w - clip_rect.y));
    }
    
    
    {  return invokeFuncFew(
    ctx.func,
    thisOrCls,
    ctx.invName,
    argc,
    argv,
    ctx.dynamic
  );
}
    
      const folly::dynamic& message = getMessage();
  const folly::dynamic& args = tryGetObject(message, 'arguments', s_emptyArgs);
  std::string requestedObject = tryGetString(args, 'object', '');
  StringBuffer sb;
    
    [[noreturn]] inline void thrift_error(const String& what, TError why) {
  throw_object(s_TProtocolException, make_vec_array(what, why));
}
    
    
    {
    {      s1 = p.second;
      s1.remove(r1);
      for (auto const r2 : vregs()) {
        auto s2 = s1;
        s2.add(r2);
        test(s2, addToVregList(removeFromVregList(p.first, r1), r2));
      }
      for (auto const r2 : vregs()) {
        auto s2 = s1;
        s2.remove(r2);
        test(s2, removeFromVregList(removeFromVregList(p.first, r1), r2));
      }
    }
  }
    
    void printUnit(int level, const std::string& caption, const Vunit& unit) {
  if (!Trace::moduleEnabledRelease(HPHP::Trace::vasm, level)) return;
  Trace::ftraceRelease(
    '\n{}{}\n{}',
    banner(caption.c_str()),
    show(unit),
    banner('')
  );
}
    
    // We can't do this on MSVC, it's all debug or all release.
#ifndef _MSC_VER
/*
 * Forcibly define USE_TRACE, so we get the debug trace.h interface included
 * here. This allows mixed compilation, where some units were compiled
 * DEBUG and others compiled RELEASE, to successfully link.
 */
#ifndef USE_TRACE
#  define USE_TRACE 1
#endif
#endif
#include 'hphp/util/trace.h'
    
    ssize_t APCLocalArray::IterRewind(const ArrayData* ad, ssize_t prev) {
  auto a = asApcArray(ad);
  assertx(prev >= 0 && prev < a->m_size);
  ssize_t next = prev - 1;
  return next >= 0 ? next : a->m_size;
}
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    void NameValueTable::rehash(Elm* const oldTab, const size_t oldMask) {
  for (Elm* srcElm = &oldTab[oldMask]; srcElm != &oldTab[-1]; --srcElm) {
    if (srcElm->m_name) {
      assertx(srcElm->m_tv.m_type == kNamedLocalDataType ||
             tvIsPlausible(srcElm->m_tv));
      Elm* dstElm = insertImpl(srcElm->m_name);
      dstElm->m_name = srcElm->m_name;
      dstElm->m_tv = srcElm->m_tv;
    }
  }
}