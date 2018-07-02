
        
        
    {}  // namespace tensorflow
    
    
    {  if (proc_id == 0) LOG(INFO) << 'MPI process-ID to gRPC server name map: \n';
  for (int i = 0; i < number_of_procs; i++) {
    name_to_id_[std::string(&worker_names[i * 128])] = i;
    if (proc_id == 0)
      LOG(INFO) << 'Process: ' << i
                << '\tgRPC-name: ' << std::string(&worker_names[i * 128])
                << std::endl;
  }
}
    
    string TraceEventsToJson(const Trace &trace) {
  string json;
  Appendf(&json,
          R'({'displayTimeUnit':'ns','metadata':{'highres-ticks':true},)');
  Appendf(&json,
          R'('traceEvents':[)');
  // Convert to a std::map so that devices are sorted by the device id.
  std::map<uint32, const Device *> sorted_devices;
  for (const auto &pair : trace.devices()) {
    sorted_devices[pair.first] = &pair.second;
  }
  AddDeviceMetadata(sorted_devices, &json);
  for (const TraceEvent &event : trace.trace_events()) {
    AddTraceEvent(event, &json);
  }
  // Add one fake event to avoid dealing with no-trailing-comma rule.
  Appendf(&json, R'({}]})');
  return json;
}
    
      // From the zlib manual (http://www.zlib.net/manual.html):
  // The mem_level parameter specifies how much memory should be allocated for
  // the internal compression state. mem_level=1 uses minimum memory but is slow
  // and reduces compression ratio; mem_level=9 uses maximum memory for optimal
  // speed. The default value is 8.
  int8 mem_level = 9;
    
      /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/StringRef.h'
    
        if (failed)
      return true;
    
    
    {
    {}
}
#endif

    
      /// Returns true if \c LHS is before \c RHS in the source buffer.
  bool isBeforeInBuffer(SourceLoc LHS, SourceLoc RHS) const {
    return LHS.Value.getPointer() < RHS.Value.getPointer();
  }
    
    #ifndef SWIFT_INDEX_INDEX_H
#define SWIFT_INDEX_INDEX_H
    
    
    {}  // namespace leveldb
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    class Slice;
    
     private:
  const char* data_;
  size_t size_;
    
            if(quantile_sum - low_sum > out_of_bells_fraction*total_sum)
        {
            if(max_segment_length < x - start_x)
            {
                max_segment_length = x - start_x;
                max_start_x = start_x;
                max_end_x = x;
            }
    }
    
    namespace cv
{
CV_EXPORTS_W void add(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    }
    
    struct DynamicFnEntry
{
    const char* fnName; // 'clCreateContext'
    void** ppFn; // &clCreateContext_pfn
};
    
    const float g_8x32fTab[] =
{
    -128.f, -127.f, -126.f, -125.f, -124.f, -123.f, -122.f, -121.f,
    -120.f, -119.f, -118.f, -117.f, -116.f, -115.f, -114.f, -113.f,
    -112.f, -111.f, -110.f, -109.f, -108.f, -107.f, -106.f, -105.f,
    -104.f, -103.f, -102.f, -101.f, -100.f,  -99.f,  -98.f,  -97.f,
     -96.f,  -95.f,  -94.f,  -93.f,  -92.f,  -91.f,  -90.f,  -89.f,
     -88.f,  -87.f,  -86.f,  -85.f,  -84.f,  -83.f,  -82.f,  -81.f,
     -80.f,  -79.f,  -78.f,  -77.f,  -76.f,  -75.f,  -74.f,  -73.f,
     -72.f,  -71.f,  -70.f,  -69.f,  -68.f,  -67.f,  -66.f,  -65.f,
     -64.f,  -63.f,  -62.f,  -61.f,  -60.f,  -59.f,  -58.f,  -57.f,
     -56.f,  -55.f,  -54.f,  -53.f,  -52.f,  -51.f,  -50.f,  -49.f,
     -48.f,  -47.f,  -46.f,  -45.f,  -44.f,  -43.f,  -42.f,  -41.f,
     -40.f,  -39.f,  -38.f,  -37.f,  -36.f,  -35.f,  -34.f,  -33.f,
     -32.f,  -31.f,  -30.f,  -29.f,  -28.f,  -27.f,  -26.f,  -25.f,
     -24.f,  -23.f,  -22.f,  -21.f,  -20.f,  -19.f,  -18.f,  -17.f,
     -16.f,  -15.f,  -14.f,  -13.f,  -12.f,  -11.f,  -10.f,   -9.f,
      -8.f,   -7.f,   -6.f,   -5.f,   -4.f,   -3.f,   -2.f,   -1.f,
       0.f,    1.f,    2.f,    3.f,    4.f,    5.f,    6.f,    7.f,
       8.f,    9.f,   10.f,   11.f,   12.f,   13.f,   14.f,   15.f,
      16.f,   17.f,   18.f,   19.f,   20.f,   21.f,   22.f,   23.f,
      24.f,   25.f,   26.f,   27.f,   28.f,   29.f,   30.f,   31.f,
      32.f,   33.f,   34.f,   35.f,   36.f,   37.f,   38.f,   39.f,
      40.f,   41.f,   42.f,   43.f,   44.f,   45.f,   46.f,   47.f,
      48.f,   49.f,   50.f,   51.f,   52.f,   53.f,   54.f,   55.f,
      56.f,   57.f,   58.f,   59.f,   60.f,   61.f,   62.f,   63.f,
      64.f,   65.f,   66.f,   67.f,   68.f,   69.f,   70.f,   71.f,
      72.f,   73.f,   74.f,   75.f,   76.f,   77.f,   78.f,   79.f,
      80.f,   81.f,   82.f,   83.f,   84.f,   85.f,   86.f,   87.f,
      88.f,   89.f,   90.f,   91.f,   92.f,   93.f,   94.f,   95.f,
      96.f,   97.f,   98.f,   99.f,  100.f,  101.f,  102.f,  103.f,
     104.f,  105.f,  106.f,  107.f,  108.f,  109.f,  110.f,  111.f,
     112.f,  113.f,  114.f,  115.f,  116.f,  117.f,  118.f,  119.f,
     120.f,  121.f,  122.f,  123.f,  124.f,  125.f,  126.f,  127.f,
     128.f,  129.f,  130.f,  131.f,  132.f,  133.f,  134.f,  135.f,
     136.f,  137.f,  138.f,  139.f,  140.f,  141.f,  142.f,  143.f,
     144.f,  145.f,  146.f,  147.f,  148.f,  149.f,  150.f,  151.f,
     152.f,  153.f,  154.f,  155.f,  156.f,  157.f,  158.f,  159.f,
     160.f,  161.f,  162.f,  163.f,  164.f,  165.f,  166.f,  167.f,
     168.f,  169.f,  170.f,  171.f,  172.f,  173.f,  174.f,  175.f,
     176.f,  177.f,  178.f,  179.f,  180.f,  181.f,  182.f,  183.f,
     184.f,  185.f,  186.f,  187.f,  188.f,  189.f,  190.f,  191.f,
     192.f,  193.f,  194.f,  195.f,  196.f,  197.f,  198.f,  199.f,
     200.f,  201.f,  202.f,  203.f,  204.f,  205.f,  206.f,  207.f,
     208.f,  209.f,  210.f,  211.f,  212.f,  213.f,  214.f,  215.f,
     216.f,  217.f,  218.f,  219.f,  220.f,  221.f,  222.f,  223.f,
     224.f,  225.f,  226.f,  227.f,  228.f,  229.f,  230.f,  231.f,
     232.f,  233.f,  234.f,  235.f,  236.f,  237.f,  238.f,  239.f,
     240.f,  241.f,  242.f,  243.f,  244.f,  245.f,  246.f,  247.f,
     248.f,  249.f,  250.f,  251.f,  252.f,  253.f,  254.f,  255.f
};
    
    int64_t getCPUTimeNanos() {
  return RuntimeOption::EvalJitTimer ? HPHP::Timer::GetThreadCPUTimeNanos() :
         -1;
}
    
    private:
  Type m_type;
  ReportType m_report;
  std::string m_name;
  int64_t m_start;
    
    #else // USE_GCC_FAST_TLS
    
      void setJob(PageletTransport *job) {
    job->incRefCount();
    m_job = job;
  }
    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
      /*
   * Allocate a block of data to hold n objects of type T.
   *
   * Any instructions with VdataPtr members that point inside the buffer
   * returned by allocData() will automatically be fixed up during a relocation
   * pass immediately before final code emission.
   */
  template<typename T>
  T* allocData(size_t n = 1) {
    auto const size = sizeof(T) * n;
    dataBlocks.emplace_back();
    }
    
      // Test operator upper bounds.
  EXPECT_FALSE(cl2.matches(1000));
  EXPECT_FALSE(cl2.matches(1001));
    
      // The ::watch method is a single iteration of worker health checking.
  // Unless the watcher has entered a shutdown phase, every iteration should
  // check the worker sanity.
  EXPECT_CALL(runner, isChildSane(_)).WillOnce(Return(Status(0)));
    
