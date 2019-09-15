
        
        
    {    Lock& lock;
    Lock templock;
};
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    // Maximum level to which a new compacted memtable is pushed if it
// does not create overlap.  We try to push to level 2 to avoid the
// relatively expensive level 0=>1 compactions and to avoid some
// expensive manifest file operations.  We do not push all the way to
// the largest level since that can generate a lot of wasted disk
// space if the same key space is being repeatedly overwritten.
static const int kMaxMemCompactLevel = 2;
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
    #include <stdio.h>
#include 'leveldb/dumpfile.h'
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    
    {    while (next_num_ < kMaxNaturalNumberValue) {
      n = GetBinaryReversedInteger(next_num_++);
      if (n < N_) break;
    }
    return (next_num_ > kMaxNaturalNumberValue) ? kInvalidVal : n;
  }
    
    // Returns a vector representing the direction of a feature with the given
// theta direction in an INT_FEATURE_STRUCT.
FCOORD FeatureDirection(uint8_t theta);
    
     public:
  // Returns the shape that contains unichar_id that has the best result.
  // If result is not nullptr, it is set with the shape_id and rating.
  // Returns -1 if ClassifySample fails to provide any result containing
  // unichar_id. BestShapeForUnichar does not need to be overridden if
  // ClassifySample respects the keep_this rule.
  virtual int BestShapeForUnichar(const TrainingSample& sample, Pix* page_pix,
                                  UNICHAR_ID unichar_id, ShapeRating* result);
    
    /**
 * @brief Clip: @f$ y = \max(min, \min(max, x)) @f$.
 */
template <typename Dtype>
class ClipLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ClipParameter clip_param,
   *     with ClipLayer options:
   *   - min
   *   - max
   */
  explicit ClipLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    
    namespace caffe {
    }
    
    template <typename Dtype>
void Solver<Dtype>::Step(int iters) {
  const int start_iter = iter_;
  const int stop_iter = iter_ + iters;
  int average_loss = this->param_.average_loss();
  losses_.clear();
  smoothed_loss_ = 0;
  iteration_timer_.Start();
    }
    
    /**
 * @brief Pools the input image by taking the max, average, etc. within regions.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class PoolingLayer : public Layer<Dtype> {
 public:
  explicit PoolingLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifdef USE_LEVELDB
#include 'leveldb/db.h'
    
    // Common functions and classes from std that caffe often uses.
using std::fstream;
using std::ios;
using std::isnan;
using std::isinf;
using std::iterator;
using std::make_pair;
using std::map;
using std::ostringstream;
using std::pair;
using std::set;
using std::string;
using std::stringstream;
using std::vector;
    
     private:
  struct CancelState {
    std::atomic_bool callback_invoked{false};
  };
  void EchoNonDelayed(ServerContext* context, const EchoRequest* request,
                      EchoResponse* response,
                      experimental::ServerCallbackRpcController* controller,
                      CancelState* cancel_state);
    
      void TearDown() override { GPR_ASSERT(shutdown_); }
    
      lst_sock = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, NULL, 0,
                       grpc_get_default_wsa_socket_flags());
  GPR_ASSERT(lst_sock != INVALID_SOCKET);
    
    #include 'src/core/lib/iomgr/iocp_windows.h'
#include 'src/core/lib/iomgr/iomgr.h'
#include 'src/core/lib/iomgr/pollset_windows.h'
#include 'src/core/lib/iomgr/resolve_address.h'
#include 'src/core/lib/iomgr/socket_windows.h'
#include 'src/core/lib/iomgr/tcp_client.h'
#include 'src/core/lib/iomgr/tcp_server.h'
#include 'src/core/lib/iomgr/timer.h'
    
    static void on_alarm(void* acp, grpc_error* error) {
  async_connect* ac = (async_connect*)acp;
  gpr_mu_lock(&ac->mu);
  grpc_winsocket* socket = ac->socket;
  ac->socket = NULL;
  if (socket != NULL) {
    grpc_winsocket_shutdown(socket);
  }
  async_connect_unlock_and_cleanup(ac, socket);
}
    
      // Unsets `name` variable.
  void Unset();
    
    // Provides serialized access to some resource.
// Each action queued on a combiner is executed serially in a borrowed thread.
// The actual thread executing actions may change over time (but there will only
// ever be one at a time).
    
      void CompareService(const grpc::string& service) {
    const protobuf::ServiceDescriptor* service_desc =
        desc_pool_->FindServiceByName(service);
    const protobuf::ServiceDescriptor* ref_service_desc =
        ref_desc_pool_->FindServiceByName(service);
    EXPECT_TRUE(service_desc != nullptr);
    EXPECT_TRUE(ref_service_desc != nullptr);
    EXPECT_EQ(service_desc->DebugString(), ref_service_desc->DebugString());
    }
    
    
    {
    {
    {}  // namespace
}  // namespace testing
}  // namespace grpc
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    #include <algorithm>
    
    class DHTTaskFactory {
public:
  virtual ~DHTTaskFactory() = default;
    }
    
    #include <memory>
    
    
    {} // namespace aria2
    
    
    {    cudaStreamCreateWithFlags(&m_stream, cudaStreamDefault)
        || 'cudaStreamCreateWithFlags failed';
    fprintf(stderr, 'NcclComm: initialized\n');
}
    
                }
            else if (parameter.size() == 7)
            {
                int id = 2; // skip weightNode and inputValueNode
    
    // EqualInsensitive - check to see if two nodes are equal
// string1 - [in,out] string to compare, if comparision is equal insensitive but not sensitive, will replace with sensitive version
// string2 - second string to compare
// alternate - alternate naming of the string
// return - true if strings are equal insensitive and modifies string1 to sensitive version if different
bool EqualInsensitive(std::wstring& string1, const std::wstring& string2, const wchar_t* alternate /*=NULL*/)
{
    bool equal = EqualCI(string1, string2) ||
                 (alternate && EqualCI(string1, alternate));
    }
    
                if (m_recurrentLayers.size() > 0 && m_recurrentLayers[recur_idx] == 1)
            {
                w = builder.CreateLearnableParameter(L'W0', m_layerSizes[1], m_layerSizes[1]);
                m_net->RandomInitLearnableParameters(w, m_uniformInit, randomSeed++, m_initValueScale);
    }
    
            if (vec.capacity() < numElements)
        {
            // Bad luck - we can't reallocate memory of an external object at this point.
            RuntimeError('Not enough space in output buffer for output '%ls'.', node->GetName().c_str());
        }
    
    #include <future>
    
        // Prepare header.
    const size_t c_evalNodes = 1;
    if (gradHeader == nullptr)
        gradHeader.reset(DistGradHeader::Create(c_evalNodes),
                         [](DistGradHeader* ptr) { DistGradHeader::Destroy(ptr); });
    gradHeader->numEvalNode = c_evalNodes;
    gradHeader->numSamples = sampleCount;
    gradHeader->numSamplesWithLabel = sampleCount;
    gradHeader->criterion = 0.0; // (not used here)
    for (size_t i = 0; i < c_evalNodes; i++)
        // Not used here, but at least one is required by aggregation.
        gradHeader->evalErrors[i] = std::make_pair<double, size_t>(0.0, 0);