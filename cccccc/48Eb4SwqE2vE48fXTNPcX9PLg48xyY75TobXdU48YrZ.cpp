
        
        PyDescriptorDatabase::PyDescriptorDatabase(PyObject* py_database)
    : py_database_(py_database) {
  Py_INCREF(py_database_);
}
    
    
    {}  // namespace google

    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    static void THDTensor_(_set)(THDTensor *self, THDStorage *storage,
                             ptrdiff_t storageOffset, int nDimension,
                             int64_t *size, int64_t *stride) {
  /* storage */
  if (self->storage != storage) {
    if (self->storage)
      THDStorage_(free)(self->storage);
    }
    }
    
    PyObject * THPUtils_dispatchStateless(
    PyObject *tensor, const char *name, PyObject *args, PyObject *kwargs)
{
  THPObjectPtr methods(PyObject_GetAttrString(tensor, THP_STATELESS_ATTRIBUTE_NAME));
  if (!methods) {
    return PyErr_Format(
        PyExc_TypeError,
        'Type %s doesn't implement stateless methods',
        classOrTypename(tensor));
  }
  THPObjectPtr method(PyObject_GetAttrString(methods, name));
  if (!method) {
    return PyErr_Format(
        PyExc_TypeError,
        'Type %s doesn't implement stateless method %s',
        classOrTypename(tensor),
        name);
  }
  return PyObject_Call(method.get(), args, kwargs);
}
    
    template <typename T, class Context>
class HeatmapMaxKeypointOp final : public Operator<Context> {
 public:
  HeatmapMaxKeypointOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws),
        should_output_softmax_(OperatorBase::GetSingleArgument<bool>(
            'should_output_softmax',
            false)) {}
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    Tensor& mm_out(Tensor& result, const Tensor& self, const Tensor& mat2) {
  if (self.is_sparse()) {
    return mat2.type().addmm_out(result, at::zeros({}, mat2.type()), self, mat2, 0, 1);
  }
  return self.type()._mm_out(result, self, mat2);
}
    
    
    {
    {}} // namespace rpc, thd

    
        {Functions::storageNew, storageNew},
    {Functions::storageNewWithSize, storageNewWithSize},
    {Functions::storageNewWithSize1, storageNewWithSize1},
    {Functions::storageNewWithSize2, storageNewWithSize2},
    {Functions::storageNewWithSize3, storageNewWithSize3},
    {Functions::storageNewWithSize4, storageNewWithSize4},
    {Functions::storageFree, storageFree},
    {Functions::storageResize, storageResize},
    {Functions::storageFill, storageFill},
    
    #include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include <BulletCollision/CollisionDispatch/btGhostObject.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkPairDetector.h>
#include <BulletCollision/NarrowPhaseCollision/btPointCollector.h>
#include <BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.h>
#include <BulletSoftBody/btSoftRigidDynamicsWorld.h>
#include <btBulletDynamicsCommon.h>
    
    	_FORCE_INLINE_ real_t computed_bounce() const {
		return absorbent ? -bounce : bounce;
	}
    
    	if (mode == PhysicsServer::BODY_MODE_STATIC)
		return;
    
    public:
	struct RayResult {
    }
    
    		// atomic types
		case Variant::NIL: {
			EditorPropertyNil *editor = memnew(EditorPropertyNil);
			add_property_editor(p_path, editor);
		} break;
		case Variant::BOOL: {
			EditorPropertyCheck *editor = memnew(EditorPropertyCheck);
			add_property_editor(p_path, editor);
		} break;
		case Variant::INT: {
    }
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    int gettime(clockid_t, struct timespec*);
int64_t gettime_ns(clockid_t);
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
      /**
   * This method may return ContinueAutoloading, StopAutoloading, or
   * RetryAutoloading.
   */
  Result invokeFailureCallback(const_variant_ref func, const String& kind,
                               const String& name, const Variant& err);
    
    String getWrapperProtocol(const char* url, int* pathIndex = nullptr);
Wrapper* getWrapper(const String& scheme, bool warn = true);
Wrapper* getWrapperFromURI(const String& uri,
                           int* pathIndex = nullptr, bool warn = true);
    
    bool EncodeScan(const JPEGData& jpg,
                const std::vector<HuffmanCodeTable>& dc_huff_table,
                const std::vector<HuffmanCodeTable>& ac_huff_table,
                JPEGOutput out) {
  coeff_t last_dc_coeff[kMaxComponents] = { 0 };
  BitWriter bw(1 << 17);
  for (int mcu_y = 0; mcu_y < jpg.MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < jpg.MCU_cols; ++mcu_x) {
      // Encode one MCU
      for (size_t i = 0; i < jpg.components.size(); ++i) {
        const JPEGComponent& c = jpg.components[i];
        int nblocks_y = c.v_samp_factor;
        int nblocks_x = c.h_samp_factor;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c.width_in_blocks + block_x;
            const coeff_t* coeffs = &c.coeffs[block_idx << 6];
            EncodeDCTBlockSequential(coeffs, dc_huff_table[i], ac_huff_table[i],
                                     &last_dc_coeff[i], &bw);
          }
        }
      }
      if (bw.pos > (1 << 16)) {
        if (!JPEGWrite(out, bw.data.get(), bw.pos)) {
          return false;
        }
        bw.pos = 0;
      }
    }
  }
  bw.JumpToByteBoundary();
  return !bw.overflow && JPEGWrite(out, bw.data.get(), bw.pos);
}
    
    
    {  // Do the actual downsampling (averaging) and forward-DCT.
  if (cfg.u_factor_x != 1 || cfg.u_factor_y != 1) {
    SetDownsampledCoefficients(yuv[1], cfg.u_factor_x, cfg.u_factor_y,
                               &components_[1]);
  }
  if (cfg.v_factor_x != 1 || cfg.v_factor_y != 1) {
    SetDownsampledCoefficients(yuv[2], cfg.v_factor_x, cfg.v_factor_y,
                               &components_[2]);
  }
}
    
    void ComputeBlockDCTDouble(double block[64]) {
  TransformBlock(block, DCT1d);
}
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    namespace guetzli {
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    #include 'guetzli/jpeg_data.h'
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num, int* histo_indexes,
                         uint8_t* depths);
    
    // Utility function for building a Huffman lookup table for the jpeg decoder.
    
    constexpr int kLowestQuality = 70;
constexpr int kHighestQuality = 110;
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
    Finally, you can end the calculation anytime, by using XXH32_digest().
This function returns the final 32-bits hash.
You must provide the same 'void* state' parameter created by XXH32_init().
Memory will be freed by XXH32_digest().
*/
    
      // when we know more data has been written to the file. we can use this
  // function to force the reader to look again in the file.
  // Also aligns the file position indicator to the start of the next block
  // by reading the rest of the data from the EOF position to the end of the
  // block that was partially read.
  void UnmarkEOF();
    
    #include 'rocksdb/compaction_filter.h'
#include 'rocksjni/jnicallback.h'
    
    
    {class DirectComparatorJniCallback : public BaseComparatorJniCallback {
 public:
      DirectComparatorJniCallback(
        JNIEnv* env, jobject jComparator,
        const ComparatorJniCallbackOptions* copt);
      ~DirectComparatorJniCallback();
};
}  // namespace rocksdb
    
    bool SyncPoint::Data::PredecessorsAllCleared(const std::string& point) {
  for (const auto& pred : predecessors_[point]) {
    if (cleared_points_.count(pred) == 0) {
      return false;
    }
  }
  return true;
}
    
    
    {
    {  void ClearCallBack(const std::string& point);
  void ClearAllCallBacks();
  void EnableProcessing() {
    enabled_ = true;
  }
  void DisableProcessing() {
    enabled_ = false;
  }
  void ClearTrace() {
    std::lock_guard<std::mutex> lock(mutex_);
    cleared_points_.clear();
  }
  bool DisabledByMarker(const std::string& point,
                        std::thread::id thread_id) {
    auto marked_point_iter = marked_thread_id_.find(point);
    return marked_point_iter != marked_thread_id_.end() &&
           thread_id != marked_point_iter->second;
  }
  void Process(const std::string& point, void* cb_arg);
};
}
#endif // NDEBUG

    
    TEST_F(OrderingTest, to_ordering) {
  EXPECT_EQ(ordering::lt, to_ordering(int(ordering::lt)));
  EXPECT_EQ(ordering::eq, to_ordering(int(ordering::eq)));
  EXPECT_EQ(ordering::gt, to_ordering(int(ordering::gt)));
    }
    
    template <class T, QueueBehaviorIfFull kBehavior = QueueBehaviorIfFull::THROW>
class LifoSemMPMCQueue : public BlockingQueue<T> {
 public:
  // Note: The queue pre-allocates all memory for max_capacity
  explicit LifoSemMPMCQueue(size_t max_capacity) : queue_(max_capacity) {}
    }
    
      bool nonBlockingTake(T& item) {
    for (auto it = queues_.rbegin(); it != queues_.rend(); it++) {
      if (it->readIfNotEmpty(item)) {
        return true;
      }
    }
    return false;
  }
    
    #else // !defined(_LIBSTDCXX_FBSTRING)
    
      if (prevValue + 1 == size_) {
    // Need to reset the barrier before fulfilling any futures. This is
    // when the epoch is flipped to the next.
    controlBlock_.store(allocateControlBlock(), std::memory_order_release);
    }
    
      ThreadLocal<CachelinePadded<
      Indestructible<std::pair<size_t, std::shared_ptr<Contents>>>>>
      localValue_;
    
    AbstractAuthResolver::~AbstractAuthResolver() = default;
    
    class PieceStorage;
class Peer;
class BtMessageDispatcher;
class BtMessageFactory;
class BtRequestFactory;
class PeerConnection;
class BtMessageValidator;
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    void AbstractOptionHandler::setChangeGlobalOption(bool f)
{
  updateFlags(FLAG_CHANGE_GLOBAL_OPTION, f);
}
    
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
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    size_t AnnounceList::countCompletedAllowedTier() const
{
  return count_if(std::begin(tiers_), std::end(tiers_),
                  FindCompletedAllowedTier());
}
    
    namespace aria2 {
    }