    std::wstring stringToWstring(const std::string& src) {
  std::wstring utf16le_str;
  try {
    utf16le_str = converter.from_bytes(src);
  } catch (std::exception /* e */) {
    LOG(WARNING) << 'Failed to convert string to wstring ' << src;
  }
    }
    
    namespace osquery {
    }
    
    template <typename EventType>
KernelEventContextRef KernelEventPublisher::createEventContextFrom(
    osquery_event_t event_type, CQueue::event *event) const {
  TypedKernelEventContextRef<EventType> ec = nullptr;
    }
    
    /**
 * Boost TokenizerFunction functor for tokenizing rsyslog CSV data
 *
 * This functor is intended to be used with boost::tokenizer in order to
 * properly parse CSV data generated by rsyslog. The default
 * boost::escaped_list_separator provided with boost::tokenizer chokes on
 * rsyslog CSV output, because rsyslog escapes ' with '', and also does not
 * escape backslashes. Our implementation closely follows the one provided with
 * Boost, but allows for the idiosyncrasies of rsyslog output and simplifies
 * the implementation for our limited use case.
 */
class RsyslogCsvSeparator {
 public:
  RsyslogCsvSeparator() : last_(false) {}
    }
    
    static int stb_compress_chunk(stb_uchar *history,
    stb_uchar *start,
    stb_uchar *end,
    int length,
    int *pending_literals,
    stb_uchar **chash,
    stb_uint mask)
{
    (void)history;
    int window = stb__window;
    stb_uint match_max;
    stb_uchar *lit_start = start - *pending_literals;
    stb_uchar *q = start;
    }
    
        // Copy and convert all vertices into a single contiguous buffer, convert colors to DX9 default format.
    // FIXME-OPT: This is a waste of resource, the ideal is to use imconfig.h and
    //  1) to avoid repacking colors:   #define IMGUI_USE_BGRA_PACKED_COLOR
    //  2) to avoid repacking vertices: #define IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT struct ImDrawVert { ImVec2 pos; float z; ImU32 col; ImVec2 uv; }
    CUSTOMVERTEX* vtx_dst;
    ImDrawIdx* idx_dst;
    if (g_pVB->Lock(0, (UINT)(draw_data->TotalVtxCount * sizeof(CUSTOMVERTEX)), (void**)&vtx_dst, D3DLOCK_DISCARD) < 0)
        return;
    if (g_pIB->Lock(0, (UINT)(draw_data->TotalIdxCount * sizeof(ImDrawIdx)), (void**)&idx_dst, D3DLOCK_DISCARD) < 0)
        return;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_src = cmd_list->VtxBuffer.Data;
        for (int i = 0; i < cmd_list->VtxBuffer.Size; i++)
        {
            vtx_dst->pos[0] = vtx_src->pos.x;
            vtx_dst->pos[1] = vtx_src->pos.y;
            vtx_dst->pos[2] = 0.0f;
            vtx_dst->col = (vtx_src->col & 0xFF00FF00) | ((vtx_src->col & 0xFF0000) >> 16) | ((vtx_src->col & 0xFF) << 16);     // RGBA --> ARGB for DirectX9
            vtx_dst->uv[0] = vtx_src->uv.x;
            vtx_dst->uv[1] = vtx_src->uv.y;
            vtx_dst++;
            vtx_src++;
        }
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unlock();
    g_pIB->Unlock();
    g_pd3dDevice->SetStreamSource(0, g_pVB, 0, sizeof(CUSTOMVERTEX));
    g_pd3dDevice->SetIndices(g_pIB);
    g_pd3dDevice->SetFVF(D3DFVF_CUSTOMVERTEX);
    
            // Start the ImGui frame
        ImGui_ImplAllegro5_NewFrame();
        ImGui::NewFrame();
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
    
        if (!array->Get(i)->IsArray()) {
      return false;
    }
    
    
    {} // namespace rocksdb

    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    
    {  if (0 == r && 0 == kvs.size()) {
    return Status::NotFound();
  } else if (0 == r && 0 != kvs.size()) {
    fid.assign(kvs[fname].c_str(), kvs[fname].length());
    return Status::OK();
  } else {
    return err_to_status(r);
  }
}
    
      jlong addr_compaction_filter = env->CallLongMethod(m_jcallback_obj,
      m_jcreate_compaction_filter_methodid,
      static_cast<jboolean>(context.is_full_compaction),
      static_cast<jboolean>(context.is_manual_compaction));
    
    
    {}  //namespace rocksdb
    
    struct ComparatorJniCallbackOptions {
  // Use adaptive mutex, which spins in the user space before resorting
  // to kernel. This could reduce context switch when the mutex is not
  // heavily contended. However, if the mutex is hot, we could end up
  // wasting spin time.
  // Default: false
  bool use_adaptive_mutex;
    }