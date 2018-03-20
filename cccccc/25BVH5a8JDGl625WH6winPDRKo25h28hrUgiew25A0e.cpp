
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
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
    
      // Inserts the event at the current position into the specified stream.
  port::Status Record(CUDAStream* stream);
    
    // Helper macro to define a plugin ID. To be used only inside plugin
// implementation files. Works by 'reserving' an address/value (guaranteed to be
// unique) inside a process space.
#define PLUGIN_REGISTRY_DEFINE_PLUGIN_ID(ID_VAR_NAME) \
  namespace {                                         \
  int plugin_id_value;                                \
  }                                                   \
  const PluginId ID_VAR_NAME = &plugin_id_value;
    
      // Calls Finalize() and verifies it returns success and the result matches
  // expectations.
  void ExpectSuccess(const NodeDefBuilder& builder,
                     DataTypeSlice expected_in_types,
                     DataTypeSlice expected_out_types, StringPiece proto) {
    NodeDef node_def;
    Status status = builder.Finalize(&node_def);
    TF_EXPECT_OK(status);
    if (!status.ok()) return;
    NodeDef expected;
    protobuf::TextFormat::ParseFromString(strings::StrCat('name: 'n' ', proto),
                                          &expected);
    EXPECT_EQ(node_def.DebugString(), expected.DebugString());
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    
    {    if (arg == '=true') {
      *dst = true;
      return true;
    } else if (arg == '=false') {
      *dst = false;
      return true;
    }
  }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_

    
    net::URLRequestJob* AsarProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  base::FilePath full_path;
  net::FileURLToFilePath(request->url(), &full_path);
  auto* job = new URLRequestAsarJob(request, network_delegate);
  job->Initialize(file_task_runner_, full_path);
  return job;
}
    
    
    {}  // namespace asar
    
    HttpProtocolHandler::~HttpProtocolHandler() {
}
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
    RenderProcessPreferences::RenderProcessPreferences(const Predicate& predicate)
    : predicate_(predicate),
      next_id_(0),
      cache_needs_update_(true) {
  registrar_.Add(this,
                 content::NOTIFICATION_RENDERER_PROCESS_CREATED,
                 content::NotificationService::AllBrowserContextsAndSources());
}
    
    #include 'base/callback.h'
#include 'base/values.h'
#include 'content/public/browser/notification_observer.h'
#include 'content/public/browser/notification_registrar.h'
    
    namespace accelerator_util {
    }
    
    
    {}  // namespace atom
    
            const float max_dist = 10.0f;
        if(black_order[0].second > max_dist || black_order[1].second > max_dist ||
           white_order[0].second > max_dist || white_order[1].second > max_dist)
        {
            continue; // there will be no improvement in this corner position
        }
    
                template<typename T>
            static __device__ __forceinline__ T atomicAdd(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + val);
                    *address = count;
                } while (*address != count);
    }
    
    
    {    virtual size_t getReservedSize() const { return (size_t)-1; }
    virtual size_t getMaxReservedSize() const { return (size_t)-1; }
    virtual void setMaxReservedSize(size_t size) { (void)size; }
    virtual void freeAllReservedBuffers() { }
};
    
    
    {} // namespace
    
    #ifndef           PGEDIT_H
#define           PGEDIT_H
    
    // Constrained fit with a supplied direction vector. Finds the best line_pt,
// that is one of the supplied points having the median cross product with
// direction, ignoring points that have a cross product outside of the range
// [min_dist, max_dist]. Returns the resulting error metric using the same
// reduced set of points.
// *Makes use of floating point arithmetic*
double DetLineFit::ConstrainedFit(const FCOORD& direction,
                                  double min_dist, double max_dist,
                                  bool debug, ICOORD* line_pt) {
  ComputeConstrainedDistances(direction, min_dist, max_dist);
  // Do something sensible with no points or computed distances.
  if (pts_.empty() || distances_.empty()) {
    line_pt->set_x(0);
    line_pt->set_y(0);
    return 0.0;
  }
  int median_index = distances_.choose_nth_item(distances_.size() / 2);
  *line_pt = distances_[median_index].data;
  if (debug) {
    tprintf('Constrained fit to dir %g, %g = %d, %d :%d distances:\n',
            direction.x(), direction.y(),
            line_pt->x(), line_pt->y(), distances_.size());
    for (int i = 0; i < distances_.size(); ++i) {
      tprintf('%d: %d, %d -> %g\n', i, distances_[i].data.x(),
              distances_[i].data.y(), distances_[i].key);
    }
    tprintf('Result = %d\n', median_index);
  }
  // Center distances on the fitted point.
  double dist_origin = direction * *line_pt;
  for (int i = 0; i < distances_.size(); ++i) {
    distances_[i].key -= dist_origin;
  }
  return sqrt(EvaluateLineFit());
}
    
    
    {}  // namespace tesseract.
    
    /**********************************************************************
 * QLSQ::clear
 *
 * Function to initialize a QLSQ.
 **********************************************************************/
    
    namespace tesseract {
    }
    
    
    {
  // Total scaled error used by boosting algorithms.
  double scaled_error_;
  // Difference in result rating to be thought of as an 'equal' choice.
  double rating_epsilon_;
  // Vector indexed by font_id from the samples of error accumulators.
  GenericVector<Counts> font_counts_;
  // Counts of the results that map each unichar_id (from samples) to an
  // incorrect shape_id.
  GENERIC_2D_ARRAY<int> unichar_counts_;
  // Count of the number of times each shape_id occurs, is correct, and multi-
  // unichar.
  GenericVector<int> multi_unichar_counts_;
  // Histogram of scores (as percent) for correct answers.
  STATS ok_score_hist_;
  // Histogram of scores (as percent) for incorrect answers.
  STATS bad_score_hist_;
  // Unicharset for printing character ids in results.
  const UNICHARSET& unicharset_;
};
    
    #include 'sampleiterator.h'
    
    namespace grpc_core {
namespace testing {
    }
    }
    
    
    {  bool failed_ = false;
  std::string db_;
  size_t current_ = 0;
  const std::string location_ = '\'location\':';
  const std::string latitude_ = '\'latitude\':';
  const std::string longitude_ = '\'longitude\':';
  const std::string name_ = '\'name\':';
};
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    static void get_resource_usage(double* utime, double* stime) {
#ifdef __linux__
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  *utime = time_double(&usage.ru_utime);
  *stime = time_double(&usage.ru_stime);
#else
  *utime = 0;
  *stime = 0;
#endif
}
    
    #ifdef ANDROID
