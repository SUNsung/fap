
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Returns true if s is a Python keyword or built-in.
bool IsPythonReserved(const string& s);
    
    REGISTER_OP('ShapelessOp');
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // We hit a mysterious crash if we haven't initialized numpy before this:
  PyBfloat16_Type.tp_base = &PyGenericArrType_Type;
    
    // Returns the PyObject for the bfloat16 type.
PyObject* Bfloat16PyType();
    
    /// Get the total length and remove the nth node
/// Two Pass Algorithm
///
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    }
    }
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    
    {    return 0;
}
    
    int main() {
    }
    
            TreeNode* p = root;
        while(p != NULL || !stack.empty()){
            if(p != NULL){
                stack.push(p);
                output.push(p);
                p = p->right;
            }
            else{
                p = stack.top();
                stack.pop();
                p = p->left;
            }
        }
    
    void LiveRegionHost::Announce(NarratorAnnouncement^ announcement)
{
    if (m_host == nullptr)
    {
        m_host = ref new TextBlock();
        AutomationProperties::SetLiveSetting(m_host, AutomationLiveSetting::Assertive);
    }
    }
    
    // This static variable is used only to call the initialization function, to initialize the other static variables.
int NarratorAnnouncementHostFactory::s_init = NarratorAnnouncementHostFactory::Initialize();
int NarratorAnnouncementHostFactory::Initialize()
{
    RegisterHosts();
    NarratorAnnouncementHostFactory::s_hostProducer = GetHostProducer();
    }
    
    
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    namespace xgboost {
namespace obj {
    }
    }
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
    
    {  inline void SetPrune(const WQSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType begin = src.data[0].rmax;
    const RType range = src.data[src.size - 1].rmin - src.data[0].rmax;
    const size_t n = maxsize - 1;
    data[0] = src.data[0];
    this->size = 1;
    // lastidx is used to avoid duplicated records
    size_t i = 1, lastidx = 0;
    for (size_t k = 1; k < n; ++k) {
      RType dx2 =  2 * ((k * range) / n + begin);
      // find first i such that  d < (rmax[i+1] + rmin[i+1]) / 2
      while (i < src.size - 1
             && dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
      CHECK(i != src.size - 1);
      if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
        if (i != lastidx) {
          data[size++] = src.data[i]; lastidx = i;
        }
      } else {
        if (i + 1 != lastidx) {
          data[size++] = src.data[i + 1]; lastidx = i + 1;
        }
      }
    }
    if (lastidx != src.size - 1) {
      data[size++] = src.data[src.size - 1];
    }
  }
  /*!
   * \brief set current summary to be merged summary of sa and sb
   * \param sa first input summary to be merged
   * \param sb second input summary to be merged
   */
  inline void SetCombine(const WQSummary &sa,
                         const WQSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0);
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    // extended rmin value
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      // duplicated value entry
      if (a->value == b->value) {
        *dst = Entry(a->rmin + b->rmin,
                     a->rmax + b->rmax,
                     a->wmin + b->wmin, a->value);
        aprev_rmin = a->RMinNext();
        bprev_rmin = b->RMinNext();
        ++dst; ++a; ++b;
      } else if (a->value < b->value) {
        *dst = Entry(a->rmin + bprev_rmin,
                     a->rmax + b->RMaxPrev(),
                     a->wmin, a->value);
        aprev_rmin = a->RMinNext();
        ++dst; ++a;
      } else {
        *dst = Entry(b->rmin + aprev_rmin,
                     b->rmax + a->RMaxPrev(),
                     b->wmin, b->value);
        bprev_rmin = b->RMinNext();
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType brmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(a->rmin + bprev_rmin, a->rmax + brmax, a->wmin, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType armax = (a_end - 1)->rmax;
      do {
        *dst = Entry(b->rmin + aprev_rmin, b->rmax + armax, b->wmin, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    this->size = dst - data;
    const RType tol = 10;
    RType err_mingap, err_maxgap, err_wgap;
    this->FixError(&err_mingap, &err_maxgap, &err_wgap);
    if (err_mingap > tol || err_maxgap > tol || err_wgap > tol) {
      LOG(INFO) << 'mingap=' << err_mingap
                << ', maxgap=' << err_maxgap
                << ', wgap=' << err_wgap;
    }
    CHECK(size <= sa.size + sb.size) << 'bug in combine';
  }
  // helper function to print the current content of sketch
  inline void Print() const {
    for (size_t i = 0; i < this->size; ++i) {
      LOG(CONSOLE) << '[' << i << '] rmin=' << data[i].rmin
                   << ', rmax=' << data[i].rmax
                   << ', wmin=' << data[i].wmin
                   << ', v=' << data[i].value;
    }
  }
  // try to fix rounding error
  // and re-establish invariance
  inline void FixError(RType *err_mingap,
                       RType *err_maxgap,
                       RType *err_wgap) const {
    *err_mingap = 0;
    *err_maxgap = 0;
    *err_wgap = 0;
    RType prev_rmin = 0, prev_rmax = 0;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin < prev_rmin) {
        data[i].rmin = prev_rmin;
        *err_mingap = std::max(*err_mingap, prev_rmin - data[i].rmin);
      } else {
        prev_rmin = data[i].rmin;
      }
      if (data[i].rmax < prev_rmax) {
        data[i].rmax = prev_rmax;
        *err_maxgap = std::max(*err_maxgap, prev_rmax - data[i].rmax);
      }
      RType rmin_next = data[i].RMinNext();
      if (data[i].rmax < rmin_next) {
        data[i].rmax = rmin_next;
        *err_wgap = std::max(*err_wgap, data[i].rmax - rmin_next);
      }
      prev_rmax = data[i].rmax;
    }
  }
  // check consistency of the summary
  inline bool Check(const char *msg) const {
    const float tol = 10.0f;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin + data[i].wmin > data[i].rmax + tol ||
          data[i].rmin < -1e-6f || data[i].rmax < -1e-6f) {
        LOG(INFO) << '---------- WQSummary::Check did not pass ----------';
        this->Print();
        return false;
      }
    }
    return true;
  }
};
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
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
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    if (!fi->Read(&offset_vec)) return false;
    auto& data_vec = page->data.HostVector();
    CHECK_NE(page->offset.Size(), 0U) << 'Invalid SparsePage file';
    data_vec.resize(offset_vec.back());
    if (page->data.Size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec),
                        (page->data).Size() * sizeof(Entry)),
               (page->data).Size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
      void dropNode(const std::shared_ptr<DHTNode>& node);
    
    namespace aria2 {
    }
    
    class DHTTaskExecutor {
private:
  int numConcurrent_;
  std::vector<std::shared_ptr<DHTTask>> execTasks_;
  std::deque<std::shared_ptr<DHTTask>> queue_;
    }
    
    
    {  void setTimeout(std::chrono::seconds timeout)
  {
    timeout_ = std::move(timeout);
  }
};
    
    #endif // D_DHT_TASK_QUEUE_H

    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    void DHTUnknownMessage::doReceivedAction() {}
    
        // create an object from std::unordered_multimap
    std::unordered_multimap<std::string, bool> c_ummap
    {
        {'one', true}, {'two', true}, {'three', false}, {'three', true}
    };
    json j_ummap(c_ummap); // only one entry for key 'three' is used