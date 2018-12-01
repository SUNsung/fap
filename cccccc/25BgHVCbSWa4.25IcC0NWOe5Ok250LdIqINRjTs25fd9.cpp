
        
        #include 'swift/AST/PlatformKind.h'
#include 'swift/Basic/LangOptions.h'
#include 'llvm/ADT/StringSwitch.h'
#include 'llvm/Support/ErrorHandling.h'
    
      /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  void Profile(llvm::FoldingSetNodeID &id) const {
    Profile(id, getGenericSignature(), getReplacementTypes(),
            getConformances());
  }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
      Begin -= needed;
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {  return render_process_host;
}
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
      keyval = GetKeycodeFromText(key);
  if (keyval == ui::VKEY_UNKNOWN){
    enable_shortcut_ = false;
  } else {
    enable_shortcut_ = true;
    //only code for ctrl, shift, alt, super and meta modifiers
    int modifiers_value = ui::EF_NONE;
    modifiers = base::ToLowerASCII(modifiers);
    if (modifiers.find('ctrl')!=std::string::npos){
      modifiers_value |= ui::EF_CONTROL_DOWN;
    }
    if (modifiers.find('shift')!=std::string::npos){
      modifiers_value |= ui::EF_SHIFT_DOWN ;
    }
    if (modifiers.find('alt')!=std::string::npos){
      modifiers_value |= ui::EF_ALT_DOWN;
    }
    if (modifiers.find('super')!=std::string::npos
     || modifiers.find('cmd')!=std::string::npos
     || modifiers.find('command')!=std::string::npos){
      modifiers_value |= ui::EF_COMMAND_DOWN;
    }
    if (modifiers.find('meta')!=std::string::npos){
      meta_down_flag_ = true;
    }
    accelerator_ = ui::Accelerator(keyval,modifiers_value);
  }
    
    #include 'base/command_line.h'
#include 'base/memory/ptr_util.h'
#include 'base/task/post_task.h'
#include 'content/public/browser/browser_task_traits.h'
#include 'chrome/browser/browsing_data/browsing_data_appcache_helper.h'
#include 'chrome/browser/browsing_data/browsing_data_helper.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_app.h'
#include 'content/nw/src/nw_base.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/storage_partition.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'extensions/browser/app_window/app_window_registry.h'
#include 'extensions/browser/app_window/native_app_window.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'net/proxy_resolution/proxy_config.h'
#include 'net/proxy_resolution/proxy_config_service_fixed.h'
#include 'net/proxy_resolution/proxy_resolution_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
#include 'net/traffic_annotation/network_traffic_annotation_test_helper.h'
    
    namespace extensions {
    }
    
     private:
  PyObjectStruct* ptr_;
    
    
bool GetAnyFieldDescriptors(const Message& message,
                            const FieldDescriptor** type_url_field,
                            const FieldDescriptor** value_field) {
    const Descriptor* descriptor = message.GetDescriptor();
    if (descriptor->full_name() != kAnyFullTypeName) {
      return false;
    }
    *type_url_field = descriptor->FindFieldByNumber(1);
    *value_field = descriptor->FindFieldByNumber(2);
    return (*type_url_field != NULL &&
            (*type_url_field)->type() == FieldDescriptor::TYPE_STRING &&
            *value_field != NULL &&
            (*value_field)->type() == FieldDescriptor::TYPE_BYTES);
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    string ClassNameResolver::GetFileDefaultImmutableClassName(
    const FileDescriptor* file) {
  string basename;
  string::size_type last_slash = file->name().find_last_of('/');
  if (last_slash == string::npos) {
    basename = file->name();
  } else {
    basename = file->name().substr(last_slash + 1);
  }
  return UnderscoresToCamelCase(StripProto(basename), true);
}
    
    void EnumGenerator::GenerateHeader(io::Printer* printer) {
  string enum_comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    enum_comments = BuildCommentsString(location, true);
  } else {
    enum_comments = '';
  }
    }
    
    #define TEGRA_AND(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::bitwiseAnd(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
