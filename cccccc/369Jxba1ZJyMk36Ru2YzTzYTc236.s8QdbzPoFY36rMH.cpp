
        
          auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  ShapeTree<InfeedBuffer> infeed_buffers =
      GetOrCreateInfeedManager()->BlockingGetNextDestination();
    
    namespace xla {
namespace gpu {
    }
    }
    
      // TODO(b/125951860): Plumb more datatypes / reduction operators. Initial
  // implementation is simply F32 summation.
  //
  // TODO(b/125951860): Support all-reduces with replica groups, i.e.
  // all-reduces that compute multiple sums across subsets of all replicas.
  NcclAllReduceThunk(int64 replica_count, int64 element_count,
                     const BufferAllocation::Slice& source_buffer,
                     const BufferAllocation::Slice& destination_buffer,
                     const HloInstruction* all_reduce);
  ~NcclAllReduceThunk() override;
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_OUTFEED_THUNK_H_

    
    
    {
    {}  // namespace gpu
}  // namespace xla

    
        // Copy the result of condition computation and break the loop if 'false'.
    bool condition_result;
    stream.ThenMemcpy(&condition_result, condition_result_data, sizeof(bool));
    VLOG(3) << 'condition_result = ' << condition_result;
    Status block_status = stream.BlockHostUntilDone();
    if (!block_status.ok()) {
      return InternalError(
          'Failed to complete all kernels launched on stream %p: %s', &stream,
          block_status.error_message());
    }
    
    
    {}  // namespace xla
    
        Mat displacement_field(Size(dst_frame1.cols / (1 << OF_scale), dst_frame1.rows / (1 << OF_scale)),
                           CV_32FC2);
    randn(displacement_field, 0.0, sigma);
    resize(displacement_field, displacement_field, dst_frame2.size(), 0.0, 0.0, INTER_CUBIC);
    for (int i = 0; i < displacement_field.rows; i++)
        for (int j = 0; j < displacement_field.cols; j++)
            displacement_field.at<Vec2f>(i, j) += Vec2f((float)j, (float)i);
    
                int rleCount = buffer >> 56;
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    template <>
IMF_EXPORT
void FloatVectorAttribute::readValueFrom
    (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &, int, int);
    
    
//----------
// Iterators
//----------
    
    #endif /* GENERICOUTPUTFILE_H_ */

    
    		    _data->cachedBuffer->insert
			(k.name(),
			 Slice (UINT,
				(char *)(new unsigned int[tileRowSize] - 
					_data->offset),
				sizeof (unsigned int),
				sizeof (unsigned int) *
				    _data->tFile->levelWidth(0),
				1, 1,
				s.fillValue,
				false, true));
		    break;
    
        IMF_EXPORT
    virtual ~InputFile ();
    
    
    {};
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    TEST_F(JsonObjectWriterTest, EmptyObjectKey) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartObject('')->RenderString('', 'value')->EndObject();
  EXPECT_EQ('{\'\':\'value\'}', CloseStreamAndGetString());
}
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      Proto3DataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
        string filename = file->name();
    string basename = StripProto(filename);
    
    namespace {
    }
    
    
    {  int total_added_;
};
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    // if changed remember to keep in sync with frontend enums
enum PageTransitionType {
  transitionReplace = 0,
  transitionSplit,
  transitionBlinds,
  transitionBox,
  transitionWipe,
  transitionDissolve,
  transitionGlitter,
  transitionFly,
  transitionPush,
  transitionCover,
  transitionUncover,
  transitionFade
};
    
      // refill token buffers and check for 'endstream'
  shift();  // kill '>>'
  shift();  // kill 'stream'
  if (buf1.isCmd('endstream')) {
    shift();
  } else {
    error(getPos(), 'Missing 'endstream'');
    if (xref) {
      // shift until we find the proper endstream or we change to another object or reach eof
      while (!buf1.isCmd('endstream') && xref->getNumEntry(lexer->getPos()) == objNum && !buf1.isEOF()) {
        shift();
      }
      length = lexer->getPos() - pos;
      if (buf1.isCmd('endstream')) {
        obj.initInt(length);
        dict->dictSet('Length', &obj);
        obj.free();
      }
    } else {
      // When building the xref we can't use it so use this
      // kludge for broken PDF files: just add 5k to the length, and
      // hope its enough
      length += 5000;
    }
  }
    
      if (*keys[0] == key) {
    return items[0];
  }
  for (int i = 1; i <= lastValidCacheIndex; i++) {
    if (*keys[i] == key) {
      PopplerCacheKey *keyHit = keys[i];
      PopplerCacheItem *itemHit = items[i];
    }
    }
    
    ProfileData::ProfileData() {
	count = 0;
	total = 0.0;
	min = 0.0;
	max = 0.0;
}
    
    GBool ExternalSecurityHandler::authorize(void *authData) {
  char *key;
  int length;
    }
    
      static Data& getMutableData6() { return data6_; }
    
      void sendMessage();
    
      virtual ~DHTResponseMessage();
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
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
    
      std::shared_ptr<DHTNode> localNode_;
    
    
    {} // namespace aria2

    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
      virtual void process() CXX11_OVERRIDE;
    
    const std::string DHTUnknownMessage::UNKNOWN('unknown');
    
    #include 'a2functional.h'
    
      /*
   * @brief the uri used to begin POSTing carve data
   *
   * This endpoint should negotiate the details of the carve, as well
   * as give the client a session id used to continue POSTing the data.
   */
  std::string startUri_;
    
      // Return default value in case of NotFound error
  Expected<int32_t, DatabaseError> getInt32Or(const std::string& domain,
                                              const std::string& key,
                                              const int32_t default_value = 0);
  Expected<std::string, DatabaseError> getStringOr(
      const std::string& domain,
      const std::string& key,
      const std::string& default_value = '');
    
    // This implementation is not 100% thread safe and does not