#include <jni.h>
    
    
    {    ::wakeupLock_delete(object_);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
    // bool JNU_Jstring2Wstring( JNIEnv* _env, const jstring jstr, std::wstring& wstr); //in linux sizeof(wchar_t)==4 but sizeof(jchar)==2
wchar_t* JNU_Jstring2Wchar(JNIEnv* _env, const jstring jstr);
void JNU_FreeWchar(JNIEnv* _env, jstring str, wchar_t* wchar);
jstring JNU_Wstring2Jstring(JNIEnv* _env, const std::wstring& wstr);
jstring JNU_Wchar2JString(JNIEnv* _env, wchar_t* wchar);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
            for( int i=0; i < nVert; i++ )
        {
            // TODO: optimize multiplication on gpu using vertex shader/projection matrix.
            pVertStream[i].x = cmd_list->VtxBuffer[i].pos.x * g_RenderScale.x;
            pVertStream[i].y = cmd_list->VtxBuffer[i].pos.y * g_RenderScale.y;
            pUVStream[i].x = cmd_list->VtxBuffer[i].uv.x;
            pUVStream[i].y = cmd_list->VtxBuffer[i].uv.y;
            pColStream[i] = cmd_list->VtxBuffer[i].col;
        }
    
    
    {    return 0;
}

    
        // Setup render state: fixed-pipeline, alpha-blending, no face culling, no depth testing
    g_pd3dDevice->SetPixelShader(NULL);
    g_pd3dDevice->SetVertexShader(NULL);
    g_pd3dDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
    g_pd3dDevice->SetRenderState(D3DRS_LIGHTING, false);
    g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, false);
    g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
    g_pd3dDevice->SetRenderState(D3DRS_ALPHATESTENABLE, false);
    g_pd3dDevice->SetRenderState(D3DRS_BLENDOP, D3DBLENDOP_ADD);
    g_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    g_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
    g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, true);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
    g_pd3dDevice->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
    g_pd3dDevice->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
    
    void ImGui_ImplGlfw_ScrollCallback(GLFWwindow*, double xoffset, double yoffset)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MouseWheelH += (float)xoffset;
    io.MouseWheel += (float)yoffset;
}
    
    static uint32_t __glsl_shader_vert_spv[] =
{
    0x07230203,0x00010000,0x00080001,0x0000002e,0x00000000,0x00020011,0x00000001,0x0006000b,
    0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
    0x000a000f,0x00000000,0x00000004,0x6e69616d,0x00000000,0x0000000b,0x0000000f,0x00000015,
    0x0000001b,0x0000001c,0x00030003,0x00000002,0x000001c2,0x00040005,0x00000004,0x6e69616d,
    0x00000000,0x00030005,0x00000009,0x00000000,0x00050006,0x00000009,0x00000000,0x6f6c6f43,
    0x00000072,0x00040006,0x00000009,0x00000001,0x00005655,0x00030005,0x0000000b,0x0074754f,
    0x00040005,0x0000000f,0x6c6f4361,0x0000726f,0x00030005,0x00000015,0x00565561,0x00060005,
    0x00000019,0x505f6c67,0x65567265,0x78657472,0x00000000,0x00060006,0x00000019,0x00000000,
    0x505f6c67,0x7469736f,0x006e6f69,0x00030005,0x0000001b,0x00000000,0x00040005,0x0000001c,
    0x736f5061,0x00000000,0x00060005,0x0000001e,0x73755075,0x6e6f4368,0x6e617473,0x00000074,
    0x00050006,0x0000001e,0x00000000,0x61635375,0x0000656c,0x00060006,0x0000001e,0x00000001,
    0x61725475,0x616c736e,0x00006574,0x00030005,0x00000020,0x00006370,0x00040047,0x0000000b,
    0x0000001e,0x00000000,0x00040047,0x0000000f,0x0000001e,0x00000002,0x00040047,0x00000015,
    0x0000001e,0x00000001,0x00050048,0x00000019,0x00000000,0x0000000b,0x00000000,0x00030047,
    0x00000019,0x00000002,0x00040047,0x0000001c,0x0000001e,0x00000000,0x00050048,0x0000001e,
    0x00000000,0x00000023,0x00000000,0x00050048,0x0000001e,0x00000001,0x00000023,0x00000008,
    0x00030047,0x0000001e,0x00000002,0x00020013,0x00000002,0x00030021,0x00000003,0x00000002,
    0x00030016,0x00000006,0x00000020,0x00040017,0x00000007,0x00000006,0x00000004,0x00040017,
    0x00000008,0x00000006,0x00000002,0x0004001e,0x00000009,0x00000007,0x00000008,0x00040020,
    0x0000000a,0x00000003,0x00000009,0x0004003b,0x0000000a,0x0000000b,0x00000003,0x00040015,
    0x0000000c,0x00000020,0x00000001,0x0004002b,0x0000000c,0x0000000d,0x00000000,0x00040020,
    0x0000000e,0x00000001,0x00000007,0x0004003b,0x0000000e,0x0000000f,0x00000001,0x00040020,
    0x00000011,0x00000003,0x00000007,0x0004002b,0x0000000c,0x00000013,0x00000001,0x00040020,
    0x00000014,0x00000001,0x00000008,0x0004003b,0x00000014,0x00000015,0x00000001,0x00040020,
    0x00000017,0x00000003,0x00000008,0x0003001e,0x00000019,0x00000007,0x00040020,0x0000001a,
    0x00000003,0x00000019,0x0004003b,0x0000001a,0x0000001b,0x00000003,0x0004003b,0x00000014,
    0x0000001c,0x00000001,0x0004001e,0x0000001e,0x00000008,0x00000008,0x00040020,0x0000001f,
    0x00000009,0x0000001e,0x0004003b,0x0000001f,0x00000020,0x00000009,0x00040020,0x00000021,
    0x00000009,0x00000008,0x0004002b,0x00000006,0x00000028,0x00000000,0x0004002b,0x00000006,
    0x00000029,0x3f800000,0x00050036,0x00000002,0x00000004,0x00000000,0x00000003,0x000200f8,
    0x00000005,0x0004003d,0x00000007,0x00000010,0x0000000f,0x00050041,0x00000011,0x00000012,
    0x0000000b,0x0000000d,0x0003003e,0x00000012,0x00000010,0x0004003d,0x00000008,0x00000016,
    0x00000015,0x00050041,0x00000017,0x00000018,0x0000000b,0x00000013,0x0003003e,0x00000018,
    0x00000016,0x0004003d,0x00000008,0x0000001d,0x0000001c,0x00050041,0x00000021,0x00000022,
    0x00000020,0x0000000d,0x0004003d,0x00000008,0x00000023,0x00000022,0x00050085,0x00000008,
    0x00000024,0x0000001d,0x00000023,0x00050041,0x00000021,0x00000025,0x00000020,0x00000013,
    0x0004003d,0x00000008,0x00000026,0x00000025,0x00050081,0x00000008,0x00000027,0x00000024,
    0x00000026,0x00050051,0x00000006,0x0000002a,0x00000027,0x00000000,0x00050051,0x00000006,
    0x0000002b,0x00000027,0x00000001,0x00070050,0x00000007,0x0000002c,0x0000002a,0x0000002b,
    0x00000028,0x00000029,0x00050041,0x00000011,0x0000002d,0x0000001b,0x0000000d,0x0003003e,
    0x0000002d,0x0000002c,0x000100fd,0x00010038
};
    
    static void ImGui_ImplGlfw_InstallCallbacks(GLFWwindow* window)
{
    glfwSetMouseButtonCallback(window, ImGui_ImplGlfw_MouseButtonCallback);
    glfwSetScrollCallback(window, ImGui_ImplGlfw_ScrollCallback);
    glfwSetKeyCallback(window, ImGui_ImplGlfw_KeyCallback);
    glfwSetCharCallback(window, ImGui_ImplGlfw_CharCallback);
}