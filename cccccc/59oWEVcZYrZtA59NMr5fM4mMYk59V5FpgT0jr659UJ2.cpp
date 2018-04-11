
        
        protected:
    void get_test_array_types_and_sizes( int test_case_idx, vector<vector<Size> >& sizes, vector<vector<int> >& types );
    void fill_array( int test_case_idx, int i, int j, Mat& arr );
    double get_success_error_level( int test_case_idx, int i, int j );
    void run_func();
    void prepare_to_validation( int test_case_idx );
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    CV_EXPORTS_W void absdiff(InputArray src1, Scalar src2, OutputArray dst);
    
        static void CODEGEN_FUNCPTR Switch_GetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params)
    {
        GetVertexAttribIuiv = (PFNGETVERTEXATTRIBIUIVPROC)IntGetProcAddress('glGetVertexAttribIuiv');
        GetVertexAttribIuiv(index, pname, params);
    }
    
    
    {
    {
    {} } } // namespace cv::ocl::runtime
    
       private:
    Iterator(const Iterator& other)
        : base_(other.base_), $for j, [[
    
    // The TypeList template makes it possible to use either a single type
// or a Types<...> list in TYPED_TEST_CASE() and
// INSTANTIATE_TYPED_TEST_CASE_P().
    
      const int is_prime_size_;
  bool* const is_prime_;
    
    #include <set>
    
    DEFINE_int32(driver_port, 0, 'Port for communication with driver');
DEFINE_int32(server_port, 0, 'Port for operation as a server');
DEFINE_string(credential_type, grpc::testing::kInsecureCredentialsType,
              'Credential type for communication with driver');
    
    // Tucks all generator state in an anonymous namespace away from
// PythonGrpcGenerator and the header file, mostly to encourage future changes
// to not require updates to the grpcio-tools C++ code part. Assumes that it is
// only ever used from a single thread.
struct PrivateGenerator {
  const GeneratorConfiguration& config;
  const grpc_generator::File* file;
    }
    
    #include <grpc/grpc_security.h>
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    #include 'src/compiler/python_generator.h'
    
    // Reads the Define Quantization Table (DQT) marker segment and fills in *jpg
// with the parsed data.
bool ProcessDQT(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  if (marker_len == 2) {
    fprintf(stderr, 'DQT marker: no quantization table found\n');
    jpg->error = JPEG_EMPTY_DQT;
    return false;
  }
  while (*pos < start_pos + marker_len && jpg->quant.size() < kMaxQuantTables) {
    VERIFY_LEN(1);
    int quant_table_index = ReadUint8(data, pos);
    int quant_table_precision = quant_table_index >> 4;
    quant_table_index &= 0xf;
    VERIFY_INPUT(quant_table_index, 0, 3, QUANT_TBL_INDEX);
    VERIFY_LEN((quant_table_precision ? 2 : 1) * kDCTBlockSize);
    JPEGQuantTable table;
    table.index = quant_table_index;
    table.precision = quant_table_precision;
    for (int i = 0; i < kDCTBlockSize; ++i) {
      int quant_val = quant_table_precision ?
          ReadUint16(data, pos) :
          ReadUint8(data, pos);
      VERIFY_INPUT(quant_val, 1, 65535, QUANT_VAL);
      table.values[kJPEGNaturalOrder[i]] = quant_val;
    }
    table.is_last = (*pos == start_pos + marker_len);
    jpg->quant.push_back(table);
  }
  VERIFY_MARKER_END();
  return true;
}
    
    // Builds a JPEG-style huffman code from the given bit depths.
void BuildHuffmanCode(uint8_t* depth, int* counts, int* values) {
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      ++counts[depth[i]];
    }
  }
  int offset[kJpegHuffmanMaxBitLength + 1] = { 0 };
  for (int i = 1; i <= kJpegHuffmanMaxBitLength; ++i) {
    offset[i] = offset[i - 1] + counts[i - 1];
  }
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      values[offset[depth[i]]++] = i;
    }
  }
}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
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
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX9_CreateDeviceObjects();
    
    static const char* ImGui_Marmalade_GetClipboardText(void* /*user_data*/)
{
    if (!s3eClipboardAvailable())
        return NULL;
    }
    
    
    {        // Create the input layout
        static D3D12_INPUT_ELEMENT_DESC local_layout[] = {
            { 'POSITION', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->pos), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { 'TEXCOORD', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->uv),  D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { 'COLOR',    0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, (size_t)(&((ImDrawVert*)0)->col), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
        };
        psoDesc.InputLayout = { local_layout, 3 };
    }
    
    bool    ImGui_ImplSdlGL2_Init(SDL_Window* window)
{
    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;   // We can honor GetMouseCursor() values (optional)
    }
    
                // Testing IsWindowHovered() function with its various flags (note that the flags can be combined)
            ImGui::BulletText(
                'IsWindowHovered() = %d\n'
                'IsWindowHovered(_AllowWhenBlockedByPopup) = %d\n'
                'IsWindowHovered(_AllowWhenBlockedByActiveItem) = %d\n'
                'IsWindowHovered(_ChildWindows) = %d\n'
                'IsWindowHovered(_ChildWindows|_RootWindow) = %d\n'
                'IsWindowHovered(_RootWindow) = %d\n'
                'IsWindowHovered(_AnyWindow) = %d\n',
                ImGui::IsWindowHovered(),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_AllowWhenBlockedByActiveItem),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_ChildWindows),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_ChildWindows | ImGuiHoveredFlags_RootWindow),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_RootWindow),
                ImGui::IsWindowHovered(ImGuiHoveredFlags_AnyWindow));
    
    #include <map>
#include <node.h>
    
        slists.Append('c', 'bbnagnagsx');
    slists.Append('a', 'sa');
    slists.Append('b', 'df');
    slists.Append('a', 'gh');
    slists.Append('a', 'jk');
    slists.Append('b', 'l;');
    slists.Append('c', 'rogosh');
    
    JniCallback::~JniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
        // 2. check if file exist.
    // 2.1 exist, use it
    // 2.2 not exist, create it
    s = _GetFid(fpath, fid);
    if (Status::NotFound() == s) {
      fid = _CreateFid();
      _AddFid(fpath, fid);
    }
    
      auto stream = event_logger_->LogToBuffer(log_buffer_);
  stream << 'job' << job_context_->job_id << 'event'
         << 'flush_finished';
  stream << 'output_compression'
         << CompressionTypeToString(output_compression_);
  stream << 'lsm_state';
  stream.StartArray();
  auto vstorage = cfd_->current()->storage_info();
  for (int level = 0; level < vstorage->num_levels(); ++level) {
    stream << vstorage->NumLevelFiles(level);
  }
  stream.EndArray();
  stream << 'immutable_memtables' << cfd_->imm()->NumNotFlushed();