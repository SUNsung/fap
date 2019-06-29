
        
        
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
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
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
      void NoWriteTestReopenWithFault(ResetMethod reset_method) {
    CloseDB();
    ResetDBState(reset_method);
    ASSERT_OK(OpenDB());
  }
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
        void combine4(const Size2D &size,
                  const s64 * src0Base, ptrdiff_t src0Stride,
                  const s64 * src1Base, ptrdiff_t src1Stride,
                  const s64 * src2Base, ptrdiff_t src2Stride,
                  const s64 * src3Base, ptrdiff_t src3Stride,
                  s64 * dstBase, ptrdiff_t dstStride);
    
    
    {            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_src = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            int16x8_t v_dst = vld1q_s16(dst + j);
            int16x4_t v_srclo = vget_low_s16(v_src), v_srchi = vget_high_s16(v_src);
            v_dst = vcombine_s16(vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srclo, v_srclo), shift), vget_low_s16(v_dst))),
                                 vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srchi, v_srchi), shift), vget_high_s16(v_dst))));
            vst1q_s16(dst + j, v_dst);
        }
    
                int32x4_t va = vaddq_s32(lane0a, lane2a);
            int32x4_t vb = vaddq_s32(lane0b, lane2b);
            int32x4_t vc = vaddq_s32(lane0c, lane2c);
            int32x4_t wa = vaddq_s32(va, lane1a);
            int32x4_t wb = vaddq_s32(vb, lane1b);
            int32x4_t wc = vaddq_s32(vc, lane1c);
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
        q0 = vmaxq_s16(q0, vminq_s16(ak8, d8_15));
    q1 = vminq_s16(q1, vmaxq_s16(bk8, d8_15));
    
            for ( ; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint16x8_t v_src0 = vld1q_u16(src + j), v_src1 = vld1q_u16(src + j + 8);
    }
    
        uint32x4_t prev = v_zero;
    size_t j = 0u;
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
        // Setup GLUT display function
    // We will also call ImGui_ImplGLUT_InstallFuncs() to get all the other functions installed for us,
    // otherwise it is possible to install our own functions and call the imgui_impl_glut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
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
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    
    {    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None || io.MouseDrawCursor)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        ::SetCursor(NULL);
    }
    else
    {
        // Show OS mouse cursor
        LPTSTR win32_cursor = IDC_ARROW;
        switch (imgui_cursor)
        {
        case ImGuiMouseCursor_Arrow:        win32_cursor = IDC_ARROW; break;
        case ImGuiMouseCursor_TextInput:    win32_cursor = IDC_IBEAM; break;
        case ImGuiMouseCursor_ResizeAll:    win32_cursor = IDC_SIZEALL; break;
        case ImGuiMouseCursor_ResizeEW:     win32_cursor = IDC_SIZEWE; break;
        case ImGuiMouseCursor_ResizeNS:     win32_cursor = IDC_SIZENS; break;
        case ImGuiMouseCursor_ResizeNESW:   win32_cursor = IDC_SIZENESW; break;
        case ImGuiMouseCursor_ResizeNWSE:   win32_cursor = IDC_SIZENWSE; break;
        case ImGuiMouseCursor_Hand:         win32_cursor = IDC_HAND; break;
        }
        ::SetCursor(::LoadCursor(NULL, win32_cursor));
    }
    return true;
}
    
      auto queryExists = [schedule = static_cast<const Schedule*>(schedule_.get())](
                         const std::string& query_name) {
    for (const auto& pack : schedule->packs_) {
      const auto& pack_queries = pack->getSchedule();
      if (pack_queries.count(query_name)) {
        return true;
      }
    }
    return false;
  };
    
    template <typename StorageType>
std::vector<std::string> InMemoryStorage<StorageType>::getKeys(
    const std::string& prefix) const {
  std::vector<std::string> result;
  for (const auto& iter : storage_) {
    if (boost::starts_with(iter.first, prefix)) {
      result.push_back(iter.first);
    }
  }
  return result;
}
    
    #ifdef __linux__
#include <sys/syscall.h>
    
    /**
 * @brief The request part of a plugin (registry item's) call.
 *
 * To use a plugin use Registry::call with a request and response.
 * The request portion is usually simple and normally includes an 'action'
 * key where the value is the action you want to perform on the plugin.
 * Refer to the registry's documentation for the actions supported by
 * each of its plugins.
 */
using PluginRequest = std::map<std::string, std::string>;
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    #include 'glog/logging.h'
    
    class SpeedLimitTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    speed_limit_.Clear();
    for (int i = 0; i < 100; ++i) {
      std::pair<double, double> sp;
      sp.first = i * 1.0;
      sp.second = (i % 2 == 0) ? 5.0 : 10.0;
      speed_limit_.AppendSpeedLimit(sp.first, sp.second);
    }
  }
    }
    
      const auto mat = kernel.kernel_matrix() / (2.0 * 1.0 / std::pow(0.1, 4));
  const auto offset = kernel.offset_matrix();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'