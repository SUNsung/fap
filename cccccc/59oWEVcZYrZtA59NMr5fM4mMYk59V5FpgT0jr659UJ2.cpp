
        
        #endif  // ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_

    
    namespace atom {
    }
    
    #include 'atom/browser/render_process_preferences.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
      // C++ can not distinguish overloaded member function.
  template<AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template<AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template<typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    // Helper to remove the ref from an net::URLRequest to the LoginHandler.
// Should only be called from the IO thread, since it accesses an
// net::URLRequest.
void ResetLoginHandlerForRequest(net::URLRequest* request) {
  content::ResourceDispatcherHost::Get()->ClearLoginDelegateForRequest(request);
}
    
      // Returns the WebContents associated with the request, must be called on UI
  // thread.
  content::WebContents* GetWebContents() const;
    
    net::URLRequestJob* HttpProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return net::URLRequestHttpJob::Factory(request,
                                         network_delegate,
                                         scheme_);
}
    
    #include 'atom/browser/ui/tray_icon.h'
#include 'ui/views/linux_ui/status_icon_linux.h'
    
    
    {}  // namespace
    
    template <class Container>
internal::ParamGenerator<typename Container::value_type> ValuesIn(
    const Container& container) {
  return ValuesIn(container.begin(), container.end());
}
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestPartResultArray);
};
    
    #include 'sample1.h'
    
        const int btmp0 = MULTIPLY(atmp0, FIX_0_298631336) + az1 + az3;
    const int btmp1 = MULTIPLY(atmp1, FIX_2_053119869) + az2 + az4;
    const int btmp2 = MULTIPLY(atmp2, FIX_3_072711026) + az2 + az3;
    const int btmp3 = MULTIPLY(atmp3, FIX_1_501321110) + az1 + az4;
    
    
    
      &_huff_book_line_128x11_0sub0,
  &_huff_book_line_128x11_1sub0,
  &_huff_book_line_128x11_1sub1,
  &_huff_book_line_128x11_2sub1,
  &_huff_book_line_128x11_2sub2,
  &_huff_book_line_128x11_2sub3,
  &_huff_book_line_128x11_3sub1,
  &_huff_book_line_128x11_3sub2,
  &_huff_book_line_128x11_3sub3,
};
static const static_codebook*const _floor_128x17_books[]={
  &_huff_book_line_128x17_class1,
  &_huff_book_line_128x17_class2,
  &_huff_book_line_128x17_class3,
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
      {2,0,32,  &_residue_44_high,
   &_huff_book__44c6_s_long,&_huff_book__44c6_s_long,
   &_resbook_44s_6,&_resbook_44s_6}
};
static const vorbis_residue_template _res_44s_7[]={
  {2,0,16,  &_residue_44_high,
   &_huff_book__44c7_s_short,&_huff_book__44c7_s_short,
   &_resbook_44s_7,&_resbook_44s_7},
    
    #else
#define OPUS_ARCHMASK 0
    
    #undef MULT16_16_Q15_ADD
static inline int MULT16_16_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      for (size_t i = 0; i < compact_pointers_.size(); i++) {
    PutVarint32(dst, kCompactPointer);
    PutVarint32(dst, compact_pointers_[i].first);  // level
    PutLengthPrefixedSlice(dst, compact_pointers_[i].second.Encode());
  }
    
    #endif  // STORAGE_LEVELDB_DB_VERSION_EDIT_H_

    
    
    {  Iterator* iter_;
  bool valid_;
  Slice key_;
};
    
    /**
 * Check whether 'path' starts with 'prefix'.
 * That is, if prefix has n path elements, then the first n elements of
 * path must be the same as prefix.
 *
 * There is a special case if prefix ends with a slash:
 * /foo/bar/ is not a prefix of /foo/bar, but both /foo/bar and /foo/bar/
 * are prefixes of /foo/bar/baz.
 */
bool starts_with(const path& p, const path& prefix);
    
    #include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
    
    TEST(AsyncIO, SingleAsyncDataPollable) {
  testReads({{0, kAlign}}, AsyncIO::POLLABLE);
  testReads({{0, kAlign}}, AsyncIO::POLLABLE);
}
    
    #include <condition_variable>
#include <mutex>
#include <thread>
    
    /**
 * A helper class for creating an AsyncFileWriter or ImmediateFileWriter based
 * on log handler options settings.
 *
 * This is used by StreamHandlerFactory and FileHandlerFactory.
 */
class FileWriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value);
  std::shared_ptr<LogWriter> createWriter(File file);
    }
    
    
    {} // namespace folly

    
    
    {  /**
   * An optional list of LogHandler names to use for this category.
   *
   * When applying config changes to an existing LogCategory, the existing
   * LogHandler list will be left unchanged if this field is unset.
   */
  Optional<std::vector<std::string>> handlers;
};
    
    #include <folly/experimental/logging/LogLevel.h>
    
    void LogHandlerConfig::update(const LogHandlerConfig& other) {
  FOLLY_SAFE_DCHECK(
      !other.type.hasValue(), 'LogHandlerConfig type cannot be updated');
  for (const auto& option : other.options) {
    options[option.first] = option.second;
  }
}
    
    #pragma once
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
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
    
        // Setup viewport, orthographic projection matrix
    glViewport(0, 0, (GLsizei)fb_width, (GLsizei)fb_height);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0.0f, io.DisplaySize.x, io.DisplaySize.y, 0.0f, -1.0f, +1.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    
    
    {} // namespace rocksdb

    
      /// Return (list: key)[first..last] (inclusive)
  /// May throw RedisListException
  std::vector<std::string> Range(const std::string& key,
                                 int32_t first, int32_t last);
    
      void SetStatus(Status s) {
    status_ = s;
  }
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    // Get timestamp from user key
Status DateTieredDBImpl::GetTimestamp(const Slice& key, int64_t* result) {
  if (key.size() < kTSLength) {
    return Status::Corruption('Bad timestamp in key');
  }
  const char* pos = key.data() + key.size() - 8;
  int64_t timestamp = 0;
  if (port::kLittleEndian) {
    int bytes_to_fill = 8;
    for (int i = 0; i < bytes_to_fill; ++i) {
      timestamp |= (static_cast<uint64_t>(static_cast<unsigned char>(pos[i]))
                    << ((bytes_to_fill - i - 1) << 3));
    }
  } else {
    memcpy(&timestamp, pos, sizeof(timestamp));
  }
  *result = timestamp;
  return Status::OK();
}
    
    
    {    // as the current points to the current record. move the iterator forward.
    current_->Next();
    if (current_->Valid()) {
      // current is still valid after the Next() call above.  Call
      // replace_top() to restore the heap property.  When the same child
      // iterator yields a sequence of keys, this is cheap.
      minHeap_.replace_top(current_);
    } else {
      // current stopped being valid, remove it from the heap.
      minHeap_.pop();
    }
    current_ = CurrentForward();
  }
    
    
    {}  // namespace rocksdb
