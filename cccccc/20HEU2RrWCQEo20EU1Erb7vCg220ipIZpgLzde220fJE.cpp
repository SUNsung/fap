
        
          // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    Clipboard::~Clipboard() {
}
    
    void DispatcherHost::OnCallObjectMethodSync(
    int object_id,
    const std::string& type,
    const std::string& method,
    const base::ListValue& arguments,
    base::ListValue* result) {
  DLOG(INFO) << 'OnCallObjectMethodSync: object_id:' << object_id
             << ' type:' << type
             << ' method:' << method
             << ' arguments:' << arguments;
    }
    
    class Base;
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
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
    typename T46, typename T47, typename T48, typename T49>
internal::ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45, T46, T47, T48, T49> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5,
    T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14,
    T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22,
    T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30,
    T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38,
    T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46,
    T47 v47, T48 v48, T49 v49) {
  return internal::ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45, T46, T47, T48, T49>(v1, v2, v3, v4, v5, v6,
      v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21,
      v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35,
      v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49);
}
    
    namespace internal {
    }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_H_

    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
    // A handy wrapper around RemoveReference that works when the argument
// T depends on template parameters.
#define GTEST_REMOVE_REFERENCE_(T) \
    typename ::testing::internal::RemoveReference<T>::type
    
        virtual const ParamGeneratorInterface<T>* BaseGenerator() const {
      return base_;
    }
    virtual void Advance() {
      value_ = value_ + step_;
      index_++;
    }
    virtual ParamIteratorInterface<T>* Clone() const {
      return new Iterator(*this);
    }
    virtual const T* Current() const { return &value_; }
    virtual bool Equals(const ParamIteratorInterface<T>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      const int other_index =
          CheckedDowncastToActualType<const Iterator>(&other)->index_;
      return index_ == other_index;
    }
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     inT32 xsize,        //image size
                     inT32 ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
      // Calculate y-shift
  int bln_yshift = 0, bottom_shift = 0, top_shift = 0;
  if (bottom < min_bottom - tolerance) {
    bottom_shift = bottom - min_bottom;
  } else if (bottom > max_bottom + tolerance) {
    bottom_shift = bottom - max_bottom;
  }
  if (top < min_top - tolerance) {
    top_shift = top - min_top;
  } else if (top > max_top + tolerance) {
    top_shift = top - max_top;
  }
  if ((top_shift >= 0 && bottom_shift > 0) ||
      (top_shift < 0 && bottom_shift < 0)) {
    bln_yshift = (top_shift + bottom_shift) / 2;
  }
  *yshift = bln_yshift * yscale;
    
    static void fb_compact_serialize_array_as_map(
    StringBuffer& sb, const Array& arr, int depth) {
  fb_compact_serialize_code(sb, FB_CS_MAP);
  IterateKV(
    arr.get(),
    [&](Cell k, TypedValue v) {
      if (isStringType(k.m_type)) {
        fb_compact_serialize_string(sb, StrNR{k.m_data.pstr});
      } else {
        assertx(isIntType(k.m_type));
        fb_compact_serialize_int64(sb, k.m_data.num);
      }
      fb_compact_serialize_variant(sb, VarNR(v), depth + 1);
    }
  );
  fb_compact_serialize_code(sb, FB_CS_STOP);
}
    
    struct IRGS;
    
    /*
 * Record smashed calls in the TC that may need to be re-smashed in the event
 * that a prologue is reused-- additionally any information in ProfData will
 * need to be erased before a translation with a call to a Proflogue is
 * reclaimed.
 */
