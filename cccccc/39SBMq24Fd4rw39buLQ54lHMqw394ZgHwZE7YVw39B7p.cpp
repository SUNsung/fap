
        
        
    {
    {    return module;
#endif
  }
}
    
    // A CodeGenerator that captures the FileDescriptor it's passed as a
// FileDescriptorProto.
class DescriptorCapturingGenerator : public CodeGenerator {
 public:
  // Does not own file; file must outlive the Generator.
  explicit DescriptorCapturingGenerator(FileDescriptorProto* file)
      : file_(file) {}
    }
    
    void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    ImmutableExtensionLiteGenerator::~ImmutableExtensionLiteGenerator() {}
    
    #undef cv_hal_cmp8u
#define cv_hal_cmp8u TEGRA_CMP
#undef cv_hal_cmp8s
#define cv_hal_cmp8s TEGRA_CMP
#undef cv_hal_cmp16u
#define cv_hal_cmp16u TEGRA_CMP
#undef cv_hal_cmp16s
#define cv_hal_cmp16s TEGRA_CMP
#undef cv_hal_cmp32s
#define cv_hal_cmp32s TEGRA_CMP
#undef cv_hal_cmp32f
#define cv_hal_cmp32f TEGRA_CMP
//#undef cv_hal_cmp64f
//#define cv_hal_cmp64f TEGRA_CMP
    
    #endif

    
                int32x4_t va = vaddq_s32(lane0a, lane2a);
            int32x4_t vb = vaddq_s32(lane0b, lane2b);
            int32x4_t vc = vaddq_s32(lane0c, lane2c);
            int32x4_t wa = vaddq_s32(va, lane1a);
            int32x4_t wb = vaddq_s32(vb, lane1b);
            int32x4_t wc = vaddq_s32(vc, lane1c);
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u;
    }
    
    void rgb2ycrcb(const Size2D &size,
               const u8 * srcBase, ptrdiff_t srcStride,
               u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    YCRCB_CONSTS
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s8, f32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vst1.32 {d6-d7}, [%[dst1]]                            \n\t'
            'vst1.32 {d8-d9}, [%[dst2]]                            \n\t'
            'vst1.32 {d10-d11}, [%[dst3]]                          \n\t'
            'vst1.32 {d12-d13}, [%[dst4]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              [dst3] 'r' (_dst + i + 8),
              [dst4] 'r' (_dst + i + 12),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10',
            'd11','d12','d13','d14','d15','d16','d17',
            'd18','d19','d20','d21','d22','d23','d24',
            'd25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, f32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vst1q_f32(_dst + i + 0,  vline1_f32);
        vst1q_f32(_dst + i + 4,  vline2_f32);
        vst1q_f32(_dst + i + 8,  vline3_f32);
        vst1q_f32(_dst + i + 12, vline4_f32);
    }
})
#endif
    
            for (; i < roiw4; i += 4 )
        {
            internal::prefetch(src + i);
            float32x4_t vln = vld1q_f32(src + i);
            int32x4_t vnz = vreinterpretq_s32_u32(vmvnq_u32(vceqq_f32(vln, vc0)));
            vs = vqaddq_s32(vs, vnz);
        }
    
    #endif  // GPR_SUPPORT_CHANNELS_FROM_FD
    
    void ChannelArguments::SetPointerWithVtable(
    const grpc::string& key, void* value,
    const grpc_arg_pointer_vtable* vtable) {
  grpc_arg arg;
  arg.type = GRPC_ARG_POINTER;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  arg.value.pointer.p = vtable->copy(value);
  arg.value.pointer.vtable = vtable;
  args_.push_back(arg);
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    size_t TraceContextSerialize(const ::opencensus::trace::SpanContext& context,
                             char* tracing_buf, size_t tracing_buf_size) {
  GrpcTraceContext trace_ctxt(context);
  return TraceContextEncoding::Encode(trace_ctxt, tracing_buf,
                                      tracing_buf_size);
}
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
      // Fixed size offsets for field ID start positions during encoding.  Field
  // data immediately follows.
  enum FieldIdOffset {
    kTraceIdOffset = kVersionIdSize,
    kSpanIdOffset = kTraceIdOffset + kFieldIdSize + kTraceIdSize,
    kTraceOptionsOffset = kSpanIdOffset + kFieldIdSize + kSpanIdSize,
  };
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }
    
    extern void UNSCALE_BT_BASIS(btTransform &scaledBasis);
#endif

    
    #include 'rigid_body_bullet.h'
    
    #ifdef __cplusplus
extern 'C' {
#endif
    }
    
    Mutex *dvector_lock = NULL;
    
    const uint8_t *IP_Address::get_ipv6() const {
	return field8;
}
    
    	ClassDB::bind_method(D_METHOD('get_connection_status'), &NetworkedMultiplayerPeer::get_connection_status);
	ClassDB::bind_method(D_METHOD('get_unique_id'), &NetworkedMultiplayerPeer::get_unique_id);
    
    String ArrayDirectory::path() {
  if (!m_it) {
    return empty_string();
  }
    }
    
    bool File::lock(int operation, bool &wouldblock /* = false */) {
  assertx(m_data->m_fd >= 0);
    }
    
      // The word 'custom_' must be a prefix.
  EXPECT_TRUE(doc.HasMember('fake_custom_fake'));
  EXPECT_TRUE(Flag::getValue('fake_custom_fake').empty());
    
    
    {/**
 * @brief Compute a hash digest from the contents of a buffer.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param buffer A caller-controlled buffer (already allocated).
 * @param size The length of buffer in bytes.
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromBuffer(HashType hash_type, const void* buffer, size_t size);
} // namespace osquery

    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
      void sendMessage();
    
    const std::string DHTResponseMessage::R('r');
    
      virtual ~DHTResponseMessage();
    
        uint16_t port;
    auto connection = make_unique<DHTConnectionImpl>(family);
    {
      port = e->getBtRegistry()->getUdpPort();
      const std::string& addr = e->getOption()->get(
          family == AF_INET ? PREF_DHT_LISTEN_ADDR : PREF_DHT_LISTEN_ADDR6);
      // If UDP port is already used, use the same port
      // number. Normally IPv4 port is available, then IPv6 port is
      // (especially for port >= 1024). We don't loose much by doing
      // this. We did the same thing in TCP socket. See BtSetup.cc.
      bool rv;
      if (port == 0) {
        auto sgl =
            util::parseIntSegments(e->getOption()->get(PREF_DHT_LISTEN_PORT));
        sgl.normalize();
        rv = connection->bind(port, addr, sgl);
      }
      else {
        rv = connection->bind(port, addr);
      }
      if (!rv) {
        throw DL_ABORT_EX('Error occurred while binding UDP port for DHT');
      }
      localNode->setPort(port);
    }
    A2_LOG_DEBUG(fmt('Initialized local node ID=%s',
                     util::toHex(localNode->getID(), DHT_ID_LENGTH).c_str()));
    auto tracker = std::make_shared<DHTMessageTracker>();
    auto routingTable = make_unique<DHTRoutingTable>(localNode);
    auto factory = make_unique<DHTMessageFactoryImpl>(family);
    auto dispatcher = make_unique<DHTMessageDispatcherImpl>(tracker);
    auto receiver = make_unique<DHTMessageReceiver>(tracker);
    auto taskQueue = make_unique<DHTTaskQueueImpl>();
    auto taskFactory = make_unique<DHTTaskFactoryImpl>();
    auto peerAnnounceStorage = make_unique<DHTPeerAnnounceStorage>();
    auto tokenTracker = make_unique<DHTTokenTracker>();
    // For now, UDPTrackerClient was enabled along with DHT
    auto udpTrackerClient = std::make_shared<UDPTrackerClient>();
    const auto messageTimeout =
        e->getOption()->getAsInt(PREF_DHT_MESSAGE_TIMEOUT);
    // wiring up
    tracker->setRoutingTable(routingTable.get());
    tracker->setMessageFactory(factory.get());
    
    
    {} // namespace aria2
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    DHTTokenUpdateCommand::~DHTTokenUpdateCommand() = default;
    
      // do nothing
  virtual void doReceivedAction() CXX11_OVERRIDE;