
        
        
    {} // namespace swift
    
        GraphemeClusterBreakProperty GCBForC1 =
        getGraphemeClusterBreakProperty(C[1]);
    if (isExtendedGraphemeClusterBoundary(GCBForC0, GCBForC1) &&
        !graphemeBreakOverride(C[0], C[1]))
      return S.slice(0, C1Offset);
    
    #pragma mark - NSCalendar verification
    
    class DocComment {
  const Decl *D;
  const swift::markup::Document *Doc = nullptr;
  const swift::markup::CommentParts Parts;
    }
    
      Document(ArrayRef<MarkupASTNode*> Children);
    
    using namespace swift;
    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
    #include 'swift/Basic/LLVM.h'
#include 'swift/AST/DiagnosticConsumer.h'
    
    #endif

    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableExtensionLiteGenerator);
};
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__

    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
    // Bool() allows generating tests with parameters in a set of (false, true).
//
// Synopsis:
// Bool()
//   - returns a generator producing sequences with elements {false, true}.
//
// It is useful when testing code that depends on Boolean flags. Combinations
// of multiple flags can be tested when several Bool()'s are combined using
// Combine() function.
//
// In the following example all tests in the test case FlagDependentTest
// will be instantiated twice with parameters false and true.
//
// class FlagDependentTest : public testing::TestWithParam<bool> {
//   virtual void SetUp() {
//     external_flag = GetParam();
//   }
// }
// INSTANTIATE_TEST_CASE_P(BoolSequence, FlagDependentTest, Bool());
//
inline internal::ParamGenerator<bool> Bool() {
  return Values(false, true);
}
    
    // This helper template allows PrintTo() for tuples and
// UniversalTersePrintTupleFieldsToStrings() to be defined by
// induction on the number of tuple fields.  The idea is that
// TuplePrefixPrinter<N>::PrintPrefixTo(t, os) prints the first N
// fields in tuple t, and can be defined in terms of
// TuplePrefixPrinter<N - 1>.
    
    // Makes sure this header is not included before gtest.h.
#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
# error Do not include gtest_pred_impl.h directly.  Include gtest.h instead.
#endif  // GTEST_INCLUDE_GTEST_GTEST_H_
    
    
    {    if (next_ == this) return true;
    linked_ptr_internal const* p = next_;
    while (p->next_ != this) p = p->next_;
    p->next_ = next_;
    return false;
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
    
      template <GTEST_2_TYPENAMES_(U)>
  tuple& operator=(const GTEST_2_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
  template <typename U0, typename U1>
  tuple& operator=(const ::std::pair<U0, U1>& p) {
    f0_ = p.first;
    f1_ = p.second;
    return *this;
  }
    
    
]]
template <int k, class Tuple>
struct tuple_element {
  typedef typename gtest_internal::TupleElement<
      k < (tuple_size<Tuple>::value), k, Tuple>::type type;
};
    
    		//unlink(save_path.utf8().get_data());
		//print_line('renaming..');
		//_wunlink(save_path.c_str()); //unlink if exists
		//int rename_error = _wrename((save_path+'.tmp').c_str(),save_path.c_str());
    
    	friend class Main;
	static bool initialize_certs;
    
    	ClassDB::bind_method(D_METHOD('set_use_as_steering', 'enable'), &VehicleWheel::set_use_as_steering);
	ClassDB::bind_method(D_METHOD('is_used_as_steering'), &VehicleWheel::is_used_as_steering);
    
    	ur->create_action(TTR('Create Outline'));
    
    	static const char *bname[] = {
		'out',
		'anim',
		'oneshot',
		'mix',
		'blend2',
		'blend3',
		'blend4',
		'scale',
		'seek',
		'transition'
	};
    
    	List<Connection> connections;
	get_connection_list(&connections);
	Array connections_arr;
	connections_arr.resize(connections.size() * 3);
    
    				if (!ts->has_tile(E->get().cell))
					continue;
    
    	void edit(Node *p_tile_map);
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
    /// A millisecond internal applied to extension initialization.
extern const size_t kExtensionInitializeLatency;
    
     public:
  /// The public flags instance, usable when parsing `--help`.
  static std::map<std::string, FlagInfo> flags();
    
      /**
   * @brief Add a set of item names broadcasted by an extension uuid.
   *
   * When an extension is registered the RegistryFactory will receive a
   * RegistryBroadcast containing a all of the extension's registry names and
   * the set of items with their optional route info. The factory depends on
   * each registry to manage calls/requests to these external plugins.
   *
   * @param uuid The uuid chosen for the extension.
   * @param routes The plugin name and optional route info list.
   * @return Success if all routes were added, failure if any failed.
   */
  Status addExternal(const RouteUUID& uuid, const RegistryRoutes& routes);
    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
      /*
   * @brief a variable to keep track of the temp fs used in carving
   *
   * This variable represents the location in which we store all of our carved
   * files. When a carve has completed all of the desired files, as well
   * as the tar archive should reside in this directory
   */
  boost::filesystem::path carveDir_;
    
    
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
    
    void OutputImageComponent::CopyFromJpegComponent(const JPEGComponent& comp,
                                                 int factor_x, int factor_y,
                                                 const int* quant) {
  Reset(factor_x, factor_y);
  assert(width_in_blocks_ <= comp.width_in_blocks);
  assert(height_in_blocks_ <= comp.height_in_blocks);
  const size_t src_row_size = comp.width_in_blocks * kDCTBlockSize;
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    const coeff_t* src_coeffs = &comp.coeffs[block_y * src_row_size];
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      for (int i = 0; i < kDCTBlockSize; ++i) {
        block[i] = src_coeffs[i] * quant[i];
      }
      SetCoeffBlock(block_x, block_y, block);
      src_coeffs += kDCTBlockSize;
    }
  }
  memcpy(quant_, quant, sizeof(quant_));
}
    
    std::vector<float> Sharpen(const std::vector<float>& image, int w, int h,
                           float sigma, float amount) {
  // This is only made for small sigma, e.g. 1.3.
  std::vector<double> kernel(5);
  for (size_t i = 0; i < kernel.size(); i++) {
    kernel[i] = Normal(1.0 * i - kernel.size() / 2, sigma);
  }
    }
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
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
    
    // Builds jpeg-style Huffman lookup table from the given symbols.
// The symbols are in order of increasing bit lengths. The number of symbols
// with bit length n is given in counts[n] for each n >= 1.
// Returns the size of the lookup table.
int BuildJpegHuffmanTable(const int* counts, const int* symbols,
                          HuffmanTableEntry* lut);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
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
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC1 sd;
    {
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = NUM_BACK_BUFFERS;
        sd.Width = 0;
        sd.Height = 0;
        sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.Flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        sd.AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED;
        sd.Scaling = DXGI_SCALING_STRETCH;
        sd.Stereo = FALSE;
    }
    }
    
    
    {        // Handle loss of D3D9 device
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_pd3dDevice->Reset(&g_d3dpp);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
    }
    
        if (EXPECTS_CRASH_DUMP == _state)
        return -1;
    
    int Test_Spy_Sample::__TestFun1(int i)
{
    SPY_HOOK_THIS_API(__TestFun1, i);
    xinfo2(TSF'Test');
    return i+1;
}

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);