void recordFuncCaller(const Func* func, TCA toSmash, bool immutable,
                      ProfTransRec* rec);
    
      int opt = 0x900;
  if (!option.empty()) {
    const char *p = option.data();
    int n = option.size();
    int i = 0;
    opt = 0;
    while (i < n) {
      i++;
      switch (*p++) {
      case 'A': opt |= 0x1;      break;
      case 'a': opt |= 0x10;     break;
      case 'R': opt |= 0x2;      break;
      case 'r': opt |= 0x20;     break;
      case 'N': opt |= 0x4;      break;
      case 'n': opt |= 0x40;     break;
      case 'S': opt |= 0x8;      break;
      case 's': opt |= 0x80;     break;
      case 'K': opt |= 0x100;    break;
      case 'k': opt |= 0x1000;   break;
      case 'H': opt |= 0x200;    break;
      case 'h': opt |= 0x2000;   break;
      case 'V': opt |= 0x800;    break;
      case 'C': opt |= 0x10000;  break;
      case 'c': opt |= 0x20000;  break;
      case 'M': opt |= 0x100000; break;
      case 'm': opt |= 0x200000; break;
      }
    }
  }
    
    #include 'hphp/runtime/base/array-data.h'
#include 'hphp/runtime/base/hash-table.h'
#include 'hphp/runtime/base/typed-value.h'
    
    void Clusterizer::initClusters() {
  m_clusters.resize(m_unit.blocks.size());
  m_blockCluster.resize(m_unit.blocks.size());
  for (auto b : m_blocks) {
    m_clusters[b].push_back(b);
    m_blockCluster[b] = b;
  }
}
    
    bool HttpServer::CanContinue(const MemInfo& mem, int64_t rssMb,
                             int64_t rssNeeded, int cacheFreeFactor) {
  if (!mem.valid()) return false;
  if (mem.freeMb < RuntimeOption::ServerCriticalFreeMb) return false;
  auto const availableMb = availableMemory(mem, rssMb, cacheFreeFactor);
  auto const result = (rssMb + availableMb >= rssNeeded);
  if (result) assert(CanStep(mem, rssMb, rssNeeded, cacheFreeFactor));
  return result;
}
    
    
    {  Lock lock(this);
  m_pipeline.push_back(s);
  if (m_event) {
    m_event->finish();
    m_event = nullptr;
  }
  notify();
}
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    // Converts a TypedValue `source' to its uncounted form, so that its lifetime
// can go beyond the current request.  It is used after doing a raw copy of the
// array elements (without manipulating refcounts, as an uncounted won't hold
// any reference to refcounted values.
ALWAYS_INLINE
void ConvertTvToUncounted(TypedValue* source) {
  if (source->m_type == KindOfRef) {
    // unbox
    auto const inner = source->m_data.pref->tv();
    tvCopy(*inner, *source);
  }
  auto type = source->m_type;
  // `source' cannot be Ref here as we already did an unbox.  It won't be
  // Object or Resource, as these should never appear in an uncounted array.
  // Thus we only need to deal with strings/arrays.  Note that even if the
  // string/array is already uncounted but not static, we still have to make a
  // copy, as we have no idea about the lifetime of the other uncounted item
  // here.
  switch (type) {
    case KindOfString:
      source->m_type = KindOfPersistentString;
      // Fall-through.
    case KindOfPersistentString: {
      auto& str = source->m_data.pstr;
      if (str->isStatic()) break;
      else if (str->empty()) str = staticEmptyString();
      else if (auto const st = lookupStaticString(str)) str = st;
      else str = StringData::MakeUncounted(str->slice());
      break;
    }
    case KindOfVec:
      source->m_type = KindOfPersistentVec;
      // Fall-through.
    case KindOfPersistentVec: {
      auto& ad = source->m_data.parr;
      assert(ad->isVecArray());
      if (ad->isStatic()) break;
      else if (ad->empty()) ad = staticEmptyVecArray();
      else ad = PackedArray::MakeUncounted(ad);
      break;
    }
    }
    }
    
    
    {
    {    if (data) memcpy(data, rdata, rsize);
    len -= rsize;
    data += rsize;
  }
}
    
        struct coeff_buf
    {
      uint8 *pData;
      int block_num_x, block_num_y;
      int block_len_x, block_len_y;
      int block_size;
    };
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
    #include 'vorbis/codec.h'
#include 'backends.h'
    
    /* Segher was off (too high) by ~ .3 decibel.  Center the conversion correctly. */
