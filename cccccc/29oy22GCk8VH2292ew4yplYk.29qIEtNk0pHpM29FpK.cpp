
        
        inline absl::string_view GetMethod(const grpc_slice* path) {
  if (GRPC_SLICE_IS_EMPTY(*path)) {
    return '';
  }
  // Check for leading '/' and trim it if present.
  return absl::StripPrefix(absl::string_view(reinterpret_cast<const char*>(
                                                 GRPC_SLICE_START_PTR(*path)),
                                             GRPC_SLICE_LENGTH(*path)),
                           '/');
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    #endif  // !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)

    
    #endif  // GPR_WINDOWS

    
    
    {}  // namespace grpc
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    #ifndef PLUGIN_CAFFE_CAFFE_COMMON_H_
#define PLUGIN_CAFFE_CAFFE_COMMON_H_
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
      /*!
   * \brief encodes parameters of gc into a string
   */
  std::string EncodeParams();
    
    
    {
    {// for reverse seq
DECL_SCALAR(DEVICE, Plus, EvalScalar_, false)
DECL_SCALAR(DEVICE, Minus, EvalScalar_, false)
DECL_SCALAR(DEVICE, Mul, EvalScalar_, false)
DECL_SCALAR(DEVICE, Div, EvalScalar_, false)
}  // namespace ndarray
}  // namespace mxnet
    
       out = data / sqrt(data.shape[-1])
    
    Operator* NativeOpProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
    template<>
Operator* CreateOp<gpu>(NDArrayOpParam param) {
  return new NDArrayOp<gpu>(param);
}
#endif  // MXNET_USE_CUDA
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    template<class T>
void fillCollection(T* coll, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    coll->add(*ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  auto entry = m_it.second();
  assertx(entry.isString());
  return HHVM_FN(dirname)(entry.toString());
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include <folly/String.h>
#include <folly/portability/SysStat.h>
#include <folly/portability/Unistd.h>
    
    
    {  StructuredLogEntry cols;
  fillCols(cols);
  cols.setStr('event_name', event);
  cols.setInt('priority', priority);
  StructuredLog::log('hhvm_perf_warning', cols);
}
    
    void clearThreadLocalIO();
void setThreadLocalIO(FILE* in, FILE* out, FILE* err);
    
    
    {  private:
    uint32_t  bits[6];
};
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    U_NAMESPACE_END
    
    /**
 * Implement UnicodeMatcher
 */
void StringMatcher::addMatchSetTo(UnicodeSet& toUnionTo) const {
    UChar32 ch;
    for (int32_t i=0; i<pattern.length(); i+=U16_LENGTH(ch)) {
        ch = pattern.char32At(i);
        const UnicodeMatcher* matcher = data->lookupMatcher(ch);
        if (matcher == NULL) {
            toUnionTo.add(ch);
        } else {
            matcher->addMatchSetTo(toUnionTo);
        }
    }
}
    
    bool ImGui_Marmalade_CreateDeviceObjects()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
    void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        // For the browser using Emscripten, we are going to use WebGL1 with GL ES2. See the Makefile. for requirement details.
    // It is very likely the generated file won't work in many browsers. Firefox is the only sure bet, but I have successfully
    // run this code on Chrome for Android for example.
    const char* glsl_version = '#version 100';
    //const char* glsl_version = '#version 300 es';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);