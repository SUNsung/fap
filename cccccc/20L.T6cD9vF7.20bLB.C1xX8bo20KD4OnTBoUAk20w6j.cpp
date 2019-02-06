
        
            const auto* shapes_and_types = c.output_handle_shapes_and_types(i);
    if (shapes_and_types != nullptr) {
      auto* out_handle_data = out.mutable_handle_data();
      out_handle_data->set_is_set(true);
      for (const auto& p : *shapes_and_types) {
        auto* out_shape_and_type = out_handle_data->add_shape_and_type();
        ProtoFromShapeHandle(p.shape, &c, out_shape_and_type->mutable_shape());
        out_shape_and_type->set_dtype(p.dtype);
      }
    }
    
    // hidden_ops should be a list of Op names that should get a leading _
// in the output. Prints the output to stdout.
// Optional fourth argument is the name of the original C++ source file
// where the ops' REGISTER_OP() calls reside.
void PrintPythonOps(const OpList& ops, const ApiDefMap& api_defs,
                    const std::vector<string>& hidden_ops, bool require_shapes,
                    const string& source_file_name = '');
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
    struct DefaultCache {
  llvm::sys::Mutex Mux;
  CacheImpl::CallBacks CBs;
  llvm::DenseMap<DefaultCacheKey, void *> Entries;
    }
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
      struct IndentScope {
    TreePrinter *Printer;
    size_t OldLength;
    IndentScope(TreePrinter *printer, StringRef indent)
        : Printer(printer), OldLength(printer->Indent.size()) {
      Printer->Indent += indent;
    }
    ~IndentScope() { Printer->Indent.resize(OldLength); }
  };
    
      static CFPointeeInfo forInvalid() {
    CFPointeeInfo info;
    info.IsValid = false;
    return info;
  }
    
      // Instance members
  IAMResult(DeclName declName, unsigned selfIdx, EffectiveClangContext dc)
      : name(declName), selfIndex(selfIdx), effectiveDC(dc) {}
    
    
    {  return encodePunycode(InputCodePoints, OutPunycode);
}
    
    const char *Action::getClassName(Kind AC) {
  switch (AC) {
  case Kind::Input:  return 'input';
  case Kind::CompileJob:  return 'compile';
  case Kind::InterpretJob:  return 'interpret';
  case Kind::BackendJob:  return 'backend';
  case Kind::MergeModuleJob:  return 'merge-module';
  case Kind::ModuleWrapJob:  return 'modulewrap';
  case Kind::AutolinkExtractJob:  return 'swift-autolink-extract';
  case Kind::REPLJob:  return 'repl';
  case Kind::LinkJob:  return 'link';
  case Kind::GenerateDSYMJob:  return 'generate-dSYM';
  case Kind::VerifyDebugInfoJob:  return 'verify-debug-info';
  case Kind::GeneratePCHJob:  return 'generate-pch';
  }
    }
    
      bool shouldProvideRPathToLinker() const override;
    
    
    {    QString appName;
    QIcon appIcon;
    QIcon trayAndWindowIcon;
    QString titleAddText;
};
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    static void secp256k1_hmac_sha256_finalize(secp256k1_hmac_sha256_t *hash, unsigned char *out32) {
    unsigned char temp[32];
    secp256k1_sha256_finalize(&hash->inner, temp);
    secp256k1_sha256_write(&hash->outer, temp, 32);
    memset(temp, 0, 32);
    secp256k1_sha256_finalize(&hash->outer, out32);
}
    
    #include <boost/test/unit_test.hpp>
    
    namespace bech32
{
    }
    
    #include <crypto/common.h>
#include <crypto/chacha20.h>
    
    void
