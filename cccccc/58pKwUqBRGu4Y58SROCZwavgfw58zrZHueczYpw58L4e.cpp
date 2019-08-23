
        
        /** Utility functions used by the Bitcoin Qt UI.
 */
namespace GUIUtil
{
    // Create human-readable string from date
    QString dateTimeStr(const QDateTime &datetime);
    QString dateTimeStr(qint64 nTime);
    }
    
        BOOST_CHECK(v.setNumStr('-688'));
    BOOST_CHECK(v.isNum());
    BOOST_CHECK_EQUAL(v.getValStr(), '-688');
    
    #ifndef BITCOIN_BECH32_H
#define BITCOIN_BECH32_H
    
    ROTATE_ARGS
	movdqa	XTMP3, XTMP2	; XTMP3 = W[-2] {BBAA}
    mov	y0, e		; y0 = e
    mov	y1, a		; y1 = a
    ror	y0, (25-11)	; y0 = e >> (25-11)
	movdqa	XTMP4, XTMP2	; XTMP4 = W[-2] {BBAA}
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    ror	y1, (22-13)	; y1 = a >> (22-13)
    mov	y2, f		; y2 = f
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
	psrlq	XTMP2, 17	; XTMP2 = W[-2] ror 17 {xBxA}
    xor	y2, g		; y2 = f^g
	psrlq	XTMP3, 19	; XTMP3 = W[-2] ror 19 {xBxA}
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
	psrld	XTMP4, 10	; XTMP4 = W[-2] >> 10 {BBAA}
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
	pxor	XTMP2, XTMP3
    add	y2, y0		; y2 = S1 + CH
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
    add	y2, [rsp + _XFER + 2*4]	; y2 = k + w + S1 + CH
	pxor	XTMP4, XTMP2	; XTMP4 = s1 {xBxA}
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pshufb	XTMP4, SHUF_00BA	; XTMP4 = s1 {00BA}
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	paddd	XTMP0, XTMP4	; XTMP0 = {..., ..., W[1], W[0]}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
	;; compute high s1
	pshufd	XTMP2, XTMP0, 01010000b	; XTMP2 = W[-2] {DDCC}
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    TEST(FaultInjectionTest, FaultTestWithLogReuse) {
  ReuseLogs(true);
  DoTest();
}
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    Determining whether a character is CURRENTLY rejected depends on implicit
understanding of the SEQUENCE of possible calls. The flags are defined and
grouped in the REJ_FLAGS enum. These groupings are used in determining a
characters CURRENT rejection status. Basically, a character is ACCEPTED if
    
    // Classifies the given [training] sample, writing to results.
// See ShapeClassifier for a full description.
int TessClassifier::UnicharClassifySample(
    const TrainingSample& sample, Pix* page_pix, int debug,
    UNICHAR_ID keep_this, GenericVector<UnicharRating>* results) {
  const int old_matcher_level = classify_->matcher_debug_level;
  const int old_matcher_flags = classify_->matcher_debug_flags;
  const int old_classify_level = classify_->classify_debug_level;
  if (debug) {
    // Explicitly set values of various control parameters to generate debug
    // output if required, restoring the old values after classifying.
    classify_->matcher_debug_level.set_value(2);
    classify_->matcher_debug_flags.set_value(25);
    classify_->classify_debug_level.set_value(3);
  }
  classify_->CharNormTrainingSample(pruner_only_, keep_this, sample, results);
  if (debug) {
    classify_->matcher_debug_level.set_value(old_matcher_level);
    classify_->matcher_debug_flags.set_value(old_matcher_flags);
    classify_->classify_debug_level.set_value(old_classify_level);
  }
  return results->size();
}
    
    
    {}  // namespace leveldb

    
    TEST(RecoveryTest, LargeManifestCompacted) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  ASSERT_OK(Put('foo', 'bar'));
  Close();
  std::string old_manifest = ManifestFileName();
    }
    
     private:
  friend class SnapshotList;
    
    // Return a new filter policy that uses a bloom filter with approximately
// the specified number of bits per key.  A good value for bits_per_key
// is 10, which yields a filter with ~ 1% false positive rate.
//
// Callers must delete the result after any database that is using the
// result has been closed.
//
// Note: if you are using a custom comparator that ignores some parts
// of the keys being compared, you must not use NewBloomFilterPolicy()
// and must provide your own FilterPolicy that also ignores the
// corresponding parts of the keys.  For example, if the comparator
// ignores trailing spaces, it would be incorrect to use a
// FilterPolicy (like NewBloomFilterPolicy) that does not ignore
// trailing spaces in keys.
LEVELDB_EXPORT const FilterPolicy* NewBloomFilterPolicy(int bits_per_key);
    
    inline bool operator==(const Slice& x, const Slice& y) {
  return ((x.size() == y.size()) &&
          (memcmp(x.data(), y.data(), x.size()) == 0));
}
    
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
    
    namespace leveldb {
    }
    
      char footer_space[Footer::kEncodedLength];
  Slice footer_input;
  Status s = file->Read(size - Footer::kEncodedLength, Footer::kEncodedLength,
                        &footer_input, footer_space);
  if (!s.ok()) return s;
    
      std::string s;
  for (size_t i = 0; i < values.size(); i++) {
    PutVarint64(&s, values[i]);
  }
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
        // For an Emscripten build we are disabling file-system access, so let's not attempt to do a fopen() of the imgui.ini file.
    // You may manually call LoadIniSettingsFromMemory() to load settings from your own storage.
    io.IniFilename = NULL;
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX12_InvalidateDeviceObjects();
            CleanupRenderTarget();
            ResizeSwapChain(hWnd, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam));
            CreateRenderTarget();
            ImGui_ImplDX12_CreateDeviceObjects();
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

    
        // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();

    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
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
    
      void deleteDbKey(ConnectionsTree::KeyItem& key,
                   std::function<void(const QString&)> callback) override;
    
      Q_INVOKABLE void encode(const QString& formatterName, const QByteArray& data,
                          QJSValue jsCallback);
    
    void ConnectionsTree::TreeItem::unlock() {
  m_locked = false;
  emit m_model.itemChanged(getSelf());
}
    
      QSharedPointer<Model> model();