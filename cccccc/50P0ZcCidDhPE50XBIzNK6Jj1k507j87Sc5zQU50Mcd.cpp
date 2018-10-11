
        
        #undef cv_hal_sepFilterInit
#define cv_hal_sepFilterInit TEGRA_SEPFILTERINIT
#undef cv_hal_sepFilter
#define cv_hal_sepFilter TEGRA_SEPFILTERIMPL
#undef cv_hal_sepFilterFree
#define cv_hal_sepFilterFree TEGRA_SEPFILTERFREE
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    
    {            vst1q_s32(lanea + x, w);
        }
        if(x < colsn)
        {
            x = colsn-4;
            goto box3x3s32_vert_ll;
        }
    
    
    {} // namespace CAROTENE_NS

    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vmvnq(internal::vceqq(v_src0, v_src1));
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
    
    
    {	_register_etc_compress_func();
}
    
    #ifdef __cplusplus
extern 'C' {
#endif
    }
    
    	zlib_filefunc_def io;
    
    
    {
    {    private:
        // Disallow copy and move construction and assignment
        VariableFields(const VariableFields&) = delete; VariableFields& operator=(const VariableFields& other) = delete; VariableFields(VariableFields&&) = delete; VariableFields& operator=(VariableFields&&) = delete;
    };
}

    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
    typedef enum _match_flags
{
   match_default = 0,
   match_not_bol = 1,                                /* first is not start of line */
   match_not_eol = match_not_bol << 1,               /* last is not end of line */
   match_not_bob = match_not_eol << 1,               /* first is not start of buffer */
   match_not_eob = match_not_bob << 1,               /* last is not end of buffer */
   match_not_bow = match_not_eob << 1,               /* first is not start of word */
   match_not_eow = match_not_bow << 1,               /* last is not end of word */
   match_not_dot_newline = match_not_eow << 1,       /* \n is not matched by '.' */
   match_not_dot_null = match_not_dot_newline << 1,  /* '\0' is not matched by '.' */
   match_prev_avail = match_not_dot_null << 1,       /* *--first is a valid expression */
   match_init = match_prev_avail << 1,               /* internal use */
   match_any = match_init << 1,                      /* don't care what we match */
   match_not_null = match_any << 1,                  /* string can't be null */
   match_continuous = match_not_null << 1,           /* each grep match must continue from */
                                                     /* uninterupted from the previous one */
   match_partial = match_continuous << 1,            /* find partial matches */
   
   match_stop = match_partial << 1,                  /* stop after first match (grep) V3 only */
   match_not_initial_null = match_stop,              /* don't match initial null, V4 only */
   match_all = match_stop << 1,                      /* must find the whole of input even if match_any is set */
   match_perl = match_all << 1,                      /* Use perl matching rules */
   match_posix = match_perl << 1,                    /* Use POSIX matching rules */
   match_nosubs = match_posix << 1,                  /* don't trap marked subs */
   match_extra = match_nosubs << 1,                  /* include full capture information for repeated captures */
   match_single_line = match_extra << 1,             /* treat text as single line and ignor any \n's when matching ^ and $. */
   match_unused1 = match_single_line << 1,           /* unused */
   match_unused2 = match_unused1 << 1,               /* unused */
   match_unused3 = match_unused2 << 1,               /* unused */
   match_max = match_unused3,
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_alt()
{
   bool take_first, take_second;
   const re_alt* jmp = static_cast<const re_alt*>(pstate);
    }
    
    template <class S, class charT>
unsigned count_chars(const S& s, charT c)
{
   //
   // Count how many occurances of character c occur
   // in string s: if c is a delimeter between collation
   // fields, then this should be the same value for all
   // sort keys:
   //
   unsigned int count = 0;
   for(unsigned pos = 0; pos < s.size(); ++pos)
   {
      if(s[pos] == c) ++count;
   }
   return count;
}
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
       match_results<BidirectionalIterator> what;  // current match
   BidirectionalIterator                base;  // start of sequence
   BidirectionalIterator                end;   // end of sequence
   const regex_type                     re;   // the expression
   match_flag_type                      flags; // flags for matching
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    
    {        ImGui::Render();
    }
    
    
    {    // At this point note that we set ImGui::GetIO().Fonts->TexID to be == g_FontTexture, so clear both.
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(g_FontTexture == io.Fonts->TexID);
    if (g_FontTexture)
        g_FontTexture->Release();
    g_FontTexture = NULL;
    io.Fonts->TexID = NULL;
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    for (int i = 0; i < IMGUI_VK_QUEUED_FRAMES; i++)
    {
        ImGui_ImplVulkanH_FrameData* fd = &wd->Frames[i];
        vkDestroyFence(device, fd->Fence, allocator);
        vkFreeCommandBuffers(device, fd->CommandPool, 1, &fd->CommandBuffer);
        vkDestroyCommandPool(device, fd->CommandPool, allocator);
        vkDestroySemaphore(device, fd->ImageAcquiredSemaphore, allocator);
        vkDestroySemaphore(device, fd->RenderCompleteSemaphore, allocator);
    }
    for (uint32_t i = 0; i < wd->BackBufferCount; i++)
    {
        vkDestroyImageView(device, wd->BackBufferView[i], allocator);
        vkDestroyFramebuffer(device, wd->Framebuffer[i], allocator);
    }
    vkDestroyRenderPass(device, wd->RenderPass, allocator);
    vkDestroySwapchainKHR(device, wd->Swapchain, allocator);
    vkDestroySurfaceKHR(instance, wd->Surface, allocator);
    *wd = ImGui_ImplVulkanH_WindowData();
}

    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
      if (fseek(f, 0, SEEK_END) == 0) {
    buffer_size = std::max<off_t>(ftell(f), 1);
    if (fseek(f, 0, SEEK_SET) != 0) {
      perror('fseek');
      exit(1);
    }
  } else if (ferror(f)) {
    perror('fseek');
    exit(1);
  }
    
    // Contains information that is used in one scan.
struct JPEGScanInfo {
  // Parameters used for progressive scans (named the same way as in the spec):
  //   Ss : Start of spectral band in zig-zag sequence.
  //   Se : End of spectral band in zig-zag sequence.
  //   Ah : Successive approximation bit position, high.
  //   Al : Successive approximation bit position, low.
  int Ss;
  int Se;
  int Ah;
  int Al;
  std::vector<JPEGComponentScanInfo> components;
};
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    int NullOut(void* data, const uint8_t* buf, size_t count) {
  return count;
}
    
      if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0) {
    AERROR << 'recv can frame num not in range[0, ' << MAX_CAN_RECV_FRAME_LEN
           << '], frame_num:' << *frame_num;
    // TODO(Authors): check the difference of returning frame_num/error_code
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
    
    
    {  if (static_cast<size_t>(*frame_num) != frames.size()) {
    AERROR << 'frame num is incorrect.';
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
  for (size_t i = 0; i < frames.size(); ++i) {
    ADEBUG << 'send frame i:' << i;
    ADEBUG << frames[i].CanFrameString();
    frame_info_ << frames[i].CanFrameString();
  }
  ++send_counter_;
  return ErrorCode::OK;
}
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *frames,
                                    int32_t *const frame_num) override;
    
    using apollo::common::ErrorCode;
    
      sender.AddMessage(1, &mpd);
  EXPECT_EQ(sender.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(sender.IsRunning());
  EXPECT_TRUE(sender.enable_log());
    
      std::unordered_map<uint32_t, ProtocolData<SensorType> *> protocol_data_map_;
  std::unordered_map<uint32_t, CheckIdArg> check_ids_;
  std::set<uint32_t> received_ids_;
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');
