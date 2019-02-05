
        
        
    {}  // namespace grpc

    
      CensusClientCallData()
      : recv_trailing_metadata_(nullptr),
        initial_on_done_recv_trailing_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        elapsed_time_(0),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&stats_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&tracing_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_trailing_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    
    {    buf[kVersionIdOffset] = kVersionId;
    buf[kServerElapsedTimeOffset] = kServerElapsedTimeField;
    absl::little_endian::Store64(&buf[kServerElapsedTimeOffset + kFieldIdSize],
                                 time);
    return kRpcServerStatsSize;
  }
    
      static void OnDoneRecvInitialMetadataCb(void* user_data, grpc_error* error);
    
    void DynamicThreadPool::ThreadFunc() {
  for (;;) {
    // Wait until work is available or we are shutting down.
    std::unique_lock<std::mutex> lock(mu_);
    if (!shutdown_ && callbacks_.empty()) {
      // If there are too many threads waiting, then quit this thread
      if (threads_waiting_ >= reserve_threads_) {
        break;
      }
      threads_waiting_++;
      cv_.wait(lock);
      threads_waiting_--;
    }
    // Drain callbacks before considering shutdown to ensure all work
    // gets completed.
    if (!callbacks_.empty()) {
      auto cb = callbacks_.front();
      callbacks_.pop();
      lock.unlock();
      cb();
    } else if (shutdown_) {
      break;
    }
  }
}
    
    	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmapImages,
		int *a_piEncodingTime_ms, 
		bool a_bVerboseOutput)
	{
		auto mipWidth = a_uiSourceWidth;
		auto mipHeight = a_uiSourceHeight;
		int totalEncodingTime = 0;
		for(unsigned int mip = 0; mip < a_uiMaxMipmaps && mipWidth >= 1 && mipHeight >= 1; mip++)
		{
			float* pImageData = nullptr;
			float* pMipImage = nullptr;
    }
    }
    
    		inline float * GetDecodedAlphas(void)
		{
			return m_pencoding->GetDecodedAlphas();
		}
    
    	// ----------------------------------------------------------------------------------------------------
	// calculate the error for the block by summing the pixel errors
	//
	void Block4x4Encoding::CalcBlockError(void)
	{
		m_fError = 0.0f;
    }
    
    		case 1:
			TryDifferential(m_boolMostLikelyFlip, 1, 0, 0);
			break;
    
    class Clipper : public virtual ClipperBase
{
public:
  Clipper(int initOptions = 0);
  bool Execute(ClipType clipType,
      Paths &solution,
      PolyFillType fillType = pftEvenOdd);
  bool Execute(ClipType clipType,
      Paths &solution,
      PolyFillType subjFillType,
      PolyFillType clipFillType);
  bool Execute(ClipType clipType,
      PolyTree &polytree,
      PolyFillType fillType = pftEvenOdd);
  bool Execute(ClipType clipType,
      PolyTree &polytree,
      PolyFillType subjFillType,
      PolyFillType clipFillType);
  bool ReverseSolution() { return m_ReverseOutput; };
  void ReverseSolution(bool value) {m_ReverseOutput = value;};
  bool StrictlySimple() {return m_StrictSimple;};
  void StrictlySimple(bool value) {m_StrictSimple = value;};
  //set the callback function for z value filling on intersections (otherwise Z is 0)
#ifdef use_xyz
  void ZFillFunction(ZFillCallback zFillFunc);
#endif
protected:
  virtual bool ExecuteInternal();
private:
  JoinList         m_Joins;
  JoinList         m_GhostJoins;
  IntersectList    m_IntersectList;
  ClipType         m_ClipType;
  typedef std::list<cInt> MaximaList;
  MaximaList       m_Maxima;
  TEdge           *m_SortedEdges;
  bool             m_ExecuteLocked;
  PolyFillType     m_ClipFillType;
  PolyFillType     m_SubjFillType;
  bool             m_ReverseOutput;
  bool             m_UsingPolyTree; 
  bool             m_StrictSimple;
#ifdef use_xyz
  ZFillCallback   m_ZFill; //custom callback 
#endif
  void SetWindingCount(TEdge& edge);
  bool IsEvenOddFillType(const TEdge& edge) const;
  bool IsEvenOddAltFillType(const TEdge& edge) const;
  void InsertLocalMinimaIntoAEL(const cInt botY);
  void InsertEdgeIntoAEL(TEdge *edge, TEdge* startEdge);
  void AddEdgeToSEL(TEdge *edge);
  bool PopEdgeFromSEL(TEdge *&edge);
  void CopyAELToSEL();
  void DeleteFromSEL(TEdge *e);
  void SwapPositionsInSEL(TEdge *edge1, TEdge *edge2);
  bool IsContributing(const TEdge& edge) const;
  bool IsTopHorz(const cInt XPos);
  void DoMaxima(TEdge *e);
  void ProcessHorizontals();
  void ProcessHorizontal(TEdge *horzEdge);
  void AddLocalMaxPoly(TEdge *e1, TEdge *e2, const IntPoint &pt);
  OutPt* AddLocalMinPoly(TEdge *e1, TEdge *e2, const IntPoint &pt);
  OutRec* GetOutRec(int idx);
  void AppendPolygon(TEdge *e1, TEdge *e2);
  void IntersectEdges(TEdge *e1, TEdge *e2, IntPoint &pt);
  OutPt* AddOutPt(TEdge *e, const IntPoint &pt);
  OutPt* GetLastOutPt(TEdge *e);
  bool ProcessIntersections(const cInt topY);
  void BuildIntersectList(const cInt topY);
  void ProcessIntersectList();
  void ProcessEdgesAtTopOfScanbeam(const cInt topY);
  void BuildResult(Paths& polys);
  void BuildResult2(PolyTree& polytree);
  void SetHoleState(TEdge *e, OutRec *outrec);
  void DisposeIntersectNodes();
  bool FixupIntersectionOrder();
  void FixupOutPolygon(OutRec &outrec);
  void FixupOutPolyline(OutRec &outrec);
  bool IsHole(TEdge *e);
  bool FindOwnerFromSplitRecs(OutRec &outRec, OutRec *&currOrfl);
  void FixHoleLinkage(OutRec &outrec);
  void AddJoin(OutPt *op1, OutPt *op2, const IntPoint offPt);
  void ClearJoins();
  void ClearGhostJoins();
  void AddGhostJoin(OutPt *op, const IntPoint offPt);
  bool JoinPoints(Join *j, OutRec* outRec1, OutRec* outRec2);
  void JoinCommonEdges();
  void DoSimplePolygons();
  void FixupFirstLefts1(OutRec* OldOutRec, OutRec* NewOutRec);
  void FixupFirstLefts2(OutRec* InnerOutRec, OutRec* OuterOutRec);
  void FixupFirstLefts3(OutRec* OldOutRec, OutRec* NewOutRec);
#ifdef use_xyz
  void SetZ(IntPoint& pt, TEdge& e1, TEdge& e2);
#endif
};
//------------------------------------------------------------------------------
    
    /** 16x32 multiply, followed by a 16-bit shift right and 32-bit add.
    Result fits in 32 bits. */
#undef MAC16_32_Q16
static OPUS_INLINE opus_val32 MAC16_32_Q16_armv5e(opus_val32 c, opus_val16 a,
 opus_val32 b)
{
  int res;
  __asm__(
      '#MAC16_32_Q16\n\t'
      'smlawb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(b), 'r'(a), 'r'(c)
  );
  return res;
}
#define MAC16_32_Q16(c, a, b) (MAC16_32_Q16_armv5e(c, a, b))
    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
    
    {  std::string tmp1, tmp2;
  ASSERT_OK(db_->Put(WriteOptions(), Key(1000, &tmp1), Value(1000, &tmp2)));
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
  dbi->TEST_CompactMemTable();
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
}
    
      void MaybeScheduleCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  static void BGWork(void* db);
  void BackgroundCall();
  void BackgroundCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  void CleanupCompaction(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  Status DoCompactionWork(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
      fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    MemTable::MemTable(const InternalKeyComparator& cmp)
    : comparator_(cmp),
      refs_(0),
      table_(comparator_, &arena_) {
}
    
      SequenceNumber sequence_number() const { return sequence_number_; }
    
    
    {
    {} // namespace ev2
} // namespace osquery

    
    /**
 * @brief Interface between a ev2::Publisher and a subscriber
 *
 * @details A ev2::Subscription is the interface between a ev2::Publisher and a
 * subscriber interested in consuming events. It allows the subscriber to
 * register with the ev2::Publisher and define the subscription parameters
 * (e.g. the type of events it is interested on, advanced filters, etc) and
 * mediates the transfer of events from the ev2::Publisher to the subscriber
 * while allowing to decouple the two instances which only need to share a
 * pointer to the ev2::Subscription usually using an ev2::EventManager.
 *
 * The ev2::Subscription is meant to be specialized by each ev2::Publisher to
 * suit its needs, and therefore the basic interface is intentionally simple
 * providing only a basic mechanism for determining the publisher the
 * subscriber is interested on (which will be used by the ev2::EventManager to
 * route request to registered ev2::Publisher instances) and a mechanism to
 * query about the availability of new events. It says nothing about the way
 * events are passed around, buffered or otherwise managed and is up to the
 * ev2::Publisher to define those interfaces. Some basic interfaces accepting
 * parameterized event types are provided like the ev2::BufferedSubscription
 * which can be further specialized by the ev2::Publisher.
 */
class Subscription {
 public:
  /**
   * @brief Subscription constructor.
   *
   * @param subscriber Subscriber name used for logging.
   *
   * @param pub_type Type of publisher to register with, used by an
   * ev2::EventManager to route ev2::EventManager::bind() calls.
   */
  explicit Subscription(std::string subscriber, std::type_index pub_type);
  virtual ~Subscription() = default;
    }
    
    /// Inverse of serializeQueryDataJSON, convert a JSON string to QueryData.
Status deserializeQueryDataJSON(const std::string& json, QueryData& qd);
    
    Status deserializeRowJSON(const std::string& json, RowTyped& r) {
  auto doc = JSON::newObject();
  if (!doc.fromString(json) || !doc.doc().IsObject()) {
    return Status(1, 'Cannot deserializing JSON');
  }
  return deserializeRow(doc.doc(), r);
}
    
    int32_t ExtensionConcurrentClient::send_call(const std::string& registry, const std::string& item, const ExtensionPluginRequest& request)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin('call', ::apache::thrift::protocol::T_CALL, cseqid);
    }
    
    
uint32_t ExtensionManager_registerExtension_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin('ExtensionManager_registerExtension_pargs');
    }