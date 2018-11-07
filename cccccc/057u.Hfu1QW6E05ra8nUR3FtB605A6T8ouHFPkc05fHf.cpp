
        
        #ifdef CAROTENE_NEON
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = src0[0] | src1[0];
    }
};
    
            if ((stack_top - stack_bottom) + size.width > maxsize)
        {
            ptrdiff_t sz = (ptrdiff_t)(stack_top - stack_bottom);
            maxsize = maxsize * 3/2;
            stack.resize(maxsize);
            stack_bottom = &stack[0];
            stack_top = stack_bottom + sz;
        }
    
    #define SPLIT4ALPHA(sgn,bits) void split4(const Size2D &size,                                        \
                                          const sgn##bits * srcBase, ptrdiff_t srcStride,            \
                                          sgn##bits * dst3Base, ptrdiff_t dst3Stride,                \
                                          sgn##bits * dst1Base, ptrdiff_t dst1Stride)                \
{                                                                                                    \
    internal::assertSupportedConfiguration();                                                        \
    (void)size;                                                                                      \
    (void)srcBase;                                                                                   \
    (void)srcStride;                                                                                 \
    (void)dst3Base;                                                                                  \
    (void)dst3Stride;                                                                                \
    (void)dst1Base;                                                                                  \
    (void)dst1Stride;                                                                                \
}
    
                v_b = vmovl_u8(vget_high_u8(v_src0.val[0])),
            v_g = vmovl_u8(vget_high_u8(v_src0.val[1])),
            v_r = vmovl_u8(vget_high_u8(v_src0.val[2]));
            uint8x8_t v_gray1 = convertToGray(v_r, v_g, v_b, v_r2y, v_g2y, v_b2y);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, s16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
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
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vqmovn.s32 d26, q11                                    \n\t'
            'vqmovn.s32 d27, q12                                    \n\t'
            'vst1.16 {d26-d27}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
              'w' (vshift), 'w' (vscale)
            : 'd6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27'
        );
    }
})
#else
CVTS_FUNC(u16, s16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
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
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        vst1q_s16(_dst + i, vcombine_s16(vRes1, vRes2));
    }
})
#endif
    
    
    {            if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    template <class I>
struct is_random_access_iterator
{
private:
   typedef detail::is_random_imp_selector< ::boost::is_pointer<I>::value> selector;
   typedef typename selector::template rebind<I> bound_type;
   typedef typename bound_type::type answer;
public:
   BOOST_STATIC_CONSTANT(bool, value = answer::value);
};
    
    #if defined(BOOST_NO_STD_ITERATOR_TRAITS)
    
    
    {   // non-greedy, keep trying till we get a match:
   BidiIterator save_pos;
   do
   {
      while((position != last) && (count < rep->max) && !can_start(*position, rep->_map, mask_skip))
      {
         if(position != re_is_set_member(position, last, set, re.get_data(), icase))
         {
            ++position;
            ++count;
         }
         else
            return false;  // counldn't repeat even though it was the only option
      }
      if((rep->leading) && (rep->max == UINT_MAX))
         restart = position;
      pstate = rep->alt.p;
      save_pos = position;
      ++state_count;
      if(match_all_states())
         return true;
      if((count >= rep->max) || !m_can_backtrack)
         return false;
      position = save_pos;
      if(position == last)
         return false;
      if(position != re_is_set_member(position, last, set, re.get_data(), icase))
      {
         ++position;
         ++count;
      }
      else
      {
         return false;
      }
   }while(true);
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
    namespace boost{
    }
    
    
namespace boost{
    }
    
        // Setup window
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+Vulkan example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_VULKAN|SDL_WINDOW_RESIZABLE);
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_4_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreatePixelShader((DWORD*)g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize(), &g_pPixelShader) != S_OK)
            return false;
    }
    
    
    {        // update font info
        FT_Size_Metrics metrics = FreetypeFace->size->metrics;
        Info.PixelHeight = (uint32_t)pixel_height;
        Info.Ascender = (float)FT_CEIL(metrics.ascender);
        Info.Descender = (float)FT_CEIL(metrics.descender);
        Info.LineSpacing = (float)FT_CEIL(metrics.height);
        Info.LineGap = (float)FT_CEIL(metrics.height - metrics.ascender + metrics.descender);
        Info.MaxAdvanceWidth = (float)FT_CEIL(metrics.max_advance);
    }
    
            // Start the Dear ImGui frame
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
      void PopulateCache() {
    Random rnd(1);
    for (int64_t i = 0; i < FLAGS_cache_size; i++) {
      uint64_t rand_key = rnd.Next() % FLAGS_max_key;
      // Cast uint64* to be char*, data would be copied to cache
      Slice key(reinterpret_cast<char*>(&rand_key), 8);
      // do insert
      cache_->Insert(key, new char[10], 1, &deleter);
    }
  }
    
        virtual ~CompactionProxy() = default;
    virtual int level(size_t /*compaction_input_level*/ = 0) const {
      return compaction_->level();
    }
    virtual bool KeyNotExistsBeyondOutputLevel(
        const Slice& user_key, std::vector<size_t>* level_ptrs) const {
      return compaction_->KeyNotExistsBeyondOutputLevel(user_key, level_ptrs);
    }
    virtual bool bottommost_level() const {
      return compaction_->bottommost_level();
    }
    virtual int number_levels() const { return compaction_->number_levels(); }
    virtual Slice GetLargestUserKey() const {
      return compaction_->GetLargestUserKey();
    }
    virtual bool allow_ingest_behind() const {
      return compaction_->immutable_cf_options()->allow_ingest_behind;
    }
    virtual bool preserve_deletes() const {
      return compaction_->immutable_cf_options()->preserve_deletes;
    }
    
      auto verify_func = [&](int num_keys, bool if_sleep) {
    for (int i = 0; i < num_keys; i++) {
      ASSERT_NE('NOT_FOUND', Get(Key(kMaxKey + i)));
      if (i < num_keys / 10) {
        ASSERT_EQ('NOT_FOUND', Get(Key(i)));
      } else {
        ASSERT_NE('NOT_FOUND', Get(Key(i)));
      }
      if (if_sleep && i % 1000 == 0) {
        // Without it, valgrind may choose not to give another
        // thread a chance to run before finishing the function,
        // causing the test to be extremely slow.
        env_->SleepForMicroseconds(1);
      }
    }
  };
    
    /*
 * PosixDirectory
 */
    
    struct PosixMemoryMappedFileBuffer : public MemoryMappedFileBuffer {
  PosixMemoryMappedFileBuffer(void* _base, size_t _length)
      : MemoryMappedFileBuffer(_base, _length) {}
  virtual ~PosixMemoryMappedFileBuffer();
};
    
    int main() {
  Options options;
  options.create_if_missing = true;
  // Disable RocksDB background compaction.
  options.compaction_style = kCompactionStyleNone;
  // Small slowdown and stop trigger for experimental purpose.
  options.level0_slowdown_writes_trigger = 3;
  options.level0_stop_writes_trigger = 5;
  options.IncreaseParallelism(5);
  options.listeners.emplace_back(new FullCompactor(options));
    }
    
    struct TestCanParam {
  CANCardParameter conf;
  bool is_first_agent = false;
  int32_t recv_cnt = 0;
  int32_t recv_err_cnt = 0;
  int32_t send_cnt = 0;
  int32_t send_err_cnt = 0;
  int32_t send_lost_cnt = 0;
  int32_t send_time = 0;
  int32_t recv_time = 0;
  CanClient *can_client = nullptr;
    }
    
      if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0) {
    AERROR << 'recv can frame num not in range[0, ' << MAX_CAN_RECV_FRAME_LEN
           << '], frame_num:' << *frame_num;
    // TODO(Authors): check the difference of returning frame_num/error_code
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    class FakeCanClientTest : public ::testing::Test {
 public:
  static const int32_t FRAME_LEN = 10;
    }
    
      /**
   * @brief Initialize by a CAN client, message manager.
   * @param can_client The CAN client to use for receiving messages.
   * @param pt_manager The message manager which can parse and
   *        get protocol data by message id.
   * @param enable_log If log the essential information during running.
   * @return An error code indicating the status of this initialization.
   */
  common::ErrorCode Init(CanClient *can_client,
                         MessageManager<SensorType> *pt_manager,
                         bool enable_log);
    
      /**
   * @brief Check if the bit on a specified position is one.
   * @param pos The position of the bit to check.
   * @return If the bit on a specified position is one.
   */
  bool is_bit_1(const int32_t pos) const;
    
    const int32_t CANBUS_MESSAGE_LENGTH = 8;  // according to ISO-11891-1
const int32_t MAX_CAN_PORT = 3;
    
    #include 'modules/drivers/canbus/sensor_gflags.h'
    
    
    {    static BOOST_FORCEINLINE bool is_lock_free(storage_type const volatile&) BOOST_NOEXCEPT
    {
        return true;
    }
};
    
        static BOOST_FORCEINLINE storage_type exchange(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE(&storage, v));
            break;
        }
        return v;
    }