// support close/open commands during regular db usage.
// It's safe as long as DB is open in single threaded manner,
// and only then used from multiple threads.
class RocksdbDatabase final : public Database {
 public:
  using Handle = rocksdb::ColumnFamilyHandle;
  using HandleRef = std::shared_ptr<Handle>;
    }
    
      /**
   * @brief Bind this plugin to an external plugin reference.
   *
   * Allow a specialized plugin type to act when an external plugin is
   * registered (e.g., a TablePlugin will attach the table name).
   *
   * @param name The broadcasted name of the plugin.
   * @param info The routing info for the owning extension.
   */
  static Status addExternal(const std::string& name,
                            const PluginResponse& info) {
    (void)name;
    (void)info;
    return Status::success();
  }
    
    TEST_F(RocksdbDatabaseTest, test_put) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  auto result = db->putInt32('test', 'test', 23);
  EXPECT_FALSE(result);
  EXPECT_EQ(result.getError(), DatabaseError::DbIsNotOpen);
  EXPECT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'test_key_int', 12));
  auto int_value = db->getInt32(kPersistentSettings, 'test_key_int');
  EXPECT_TRUE(int_value);
  EXPECT_EQ(int_value.take(), 12);
    }
    
    
    {#ifdef SW_CONTEXT_PROTECT_STACK_PAGE
    uint32_t protect_page = get_protect_stack_page();
    if (protect_page)
    {
        if (protect_stack(stack_, stack_size, protect_page))
        {
            protect_page_ = protect_page;
        }
    }
#endif
}
    
        inline bool is_empty()
    {
        return data_queue.size() == 0;
    }
    
        signals:
        void finished();
    
    const char* swoole_mime_type_get(const char *filename)
{
    auto suffix = get_suffix(filename);
    auto i = mime_map.find(suffix);
    if (i != mime_map.end())
    {
        return i->second.c_str();
    }
    return 'application/octet-stream';
}
    
    uint8_t get_static_type_size(uint8_t type)
{
    static const uint8_t map[] =
    {
        0,                // SW_MYSQL_TYPE_DECIMAL   0
        sizeof(int8_t),   // SW_MYSQL_TYPE_TINY      1
        sizeof(int16_t),  // SW_MYSQL_TYPE_SHORT     2
        sizeof(int32_t),  // SW_MYSQL_TYPE_LONG      3
        sizeof(float),    // SW_MYSQL_TYPE_FLOAT     4
        sizeof(double),   // SW_MYSQL_TYPE_DOUBLE    5
        0,                // SW_MYSQL_TYPE_NULL      6
        0,                // SW_MYSQL_TYPE_TIMESTAMP 7
        sizeof(int64_t),  // SW_MYSQL_TYPE_LONGLONG  8
        sizeof(int32_t),  // SW_MYSQL_TYPE_INT24     9
        0,                // SW_MYSQL_TYPE_DATE      10
        0,                // SW_MYSQL_TYPE_TIME      11
        0,                // SW_MYSQL_TYPE_DATETIME  12
        sizeof(int16_t),  // SW_MYSQL_TYPE_YEAR      13
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0
    };
    SW_ASSERT(sizeof(map) == UINT8_MAX + 1);
    return map[type];
}
    
            switch (descriptors[i].mode & ~DESC_PARENT_MODE_WRITE)
        {
        case DESC_PIPE:
            stream = php_swoole_create_stream_from_socket(descriptors[i].parentend, AF_UNIX, SOCK_STREAM, 0 STREAMS_CC);
            /* mark the descriptor close-on-exec, so that it won't be inherited by potential other children */
            fcntl(descriptors[i].parentend, F_SETFD, FD_CLOEXEC);
            if (stream)
            {
                zval retfp;
    }
    }