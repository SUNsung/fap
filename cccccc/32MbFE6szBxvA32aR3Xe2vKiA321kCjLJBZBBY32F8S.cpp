
        
        class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    #if defined(OS_WIN) || defined(OS_LINUX)
bool MenuItem::AcceleratorPressed(const ui::Accelerator& accelerator) {
#if defined(OS_WIN)
  if (meta_down_flag_) {
    if ((::GetKeyState(VK_APPS) & 0x8000) != 0x8000) {
      return true;
    }
  }
#endif
  OnClick();
  return true;
}
    
    void NwAppClearCacheFunction::OnBrowsingDataRemoverDone() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  run_loop_.Quit();
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    /* Pair (label, confidence) representing a prediction. */
typedef std::pair<string, float> Prediction;
    
      virtual inline const char* type() const { return 'ArgMax'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \left\{
   *        \begin{array}{lr}
   *            x                  & \mathrm{if} \; x > 0 \\
   *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$.  
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    
    {  GetReporter()->ReportQPS(*result);
  GetReporter()->ReportLatency(*result);
}
    
    
    {  void ReadLong(long* l) {
    size_t start = current_;
    while (current_ != db_.size() && db_[current_] != ',' && db_[current_] != '}') {
      current_++;
    }
    // It will throw an exception if fails.
    *l = std::stol(db_.substr(start, current_ - start));
  }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    
    {
    {}  // namespace
}  // namespace grpc
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    
    {            // for sequence training
            if (!criterionNodes.empty() && criterionNodes[0]->OperationName() == L'SequenceWithSoftmax')
            {
                auto node = dynamic_pointer_cast<SequenceWithSoftmaxNode<ElemType>>(criterionNodes[0]);
                assert(node);
                m_netLatticePtr = node->getLatticePtr();
                m_netExtrauttMapPtr = node->getextrauttmap();
                m_netUidPtr = node->getuidprt();
                m_netBoundariesPtr = node->getboundaryprt();
                m_hasLattices = true;
            }
            else
            {
                m_netLatticePtr = nullptr;
                m_netExtrauttMapPtr = nullptr;
                m_netUidPtr = nullptr;
                m_netBoundariesPtr = nullptr;
                m_hasLattices = false;
            }
        }
    
        size_t m_prevChosenMinibatchSize;
    double m_lastFinishedEpochTrainLoss;
    
            static Status Load(const std::string& p_filePath, /*out*/ std::shared_ptr<Model>* p_model);
    
    namespace ONNXIR {
    // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Sigmoid)
        .Description('Sigmoid takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the sigmoid function, y = 1 / (1 + exp(-x)), is applied to the '
            'tensor elementwise.')
        .Input('X', 'input tensor', 'T')
        .Output('Y', 'The sigmoid value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Concat)
        .Description('Concatenate takes as input a list of tensors, all of the same shape'
            'expect for the concatenation axis, and returns a single tensor, the concatenation'
            'of all inputs.')
        .Input('input', 'A list of input tensors.', 'T')
        .Output('concat_result', 'Concatenated tensor', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', 'Axis along which to concatenate', AttrType::AttributeProto_AttributeType_INT);
    
        // Stores all frames of the chunk consecutively (mutable since this is a cache).
    mutable msra::dbn::matrix m_frames;
    
        Matrix<float> mB = Matrix<float>::RandomGaussian(dim2, dim1, c_deviceIdZero, 1.0f, 4.0f, IncrementCounter());
    Matrix<float> mC = Matrix<float>::RandomGaussian(dim2, dim2, c_deviceIdZero, 1.0f, 2.0f, IncrementCounter());
    Matrix<float> mD(mC.DeepClone());
    
    void GranularGPUDataTransferer::WaitForCopyGPUToCPU()
{
    PrepareDevice(m_deviceId);
    cudaEventSynchronize(m_fetchCompleteEvent) || 'cudaEventSynchronize failed';
}
    
    bool js_cocos2dx_studio_InnerActionFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_InnerActionFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_InnerActionFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_InnerActionFrame_getEndFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_getStartFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_getInnerActionType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setEndFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setEnterWithName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setSingleFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setStartFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_getSingleFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setInnerActionType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_setAnimationName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InnerActionFrame_InnerActionFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic'.',&tolua_err);
#endif
    
    
    
    
    
    
    
    
    
    
#endif

    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
      // Check that opening non-existent file fails.
  unique_ptr<SequentialFile> seq_file;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_TRUE(!env_->NewSequentialFile(test_dir_ + '/non_existent', &seq_file,
                                       soptions_)
                   .ok());
  ASSERT_TRUE(!seq_file);
  ASSERT_TRUE(!env_->NewRandomAccessFile(test_dir_ + '/non_existent',
                                         &rand_file, soptions_)
                   .ok());
  ASSERT_TRUE(!rand_file);
    
    TEST_F(MockEnvTest, FakeSleeping) {
  int64_t now = 0;
  auto s = env_->GetCurrentTime(&now);
  ASSERT_OK(s);
  env_->FakeSleepForMicroseconds(3 * 1000 * 1000);
  int64_t after_sleep = 0;
  s = env_->GetCurrentTime(&after_sleep);
  ASSERT_OK(s);
  auto delta = after_sleep - now;
  // this will be true unless test runs for 2 seconds
  ASSERT_TRUE(delta == 3 || delta == 4);
}
    
    /* GLOBAL CONSTANT */
const char *default_db_name     = 'default_envlibrados_db';
const char *default_pool_name   = 'default_envlibrados_pool';
const char *default_config_path = 'CEPH_CONFIG_PATH';           // the env variable name of ceph configure file
// maximum dir/file that can store in the fs
const int MAX_ITEMS_IN_FS = 1 << 30;
// root dir tag
const std::string ROOT_DIR_KEY = '/';
const std::string DIR_ID_VALUE = '<DIR>';
    
      // if this memtable contains data from a committed
  // two phase transaction we must take note of the
  // log which contains that data so we can know
  // when to relese that log
  void RefLogContainingPrepSection(uint64_t log);
  uint64_t GetMinLogContainingPrepSection();
    
      // Same as ::Insert
  // Returns false if MemTableRepFactory::CanHandleDuplicatedKey() is true and
  // the <key, seq> already exists.
  virtual bool InsertKey(KeyHandle handle) {
    Insert(handle);
    return true;
  }
    
    // Use TEST_SYNC_POINT to specify sync points inside code base.
// Sync points can have happens-after depedency on other sync points,
// configured at runtime via SyncPoint::LoadDependency. This could be
// utilized to re-produce race conditions between threads.
// See TransactionLogIteratorRace in db_test.cc for an example use case.
// TEST_SYNC_POINT is no op in release build.
#define TEST_SYNC_POINT(x) rocksdb::SyncPoint::GetInstance()->Process(x)
#define TEST_IDX_SYNC_POINT(x, index) \
  rocksdb::SyncPoint::GetInstance()->Process(x + std::to_string(index))
#define TEST_SYNC_POINT_CALLBACK(x, y) \
  rocksdb::SyncPoint::GetInstance()->Process(x, y)
#endif  // NDEBUG

    
    
void SyncPoint::Data::LoadDependency(const std::vector<SyncPointPair>& dependencies) {
  std::lock_guard<std::mutex> lock(mutex_);
  successors_.clear();
  predecessors_.clear();
  cleared_points_.clear();
  for (const auto& dependency : dependencies) {
    successors_[dependency.predecessor].push_back(dependency.successor);
    predecessors_[dependency.successor].push_back(dependency.predecessor);
  }
  cv_.notify_all();
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
    #pragma once
#include <cstring>
#include <string>
#include <sstream>
    
    // As above, but tolerant of nullptr.
template <typename T>
static inline RefPtr<T> assumeAlreadyReffedOrNull(T* ptr) {
  return ptr ? RefPtr<T>::assumeAlreadyReffed(ptr) : nullptr;
}
    
    namespace aria2 {
    }
    
    void AbstractBtMessage::setBtMessageValidator(
    std::unique_ptr<BtMessageValidator> validator)
{
  validator_ = std::move(validator);
}
    
    #ifdef __MINGW32__
  HANDLE fd_;
  // The handle for memory mapped file. mmap equivalent in Windows.
  HANDLE mapView_;
#else  // !__MINGW32__
  int fd_;
#endif // !__MINGW32__
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    const char* AbstractOptionHandler::getName() const { return pref_->k; }
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    #endif // D_ADAPTIVE_FILE_ALLOCATION_ITERATOR_H

    
    namespace {
class FindStoppedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::STOPPED:
    case AnnounceTier::COMPLETED:
    case AnnounceTier::SEEDING:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
      /**
   * The internal announce URL pointer points to next URL.
   * If the current URL is the last element of its group, then the first
   * element of the next group is pointed.
   */
  void announceFailure();
    
      bool tryAsPKCS12(const std::string& certfile);