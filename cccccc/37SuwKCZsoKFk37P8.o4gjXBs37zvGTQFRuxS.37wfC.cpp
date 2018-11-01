
        
          if (op_reg_data->shape_inference_fn == nullptr) {
    return errors::InvalidArgument(
        'No shape inference function exists for op '', node.op(),
        '', did you forget to define it?');
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace tensorflow {
    }
    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
      // Returns the driver version number via cuDriverGetVersion.
  // This is, surprisingly, NOT the actual driver version (e.g. 331.79) but,
  // instead, the CUDA toolkit release number that this driver is compatible
  // with; e.g. 6000 (for a CUDA 6.0 compatible driver) or 6050 (for a CUDA 6.5
  // compatible driver).
  //
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__VERSION.html#group__CUDA__VERSION_1g8b7a10395392e049006e61bcdc8ebe71
  static bool GetDriverVersion(int *driver_version);
    
    #include 'atom/browser/native_window_views.h'
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  auto controller = base::Unretained(TracingController::GetInstance());
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('getCategories',
                 base::Bind(&TracingController::GetCategories, controller));
  dict.SetMethod('startRecording',
                 base::Bind(&TracingController::StartTracing, controller));
  dict.SetMethod('stopRecording', &StopRecording);
  dict.SetMethod(
      'getTraceBufferUsage',
      base::Bind(&TracingController::GetTraceBufferUsage, controller));
}
    
      bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterAll();
    
    v8::Local<v8::Value> Net::URLRequest(v8::Isolate* isolate) {
  return URLRequest::GetConstructor(isolate)->GetFunction();
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #endif  // ATOM_BROWSER_API_ATOM_API_TRAY_H_

    
    Event::Event(v8::Isolate* isolate) {
  Init(isolate);
}
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
      bool IsPeerAuthenticated() const override;
    
    
    {}  // namespace grpc

    
    
    {}  // namespace grpc
    
    uint64_t GetIncomingDataSize(const grpc_call_final_info* final_info) {
  return final_info->stats.transport_stream_stats.incoming.data_bytes;
}
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    
    {  RpcServerStatsEncoding() = delete;
  RpcServerStatsEncoding(const RpcServerStatsEncoding&) = delete;
  RpcServerStatsEncoding(RpcServerStatsEncoding&&) = delete;
  RpcServerStatsEncoding operator=(const RpcServerStatsEncoding&) = delete;
  RpcServerStatsEncoding operator=(RpcServerStatsEncoding&&) = delete;
};
    
    void InitProtoReflectionServerBuilderPlugin() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  ::grpc::ServerBuilder::InternalAddPluginFactory(&CreateProtoReflection);
}
    
    DynamicThreadPool::~DynamicThreadPool() {
  std::unique_lock<std::mutex> lock(mu_);
  shutdown_ = true;
  cv_.notify_all();
  while (nthreads_ != 0) {
    shutdown_cv_.wait(lock);
  }
  ReapThreads(&dead_threads_);
}
    
    	PathCombine(legacyUserAliasesPath, configDirPath, L'user-aliases.cmd');
	if (PathFileExists(legacyUserAliasesPath)) {
		PathCombine(userAliasesPath, configDirPath, L'user_aliases.cmd');
    }
    
        float r, zenith, azimuth;
    this->sphericalRadius(&r, &zenith, &azimuth);
    if( std::isnan(_radius) )
        _radius = r;
    if( std::isnan(_angleZ) )
        _angleZ = (float)CC_RADIANS_TO_DEGREES(zenith);
    if( std::isnan(_angleX) )
        _angleX = (float)CC_RADIANS_TO_DEGREES(azimuth);
    
        /**
    @brief Get the center position of twirl action.
    @return The center position of twirl action.
    */
    const Vec2& getPosition() const { return _position; }
    /**
    @brief Set the center position of twirl action.
    @param position The center position of twirl action will be set.
    */
    void setPosition(const Vec2& position);
    
        /** Gets an action given its tag an a target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     * @return  The Action the with the given tag.
     */
    virtual Action* getActionByTag(int tag, const Node *target) const;
    
    
    {    delete action;
    return nullptr;
}
    
    NS_CC_END
    
        // Overrides
    virtual SplitRows* clone() const override;
    virtual void update(float time) override;
    virtual void startWithTarget(Node *target) override;
    
CC_CONSTRUCTOR_ACCESS:
    SplitRows() {}
    virtual ~SplitRows() {}
    
    // AtlasNode - draw
void AtlasNode::draw(Renderer *renderer, const Mat4 &transform, uint32_t flags)
{
    // ETC1 ALPHA supports.
    _quadCommand.init(_globalZOrder, _textureAtlas->getTexture(), getGLProgramState(), _blendFunc, _textureAtlas->getQuads(), _quadsToDraw, transform, flags);
    
    renderer->addCommand(&_quadCommand);
    }
    
    class TextureAtlas;
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
    #include <algorithm>
    
    class DHTTask;
    
    
    {} // namespace aria2
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
      virtual ~DHTUnknownMessage();