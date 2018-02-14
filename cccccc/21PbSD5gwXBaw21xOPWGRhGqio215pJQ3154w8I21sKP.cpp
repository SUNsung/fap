
        
          // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
    class TestRandomAccessFile : public RandomAccessFile {
  // The file contents is 10 bytes of all A's
  Status Read(uint64 offset, size_t n, StringPiece* result,
              char* scratch) const override {
    Status s;
    for (int i = 0; i < n; ++i) {
      if (offset + i >= 10) {
        n = i;
        s = errors::OutOfRange('EOF');
        break;
      }
      scratch[i] = 'A';
    }
    *result = StringPiece(scratch, n);
    return s;
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Create parent/child pipes for the specified channels and make the
  // parent-side of the pipes non-blocking.
  for (int i = 0; i < kNFds; i++) {
    if (action_[i] == ACTION_PIPE) {
      int pipe_fds[2];
      if (pipe(pipe_fds) < 0) {
        LOG(ERROR) << 'Start cannot create pipe: ' << strerror(errno);
        ClosePipes();
        return false;
      }
      // Handle the direction of the pipe (stdin vs stdout/err).
      if (i == 0) {
        parent_pipe_[i] = pipe_fds[1];
        child_pipe_[i] = pipe_fds[0];
      } else {
        parent_pipe_[i] = pipe_fds[0];
        child_pipe_[i] = pipe_fds[1];
      }
    }
    }
    
    
    {}  // namespace tensorflow

    
    #ifndef TENSORFLOW_LIB_IO_RECORD_WRITER_H_
#define TENSORFLOW_LIB_IO_RECORD_WRITER_H_
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
      // TODO(josh11b): Implement serializing and restoring the state.  Need
  // to create TextLineReaderState proto to store ReaderBaseState,
  // line_number_, and input_buffer_->Tell().
    
    template <typename T>
void DynamicStitchGPUImpl(const Eigen::GpuDevice& gpu_device,
                          const int32 slice_size, const int32 first_dim_size,
                          const CudaDeviceArrayStruct<int>& input_indices,
                          const CudaDeviceArrayStruct<const T*>& input_ptrs,
                          T* output);
    
    
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
      if (info.completionContext)
    sink.adoptSwiftSink(info.completionContext->getResultSink());
    
    void takesData(NSData *object);
NSData *returnsData();
BOOL identityOfData(NSData *data);
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
      /// For a specialized reference, return the set of substitutions applied to
  /// the declaration reference.
  SubstitutionList getSubstitutions() const {
    if (!isSpecialized())
      return { };
    
    return Data.get<SpecializedDeclRef *>()->getSubstitutions();
  }
    
    namespace grpc_core {
    }
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    static const vorbis_residue_template _res_16u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__16u0__single,&_huff_book__16u0__single,
   &_resbook_16u_0,&_resbook_16u_0},
};
static const vorbis_residue_template _res_16u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__short,&_huff_book__16u1__short,
   &_resbook_16u_1,&_resbook_16u_1},
    }
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c4_s_long,&_huff_book__44c4_s_long,
   &_resbook_44s_4,&_resbook_44s_4}
};
static const vorbis_residue_template _res_44s_5[]={
  {2,0,16,  &_residue_44_mid,
   &_huff_book__44c5_s_short,&_huff_book__44c5_s_short,
   &_resbook_44s_5,&_resbook_44s_5},
    
    /* mapping conventions:
   only one submap (this would change for efficient 5.1 support for example)*/
/* Four psychoacoustic profiles are used, one for each blocktype */
static const vorbis_info_mapping0 _map_nominal_u[2]={
  {1, {0,0,0,0,0,0}, {0}, {0}, 0,{0},{0}},
  {1, {0,0,0,0,0,0}, {1}, {1}, 0,{0},{0}}
};
    
     ********************************************************************/
    
    
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    
    {}  // namespace guetzli

    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    #ifndef GUETZLI_JPEG_HUFFMAN_DECODE_H_
#define GUETZLI_JPEG_HUFFMAN_DECODE_H_
    
      void ApplyGlobalQuantization(const int q[kDCTBlockSize]);
    
      // Returns true if the benchmark should continue through another iteration.
  // NOTE: A benchmark may not return from the test until KeepRunning() has
  // returned false.
  bool KeepRunning() {
    if (BENCHMARK_BUILTIN_EXPECT(!started_, false)) {
      StartKeepRunning();
    }
    bool const res = (--total_iterations_ != 0);
    if (BENCHMARK_BUILTIN_EXPECT(!res, false)) {
      FinishKeepRunning();
    }
    return res;
  }