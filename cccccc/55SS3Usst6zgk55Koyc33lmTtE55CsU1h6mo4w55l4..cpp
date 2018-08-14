
        
        
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

    
    
    { private:
  DebugOptions debug_options_;
};
    
        const string file_format =
        str_util::Lowercase(file_format_tensor.scalar<string>()());
    const int32 samples_per_second =
        samples_per_second_tensor.scalar<int32>()();
    const int32 bits_per_second = bits_per_second_tensor.scalar<int32>()();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    #include 'swift/Basic/LLVM.h'
#include 'clang/Index/IndexSymbol.h'
#include 'llvm/ADT/SmallString.h'
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
      virtual bool recordHash(StringRef hash, bool isKnown) = 0;
  virtual bool startDependency(StringRef name, StringRef path, bool isClangModule,
                               bool isSystem, StringRef hash) = 0;
  virtual bool finishDependency(bool isClangModule) = 0;
  virtual Action startSourceEntity(const IndexSymbol &symbol) = 0;
  virtual bool finishSourceEntity(SymbolInfo symInfo, SymbolRoleSet roles) = 0;
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
     private:
  // Struct to store a triplet of unichar, font, distance in the distance cache.
  struct FontClassDistance {
    int unichar_id;
    int font_id;  // Real font id.
    float distance;
  };
  // Simple struct to store information related to each font/class combination.
  struct FontClassInfo {
    FontClassInfo();
    }
    
    struct CrackPos {
  CRACKEDGE** free_cracks;   // Freelist for fast allocation.
  int x;                     // Position of new edge.
  int y;
};
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
      ServerConfig server_config;
  server_config.set_server_type(SYNC_SERVER);
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
    }
    
      /* Otherwise, let's retry, by queuing a read. */
  memset(&tcp->socket->read_info.overlapped, 0, sizeof(OVERLAPPED));
  status = WSARecv(tcp->socket->socket, &buffer, 1, &bytes_read, &flags,
                   &info->overlapped, NULL);
    
    TEST(CancelDuringAresQuery, TestFdsAreDeletedFromPollsetSet) {
  grpc_core::ExecCtx exec_ctx;
  ArgsStruct args;
  ArgsInit(&args);
  // Add fake_other_pollset_set into the mix to test
  // that we're explicitly deleting fd's from their pollset.
  // If we aren't doing so, then the remaining presence of
  // 'fake_other_pollset_set' after the request is done and the resolver
  // pollset set is destroyed should keep the resolver's fd alive and
  // fail the test.
  grpc_pollset_set* fake_other_pollset_set = grpc_pollset_set_create();
  grpc_pollset_set_add_pollset_set(fake_other_pollset_set, args.pollset_set);
  // Note that running the cancellation c-ares test is somewhat irrelevant for
  // this test. This test only cares about what happens to fd's that c-ares
  // opens.
  TestCancelActiveDNSQuery(&args);
  // This test relies on the assumption that cancelling a c-ares query
  // will flush out all callbacks on the current exec ctx, which is true
  // on posix platforms but not on Windows, because fd shutdown on Windows
  // requires a trip through the polling loop to schedule the callback.
  // So we need to do extra polling work on Windows to free things up.
  MaybePollArbitraryPollsetTwice();
  EXPECT_EQ(grpc_iomgr_count_objects_for_testing(), 0u);
  grpc_pollset_set_destroy(fake_other_pollset_set);
}
    
    #include 'src/core/ext/filters/client_channel/client_channel.h'
#include 'src/core/ext/filters/client_channel/resolver.h'
#include 'src/core/ext/filters/client_channel/resolver/dns/c_ares/grpc_ares_wrapper.h'
#include 'src/core/ext/filters/client_channel/resolver_registry.h'
#include 'src/core/lib/channel/channel_args.h'
#include 'src/core/lib/gpr/env.h'
#include 'src/core/lib/gpr/host_port.h'
#include 'src/core/lib/gpr/string.h'
#include 'src/core/lib/gprpp/orphanable.h'
#include 'src/core/lib/iomgr/combiner.h'
#include 'src/core/lib/iomgr/executor.h'
#include 'src/core/lib/iomgr/iomgr.h'
#include 'src/core/lib/iomgr/resolve_address.h'
#include 'src/core/lib/iomgr/sockaddr_utils.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
    
      // Runs all closures in the call combiner and yields the call combiner.
  //
  // All but one of the closures in the list will be scheduled via
  // GRPC_CALL_COMBINER_START(), and the remaining closure will be
  // scheduled via GRPC_CLOSURE_SCHED(), which will eventually result in
  // yielding the call combiner.  If the list is empty, then the call
  // combiner will be yielded immediately.
  void RunClosures(grpc_call_combiner* call_combiner) {
    if (closures_.empty()) {
      GRPC_CALL_COMBINER_STOP(call_combiner, 'no closures to schedule');
      return;
    }
    for (size_t i = 1; i < closures_.size(); ++i) {
      auto& closure = closures_[i];
      GRPC_CALL_COMBINER_START(call_combiner, closure.closure, closure.error,
                               closure.reason);
    }
    if (grpc_call_combiner_trace.enabled()) {
      gpr_log(GPR_INFO,
              'CallCombinerClosureList executing closure while already '
              'holding call_combiner %p: closure=%p error=%s reason=%s',
              call_combiner, closures_[0].closure,
              grpc_error_string(closures_[0].error), closures_[0].reason);
    }
    // This will release the call combiner.
    GRPC_CLOSURE_SCHED(closures_[0].closure, closures_[0].error);
    closures_.clear();
  }
    
      if (!batch->cancel_stream) {
    // TODO(hcaseyal): move this to init_call_elem once issue #15927 is
    // resolved.
    GPR_ASSERT(batch->payload->context != nullptr);
    if (batch->payload->context[GRPC_CONTEXT_SECURITY].value == nullptr) {
      batch->payload->context[GRPC_CONTEXT_SECURITY].value =
          grpc_client_security_context_create(calld->arena);
      batch->payload->context[GRPC_CONTEXT_SECURITY].destroy =
          grpc_client_security_context_destroy;
    }
    grpc_client_security_context* sec_ctx =
        static_cast<grpc_client_security_context*>(
            batch->payload->context[GRPC_CONTEXT_SECURITY].value);
    GRPC_AUTH_CONTEXT_UNREF(sec_ctx->auth_context, 'client auth filter');
    sec_ctx->auth_context =
        GRPC_AUTH_CONTEXT_REF(chand->auth_context, 'client_auth_filter');
  }
    
    #ifndef GRPC_CORE_LIB_SECURITY_SECURITY_CONNECTOR_LOAD_SYSTEM_ROOTS_LINUX_H
#define GRPC_CORE_LIB_SECURITY_SECURITY_CONNECTOR_LOAD_SYSTEM_ROOTS_LINUX_H
    
    TEST(CreateRootCertsBundleTest, BundlesCorrectly) {
  gpr_setenv(GRPC_USE_SYSTEM_SSL_ROOTS_ENV_VAR, 'true');
  // Test that CreateRootCertsBundle returns a correct slice.
  grpc_slice roots_bundle = grpc_empty_slice();
  GRPC_LOG_IF_ERROR(
      'load_file',
      grpc_load_file('test/core/security/etc/bundle.pem', 1, &roots_bundle));
  // result_slice should have the same content as roots_bundle.
  grpc_slice result_slice =
      grpc_core::CreateRootCertsBundle('test/core/security/etc/test_roots');
  char* result_str = grpc_slice_to_c_string(result_slice);
  char* bundle_str = grpc_slice_to_c_string(roots_bundle);
  EXPECT_STREQ(result_str, bundle_str);
  // Clean up.
  unsetenv(GRPC_USE_SYSTEM_SSL_ROOTS_ENV_VAR);
  gpr_free(result_str);
  gpr_free(bundle_str);
  grpc_slice_unref(roots_bundle);
  grpc_slice_unref(result_slice);
}
    
      /// Set the max number of threads that can be allocated from this
  /// ResourceQuota object.
  ///
  /// If the new_max_threads value is smaller than the current value, no new
  /// threads are allocated until the number of active threads fall below
  /// new_max_threads. There is no time bound on when this may happen i.e none
  /// of the current threads are forcefully destroyed and all threads run their
  /// normal course.
  ResourceQuota& SetMaxThreads(int new_max_threads);
    
    extern uint32_t numa_node_set;
extern uint32_t numa_node_mask;
extern uint32_t numa_num_nodes;
extern std::vector<bitmask*> node_to_cpu_mask;
extern bool use_numa;
    
    struct IRGS;
    
    /*
 * Compute the next threshold to trigger GC. We wish to ignore auxUsage
 * for the purpose of this calculation, even though auxUsage is counted
 * against the request for the sake of OOM. To accomplish this, subtract
 * auxUsage from the heap limit, before our calculations.
 *
 * GC will then be triggered the next time we notice mmUsage > m_nextGc (see
 * checkGC()).
 */
void MemoryManager::updateNextGc() {
  t_trigger_allocated = -1;
  if (!isGCEnabled()) {
    m_nextGC = kNoNextGC;
    updateMMDebt();
    return;
  }
    }
    
    template <typename T>
struct shared_ptr final  {
  shared_ptr() = default;
  explicit shared_ptr(std::nullptr_t) :
    m_std_ptr(nullptr) {
  }
  template<class Y>
  shared_ptr( const shared_ptr<Y>& r )
    : m_std_ptr(r.m_std_ptr),
      m_scan_size(r.m_scan_size),
      m_scan_index(r.m_scan_index) {
  }
  template <class Y>
  shared_ptr(shared_ptr<Y>&& r)
    : m_std_ptr(std::move(r.m_std_ptr)),
      m_scan_size(std::move(r.m_scan_size)),
      m_scan_index(std::move(r.m_scan_index)) {
  }
  template<class Y>
  explicit shared_ptr(const weak_ptr<Y>& r)
    : m_std_ptr(r),
      m_scan_size(r.m_scan_size),
      m_scan_index(r.m_scan_index) {
  }
    }
    
    
    {        auto sequenceLength = sequenceData.size() / shapeSize;
        std::vector<NDArrayViewPtr> sequencesView(1);
        auto sequenceDataShape = sampleShape.AppendShape({ sequenceLength });
        sequencesView[0] = MakeSharedObject<NDArrayView>(sequenceDataShape, sequenceData);
        return Create(sampleShape, sequencesView, { sequenceStartFlag }, device, readOnly, /*createNewCopy =*/ true);
    }
    
        static void dotprod(const_array_ref<float> a, const_array_ref<float> b, float &result,
                        bool addtoresult, const float thisscale, const float weight)
    {
        assert(a.size() == b.size());
        assert((15 & reinterpret_cast<uintptr_t>(&a[0])) == 0);
        assert((15 & reinterpret_cast<uintptr_t>(&b[0])) == 0); // enforce SSE alignment
    }
    
    enum LabelKind
{
    labelNone = 0,       // no labels to worry about
    labelCategory = 1,   // category labels, creates mapping tables
    labelRegression = 2, // regression labels
    labelOther = 3,      // some other type of label
};
    
        // make sure (dense * sparse -> dense) == (dense * dense -> dense)
    mD.Resize(dim1, dim1);
    mD.SetValue(0.0f);
    Matrix<float>::MultiplyAndAdd(mAdense, transposeA, mA1sparseCSC, transposeB, mD);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mA2sparseCSC, transposeB, beta, mD);
    
    // same but for event
void GPUDataTransferer::SyncEvent(cudaEvent_t ev)
{
    auto rc = cudaEventQuery(ev);
    if (rc != cudaErrorNotReady)
    {
        // if Event is ready then no need to wait
        rc || 'cudaEventQuery failed';
        return;
    }
    // we must wait
    cudaEventSynchronize(ev) || 'cudaEventSynchronize failed';
}
    
        // Init - Writer Initialize for multiple data sets
    // config - [in] configuration parameters for the datawriter
    // Sample format below for BinaryWriter:
    // writer=[
    //  # writer to use, can implement both reader and writer
    //  writerType=BinaryWriter
    //  miniBatchMode=Partial
    //  randomize=None
    //  wfile=c:\speech\mnist\mnist_test.bin
    //  #wrecords - number of records we should allocate space for in the file
    //  # files cannot be expanded, so this should be large enough. If known modify this element in config before creating file
    //  wrecords=50000
    //  features=[
    //    dim=784
    //    start=1
    //    sectionType='data'
    //    stats=[
    //      sectionType='stats'
    //      elementSize=8
    //      compute={'sum':'count':'mean:'v'ariance':'stddev':'max':'min':'range'}
    //    ]
    //  ]
    //  labels=[
    //    dim=1
    //    # sizeof(unsigned) which is the label index type
    //    elementSize=4
    //    wref='features'
    //    sectionType='labels'
    //    mapping=[
    //      #redefine number of records for this section, since we don't need to save it for each data record
    //      wrecords=10
    //      #variable size so use an average string size
    //      elementSize=10
    //      sectionType='stringMap'
    //    ]
    //    category=[
    //      dim=10
    //      #elementSize=sizeof(ElemType) is default
    //      sectionType='categoryLabels'
    //    ]
    //    labelType='category'
    //  ]
    //]
    template <class ConfigRecordType>
    void InitFromConfig(const ConfigRecordType&);
    virtual void Init(const ConfigParameters& config) override
    {
        InitFromConfig(config);
    }
    virtual void Init(const ScriptableObjects::IConfigRecord& config) override
    {
        InitFromConfig(config);
    }
    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
    // not in the cache yet: create it (or not if no such member)
void /*CustomConfigRecord::*/ ComputationNodeBase::LazyCreateConfigMember(const wstring& id) const /*override*/
{
    if (id == L'name') // node name
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(NodeName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'operation') // type ('operation' parameter to ComputationNode BS constructor)
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(OperationName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dim') // scalar dimension (#elements) per sample
    {
        // Note: When freshly creating models, dimensions may not have been inferred yet.
        size_t dim = GetSampleLayout().GetNumElements();
        if (dim == 0)
            InvalidArgument('%ls.dim: The node's dimensions are not known yet.', NodeName().c_str());
        InsertConfigMember(id, MakePrimitiveConfigValuePtr((double) dim, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dims') // tensor dimension vector
    {
        NOT_IMPLEMENTED;
    }
    // TODO: Think through what tags mean. Do we allow user-named tags? Is it a set or a single string? If set, then how to compare?
    //else if (id == L'tag')
    //{
    //}
    else if (id == L'inputs' || id == OperationName() + L'Args') // e.g. node.PlusArg[0] = alternative for node.inputs[0] that shows a user that this is a Plus node
    {
        std::vector<ConfigValuePtr> inputsAsValues;
        for (let& input : GetInputs())
            inputsAsValues.push_back(ConfigValuePtr(input, [](const std::wstring &) { LogicError('should not get here'); }, L''));
        let& arr = make_shared<ScriptableObjects::ConfigArray>(0, move(inputsAsValues));
        InsertConfigMember(id, ConfigValuePtr(arr, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    // any other id does not exist, don't create any entry for it
}
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
      val = getEnvVar('GTEST_OSQUERY');
  EXPECT_FALSE(!val);
  EXPECT_TRUE(val.is_initialized());
  EXPECT_EQ(*val, 'true');
    
    TEST_F(PrinterTests, test_compute_query_data_lengths) {
  std::map<std::string, size_t> lengths;
  for (const auto& row : q) {
    computeRowLengths(row, lengths);
  }
    }
    
      size_t getFailedRecordCount(Outcome& outcome) const override;
  Result getResult(Outcome& outcome) const override;
    
                ImGui::Text('PushItemWidth(-100)');
            ImGui::SameLine(); ShowHelpMarker('Align to right edge minus 100');
            ImGui::PushItemWidth(-100);
            ImGui::DragFloat('float##4', &f);
            ImGui::PopItemWidth();
    
        // Setup inputs
    ALLEGRO_KEYBOARD_STATE keys;
    al_get_keyboard_state(&keys);
    io.KeyCtrl = al_key_down(&keys, ALLEGRO_KEY_LCTRL) || al_key_down(&keys, ALLEGRO_KEY_RCTRL);
    io.KeyShift = al_key_down(&keys, ALLEGRO_KEY_LSHIFT) || al_key_down(&keys, ALLEGRO_KEY_RSHIFT);
    io.KeyAlt = al_key_down(&keys, ALLEGRO_KEY_ALT) || al_key_down(&keys, ALLEGRO_KEY_ALTGR);
    io.KeySuper = al_key_down(&keys, ALLEGRO_KEY_LWIN) || al_key_down(&keys, ALLEGRO_KEY_RWIN);
    
    
    {    // Start the frame
    ImGui::NewFrame();
}
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Create Vulkan Instance
    {
        VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = extensions;
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Select graphics queue family
    {
        uint32_t count;
        vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, NULL);
        VkQueueFamilyProperties* queues = (VkQueueFamilyProperties*)malloc(sizeof(VkQueueFamilyProperties) * count);
        vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, queues);
        for (uint32_t i = 0; i < count; i++)
            if (queues[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
            {
                g_QueueFamily = i;
                break;
            }
        free(queues);
        IM_ASSERT(g_QueueFamily != -1);
    }
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        desc.NumDescriptors = 1;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dSrvDescHeap)) != S_OK)
            return E_FAIL;
    }
    
    
    {    // Update mouse position
    const ImVec2 mouse_pos_backup = io.MousePos;
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
#ifdef __EMSCRIPTEN__
    const bool focused = true; // Emscripten
#else
    const bool focused = glfwGetWindowAttrib(g_Window, GLFW_FOCUSED) != 0;
#endif
    if (focused)
    {
        if (io.WantSetMousePos)
        {
            glfwSetCursorPos(g_Window, (double)mouse_pos_backup.x, (double)mouse_pos_backup.y);
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
}
    
        // Setup time step (we don't use SDL_GetTicks() because it is using millisecond resolution)
    static Uint64 frequency = SDL_GetPerformanceFrequency();
    Uint64 current_time = SDL_GetPerformanceCounter();
    io.DeltaTime = g_Time > 0 ? (float)((double)(current_time - g_Time) / frequency) : (float)(1.0f / 60.0f);
    g_Time = current_time;
    
    namespace folly {
namespace exception_tracer {
    }
    }
    
    
    {} // namespace folly

    
    template <typename DigestT, typename ClockT>
typename BufferedStat<DigestT, ClockT>::TimePoint
BufferedStat<DigestT, ClockT>::roundUp(TimePoint t) {
  auto remainder = t.time_since_epoch() % bufferDuration_;
  if (remainder.count() != 0) {
    return t + bufferDuration_ - remainder;
  }
  return t;
}
    
    
    {
    {
    {ssize_t write(int fh, void const* buf, size_t count) {
  if (folly::portability::sockets::is_fh_socket(fh)) {
    SOCKET s = (SOCKET)_get_osfhandle(fh);
    if (s != INVALID_SOCKET) {
      auto r = folly::portability::sockets::send(fh, buf, (size_t)count, 0);
      if (r == -1 && WSAGetLastError() == WSAEWOULDBLOCK) {
        errno = EAGAIN;
      }
      return r;
    }
  }
  auto r = _write(fh, buf, static_cast<unsigned int>(count));
  if ((r > 0 && size_t(r) != count) || (r == -1 && errno == ENOSPC)) {
    // Writing to a pipe with a full buffer doesn't generate
    // any error type, unless it caused us to write exactly 0
    // bytes, so we have to see if we have a pipe first. We
    // don't touch the errno for anything else.
    HANDLE h = (HANDLE)_get_osfhandle(fh);
    if (GetFileType(h) == FILE_TYPE_PIPE) {
      DWORD state = 0;
      if (GetNamedPipeHandleState(
              h, &state, nullptr, nullptr, nullptr, nullptr, 0)) {
        if ((state & PIPE_NOWAIT) == PIPE_NOWAIT) {
          errno = EAGAIN;
          return -1;
        }
      }
    }
  }
  return r;
}
}
}
}
    
    namespace aria2 {
    }
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);
    
    public:
  AuthConfig();
  AuthConfig(std::string user, std::string password);
  ~AuthConfig();