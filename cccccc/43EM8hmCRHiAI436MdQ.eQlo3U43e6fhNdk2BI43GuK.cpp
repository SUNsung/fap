
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // hidden_ops should be a list of Op names that should get a leading _
// in the output. Prints the output to stdout.
// Optional fourth argument is the name of the original C++ source file
// where the ops' REGISTER_OP() calls reside.
void PrintPythonOps(const OpList& ops, const ApiDefMap& api_defs,
                    const std::vector<string>& hidden_ops, bool require_shapes,
                    const string& source_file_name = '');
    
    #include 'tensorflow/core/framework/api_def.pb.h'
#include 'tensorflow/core/framework/attr_value.pb.h'
#include 'tensorflow/core/framework/op_def.pb.h'
#include 'tensorflow/core/platform/types.h'
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_

    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
    namespace io {
    }
    
    #include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include 'leveldb/cache.h'
#include 'leveldb/env.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'db/db_impl.h'
#include 'db/filename.h'
#include 'db/log_format.h'
#include 'db/version_set.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
      void AcquireLoad(ThreadState* thread) {
    int dummy;
    port::AtomicPointer ap(&dummy);
    int count = 0;
    void *ptr = nullptr;
    thread->stats.AddMessage('(each op is 1000 loads)');
    while (count < 100000) {
      for (int i = 0; i < 1000; i++) {
        ptr = ap.Acquire_Load();
      }
      count++;
      thread->stats.FinishedSingleOp();
    }
    if (ptr == nullptr) exit(1); // Disable unused variable warning.
  }
    
    TEST(DBTest, MultiThreaded) {
  do {
    // Initialize state
    MTState mt;
    mt.test = this;
    mt.stop.Release_Store(0);
    for (int id = 0; id < kNumThreads; id++) {
      mt.counter[id].Release_Store(0);
      mt.thread_done[id].Release_Store(0);
    }
    }
    }
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    std::string SSTTableFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'sst');
}
    
    TEST(LogTest, BadRecordType) {
  Write('foo');
  // Type is stored in header[6]
  IncrementByte(6, 100);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('unknown record type'));
}
    
    Status Writer::EmitPhysicalRecord(RecordType t, const char* ptr, size_t n) {
  assert(n <= 0xffff);  // Must fit in two bytes
  assert(block_offset_ + kHeaderSize + n <= kBlockSize);
    }
    
      // SkipList is not protected by mu_.  We just use a single writer
  // thread to modify it.
  SkipList<Key, Comparator> list_;
    
    namespace guetzli {
    }
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    #include <stddef.h>
#include <stdint.h>
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      std::istringstream memstream(data, std::ios::in | std::ios::binary);
  png_set_read_fn(png_ptr, static_cast<void*>(&memstream), [](png_structp png_ptr, png_bytep outBytes, png_size_t byteCountToRead) {
    std::istringstream& memstream = *static_cast<std::istringstream*>(png_get_io_ptr(png_ptr));
    
    memstream.read(reinterpret_cast<char*>(outBytes), byteCountToRead);
    }
    
      tmp0 = in[6 * stride];
  tmp1 = kIDCTMatrix[ 6] * tmp0;
  tmp2 = kIDCTMatrix[14] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    // Huffman code and decoding lookup table used for DC and AC coefficients.
struct JPEGHuffmanCode {
  JPEGHuffmanCode() : counts(kJpegHuffmanMaxBitLength + 1),
                      values(kJpegHuffmanAlphabetSize + 1),
                      slot_id(0),
                      is_last(true) {}
    }
    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_
