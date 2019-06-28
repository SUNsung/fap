
        
        namespace content {
class BrowserContext;
class ResourceContext;
}  // namespace content
    
      // Window XIDs which want to be registered, but haven't yet been because
  // we're waiting for the proxy to become available.
  std::set<unsigned long> live_xids_;
    
    v8::Local<v8::Object> PersistentDictionary::GetHandle() const {
  return handle_->NewHandle();
}
    
      if (argc > 1) {
    napi_throw_error(env, NULL,
                     'Wrong number of arguments, expected single argument');
  }
    
    
    {  return v8::FunctionTemplate::New(
      isolate, &internal::Dispatcher<Sig>::DispatchToCallback,
      ConvertToV8<v8::Local<v8::External>>(isolate,
                                           holder->GetHandle(isolate)));
}
    
    // Specialization for member function pointers. We need to handle this case
// specially because the first parameter for callbacks to MFP should typically
// come from the the JavaScript 'this' object the function was called on, not
// from the first normal parameter.
template <typename T>
struct CallbackTraits<
    T,
    typename std::enable_if<std::is_member_function_pointer<T>::value>::type> {
  static v8::Local<v8::FunctionTemplate> CreateTemplate(v8::Isolate* isolate,
                                                        T callback) {
    int flags = HolderIsFirstArgument;
    return CreateFunctionTemplate(isolate, base::Bind(callback), flags);
  }
};
    
    bool ProcessSingleton::Create() {
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  int sock;
  sockaddr_un addr;
    }
    
    
    {}  // namespace electron

    
    #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
    int secp256k1_ecdsa_recoverable_signature_parse_compact(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature* sig, const unsigned char *input64, int recid) {
    secp256k1_scalar r, s;
    int ret = 1;
    int overflow = 0;
    }
    
    
    
    /** Decode a Bech32 string. Returns (hrp, data). Empty hrp means failure. */
std::pair<std::string, std::vector<uint8_t>> Decode(const std::string& str);
    
    %define X0 xmm4
%define X1 xmm5
%define X2 xmm6
%define X3 xmm7
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    #endif  // CAFFE_CONV_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    // Array.
template <typename ToPrint, size_t N, typename OtherOperand>
class FormatForComparison<ToPrint[N], OtherOperand> {
 public:
  static ::std::string Format(const ToPrint* value) {
    return FormatForComparison<const ToPrint*, OtherOperand>::Format(value);
  }
};
    
      void capture(T* ptr) {
    value_ = ptr;
    link_.join_new();
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TYPE_UTIL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TYPE_UTIL_H_
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    #include <stdio.h>
#include <stdlib.h>
    
    
    {  return clone;
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    
        ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    bool ImGui_ImplOpenGL2_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);   // Load as RGBA 32-bits (75% of the memory is wasted, but default font is so small) because it is more likely to be compatible with user's existing shaders. If your ImTextureId represent a higher-level concept than just a GL texture id, consider calling GetTexDataAsAlpha8() instead to save on GPU memory.
    }
    
        if (!g_FontSampler)
    {
        VkSamplerCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
        info.magFilter = VK_FILTER_LINEAR;
        info.minFilter = VK_FILTER_LINEAR;
        info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
        info.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        info.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        info.minLod = -1000;
        info.maxLod = 1000;
        info.maxAnisotropy = 1.0f;
        err = vkCreateSampler(v->Device, &info, v->Allocator, &g_FontSampler);
        check_vk_result(err);
    }
    
        // Setup display size (every frame to accommodate for window resizing)
    int w = IwGxGetScreenWidth(), h = IwGxGetScreenHeight();
    io.DisplaySize = ImVec2((float)w, (float)h);
     // For retina display or other situations where window coordinates are different from framebuffer coordinates. User storage only, presently not used by ImGui.
    io.DisplayFramebufferScale = g_scale;
    
    bool is_valid_hex(const std::string& value) {
  for (auto ch : value) {
    if (!std::isxdigit(ch)) {
      return false;
    }
  }
  return true;
}
    
     private:
  /*
   * @brief A helper function to 'carve' files from disk
   *
   * This function performs a 'forensic carve' of a specified path to the
   * users tmp directory
   */
  Status carve(const boost::filesystem::path& path);
    
    DECLARE_bool(disable_database);
    
    
    {    if (!status.ok()) {
      LOG(ERROR) << 'updateSource failed to parse config, of source: '
                 << source.first << ' and content: ' << source.second;
      return status;
    }
    // If a source was updated and the content has changed, then the registry
    // should be reconfigured. File watches may have changed, etc.
    needs_reconfigure = true;
  }
    
    #include <osquery/utils/system/env.h>
    
      virtual Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                                    const std::string& key);
  virtual Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) = 0;
    
      std::string temp_store = randomOutputPath();
  auto original_src = source_path_;
  auto new_src = src_path;
    
    #define DESCRIPTION                                                            \
  'osquery %s, your OS as a high-performance relational database\n'
#define EPILOG '\nosquery project page <https://osquery.io>.\n'
#define OPTIONS                                                                \
  '\nosquery configuration options (set by config or CLI flags):\n\n'
#define OPTIONS_SHELL '\nosquery shell-only CLI flags:\n\n'
#define OPTIONS_CLI 'osquery%s command line flags:\n\n'
#define USAGE 'Usage: %s [OPTION]... %s\n\n'