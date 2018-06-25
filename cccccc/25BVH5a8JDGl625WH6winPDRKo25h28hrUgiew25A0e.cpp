
        
        		PathCombine(userConfigDirPath, userConfigDirPath, L'config');
		SHCreateDirectoryEx(0, userConfigDirPath, 0);
    
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
    
    
    {}  // namespace guetzli

    
    
    {}  // namespace guetzli
    
    #endif  // GUETZLI_JPEG_DATA_DECODER_H_

    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    namespace folly {
namespace exception_tracer {
    }
    }
    
    TEST_F(OrderingTest, compare_less_equal) {
  compare_less_equal<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_TRUE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
    
    {} // namespace detail
    
    
    { private:
  folly::LifoSem sem_;
  std::vector<folly::MPMCQueue<T>> queues_;
};
    
      BlockingQueueAddResult add(T item) override {
    queue_.enqueue(std::move(item));
    return sem_.post();
  }
    
    /**
 * Declare *allocx() and mallctl*() as weak symbols. These will be provided by
 * jemalloc if we are using jemalloc, or will be nullptr if we are using another
 * malloc implementation.
 */
extern 'C' void* mallocx(size_t, int)
__attribute__((__weak__));
extern 'C' void* rallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t xallocx(void*, size_t, size_t, int)
__attribute__((__weak__));
extern 'C' size_t sallocx(const void*, int)
__attribute__((__weak__));
extern 'C' void dallocx(void*, int)
__attribute__((__weak__));
extern 'C' void sdallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t nallocx(size_t, int)
__attribute__((__weak__));
extern 'C' int mallctl(const char*, void*, size_t*, void*, size_t)
__attribute__((__weak__));
extern 'C' int mallctlnametomib(const char*, size_t*, size_t*)
__attribute__((__weak__));
extern 'C' int mallctlbymib(const size_t*, size_t, void*, size_t*, void*,
                            size_t)
__attribute__((__weak__));
    
    #include <glog/logging.h>
    
    std::string fbLogFatalCheck() {
  folly::Logger logger('some.category');
  FB_LOG(logger, FATAL) << 'we always crash';
  // This function mostly exists to make sure the compiler does not warn
  // about a missing return statement here.
}
    
    void SerialExecutor::keepAliveRelease() {
  auto keepAliveCounter = --keepAliveCounter_;
  DCHECK(keepAliveCounter >= 0);
  if (!keepAliveCounter) {
    delete this;
  }
}
    
    FOLLY_ALWAYS_INLINE int __builtin_ffsll(long long x) {
  unsigned long index;
  return int(_BitScanForward64(&index, (unsigned long long)x) ? index + 1 : 0);
}
    
    
    {  private:
    std::vector<std::string> vecdump_;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'comm/debugger/testspy.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.