
        
        
    {
    {
    {      // Restore invariant for the next iteration of the loop.
      substitution_base_cost = scratch[j - 1];  // = cost(i - 1, j)
      scratch[j - 1] = cheapest;                // = cost(i, j)
      insertion_cost = cheapest + 1;            // = cost(i, j) + 1
    }
  }
  return scratch[t_size - 1];
}
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Sent by the renderer when the draggable regions are updated.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UpdateDraggableRegions,
                    std::vector<extensions::DraggableRegion> /* regions */)
    
      // Post 'open' event.
  static void EmitOpenEvent(const std::string& path);
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    
    {}  // namespace nwapi

    
    void MenuItem::SetIconIsTemplate(bool isTemplate) {
}
    
    #include 'base/command_line.h'
#include 'base/memory/ptr_util.h'
#include 'chrome/browser/browsing_data/browsing_data_appcache_helper.h'
#include 'chrome/browser/browsing_data/browsing_data_helper.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_app.h'
#include 'content/nw/src/nw_base.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/storage_partition.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'extensions/browser/app_window/app_window_registry.h'
#include 'extensions/browser/app_window/native_app_window.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'net/proxy_resolution/proxy_config.h'
#include 'net/proxy_resolution/proxy_config_service_fixed.h'
#include 'net/proxy_resolution/proxy_resolution_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
#include 'net/traffic_annotation/network_traffic_annotation_test_helper.h'
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {    for (auto& media_list : media_list_) {
      media_list->StartUpdating(this);
    }
  }
    
    int main(int argc, char** argv) {
#ifndef GFLAGS_GFLAGS_H_
  namespace gflags = google;
#endif
    }
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #include <vector>
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
internal::ValueArray6<T1, T2, T3, T4, T5, T6> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6) {
  return internal::ValueArray6<T1, T2, T3, T4, T5, T6>(v1, v2, v3, v4, v5, v6);
}
    
    
    {  virtual void ReportTestPartResult(const TestPartResult& result) = 0;
};
    
    $for k [[
      if (current$(i+2-k)_ == end$(i+2-k)_) {
        current$(i+2-k)_ = begin$(i+2-k)_;
        ++current$(i+2-k-1)_;
      }
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(ParameterizedTestFactory);
};
    
      template <GTEST_7_TYPENAMES_(U)>
  tuple(const GTEST_7_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_) {}
    
    // ByRef<T>::type is T if T is a reference; otherwise it's const T&.
template <typename T>
struct ByRef { typedef const T& type; };  // NOLINT
template <typename T>
struct ByRef<T&> { typedef T& type; };  // NOLINT
    
      // Returns true iff n is a prime number.
  virtual bool IsPrime(int n) const = 0;
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
      // Expects the appropriate results from the compressed_  unicharset_.
  void ExpectCorrect(const string& lang) {
    // Count the number of times each code is used in each element of
    // RecodedCharID.
    RecodedCharID zeros;
    for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) zeros.Set(i, 0);
    int code_range = compressed_.code_range();
    std::vector<RecodedCharID> times_seen(code_range, zeros);
    for (int u = 0; u <= unicharset_.size(); ++u) {
      if (u != UNICHAR_SPACE && u != null_char_ &&
          (u == unicharset_.size() || (unicharset_.has_special_codes() &&
                                       u < SPECIAL_UNICHAR_CODES_COUNT))) {
        continue;  // Not used so not encoded.
      }
      RecodedCharID code;
      int len = compressed_.EncodeUnichar(u, &code);
      // Check round-trip encoding.
      int unichar_id;
      GenericVector<UNICHAR_ID> normed_ids;
      if (u == null_char_ || u == unicharset_.size()) {
        unichar_id = null_char_;
      } else {
        unichar_id = u;
      }
      EXPECT_EQ(unichar_id, compressed_.DecodeUnichar(code));
      // Check that the codes are valid.
      for (int i = 0; i < len; ++i) {
        int code_val = code(i);
        EXPECT_GE(code_val, 0);
        EXPECT_LT(code_val, code_range);
        times_seen[code_val].Set(i, times_seen[code_val](i) + 1);
      }
    }
    // Check that each code is used in at least one position.
    for (int c = 0; c < code_range; ++c) {
      int num_used = 0;
      for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) {
        if (times_seen[c](i) != 0) ++num_used;
      }
      EXPECT_GE(num_used, 1) << 'c=' << c << '/' << code_range;
    }
    // Check that GetNextCodes/GetFinalCodes lists match the times_seen,
    // and create valid codes.
    RecodedCharID code;
    CheckCodeExtensions(code, times_seen);
    // Finally, we achieved all that using a codebook < 10% of the size of
    // the original unicharset, for CK or Indic, and 20% with J, but just
    // no bigger for all others.
    if (IsCJKLang(lang) || IsIndicLang(lang)) {
      EXPECT_LT(code_range, unicharset_.size() / (lang == 'jpn' ? 5 : 10));
    } else {
      EXPECT_LE(code_range, unicharset_.size() + 1);
    }
    LOG(INFO) << 'Compressed unicharset of ' << unicharset_.size() << ' to '
              << code_range;
  }
  // Checks for extensions of the current code that either finish a code, or
  // extend it and checks those extensions recursively.
  void CheckCodeExtensions(const RecodedCharID& code,
                           const std::vector<RecodedCharID>& times_seen) {
    RecodedCharID extended = code;
    int length = code.length();
    const GenericVector<int>* final_codes = compressed_.GetFinalCodes(code);
    if (final_codes != nullptr) {
      for (int i = 0; i < final_codes->size(); ++i) {
        int ending = (*final_codes)[i];
        EXPECT_GT(times_seen[ending](length), 0);
        extended.Set(length, ending);
        int unichar_id = compressed_.DecodeUnichar(extended);
        EXPECT_NE(INVALID_UNICHAR_ID, unichar_id);
      }
    }
    const GenericVector<int>* next_codes = compressed_.GetNextCodes(code);
    if (next_codes != nullptr) {
      for (int i = 0; i < next_codes->size(); ++i) {
        int extension = (*next_codes)[i];
        EXPECT_GT(times_seen[extension](length), 0);
        extended.Set(length, extension);
        CheckCodeExtensions(extended, times_seen);
      }
    }
  }
    
    // Replicates the samples and perturbs them if the enable_replication_ flag
