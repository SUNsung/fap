// Functor used by ReverseOp to do the computations.
template <typename Device, typename T, int Dims>
struct Reverse {
  void operator()(const Device& d, typename TTypes<T, Dims>::ConstTensor input,
                  const Eigen::array<bool, Dims>& reverse_dims,
                  typename TTypes<T, Dims>::Tensor output) {
    output.device(d) = input.reverse(reverse_dims);
  }
};
    
      // Copy the input dimensions to output except make the last dimension 1.
  TF_LITE_ENSURE(context, NumDimensions(input) >= 1);
  TfLiteIntArray* output_size = TfLiteIntArrayCopy(input->dims);
  output_size->data[NumDimensions(input) - 1] = 1;
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
    #include 'tensorflow/core/platform/platform.h'
    
    template <typename T>
__global__ void DynamicStitchKernel(const int32 slice_size,
                                    const int32 output_size,
                                    CudaDeviceArrayStruct<int32> input_indices,
                                    CudaDeviceArrayStruct<const T*> input_ptrs,
                                    T* output) {
  int32* data_indices = GetCudaDeviceArrayOnDevice(&input_indices);
  const T** data_ptrs = GetCudaDeviceArrayOnDevice(&input_ptrs);
  CUDA_1D_KERNEL_LOOP(output_index, output_size) {
    const int32 slice_id = output_index / slice_size;
    const int32 slice_offset = output_index % slice_size;
    const int32 input_index = data_indices[slice_id];
    if (input_index != -1) {
      output[output_index] = ldg(data_ptrs[input_index] + slice_offset);
    }
  }
}
    
        GraphDef result;
    TransformFuncContext context;
    context.input_names = {};
    context.output_names = {'mul_node1'};
    TF_ASSERT_OK(RemoveDevice(graph_def, context, &result));
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #ifndef ATOM_BROWSER_RELAUNCHER_H_
#define ATOM_BROWSER_RELAUNCHER_H_
    
    namespace base {
class FilePath;
}
    
    #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
      // A service is requesting a sync datatype refresh for the current profile.
  // The details value is a const syncer::ModelTypeSet.
  // If the payload map is empty, it should be treated as an invalidation for
  // all enabled types. This is used by session sync.
  NOTIFICATION_SYNC_REFRESH_LOCAL,
    
    #ifndef CHROME_BROWSER_CHROME_PROCESS_FINDER_WIN_H_
#define CHROME_BROWSER_CHROME_PROCESS_FINDER_WIN_H_
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    // File name of the Pepper Flash plugin on different platforms.
const base::FilePath::CharType kPepperFlashPluginFilename[] =
#if defined(OS_MACOSX)
    FPL('PepperFlashPlayer.plugin');
#elif defined(OS_WIN)
    FPL('pepflashplayer.dll');
#else  // OS_LINUX, etc.
    FPL('libpepflashplayer.so');
#endif
    
    
    {				total_area += get_shape_aabb(i).get_area();
			}
    
    	virtual Vector2 get_total_gravity() const { return body->gravity; } // get gravity vector working on this body space/area
	virtual real_t get_total_angular_damp() const { return body->area_angular_damp; } // get density of this body space/area
	virtual real_t get_total_linear_damp() const { return body->area_linear_damp; } // get density of this body space/area
    
    	if (cbk->valid_dir != Vector2()) {
		if (p_point_A.distance_squared_to(p_point_B) > cbk->valid_depth * cbk->valid_depth) {
			cbk->invalid_by_dir++;
			return;
		}
		if (cbk->valid_dir.dot((p_point_A - p_point_B).normalized()) < 0.7071) {
			cbk->invalid_by_dir++;
			;
			/*			print_line('A: '+p_point_A);
			print_line('B: '+p_point_B);
			print_line('discard too angled '+rtos(cbk->valid_dir.dot((p_point_A-p_point_B))));
			print_line('resnorm: '+(p_point_A-p_point_B).normalized());
			print_line('distance: '+rtos(p_point_A.distance_to(p_point_B)));
*/
			return;
		}
	}
    
    	AABB p;
	p.position.x = spin[0]->get_value();
	p.position.y = spin[1]->get_value();
	p.position.z = spin[2]->get_value();
	p.size.x = spin[3]->get_value();
	p.size.y = spin[4]->get_value();
	p.size.z = spin[5]->get_value();
    
    
    {}
    
    #endif // incl_HPHP_PAGELET_SERVER_H_

    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    Variant preg_split(const String& pattern,
                   const String& subject,
                   int limit = -1,
                   int flags = 0);
String preg_quote(const String& str, const String& delimiter = null_string);
Variant php_split(const String& spliton, const String& str, int count,
                  bool icase);
    
    
    {  friend struct shared_ptr<T>;
  private:
    std::size_t m_scan_size = 0;
    type_scan::Index m_scan_index = type_scan::kIndexUnknownNoPtrs;
};
    
    Variant ZendPack::unpack(const String& fmt, const String& data) {
  const char *format = fmt.c_str();
  int formatlen = fmt.size();
  const char *input = data.c_str();
  int inputlen = data.size();
  int inputpos = 0;
    }
    
    
    {} // namespace aria2
    
    class AbstractAuthResolver : public AuthResolver {
public:
  AbstractAuthResolver();
    }
    
      PeerConnection* getPeerConnection() const { return peerConnection_; }
    
      DownloadEngine* getDownloadEngine() const { return e_; }
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
      virtual ~AbstractProxyResponseCommand();
    
    #endif // D_ADAPTIVE_FILE_ALLOCATION_ITERATOR_H

    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};
    
      // Don't allow copying
  AuthConfig(const AuthConfig&);
  AuthConfig& operator=(const AuthConfig&);
    
    #include 'common.h'
    
    /**
 * @file
 **/
    
      bool Init() override { return true; }
    
    REGISTER_REGISTERER(BaseCameraTransformer);
#define REGISTER_CAMERA_TRANSFORMER(name) \
  REGISTER_CLASS(BaseCameraTransformer, name)
    
    bool MultiCamerasProjection::Init() {
  if (!GetProtoFromFile(FLAGS_traffic_light_multi_camera_projection_config,
                        &config_)) {
    AERROR << 'Cannot get config proto from file: '
           << FLAGS_traffic_light_multi_camera_projection_config;
    return false;
  }
  // Read camera names from config file
  const std::string &single_projection_name =
      config_.multi_camera_projection_config().single_projection();
    }
    
    
    {
    {
    {}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo
    
      /**
   * @brief Save offline feature values in proto
   * @param Lane sequence
   * @param Vector of feature values
   */
  void SaveOfflineFeatures(LaneSequence* sequence,
                           const std::vector<double>& feature_values);
    
    #ifndef MODULES_PLANNING_MATH_CURVE_MATH_H_
#define MODULES_PLANNING_MATH_CURVE_MATH_H_