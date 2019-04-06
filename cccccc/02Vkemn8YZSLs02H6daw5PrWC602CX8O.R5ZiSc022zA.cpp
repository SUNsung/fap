
        
          // Convert input tensor-as-shape values;
  std::vector<TensorShapeProto> input_tensor_as_shapes_protos(
      input_constant_tensor_as_shape_values.size());
  for (int i = 0; i < input_constant_tensor_as_shape_values.size(); ++i) {
    if (!input_tensor_as_shapes_protos[i].ParseFromString(
            input_constant_tensor_as_shape_values[i])) {
      return errors::InvalidArgument(
          'Error parsing shape proto during cpp shape inference');
    }
  }
    
    string DataTypeToPython(DataType dtype, const string& dtype_module);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Performs a NumPy array cast from type 'From' to 'To'.
template <typename From, typename To>
void NPyCast(void* from_void, void* to_void, npy_intp n, void* fromarr,
             void* toarr) {
  const From* from = reinterpret_cast<From*>(from_void);
  To* to = reinterpret_cast<To*>(to_void);
  for (npy_intp i = 0; i < n; ++i) {
    to[i] = static_cast<To>(from[i]);
  }
}
    
    // Converts the given numpy ndarray to a (safe) TF_Tensor. The returned
// TF_Tensor in `out_tensor` may have its own Python reference to `ndarray`s
// data. After `out_tensor` is destroyed, this reference must (eventually) be
// decremented via ClearDecrefCache().
//
// `out_tensor` must be non-null. Caller retains ownership of `ndarray`.
Status PyArrayToTF_Tensor(PyObject* ndarray, Safe_TF_TensorPtr* out_tensor);
    
    // Mutex used to serialize accesses to cached vector of pointers to python
// arrays to be dereferenced.
static mutex* DelayedDecrefLock() {
  static mutex* decref_lock = new mutex;
  return decref_lock;
}
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_

    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Safe containers for an owned TF_Tensor. On destruction, the tensor will be
// deleted by TF_DeleteTensor.
using Safe_TF_TensorPtr = std::unique_ptr<TF_Tensor, detail::TFTensorDeleter>;
Safe_TF_TensorPtr make_safe(TF_Tensor* tensor);
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor

    
    #include 'tensorflow/stream_executor/platform.h'
    
      // Computes real-to-complex FFT in forward direction.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<float> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<double> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
    
    {}  // namespace api
    
     private:
  void OnMessageBoxCallback(DialogClosedCallback callback,
                            const std::string& origin,
                            int code,
                            bool checkbox_checked);
    
    namespace atom {
    }
    
    
    {}  // namespace atom

    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
      // Up until now, the parent process was blocked in a read waiting for the
  // write above to complete. The parent process is now free to exit. Wait for
  // that to happen.
  struct kevent event;
  int events = kevent(kq.get(), nullptr, 0, &event, 1, nullptr);
  if (events != 1) {
    if (events < 0) {
      PLOG(ERROR) << 'kevent (monitor)';
    } else {
      LOG(ERROR) << 'kevent (monitor): unexpected result ' << events;
    }
    return;
  }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RootViewMac);
};
    
    namespace atom {
    }
    
      // Finally, add the generic parameters from the requirement.
  for (auto genericParam : reqSig->getGenericParams().slice(1)) {
    // The only depth that makes sense is depth == 1, the generic parameters
    // of the requirement itself. Anything else is from invalid code.
    if (genericParam->getDepth() != 1) {
      return;
    }
    }
    
    static int adapt(int delta, int numpoints, bool firsttime) {
  if (firsttime)
    delta = delta / damp;
  else
    delta = delta / 2;
  
  delta += delta / numpoints;
  int k = 0;
  while (delta > ((base - tmin) * tmax) / 2) {
    delta /= base - tmin;
    k += base;
  }
  return k + (((base - tmin + 1) * delta) / (delta + skew));
}
    
    #ifdef _MSC_VER
    
      scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    
    {}  // namespace nw
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    namespace nw {
    }
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    #include 'gtest/gtest.h'
    
    
    {  int ret = x;
  return ret;
}
    
    unsigned int BaseMapMatrix::LoadBinary(unsigned char* buf) { return 0; }
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }
    
    #include 'gtest/gtest.h'
    
    
    {  Global_rpt_6a::Brk_can_timeoutType ret =
      static_cast<Global_rpt_6a::Brk_can_timeoutType>(x);
  return ret;
}
    
    
    {  Headlight_rpt_77::Manual_inputType ret =
      static_cast<Headlight_rpt_77::Manual_inputType>(x);
  return ret;
}