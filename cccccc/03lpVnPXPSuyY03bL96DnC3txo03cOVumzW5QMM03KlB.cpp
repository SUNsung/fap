
        
          // From constructor arguments
  const OpDef& op_def_;
  const ApiDef& api_def_;
  const string function_name_;
  const int num_outs_;
    
    
    {}  // namespace tensorflow

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    static void TensorReleaser_dealloc(PyObject* pself) {
  TensorReleaser* self = reinterpret_cast<TensorReleaser*>(pself);
  (*self->destructor)();
  delete self->destructor;
  TensorReleaserType.tp_free(pself);
}
    
    PyExceptionRegistry* PyExceptionRegistry::singleton_ = nullptr;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    CUDAExecutor *cuda_exec):
      driver_scoped_activate_context_(
          new ScopedActivateContext{ExtractCudaContext(cuda_exec)}) { }
    
      // A simple array of pointers to the best assigned column division at
  // each grid y coordinate. This pointer is passed in from the caller, so do
  // NOT destroy it in the class.
  ColPartitionSet** best_columns_;
    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
    // Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::StringParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_STRING;
  sIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::IntParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_INTEGER;
  iIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::BoolParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_BOOLEAN;
  bIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::DoubleParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_DOUBLE;
  dIt = it;
  vcMap[my_id_] = this;
}
    
    #include 'allheaders.h'
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    
    {  if (op->send_message() != nullptr) {
    ++sent_message_count_;
  }
  if (op->recv_message() != nullptr) {
    recv_message_ = op->op()->payload->recv_message.recv_message;
    initial_on_done_recv_message_ =
        op->op()->payload->recv_message.recv_message_ready;
    op->op()->payload->recv_message.recv_message_ready = &on_done_recv_message_;
  }
  if (op->recv_trailing_metadata() != nullptr) {
    recv_trailing_metadata_ = op->recv_trailing_metadata()->batch();
    initial_on_done_recv_trailing_metadata_ =
        op->op()->payload->recv_trailing_metadata.recv_trailing_metadata_ready;
    op->op()->payload->recv_trailing_metadata.recv_trailing_metadata_ready =
        &on_done_recv_trailing_metadata_;
  }
  // Call next op.
  grpc_call_next_op(elem, op->op());
}
    
    
    {}  // namespace grpc
    
    // Thread compatible.
class CensusContext {
 public:
  CensusContext() : span_(::opencensus::trace::Span::BlankSpan()) {}
    }
    
    using grpc::Status;
using grpc::StatusCode;
using grpc::reflection::v1alpha::ErrorResponse;
using grpc::reflection::v1alpha::ExtensionNumberResponse;
using grpc::reflection::v1alpha::ExtensionRequest;
using grpc::reflection::v1alpha::FileDescriptorResponse;
using grpc::reflection::v1alpha::ListServiceResponse;
using grpc::reflection::v1alpha::ServerReflectionRequest;
using grpc::reflection::v1alpha::ServerReflectionResponse;
using grpc::reflection::v1alpha::ServiceResponse;
    
      Status GetFileContainingSymbol(
      ServerContext* context, const grpc::string& symbol,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const grpc::string& name, int value)
        : name_(name), value_(value) {}
    }
    }
    
    #include <grpc/support/cpu.h>
    
    DynamicThreadPool::DynamicThread::DynamicThread(DynamicThreadPool* pool)
    : pool_(pool),
      thd_('grpcpp_dynamic_pool',
           [](void* th) {
             static_cast<DynamicThreadPool::DynamicThread*>(th)->ThreadFunc();
           },
           this) {
  thd_.Start();
}
DynamicThreadPool::DynamicThread::~DynamicThread() { thd_.Join(); }
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
     public:
  ATCPlugin(const std::string& path,
            const TableColumns& tc_columns,
            const std::string& sqlite_query)
      : tc_columns_(tc_columns), sqlite_query_(sqlite_query), path_(path) {}
    
      auto cv = config.find(kLoggerKey);
  if (cv != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(cv->second.doc(), obj);
    data_.add(kLoggerKey, obj);
  }
    
    
    { private:
  static const std::string kLoggerKey;
};
    
    namespace osquery {
    }
    
    
    {  // Any views left are views that don't exist in the new configuration file
  // so we tear them down and remove them from the database.
  for (const auto& old_view : erase_views) {
    osquery::query('DROP VIEW ' + old_view, r);
    deleteDatabaseValue(kQueries, kConfigViews + old_view);
  }
  return Status(0, 'OK');
}
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    class DHTResponseMessage : public DHTAbstractMessage {
protected:
  virtual std::string toStringOptional() const { return A2STR::NIL; }
    }
    
      void dropNode(const std::shared_ptr<DHTNode>& node);
    
      // If you change the code to read more than the size of buf, then
  // expand the buf size here.
  array_wrapper<unsigned char, 255> buf;
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
    
    {} // namespace aria2

    
    Lens3D* Lens3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Lens3D();
    a->initWithDuration(_duration, _gridSize, _position, _radius);
    a->autorelease();
    return a;
}
    
    /**
@brief Twirl action.
@details This action is used for take effect on the target node as twirl.
        You can control the effect by these parameters:
        duration, grid size, center position, twirls count, amplitude.
*/
class CC_DLL Twirl : public Grid3DAction
{
public:
    /**
    @brief Create the action with center position, number of twirls, amplitude, a grid size and duration.
    @param duration Specify the duration of the Twirl action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param position Specify the center position of the twirl action.
    @param twirls Specify the twirls count of the Twirl action.
    @param amplitude Specify the amplitude of the Twirl action.
    @return If the creation success, return a pointer of Twirl action; otherwise, return nil.
    */
    static Twirl* create(float duration, const Size& gridSize, const Vec2& position, unsigned int twirls, float amplitude);
    }
    
    protected:
    SEL_CallFuncND _callFuncND;
    void* _data;
    
        /** Sets the inner action.
     *
     * @param action The inner action.
     */
    void setInnerAction(FiniteTimeAction *action)
    {
        if (_innerAction != action)
        {
            CC_SAFE_RETAIN(action);
            CC_SAFE_RELEASE(_innerAction);
            _innerAction = action;
        }
    }
    
    http://www.cocos2d-x.org
    
    
    {        return true;
    }
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/