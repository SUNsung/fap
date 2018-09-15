
        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
    uint64_t swift::unicode::getUTF16Length(StringRef Str) {
  uint64_t Length;
  // Transcode the string to UTF-16 to get its length.
  SmallVector<llvm::UTF16, 128> buffer(Str.size() + 1); // +1 for ending nulls.
  const llvm::UTF8 *fromPtr = (const llvm::UTF8 *) Str.data();
  llvm::UTF16 *toPtr = &buffer[0];
  llvm::ConversionResult Result =
    ConvertUTF8toUTF16(&fromPtr, fromPtr + Str.size(),
                       &toPtr, toPtr + Str.size(),
                       llvm::strictConversion);
  assert(Result == llvm::conversionOK &&
         'UTF-8 encoded string cannot be converted into UTF-16 encoding');
  (void)Result;
    }
    
      // FIXME: Map over source ranges in the diagnostic.
  auto emitDiag = [&ctx, this](clang::FullSourceLoc clangNoteLoc,
                      clang::DiagnosticsEngine::Level clangDiagLevel,
                      StringRef message) {
    decltype(diag::error_from_clang) diagKind;
    switch (clangDiagLevel) {
    case clang::DiagnosticsEngine::Ignored:
      return;
    case clang::DiagnosticsEngine::Note:
      diagKind = diag::note_from_clang;
      break;
    case clang::DiagnosticsEngine::Remark:
      // FIXME: We don't handle remarks yet.
      return;
    case clang::DiagnosticsEngine::Warning:
      diagKind = diag::warning_from_clang;
      break;
    case clang::DiagnosticsEngine::Error:
    case clang::DiagnosticsEngine::Fatal:
      // FIXME: What happens after a fatal error in the importer?
      diagKind = diag::error_from_clang;
      break;
    }
    }
    
        static AGInfo& Get(const nnvm::NodePtr& node) {
      return dmlc::get<AGInfo>(node->info);
    }
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
    /*!
 * \brief Unary function that takes a src and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param src The source data.
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryFunction)(const TBlob& src,
                              const EnvArguments& env,
                              TBlob* ret,
                              OpReqType req,
                              RunContext ctx);
/*!
 * \brief Shape inference function to get the correct shape given source.
 * \param src The source shape
 * \param env The Environment arguments.
 * \return The inferred result shape.
 */
typedef TShape (*UnaryShapeFunction)(const TShape& src,
                                     const EnvArguments& env);
    
    #include <vector>
#include <string>
#include <memory>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include './ndarray.h'
    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    
    {  /*! \brief MNISTCass iter params */
  CaffeDataParam param_;
  /*! \brief Shape scalar values */
  index_t batch_size_, channels_, width_, height_;
  /*! \brief Caffe data layer */
  boost::shared_ptr<caffe::Layer<Dtype> >  caffe_data_layer_;
  /*! \brief batch data blob */
  mxnet::TBlob batch_data_;
  /*! \brief batch label blob */
  mxnet::TBlob batch_label_;
  /*! \brief Output blob data for this iteration */
  TBlobBatch out_;
  /*! \brief Bottom and top connection-point blob data */
  std::vector<::caffe::Blob<Dtype>*> bottom_, top_;
  /*! \brief Cleanup these blobs on exit */
  std::list<std::unique_ptr<::caffe::Blob<Dtype>>> cleanup_blobs_;
  /*! \brief type flag of the tensor blob */
  const int type_flag_;
  /*! \brief Blobs done so far */
  std::atomic<size_t>  loc_;
};  // class CaffeDataIter
    
      /**
   * /brief Customize set method for LayerParameter
   * /tparam value string of caffe's layer configuration
   * */
  virtual void Set(void *head, const std::string &value) const {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    Graph DetectInplaceAddTo(Graph g) {
  nnvm::StorageVector storage_id =
      g.MoveCopyAttr<nnvm::StorageVector>('storage_id');
  std::vector<int> storage_inplace_index =
      g.MoveCopyAttr<std::vector<int> >('storage_inplace_index');
  static const Op* ewise_plus_op = Op::Get('_grad_add');
  auto& idx = g.indexed_graph();
  // reference cont.
  std::vector<int> ref_count(idx.num_node_entries(), 0);
  std::vector<int> addto_entry(idx.num_node_entries(), 0);
  std::vector<int> skip_plus_node(idx.num_nodes(), 0);
    }
    
    
    {/**
 * @brief Compute a hash digest from the contents of a buffer.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param buffer A caller-controlled buffer (already allocated).
 * @param size The length of buffer in bytes.
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromBuffer(HashType hash_type, const void* buffer, size_t size);
} // namespace osquery

    
    #include <osquery/query.h>
    
      Row r3;
  std::string msg2 = '0A001F9100000000FE80000000000000022522FFFEB03684000000';
  parseSockAddr(msg2, r3, unix_socket);
  ASSERT_FALSE(r3['remote_address'].empty());
  EXPECT_EQ(r3['remote_address'], 'fe80:0000:0000:0000:0225:22ff:feb0:3684');
  EXPECT_EQ(r3['remote_port'], '8081');
    
        /** Replace the interior action.
     *
     * @param action The new action, it will replace the running action.
     */
    void setInnerAction(ActionInterval *action);
    /** Return the interior action.
     *
     * @return The interior action.
     */
    ActionInterval* getInnerAction() const { return _innerAction; }
    
        float x = _eye.x - _center.x;
    float y = _eye.y - _center.y;
    float z = _eye.z - _center.z;
    
        //
    // convert 'absolutes' to 'diffs'
    //
    Vec2 p = copyConfig->getControlPointAtIndex(0);
    for (ssize_t i = 1; i < copyConfig->count(); ++i)
    {
        Vec2 current = copyConfig->getControlPointAtIndex(i);
        Vec2 diff = current - p;
        copyConfig->replaceControlPoint(diff, i);
        
        p = current;
    }
    
    /** An Array that contain control points.
 * Used by CardinalSplineTo and (By) and CatmullRomTo (and By) actions.
 * @ingroup Actions
 * @js NA
 */
class CC_DLL PointArray : public Ref, public Clonable
{
public:
    }
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
    StopGrid* StopGrid::reverse() const
{
    // no reverse, just clone it
    return this->clone();
}
    
    
    {    for (i = 0; i < (_gridSize.width+1); ++i)
    {
        for (j = 0; j < (_gridSize.height+1); ++j)
        {
            Vec3 v = getOriginalVertex(Vec2(i, j));
            Vec2 vect = _position - Vec2(v.x,v.y);
            float r = vect.getLength();
            
            if (r < _radius)
            {
                r = _radius - r;
                float rate = powf(r / _radius, 2);
                v.z += (sinf( time*(float)M_PI * _waves * 2 + r * 0.1f) * _amplitude * _amplitudeRate * rate);
            }
            
            setVertex(Vec2(i, j), v);
        }
    }
}
    
    ProgressFromTo* ProgressFromTo::create(float duration, float fromPercentage, float toPercentage)
{
    ProgressFromTo *progressFromTo = new (std::nothrow) ProgressFromTo();
    if (progressFromTo && progressFromTo->initWithDuration(duration, fromPercentage, toPercentage)) {
        progressFromTo->autorelease();
        return progressFromTo;
    }
    
    delete progressFromTo;
    return nullptr;
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /**
@brief JumpTiles3D action.
@details Move the tiles of a target node across the Z axis.
*/
class CC_DLL JumpTiles3D : public TiledGrid3DAction
{
public:
    /** 
     * @brief Create the action with the number of jumps, the sin amplitude, the grid size and the duration.
     * @param duration Specify the duration of the JumpTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param numberOfJumps Specify the jump tiles count.
     * @param amplitude Specify the amplitude of the JumpTiles3D action.
     * @return If the creation success, return a pointer of JumpTiles3D action; otherwise, return nil.
     */
    static JumpTiles3D* create(float duration, const Size& gridSize, unsigned int numberOfJumps, float amplitude);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
      void setCommonProperty(const std::shared_ptr<DHTAbstractTask>& task);
    
    bool DNSCache::CacheEntry::add(const std::string& addr)
{
  for (std::vector<AddrEntry>::const_iterator i = addrEntries_.begin(),
                                              eoi = addrEntries_.end();
       i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return false;
    }
  }
  addrEntries_.push_back(AddrEntry(addr));
  return true;
}
    
      typedef std::set<std::shared_ptr<CacheEntry>,
                   DerefLess<std::shared_ptr<CacheEntry>>>
      CacheEntrySet;
  CacheEntrySet entries_;
    
      void is_receiving(bool val) { is_receiving_ = val; }
    
      const int32_t ret = canRead(dev_handler_, recv_frames_, frame_num, nullptr);
  // rx timeout not log
  if (ret == NTCAN_RX_TIMEOUT) {
    return ErrorCode::OK;
  }
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'receive message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    TEST(CanReceiverTest, ReceiveOne) {
  can::FakeCanClient can_client;
  MessageManager<::apollo::canbus::ChassisDetail> pm;
  CanReceiver<::apollo::canbus::ChassisDetail> receiver;
    }
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    constexpr int32_t BYTE_LENGTH = sizeof(int8_t) * 8;
    
      /**
   * @brief Transform an integer with the size of 4 bytes to its hexadecimal
   *        represented by a string.
   * @param value The target integer to transform.
   * @return Hexadecimal representing the target integer.
   */
  static std::string byte_to_hex(const uint32_t value);
    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
