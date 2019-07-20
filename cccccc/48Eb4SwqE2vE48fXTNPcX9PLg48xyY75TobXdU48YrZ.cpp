
        
        void FallBackCompute(FCompute fn, const nnvm::NodeAttrs &attrs,
                     const OpContext &ctx,
                     const std::vector<NDArray> &inputs,
                     const std::vector<OpReqType> &req,
                     const std::vector<NDArray> &outputs) {
  std::vector<TBlob> in_blobs(inputs.size());
  std::vector<NDArray> in_bufs;
  for (size_t i = 0; i < in_blobs.size(); i++) {
    // If the input data isn't stored in the default format, we shouldn't
    // call data() directly, which will change the layout of the NDArray.
    // Instead, we should save the converted data in another NDArray.
    // TODO(zhengda) we should use temp space to save the converted data.
    if (inputs[i].IsDefaultData()) {
      in_blobs[i] = inputs[i].data();
    } else {
      if (in_bufs.empty())
        in_bufs.reserve(inputs.size());
      in_bufs.push_back(inputs[i].Reorder2Default());
      in_blobs[i] = in_bufs.back().data();
    }
  }
  MKLDNNStream::Get()->Submit();
    }
    
    namespace mxnet {
namespace op {
    }
    }
    
    /*!
 *  Copyright (c) 2019 by Contributors
 * \file all_finite.cc 
 * \brief operator for checking if a group of array is all finite
 * \author Clement Fuji Tsang
 */
#include './all_finite-inl.h'
#include <cmath>
    
    /*!
 *  Copyright (c) 2019 by Contributors
 * \file amp_graph_pass.cc
 * \brief graph pass regarding AMP
 * \author Clement Fuji Tsang
 */
#include <nnvm/graph.h>
#include <nnvm/pass.h>
#include <mxnet/op_attr_types.h>
    
          // [start, end) interval for spatial sampling
      const DType* offset_bottom_rois = bottom_rois + n * 5;
      index_t roi_batch_ind = offset_bottom_rois[0];
      DType roi_start_w = static_cast<DType>(round(offset_bottom_rois[1])) * spatial_scale - 0.5;
      DType roi_start_h = static_cast<DType>(round(offset_bottom_rois[2])) * spatial_scale - 0.5;
      DType roi_end_w = static_cast<DType>(round(offset_bottom_rois[3]) + 1.) * spatial_scale - 0.5;
      DType roi_end_h = static_cast<DType>(round(offset_bottom_rois[4]) + 1.) * spatial_scale - 0.5;
    
      if ((*out_attrs)[0].ndim() > 0) {
    dshape[0] = ((*out_attrs)[0])[0];
    SHAPE_ASSIGN_CHECK(*in_attrs, 0, dshape);
  }
    
    template<int req>
struct IndexArrayKernel {
  MSHADOW_XINLINE static void Map(int i,
                                  int64_t* out_data,
                                  const int n,
                                  const int64_t* workspace) {
    for (ptrdiff_t j = 0; j < n; j++) {
      int64_t upper = workspace[ptrdiff_t(2) * j];
      int64_t lower = workspace[ptrdiff_t(2) * j + ptrdiff_t(1)];
      KERNEL_ASSIGN(out_data[ptrdiff_t(i) * ptrdiff_t(n) + j], req, (i % upper) / lower);
    }
  }
};
    
        std::vector<int64_t> index_products = IndexArrayComputeIndexProducts(inshape);
    
    BSONObj getErrorLabels(const OperationSessionInfoFromClient& sessionOptions,
                       const std::string& commandName,
                       ErrorCodes::Error code,
                       bool hasWriteConcernError) {
    BSONArrayBuilder labelArray;
    }
    
    namespace mongo {
    }
    
        StageType stageType() const final {
        return STAGE_COUNT;
    }
    
    TEST(MatchExpressionParserTest, GeoNearFailsToParseWhenDisallowed) {
    auto query = fromjson('{a: {$geoNear: {$geometry: {type: 'Point', coordinates: [0, 0]}}}}');
    boost::intrusive_ptr<ExpressionContextForTest> expCtx(new ExpressionContextForTest());
    ASSERT_NOT_OK(MatchExpressionParser::parse(query, expCtx).getStatus());
}
    
        if (auto comment = cmd.getComment()) {
        aggregationBuilder.append(kCommentField, comment.get());
    }
    
            for (const auto& response : shardResponses) {
            auto status = response.swResponse.getStatus();
            if (status.isOK()) {
                status = getStatusFromCommandResult(response.swResponse.getValue().data);
                if (status.isOK()) {
                    long long shardCount = response.swResponse.getValue().data['n'].numberLong();
                    shardSubTotal.appendNumber(response.shardId.toString(), shardCount);
                    total += shardCount;
                    continue;
                }
            }
    }
    
    void Top::append(BSONObjBuilder& b) {
    stdx::lock_guard<SimpleMutex> lk(_lock);
    _appendToUsageMap(b, _usage);
}
    
    class CallbackManager
{
public:
    inline void append(swCallback cb, void *private_data)
    {
        list_.push_back(new Callback(cb, private_data));
    }
    inline void prepend(swCallback cb, void *private_data)
    {
        list_.push_front(new Callback(cb, private_data));
    }
    inline void execute()
    {
        while (!list_.empty())
        {
            Callback *task = list_.front();
            list_.pop_front();
            task->callback(task->private_data);
            delete task;
        }
    }
protected:
    std::list<Callback *> list_;
};
    
    uchar swoole_timer_exists(long timer_id)
{
    if (!SwooleG.timer.initialized)
    {
        swWarn('no timer');
        return false;
    }
    auto tnode = swTimer_get(&SwooleG.timer, timer_id);
    return (tnode && !tnode->removed);
}
    
    class coro_test
{
public:
    coro_test(coroutine_func_t _fn, void *_arg, int *_complete_num) : fn(_fn), arg(_arg), complete_num(_complete_num)
    {
    }
    }
    
    
    {            ASSERT_EQ(addr1, addr3);
            ASSERT_EQ(addr2, addr4);
        }
    
    bool Channel::push(void *data, double timeout)
{
    Coroutine *current_co = Coroutine::get_current_safe();
    if (closed)
    {
        return false;
    }
    if (is_full() || !producer_queue.empty())
    {
        timer_msg_t msg;
        msg.error = false;
        msg.timer = NULL;
        if (timeout > 0)
        {
            long msec = (long) (timeout * 1000);
            msg.chan = this;
            msg.type = PRODUCER;
            msg.co = current_co;
            msg.timer = swTimer_add(&SwooleG.timer, msec, 0, &msg, timer_callback);
        }
    }
    }
    
    struct DataBuffer
{
    size_t length;
    void *buffer;
    }
    
        for (i = 0; i < MAP_SIZE; i++)
    {
        pkt = (swFdInfo *) malloc(sizeof(swFdInfo));
        pkt->key = i;
        pkt->fd = i * 37;
        swHashMap_add_int(ht, pkt->fd, pkt);
        lists[i] = pkt;
    }
    
    
#ifndef callback_h
#define callback_h
#include 'mars/comm/thread/thread.h'
#include 'message_queue.h'
#include 'mars/comm/xlogger/xlogger.h'
#include 'boost/bind.hpp'
    
    class ShortLinkInterface {
  public:
	virtual ~ShortLinkInterface(){};
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'mars/comm/thread/mutex.h'
#include 'mars/comm/singleton.h'
    
    const void* AutoBuffer::PosPtr() const {
    return ((unsigned char*)Ptr()) + Pos();
}
    
        void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
    }