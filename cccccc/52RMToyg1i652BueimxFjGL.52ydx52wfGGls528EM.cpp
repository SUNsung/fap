
        
        #define TEGRA_ADD(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::add(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz, \
                     CAROTENE_NS::CONVERT_POLICY_SATURATE), /*Original addition use saturated operator*/ \
                                                            /*so use the same from CAROTENE*/ \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        /*
        Convert BGR image to YCrCb
    */
    void bgr2ycrcb(const Size2D &size,
                   const u8 * srcBase, ptrdiff_t srcStride,
                   u8 * dstBase, ptrdiff_t dstStride);
    
    void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
    
    {            vst3_u8(dst + dj, vRgb2);
#endif
            sj += 8; dj += 24;
        }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(u16, s8, 16,
    register uint8x16_t v127 asm ('q4') = vmovq_n_u8(127);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d0-d1}, [%[src1]]                             \n\t'
            'vqmovn.u16 d4, q0                                     \n\t'
            'vld1.8 {d2-d3}, [%[src2]]                             \n\t'
            'vqmovn.u16 d5, q1                                     \n\t'
            'vmin.u8 q3, q2, q4                                    \n\t'
            'vst1.8 {d6-d7}, [%[dst]]                              \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [src2] 'r' (_src + i + 8),
              [dst] 'r' (_dst + i + 0),
              'w' (v127)
            : 'd0','d1','d2','d3','d4','d5','d6','d7'
         );
    }
})
#else
CVT_FUNC(u16, s8, 16,
    uint8x8_t v127 = vmov_n_u8(127);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline1_u16 = vld1q_u16(_src + i);
        uint16x8_t vline2_u16 = vld1q_u16(_src + i + 8);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u16 q3, d4                                       \n\t'
            'vmovl.u16 q4, d5                                       \n\t'
             'vcvt.f32.u32 q5, q3                                    \n\t'
            'vcvt.f32.u32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                           \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(u16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
    void convolution(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 BORDER_MODE border, u8 borderValue,
                 const Size2D & ksize, s16 * kernelBase, u32 scale)
{
    internal::assertSupportedConfiguration(isConvolutionSupported(size, ksize, border));
#ifdef CAROTENE_NEON
    const uint8x8_t v_zero_u8 = vdup_n_u8(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    const int32x4_t v_zero_s32 = vdupq_n_s32(0);
    }
    
            if(i + 2 <= size.width)
        {
            float32x2_t vres = vmul_f32(vld1_f32(src0 + i), vld1_f32(src1 + i));
            result += vget_lane_f32(vres, 0) + vget_lane_f32(vres, 1);
            i += 2;
        }
    
        for(i = 3; i < (ptrdiff_t)size.height-2; i++)
    {
        const u8* ptr = internal::getRowPtr(srcBase, srcStride, i) + 3;
        u8* curr = buf[(i - 3)%3];
        ptrdiff_t* cornerpos = cpbuf[(i - 3)%3];
        memset(curr, 0, size.width);
        ptrdiff_t ncorners = 0;
    }
    
                uint32x4_t v_mask0 = vorrq_u32(vceqq_s32(v_src0, v_maxval4), vceqq_s32(v_src0, v_minval4));
            uint32x4_t v_mask1 = vorrq_u32(vceqq_s32(v_src1, v_maxval4), vceqq_s32(v_src1, v_minval4));
    
            for (; js < roiw_base; js += step_base, jd -= step_base)
        {
            prefetch(src + js);
    }
    
    namespace tesseract {
    }
    
    #include <cstdint>
#include <vector>
    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
    SIMDDetect SIMDDetect::detector;
    
    grpc_byte_buffer* CoreCodegen::grpc_raw_byte_buffer_create(grpc_slice* slice,
                                                           size_t nslices) {
  return ::grpc_raw_byte_buffer_create(slice, nslices);
}
    
    size_t TraceContextSerialize(const ::opencensus::trace::SpanContext& context,
                             char* tracing_buf, size_t tracing_buf_size) {
  GrpcTraceContext trace_ctxt(context);
  return TraceContextEncoding::Encode(trace_ctxt, tracing_buf,
                                      tracing_buf_size);
}
    
    namespace grpc {
    }
    
    
    {  TraceContextEncoding() = delete;
  TraceContextEncoding(const TraceContextEncoding&) = delete;
  TraceContextEncoding(TraceContextEncoding&&) = delete;
  TraceContextEncoding operator=(const TraceContextEncoding&) = delete;
  TraceContextEncoding operator=(TraceContextEncoding&&) = delete;
};
    
    const ViewDescriptor& ClientReceivedBytesPerRpcCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/client/received_bytes_per_rpc/cumulative')
          .set_measure(kRpcClientReceivedBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    Status ProtoServerReflection::GetFileContainingExtension(
    ServerContext* context, const ExtensionRequest* request,
    ServerReflectionResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, const grpc::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const grpc::string& name, const grpc::string& value)
        : name_(name), value_(value) {}
    }
    }
    
    public:
	virtual ~ConstraintBullet() {
		bulletdelete(constraint);
		constraint = NULL;
	}
    
    bool GodotCollisionDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsCollision(body0, body1);
}
    
    class RigidBodyBullet;
class btTypedConstraint;
    
    class RIDBullet : public RID_Data {
	RID self;
	BulletPhysicsServer *physicsServer;
    }
    
    #ifdef __cplusplus
extern 'C' {
#endif
    }
    
    
    {	ZipArchive *arch = ZipArchive::get_singleton();
	ERR_FAIL_COND(!arch);
	arch->close_handle(zfile);
	zfile = NULL;
};
    
    	} else if (p_string.get_slice_count('.') == 4) {
		// IPv4 (mapped to IPv6 internally)
		field16[5] = 0xffff;
		_parse_ipv4(p_string, 0, &field8[12]);
		valid = true;
    
    	FileAccess *file;
	int alignment;
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief base implementation of config reader
 */
class ConfigReaderBase {
 public:
  /*!
   * \brief get current name, called after Next returns true
   * \return current parameter name
   */
  inline const char *Name() const {
    return s_name_.c_str();
  }
  /*!
   * \brief get current value, called after Next returns true
   * \return current parameter value
   */
  inline const char *Val() const {
    return s_val_.c_str();
  }
  /*!
   * \brief move iterator to next position
   * \return true if there is value in next position
   */
  inline bool Next() {
    while (!this->IsEnd()) {
      GetNextToken(&s_name_);
      if (s_name_ == '=') return false;
      if (GetNextToken(&s_buf_) || s_buf_ != '=')  return false;
      if (GetNextToken(&s_val_) || s_val_ == '=')  return false;
      return true;
    }
    return false;
  }
  // called before usage
  inline void Init() {
    ch_buf_ = this->GetChar();
  }
    }
    }
    }
    
      void Load(dmlc::Stream* fi) {
    CHECK_EQ(fi->Read(&param, sizeof(param)), sizeof(param))
        << 'GBTree: invalid model file';
    trees.clear();
    trees_to_update.clear();
    for (int i = 0; i < param.num_trees; ++i) {
      std::unique_ptr<RegTree> ptr(new RegTree());
      ptr->Load(fi);
      trees.push_back(std::move(ptr));
    }
    tree_info.resize(param.num_trees);
    if (param.num_trees != 0) {
      CHECK_EQ(
          fi->Read(dmlc::BeginPtr(tree_info), sizeof(int) * param.num_trees),
          sizeof(int) * param.num_trees);
    }
  }
    
        // Setup Vulkan
    if (!glfwVulkanSupported())
    {
        printf('GLFW: Vulkan Not Supported\n');
        return 1;
    }
    uint32_t extensions_count = 0;
    const char** extensions = glfwGetRequiredInstanceExtensions(&extensions_count);
    SetupVulkan(extensions, extensions_count);
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // The data is first compressed with stb_compress() to reduce source code size,
// then encoded in Base85 to fit in a string so we can fit roughly 4 bytes of compressed data into 5 bytes of source code (suggested by @mmalex)
// (If we used 32-bits constants it would require take 11 bytes of source code to encode 4 bytes, and be endianness dependent)
// Note that even with compression, the output array is likely to be bigger than the binary file..
// Load compressed TTF fonts with ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF()
    
    void ImGui_ImplDX11_Shutdown()
{
    ImGui_ImplDX11_InvalidateDeviceObjects();
    if (g_pFactory) { g_pFactory->Release(); g_pFactory = NULL; }
    g_pd3dDevice = NULL;
    g_pd3dDeviceContext = NULL;
}
    
    bool ImGui_ImplDX9_Init(IDirect3DDevice9* device)
{
    g_pd3dDevice = device;
    return true;
}
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
        // Create The Image Views
    {
        VkImageViewCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        info.format = wd->SurfaceFormat.format;
        info.components.r = VK_COMPONENT_SWIZZLE_R;
        info.components.g = VK_COMPONENT_SWIZZLE_G;
        info.components.b = VK_COMPONENT_SWIZZLE_B;
        info.components.a = VK_COMPONENT_SWIZZLE_A;
        VkImageSubresourceRange image_range = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
        info.subresourceRange = image_range;
        for (uint32_t i = 0; i < wd->BackBufferCount; i++)
        {
            info.image = wd->BackBuffer[i];
            err = vkCreateImageView(device, &info, allocator, &wd->BackBufferView[i]);
            check_vk_result(err);
        }
    }
    
      // Returns an aggregate distance or similarity value between the baseline
  // image and the image in the last Compare() call (or the baseline image, if
  // Compare() was not called yet).
  // The interpretation of this aggregate value depends on the comparator used.
  virtual float distmap_aggregate() const = 0;
    
    namespace {
    }
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    #ifndef GUETZLI_DEBUG_PRINT_H_
#define GUETZLI_DEBUG_PRINT_H_
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    
    {}  // namespace guetzli

    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    #define arraysize(array) (sizeof(::benchmark::internal::ArraySizeHelper(array)))
    
    // The CHECK macro returns a std::ostream object that can have extra information
// written to it.
#ifndef NDEBUG
#define CHECK(b)                                                             \
  (b ? ::benchmark::internal::GetNullLogInstance()                           \
     : ::benchmark::internal::CheckHandler(#b, __FILE__, __func__, __LINE__) \
           .GetLog())
#else
#define CHECK(b) ::benchmark::internal::GetNullLogInstance()
#endif
    
    
    {  if (ret == 0)  // handle empty expansion
    return {};
  else if (static_cast<size_t>(ret) < size)
    return local_buff;
  else {
    // we did not provide a long enough buffer on our first attempt.
    size = (size_t)ret + 1;  // + 1 for the null byte
    std::unique_ptr<char[]> buff(new char[size]);
    ret = vsnprintf(buff.get(), size, msg, args);
    CHECK(ret > 0 && ((size_t)ret) < size);
    return buff.get();
  }
}
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
      // Calculate least square fitting parameter
  for (size_t i = 0; i < n.size(); ++i) {
    double gn_i = fitting_curve(n[i]);
    sigma_gn += gn_i;
    sigma_gn_squared += gn_i * gn_i;
    sigma_time += time[i];
    sigma_time_gn += time[i] * gn_i;
  }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
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
    
    double BenchmarkReporter::Run::GetAdjustedRealTime() const {
  double new_time = real_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}