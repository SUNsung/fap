
        
        /* Coin network-specific GUI style information */
class PlatformStyle
{
public:
    /** Get style associated with provided platform name, or 0 if not known */
    static const PlatformStyle *instantiate(const QString &platformId);
    }
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
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
    }
    
        /* Check NULLs for conversion */
    CHECK(secp256k1_ecdsa_sign(both, &normal_sig, message, privkey, NULL, NULL) == 1);
    ecount = 0;
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, NULL, &recsig) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, &recsig) == 1);
    
        UniValue v4;
    BOOST_CHECK(v4.setNumStr('2147483648'));
    BOOST_CHECK_EQUAL(v4.get_int64(), 2147483648);
    BOOST_CHECK_THROW(v4.get_int(), std::runtime_error);
    BOOST_CHECK(v4.setNumStr('1000'));
    BOOST_CHECK_EQUAL(v4.get_int(), 1000);
    BOOST_CHECK_THROW(v4.get_str(), std::runtime_error);
    BOOST_CHECK_EQUAL(v4.get_real(), 1000);
    BOOST_CHECK_THROW(v4.get_array(), std::runtime_error);
    BOOST_CHECK_THROW(v4.getKeys(), std::runtime_error);
    BOOST_CHECK_THROW(v4.getValues(), std::runtime_error);
    BOOST_CHECK_THROW(v4.get_obj(), std::runtime_error);
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    #endif

    
    #ifndef TESSERACT_CCMAIN_OSDETECT_H_
#define TESSERACT_CCMAIN_OSDETECT_H_
    
    #include <cstdint>      // for int32_t
#include 'points.h'     // for FCOORD
    
    #ifndef NORMALIS_H
#define NORMALIS_H
    
    // GenericHeap requires 1 template argument:
// Pair will normally be either KDPairInc<Key, Data> or KDPairDec<Key, Data>
// for some arbitrary Key and scalar, smart pointer, or non-ownership pointer
// Data type, according to whether a MIN heap or a MAX heap is desired,
// respectively. Using KDPtrPairInc<Key, Data> or KDPtrPairDec<Key, Data>,
// GenericHeap can also handle simple Data pointers and own them.
// If no additional data is required, Pair can also be a scalar, since
// GenericHeap doesn't look inside it except for operator<.
//
// The heap is stored as a packed binary tree in an array hosted by a
// GenericVector<Pair>, with the invariant that the children of each node are
// both NOT Pair::operator< the parent node. KDPairInc defines Pair::operator<
// to use Key::operator< to generate a MIN heap and KDPairDec defines
// Pair::operator< to use Key::operator> to generate a MAX heap by reversing
// all the comparisons.
// See http://en.wikipedia.org/wiki/Heap_(data_structure) for more detail on
// the basic heap implementation.
//
// Insertion and removal are both O(log n) and, unlike the STL heap, an
// explicit Reshuffle function allows a node to be repositioned in time O(log n)
// after changing its value.
//
// Accessing the element for revaluation is a more complex matter, since the
// index and pointer can be changed arbitrarily by heap operations.
// Revaluation can be done by making the Data type in the Pair derived from or
// contain a DoublePtr as its first data element, making it possible to convert
// the pointer to a Pair using KDPairInc::RecastDataPointer.
template <typename Pair>
class GenericHeap {
 public:
  GenericHeap() = default;
  // The initial size is only a GenericVector::reserve. It is not enforced as
  // the size limit of the heap. Caller must implement their own enforcement.
  explicit GenericHeap(int initial_size) {
    heap_.reserve(initial_size);
  }
    }
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
LEVELDB_EXPORT Env* NewMemEnv(Env* base_env);
    
    class MemTableIterator : public Iterator {
 public:
  explicit MemTableIterator(MemTable::Table* table) : iter_(table) {}
    }
    
      ASSERT_TRUE(!Overlaps('a', 'b'));
  ASSERT_TRUE(!Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    
    { private:
  BlockHandle metaindex_handle_;
  BlockHandle index_handle_;
};
    
    #include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
    
    {  Env* const env_;
  const std::string dbname_;
  const Options& options_;
  Cache* cache_;
};
    
      // Return the last sequence number.
  uint64_t LastSequence() const { return last_sequence_; }
    
      ASSERT_OK(WriteStringToFile(env_, kWrite1Data, kTestFileName));
    
      Status(const Status& rhs);
  Status& operator=(const Status& rhs);