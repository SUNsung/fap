
        
          const PrimitiveType type_;
  const int64 batch_size_;
  const int64 a_batch_stride_;
  const int64 n_;
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A thunk that copies data from a host buffer to a device buffer.
class HostToDeviceCopyThunk : public Thunk {
 public:
  // Constructs a CopyThunk that copies host data from `source_address` to the
  // device buffer `destination_buffer`. `mem_size` is the size of the data in
  // bytes.
  HostToDeviceCopyThunk(const void* source_address,
                        const BufferAllocation::Slice& destination_buffer,
                        uint64 mem_size, const HloInstruction* hlo_instruction);
    }
    
    se::fft::Type FftTypeToSeType(FftType type) {
  switch (type) {
    case FftType::FFT:
      return se::fft::Type::kC2CForward;
    case FftType::IFFT:
      return se::fft::Type::kC2CInverse;
    case FftType::IRFFT:
      return se::fft::Type::kC2R;
    case FftType::RFFT:
      return se::fft::Type::kR2C;
    default:
      LOG(FATAL) << 'unsupported fft type';
  }
}
    
    Status ForThunk::Initialize(const GpuExecutable& executable,
                            se::StreamExecutor* executor) {
  TF_RETURN_IF_ERROR(body_thunk_sequence_->Initialize(executable, executor));
  return Status::OK();
}
    
    // A thunk that outfeeds data. Data must be already resident on the host. This
// thunk performs a host to device copy from the buffer allocated for the
// outfeed op to the host location.
class OutfeedThunk : public Thunk {
 public:
  // Constructs a OutfeedThunk that copies data to the host-side
  // outfeed queue from the buffers in the given shape tree.
  OutfeedThunk(ShapeTree<BufferAllocation::Slice> outfeed_slices,
               const HloInstruction* hlo_instruction);
    }
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    #include 'tensorflow/compiler/xla/client/xla_builder.h'
#include 'tensorflow/compiler/xla/client/xla_computation.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
    
    
    {}  // namespace mate

    
    void Promise::RejectWithErrorMessage(const std::string& string) {
  v8::Local<v8::String> error_message =
      v8::String::NewFromUtf8(isolate(), string.c_str(),
                              v8::NewStringType::kNormal,
                              static_cast<int>(string.size()))
          .ToLocalChecked();
  v8::Local<v8::Value> error = v8::Exception::Error(error_message);
  resolver_->Reject(mate::ConvertToV8(isolate(), error));
}
    
    Arguments::~Arguments() {}
    
    // Class template for extracting and storing single argument for callback
// at position |index|.
template <size_t index, typename ArgType>
struct ArgumentHolder {
  using ArgLocalType = typename CallbackParamTraits<ArgType>::LocalType;
    }
    
    // This function is a convenient way to create a handle from a raw pointer
// without having to write out the type of the object explicitly.
template <typename T>
mate::Handle<T> CreateHandle(v8::Isolate* isolate, T* object) {
  return mate::Handle<T>(object->GetWrapper(), object);
}
    
      // Returns the Isolate this object is created in.
  v8::Isolate* isolate() const { return isolate_; }
    
    content::WebContents* InspectableWebContentsImpl::GetDevToolsWebContents()
    const {
  if (external_devtools_web_contents_)
    return external_devtools_web_contents_;
  else
    return managed_devtools_web_contents_.get();
}
    
    
    {  ANNOTATE_SCOPED_MEMORY_LEAK;  // http://crbug.com/314087
  // TODO(erg): The mozilla implementation goes to a lot of callback trouble
  // just to make sure that they react to make sure there's some sort of
  // cancelable object; including making a whole callback just to handle the
  // cancelable.
  //
  // I don't see any reason why we should care if 'UnregisterWindow' completes
  // or not.
  g_dbus_proxy_call(registrar_proxy_, 'UnregisterWindow',
                    g_variant_new('(u)', xid), G_DBUS_CALL_FLAGS_NONE, -1,
                    nullptr, nullptr, nullptr);
}
    
    
    {}  // namespace electron
    
      uv_loop_t* loop_;
    
      template<typename T>
  _ListStream &operator<< (T &v) {
    next();
    m_jout << v;
    return *this;
  }
    
    
    {}
    
    #include 'hphp/util/address-range.h'
    
    
    {  m_request->getHeaders().add(name, value);
  m_requestHeaders[name].push_back(value);
}
    
      promiseHeaders.set(String('hello'),
                     String('world'));  // dict serializtion path
  responseHeaders.set(String('foo'), String('bar'));  // dict serializtion path
  auto id = pushResource(promiseHeaders, responseHeaders, pri);
    
    Array HHVM_FUNCTION(
  HH_facts_parse,
  const Variant& _root,
  const Array& pathList,
  bool allowHipHopSyntax,
  bool useThreads
) {
  if (RuntimeOption::RepoAuthoritative) {
    SystemLib::throwInvalidOperationExceptionObject(
      'HH\\facts_parse not allowed in repo-authoritative mode. See #11153611.');
  }
    }
    
    void APCGCManager::freeAPCHandles(const std::vector<APCHandle*>& v) {
  assertx(RuntimeOption::EvalGCForAPC);
  if (RuntimeOption::ServerExecutionMode()) {
    // Doesn't support server mode yet
    // But it still needs to finish the Treadmill's job because Treadmill
    // won't free the handles now
    for (auto handle : v) {
      APCTypedValue::fromHandle(handle)->deleteUncounted();
    }
    return;
  }
  // This lock will be blocked by current sweeping
  WriteLock l1(candidateListLock);
  FTRACE(4, 'Treadmill asks APCGCManager to free! size: {}\n',v.size());
  for (auto handle : v) {
    auto it = candidateList.find(handle);
    // If root haven't been freed before, free it
    if (it != candidateList.end()) {
      pendingSize.fetch_add(-it->second, std::memory_order_relaxed);
      // Remove the root from list, so we won't free it twice
      candidateList.erase(it);
      FTRACE(4, 'Sweep! root:{}\n', (void*)handle);
      APCTypedValue::fromHandle(handle)->deleteUncounted();
    }
  }
}
    
    enum class LookupResult {
  MethodFoundWithThis,
  MethodFoundNoThis,
  MagicCallFound,
  MethodNotFound,
};
    
      int url = 0;
  for (url = 0; url < nUrls; url++) {
    String server = 'http://';
    server += HHVM_FN(php_uname)('n').toString();
    server += ':' + folly::to<std::string>(port) + '/';
    server += urls[url];
    actual = '<No response from server>';
    std::string err;
    for (int i = 0; i < 50; i++) {
      Variant c = HHVM_FN(curl_init)();
      HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_URL, server);
      HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_RETURNTRANSFER, true);
      if (postdata) {
        HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_POSTFIELDS, postdata);
        HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_POST, true);
      }
      if (header) {
        HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_HTTPHEADER,
                      make_varray(header));
      }
      if (responseHeader) {
        HHVM_FN(curl_setopt)(c.toResource(), CURLOPT_HEADER, 1);
      }
    }
    }
    
        // Select Surface Format
    const VkFormat requestSurfaceImageFormat[] = { VK_FORMAT_B8G8R8A8_UNORM, VK_FORMAT_R8G8B8A8_UNORM, VK_FORMAT_B8G8R8_UNORM, VK_FORMAT_R8G8B8_UNORM };
    const VkColorSpaceKHR requestSurfaceColorSpace = VK_COLORSPACE_SRGB_NONLINEAR_KHR;
    wd->SurfaceFormat = ImGui_ImplVulkanH_SelectSurfaceFormat(g_PhysicalDevice, wd->Surface, requestSurfaceImageFormat, (size_t)IM_ARRAYSIZE(requestSurfaceImageFormat), requestSurfaceColorSpace);
    
    #include 'imgui.h'
#include 'imgui_impl_marmalade.h'
#include <stdio.h>
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
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
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Restore the DX9 transform
    g_pd3dDevice->SetTransform(D3DTS_WORLD, &last_world);
    g_pd3dDevice->SetTransform(D3DTS_VIEW, &last_view);
    g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &last_projection);
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
      // Fail the first config load.
  plugin->fail_ = true;
    
    TEST_F(PacksTests, test_check_version) {
  Pack zpack('fake_version_pack', getPackWithFakeVersion().doc());
  EXPECT_FALSE(zpack.checkVersion());
    }
    
    /// 1 discovery query which will always pass
JSON getPackWithValidDiscovery() {
  auto doc = getExamplePacksConfig();
  return JSON::newFromValue(doc.doc()['packs']['valid_discovery_pack']);
}
    
    namespace osquery {
    }
    
    namespace osquery {
    }
    
    Expected<std::string, DatabaseError> RocksdbDatabase::getString(
    const std::string& domain, const std::string& key) {
  auto result = getRawBytes(domain, key);
  if (result) {
    std::string result_str = result.take();
    if (BOOST_UNLIKELY(validateInt32StorageBuffer(result_str))) {
      auto type_error = createError(RocksdbError::UnexpectedValueType)
                        << 'Fetching string as integer';
      LOG(ERROR) << type_error.getMessage().c_str();
      assert(false);
      return createError(DatabaseError::KeyNotFound, std::move(type_error));
    }
    return result_str;
  }
  return result.takeError();
}
    
    std::string RocksdbMigration::randomOutputPath() {
  auto path = fs::path(OSQUERY_HOME);
  boost::uuids::uuid uuid = boost::uuids::random_generator()();
  path.append('migration');
  path.append(boost::uuids::to_string(uuid));
  return path.string();
}
    
    Status Flag::getDefaultValue(const std::string& name, std::string& value) {
  flags::CommandLineFlagInfo info;
  if (!flags::GetCommandLineFlagInfo(name.c_str(), &info)) {
    return Status(1, 'Flags name not found.');
  }
    }
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }