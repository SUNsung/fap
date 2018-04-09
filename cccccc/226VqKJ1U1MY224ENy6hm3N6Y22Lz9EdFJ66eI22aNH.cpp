
        
        
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    TEST(PartialRunMgr, PartialRunRemoved) {
  // Test that PartialRunMgr ensures that the PartialRun is deleted after
  // ExecutorDone and PartialRunDone are called.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
    }
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
    class Cluster;
struct GrapplerItem;
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    // Converts a string of a form like '331.79' to a DriverVersion{331, 79}.
port::StatusOr<DriverVersion> StringToDriverVersion(const string &value);
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    void HloReachabilityMap::SetReachable(const HloInstruction* a,
                                      const HloInstruction* b) {
  GetBitVector(b).Set(GetIndex(a));
}
    
    // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
    #include 'content/nw/src/api/api_messages.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'content/nw/src/api/shortcut/global_shortcut_listener.h'
#include 'content/nw/src/api/shortcut/shortcut.h'
#include 'content/nw/src/breakpad_linux.h'
#include 'content/nw/src/browser/native_window.h'
#include 'content/nw/src/browser/net_disk_cache_remover.h'
#include 'content/nw/src/nw_package.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/nw/src/shell_browser_context.h'
#include 'content/common/view_messages.h'
#include 'content/public/browser/browser_thread.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_process_host.h'
#include 'net/proxy/proxy_config.h'
#include 'net/proxy/proxy_config_service_fixed.h'
#include 'net/proxy/proxy_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
    
    
    {}  // namespace nwapi
    
      void InitializeOnIOThread(
      const scoped_refptr<net::CertVerifyProc>& verify_proc);
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    namespace content {
class RenderView;
}
    
    namespace base {
class DictionaryValue;
class ListValue;
class RunLoop;
}
    
    #include <map>
    
    
    {}
    
    void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
    
    {}
    
    Vec3d median3d(InputArray m);
    
    
    {
    {
    {} } } // namespace cv::ocl::runtime
    
    inline int ReadUint8(const uint8_t* data, size_t* pos) {
  return data[(*pos)++];
}
    
      // Choose sharpened, blurred or original per pixel
  std::vector<float> sharpened = Sharpen(yuv[channel], w, h, sigma, amount);
  std::vector<float> blurred = Blur(yuv[channel], w, h);
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      size_t index = y * w + x;
    }
    }
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    
    {}  // namespace guetzli
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    #include 'guetzli/output_image.h'
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);