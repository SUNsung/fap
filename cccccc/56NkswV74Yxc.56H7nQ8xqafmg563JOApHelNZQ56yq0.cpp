
        
        /* QComboBox that can be used with QDataWidgetMapper to select ordinal values from a model. */
class QValueComboBox : public QComboBox
{
    Q_OBJECT
    }
    
    QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    
    {    // Inputs that are effectively invalid under the target grammar.
    // PROTOCOLINFO accepts an OtherLine that is just an OptArguments, which
    // would make these inputs valid. However,
    // - This parser is never used in that situation, because the
    //   SplitTorReplyLine parser enables OtherLine to be skipped.
    // - Even if these were valid, an OptArguments contains no semantic data,
    //   so there is no point in parsing it.
    CheckParseTorReplyMapping('ARGS', {});
    CheckParseTorReplyMapping('MORE ARGS', {});
    CheckParseTorReplyMapping('MORE  ARGS', {});
    CheckParseTorReplyMapping('EVEN more=ARGS', {});
    CheckParseTorReplyMapping('EVEN+more ARGS', {});
}
    
        typedef int8_t   s8;
    typedef uint8_t  u8;
    typedef int16_t  s16;
    typedef uint16_t u16;
    typedef int32_t  s32;
    typedef uint32_t u32;
    typedef float    f32;
    typedef int64_t  s64;
    typedef uint64_t u64;
    typedef double   f64;
    
    #include 'common.hpp'
#include 'vtransform.hpp'
    
            //horizontal convolution (last 3 lines)
        x = 0;
        f32* dstb = internal::getRowPtr(dstBase, dstStride, i-1);
        f32* dstc = internal::getRowPtr(dstBase, dstStride, i);
        for (; x <= colsn - 4; x += 4)
        {
            internal::prefetch(laneA + x + cn);
            internal::prefetch(laneB + x + cn);
            internal::prefetch(lanea + x + cn);
box3x3f32_horiz_ll:
            float32x4_t lane0a = vld1q_f32(laneA + x - cn);
            float32x4_t lane2a = vld1q_f32(laneA + x + cn);
            float32x4_t lane1a = vld1q_f32(laneA + x);
    }
    
    
    {
    {        vst1q_s32(_norm + j + 4, normh);
        vst1q_s32(_norm + j + 0, norml);
    }
    for (; j < colscn; j++)
        _norm[j] = std::abs(s32(_dx[j])) + std::abs(s32(_dy[j]));
}
    
    #define FILL_LINES2(macro,type) \
            macro##_LINE(type,0) \
            macro##_LINE(type,1)
#define FILL_LINES3(macro,type) \
            FILL_LINES2(macro,type) \
            macro##_LINE(type,2)
#define FILL_LINES4(macro,type) \
            FILL_LINES3(macro,type) \
            macro##_LINE(type,3)
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
                {
                // combine 3 'shifted' vectors
                t0 = vext_u8(tprev[2], tcurr[2], 7);
                t1 = tcurr[2];
                t2 = vext_u8(tcurr[2], tnext[2], 1);
    }
    
    #define INRANGEFUNC(T)                                       \
void inRange(const Size2D &_size,                            \
             const T * srcBase, ptrdiff_t srcStride,         \
             const T * rng1Base, ptrdiff_t rng1Stride,       \
             const T * rng2Base, ptrdiff_t rng2Stride,       \
             u8 * dstBase, ptrdiff_t dstStride)              \
{                                                            \
    internal::assertSupportedConfiguration();                \
    inRangeCheck(_size, srcBase, srcStride,                  \
                 rng1Base, rng1Stride, rng2Base, rng2Stride, \
                 dstBase, dstStride);                        \
}
#else
#define INRANGEFUNC(T)                                       \
void inRange(const Size2D &,                                 \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             u8 *, ptrdiff_t)                                \
{                                                            \
    internal::assertSupportedConfiguration();                \
}
#endif
    
    CallCredentials::~CallCredentials() {}
    
    class SecureAuthContext final : public AuthContext {
 public:
  SecureAuthContext(grpc_auth_context* ctx, bool take_ownership);
    }
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
      static void OnDoneRecvMessageCb(void* user_data, grpc_error* error);
    
    void RegisterOpenCensusViewsForExport() {
  ClientSentMessagesPerRpcCumulative().RegisterForExport();
  ClientSentBytesPerRpcCumulative().RegisterForExport();
  ClientReceivedMessagesPerRpcCumulative().RegisterForExport();
  ClientReceivedBytesPerRpcCumulative().RegisterForExport();
  ClientRoundtripLatencyCumulative().RegisterForExport();
  ClientServerLatencyCumulative().RegisterForExport();
    }
    
    int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPTSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);
    }
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP { struct UnitEmitter; }
namespace HPHP { namespace HHBBC {
    }
    }
    
    uint64_t* VMTOC::getAddr(int64_t index) {
  return reinterpret_cast<uint64_t*>(
      static_cast<intptr_t>(index) + getPtrVector());
}
    
      bool empty() const {
    return codeBlock.empty();
  }
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
    ALWAYS_INLINE
