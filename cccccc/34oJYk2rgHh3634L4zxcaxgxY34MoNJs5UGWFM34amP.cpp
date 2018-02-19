
        
          /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    
static inline __swift_shims_dispatch_block_t
_swift_dispatch_block_create_with_qos_class(
    dispatch_block_flags_t flags,
    qos_class_t qos,
    int relative_priority,
    __swift_shims_dispatch_block_t _Nonnull block) {
  return dispatch_block_create_with_qos_class(
      flags, qos, relative_priority, block);
}
    
      void compute();
    
    StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    namespace leveldb {
    }
    
    // Return the length of the encoding of 'key'.
inline size_t InternalKeyEncodingLength(const ParsedInternalKey& key) {
  return key.user_key.size() + 8;
}
    
    struct TableAndFile {
  RandomAccessFile* file;
  Table* table;
};
    
    #include <vector>
    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_DECONV_LAYER_HPP_

    
      /**
   * @brief Computes the error gradient w.r.t. the exp inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \frac{\partial E}{\partial y} y \alpha \log_e(gamma)
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    void GPUDataTransferer::CopyCPUToGPUAsync(void* cpuBuffer, size_t totalSize, void* gpuBuffer)
{
    m_inner->CopyCPUToGPUAsync(cpuBuffer, 1, totalSize, gpuBuffer);
    m_inner->RecordCPUToGPUCopy();
}
    
        int traceLevel = config(L'traceLevel', 0);
    if (config.Exists(L'createNetwork'))
    {
        createNetworkFn = GetCreateNetworkFn(config); // (we need a separate function needed due to template code)
        return true;
    }
    else if (config.Exists(L'SimpleNetworkBuilder'))
    {
        const ConfigRecordType& simpleNetworkBuilderConfig(config(L'SimpleNetworkBuilder'));
        auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(simpleNetworkBuilderConfig); // parses the configuration and stores it in the SimpleNetworkBuilder object
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription()); // this operates based on the configuration saved above
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy NDL
    else if (config.Exists(L'NDLNetworkBuilder'))
    {
        const ConfigRecordType& ndlNetworkBuilderConfig(config(L'NDLNetworkBuilder'));
        shared_ptr<NDLBuilder<ElemType>> netBuilder = make_shared<NDLBuilder<ElemType>>(ndlNetworkBuilderConfig);
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription());
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy test mode for BrainScript. Will go away once we fully integrate with BS.
    else if (config.Exists(L'BrainScriptNetworkBuilder') || config.Exists(L'ExperimentalNetworkBuilder' /*legacy name*/))
    {
        // We interface with outer old CNTK config by taking the inner part, which we get as a string, as BrainScript.
        // We prepend a few standard definitions, and also definition of deviceId and precision, which all objects will pull out again when they are being constructed.
        // BUGBUG: We are not getting TextLocations right in this way! Do we need to inject location markers into the source? Moot once we fully switch to BS
        wstring sourceOfNetwork = config.Exists(L'BrainScriptNetworkBuilder') ? config(L'BrainScriptNetworkBuilder') : config(L'ExperimentalNetworkBuilder');
        if (sourceOfNetwork.find_first_of(L'([{') != 0)
            InvalidArgument('BrainScript network description must be either a BS expression in ( ) or a config record in { }');
    }
    }
    
    class ConfigException : public Microsoft::MSR::ScriptableObjects::ScriptingException
{
    vector<TextLocation> locations; // error location (front()) and evaluation parents (upper)
public:
    // Note: All our Error objects use wide strings, which we round-trip through runtime_error as utf8.
    ConfigException(const wstring& msg, TextLocation where)
        : Microsoft::MSR::ScriptableObjects::ScriptingException(msra::strfun::utf8(msg))
    {
        locations.push_back(where);
    }
    }
    
        // parse a 'key=value' pair and create the appropriate node for what was seen
    // key=Function(x,y,z) - function with return
    // Function(x,y,z) - function with no return
    // HDim = 256 - inline NDL command
    // model1=[...] - Embedded NDL script
    std::string::size_type ParseValue(const std::string& stringParse, std::string::size_type tokenStart, std::string::size_type tokenEnd)
    {
        // skip leading spaces
        tokenStart = stringParse.find_first_not_of(' \t', tokenStart);
        auto keyEnd = stringParse.find_first_of(OPENBRACES '=', tokenStart);
        bool equalFound = (keyEnd != npos && keyEnd < tokenEnd && stringParse[keyEnd] == '=');
        std::string key = stringParse.substr(tokenStart, keyEnd - tokenStart);
        Trim(key);
    }
    
    public:
    float4()
    {
    } // uninitialized
    float4(const float4& f4)
        : v(f4.v)
    {
    }
    float4& operator=(const float4& other)
    {
        v = other.v;
        return *this;
    }
    
    Status TestServiceImpl::Echo(ServerContext* context, const EchoRequest* request,
                             EchoResponse* response) {
  // A bit of sleep to make sure that short deadline tests fail
  if (request->has_param() && request->param().server_sleep_us() > 0) {
    gpr_sleep_until(
        gpr_time_add(gpr_now(GPR_CLOCK_MONOTONIC),
                     gpr_time_from_micros(request->param().server_sleep_us(),
                                          GPR_TIMESPAN)));
  }
    }
    
    std::shared_ptr<Channel> CreateTestChannel(
    const grpc::string& server, const grpc::string& override_hostname,
    bool enable_ssl, bool use_prod_roots);
    
    TEST(ServerRequestCallTest, ShortDeadlineDoesNotCauseOkayFalse) {
  std::mutex mu;
  bool shutting_down = false;
    }
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    #ifdef BAZEL_BUILD
#include 'examples/protos/helloworld.grpc.pb.h'
#else
#include 'helloworld.grpc.pb.h'
#endif
    
    using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;
