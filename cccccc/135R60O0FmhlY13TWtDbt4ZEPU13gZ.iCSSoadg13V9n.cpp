
        
        // Implements the part of the interface that caches and returns remote
// device status attributes.
class WorkerCachePartial : public WorkerCacheInterface {
 public:
  bool GetDeviceLocalityNonBlocking(const string& device,
                                    DeviceLocality* locality) override;
    }
    
    
    {#if GOOGLE_CUDA
// A special GPU kernel for int32.
// TODO(b/25387198): Also enable int32 in device memory. This kernel
// registration requires all int32 inputs and outputs to be in host memory.
REGISTER_KERNEL_BUILDER(Name('Mod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
REGISTER_KERNEL_BUILDER(Name('TruncateMod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
#endif
}  // namespace tensorflow

    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
      double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/contrib/ffmpeg/ffmpeg_lib.h'
#include 'tensorflow/core/framework/common_shape_fns.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
    using namespace cv::ocl::runtime;
    
    void cv::cuda::flip(InputArray, OutputArray, int, Stream&) { throw_no_cuda(); }
    
      /// Return true if no image has been set.
  bool IsEmpty() const;
    
    const ICOORD *dirtab = (ICOORD *) idirtab;
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidBodyLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // Iterator functions designed for use with a simple for loop:
  // for (it.Begin(); !it.AtEnd(); it.Next()) {
  //   const TrainingSample& sample = it.GetSample();
  //   int class_id = it.GetCompactClassID();
  //   ...
  // }
  void Begin();
  bool AtEnd() const;
  const TrainingSample& GetSample() const;
  TrainingSample* MutableSample() const;
  // Returns the total index (from the original set of samples) of the current
  // sample.
  int GlobalSampleIndex() const;
  // Returns the index of the current sample in compact charset space, so
  // in a 2-class problem between x and y, the returned indices will all be
  // 0 or 1, and have nothing to do with the unichar_ids.
  // If the charset_map_ is nullptr, then this is equal to GetSparseClassID().
  int GetCompactClassID() const;
  // Returns the index of the current sample in sparse charset space, so
  // in a 2-class problem between x and y, the returned indices will all be
  // x or y, where x and y may be unichar_ids (no shape_table_) or shape_ids
  // with a shape_table_.
  int GetSparseClassID() const;
  // Moves on to the next indexable sample. If the end is reached, leaves
  // the state such that AtEnd() is true.
  void Next();
    
      // Evaluates the textlineiness of a ColPartition. Uses EvaluateBox below,
  // but uses the median top/bottom for horizontal and median left/right for
  // vertical instead of the bounding box edges.
  // Evaluates for both horizontal and vertical and returns the best result,
  // with a positive value for horizontal and a negative value for vertical.
  int EvaluateColPartition(const ColPartition& part, const DENORM* denorm,
                           bool debug) const;
    
    // Insert the given blocks at the front of the completed_blocks_ list so
// they can be kept in the correct reading order.
void WorkingPartSet::InsertCompletedBlocks(BLOCK_LIST* blocks,
                                           TO_BLOCK_LIST* to_blocks) {
  BLOCK_IT block_it(&completed_blocks_);
  block_it.add_list_before(blocks);
  TO_BLOCK_IT to_block_it(&to_blocks_);
  to_block_it.add_list_before(to_blocks);
}
    
    const char* AbstractOptionHandler::getName() const { return pref_->k; }
    
    
    {} // namespace aria2
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    class AsyncNameResolverMan {
public:
  AsyncNameResolverMan();
  // Destructor does not call disableNameResolverCheck(). Application
  // must call it before the destruction of this object.
  ~AsyncNameResolverMan();
  // Enable IPv4 address lookup. default: true
  void setIPv4(bool ipv4) { ipv4_ = ipv4; }
  // Enable IPv6 address lookup. default: true
  void setIPv6(bool ipv6) { ipv6_ = ipv6; }
  // Returns true if asynchronous name resolution has been started.
  bool started() const;
  // Starts asynchronous name resolution.
  void startAsync(const std::string& hostname, DownloadEngine* e,
                  Command* command);
  // Appends resolved addresses to |res|.
  void getResolvedAddress(std::vector<std::string>& res) const;
  // Adds resolvers to DownloadEngine to check event notification.
  void setNameResolverCheck(DownloadEngine* e, Command* command);
  // Removes resolvers from DownloadEngine.
  void disableNameResolverCheck(DownloadEngine* e, Command* command);
  // Returns true if any of resolvers are added in DownloadEngine.
  bool resolverChecked() const { return resolverCheck_; }
  // Returns status value: 0 for inprogress, 1 for success and -1 for
  // failure.
  int getStatus() const;
  // Returns last error string
  const std::string& getLastError() const;
  // Resets state. Also removes resolvers from DownloadEngine.
  void reset(DownloadEngine* e, Command* command);
    }
    
    class AuthConfig {
private:
  std::string authScheme_;
  std::string user_;
  std::string password_;
    }