// is set. MUST be used after the last call to OrganizeByFontAndClass on
// the training samples, ie after IncludeJunk if it is going to be used, as
// OrganizeByFontAndClass will eat the replicated samples into the regular
// samples.
void MasterTrainer::ReplicateAndRandomizeSamplesIfRequired() {
  if (enable_replication_) {
    if (debug_level_ > 0)
      tprintf('ReplicateAndRandomize...\n');
    verify_samples_.ReplicateAndRandomizeSamples();
    samples_.ReplicateAndRandomizeSamples();
    samples_.IndexFeatures(feature_space_);
  }
}
    
      // Find the next adjacent (to left or right) blob on this text line,
  // with the constraint that it must vertically significantly overlap
  // the [top_y, bottom_y] range.
  // If ignore_images is true, then blobs with aligned_text() < 0 are treated
  // as if they do not exist.
  BLOBNBOX* AdjacentBlob(const BLOBNBOX* bbox,
                         bool look_left, bool ignore_images,
                         double min_overlap_fraction,
                         int gap_limit, int top_y, int bottom_y);
    
    #include 'matrix.h'
#include 'include_gunit.h'
#include 'genericvector.h'
#include 'tprintf.h'
    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      // See class comment for arguments.
  void Init(const IndexMapBiDi* charset_map,
            const ShapeTable* shape_table,
            bool randomize,
            TrainingSampleSet* sample_set);
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
      ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
    
    {  return 0;
}

    
    /* A GrpcPolledFdFactory is 1-to-1 with and owned by the
 * ares event driver. It knows how to create GrpcPolledFd's
 * for the current platform, and the ares driver uses it for all of
 * its fd's. */