#define TEGRA_OR(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::bitwiseOr(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j);
            int16x8_t v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
            v_dst0 = vqaddq_s16(v_dst0, v_src0);
            v_dst1 = vqaddq_s16(v_dst1, v_src1);
            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            int16x8_t v_src16 = vreinterpretq_s16_u16(vmovl_u8(v_src));
            int16x8_t v_dst = vld1q_s16(dst + j);
            v_dst = vqaddq_s16(v_dst, v_src16);
            vst1q_s16(dst + j, v_dst);
        }
    
    
    {            int16x8_t tt0 = vqrdmulhq_s16(vreinterpretq_s16_u16(t0), v_scale);
            uint8x8_t it0 = vmovn_u16(vreinterpretq_u16_s16(tt0));
            vst1_u8(drow + x - 8, it0);
        }
    
    void Canny3x3L1(const Size2D &size, s32 cn,
                     s16 * dxBase, ptrdiff_t dxStride,
                     s16 * dyBase, ptrdiff_t dyStride,
                     u8 * dstBase, ptrdiff_t dstStride,
                     f64 low_thresh, f64 high_thresh)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Canny3x3<false, true>(size, cn,
                          NULL, 0,
                          dstBase, dstStride,
                          dxBase, dxStride,
                          dyBase, dyStride,
                          low_thresh, high_thresh,
                          Margin());
#else
    (void)size;
    (void)cn;
    (void)dstBase;
    (void)dstStride;
    (void)dxBase;
    (void)dxStride;
    (void)dyBase;
    (void)dyStride;
    (void)low_thresh;
    (void)high_thresh;
