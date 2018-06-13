
        
        
    {
    {      auto h = handle_.AccessTensor(context)->template flat<string>();
      h(0) = cinfo_.container();
      h(1) = cinfo_.name();
      resource_ = resource;
    }
    if (context->expected_output_dtype(0) == DT_RESOURCE) {
      OP_REQUIRES_OK(context, MakeResourceHandleToOutput(
                                  context, 0, cinfo_.container(), cinfo_.name(),
                                  MakeTypeIndex<T>()));
    } else {
      context->set_output_ref(0, &mu_, handle_.AccessTensor(context));
    }
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    // Comparison ops.
REGISTER_OP_NO_GRADIENT('Less');
REGISTER_OP_NO_GRADIENT('LessEqual');
REGISTER_OP_NO_GRADIENT('Greater');
REGISTER_OP_NO_GRADIENT('GreaterEqual');
REGISTER_OP_NO_GRADIENT('Equal');
REGISTER_OP_NO_GRADIENT('NotEqual');
    
      AcceleratorCallbackMap accelerator_callback_map_;
    
    
    {}  // namespace atom

    
    
    {  DISALLOW_COPY_AND_ASSIGN(Locker);
};
    
      // Sent after the URLRequestContextGetter for a Profile has been initialized.
  // The details are none and the source is a Profile*.
  NOTIFICATION_PROFILE_URL_REQUEST_CONTEXT_GETTER_INITIALIZED,
    
      // The user's custom colors.  Kept process-wide so that they can be persisted
  // from one dialog invocation to the next.
  static COLORREF g_custom_colors[16];
    
    
    {}  // namespace chrome
    
    #if 0
    
    
    {  JPEGScanInfo scan_info;
  scan_info.components.resize(comps_in_scan);
  VERIFY_LEN(2 * comps_in_scan);
  std::vector<bool> ids_seen(256, false);
  for (int i = 0; i < comps_in_scan; ++i) {
    int id = ReadUint8(data, pos);
    if (ids_seen[id]) {   // (cf. section B.2.3, regarding CSj)
      fprintf(stderr, 'Duplicate ID %d in SOS.\n', id);
      jpg->error = JPEG_DUPLICATE_COMPONENT_ID;
      return false;
    }
    ids_seen[id] = true;
    bool found_index = false;
    for (size_t j = 0; j < jpg->components.size(); ++j) {
      if (jpg->components[j].id == id) {
        scan_info.components[i].comp_idx = j;
        found_index = true;
      }
    }
    if (!found_index) {
      fprintf(stderr, 'SOS marker: Could not find component with id %d\n', id);
      jpg->error = JPEG_COMPONENT_NOT_FOUND;
      return false;
    }
    int c = ReadUint8(data, pos);
    int dc_tbl_idx = c >> 4;
    int ac_tbl_idx = c & 0xf;
    VERIFY_INPUT(dc_tbl_idx, 0, 3, HUFFMAN_INDEX);
    VERIFY_INPUT(ac_tbl_idx, 0, 3, HUFFMAN_INDEX);
    scan_info.components[i].dc_tbl_idx = dc_tbl_idx;
    scan_info.components[i].ac_tbl_idx = ac_tbl_idx;
  }
  VERIFY_LEN(3);
  scan_info.Ss = ReadUint8(data, pos);
  scan_info.Se = ReadUint8(data, pos);
  VERIFY_INPUT(scan_info.Ss, 0, 63, START_OF_SCAN);
  VERIFY_INPUT(scan_info.Se, scan_info.Ss, 63, END_OF_SCAN);
  int c = ReadUint8(data, pos);
  scan_info.Ah = c >> 4;
  scan_info.Al = c & 0xf;
  // Check that all the Huffman tables needed for this scan are defined.
  for (int i = 0; i < comps_in_scan; ++i) {
    bool found_dc_table = false;
    bool found_ac_table = false;
    for (size_t j = 0; j < jpg->huffman_code.size(); ++j) {
      int slot_id = jpg->huffman_code[j].slot_id;
      if (slot_id == scan_info.components[i].dc_tbl_idx) {
        found_dc_table = true;
      } else if (slot_id == scan_info.components[i].ac_tbl_idx + 16) {
        found_ac_table = true;
      }
    }
    if (scan_info.Ss == 0 && !found_dc_table) {
      fprintf(stderr, 'SOS marker: Could not find DC Huffman table with index '
              '%d\n', scan_info.components[i].dc_tbl_idx);
      jpg->error = JPEG_HUFFMAN_TABLE_NOT_FOUND;
      return false;
    }
    if (scan_info.Se > 0 && !found_ac_table) {
      fprintf(stderr, 'SOS marker: Could not find AC Huffman table with index '
              '%d\n', scan_info.components[i].ac_tbl_idx);
      jpg->error = JPEG_HUFFMAN_TABLE_NOT_FOUND;
      return false;
    }
  }
  jpg->scan_info.push_back(scan_info);
  VERIFY_MARKER_END();
  return true;
}
    
    
    {}  // namespace guetzli
    
        // The nodes are:
    // [0, n): the sorted leaf nodes that we start with.
    // [n]: we add a sentinel here.
    // [n + 1, 2n): new parent nodes are added here, starting from
    //              (n+1). These are naturally in ascending order.
    // [2n]: we add a sentinel at the end as well.
    // There will be (2n+1) elements at the end.
    const HuffmanTree sentinel(~static_cast<uint32_t>(0), -1, -1);
    tree[n] = sentinel;
    tree[n + 1] = sentinel;
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);
    
            D3D12_COMMAND_QUEUE_DESC queueDesc = {};
        queueDesc.Type     = D3D12_COMMAND_LIST_TYPE_DIRECT;
        queueDesc.Flags    = D3D12_COMMAND_QUEUE_FLAG_NONE;
        queueDesc.NodeMask = 1;
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
    
        // Setup scale and translation:
    // Our visible imgui space lies from draw_data->DisplayPps (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). DisplayMin is typically (0,0) for single viewport apps.
    {
        float scale[2];
        scale[0] = 2.0f / draw_data->DisplaySize.x;
        scale[1] = 2.0f / draw_data->DisplaySize.y;
        float translate[2];
        translate[0] = -1.0f - draw_data->DisplayPos.x * scale[0];
        translate[1] = -1.0f - draw_data->DisplayPos.y * scale[1];
        vkCmdPushConstants(command_buffer, g_PipelineLayout, VK_SHADER_STAGE_VERTEX_BIT, sizeof(float) * 0, sizeof(float) * 2, scale);
        vkCmdPushConstants(command_buffer, g_PipelineLayout, VK_SHADER_STAGE_VERTEX_BIT, sizeof(float) * 2, sizeof(float) * 2, translate);
    }
    
    void ImGui_ImplFreeGLUT_SpecialFunc(int key, int x, int y)
{
    //printf('key_down_func %d\n', key);
    ImGuiIO& io = ImGui::GetIO();
    if (key + 256 < IM_ARRAYSIZE(io.KeysDown))
        io.KeysDown[key + 256] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        CreateRenderTarget();
    
      // This has to be the last step, because once state is Living other threads
  // may access instance and instance_weak w/o synchronization.
  state_.store(SingletonHolderState::Living, std::memory_order_release);
    
     public:
  HazptrWideCAS() : node_(new Node()) {}
    
    TEST_F(ConstexprMathTest, constexpr_abs_float_negative) {
  constexpr auto v = -17.5f;
  constexpr auto a = folly::constexpr_abs(v);
  EXPECT_EQ(17.5, a);
  EXPECT_TRUE((std::is_same<const float, decltype(a)>::value));
}
    
    
    {  return nallocx(minSize, 0);
}
    
    namespace {
/**
 * Helper class to optionally log a fatal message during static initialization
 * or destruction.
 *
 * Since command line arguments have not been processed during static
 * initialization, we check an environment variable.
 */
class InitChecker {
 public:
  InitChecker() : value_{getenv('CRASH_DURING_INIT')} {
    if (value_ && strcmp(value_, 'shutdown') != 0) {
      XLOG(FATAL) << 'crashing during static initialization';
    }
  }
  ~InitChecker() {
    if (value_) {
      XLOG(FATAL) << 'crashing during static destruction';
    }
  }
    }
    }
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    #include <string>
#include <vector>
    
      if (run.bytes_per_second > 0.0) {
    Out << run.bytes_per_second;
  }
  Out << ',';
  if (run.items_per_second > 0.0) {
    Out << run.items_per_second;
  }
  Out << ',';
  if (!run.report_label.empty()) {
    // Field with embedded double-quote characters must be doubled and the field
    // delimited with double-quotes.
    std::string label = run.report_label;
    ReplaceAll(&label, '\'', '\'\'');
    Out << '\'' << label << '\'';
  }
  Out << ',,';  // for error_occurred and error_message
    
    namespace benchmark {
// NOTE: only i386 and x86_64 have been well tested.
// PPC, sparc, alpha, and ia64 are based on
//    http://peter.kuscsik.com/wordpress/?p=14
// with modifications by m3b.  See also
//    https://setisvn.ssl.berkeley.edu/svn/lib/fftw-3.0.1/kernel/cycle.h
namespace cycleclock {
// This should return the number of cycles since power-on.  Thread-safe.
inline BENCHMARK_ALWAYS_INLINE int64_t Now() {
#if defined(BENCHMARK_OS_MACOSX)
  // this goes at the top because we need ALL Macs, regardless of
  // architecture, to return the number of 'mach time units' that
  // have passed since startup.  See sysinfo.cc where
  // InitializeSystemInfo() sets the supposed cpu clock frequency of
  // macs to the number of mach time units per second, not actual
  // CPU clock frequency (which can change in the face of CPU
  // frequency scaling).  Also note that when the Mac sleeps, this
  // counter pauses; it does not continue counting, nor does it
  // reset to zero.
  return mach_absolute_time();
#elif defined(BENCHMARK_OS_EMSCRIPTEN)
  // this goes above x86-specific code because old versions of Emscripten
  // define __x86_64__, although they have nothing to do with it.
  return static_cast<int64_t>(emscripten_get_now() * 1e+6);
#elif defined(__i386__)
  int64_t ret;
  __asm__ volatile('rdtsc' : '=A'(ret));
  return ret;
#elif defined(__x86_64__) || defined(__amd64__)
  uint64_t low, high;
  __asm__ volatile('rdtsc' : '=a'(low), '=d'(high));
  return (high << 32) | low;
#elif defined(__powerpc__) || defined(__ppc__)
  // This returns a time-base, which is not always precisely a cycle-count.
  int64_t tbl, tbu0, tbu1;
  asm('mftbu %0' : '=r'(tbu0));
  asm('mftb  %0' : '=r'(tbl));
  asm('mftbu %0' : '=r'(tbu1));
  tbl &= -static_cast<int64_t>(tbu0 == tbu1);
  // high 32 bits in tbu1; low 32 bits in tbl  (tbu0 is garbage)
  return (tbu1 << 32) | tbl;
#elif defined(__sparc__)
  int64_t tick;
  asm('.byte 0x83, 0x41, 0x00, 0x00');
  asm('mov   %%g1, %0' : '=r'(tick));
  return tick;
#elif defined(__ia64__)
  int64_t itc;
  asm('mov %0 = ar.itc' : '=r'(itc));
  return itc;
#elif defined(COMPILER_MSVC) && defined(_M_IX86)
  // Older MSVC compilers (like 7.x) don't seem to support the
  // __rdtsc intrinsic properly, so I prefer to use _asm instead
  // when I know it will work.  Otherwise, I'll use __rdtsc and hope
  // the code is being compiled with a non-ancient compiler.
  _asm rdtsc
#elif defined(COMPILER_MSVC)
  return __rdtsc();
#elif defined(BENCHMARK_OS_NACL)
  // Native Client validator on x86/x86-64 allows RDTSC instructions,
  // and this case is handled above. Native Client validator on ARM
  // rejects MRC instructions (used in the ARM-specific sequence below),
  // so we handle it here. Portable Native Client compiles to
  // architecture-agnostic bytecode, which doesn't provide any
  // cycle counter access mnemonics.
    }
    }
    }