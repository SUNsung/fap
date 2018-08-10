
        
        
    {
    {    C[0] = C[1];
    TargetStart = C + 1;
    GCBForC0 = GCBForC1;
  }
}
    
    #include 'swift/Runtime/HeapObject.h'
#include <mutex>
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
    
    {  virtual void finish() {}
};
    
      IndexTrieNode *getChild(unsigned Idx) {
    assert(Idx != RootIdx);
    }
    
      StringRef getRuntimeLibPath() const { return RuntimeLibPath; }
    
      grpc::testing::RunQPS();
    
    #include <chrono>
#include <thread>
#include <vector>
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
    #ifndef BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
#define BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Re-initialise the hash from the values already contained in the list.
  void rehash(std::size_t num_buckets)
  {
    if (num_buckets == num_buckets_)
      return;
    num_buckets_ = num_buckets;
    BOOST_ASIO_ASSERT(num_buckets_ != 0);
    }
    
    // This function will create a Huffman tree.
//
// The catch here is that the tree cannot be arbitrarily deep.
// Brotli specifies a maximum depth of 15 bits for 'code trees'
// and 7 bits for 'code length code trees.'
//
// count_limit is the value that is to be faked as the minimum value
// and this minimum value is raised until the tree matches the
// maximum length requirement.
//
// This algorithm is not of excellent performance for very long data blocks,
// especially when population counts are longer than 2**tree_limit, but
// we are not planning to use this with extremely long blocks.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth) {
  // For block sizes below 64 kB, we never need to do a second iteration
  // of this loop. Probably all of our block sizes will be smaller than
  // that, so this loop is mostly of academic interest. If we actually
  // would need this, we would be better off with the Katajainen algorithm.
  for (uint32_t count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    for (size_t i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = std::max<uint32_t>(data[i], count_limit);
        tree[n++] = HuffmanTree(count, -1, static_cast<int16_t>(i));
      }
    }
    }
    }
    
    namespace guetzli {
    }
    
    // Definition of error codes for parsing jpeg files.
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }