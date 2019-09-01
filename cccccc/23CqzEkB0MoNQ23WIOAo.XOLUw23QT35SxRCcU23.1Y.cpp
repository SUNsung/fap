
        
        // static
void CallbackHolderBase::SecondWeakCallback(
    const v8::WeakCallbackInfo<CallbackHolderBase>& data) {
  delete data.GetParameter();
}
    
    
    {}  // namespace
    
    bool ParseCommandLine(const COPYDATASTRUCT* cds,
                      base::CommandLine::StringVector* parsed_command_line,
                      base::FilePath* current_directory) {
  // We should have enough room for the shortest command (min_message_size)
  // and also be a multiple of wchar_t bytes. The shortest command
  // possible is L'START\0\0' (empty current directory and command line).
  static const int min_message_size = 7;
  if (cds->cbData < min_message_size * sizeof(wchar_t) ||
      cds->cbData % sizeof(wchar_t) != 0) {
    LOG(WARNING) << 'Invalid WM_COPYDATA, length = ' << cds->cbData;
    return false;
  }
    }
    
    void InspectableWebContentsImpl::LoadNetworkResource(
    const DispatchCallback& callback,
    const std::string& url,
    const std::string& headers,
    int stream_id) {
  GURL gurl(url);
  if (!gurl.is_valid()) {
    base::DictionaryValue response;
    response.SetInteger('statusCode', 404);
    callback.Run(&response);
    return;
  }
    }
    
    
    {  return args[0];
}
    
    
    {  ANNOTATE_SCOPED_MEMORY_LEAK;  // http://crbug.com/314087
  // TODO(erg): The mozilla implementation goes to a lot of callback trouble
  // just to make sure that they react to make sure there's some sort of
  // cancelable object; including making a whole callback just to handle the
  // cancelable.
  //
  // I don't see any reason why we should care if 'UnregisterWindow' completes
  // or not.
  g_dbus_proxy_call(registrar_proxy_, 'UnregisterWindow',
                    g_variant_new('(u)', xid), G_DBUS_CALL_FLAGS_NONE, -1,
                    nullptr, nullptr, nullptr);
}
    
    #ifndef SHELL_APP_UV_TASK_RUNNER_H_
#define SHELL_APP_UV_TASK_RUNNER_H_
    
    #ifndef SHELL_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_
#define SHELL_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_
    
    #endif  // SHELL_BROWSER_API_ATOM_API_MENU_VIEWS_H_

    
    // Retrieve the global descriptor pool owned by the _message module.
// This is the one used by pb2.py generated modules.
// Returns a *borrowed* reference.
// 'Default' pool used to register messages from _pb2.py modules.
PyDescriptorPool* GetDefaultDescriptorPool();
    
    namespace google {
namespace protobuf {
namespace internal {
template<typename T>
bool AlmostEquals(T a, T b) {
  return a == b;
}
template<>
inline bool AlmostEquals(float a, float b) {
  return fabs(a - b) < 32 * FLT_EPSILON;
}
    }
    }
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    // TODO(thomasvl): Should probably add some unittests for all the special cases
// of name mangling (class name, field name, enum names).  Rather than doing
// this with an ObjC test in the objectivec directory, we should be able to
// use src/google/protobuf/compiler/importer* (like other tests) to support a
// virtual file system to feed in protos, once we have the Descriptor tree, the
// tests could use the helper methods for generating names and validate the
// right things are happening.
    
    TEST(StatusOr, TestPointerAssignmentStatusNotOk) {
  StatusOr<int*> source(Status::CANCELLED);
  StatusOr<int*> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
}
    
    using google::protobuf::util::GogoDataStripper;
    
    
    {  gfxFontDict = NULL;
  resDict->lookupNF('Font', &obj1);
  if (obj1.isRef()) {
    obj1.fetch(xref, &obj2);
    if (obj2.isDict()) {
      r = obj1.getRef();
      gfxFontDict = new GfxFontDict(xref, &r, obj2.getDict());
    }
    obj2.free();
  } else if (obj1.isDict()) {
    gfxFontDict = new GfxFontDict(xref, NULL, obj1.getDict());
  }
  if (gfxFontDict) {
    for (i = 0; i < gfxFontDict->getNumFonts(); ++i) {
      if ((font = gfxFontDict->getFont(i))) {
	setupFont(font, resDict);
      }
    }
    delete gfxFontDict;
  }
  obj1.free();
}
    
      //----- path painting
  virtual void stroke(GfxState *state);
  virtual void fill(GfxState *state);
  virtual void eoFill(GfxState *state);
  virtual GBool tilingPatternFill(GfxState *state, Object *str,
				  int paintType, Dict *resDict,
				  double *mat, double *bbox,
				  int x0, int y0, int x1, int y1,
				  double xStep, double yStep);
  virtual GBool functionShadedFill(GfxState *state,
				   GfxFunctionShading *shading);
  virtual GBool axialShadedFill(GfxState *state, GfxAxialShading *shading, double /*tMin*/, double /*tMax*/);
  virtual GBool radialShadedFill(GfxState *state, GfxRadialShading *shading, double /*sMin*/, double /*sMax*/);
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
      // parse from a 'Media Play Parameters' dictionary
  void parseMediaPlayParameters(Object* playObj);
  // parse from a 'Media Screen Parameters' dictionary
  void parseMediaScreenParameters(Object* screenObj);
    
    enum SoundKind {
  soundEmbedded,		// embedded sound
  soundExternal			// external sound
};
    
      size_t n_conditions = 0;
  iter = 0;
  while ((iter = str.find('split_condition', iter + 1)) != std::string::npos) {
    n_conditions++;
  }
  ASSERT_EQ(n_conditions, 3);
    
    // implements rabit error handling.
extern 'C' {
  void XGBoostAssert_R(int exp, const char *fmt, ...);
  void XGBoostCheck_R(int exp, const char *fmt, ...);
}
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    void NcclComm::BroadcastImpl(void* buffer, size_t count, MPI_Datatype dtype, int root)
{
    ncclResult_t res;
    if (dtype == MPI_CHAR)
    {
        res = ncclBcast(buffer, count, ncclChar, root, m_ncclComm, m_stream);
    }
    else
    {
        RuntimeError('NcclComm Broadcast supports Char type only');
    }
    if (res != ncclSuccess)
    {
        RuntimeError('NcclComm ncclBcast failed: %s', ncclGetErrorString(res));
    }
}
    
        bool progressTracing = config(L'progressTracing', false);
    
        // TODO: can these be changed to ComputationNodeBasePtr?
    // TODO: move into a separate header/class, to decouple from this class which would then be only used by old NDL and SimpleNetworkBuilder.
    static ComputationNodePtr NewStandardNode(const std::wstring& nodeType, DEVICEID_TYPE deviceId, const wstring& name);
    static ComputationNodePtr NewNode(const std::wstring& nodeType, DEVICEID_TYPE deviceId, const wstring& name);
    template <class ElemType2>
    static ComputationNodePtr NewNode2(const std::wstring& nodeType, DEVICEID_TYPE deviceId, const wstring& name);
    
            int i = 0; // indicate the index of learnable nodes
        if (m_useAsyncBuffer)
        {
            m_reportTimer.Restart();
            for (auto nodeIter = learnableNodes.begin(); nodeIter != learnableNodes.end(); nodeIter++, i++)
            {
                ComputationNodePtr node = dynamic_pointer_cast<ComputationNode<ElemType>>(*nodeIter);
                Microsoft::MSR::CNTK::Matrix<ElemType> &mat = node->Value();
#ifndef CPUONLY
                // CNTK model -> GPU buffer
                CUDA_CALL(cudaMemcpy(m_gpuAsyncBuffer[m_bufferIndexInUse][i].Data(),
                    mat.Data(),
                    mat.GetNumElements() * sizeof(ElemType),
                    cudaMemcpyDeviceToDevice));
    }
    }
    
    
template <class ElemType>
std::shared_ptr<IDistGradAggregator<ElemType>> GetSimpleDistGradAggregator(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        return std::make_shared<SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            packThresholdSizeInBytes);
}
    
        // Number of inputs must adhere to the schema
    Values<float> inputBuffer1(0);
    BOOST_REQUIRE_THROW(eval->ForwardPass(inputBuffer1, outputBuffer), std::exception); // Not enough inputs
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
      // localnode
  // 8bytes reserved
  WRITE_CHECK(fp, zero, 8);
  // 20bytes localnode ID
  WRITE_CHECK(fp, localNode_->getID(), DHT_ID_LENGTH);
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    public:
  DHTRoutingTableSerializer(int family);
    
        factory->setRoutingTable(routingTable.get());
    factory->setConnection(connection.get());
    factory->setMessageDispatcher(dispatcher.get());
    factory->setPeerAnnounceStorage(peerAnnounceStorage.get());
    factory->setTokenTracker(tokenTracker.get());
    factory->setLocalNode(localNode);
    factory->setBtRegistry(e->getBtRegistry().get());
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
      ~DHTTokenTracker();