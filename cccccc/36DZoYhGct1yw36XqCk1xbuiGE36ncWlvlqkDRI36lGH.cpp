bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    namespace atom {
    }
    
     private:
  std::string GetFeedURL();
  void SetFeedURL(mate::Arguments* args);
  void QuitAndInstall();
    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
    class Screen : public mate::EventEmitter<Screen>,
               public display::DisplayObserver {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    namespace atom {
    }
    
    #include 'atom/browser/api/event.h'
    
      // content::WebContentsObserver implementations:
  void RenderFrameDeleted(content::RenderFrameHost* rfh) override;
  void RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                              content::RenderFrameHost* new_rfh) override;
  void FrameDeleted(content::RenderFrameHost* rfh) override;
    
    
    {}  // namespace atom
    
    namespace content {
struct MainFunctionParams;
}
    
    #ifndef SECP256K1_GROUP_IMPL_H
#define SECP256K1_GROUP_IMPL_H
    
    int secp256k1_ecdsa_recover(const secp256k1_context* ctx, secp256k1_pubkey *pubkey, const secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32) {
    secp256k1_ge q;
    secp256k1_scalar r, s;
    secp256k1_scalar m;
    int recid;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_context_is_built(&ctx->ecmult_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(pubkey != NULL);
    }
    
        // Special handling for null case
    // (needed because string comparison reads the null as end-of-string)
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(Null=\'\\0\')'));
    auto ret = ParseTorReplyMapping('Null=\'\\0\'');
    BOOST_CHECK_EQUAL(ret.size(), 1U);
    auto r_it = ret.begin();
    BOOST_CHECK_EQUAL(r_it->first, 'Null');
    BOOST_CHECK_EQUAL(r_it->second.size(), 1U);
    BOOST_CHECK_EQUAL(r_it->second[0], '\0');
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    typedef std::map<std::string,std::string> KeyMap;
    
    namespace nw {
    }
    
      base::RunLoop run_loop_;
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    
/*
 * Given sines and cosines, tells if A's angle is less than B's on -Pi, Pi
 * (in other words, is A 'righter' than B)
 */
bool IsRighter(float32 sinA, float32 cosA, float32 sinB, float32 cosB){
	if (sinA < 0){
		if (sinB > 0 || cosA <= cosB) return true;
		else return false;
	} else {
		if (sinB < 0 || cosA <= cosB) return false;
		else return true;
	}
}
    
    	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmapImages,
		int *a_piEncodingTime_ms, 
		bool a_bVerboseOutput)
	{
		auto mipWidth = a_uiSourceWidth;
		auto mipHeight = a_uiSourceHeight;
		int totalEncodingTime = 0;
		for(unsigned int mip = 0; mip < a_uiMaxMipmaps && mipWidth >= 1 && mipHeight >= 1; mip++)
		{
			float* pImageData = nullptr;
			float* pMipImage = nullptr;
    }
    }
    
    		inline bool HasPunchThroughPixels(void)
		{
			return m_boolPunchThroughPixels;
		}
    
    		m_pafrgbaSource = nullptr;
    
    		ColorFloatRGBA frgbaColor1;
		ColorFloatRGBA frgbaColor2;
    
    
void Clipper::ProcessIntersectList()
{
  for (size_t i = 0; i < m_IntersectList.size(); ++i)
  {
    IntersectNode* iNode = m_IntersectList[i];
    {
      IntersectEdges( iNode->Edge1, iNode->Edge2, iNode->Pt);
      SwapPositionsInAEL( iNode->Edge1 , iNode->Edge2 );
    }
    delete iNode;
  }
  m_IntersectList.clear();
}
//------------------------------------------------------------------------------
    
    //forward declarations (for stuff used internally) ...
struct TEdge;
struct IntersectNode;
struct LocalMinimum;
struct OutPt;
struct OutRec;
struct Join;
    
    #if defined (__cplusplus)
