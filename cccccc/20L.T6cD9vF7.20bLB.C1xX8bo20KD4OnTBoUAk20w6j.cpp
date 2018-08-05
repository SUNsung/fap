
        
        #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/db.hpp'
#include 'caffe/util/format.hpp'
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #endif  // CAFFE_CUDNN_SIGMOID_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {
}  // namespace caffe
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      /// Threshold the source image as efficiently as possible to the output Pix.
  /// Creates a Pix and sets pix to point to the resulting pointer.
  /// Caller must use pixDestroy to free the created Pix.
  /// Returns false on error.
  virtual bool ThresholdToPix(PageSegMode pageseg_mode, Pix** pix);
    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
    namespace tesseract {
    }
    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class P2, class P3, class P4, class P5, class A1, class A2, class A3>
inline typename _TessMemberResultCallback_5_3<true,R,T1,P1,P2,P3,P4,P5,A1,A2,A3>::base*
NewTessCallback( T1* obj, R (T2::*member)(P1,P2,P3,P4,P5,A1,A2,A3) , typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3, typename Identity<P4>::type p4, typename Identity<P5>::type p5) {
  return new _TessMemberResultCallback_5_3<true,R,T1,P1,P2,P3,P4,P5,A1,A2,A3>(obj, member, p1, p2, p3, p4, p5);
}
#endif
    
    // Returns true if the given blob overlaps more than max_overlaps blobs
// in the current grid.
bool CCNonTextDetect::BlobOverlapsTooMuch(BLOBNBOX* blob, int max_overlaps) {
  // Search the grid to see what intersects it.
  // Setup a Rectangle search for overlapping this blob.
  BlobGridSearch rsearch(this);
  const TBOX& box = blob->bounding_box();
  rsearch.StartRectSearch(box);
  rsearch.SetUniqueMode(true);
  BLOBNBOX* neighbour;
  int overlap_count = 0;
  while (overlap_count <= max_overlaps &&
         (neighbour = rsearch.NextRectSearch()) != nullptr) {
    if (box.major_overlap(neighbour->bounding_box())) {
      ++overlap_count;
      if (overlap_count > max_overlaps)
        return true;
    }
  }
  return false;
}
    
    // Insert the given blocks at the front of the completed_blocks_ list so
// they can be kept in the correct reading order.
void WorkingPartSet::InsertCompletedBlocks(BLOCK_LIST* blocks,
                                           TO_BLOCK_LIST* to_blocks) {
  BLOCK_IT block_it(&completed_blocks_);
  block_it.add_list_before(blocks);
  TO_BLOCK_IT to_block_it(&to_blocks_);
  to_block_it.add_list_before(to_blocks);
}
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    static void sigint_handler(int x) { got_sigint = true; }
    
    #include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include 'route_guide.grpc.pb.h'
    
     private:
  static Result Sample();
    
      grpc::Status GetGauge(ServerContext* context, const GaugeRequest* request,
                        GaugeResponse* response) override;
    
    class SubProcess {
 public:
  SubProcess(const std::vector<std::string>& args);
  ~SubProcess();
    }
    
    namespace HPHP {
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    bool Vunit::needsRegAlloc() const {
  if (next_vr > Vreg::V0) return true;
    }
    
    #ifdef HAVE_NUMA
    
    #include 'hphp/runtime/base/apc-collection.h'
#include 'hphp/runtime/base/apc-handle-defs.h'
#include 'hphp/runtime/base/apc-handle.h'
#include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/array-iterator.h'
#include 'hphp/runtime/base/builtin-functions.h'
#include 'hphp/runtime/base/data-walker.h'
#include 'hphp/runtime/base/externals.h'
#include 'hphp/runtime/base/tv-type.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
    
    
    {
    {    obj->setWeakRefed();
    req::weak_ptr<WeakRefData> weak_data = req::weak_ptr<WeakRefData>(wr_data);
    if (!(weakmap->insert(
            {(uintptr_t)obj.get(), weak_data}).second)) {
      // Failure. Key should be unique.  We just checked.
      assertx(false);
    }
  }
  return wr_data;
}
    
    void* BumpExtentAllocator::
extent_alloc(extent_hooks_t* extent_hooks, void* addr,
             size_t size, size_t alignment, bool* zero,
             bool* commit, unsigned arena_ind) {
  assert(extent_hooks == &BumpExtentAllocator::s_hooks);
  if (addr != nullptr) return nullptr;
  assert(folly::isPowTwo(alignment));
  const uintptr_t mask = ~(alignment - 1);
    }
    
      ClosureHdr* hdr() {
    return reinterpret_cast<ClosureHdr*>(this) - 1;
  }
  const ClosureHdr* hdr() const {
    return reinterpret_cast<const ClosureHdr*>(this) - 1;
  }
    
      /// Open the acceptor using the specified protocol.
  /**
   * This function opens the socket acceptor so that it will use the specified
   * protocol.
   *
   * @param protocol An object specifying which protocol is to be used.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * acceptor.open(boost::asio::ip::tcp::v4());
   * @endcode
   */
  void open(const protocol_type& protocol = protocol_type())
  {
    boost::system::error_code ec;
    this->get_service().open(this->get_implementation(), protocol, ec);
    boost::asio::detail::throw_error(ec, 'open');
  }
    
      /// Construct, passing the specified argument to initialise the next layer.
  template <typename Arg>
  buffered_read_stream(Arg& a, std::size_t buffer_size)
    : next_layer_(a),
      storage_(buffer_size)
  {
  }
    
    namespace boost {
namespace asio {
    }
    }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
      // Get an iterator for the beginning of the map.
  iterator begin()
  {
    return values_.begin();
  }
    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    
    {  // Destroy all operations associated with the descriptor.
  op_queue<operation> ops;
  boost::system::error_code ec;
  for (int i = 0; i < max_ops; ++i)
    op_queue_[i].cancel_operations(descriptor, ops, ec);
}
    
            const uint32_t w = ft_bitmap->bitmap.width;
        const uint32_t h = ft_bitmap->bitmap.rows;
        const uint8_t* src = ft_bitmap->bitmap.buffer;
        const uint32_t src_pitch = ft_bitmap->bitmap.pitch;
    
    
    {    // Store letters in KeysDown[] array as both uppercase and lowercase + Handle GLUT translating CTRL+A..CTRL+Z as 1..26. 
    // This is a hacky mess but GLUT is unable to distinguish e.g. a TAB key from CTRL+I so this is probably the best we can do here.
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = true;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = true;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = true;
    else
        io.KeysDown[c] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    #ifdef IMGUI_VULKAN_DEBUG_REPORT
    // Remove the debug report callback
    auto vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkDestroyDebugReportCallbackEXT');
    vkDestroyDebugReportCallbackEXT(g_Instance, g_DebugReport, g_Allocator);
#endif // IMGUI_VULKAN_DEBUG_REPORT
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    template<typename T>
inline JStaticField<T>::operator bool() const noexcept {
  return field_id_ != nullptr;
}
    
        void setPadding(int edge, double padding);
    void setPaddingPercent(int edge, double padding);
    
    namespace facebook {
    }
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }