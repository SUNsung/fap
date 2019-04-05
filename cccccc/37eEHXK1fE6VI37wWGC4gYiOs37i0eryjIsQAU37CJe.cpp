
        
        protected Q_SLOTS:
    void accept();
    
        explicit reverse_lock(Lock& _lock) : lock(_lock) {
        _lock.unlock();
        _lock.swap(templock);
    }
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
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
    'movq $0xfffffffffffff,%%r15\n'
    }
    
        while (outlen > 0) {
        secp256k1_hmac_sha256_t hmac;
        int now = outlen;
        secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
        secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
        secp256k1_hmac_sha256_finalize(&hmac, rng->v);
        if (now > 32) {
            now = 32;
        }
        memcpy(out, rng->v, now);
        out += now;
        outlen -= now;
    }
    
    void test_ecdh_api(void) {
    /* Setup context that just counts errors */
    secp256k1_context *tctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_pubkey point;
    unsigned char res[32];
    unsigned char s_one[32] = { 0 };
    int32_t ecount = 0;
    s_one[31] = 1;
    }
    
    
    {    secp256k1_scalar_set_b32(&sec, seckey, &overflow);
    /* Fail if the secret key is invalid. */
    if (!overflow && !secp256k1_scalar_is_zero(&sec)) {
        unsigned char nonce32[32];
        unsigned int count = 0;
        secp256k1_scalar_set_b32(&msg, msg32, NULL);
        while (1) {
            ret = noncefp(nonce32, msg32, seckey, NULL, (void*)noncedata, count);
            if (!ret) {
                break;
            }
            secp256k1_scalar_set_b32(&non, nonce32, &overflow);
            if (!secp256k1_scalar_is_zero(&non) && !overflow) {
                if (secp256k1_ecdsa_sig_sign(&ctx->ecmult_gen_ctx, &r, &s, &sec, &msg, &non, &recid)) {
                    break;
                }
            }
            count++;
        }
        memset(nonce32, 0, 32);
        secp256k1_scalar_clear(&msg);
        secp256k1_scalar_clear(&non);
        secp256k1_scalar_clear(&sec);
    }
    if (ret) {
        secp256k1_ecdsa_recoverable_signature_save(signature, &r, &s, recid);
    } else {
        memset(signature, 0, sizeof(*signature));
    }
    return ret;
}
    
    /** Encode a Bech32 string. Returns the empty string in case of failure. */
std::string Encode(const std::string& hrp, const std::vector<uint8_t>& values);
    
    //
//   init()   common initialization for use by all constructors.
//            Initialize all fields, get the object into a consistent state.
//            This must be done even when the initial status shows an error,
//            so that the object is initialized sufficiently well for the destructor
//            to run safely.
//
void RegexMatcher::init(UErrorCode &status) {
    fPattern           = NULL;
    fPatternOwned      = NULL;
    fFrameSize         = 0;
    fRegionStart       = 0;
    fRegionLimit       = 0;
    fAnchorStart       = 0;
    fAnchorLimit       = 0;
    fLookStart         = 0;
    fLookLimit         = 0;
    fActiveStart       = 0;
    fActiveLimit       = 0;
    fTransparentBounds = FALSE;
    fAnchoringBounds   = TRUE;
    fMatch             = FALSE;
    fMatchStart        = 0;
    fMatchEnd          = 0;
    fLastMatchEnd      = -1;
    fAppendPosition    = 0;
    fHitEnd            = FALSE;
    fRequireEnd        = FALSE;
    fStack             = NULL;
    fFrame             = NULL;
    fTimeLimit         = 0;
    fTime              = 0;
    fTickCounter       = 0;
    fStackLimit        = DEFAULT_BACKTRACK_STACK_CAPACITY;
    fCallbackFn        = NULL;
    fCallbackContext   = NULL;
    fFindProgressCallbackFn      = NULL;
    fFindProgressCallbackContext = NULL;
    fTraceDebug        = FALSE;
    fDeferredStatus    = status;
    fData              = fSmallData;
    fWordBreakItr      = NULL;
    }
    
    
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
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
     * Make this instance have no limit on significant digits.
     */
    void clear() {
        fMin = 0;
        fMax = INT32_MAX;
    }
    
    void
SimpleTimeZone::initTransitionRules(UErrorCode& status) {
    if (U_FAILURE(status)) {
        return;
    }
    if (transitionRulesInitialized) {
        return;
    }
    deleteTransitionRules();
    UnicodeString tzid;
    getID(tzid);
    }
    
        // if we see pattern character for UDAT_TIME_SEPARATOR_FIELD (none currently defined),
    // write out the time separator string. Leave support in for future definition.
    case UDAT_TIME_SEPARATOR_FIELD:
        {
            UnicodeString separator;
            appendTo += fSymbols->getTimeSeparatorString(separator);
        }
        break;
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_END
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const char *keyword);
    
    // Build with, e.g:
//   # cl.exe binary_to_compressed_c.cpp
//   # gcc binary_to_compressed_c.cpp
// You can also find a precompiled Windows binary in the binary/demo package available from https://github.com/ocornut/imgui
    
                // Blit rasterized pixels to our temporary buffer and keep a pointer to it.
            src_glyph.BitmapData = buf_bitmap_buffers.back() + buf_bitmap_current_used_bytes;
            buf_bitmap_current_used_bytes += bitmap_size_in_bytes;
            src_tmp.Font.BlitGlyph(ft_bitmap, src_glyph.BitmapData, src_glyph.Info.Width * 1, multiply_enabled ? multiply_table : NULL);
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int display_w, display_h;
    SDL_GetWindowSize(window, &w, &h);
    SDL_GL_GetDrawableSize(window, &display_w, &display_h);
    io.DisplaySize = ImVec2((float)w, (float)h);
    if (w > 0 && h > 0)
        io.DisplayFramebufferScale = ImVec2((float)display_w / w, (float)display_h / h);
    
            // Rendering
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    #include 'gtest/gtest.h'
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
    TEST(ByteTest, CopyConstructor) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  Byte another_value(value);
  EXPECT_EQ(another_value.to_hex_string(), value.to_hex_string());
  EXPECT_EQ(another_value.to_binary_string(), value.to_binary_string());
}
    
    #include 'modules/drivers/radar/conti_radar/protocol/radar_state_201.h'
    
    TEST_F(GemMessageManagerTest, GetSendProtocols) {
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Accelcmd67::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakecmd6b::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Globalcmd69::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Headlightcmd76::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Horncmd78::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Shiftcmd65::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringcmd6d::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Turncmd63::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Wipercmd90::ID) != nullptr);
}
    
      Byte t1(bytes + 7);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;