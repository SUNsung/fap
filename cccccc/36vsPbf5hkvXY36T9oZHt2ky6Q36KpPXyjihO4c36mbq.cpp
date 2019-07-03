
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow
    
    #include <Python.h>
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor
    
    // Indicates a set of options for a device's usage, which generally must be
// provided at StreamExecutor device-initialization time.
//
// These are intended to be useful-but-not-mandatorily-supported options for
// using devices on the underlying platform. Presently, if the option requested
// is not available on the target platform, a warning will be emitted.
struct DeviceOptions {
 public:
  // When it is observed that more memory has to be allocated for thread stacks,
  // this flag prevents it from ever being deallocated. Potentially saves
  // thrashing the thread stack memory allocation, but at the potential cost of
  // some memory space.
  static const unsigned kDoNotReclaimStackAllocation = 0x1;
    }
    
      // Computes complex-to-complex FFT in the transform direction as specified
  // by direction parameter.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<std::complex<float>> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<std::complex<double>> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // The API reference of abi::__cxa_demangle() can be found in
// libstdc++'s manual.
// https://gcc.gnu.org/onlinedocs/libstdc++/libstdc++-html-USERS-4.3/a01696.html
string Demangle(const char *mangled) {
  string demangled;
  int status = 0;
  char *result = nullptr;
#if HAS_CXA_DEMANGLE
  result = abi::__cxa_demangle(mangled, nullptr, nullptr, &status);
#endif
  if (status == 0 && result != nullptr) {  // Demangling succeeded.
    demangled.append(result);
    free(result);
  }
  return demangled;
}
    
    bool Converter<Dictionary>::FromV8(v8::Isolate* isolate,
                                   v8::Local<v8::Value> val,
                                   Dictionary* out) {
  if (!val->IsObject() || val->IsFunction())
    return false;
  *out = Dictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    Arguments::Arguments()
    : isolate_(NULL), info_(NULL), next_(0), insufficient_arguments_(false) {}
    
    v8::MaybeLocal<v8::Object> WrappableBase::GetWrapper(
    v8::Isolate* isolate) const {
  if (!wrapper_.IsEmpty())
    return v8::MaybeLocal<v8::Object>(
        v8::Local<v8::Object>::New(isolate, wrapper_));
  else
    return v8::MaybeLocal<v8::Object>();
}
    
    
    {
    {    using Indices = typename IndicesGenerator<sizeof...(ArgTypes)>::type;
    Invoker<Indices, ArgTypes...> invoker(&args, holder->flags);
    if (invoker.IsOK())
      invoker.DispatchToCallback(holder->callback);
  }
};
    
    // ObjectTemplateBuilder provides a handy interface to creating
// v8::ObjectTemplate instances with various sorts of properties.
class ObjectTemplateBuilder {
 public:
  explicit ObjectTemplateBuilder(v8::Isolate* isolate,
                                 v8::Local<v8::ObjectTemplate> templ);
  ~ObjectTemplateBuilder();
    }
    
      v8::Isolate* isolate() const { return isolate_; }
    
    void GlobalMenuBarRegistrarX11::UnregisterXID(unsigned long xid) {
  DCHECK(registrar_proxy_);
  std::string path = electron::GlobalMenuBarX11::GetPathForWindow(xid);
    }
    
    class DHTMessageCallback;
    
      int getNumBucket() const;
    
    namespace {
void readBytes(BufferedFile& fp, unsigned char* buf, size_t buflen,
               size_t readlen)
{
  assert(readlen <= buflen);
  READ_CHECK(fp, buf, readlen);
}
} // namespace
    
    public:
  DHTRoutingTableSerializer(int family);
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    
    {} // namespace aria2

    
    #include <memory>
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    #include 'TimeBasedCommand.h'
    
    #include 'DHTMessage.h'
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }