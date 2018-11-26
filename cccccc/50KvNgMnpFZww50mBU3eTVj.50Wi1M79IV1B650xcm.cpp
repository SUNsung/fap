
        
        #include <stdexcept>
#include <iterator>
#include <cstdio>
#include <thread>
#include <vector>
#include <type_traits>
#include <string>
#include <atomic>
#include <algorithm>
#include <exception>
    
    #include <vector>
#include <memory>
    
    std::string Config::IniName(const std::string& config,
                            bool prepend_hhvm /* = true */) {
  std::string out = '';
  if (prepend_hhvm) {
    out += 'hhvm.';
  }
  size_t idx = 0;
  for (auto& c : config) {
    // This is the first or last character
    if (idx == 0 || idx == config.length() - 1) {
      out += tolower(c);
    } else if (!isalpha(c)) {
      // Any . or _ or numeral is just output with no special behavior
      out += c;
    } else {
      if (isupper(c) && isupper(config[idx - 1 ]) && islower(config[idx + 1])) {
      // Handle something like 'SSLPort', and c = 'P', which will then put
      // the underscore between the 'L' and 'P'
        out += '_';
        out += tolower(c);
      } else if (islower(c) && isupper(config[idx + 1])) {
      // Handle something like 'PathDebug', and c = 'h', which will then put
      // the underscore between the 'h' and 'D'
        out += tolower(c);
        out += '_';
      } else {
      // Otherwise we just output as lower
        out += tolower(c);
      }
    }
    idx++;
  }
    }
    
    /**
 * Parts of the language can individually be made stricter, warning or
 * erroring when there's dangerous/unintuive usage; for example,
 * array_fill_keys() with non-int/string keys: Hack.Lang.StrictArrayFillKeys
 */
enum class HackStrictOption {
  OFF, // PHP5 behavior
  WARN,
  ON
};
    
      char* comma = (char*)memchr(data, ',', data_len);
  if (comma == nullptr) {
    raise_warning('rfc2397: missing comma');
    return nullptr;
  }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {}

    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
      // Resets the SplitEvaluator to the state it was in after the Init was called
  virtual void Reset();
    
    // DirectX data
static ID3D10Device*            g_pd3dDevice = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D10Buffer*            g_pVB = NULL;
static ID3D10Buffer*            g_pIB = NULL;
static ID3D10Blob*              g_pVertexShaderBlob = NULL;
static ID3D10VertexShader*      g_pVertexShader = NULL;
static ID3D10InputLayout*       g_pInputLayout = NULL;
static ID3D10Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob*              g_pPixelShaderBlob = NULL;
static ID3D10PixelShader*       g_pPixelShader = NULL;
static ID3D10SamplerState*      g_pFontSampler = NULL;
static ID3D10ShaderResourceView*g_pFontTextureView = NULL;
static ID3D10RasterizerState*   g_pRasterizerState = NULL;
static ID3D10BlendState*        g_pBlendState = NULL;
static ID3D10DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
        if (pEvent->m_Pressed == 1)
    {
        if (pEvent->m_Button == S3E_POINTER_BUTTON_LEFTMOUSE)
            g_MousePressed[0] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_RIGHTMOUSE)
            g_MousePressed[1] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MIDDLEMOUSE)
            g_MousePressed[2] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELUP)
            io.MouseWheel += pEvent->m_y;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELDOWN)
            io.MouseWheel += pEvent->m_y;
    }
    
        // Create texture
    atlas->TexHeight = (atlas->Flags & ImFontAtlasFlags_NoPowerOfTwoHeight) ? (atlas->TexHeight + 1) : ImUpperPowerOfTwo(atlas->TexHeight);
    atlas->TexUvScale = ImVec2(1.0f / atlas->TexWidth, 1.0f / atlas->TexHeight);
    atlas->TexPixelsAlpha8 = (unsigned char*)ImGui::MemAlloc(atlas->TexWidth * atlas->TexHeight);
    memset(atlas->TexPixelsAlpha8, 0, atlas->TexWidth * atlas->TexHeight);
    
    // Define attributes of all API symbols declarations (e.g. for DLL under Windows)
// IMGUI_API is used for core imgui functions, IMGUI_IMPL_API is used for the default bindings files (imgui_impl_xxx.h)
#ifndef IMGUI_API
#define IMGUI_API
#endif
#ifndef IMGUI_IMPL_API
#define IMGUI_IMPL_API              IMGUI_API
#endif
    
        int vert_start_idx = VtxBuffer.Size;
    PathRect(a, b, rounding, rounding_corners);
    PathFillConvex(col);
    int vert_end_idx = VtxBuffer.Size;
    ImGui::ShadeVertsLinearUV(this, vert_start_idx, vert_end_idx, a, b, uv_a, uv_b, true);
    
        if (g.ActiveId == id)
    {
        const char* apply_new_text = NULL;
        int apply_new_text_length = 0;
        if (cancel_edit)
        {
            // Restore initial value. Only return true if restoring to the initial value changes the current buffer contents.
            if (is_editable && strcmp(buf, edit_state.InitialText.Data) != 0)
            {
                apply_new_text = edit_state.InitialText.Data;
                apply_new_text_length = edit_state.InitialText.Size - 1;
            }
        }
    }
    
    #pragma once
    
    /**
 * This file is supposed to be included from within
 * FBVectorBenchmark. Do not use otherwise.
 */
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      'addWithPriority() is not implemented for this Executor');
}
    
        template <
        typename OtherExecutor,
        typename = typename std::enable_if<
            std::is_convertible<OtherExecutor*, ExecutorT*>::value>::type>
    KeepAlive& operator=(KeepAlive<OtherExecutor>&& other) {
      return *this = KeepAlive(std::move(other));
    }
    
      /**
   * (Re-)Seed an existing RNG with a good seed.
   *
   * Note that you should usually use ThreadLocalPRNG unless you need
   * reproducibility (such as during a test), in which case you'd want
   * to create a RNG with a good seed in production, and seed it yourself
   * in test.
   */
  template <class RNG = DefaultGenerator, class /* EnableIf */ = ValidRNG<RNG>>
  static void seed(RNG& rng);
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    /**
 * VirtualExecutor implements a light-weight view onto existing Executor.
 *
 * Multiple VirtualExecutors can be backed by a single Executor.
 *
 * VirtualExecutor's destructor blocks until all tasks scheduled through it are
 * complete. Executor's destructor also blocks until all VirtualExecutors
 * backed by it are released.
 */
class VirtualExecutor : public DefaultKeepAliveExecutor {
  auto wrapFunc(Func f) {
    class FuncAndKeepAlive {
     public:
      FuncAndKeepAlive(Func&& f, VirtualExecutor* executor)
          : keepAlive_(getKeepAliveToken(executor)), f_(std::move(f)) {}
    }
    }
    }
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }