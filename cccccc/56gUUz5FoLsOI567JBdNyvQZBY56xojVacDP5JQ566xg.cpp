
        
        
    {  PyObject* np_array =
      PyArray_SimpleNewFromData(dim_size, dims, type_num, data);
  if (PyType_Ready(&TensorReleaserType) == -1) {
    return errors::Unknown('Python type initialization failed.');
  }
  TensorReleaser* releaser = reinterpret_cast<TensorReleaser*>(
      TensorReleaserType.tp_alloc(&TensorReleaserType, 0));
  releaser->destructor = new std::function<void()>(std::move(destructor));
  if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject*>(np_array),
                            reinterpret_cast<PyObject*>(releaser)) == -1) {
    Py_DECREF(releaser);
    return errors::Unknown('Python array refused to use memory.');
  }
  *result = PyArray_Return(reinterpret_cast<PyArrayObject*>(np_array));
  return Status::OK();
}
    
    // Must be included first
#include 'tensorflow/python/lib/core/numpy.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace api
    
    #if defined(OS_LINUX)
void PowerMonitor::BlockShutdown() {
  PowerObserverLinux::BlockShutdown();
}
    
     private:
  v8::Global<v8::Object> menu_;
  std::unique_ptr<TrayIcon> tray_icon_;
    
    namespace atom {
    }
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
      // this.emit(name, event, args...);
  template <typename... Args>
  bool EmitCustomEvent(const base::StringPiece& name,
                       v8::Local<v8::Object> event,
                       const Args&... args) {
    return EmitWithEvent(
        name, internal::CreateCustomEvent(isolate(), GetWrapper(), event),
        args...);
  }
    
      can_factory->RegisterCanClients();
    
      void WaitForFinish() {
    if (thread_send_ != nullptr && thread_send_->joinable()) {
      thread_send_->join();
      thread_send_.reset();
      AINFO << 'Send thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
    if (thread_recv_ != nullptr && thread_recv_->joinable()) {
      thread_recv_->join();
      thread_recv_.reset();
      AINFO << 'Recv thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
  }
    
    /**
 * @class EsdCanClient
 * @brief The class which defines a ESD CAN client which inherits CanClient.
 */
class EsdCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    bool FakeCanClient::Init(const CANCardParameter &param) { return true; }
    
    // buf size must be 8 bytes, every time, we receive only one frame
const int RX_TIMEOUT = -7;
apollo::common::ErrorCode HermesCanClient::Receive(
    std::vector<CanFrame> *const frames, int32_t *const frame_num) {
  if (!_is_init) {
    AERROR << 'Hermes can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
  if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0) {
    AERROR << 'recv can frame num not in range[0, ' << MAX_CAN_RECV_FRAME_LEN
           << '], frame_num:' << *frame_num;
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
    }
    
    TEST(HermesCanClient, receiver) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
    template <typename SensorType>
void CanReceiver<SensorType>::Stop() {
  if (IsRunning()) {
    AINFO << 'Stopping can client receiver ...';
    is_running_ = false;
    if (thread_ != nullptr && thread_->joinable()) {
      thread_->join();
    }
    thread_.reset();
  } else {
    AINFO << 'Can client receiver is not running.';
  }
  AINFO << 'Can client receiver stopped [ok].';
}
    
      /**
  * @brief module initialization function
  * @return initialization status
  */
  apollo::common::Status Init() override;
    
    // Sensor gflags
DECLARE_double(sensor_freq);