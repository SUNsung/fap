
        
        AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    namespace grpc {
    }
    
    
    {}  // namespace grpc
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    const ViewDescriptor& ServerServerLatencyMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/server_latency/minute')
          .set_measure(kRpcServerServerLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
      Status GetFileContainingExtension(
      ServerContext* context,
      const reflection::v1alpha::ExtensionRequest* request,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    void ProtoServerReflectionPlugin::Finish(grpc::ServerInitializer* si) {
  reflection_service_->SetServiceList(si->GetServiceList());
}
    
    
//--------------------------------------------------------------------------
//
//   operator ==   (comparison)    Consider to patterns to be == if the
//                                 pattern strings and the flags are the same.
//                                 Note that pattern strings with the same
//                                 characters can still be considered different.
//
//--------------------------------------------------------------------------
UBool   RegexPattern::operator ==(const RegexPattern &other) const {
    if (this->fFlags == other.fFlags && this->fDeferredStatus == other.fDeferredStatus) {
        if (this->fPatternString != NULL && other.fPatternString != NULL) {
            return *(this->fPatternString) == *(other.fPatternString);
        } else if (this->fPattern == NULL) {
            if (other.fPattern == NULL) {
                return TRUE;
            }
        } else if (other.fPattern != NULL) {
            UTEXT_SETNATIVEINDEX(this->fPattern, 0);
            UTEXT_SETNATIVEINDEX(other.fPattern, 0);
            return utext_equals(this->fPattern, other.fPattern);
        }
    }
    return FALSE;
}
    
    U_NAMESPACE_END
    
    U_NAMESPACE_END
    
    #endif

    
    U_NAMESPACE_END
    
        /* We don't always have to compute endCompare.  For many instances,
     * startCompare is enough to determine if we are in DST or not.  In the
     * northern hemisphere, if we are before the start rule, we can't have
     * DST.  In the southern hemisphere, if we are after the start rule, we
     * must have DST.  This is reflected in the way the next if statement
     * (not the one immediately following) short circuits. */
    if(southern != (startCompare >= 0)) {
        endCompare = compareToRule((int8_t)month, (int8_t)monthLength, (int8_t)prevMonthLength,
                                   (int8_t)day, (int8_t)dayOfWeek, millis,
                                   endTimeMode == WALL_TIME ? dstSavings :
                                    (endTimeMode == UTC_TIME ? -rawOffset : 0),
                                   endMode, (int8_t)endMonth, (int8_t)endDayOfWeek,
                                   (int8_t)endDay, endTime);
    }
    
        /**
     * Remove any match data.  This must be called before performing a
     * set of matches with this segment.
     */
    void resetMatch();
    
    // stb_compress* from stb.h - declaration
typedef unsigned int stb_uint;
typedef unsigned char stb_uchar;
stb_uint stb_compress(stb_uchar *out,stb_uchar *in,stb_uint len);
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
            ID3D10Texture2D *pTexture = NULL;
        D3D10_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = pixels;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);
    
            D3D12_STATIC_SAMPLER_DESC staticSampler = {};
        staticSampler.Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
        staticSampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.MipLODBias = 0.f;
        staticSampler.MaxAnisotropy = 0;
        staticSampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        staticSampler.BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
        staticSampler.MinLOD = 0.f;
        staticSampler.MaxLOD = 0.f;
        staticSampler.ShaderRegister = 0;
        staticSampler.RegisterSpace = 0;
        staticSampler.ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
        // Select graphics queue family
    {
        uint32_t count;
        vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, NULL);
        VkQueueFamilyProperties* queues = (VkQueueFamilyProperties*)malloc(sizeof(VkQueueFamilyProperties) * count);
        vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, queues);
        for (uint32_t i = 0; i < count; i++)
            if (queues[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
            {
                g_QueueFamily = i;
                break;
            }
        free(queues);
        IM_ASSERT(g_QueueFamily != -1);
    }
    
    void WaitForLastSubmittedFrame()
{
    FrameContext* frameCtxt = &g_frameContext[g_frameIndex % NUM_FRAMES_IN_FLIGHT];
    }
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_d3dpp.BackBufferWidth  = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
            if (hr == D3DERR_INVALIDCALL)
                IM_ASSERT(0);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
    
    
    {} // namespace folly
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
      ~VirtualExecutor() override {
    joinKeepAlive();
  }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    /*
 * This is an implementation of the std::atomic_shared_ptr TS
 * http://en.cppreference.com/w/cpp/experimental/atomic_shared_ptr
 * https://isocpp.org/files/papers/N4162.pdf
 *
 * AFAIK, the only other implementation is Anthony Williams from
 * Just::thread library:
 *
 * https://bitbucket.org/anthonyw/atomic_shared_ptr
 *
 * implementation details:
 *
 * Basically, three things need to be atomically exchanged to make this work:
 * * the local count
 * * the pointer to the control block
 * * the aliased pointer, if any.
 *
 * The Williams version does it with DWcas: 32 bits for local count, 64
 * bits for control block ptr, and he changes the shared_ptr
 * implementation to also store the aliased pointers using a linked list
 * like structure, and provides 32-bit index accessors to them (like
 * IndexedMemPool trick).
 *
 * This version instead stores the 48 bits of address, plus 16 bits of
 * local count in a single 8byte pointer.  This avoids 'lock cmpxchg16b',
 * which is much slower than 'lock xchg' in the normal 'store' case.  In
 * the less-common aliased pointer scenaro, we just allocate it in a new
 * block, and store a pointer to that instead.
 *
 * Note that even if we only want to use the 3-bits of pointer alignment,
 * this trick should still work - Any more than 4 concurrent accesses
 * will have to go to an external map count instead (slower, but lots of
 * concurrent access will be slow anyway due to bouncing cachelines).
 *
 * As a perf optimization, we currently batch up local count and only
 * move it global every once in a while.  This means load() is usually
 * only a single atomic operation, instead of 3.  For this trick to work,
 * we probably need at least 8 bits to make batching worth it.
 */
    
      // one cache shared by all cpus
  rv.numCachesByLevel.push_back(numCpus);
    
      std::shared_ptr<T> get() const {
    return slots_[AccessSpreader<>::current(kNumSlots)];
  }
    
        static BOOST_FORCEINLINE bool compare_exchange_weak(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order success_order, memory_order failure_order) BOOST_NOEXCEPT
    {
        return Derived::compare_exchange_strong(storage, expected, desired, success_order, failure_order);
    }
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};