using grpc::Status;
using routeguide::Point;
using routeguide::Feature;
using routeguide::Rectangle;
using routeguide::RouteSummary;
using routeguide::RouteNote;
using routeguide::RouteGuide;
    
    namespace grpc_node_generator {
    }
    
      static bool all_empty(const boost::asio::mutable_buffers_1& buffer_sequence)
  {
    return boost::asio::buffer_size(buffer_sequence) == 0;
  }
    
    #include <boost/asio/detail/config.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_EVENT_HPP
#define BOOST_ASIO_DETAIL_EVENT_HPP
    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::mutable_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
    
    {    // loop over all rows and fill column entries
    // num_nonzeros[fid] = how many nonzeros have this feature accumulated so far?
    std::vector<size_t> num_nonzeros;
    num_nonzeros.resize(nfeature);
    std::fill(num_nonzeros.begin(), num_nonzeros.end(), 0);
    for (size_t rid = 0; rid < nrow; ++rid) {
      const size_t ibegin = gmat.row_ptr[rid];
      const size_t iend = gmat.row_ptr[rid + 1];
      size_t fid = 0;
      for (size_t i = ibegin; i < iend; ++i) {
        const uint32_t bin_id = gmat.index[i];
        while (bin_id >= gmat.cut->row_ptr[fid + 1]) {
          ++fid;
        }
        if (type_[fid] == kDenseColumn) {
          XGBOOST_TYPE_SWITCH(this->dtype, {
            const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
            const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
            DType* begin = reinterpret_cast<DType*>(&index_[block_offset]) + elem_offset;
            begin[rid] = static_cast<DType>(bin_id - index_base_[fid]);
          });
        } else {
          XGBOOST_TYPE_SWITCH(this->dtype, {
            const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
            const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
            DType* begin = reinterpret_cast<DType*>(&index_[block_offset]) + elem_offset;
            begin[num_nonzeros[fid]] = static_cast<DType>(bin_id - index_base_[fid]);
          });
          row_ind_[boundary_[fid].row_ind_begin + num_nonzeros[fid]] = rid;
          ++num_nonzeros[fid];
        }
      }
    }
  }
    
    #if defined(__GNUC__) && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 8) || __GNUC__ > 4) && \
    !defined(__CUDACC__)
#include <parallel/algorithm>
#define XGBOOST_PARALLEL_SORT(X, Y, Z) __gnu_parallel::sort((X), (Y), (Z))
#define XGBOOST_PARALLEL_STABLE_SORT(X, Y, Z) \
  __gnu_parallel::stable_sort((X), (Y), (Z))
#elif defined(_MSC_VER) && (!__INTEL_COMPILER)
#include <ppl.h>
#define XGBOOST_PARALLEL_SORT(X, Y, Z) concurrency::parallel_sort((X), (Y), (Z))
#define XGBOOST_PARALLEL_STABLE_SORT(X, Y, Z) std::stable_sort((X), (Y), (Z))
#else
#define XGBOOST_PARALLEL_SORT(X, Y, Z) std::sort((X), (Y), (Z))
#define XGBOOST_PARALLEL_STABLE_SORT(X, Y, Z) std::stable_sort((X), (Y), (Z))
#endif
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplGlfwGL3_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-01-25: Inputs: Added gamepad support if ImGuiNavFlags_EnableGamepad is set.
//  2018-01-25: Inputs: Honoring the io.WantMoveMouse by repositioning the mouse by using navigation and ImGuiNavFlags_MoveMouse is set.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-07: OpenGL: Changed GLSL shader version from 330 to 150. (Also changed GL context from 3.3 to 3.2 in example's main.cpp)
//  2017-09-01: OpenGL: Save and restore current bound sampler. Save and restore current polygon mode.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2017-05-01: OpenGL: Fixed save and restore of current blend function state.
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.
//  2016-09-05: OpenGL: Fixed save and restore of current scissor rectangle.
//  2016-04-30: OpenGL: Fixed save and restore of current GL_ACTIVE_TEXTURE.
    
        ALLEGRO_LOCKED_REGION *locked_img = al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_WRITEONLY);
    if (!locked_img)
    {
        al_destroy_bitmap(img);
        return false;
    }
    memcpy(locked_img->data, pixels, sizeof(int)*width*height);
    al_unlock_bitmap(img);
    
        // End packing
    stbtt_PackEnd(&spc);
    ImGui::MemFree(buf_rects);
    buf_rects = NULL;
    
        // Main loop
    bool running = true;
    while (running)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplA5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplA5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                Imgui_ImplA5_CreateDeviceObjects();
            }
        }
        ImGui_ImplA5_NewFrame();
    }
    
    // Data
static HWND                     g_hWnd = 0;
static INT64                    g_Time = 0;
static INT64                    g_TicksPerSecond = 0;
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui