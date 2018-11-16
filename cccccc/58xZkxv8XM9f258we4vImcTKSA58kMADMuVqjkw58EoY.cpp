
        
        
    {    QString appName;
    QIcon appIcon;
    QIcon trayAndWindowIcon;
    QString titleAddText;
};
    
    #include <QDialog>
    
    static CBlockIndex* CreateBlockIndexWithNbits(uint32_t nbits)
{
    CBlockIndex* block_index = new CBlockIndex();
    block_index->nHeight = 46367;
    block_index->nTime = 1269211443;
    block_index->nBits = nbits;
    return block_index;
}
    
    
// Detect when a type is not a wchar_t string
template<typename T> struct is_wchar { typedef int tinyformat_wchar_is_not_supported; };
template<> struct is_wchar<wchar_t*> {};
template<> struct is_wchar<const wchar_t*> {};
template<int n> struct is_wchar<const wchar_t[n]> {};
template<int n> struct is_wchar<wchar_t[n]> {};
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    namespace grpc {
    }
    
    grpc::string ProtoServerReflectionPlugin::name() {
  return 'proto_server_reflection';
}
    
      virtual void PredictContribution(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false,
                                   int condition = 0,
                                   unsigned condition_feature = 0) = 0;
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    #include <xgboost/logging.h>
#include 'src/common/random.h'
#include './xgboost_R.h'
    
    #include <folly/Benchmark.h>
    
        // Check header of the tracepoint.
    std::string header = getStr(note, pos, headerSize);
    CHECK_EQ(kUSDTSubsectionName, header);
    align4Bytes(pos);
    
    #include <folly/Function.h>
#include <folly/Utility.h>
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    /*
 * Decode a single unicode code point from UTF-8 byte sequence.
 */
char32_t utf8ToCodePoint(
    const unsigned char*& p,
    const unsigned char* const e,
    bool skipOnError);
    
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
    
    ///////////// CacheLocality
    
    
    {} // namespace folly
