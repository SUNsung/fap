
        
        bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    template<typename T>
struct algorithm_spec<CollectiveType::ALL_REDUCE, T> {
  static GlooCache::key_type key(
    THDGroup group_id, DeviceType device, std::size_t input_bytes,
    std::size_t unused_count, THDReduceOp op
  ) {
    int stream = UNUSED_STREAM;
    if (device == DeviceType::CUDA) {
      auto cuda_stream = THCState_getCurrentStream(THDGetCudaState());
      stream = THDGetStreamId(cuda_stream);
    }
    return std::make_tuple(CollectiveType::ALL_REDUCE, group_id, device, stream,
                           input_bytes, input_bytes, op, UNUSED_RANK);
  }
    }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHDoubleTensor(THDoubleTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Double).unsafeTensorFromTH((void*)tensor, true);
}
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
    class RunnerInterruptPoint : private boost::noncopyable {
 public:
  RunnerInterruptPoint() = default;
    }
    
     protected:
  /// A helper value counting the number of fired events tracked by publishers.
  EventContextID event_count_{0};
    
      /**
   * @brief If dropping explicitly to a user and group also drop groups.
   *
   * Original process groups before explicitly dropping privileges.
   * On restore, if there are any groups in this list, they will be added
   * to the processes group list.
   */
  gid_t* original_groups_{nullptr};
    
    
    {  /// IOCTL API handling mutex.
  lck_mtx_t *mtx;
} osquery = {.open_count = 0,
             .buffer = NULL,
             .buf_size = 0,
             .md = NULL,
             .mm = NULL,
             .devfs = NULL,
             .major_number = OSQUERY_MAJOR};
    
      pid_t result = ::waitpid(nativeHandle(), &process_status, WNOHANG);
  if (result < 0) {
    if (errno == ECHILD) {
      return PROCESS_EXITED;
    }
    process_status = -1;
    return PROCESS_ERROR;
  }
    
    
    {    auto stale_status = checkStalePid(content);
    if (!stale_status.ok()) {
      return stale_status;
    }
  }
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    
    {}  // namespace guetzli
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    
    {  return total_size;
}
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);
    
    	ScopedJstring tag_jstr(env, tag);
	ScopedJstring filename_jstr(env, filename);
	ScopedJstring funcname_jstr(env, funcname);
	ScopedJstring log_jst(env, _log);
    
    #include 'wakeuplock.h'
#include 'assert/__assert.h'
#include 'xlogger/xlogger.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
/*
 * scop_jenv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */