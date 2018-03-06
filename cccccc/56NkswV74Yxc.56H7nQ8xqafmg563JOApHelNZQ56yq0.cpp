
        
        #include 'tensorflow/core/common_runtime/debugger_state_interface.h'
    
    TEST(PartialRunMgrFindOrCreate, Create) {
  // Basic test of PartialRunMgr CancellationManager creation.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  EXPECT_TRUE(cancellation_manager != nullptr);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    
    {
    {      if (fcntl(parent_pipe_[i], F_SETFL, O_NONBLOCK) < 0) {
        LOG(ERROR) << 'Start cannot make pipe non-blocking: '
                   << strerror(errno);
        ClosePipes();
        return false;
      }
      if (fcntl(parent_pipe_[i], F_SETFD, FD_CLOEXEC) < 0) {
        LOG(ERROR) << 'Start cannot make pipe close-on-exec: '
                   << strerror(errno);
        ClosePipes();
        return false;
      }
    }
  }
    
      ExpectSuccess(Builder().Input(FakeInput(3, DT_STRING)),
                {DT_STRING, DT_STRING, DT_STRING}, {}, R'proto(
      op: 'NPolymorphicRestrictIn'
      input: ['a', 'a:1', 'a:2']
      attr { key: 'N' value { i: 3 } }
      attr { key: 'T' value { type: DT_STRING } } )proto');
    
     private:
  WritableFile* dest_;
  RecordWriterOptions options_;
    
    namespace internal {
template <typename Scalar>
struct functor_traits<scalar_clip_op<Scalar> > {
  enum {
    Cost = NumTraits<Scalar>::AddCost * 3,
    PacketAccess = packet_traits<Scalar>::HasMax &&
                   packet_traits<Scalar>::HasMin &&
                   packet_traits<Scalar>::HasNegate
  };
};
}  // namespace internal
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      void Compute(OpKernelContext* c) override {
    OpInputList indices_inputs;
    OpInputList data_inputs;
    int first_dim_size;
    Tensor* merged = nullptr;
    this->CheckArgsAndAllocateResult(c, &indices_inputs, &data_inputs,
                                     &first_dim_size, nullptr, &merged);
    if (!c->status().ok()) {
      // Avoid segmentation faults if merged cannot be allocated and an error is
      // passed back in the context.
      return;
    }
    }
    
      void Attach(mate::Arguments* args);
  bool IsAttached();
  void Detach();
  void SendCommand(mate::Arguments* args);
    
    class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    namespace mate {
    }
    
    v8::Local<v8::Object> CreateJSEvent(
    v8::Isolate* isolate,
    v8::Local<v8::Object> object,
    content::WebContents* sender,
    IPC::Message* message) {
  v8::Local<v8::Object> event;
  bool use_native_event = sender && message;
    }
    
    LoginHandler::LoginHandler(net::AuthChallengeInfo* auth_info,
                           net::URLRequest* request)
    : handled_auth_(false),
      auth_info_(auth_info),
      request_(request),
      render_process_host_id_(0),
      render_frame_id_(0) {
  content::ResourceRequestInfo::ForRequest(request_)->GetAssociatedRenderFrame(
      &render_process_host_id_,  &render_frame_id_);
    }
    
    
    {}  // namespace atom
    
    #include 'atom/browser/net/js_asker.h'
#include 'base/memory/ref_counted_memory.h'
#include 'net/http/http_status_code.h'
#include 'net/url_request/url_request_simple_job.h'
    
    
    {  cached_entries_.Clear();
  for (const auto& iter : entries_)
    cached_entries_.Append(iter.second->CreateDeepCopy());
  cache_needs_update_ = false;
}
    
    #include <string>
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    
    {}  // namespace remote
    
    
    {
    {    new_value = JoinString(parts, ',');
  }
  SetNodeText(new_value, &element_);
}
    
    namespace nwapi {
    }
    
      v8::Handle<v8::Value> id_val;
  if (web_view->mainFrame() && !web_view->mainFrame()->mainWorldScriptContext().IsEmpty()) {
    v8::Context::Scope cscope (web_view->mainFrame()->mainWorldScriptContext());
    id_val = nwapi::Dispatcher::GetWindowId(web_view->mainFrame());
  }
  if (id_val.IsEmpty())
    return;
  if (id_val->IsUndefined() || id_val->IsNull())
    return;
    
      // Get Shell's corresponding js object's id.
  static void GetShellIdForCurrentContext(
      const v8::FunctionCallbackInfo<v8::Value>& args);
    
    
namespace nwapi {
    }
    
      ~EventListener() override;
    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
    #include <vector>
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_BASE_CONVOLUTION_LAYER_HPP_

    
     protected:
  /// @copydoc ContrastiveLossLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
                // 3. for bits in seq. training
            if (m_hasLattices)
            {
                m_LatticeCache.clear();
                m_uidCache.clear();
                m_extrauttmapCache.clear();
                m_BoundariesCache.clear();
    }
    
    // you can only copy inputs from nodes in the same network
void ComputationNetwork::CopyInputs(const std::wstring fromName, std::wstring toName)
{
    CopyNode(*this, fromName, toName, CopyNodeFlags::copyNodeInputLinks);
}
    
    enum CustomStructure
{
    customStructureNone = 0,  // not a custom structure
    customStructureStats = 1, // custom structure to store statistics
    customStructureMax
};
    
    BOOST_FIXTURE_TEST_CASE(MatrixDenseTimesSparse, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
            // inject additional items into the source code
        // We support two ways of specifying the network in BrainScript:
        //  - BrainScriptNetworkBuilder = ( any BS expression that evaluates to a ComputationNetwork )
        //  - BrainScriptNetworkBuilder = { constructor parameters for a ComputationNetwork }
        // For back-compat, [ ] is allowed and means the same as { }
        if (sourceOfNetwork[0] == '{' || sourceOfNetwork[0] == '[') // if { } form then we turn it into ComputationNetwork by constructing a ComputationNetwork from it
            sourceOfNetwork = L'new ComputationNetwork ' + sourceOfNetwork;
        let sourceOfBS = msra::strfun::wstrprintf(L'include \'cntk.core.bs\'\n' // include our core lib. Note: Using lowercase here to match the Linux name of the CNTK exe.
            L'deviceId = %d\n'            // deviceId as passed in
            L'traceLevel = %d\n'
            L'precision = '%ls'\n'        // 'float' or 'double'
            L'network = %ls',             // source code of expression that evaluates to a ComputationNetwork
            (int)deviceId, traceLevel, ElemTypeName<ElemType>(), sourceOfNetwork.c_str());
        let expr = BS::ParseConfigDictFromString(sourceOfBS, L'BrainScriptNetworkBuilder', move(includePaths));
    }
    
    // Same as 'ReadConfigFiles' function below, but takes as input string instead of wstring
std::string ConfigParser::ReadConfigFiles(const std::string& filePaths)
{
    return ReadConfigFiles(msra::strfun::utf16(filePaths));
}
    
    
    
    #endif // __cocos2dx_csloader_h__

    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
    }
    
    
    
    	AddPair()
	{
		m_world->SetGravity(b2Vec2(0.0f,0.0f));
		{
			b2CircleShape shape;
			shape.m_p.SetZero();
			shape.m_radius = 0.1f;
    }
    }
    
    		{
			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 0.125f);
    }
    
    	b2Body* m_car;
	b2Body* m_wheel1;
	b2Body* m_wheel2;
    
    // Avoid calling stol as it triggers a bug in clang/glibc build.
static long MyStol(const char *Str) {
  long Res = 0;
  long Sign = 1;
  if (*Str == '-') {
    Str++;
    Sign = -1;
  }
  for (size_t i = 0; Str[i]; i++) {
    char Ch = Str[i];
    if (Ch < '0' || Ch > '9')
      return Res;
    Res = Res * 10 + (Ch - '0');
  }
  return Res * Sign;
}
    
      if (Options.UseCounters) {
    uint64_t CounterDelta =
        EF->__sanitizer_update_counter_bitset_and_clear_counters(
            C->CounterBitmap.data());
    if (CounterDelta > 0) {
      Res = true;
      C->CounterBitmapBits += CounterDelta;
    }
  }
    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;
    
      static const size_t kTORCSize = 1 << 5;
  TableOfRecentCompares<uint32_t, kTORCSize> TORC4;
  TableOfRecentCompares<uint64_t, kTORCSize> TORC8;
    
    void __sanitizer_weak_hook_strcmp(void *caller_pc, const char *s1,
                                   const char *s2, int result) {
  fuzzer::TPC.AddValueForStrcmp(caller_pc, s1, s2, 64);
  if (!RecordingMemcmp) return;
  if (result == 0) return;  // No reason to mutate.
  size_t Len1 = strlen(s1);
  size_t Len2 = strlen(s2);
  size_t N = std::min(Len1, Len2);
  if (N <= 1) return;  // Not interesting.
  TS->TraceMemcmpCallback(N, reinterpret_cast<const uint8_t *>(s1),
                          reinterpret_cast<const uint8_t *>(s2));
}
    
    unsigned NumberOfCpuCores() {
  unsigned N = std::thread::hardware_concurrency();
  if (!N) {
    Printf('WARNING: std::thread::hardware_concurrency not well defined for '
           'your platform. Assuming CPU count of 1.\n');
    N = 1;
  }
  return N;
}
    
    #endif  // LLVM_FUZZER_UTIL_H
