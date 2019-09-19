
        
        #endif  // SHELL_BROWSER_API_ATOM_API_NET_H_

    
    
    {}  // namespace electron
    
    #endif  // SHELL_BROWSER_API_ATOM_API_WEB_CONTENTS_VIEW_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(TrackableObjectBase);
};
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(BoxLayout);
};
    
    using electron::api::Button;
    
    int main()
{
    wchar_t szCommand[]{ L'ping localhost' };
    HRESULT hr{ E_UNEXPECTED };
    HANDLE hConsole = { GetStdHandle(STD_OUTPUT_HANDLE) };
    }
    
      // Set the default fraction and margin high enough so that fields that use
  // the default should succeed
  comparator_.SetDefaultFractionAndMargin(0.2, 0.0);
  EXPECT_EQ(
      FieldComparator::SAME,
      comparator_.Compare(message_1_, message_2_, field_double, -1, -1, NULL));
    
    MUST_USE bool store_t::mark_secondary_index_deleted(
        buf_lock_t *sindex_block,
        const sindex_name_t &name) {
    secondary_index_t sindex;
    bool success = get_secondary_index(sindex_block, name, &sindex);
    if (!success) {
        return false;
    }
    }
    
        store_t store(
            region_t::universe(),
            &serializer,
            &balancer,
            'unit_test_store',
            true,
            &get_global_perfmon_collection(),
            nullptr,
            &io_backender,
            base_path_t('.'),
            generate_uuid(),
            update_sindexes_t::UPDATE,
            which_cpu_shard_t{0, 1});
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_

    
    class AssertionResult;                 // Result of an assertion.
class Message;                         // Represents a failure message.
class Test;                            // Represents a test.
class TestInfo;                        // Information about a test.
class TestPartResult;                  // Result of a test part.
class UnitTest;                        // A collection of test cases.
    
    template<typename T> inline
bool operator==(T* ptr, const linked_ptr<T>& x) {
  return ptr == x.get();
}
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      // Set the count for the number of entries in the batch.
  static void SetCount(WriteBatch* batch, int n);
    
      // Three-way comparison.  Returns value:
  //   <  0 iff '*this' <  'b',
  //   == 0 iff '*this' == 'b',
  //   >  0 iff '*this' >  'b'
  int compare(const Slice& b) const;
    
      // Takes ownership of 'iter' and will delete it when destroyed, or
  // when Set() is invoked again.
  void Set(Iterator* iter) {
    delete iter_;
    iter_ = iter;
    if (iter_ == nullptr) {
      valid_ = false;
    } else {
      Update();
    }
  }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
Iterator* NewMergingIterator(const Comparator* comparator, Iterator** children,
                             int n);
    
    struct ReadOptions;
    
                bool IsLocalizedDigit(const wchar_t digit) const
            {
                for (auto dig : m_digitSymbols)
                {
                    if (digit == dig)
                    {
                        return true;
                    }
                }
                return false;
            }
    
        // Do not repeat app initialization when the Window already has content,
    // just ensure that the window is active
    if (rootFrame == nullptr)
    {
        // Create a Frame to act as the navigation context and associate it with
        // a SuspensionManager key
        rootFrame = ref new Frame();
    }
    
    
    {        return *this;
    }
    
    
    {    // If there are zeros to remove.
    if (fstrip)
    {
        // Remove them.
        memmove(pnum->mant, pmant, (int)(cdigits * sizeof(MANTTYPE)));
        // And adjust exponent and digit count accordingly.
        pnum->exp += (pnum->cdigit - cdigits);
        pnum->cdigit = cdigits;
    }
    return (fstrip);
}
    
        for (size_t i = (fNegative ? 1 : 0); i < numStr.length(); i++)
    {
        if (numStr[i] == m_decimalSymbol)
        {
            IFT(commands->Append(IDC_PNT));
            if (!fSciFmt)
            {
                fDecimal = true;
            }
        }
        else if (numStr[i] == L'e')
        {
            IFT(commands->Append(IDC_EXP));
            fSciFmt = true;
        }
        else if (numStr[i] == L'-')
        {
            IFT(commands->Append(IDC_SIGN));
        }
        else if (numStr[i] == L'+')
        {
            // Ignore.
        }
        // Number
        else
        {
            int num = static_cast<int>(numStr[i]) - ASCII_0;
            num += IDC_0;
            IFT(commands->Append(num));
        }
    }
    
        class CalculatorHistory : public IHistoryDisplay
    {
    public:
        CalculatorHistory(const size_t maxSize);
        unsigned int AddToHistory(
            _In_ std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> const& spTokens,
            _In_ std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> const& spCommands,
            std::wstring_view result);
        std::vector<std::shared_ptr<HISTORYITEM>> const& GetHistory();
        std::shared_ptr<HISTORYITEM> const& GetHistoryItem(unsigned int uIdx);
        void ClearHistory();
        unsigned int AddItem(_In_ std::shared_ptr<HISTORYITEM> const& spHistoryItem);
        bool RemoveItem(unsigned int uIdx);
        size_t MaxHistorySize() const
        {
            return m_maxHistorySize;
        }
        ~CalculatorHistory(void);
    }
    
    // Space to hold enough digits for a quadword binary number (64) plus digit separator strings for that number (20)
