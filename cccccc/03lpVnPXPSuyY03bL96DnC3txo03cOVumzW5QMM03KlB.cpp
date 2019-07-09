
        
          if (conformanceSig) {
    for (auto &rawReq : conformanceSig->getRequirements()) {
      if (auto req = rawReq.subst(conformanceToSyntheticTypeFn,
                                  conformanceToSyntheticConformanceFn))
        builder.addRequirement(*req, source, nullptr);
    }
  }
    
    void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
    #ifndef VERB
#  define VERB(Word)
#endif
    
    
    {  return forInvalid();
}
    
    std::pair<FrontendInputsAndOutputs, std::set<StringRef>>
ArgsToFrontendInputsConverter::createInputFilesConsumingPrimaries(
    std::set<StringRef> primaryFiles) {
  bool hasAnyPrimaryFiles = !primaryFiles.empty();
    }
    
    #define PARALLEL_CORE 0
#if PARALLEL_CORE
    
    #include 'common.hpp'
#include 'vtransform.hpp'
    
    
    {
    {        for (; x < size.width; ++x)
        {
            op(src0 + x, src1 + x, dst + x);
        }
    }
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVT_FUNC(u16, s16, 8,
     register uint16x8_t v32767 asm ('q4') = vmovq_n_u16(0x7FFF);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.16 {d0-d1}, [%[src]]                              \n\t'
             'vmin.u16 q1, q0, q4                                    \n\t'
             'vst1.16 {d2-d3}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst] 'r' (_dst + i + 0),
               'w' (v32767)
             : 'd0','d1','d2','d3'
         );
     }
})
#else
CVT_FUNC(u16, s16, 8,
     uint16x8_t v32767 = vmovq_n_u16(0x7FFF);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         uint16x8_t vline_u16 = vld1q_u16(_src + i);
         vline_u16 = vminq_u16(vline_u16, v32767);
         vst1q_s16((_dst + i), vreinterpretq_s16_u16(vline_u16));
     }
})
#endif
    
    
    {        for (; i < size.width; ++i)
            result += src0[i] * src1[i];
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
    #include 'common.hpp'
    
    
    {  EXPECT_EQ(expected, decode_data.Data());
}
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google

    
    TEST(StatusOr, TestPointerAssignmentStatusOk) {
  const int kI = 0;
  StatusOr<const int*> source(&kI);
  StatusOr<const int*> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    #endif  // GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_

    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
      void ScrubFile(FileDescriptorProto *file) {
    for (int i = 0; i < file->enum_type_size(); i++) {
      ScrubEnum(file->mutable_enum_type(i));
    }
    for (int i = 0; i < file->mutable_message_type()->size(); i++) {
      ScrubMessage(file->mutable_message_type(i));
    }
  }
    
      EnumGenerator(const EnumGenerator&) = delete;
  EnumGenerator& operator=(const EnumGenerator&) = delete;
    
    #include <stddef.h>
#include <stdint.h>
    
    class Block {
 public:
  // Initialize the block with the specified contents.
  explicit Block(const BlockContents& contents);
    }
    
    char* Arena::AllocateNewBlock(size_t block_bytes) {
  char* result = new char[block_bytes];
  blocks_.push_back(result);
  memory_usage_.fetch_add(block_bytes + sizeof(char*),
                          std::memory_order_relaxed);
  return result;
}
    
                // Implemented methods
            virtual Platform::Object ^ GetAt(unsigned int index) = Windows::Foundation::Collections::IVector<Platform::Object ^>::GetAt
            {
                return m_source->GetAt(index);
            }
    
    
    {    AutomationProperties::SetName(m_host, announcement->Announcement);
    AutomationPeer ^ peer = FrameworkElementAutomationPeer::FromElement(m_host);
    if (peer != nullptr)
    {
        peer->RaiseAutomationEvent(AutomationEvents::LiveRegionChanged);
    }
}

    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetDisplayUpdatedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::DisplayUpdated, AutomationNotificationKind::Other, AutomationNotificationProcessing::ImportantMostRecent);
}
    
    void NarratorNotifier::OnAnnouncementChanged(_In_ DependencyObject ^ dependencyObject, _In_ DependencyPropertyChangedEventArgs ^ e)
{
    auto instance = safe_cast<NarratorNotifier ^>(dependencyObject);
    if (instance != nullptr)
    {
        instance->Announce(safe_cast<NarratorAnnouncement ^>(e->NewValue));
    }
}

    
    
    {} // namespace aria2

    
      std::shared_ptr<DHTBucket> getBucketFor(const unsigned char* nodeID) const;
    
    
    {  void deserialize(const std::string& filename);
};
    
    #endif // D_DHT_SETUP_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
      unsigned char secret_[2][SECRET_SIZE];
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      virtual void process() CXX11_OVERRIDE;
    
    #include <string>
#include <set>
#include <algorithm>
#include <vector>
    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
        // create a JSON number from number_unsigned_t
    json::number_integer_t value_unsigned_t = 17;
    json j_unsigned_t(value_unsigned_t);