APCLocalArray* APCLocalArray::asApcArray(ArrayData* ad) {
  assertx(ad->kind() == kApcKind);
  return static_cast<APCLocalArray*>(ad);
}
    
      /**
   * Prefer the Bind() over the GetFoo() as it makes ini_get() work too.
   * These Bind()s should be used for ini settings. Specifically, they
   * should be used when the bound setting is needed before the main ini
   * processing pass. Unlike IniSetting::Bind, these bindings will fetch the
   * value in an ini setting if it is set otherwise it will use the defValue.
   */
  static void Bind(bool& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const bool defValue = false,
                   const bool prepend_hhvm = true);
  static void Bind(const char*& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char *defValue = nullptr,
                   const bool prepend_hhvm = true);
  static void Bind(std::string& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const std::string defValue = '',
                   const bool prepend_hhvm = true);
  static void Bind(char& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char defValue = 0, const bool prepend_hhvm = true);
  static void Bind(unsigned char& loc,const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const unsigned char defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(double& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const double defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(HackStrictOption& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name,
                   HackStrictOption def);
  static void
  Bind(std::vector<uint32_t>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<uint32_t>& defValue = std::vector<uint32_t>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::vector<std::string>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<std::string>& defValue = std::vector<std::string>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::unordered_map<std::string, int>& loc,
       const IniSettingMap& ini, const Hdf& config,
       const std::string& name = '',
       const std::unordered_map<std::string, int>& defValue =
         std::unordered_map<std::string, int>{},
       const bool prepend_hhvm = true);
  static void Bind(ConfigMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMap& defValue = ConfigMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigMapC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMapC& defValue = ConfigMapC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSet& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSet& defValue = ConfigSet(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSetC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSetC& defValue = ConfigSetC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigIMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigIMap& defValue = ConfigIMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigFlatSet& loc, const IniSettingMap& ini,
                   const Hdf& config, const std::string& name = '',
                   const ConfigFlatSet& defValue = ConfigFlatSet(),
                   const bool prepend_hhvm = true);
    
          if (section != ini_section) {
        ini_section = section;
        write(ini_fd, '[', 1);
        write(ini_fd, section.c_str(), section.length());
        write(ini_fd, ']\n', 2);
      }
    
    struct ResourceExceededException : FatalErrorException {
  ResourceExceededException(const std::string& msg, const Array& backtrace)
    : FatalErrorException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(ResourceExceededException);
};
    
    #ifndef incl_HPHP_FILE_UTIL_H_
#define incl_HPHP_FILE_UTIL_H_
    
          char *readptr = m_data->m_buffer + m_data->m_readpos;
      const char *eol = nullptr;
      const char *cr;
      const char *lf;
      cr = (const char *)memchr(readptr, '\r', avail);
      lf = (const char *)memchr(readptr, '\n', avail);
      if (cr && lf != cr + 1 && !(lf && lf < cr) && cr != &readptr[avail - 1]) {
        /* mac */
        eol = cr;
      } else if ((cr && lf && cr == lf - 1) || (lf)) {
        /* dos or unix endings */
        eol = lf;
      } else if (cr != &readptr[avail - 1]) {
        eol = cr;
      }
    
    inline Float8 operator+(Float8 lhs, const Float8& rhs) {
  lhs += rhs;
  return lhs;
}
inline Float8 operator-(Float8 lhs, const Float8& rhs) {
  lhs -= rhs;
  return lhs;
}
inline Float8 operator*(Float8 lhs, const Float8& rhs) {
  lhs *= rhs;
  return lhs;
}
inline Float8 operator/(Float8 lhs, const Float8& rhs) {
  lhs /= rhs;
  return lhs;
}
    
      // stores the row indices in the set
  std::vector<size_t> row_indices_;
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    
    {        if (!cfg.GlyphRanges)
            cfg.GlyphRanges = atlas->GetGlyphRangesDefault();
        for (const ImWchar* in_range = cfg.GlyphRanges; in_range[0] && in_range[ 1 ]; in_range += 2, total_ranges_count++) 
            total_glyphs_count += (in_range[1] - in_range[0]) + 1;
    }
    
        // Setup GLUT display function
    // We will also call ImGui_ImplFreeGLUT_InstallFuncs() to get all the other functions installed for us, 
    // otherwise it is possible to install our own functions and call the imgui_impl_freeglut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX10 sample code but remove this dependency you can: 
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL. 
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
        // Backup DX state that will be modified to restore it afterwards (unfortunately this is very ugly looking and verbose. Close your eyes!)
    struct BACKUP_DX11_STATE
    {
        UINT                        ScissorRectsCount, ViewportsCount;
        D3D11_RECT                  ScissorRects[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        D3D11_VIEWPORT              Viewports[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        ID3D11RasterizerState*      RS;
        ID3D11BlendState*           BlendState;
        FLOAT                       BlendFactor[4];
        UINT                        SampleMask;
        UINT                        StencilRef;
        ID3D11DepthStencilState*    DepthStencilState;
        ID3D11ShaderResourceView*   PSShaderResource;
        ID3D11SamplerState*         PSSampler;
        ID3D11PixelShader*          PS;
        ID3D11VertexShader*         VS;
        UINT                        PSInstancesCount, VSInstancesCount;
        ID3D11ClassInstance*        PSInstances[256], *VSInstances[256];   // 256 is max according to PSSetShader documentation
        D3D11_PRIMITIVE_TOPOLOGY    PrimitiveTopology;
        ID3D11Buffer*               IndexBuffer, *VertexBuffer, *VSConstantBuffer;
        UINT                        IndexBufferOffset, VertexBufferStride, VertexBufferOffset;
        DXGI_FORMAT                 IndexBufferFormat;
        ID3D11InputLayout*          InputLayout;
    };
    BACKUP_DX11_STATE old;
    old.ScissorRectsCount = old.ViewportsCount = D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE;
    ctx->RSGetScissorRects(&old.ScissorRectsCount, old.ScissorRects);
    ctx->RSGetViewports(&old.ViewportsCount, old.Viewports);
    ctx->RSGetState(&old.RS);
    ctx->OMGetBlendState(&old.BlendState, old.BlendFactor, &old.SampleMask);
    ctx->OMGetDepthStencilState(&old.DepthStencilState, &old.StencilRef);
    ctx->PSGetShaderResources(0, 1, &old.PSShaderResource);
    ctx->PSGetSamplers(0, 1, &old.PSSampler);
    old.PSInstancesCount = old.VSInstancesCount = 256;
    ctx->PSGetShader(&old.PS, old.PSInstances, &old.PSInstancesCount);
    ctx->VSGetShader(&old.VS, old.VSInstances, &old.VSInstancesCount);
    ctx->VSGetConstantBuffers(0, 1, &old.VSConstantBuffer);
    ctx->IAGetPrimitiveTopology(&old.PrimitiveTopology);
    ctx->IAGetIndexBuffer(&old.IndexBuffer, &old.IndexBufferFormat, &old.IndexBufferOffset);
    ctx->IAGetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset);
    ctx->IAGetInputLayout(&old.InputLayout);
    
    class ButteraugliComparator : public Comparator {
 public:
  ButteraugliComparator(const int width, const int height,
                        const std::vector<uint8_t>* rgb,
                        const float target_distance, ProcessStats* stats);
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    void Usage() {
  fprintf(stderr,
      'Guetzli JPEG compressor. Usage: \n'
      'guetzli [flags] input_filename output_filename\n'
      '\n'
      'Flags:\n'
      '  --verbose    - Print a verbose trace of all attempts to standard output.\n'
      '  --quality Q  - Visual quality to aim for, expressed as a JPEG quality value.\n'
      '                 Default value is %d.\n'
      '  --memlimit M - Memory limit in MB. Guetzli will fail if unable to stay under\n'
      '                 the limit. Default limit is %d MB.\n'
      '  --nomemlimit - Do not limit memory usage.\n', kDefaultJPEGQuality, kDefaultMemlimitMB);
  exit(1);
}
    
    
    {}  // namespace guetzli

    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }