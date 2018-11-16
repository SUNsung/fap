
        
          // Returns the number of TestPartResult objects in the array.
  int size() const;
    
      void depart() {
    if (link_.depart()) delete value_;
  }
    
    
    {  T0 f0_;
  T1 f1_;
  T2 f2_;
};
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
    // QueueNode is a node in a Queue, which consists of an element of
// type E and a pointer to the next node.
template <typename E>  // E is the element type
class QueueNode {
  friend class Queue<E>;
    }
    
    namespace grpc {
    }
    
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
    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    grpc::string ProtoServerReflectionPlugin::name() {
  return 'proto_server_reflection';
}
    
      XGBOOST_DEVICE GradientPairInternal<T> operator-(
      const GradientPairInternal<T> &rhs) const {
    GradientPairInternal<T> g;
    g.grad_ = grad_ - rhs.grad_;
    g.hess_ = hess_ - rhs.hess_;
    return g;
  }
    
      /**
   * \fn  virtual void Predictor::PredictInstance( const SparsePage::Inst&
   * inst, std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model,
   * unsigned ntree_limit = 0, unsigned root_index = 0) = 0;
   *
   * \brief online prediction function, predict score for one instance at a time
   * NOTE: use the batch prediction interface if possible, batch prediction is
   * usually more efficient than online prediction This function is NOT
   * threadsafe, make sure you only call from one thread.
   *
   * \param           inst        The instance to predict.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from
   * \param           ntree_limit (Optional) The ntree limit.
   * \param           root_index  (Optional) Zero-based index of the root.
   */
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    void Speed::stop()
{
    if (_innerAction)
        _innerAction->stop();
    
    Action::stop();
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    
    {    delete action;
    return nullptr;
}
    
    
    {    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
    /** @class Hide
* @brief Hide the node.
*/
class CC_DLL Hide : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return An autoreleased Hide object.
     */
    static Hide * create();
    }
    
    
    /** Returns the numbers of actions that are running in a
     *  certain target with a specific tag.
     * Like getNumberOfRunningActionsInTarget Composable actions
     * are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @param tag       Tag that will be searched.
     * @return  The numbers of actions that are running in a certain target
     *          with a specific tag.
     * @see getNumberOfRunningActionsInTarget
     * @js NA
     */
    virtual size_t getNumberOfRunningActionsInTargetByTag(const Node *target, int tag);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
        //
    // Overrides
    //
    virtual ProgressTo* clone() const override;
    virtual ProgressTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressTo() {}
    virtual ~ProgressTo() {}
    
    void Animation::addSpriteFrameWithTexture(Texture2D *pobTexture, const Rect& rect)
{
    SpriteFrame *frame = SpriteFrame::createWithTexture(pobTexture, rect);
    addSpriteFrame(frame);
}
    
    
    {            array.pushBack(animFrame);
        }
    
    void AtlasNode::calculateMaxItems()
{
    Size s = _textureAtlas->getTexture()->getContentSize();
    
    if (_ignoreContentScaleFactor)
    {
        s = _textureAtlas->getTexture()->getContentSizeInPixels();
    }
    
    _itemsPerColumn = (int)(s.height / _itemHeight);
    _itemsPerRow = (int)(s.width / _itemWidth);
}
    
    protected:
    void calculateMaxItems();
    void updateBlendFunc();
    void updateOpacityModifyRGB();
    
        int getIndexFromPos(unsigned int x, unsigned int y) { return y*_width+x; }
    cocos2d::Vec2 getPosFromIndex(unsigned int i) { return cocos2d::Vec2(static_cast<float>(i%_width), static_cast<float>(i/_width)); }
    
      std::shared_ptr<DHTNode> newNode_;
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    void DHTRoutingTable::getClosestKNodes(
    std::vector<std::shared_ptr<DHTNode>>& nodes,
    const unsigned char* key) const
{
  dht::findClosestKNodes(nodes, root_.get(), key);
}
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    #include <vector>
#include <memory>
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    bool IsZero(double n);
    
    // The CHECK macro returns a std::ostream object that can have extra information
// written to it.
#ifndef NDEBUG
#define CHECK(b)                                                             \
  (b ? ::benchmark::internal::GetNullLogInstance()                           \
     : ::benchmark::internal::CheckHandler(#b, __FILE__, __func__, __LINE__) \
           .GetLog())
#else
#define CHECK(b) ::benchmark::internal::GetNullLogInstance()
#endif
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>
    
    template <typename ValueType>
class ForEach {
 public:
  template <typename InputIterator>
  ForEach(InputIterator begin, InputIterator end)
      : func_([begin, end](FunctionRef<void(ValueType)> f) {
          for (auto it = begin; it != end; ++it) {
            f(*it);
          }
        }) {}
    }
    
        ~KeepAlive() {
      reset();
    }
    
    #include <string>
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}