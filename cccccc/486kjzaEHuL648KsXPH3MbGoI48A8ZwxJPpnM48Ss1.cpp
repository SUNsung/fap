
        
        #include 'common.hpp'
#include 'vtransform.hpp'
    
    #include <carotene/functions.hpp>
#include 'saturate_cast.hpp'
    
    CVT_FUNC(u8, s8, 16,
     uint8x16_t v127 = vdupq_n_u8(127);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         uint8x16_t vu8 = vld1q_u8(_src + i);
         int8x16_t vu1 = vreinterpretq_s8_u8(vminq_u8(vu8, v127));
         vst1q_s8(_dst + i, vu1);
     }
})
    
    #define CVTS_FUNC1(T1, SIMD_SIZE, CVTSINIT, CVTSROW)                             \
    void convertScale(const Size2D &,                                            \
                      const T1 *, ptrdiff_t,                                     \
                      T1 *, ptrdiff_t,                                           \
                      f64, f64)                                                  \
    {                                                                            \
        internal::assertSupportedConfiguration();                                \
    }
    
    
    {                    for( k = 0; k < N; k++ )
                    {
                        s32 x = ptr[pixel[k]];
                        if(x < vt)
                        {
                            if( ++count > K )
                            {
                                cornerpos[ncorners++] = j;
                                if(nonmax_suppression)
                                    curr[j] = cornerScore(ptr, pixel);
                                break;
                            }
                        }
                        else
                            count = 0;
                    }
                }
    
      ~Carver();
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    /**
 * @brief Compute multiple hashes from a files contents simultaneously.
 *
 * @param mask Bitmask specifying target osquery-supported algorithms.
 * @param path Filesystem path (the hash target).
 * @return A struct containing string (hex) representations
 *         of the hash digests.
 */
MultiHashes hashMultiFromFile(int mask, const std::string& path);
    
      /// Begin the worker-watcher process.
  virtual bool watch(const PlatformProcess& child) const;
    
    void INotifyEventPublisher::removeSubscriptions(const std::string& subscriber) {
  WriteLock lock(subscription_lock_);
  std::for_each(subscriptions_.begin(),
                subscriptions_.end(),
                [&subscriber](const SubscriptionRef& sub) {
                  if (sub->subscriber_name == subscriber) {
                    getSubscriptionContext(sub->context)->mark_for_deletion =
                        true;
                  }
                });
}
    
    class ExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('example_text', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple(
            'example_integer', INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }
    
      t2 = t4 - t5;
  t4 += t5;
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    bool ReadPNG(const std::string& data, int* xsize, int* ysize,
             std::vector<uint8_t>* rgb) {
  png_structp png_ptr =
      png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
  if (!png_ptr) {
    return false;
  }
    }
    
      void WriteBits(int nbits, uint64_t bits) {
    put_bits -= nbits;
    put_buffer |= (bits << put_bits);
    if (put_bits <= 16) {
      // At this point we are ready to emit the most significant 6 bytes of
      // put_buffer_ to the output.
      // The JPEG format requires that after every 0xff byte in the entropy
      // coded section, there is a zero byte, therefore we first check if any of
      // the 6 most significant bytes of put_buffer_ is 0xff.
      if (HasZeroByte(~put_buffer | 0xffff)) {
        // We have a 0xff byte somewhere, examine each byte and append a zero
        // byte if necessary.
        EmitByte((put_buffer >> 56) & 0xff);
        EmitByte((put_buffer >> 48) & 0xff);
        EmitByte((put_buffer >> 40) & 0xff);
        EmitByte((put_buffer >> 32) & 0xff);
        EmitByte((put_buffer >> 24) & 0xff);
        EmitByte((put_buffer >> 16) & 0xff);
      } else if (pos + 6 < len) {
        // We don't have any 0xff bytes, output all 6 bytes without checking.
        data[pos] = (put_buffer >> 56) & 0xff;
        data[pos + 1] = (put_buffer >> 48) & 0xff;
        data[pos + 2] = (put_buffer >> 40) & 0xff;
        data[pos + 3] = (put_buffer >> 32) & 0xff;
        data[pos + 4] = (put_buffer >> 24) & 0xff;
        data[pos + 5] = (put_buffer >> 16) & 0xff;
        pos += 6;
      } else {
        overflow = true;
      }
      put_buffer <<= 48;
      put_bits += 48;
    }
  }
    
    namespace guetzli {
    }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
      static Data data_;
  static Data data6_;
    
      void onReceived(const DHTPingReplyMessage* message);
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
      std::shared_ptr<DHTBucket>
  getBucketFor(const std::shared_ptr<DHTNode>& node) const;
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
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
    
      virtual ~DHTTokenUpdateCommand();
    
    bool DHTUnknownMessage::isReply() const { return false; }
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        uint64_t const* p_value = (uint64_t const*)&v;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[dest], %%rax\n\t'
            'movq 8+%[dest], %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b %[dest]\n\t'
            'jne 1b\n\t'
            : [dest] '=o' (storage)
            : 'b' (p_value[0]), 'c' (p_value[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[dest]), %%rax\n\t'
            'movq 8(%[dest]), %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b 0(%[dest])\n\t'
            'jne 1b\n\t'
            :
            : 'b' (p_value[0]), 'c' (p_value[1]), [dest] 'r' (&storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }
    
            storage_type volatile* p = &storage;
        if (((uint32_t)p & 0x00000007) == 0)
        {
#if defined(_M_IX86_FP) && _M_IX86_FP >= 2
#if defined(__AVX__)
            __asm
            {
                mov edx, p
                vmovq xmm4, v
                vmovq qword ptr [edx], xmm4
            };
#else
            __asm
            {
                mov edx, p
                movq xmm4, v
                movq qword ptr [edx], xmm4
            };
#endif
#else
            __asm
            {
                mov edx, p
                fild v
                fistp qword ptr [edx]
            };
#endif
        }
        else
        {
            int backup;
            __asm
            {
                mov backup, ebx
                mov edi, p
                mov ebx, dword ptr [v]
                mov ecx, dword ptr [v + 4]
                mov eax, dword ptr [edi]
                mov edx, dword ptr [edi + 4]
                align 16
            again:
                lock cmpxchg8b qword ptr [edi]
                jne again
                mov ebx, backup
            };
        }
    
    template< >
struct make_storage_type< 4u, true >
{
    typedef mars_boost::int32_t type;
    }