class GrpcPolledFdFactory {
 public:
  virtual ~GrpcPolledFdFactory() {}
  /* Creates a new wrapped fd for the current platform */
  virtual GrpcPolledFd* NewGrpcPolledFdLocked(
      ares_socket_t as, grpc_pollset_set* driver_pollset_set,
      grpc_combiner* combiner) GRPC_ABSTRACT;
  /* Optionally configures the ares channel after creation */
  virtual void ConfigureAresChannelLocked(ares_channel channel) GRPC_ABSTRACT;
    }
    
    #include <ares.h>
    
    static bool check_destroyable(grpc_winsocket* winsocket) {
  return winsocket->destroy_called == true &&
         winsocket->write_info.closure == NULL &&
         winsocket->read_info.closure == NULL;
}
    
    const grpc_channel_filter grpc_client_auth_filter = {
    auth_start_transport_stream_op_batch,
    grpc_channel_next_op,
    sizeof(call_data),
    init_call_elem,
    set_pollset_or_pollset_set,
    destroy_call_elem,
    sizeof(channel_data),
    init_channel_elem,
    destroy_channel_elem,
    grpc_channel_next_get_info,
    'client-auth'};

    
    gpr_arena* grpc_call_get_arena(grpc_call* call) { return call->arena; }
    
    int main(int argc, char** argv) {
  grpc_test_init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#else
int main() {
  printf('*** WARNING: this test is only supported on Linux systems ***\n');
  return 0;
}
#endif  // GPR_LINUX

    
    grpc::string GetServiceAccountJsonKey() {
  static grpc::string json_key;
  if (json_key.empty()) {
    std::ifstream json_key_file(FLAGS_service_account_key_file);
    std::stringstream key_stream;
    key_stream << json_key_file.rdbuf();
    json_key = key_stream.str();
  }
  return json_key;
}
    
    	FlagScopeGuard(bool &p_flag) :
			flag(p_flag) {
		flag = !flag;
	}
    
    
    {	return klass;
}
    
    	// Let's use the no-namespace format for these too
	GDMonoClass *class_MonoObject;
	GDMonoClass *class_bool;
	GDMonoClass *class_int8_t;
	GDMonoClass *class_int16_t;
	GDMonoClass *class_int32_t;
	GDMonoClass *class_int64_t;
	GDMonoClass *class_uint8_t;
	GDMonoClass *class_uint16_t;
	GDMonoClass *class_uint32_t;
	GDMonoClass *class_uint64_t;
	GDMonoClass *class_float;
	GDMonoClass *class_double;
	GDMonoClass *class_String;
	GDMonoClass *class_IntPtr;
    
    
    {			for (int i = 0; i < indices_map_size; ++i) {
				bt_vertices.write[3 * i + 0] = p_vertices_read[indices_table[i][0]].x;
				bt_vertices.write[3 * i + 1] = p_vertices_read[indices_table[i][0]].y;
				bt_vertices.write[3 * i + 2] = p_vertices_read[indices_table[i][0]].z;
			}
		}
    
    	if ('point_index' == p_what) {
		r_ret = r[p_item].point_index;
	} else if ('spatial_attachment_path' == p_what) {
		r_ret = r[p_item].spatial_attachment_path;
	} else if ('offset' == p_what) {
		r_ret = r[p_item].offset;
	} else {
		return false;
	}
    
    	Node *_get_node(const NodePath &p_path) const;
	Node *_get_child_by_name(const StringName &p_name) const;
    
    static int set_addresses(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* data,
		  size_t len) {
	if (msg->ifa_family == AF_INET) {
		sockaddr_in* sa = new sockaddr_in;
		sa->sin_family = AF_INET;
		memcpy(&sa->sin_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else if (msg->ifa_family == AF_INET6) {
		sockaddr_in6* sa = new sockaddr_in6;
		sa->sin6_family = AF_INET6;
		sa->sin6_scope_id = msg->ifa_index;
		memcpy(&sa->sin6_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else {
		return -1;
	}
	return 0;
}
    
    
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    void ImGui_ImplFreeGLUT_Shutdown()
{
}
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
            // Get the function pointer (required for any extensions)
        auto vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkCreateDebugReportCallbackEXT');
        IM_ASSERT(vkCreateDebugReportCallbackEXT != NULL);
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);