constexpr int MAX_STRLEN = 84;
    
    bool NarratorAnnouncement::IsValid(NarratorAnnouncement ^ announcement)
{
    return announcement != nullptr && announcement->Announcement != nullptr && !announcement->Announcement->IsEmpty();
}
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
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
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
        // For an Emscripten build we are disabling file-system access, so let's not attempt to do a fopen() of the imgui.ini file.
    // You may manually call LoadIniSettingsFromMemory() to load settings from your own storage.
    io.IniFilename = NULL;
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            g_d3dpp.BackBufferWidth = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            ResetDevice();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

    
    bool ImGui_ImplDX9_Init(IDirect3DDevice9* device)
{
    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendRendererName = 'imgui_impl_dx9';
    io.BackendFlags |= ImGuiBackendFlags_RendererHasVtxOffset;  // We can honor the ImDrawCmd::VtxOffset field, allowing for large meshes.
    }
    
    // Include OpenGL header (without an OpenGL loader) requires a bit of fiddling
#if defined(_WIN32) && !defined(APIENTRY)
#define APIENTRY __stdcall                  // It is customary to use APIENTRY for OpenGL function pointer declarations on all platforms.  Additionally, the Windows OpenGL header needs APIENTRY.
#endif
#if defined(_WIN32) && !defined(WINGDIAPI)
#define WINGDIAPI __declspec(dllimport)     // Some Windows OpenGL headers need this
#endif
#if defined(__APPLE__)
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
    
      _OutputStream &operator<< (const std::string &v) {
    m_out << '\'' << Escape(v.c_str()) << '\'';
    return *this;
  }
    
    namespace HPHP {
    }
    
      iterator find(const StringData* key) { return m_map.find(key); }
  iterator begin()                     { return m_map.begin(); }
  iterator end()                       { return m_map.end(); }
  V        size() const                { return m_list.size(); }
    
      bool addMapping() {
    if (!m_failed) {
      if (addMappingImpl()) return true;
      // Some hugepage mappers start with zero page budget. Don't fail
      // permanently if they didn't work in the beginning.
      if (m_maxHugePages) m_failed = true;
    }
    return false;
  }
    
    // When you already have the memory mapped in, remap them it to use huge pages,
// and try to interleave across all enabled numa nodes.  Return the number of
// pages that are actually backed by hugetlb pages (the rest may be implemented
// as transparent huge pages).
//
// Beware this function wipes out data on existing pages.
int remap_interleaved_2m_pages(void* addr, size_t pages);
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {        return std::make_tuple(
          folly::sformat('(unnamed {})', type_name()),
          true,
          incomplete
        );
      };
      const auto info = get_info(die, /*updateOffsets=*/true);
    
      // ExnNode ids are contiguous.
  for (size_t i = 0; i < seenIds.size(); ++i) {
    assert(seenIds[i] == true || f.exnNodes[i].idx == NoExnNodeId);
  }
    
    
    {  // If the splayed interval was not restored from the database.
  auto splay = splayValue(interval, FLAGS_schedule_splay_percent);
  content = std::to_string(interval) + ':' + std::to_string(splay);
  setDatabaseValue(kPersistentSettings, 'interval.' + name, content);
  return splay;
}
    
      auto source_backup = data_parser->source_;
  auto config_backup = data_parser->config_;
    
    #include <boost/filesystem/path.hpp>
    
    
    {  for (auto& line : doc.GetArray()) {
    log.push_back({
        static_cast<StatusLogSeverity>(line['s'].GetInt()),
        line['f'].GetString(),
        line['i'].GetUint64(),
        line['m'].GetString(),
        line['c'].GetString(),
        line['u'].GetUint64(),
        line['h'].GetString(),
    });
  }
}
    
    const float INNER_TIME_64E_S3[12][32] = {
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f}};
    
      bool DrawTrajectory(
      const Obstacle& obstacle, const LaneSequence& lane_sequence,
      const double lon_acceleration, const double total_time,
      const double period,
      std::vector<apollo::common::TrajectoryPoint>* trajectory_points);
    
    #include 'cyber/cyber.h'
#include 'cyber/proto/unit_test.pb.h'
#include 'cyber/py_wrapper/py_node.h'
    
    // kappa = (dx * d2y - dy * d2x) / [(dx * dx + dy * dy)^(3/2)]
double CurveMath::ComputeCurvature(const double dx, const double d2x,
                                   const double dy, const double d2y) {
  const double a = dx * d2y - dy * d2x;
  auto norm_square = dx * dx + dy * dy;
  auto norm = std::sqrt(norm_square);
  const double b = norm * norm_square;
  return a / b;
}
    
      NaviSpeedTsConstraints constraints;
  constraints.v_max = 20.0;
  constraints.v_preffered = 10.0;
  constraints.a_max = 4.0;
  constraints.a_preffered = 2.0;
  constraints.b_max = 5.0;
  constraints.b_preffered = 2.0;
  graph.UpdateConstraints(constraints);
    
    #pragma once
    
    void GemController::Stop() {
  if (!is_initialized_) {
    AERROR << 'GemController stops or starts improperly!';
    return;
  }
    }
    
      void WaitForFinish() {
    if (thread_send_ != nullptr && thread_send_->joinable()) {
      thread_send_->join();
      thread_send_.reset();
      AINFO << 'Send thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
    if (thread_recv_ != nullptr && thread_recv_->joinable()) {
      thread_recv_->join();
      thread_recv_.reset();
      AINFO << 'Recv thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
  }
    
    #include 'modules/prediction/common/prediction_thread_pool.h'
    
     private:
  void WriteOutputJpgFile(const std::vector<uint8_t>& jpeg_buffer,
                          const std::string& output_jpg_file) const;
  std::string GetOutputFile(const int frame_num) const;