extern 'C' {
#endif
    }
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    Status ProtoServerReflection::ServerReflectionInfo(
    ServerContext* context,
    ServerReaderWriter<ServerReflectionResponse, ServerReflectionRequest>*
        stream) {
  ServerReflectionRequest request;
  ServerReflectionResponse response;
  Status status;
  while (stream->Read(&request)) {
    switch (request.message_request_case()) {
      case ServerReflectionRequest::MessageRequestCase::kFileByFilename:
        status = GetFileByName(context, request.file_by_filename(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::kFileContainingSymbol:
        status = GetFileContainingSymbol(
            context, request.file_containing_symbol(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kFileContainingExtension:
        status = GetFileContainingExtension(
            context, &request.file_containing_extension(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kAllExtensionNumbersOfType:
        status = GetAllExtensionNumbers(
            context, request.all_extension_numbers_of_type(),
            response.mutable_all_extension_numbers_response());
        break;
      case ServerReflectionRequest::MessageRequestCase::kListServices:
        status =
            ListService(context, response.mutable_list_services_response());
        break;
      default:
        status = Status(StatusCode::UNIMPLEMENTED, '');
    }
    }
    }
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const grpc::string& name, int value)
        : name_(name), value_(value) {}
    }
    }
    
    
    {}  // namespace
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  gpr_log(GPR_ERROR,
          'Platforms other than Linux, Windows, and MacOS are not supported.');
  return std::make_pair(busy, total);
}
    
      // PPC64 Instructions
  void add(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void addi(const Reg64& rt, const Reg64& ra, Immed imm);
  void addis(const Reg64& rt, const Reg64& ra, Immed imm);
  void addo(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void and(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void andi(const Reg64& ra, const Reg64& rs, Immed imm);
  void b(int32_t offset);
  void bl(int32_t offset);
  void bc(uint8_t bo, uint8_t bi, int16_t offset);
  void bcctr(uint8_t bo, uint8_t bi, uint16_t bh);
  void bctrl();
  void blr();
  void bctar(uint8_t bo, uint8_t bi, uint16_t bh);
  void bctarl(uint8_t bo, uint8_t bi, uint16_t bh);
  void cmp(uint16_t bf, bool l, const Reg64& ra, const Reg64& rb);
  void cmpi(uint16_t bf, bool l, const Reg64& ra, Immed imm);
  void cmpb(const Reg64& rs, const Reg64& ra, const Reg64& rb);
  void cmpl(uint16_t bf, bool l, const Reg64& ra, const Reg64& rb);
  void cmpli(uint16_t bf, bool l, const Reg64& ra, Immed imm);
  void divd(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void extsb(const Reg64& ra, const Reg64& rs, bool rc = 0);
  void extsh(const Reg64& ra, const Reg64& rs, bool rc = 0);
  void extsw(const Reg64& ra, const Reg64& rs, bool rc = 0);
  void fadd(const RegXMM& frt, const RegXMM& fra, const RegXMM& frb,
                                                                  bool rc = 0);
  void fsub(const RegXMM& frt, const RegXMM& fra, const RegXMM& frb,
                                                                  bool rc = 0);
  void fmul(const RegXMM& frt, const RegXMM& fra, const RegXMM& frc,
                                                                  bool rc = 0);
  void fdiv(const RegXMM& frt, const RegXMM& fra, const RegXMM& frb,
                                                                  bool rc = 0);
  void lfs(const RegXMM& frt, MemoryRef m) {
    assertx(Reg64(-1) == m.r.index);  // doesn't support base+index
    EmitDForm(48, rn(frt), rn(m.r.base), m.r.disp);
  }
  void lxvd2x(const RegXMM& Xt, const MemoryRef& m) {
    assertx(!m.r.disp);  // doesn't support immediate displacement
    EmitXX1Form(31, rn(Xt), rn(m.r.base), rn(m.r.index), 844, 0);
  }
  void lxvw4x(const RegXMM& Xt, const MemoryRef& m) {
    assertx(!m.r.disp);  // doesn't support immediate displacement
    EmitXX1Form(31, rn(Xt), rn(m.r.base), rn(m.r.index), 780, 0);
  }
  void isel(const Reg64& rt, const Reg64& ra, const Reg64& rb, uint8_t bc);
  void lbz(const Reg64& rt, MemoryRef m);
  void lbzx(const Reg64& rt, MemoryRef m);
  void ld(const Reg64& rt, MemoryRef m);
  void ldx(const Reg64& rt, MemoryRef m);
  void lhz(const Reg64& rt, MemoryRef m);
  void lhzx(const Reg64& rt, MemoryRef m);
  void lwz(const Reg64& rt, MemoryRef m);
  void lwzx(const Reg64& rt, MemoryRef m);
  void mfspr(const SpecialReg spr, const Reg64& rs);
  void mtspr(const SpecialReg spr, const Reg64& rs);
  void mulldo(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void neg(const Reg64& rt, const Reg64& ra, bool rc = 0);
  void nor(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void or(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void ori(const Reg64& ra, const Reg64& rs, Immed imm);
  void oris(const Reg64& ra, const Reg64& rs, Immed imm);
  void rldicl(const Reg64& ra, const Reg64& rs, uint8_t sh,
              uint8_t mb, bool rc = 0);
  void rldicr(const Reg64& ra, const Reg64& rs, uint8_t sh,
              uint8_t mb, bool rc = 0);
  void rlwinm(const Reg64& ra, const Reg64& rs, uint8_t sh, uint8_t mb,
              uint16_t me, bool rc = 0);
  void sld(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void srad(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void stb(const Reg64& rs, MemoryRef m);
  void stbx(const Reg64& rs, MemoryRef m);
  void stfs(const RegXMM& frt, MemoryRef m) {
    EmitDForm(52, rn(frt), rn(m.r.base), m.r.disp);
  }
  void sth(const Reg64& rs, MemoryRef m);
  void sthx(const Reg64& rs, MemoryRef m);
  void stw(const Reg64& rs, MemoryRef m);
  void stwx(const Reg64& rs, MemoryRef m);
  void std(const Reg64& rs, MemoryRef m);
  void stdu(const Reg64& rs, MemoryRef m);
  void stdx(const Reg64& rs, MemoryRef m);
  void stxvw4x(const RegXMM& xs, const MemoryRef& m) {
    EmitXX1Form(31, rn(xs), rn(m.r.base), rn(m.r.index), 972, 0);
  }
  void subf(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void subfo(const Reg64& rt, const Reg64& ra, const Reg64& rb, bool rc = 0);
  void td(uint16_t to, const Reg64& ra, const Reg64& rb);
  void tw(uint16_t to, const Reg64& ra, const Reg64& rb);
  void xor(const Reg64& ra, const Reg64& rs, const Reg64& rb, bool rc = 0);
  void xscvdpuxds(const RegXMM& xt, const RegXMM& xb) {
    //TODO(rcardoso): bx tx bits
    EmitXX2Form(60, rn(xt), 0, rn(xb), 328, 0, 0);
  }
  void xvdivdp(const RegXMM& xt,  const RegXMM& xa, const RegXMM& xb) {
    EmitXX3Form(60, rn(xt), rn(xa), rn(xb), 56,  0, 0 ,0);
  }
  void xvdivsp(const RegXMM& xt,  const RegXMM& xa, const RegXMM& xb) {
    EmitXX3Form(60, rn(xt), rn(xa), rn(xb), 24, 0, 0 ,0);
  }
    
    namespace HPHP {
    }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    #include <string>
#include <utility>
#include <vector>
    
    /**
 * For php://output, a simple wrapper of g_context->out().
 */
struct OutputFile : File {
  DECLARE_RESOURCE_ALLOCATION(OutputFile);
    }
    
    #include 'hphp/util/perf-event.h'
    
    
    {
    {        return retNode;
    }
};
    
        ListNode* curNode = head;
    while(curNode != NULL){
        ListNode* delNode = curNode;
        curNode = curNode->next;
        delete delNode;
    }
    
    /// Linear Scan
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    }
    }
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    using namespace std;
    
            queue<TreeNode*> q;
        q.push(root);
        int level_num = 1;
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    int main() {
    }
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    
    {
    {        return res;
    }
};
    
    void ImDrawList::AddImageQuad(ImTextureID user_texture_id, const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, const ImVec2& uv_a, const ImVec2& uv_b, const ImVec2& uv_c, const ImVec2& uv_d, ImU32 col)
{
    if ((col & IM_COL32_A_MASK) == 0)
        return;
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    
    {    // Create texture sampler
    {
        D3D10_SAMPLER_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Filter = D3D10_FILTER_MIN_MAG_MIP_LINEAR;
        desc.AddressU = D3D10_TEXTURE_ADDRESS_WRAP;
        desc.AddressV = D3D10_TEXTURE_ADDRESS_WRAP;
        desc.AddressW = D3D10_TEXTURE_ADDRESS_WRAP;
        desc.MipLODBias = 0.f;
        desc.ComparisonFunc = D3D10_COMPARISON_ALWAYS;
        desc.MinLOD = 0.f;
        desc.MaxLOD = 0.f;
        g_pd3dDevice->CreateSamplerState(&desc, &g_pFontSampler);
    }
}
    
    static void ImGui_ImplDX12_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
        // Backup the DX9 state
    IDirect3DStateBlock9* d3d9_state_block = NULL;
    if (g_pd3dDevice->CreateStateBlock(D3DSBT_ALL, &d3d9_state_block) < 0)
        return;
    
            // Compute multiply table if requested
        const bool multiply_enabled = (cfg.RasterizerMultiply != 1.0f);
        unsigned char multiply_table[256];
        if (multiply_enabled)
            ImFontAtlasBuildMultiplyCalcLookupTable(multiply_table, cfg.RasterizerMultiply);