#endif
}
    
    #define SPLIT4ALPHA(sgn,bits) void split4(const Size2D &_size,                                          \
                                          const sgn##bits * srcBase, ptrdiff_t srcStride,               \
                                          sgn##bits * dst3Base, ptrdiff_t dst3Stride,                   \
                                          sgn##bits * dst1Base, ptrdiff_t dst1Stride)                   \
{                                                                                                       \
    internal::assertSupportedConfiguration();                                                           \
    Size2D size(_size);                                                                                 \
    if (srcStride == dst3Stride &&                                                                      \
        srcStride == dst1Stride &&                                                                      \
        srcStride == (ptrdiff_t)(size.width))                                                           \
    {                                                                                                   \
        size.width *= size.height;                                                                      \
        size.height = 1;                                                                                \
    }                                                                                                   \
    typedef internal::VecTraits<sgn##bits, 4>::vec128 vec128_4;                                         \
    typedef internal::VecTraits<sgn##bits, 3>::vec128 vec128_3;                                         \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits)-1) ? size.width - (16/sizeof(sgn##bits)-1) : 0; \
    typedef internal::VecTraits<sgn##bits, 4>::vec64 vec64_4;                                           \
    typedef internal::VecTraits<sgn##bits, 3>::vec64 vec64_3;                                           \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits)-1) ? size.width - (8/sizeof(sgn##bits)-1) : 0;    \
                                                                                                        \
    for (size_t i = 0u; i < size.height; ++i)                                                           \
    {                                                                                                   \
        const sgn##bits * src = internal::getRowPtr(srcBase, srcStride, i);                             \
        sgn##bits * dst3 = internal::getRowPtr(dst3Base, dst3Stride, i);                                \
        sgn##bits * dst1 = internal::getRowPtr(dst1Base, dst1Stride, i);                                \
        size_t sj = 0u, d3j = 0u, d1j = 0u;                                                             \
                                                                                                        \
        for (; d1j < roiw16; sj += MUL4(16)/sizeof(sgn##bits), d3j += MUL3(16)/sizeof(sgn##bits),       \
                                                               d1j += 16/sizeof(sgn##bits))             \
            ALPHA_QUAD(sgn, bits)                                                                       \
                                                                                                        \
        if (d1j < roiw8)                                                                                \
        {                                                                                               \
            union { vec64_4 v4; vec64_3 v3; } vals;                                                     \
            vals.v4 = vld4_##sgn##bits(src + sj);                                                       \
            vst3_u8(dst3 + d3j, vals.v3);                                                               \
            vst1_u8(dst1 + d1j, vals.v4.val[3]);                                                        \
            sj += MUL4(8)/sizeof(sgn##bits);                                                            \
            d3j += MUL3(8)/sizeof(sgn##bits);                                                           \
            d1j += 8/sizeof(sgn##bits);                                                                 \
        }                                                                                               \
                                                                                                        \
        for (; d1j < size.width; sj += 4, d3j += 3, ++d1j)                                              \
        {                                                                                               \
            dst3[d3j+0] = src[sj + 0];                                                                  \
            dst3[d3j+1] = src[sj + 1];                                                                  \
            dst3[d3j+2] = src[sj + 2];                                                                  \
            dst1[d1j]   = src[sj + 3];                                                                  \
        }                                                                                               \
    }                                                                                                   \
}
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    void convolution(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 BORDER_MODE border, u8 borderValue,
                 const Size2D & ksize, s16 * kernelBase, u32 scale)
{
    internal::assertSupportedConfiguration(isConvolutionSupported(size, ksize, border));
#ifdef CAROTENE_NEON
    const uint8x8_t v_zero_u8 = vdup_n_u8(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    const int32x4_t v_zero_s32 = vdupq_n_s32(0);
    }
    
                int32x4_t ln04 = vaddq_s32(lane0, lane4);
            int32x4_t ln13 = vaddq_s32(lane1, lane3);
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
                    callback(m_samples, m_updates, m_loss, m_metric);
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
        template <typename ElementType, typename DestType>
    void CopyDenseToOneHot(const ElementType *source, const size_t sampleCount, const size_t sampleSize, std::vector<DestType>& dest)
    {
        if (!std::is_same<DestType, size_t>::value)
            RuntimeError('Copy: The destination data type must be size_t.');
    }
    
            // replacements may point to nodes that are replacements themselves
        // This really can only happen if a replacement itself is an old node.
        for (auto& iter : replacements)
            while (replacements.find(iter.second) != replacements.end())
                iter.second = replacements.find(iter.second)->second;
    
            // Iterate all samples and populate m_queryUrls table. 
        for (size_t i = 0; i < numberOfSamples; i++)
        {
            int queryId = (int)queryIds(0, i);
            // Samples are grouped by queries. Find all the urls 
            // belonging to each individual query.
            if (queryId != previousQueryId)
            {
                m_queryUrls.push_back(aqu);
                numberOfQueries++;
                previousQueryId = queryId;
            }
    }
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {  return Status();
}
    
    /**
 * @brief A simple ConfigParserPlugin for a 'views' dictionary key.
 */
class ViewsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {'views'};
  }
    }
    
    TEST_F(QueryTests, test_query_name_not_found_in_db) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('not_a_real_query', query);
  auto status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_FALSE(status.ok());
  EXPECT_TRUE(previous_qd.empty());
}
    
      /// Remove an INotify watch (monitor) from our tracking.
  bool removeMonitor(int watch, bool force = false, bool batch_del = false);
    
      free((char*)reply.message);
    
    TEST_F(EventsTests, test_duplicate_event_publisher) {
  auto pub = std::make_shared<BasicEventPublisher>();
  pub->setName('BasicPublisher');
  auto status = EventFactory::registerEventPublisher(pub);
  EXPECT_TRUE(status.ok());
    }
    
    bool WriteController::IsStopped() const {
  return total_stopped_.load(std::memory_order_relaxed) > 0;
}
// This is inside DB mutex, so we can't sleep and need to minimize
// frequency to get time.
// If it turns out to be a performance issue, we can redesign the thread
// synchronization model here.
// The function trust caller will sleep micros returned.
uint64_t WriteController::GetDelay(Env* env, uint64_t num_bytes) {
  if (total_stopped_.load(std::memory_order_relaxed) > 0) {
    return 0;
  }
  if (total_delayed_.load(std::memory_order_relaxed) == 0) {
    return 0;
  }
    }
    
      env.now_micros_ += 100u;  // sleep credit 200
  // One refill: 10240 fileed, sleep credit generates 2000. 8000 used
  //             7240 + 10240 + 2000 - 8000 = 11480 left
  ASSERT_EQ(static_cast<uint64_t>(1024u), controller.GetDelay(&env, 8000u));
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
      // 0-terminated strings storing the first 8 bytes of the smallest and
  // largest key in the output.
  static const size_t kMaxPrefixLength = 8;
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
    #include 'gtest/gtest.h'
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