static inline float todB(const float *x){
  union {
    ogg_uint32_t i;
    float f;
  } ix;
  ix.f = *x;
  ix.i = ix.i&0x7fffffff;
  return (float)(ix.i * 7.17711438e-7f -764.6161886f);
}
    
    # if __ARM_MAX_ARCH__<__ARM_ARCH__
#  error '__ARM_MAX_ARCH__ can't be less than __ARM_ARCH__'
# elif __ARM_MAX_ARCH__!=__ARM_ARCH__
#  if __ARM_ARCH__<7 && __ARM_MAX_ARCH__>=7 && defined(__ARMEB__)
#   error 'can't build universal big-endian binary'
#  endif
# endif
    
    /*
 * This is actually a big endian algorithm, the most significant byte is used
 * to lookup array 0
 */
    
    
    {
    {		printf('blowfish %d %d (%d)\n',
			e1-s1,e2-s2,((e2-s2)-(e1-s1)));
		}
	}
    
    #include <stdio.h>
#include <stdlib.h>
#include <openssl/cast.h>
    
    static const int kBlockSize = 32768;
    
    TEST(EnvPosixTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    TEST(LogTest, MarginalTrailer2) {
  // Make a trailer that is exactly the same length as an empty record.
  const int n = kBlockSize - 2*kHeaderSize;
  Write(BigString('foo', n));
  ASSERT_EQ(kBlockSize - kHeaderSize, WrittenBytes());
  Write('bar');
  ASSERT_EQ(BigString('foo', n), Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(0, DroppedBytes());
  ASSERT_EQ('', ReportMessage());
}
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
      virtual Status NewRandomAccessFile(const std::string& fname,
                                     RandomAccessFile** result) {
    MutexLock lock(&mutex_);
    if (file_map_.find(fname) == file_map_.end()) {
      *result = NULL;
      return Status::IOError(fname, 'File not found');
    }
    }
    
      // Check that the file exists.
  ASSERT_TRUE(env_->FileExists('/dir/f'));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(0, file_size);
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(1, children.size());
  ASSERT_EQ('f', children[0]);
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
    
    {}  // namespace leveldb

    
    Iterator::~Iterator() {
  if (cleanup_.function != NULL) {
    (*cleanup_.function)(cleanup_.arg1, cleanup_.arg2);
    for (Cleanup* c = cleanup_.next; c != NULL; ) {
      (*c->function)(c->arg1, c->arg2);
      Cleanup* next = c->next;
      delete c;
      c = next;
    }
  }
}
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
    DeterministicSchedule::~DeterministicSchedule() {
  assert(tls_sched == this);
  assert(sems_.size() == 1);
  assert(sems_[0] == tls_sem);
  beforeThreadExit();
}
    
    std::atomic<uint64_t> idallocator{0};
    
    TEST(MemoryIdler, futexWaitImmediateFlush) {
  StrictMock<Futex<MockAtom>> fut;
  auto clock = MockClock::setup();
    }
    
    
    {  // check our own implementation even when the builtin is available
  using seq4 = typename folly::utility_detail::make_seq<5>::template apply<
      folly::integer_sequence<int>,
      folly::integer_sequence<int, 0>>;
  EXPECT_EQ(5, seq4{}.size());
  EXPECT_TRUE((std::is_same<seq4::value_type, int>::value));
  using seq4_expected = folly::integer_sequence<int, 0, 1, 2, 3, 4>;
  EXPECT_TRUE((std::is_same<seq4, seq4_expected>::value));
}
    
    
    {  EXPECT_TRUE((std::is_same<
    as_stl_allocator<int, stl_arena_alloc>::type,
    stl_arena_alloc
  >::value));
}
    
        // Create the blending setup
    {
        D3D10_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.BlendEnable[0] = true;
        desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
        desc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
        desc.BlendOp = D3D10_BLEND_OP_ADD;
        desc.SrcBlendAlpha = D3D10_BLEND_INV_SRC_ALPHA;
        desc.DestBlendAlpha = D3D10_BLEND_ZERO;
        desc.BlendOpAlpha = D3D10_BLEND_OP_ADD;
        desc.RenderTargetWriteMask[0] = D3D10_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
        // Setup time step
    Uint32	time = SDL_GetTicks();
    double current_time = time / 1000.0;
    io.DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f / 60.0f);
    g_Time = current_time;
    
    
    {    ImGuiTextEditState()                            { memset(this, 0, sizeof(*this)); }
    void                CursorAnimReset()           { CursorAnim = -0.30f; }                                   // After a user-input the cursor stays on for a while without blinking
    void                CursorClamp()               { StbState.cursor = ImMin(StbState.cursor, CurLenW); StbState.select_start = ImMin(StbState.select_start, CurLenW); StbState.select_end = ImMin(StbState.select_end, CurLenW); }
    bool                HasSelection() const        { return StbState.select_start != StbState.select_end; }
    void                ClearSelection()            { StbState.select_start = StbState.select_end = StbState.cursor; }
    void                SelectAll()                 { StbState.select_start = 0; StbState.cursor = StbState.select_end = CurLenW; StbState.has_preferred_x = false; }
    void                OnKeyPressed(int key);
};
    
        // Internals
    IMGUI_API void      CalcCustomRectUV(const CustomRect* rect, ImVec2* out_uv_min, ImVec2* out_uv_max);
    IMGUI_API bool      GetMouseCursorTexData(ImGuiMouseCursor cursor, ImVec2* out_offset, ImVec2* out_size, ImVec2 out_uv_border[2], ImVec2 out_uv_fill[2]);
    
    // Process Win32 mouse/keyboard inputs. 
// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// PS: In this Win32 handler, we use the capture API (GetCapture/SetCapture/ReleaseCapture) to be able to read mouse coordinations when dragging mouse outside of our window bounds.
// PS: We treat DBLCLK messages as regular mouse down messages, so this code will work on windows classes that have the CS_DBLCLKS flag set. Our own example app code doesn't set this flag.
IMGUI_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    ImGuiIO& io = ImGui::GetIO();
    switch (msg)
    {
    case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
    case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
    case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK:
    {
        int button = 0;
        if (msg == WM_LBUTTONDOWN || msg == WM_LBUTTONDBLCLK) button = 0;
        if (msg == WM_RBUTTONDOWN || msg == WM_RBUTTONDBLCLK) button = 1;
        if (msg == WM_MBUTTONDOWN || msg == WM_MBUTTONDBLCLK) button = 2;
        if (!IsAnyMouseButtonDown() && GetCapture() == NULL)
            SetCapture(hwnd);
        io.MouseDown[button] = true;
        return 0;
    }
    case WM_LBUTTONUP:
    case WM_RBUTTONUP:
    case WM_MBUTTONUP:
    {
        int button = 0;
        if (msg == WM_LBUTTONUP) button = 0;
        if (msg == WM_RBUTTONUP) button = 1;
        if (msg == WM_MBUTTONUP) button = 2;
        io.MouseDown[button] = false;
        if (!IsAnyMouseButtonDown() && GetCapture() == hwnd)
            ReleaseCapture();
        return 0;
    }
    case WM_MOUSEWHEEL:
        io.MouseWheel += GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? +1.0f : -1.0f;
        return 0;
    case WM_MOUSEHWHEEL:
        io.MouseWheelH += GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? +1.0f : -1.0f;
        return 0;
    case WM_MOUSEMOVE:
        io.MousePos.x = (signed short)(lParam);
        io.MousePos.y = (signed short)(lParam >> 16);
        return 0;
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        if (wParam < 256)
            io.KeysDown[wParam] = 1;
        return 0;
    case WM_KEYUP:
    case WM_SYSKEYUP:
        if (wParam < 256)
            io.KeysDown[wParam] = 0;
        return 0;
    case WM_CHAR:
        // You can also use ToAscii()+GetKeyboardState() to retrieve characters.
        if (wParam > 0 && wParam < 0x10000)
            io.AddInputCharacter((unsigned short)wParam);
        return 0;
    }
    return 0;
}
    
    // GLFW Data
static GLFWwindow*  g_Window = NULL;
static double       g_Time = 0.0f;
static bool         g_MouseJustPressed[3] = { false, false, false };