RuleBasedCollator::writeIdenticalLevel(const UChar *s, const UChar *limit,
                                       SortKeyByteSink &sink, UErrorCode &errorCode) const {
    // NFD quick check
    const UChar *nfdQCYesLimit = data->nfcImpl.decompose(s, limit, NULL, errorCode);
    if(U_FAILURE(errorCode)) { return; }
    sink.Append(Collation::LEVEL_SEPARATOR_BYTE);
    UChar32 prev = 0;
    if(nfdQCYesLimit != s) {
        prev = u_writeIdenticalLevelRun(prev, s, (int32_t)(nfdQCYesLimit - s), sink);
    }
    // Is there non-NFD text?
    int32_t destLengthEstimate;
    if(limit != NULL) {
        if(nfdQCYesLimit == limit) { return; }
        destLengthEstimate = (int32_t)(limit - nfdQCYesLimit);
    } else {
        // s is NUL-terminated
        if(*nfdQCYesLimit == 0) { return; }
        destLengthEstimate = -1;
    }
    UnicodeString nfd;
    data->nfcImpl.decompose(nfdQCYesLimit, limit, nfd, destLengthEstimate, errorCode);
    u_writeIdenticalLevelRun(prev, nfd.getBuffer(), nfd.length(), sink);
}
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        const ScientificNumberFormatter &other)
        : UObject(other),
          fPreExponent(other.fPreExponent),
          fDecimalFormat(NULL),
          fStyle(NULL),
          fStaticSets(other.fStaticSets) {
    fDecimalFormat = static_cast<DecimalFormat *>(
            other.fDecimalFormat->clone());
    fStyle = other.fStyle->clone();
}
    
    #if !UCONFIG_NO_FORMATTING
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
        /**
     * Get maximum significant digits. 0 means no minimum.
     */
    int32_t getMin() const {
        return fMin;
    }
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
    int32_t StandardPlural::indexOrNegativeFromString(const UnicodeString &keyword) {
    switch (keyword.length()) {
    case 3:
        if (keyword.compare(gOne, 3) == 0) {
            return ONE;
        } else if (keyword.compare(gTwo, 3) == 0) {
            return TWO;
        } else if (keyword.compare(gFew, 3) == 0) {
            return FEW;
        }
        break;
    case 4:
        if (keyword.compare(gMany, 4) == 0) {
            return MANY;
        } else if (keyword.compare(gZero, 4) == 0) {
            return ZERO;
        }
        break;
    case 5:
        if (keyword.compare(gOther, 5) == 0) {
            return OTHER;
        }
        break;
    default:
        break;
    }
    return -1;
}
    
      /**
   * @brief Get the query invocation counter.
   *
   * This method returns query invocation counter. If the query is a new query,
   * 0 is returned. Otherwise the counter associated with the query is retrieved
   * from database and incremented by 1.
   *
   * @param new_query Whether or not the query is new.
   *
   * @return the query invocation counter.
   */
  uint64_t getQueryCounter(bool new_query) const;
    
    namespace osquery {
    }
    
    /**
 * @brief A single typed row from a database query
 *
 * RowTyped is a simple map where individual column names are keys, which map to
 * the Row's respective type-variant value
 */
using RowTyped = std::map<std::string, RowDataTyped>;
    
    void ExtensionProcessor::process_shutdown(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext('Extension.shutdown', callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, 'Extension.shutdown');
    }
    
    // getSerializedQueryData() return an std::pair where pair->first is a string
// which should serialize to pair->second. pair->second should
// deserialize to pair->first. getSerializedQueryDataWithColumnOrder
// returns a pair where pair->second is a tree that has a repeated column and
// the child nodes are not in alphabetical order
std::pair<JSON, QueryData> getSerializedQueryData();
std::pair<JSON, QueryData> getSerializedQueryDataWithColumnOrder();
std::pair<std::string, QueryData> getSerializedQueryDataJSON();
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
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
    
        ALLEGRO_MOUSE_STATE mouse;
    if (keys.display == g_Display)
    {
        al_get_mouse_state(&mouse);
        io.MousePos = ImVec2((float)mouse.x, (float)mouse.y);
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    }
    
        // Create Framebuffers
    int w, h;
    glfwGetFramebufferSize(window, &w, &h);
    glfwSetFramebufferSizeCallback(window, glfw_resize_callback);
    ImGui_ImplVulkanH_WindowData* wd = &g_WindowData;
    SetupVulkanWindowData(wd, surface, w, h);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    
    {        // Create texture view
        D3D10_SHADER_RESOURCE_VIEW_DESC srv_desc;
        ZeroMemory(&srv_desc, sizeof(srv_desc));
        srv_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srv_desc.ViewDimension = D3D10_SRV_DIMENSION_TEXTURE2D;
        srv_desc.Texture2D.MipLevels = desc.MipLevels;
        srv_desc.Texture2D.MostDetailedMip = 0;
        g_pd3dDevice->CreateShaderResourceView(pTexture, &srv_desc, &g_pFontTextureView);
        pTexture->Release();
    }
    
    
    {    // Create texture sampler
    {
        D3D11_SAMPLER_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.MipLODBias = 0.f;
        desc.ComparisonFunc = D3D11_COMPARISON_ALWAYS;
        desc.MinLOD = 0.f;
        desc.MaxLOD = 0.f;
        g_pd3dDevice->CreateSamplerState(&desc, &g_pFontSampler);
    }
}
    
    // GLFW
#include <GLFW/glfw3.h>
#ifdef _WIN32
#undef APIENTRY
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>   // for glfwGetWin32Window
#endif
#define GLFW_HAS_WINDOW_TOPMOST     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ GLFW_FLOATING
#define GLFW_HAS_WINDOW_HOVERED     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ GLFW_HOVERED
#define GLFW_HAS_WINDOW_ALPHA       (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwSetWindowOpacity
#define GLFW_HAS_PER_MONITOR_DPI    (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwGetMonitorContentScale
#define GLFW_HAS_VULKAN             (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ glfwCreateWindowSurface
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
        // Set OS mouse position if requested (rarely used, only when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
    if (io.WantSetMousePos)
        SDL_WarpMouseInWindow(g_Window, (int)io.MousePos.x, (int)io.MousePos.y);
    else
        io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);