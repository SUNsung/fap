
        
          for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    
    {}  // namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_

    
      // Creates a 3d FFT plan.
  virtual std::unique_ptr<Plan> Create3dPlan(Stream *stream, uint64 num_x,
                                             uint64 num_y, uint64 num_z,
                                             Type type, bool in_place_fft) = 0;
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    
    {}  // namespace grpc
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, const grpc::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const grpc::string& name, const grpc::string& value)
        : name_(name), value_(value) {}
    }
    }
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  host_cpu_load_info_data_t cpuinfo;
  mach_msg_type_number_t count = HOST_CPU_LOAD_INFO_COUNT;
  if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO,
                      (host_info_t)&cpuinfo, &count) == KERN_SUCCESS) {
    for (int i = 0; i < CPU_STATE_MAX; i++) total += cpuinfo.cpu_ticks[i];
    busy = total - cpuinfo.cpu_ticks[CPU_STATE_IDLE];
  }
  return std::make_pair(busy, total);
}
    
    #endif  // GPR_WINDOWS

    
    // Given a map from type K to a set of value type V, removes the given key and
// the associated set, and returns the set. Returns an empty set if the key is
// not found.
template <typename K, typename V>
std::set<V> UnorderedMapOfSetExtract(std::unordered_map<K, std::set<V>>& map,
                                     const K& key) {
  auto it = map.find(key);
  if (it != map.end()) {
    auto set = std::move(it->second);
    map.erase(it);
    return set;
  }
  return {};
};
    
    ThreadPoolInterface* CreateDefaultThreadPool();
    
    #include <grpc/support/log.h>
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    /*! \brief interface of objective function */
class ObjFunction {
 public:
  /*! \brief virtual destructor */
  virtual ~ObjFunction() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Configure the objective with the specified parameters.
   * \param args arguments to the objective function.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief Get gradient over each of predictions, given existing information.
   * \param preds prediction of current round
   * \param info information about labels, weights, groups in rank
   * \param iteration current iteration number.
   * \param out_gpair output of get gradient, saves gradient and second order gradient in
   */
  virtual void GetGradient(const HostDeviceVector<bst_float>& preds,
                           const MetaInfo& info,
                           int iteration,
                           HostDeviceVector<GradientPair>* out_gpair) = 0;
    }
    
      void PredictContribution(DMatrix* p_fmat, std::vector<bst_float>* out_contribs,
                           const gbm::GBTreeModel& model, unsigned ntree_limit,
                           bool approximate,
                           int condition,
                           unsigned condition_feature) override {
    const int nthread = omp_get_max_threads();
    InitThreadTemp(nthread,  model.param.num_feature);
    const MetaInfo& info = p_fmat->Info();
    // number of valid trees
    ntree_limit *= model.param.num_output_group;
    if (ntree_limit == 0 || ntree_limit > model.trees.size()) {
      ntree_limit = static_cast<unsigned>(model.trees.size());
    }
    const int ngroup = model.param.num_output_group;
    size_t ncolumns = model.param.num_feature + 1;
    // allocate space for (number of features + bias) times the number of rows
    std::vector<bst_float>& contribs = *out_contribs;
    contribs.resize(info.num_row_ * ncolumns * model.param.num_output_group);
    // make sure contributions is zeroed, we could be reusing a previously
    // allocated one
    std::fill(contribs.begin(), contribs.end(), 0);
    // initialize tree node mean values
    #pragma omp parallel for schedule(static)
    for (bst_omp_uint i = 0; i < ntree_limit; ++i) {
      model.trees[i]->FillNodeMeanValues();
    }
    const std::vector<bst_float>& base_margin = info.base_margin_.HostVector();
    // start collecting the contributions
    for (const auto &batch : p_fmat->GetRowBatches()) {
      // parallel over local batch
      const auto nsize = static_cast<bst_omp_uint>(batch.Size());
#pragma omp parallel for schedule(static)
      for (bst_omp_uint i = 0; i < nsize; ++i) {
        auto row_idx = static_cast<size_t>(batch.base_rowid + i);
        unsigned root_id = info.GetRoot(row_idx);
        RegTree::FVec& feats = thread_temp[omp_get_thread_num()];
        // loop over all classes
        for (int gid = 0; gid < ngroup; ++gid) {
          bst_float* p_contribs =
              &contribs[(row_idx * ngroup + gid) * ncolumns];
          feats.Fill(batch[i]);
          // calculate contributions
          for (unsigned j = 0; j < ntree_limit; ++j) {
            if (model.tree_info[j] != gid) {
              continue;
            }
            if (!approximate) {
              model.trees[j]->CalculateContributions(feats, root_id, p_contribs,
                                                     condition, condition_feature);
            } else {
              model.trees[j]->CalculateContributionsApprox(feats, root_id, p_contribs);
            }
          }
          feats.Drop(batch[i]);
          // add base margin to BIAS
          if (base_margin.size() != 0) {
            p_contribs[ncolumns - 1] += base_margin[row_idx * ngroup + gid];
          } else {
            p_contribs[ncolumns - 1] += model.base_margin;
          }
        }
      }
    }
  }
    
      for (const auto &batch : (*dmat)->GetRowBatches()) {
    ASSERT_EQ(batch[0][0].fvalue, 0.0f);
    ASSERT_EQ(batch[0][1].fvalue, -4.0f);
    ASSERT_EQ(batch[2][0].fvalue, 3.0f);
    ASSERT_EQ(batch[2][1].fvalue, 0.0f);
  }
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
      std::shared_ptr<DHTBucket>
  getBucketFor(const std::shared_ptr<DHTNode>& node) const;
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
      WRITE_CHECK(fp, header, 8);
  // write save date
  uint64_t ntime = hton64(Time().getTimeFromEpoch());
  WRITE_CHECK(fp, &ntime, sizeof(ntime));
    
    #include 'common.h'
    
    
    {} // namespace aria2

    
    class DHTTaskFactoryImpl : public DHTTaskFactory {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    void DNSCache::markBad(const std::string& hostname, const std::string& ipaddr,
                       uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i != entries_.end()) {
    (*i)->markBad(ipaddr);
  }
}