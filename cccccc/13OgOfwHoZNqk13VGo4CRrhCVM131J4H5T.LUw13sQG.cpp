
        
        // static
void Event::BuildPrototype(
    v8::Isolate* isolate, v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'Event'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('preventDefault', &Event::PreventDefault)
      .SetMethod('sendReply', &Event::SendReply);
}
    
    
    {}  // namespace atom
    
    #endif // SWIFT_INDEX_INDEXRECORD_H

    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
      /// Treat all warnings as errors
  bool WarningsAsErrors = false;
    
    #include 'llvm/Support/raw_ostream.h'
    
    SymbolInfo getSymbolInfoForDecl(const Decl *D);
SymbolSubKind getSubKindForAccessor(AccessorKind AK);
bool isLocalSymbol(const Decl *D);
    
    static std::shared_ptr<Reporter> InitBenchmarkReporters() {
  auto* composite_reporter = new CompositeReporter;
  if (FLAGS_enable_log_reporter) {
    composite_reporter->add(
        std::unique_ptr<Reporter>(new GprLogReporter('LogReporter')));
  }
  if (FLAGS_scenario_result_file != '') {
    composite_reporter->add(std::unique_ptr<Reporter>(
        new JsonReporter('JsonReporter', FLAGS_scenario_result_file)));
  }
  if (FLAGS_enable_rpc_reporter) {
    GPR_ASSERT(!FLAGS_rpc_reporter_server_address.empty());
    composite_reporter->add(std::unique_ptr<Reporter>(new RpcReporter(
        'RpcReporter',
        grpc::CreateChannel(FLAGS_rpc_reporter_server_address,
                            grpc::InsecureChannelCredentials()))));
  }
    }
    
    #include <grpc++/alarm.h>
#include <grpc++/channel.h>
#include <grpc++/client_context.h>
#include <grpc++/generic/generic_stub.h>
#include <grpc/grpc.h>
#include <grpc/support/cpu.h>
#include <grpc/support/log.h>
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    std::shared_ptr<Channel> CreateTestChannel(
    const grpc::string& server, const grpc::string& credential_type,
    const std::shared_ptr<CallCredentials>& creds) {
  ChannelArguments channel_args;
  std::shared_ptr<ChannelCredentials> channel_creds =
      testing::GetCredentialsProvider()->GetChannelCredentials(credential_type,
                                                               &channel_args);
  GPR_ASSERT(channel_creds != nullptr);
  if (creds.get()) {
    channel_creds = CompositeChannelCredentials(channel_creds, creds);
  }
  return CreateCustomChannel(server, channel_creds, channel_args);
}
    
    static void RunSynchronousUnaryPingPong() {
  gpr_log(GPR_INFO, 'Running Synchronous Unary Ping Pong');
    }
    
        // The means to get back to the client.
    ServerAsyncResponseWriter<HelloReply> responder_;
    
    
    {    // Act upon its status.
    if (status.ok()) {
      return reply.message();
    } else {
      std::cout << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
    #include <grpc++/grpc++.h>
    
      bool TryParseOne(Feature* feature) {
    if (failed_ || Finished() || !Match('{')) {
      return SetFailedAndReturnFalse();
    }
    if (!Match(location_) || !Match('{') || !Match(latitude_)) {
      return SetFailedAndReturnFalse();
    }
    long temp = 0;
    ReadLong(&temp);
    feature->mutable_location()->set_latitude(temp);
    if (!Match(',') || !Match(longitude_)) {
      return SetFailedAndReturnFalse();
    }
    ReadLong(&temp);
    feature->mutable_location()->set_longitude(temp);
    if (!Match('},') || !Match(name_) || !Match('\'')) {
      return SetFailedAndReturnFalse();
    }
    size_t name_start = current_;
    while (current_ != db_.size() && db_[current_++] != ''') {
    }
    if (current_ == db_.size()) {
      return SetFailedAndReturnFalse();
    }
    feature->set_name(db_.substr(name_start, current_-name_start-1));
    if (!Match('},')) {
      if (db_[current_ - 1] == ']' && current_ == db_.size()) {
        return true;
      }
      return SetFailedAndReturnFalse();
    }
    return true;
  }
    
      void GetFeature() {
    Point point;
    Feature feature;
    point = MakePoint(409146138, -746188906);
    GetOneFeature(point, &feature);
    point = MakePoint(0, 0);
    GetOneFeature(point, &feature);
  }
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    // Retrieves one character from the input stream, but does not read past markers. Will continue to return 0xFF when a marker is encountered.
inline uint8 jpeg_decoder::get_octet()
{
  bool padding_flag;
  int c = get_char(&padding_flag);
    }
    
        // Returns the total number of bytes actually consumed by the decoder (which should equal the actual size of the JPEG file).
    inline int get_total_bytes_read() const { return m_total_bytes_read; }
    
  private:
    jpeg_decoder(const jpeg_decoder &);
    jpeg_decoder &operator =(const jpeg_decoder &);
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
    /*Accesses one of four (signed) bytes given an index.
  This can be used to avoid small lookup tables.*/
#define OC_BYTE_TABLE32(_a,_b,_c,_d,_i) \
  ((signed char) \
   (((_a)&0xFF|((_b)&0xFF)<<8|((_c)&0xFF)<<16|((_d)&0xFF)<<24)>>(_i)*8))
/*Accesses one of eight (unsigned) nibbles given an index.
  This can be used to avoid small lookup tables.*/
#define OC_UNIBBLE_TABLE32(_a,_b,_c,_d,_e,_f,_g,_h,_i) \
  ((((_a)&0xF|((_b)&0xF)<<4|((_c)&0xF)<<8|((_d)&0xF)<<12| \
   ((_e)&0xF)<<16|((_f)&0xF)<<20|((_g)&0xF)<<24|((_h)&0xF)<<28)>>(_i)*4)&0xF)
    
    static const static_bookblock _resbook_44s_2={
  {
    {0},{0,0,&_44c2_s_p1_0},{0,0,&_44c2_s_p2_0},{0,0,&_44c2_s_p3_0},
    {0,0,&_44c2_s_p4_0},{0,0,&_44c2_s_p5_0},{0,0,&_44c2_s_p6_0},
    {&_44c2_s_p7_0,&_44c2_s_p7_1},{&_44c2_s_p8_0,&_44c2_s_p8_1},
    {&_44c2_s_p9_0,&_44c2_s_p9_1,&_44c2_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_3={
  {
    {0},{0,0,&_44c3_s_p1_0},{0,0,&_44c3_s_p2_0},{0,0,&_44c3_s_p3_0},
    {0,0,&_44c3_s_p4_0},{0,0,&_44c3_s_p5_0},{0,0,&_44c3_s_p6_0},
    {&_44c3_s_p7_0,&_44c3_s_p7_1},{&_44c3_s_p8_0,&_44c3_s_p8_1},
    {&_44c3_s_p9_0,&_44c3_s_p9_1,&_44c3_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_4={
  {
    {0},{0,0,&_44c4_s_p1_0},{0,0,&_44c4_s_p2_0},{0,0,&_44c4_s_p3_0},
    {0,0,&_44c4_s_p4_0},{0,0,&_44c4_s_p5_0},{0,0,&_44c4_s_p6_0},
    {&_44c4_s_p7_0,&_44c4_s_p7_1},{&_44c4_s_p8_0,&_44c4_s_p8_1},
    {&_44c4_s_p9_0,&_44c4_s_p9_1,&_44c4_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_5={
  {
    {0},{0,0,&_44c5_s_p1_0},{0,0,&_44c5_s_p2_0},{0,0,&_44c5_s_p3_0},
    {0,0,&_44c5_s_p4_0},{0,0,&_44c5_s_p5_0},{0,0,&_44c5_s_p6_0},
    {&_44c5_s_p7_0,&_44c5_s_p7_1},{&_44c5_s_p8_0,&_44c5_s_p8_1},
    {&_44c5_s_p9_0,&_44c5_s_p9_1,&_44c5_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_6={
  {
    {0},{0,0,&_44c6_s_p1_0},{0,0,&_44c6_s_p2_0},{0,0,&_44c6_s_p3_0},
    {0,0,&_44c6_s_p4_0},
    {&_44c6_s_p5_0,&_44c6_s_p5_1},
    {&_44c6_s_p6_0,&_44c6_s_p6_1},
    {&_44c6_s_p7_0,&_44c6_s_p7_1},
    {&_44c6_s_p8_0,&_44c6_s_p8_1},
    {&_44c6_s_p9_0,&_44c6_s_p9_1,&_44c6_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_7={
  {
    {0},{0,0,&_44c7_s_p1_0},{0,0,&_44c7_s_p2_0},{0,0,&_44c7_s_p3_0},
    {0,0,&_44c7_s_p4_0},
    {&_44c7_s_p5_0,&_44c7_s_p5_1},
    {&_44c7_s_p6_0,&_44c7_s_p6_1},
    {&_44c7_s_p7_0,&_44c7_s_p7_1},
    {&_44c7_s_p8_0,&_44c7_s_p8_1},
    {&_44c7_s_p9_0,&_44c7_s_p9_1,&_44c7_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_8={
  {
    {0},{0,0,&_44c8_s_p1_0},{0,0,&_44c8_s_p2_0},{0,0,&_44c8_s_p3_0},
    {0,0,&_44c8_s_p4_0},
    {&_44c8_s_p5_0,&_44c8_s_p5_1},
    {&_44c8_s_p6_0,&_44c8_s_p6_1},
    {&_44c8_s_p7_0,&_44c8_s_p7_1},
    {&_44c8_s_p8_0,&_44c8_s_p8_1},
    {&_44c8_s_p9_0,&_44c8_s_p9_1,&_44c8_s_p9_2}
   }
};
static const static_bookblock _resbook_44s_9={
  {
    {0},{0,0,&_44c9_s_p1_0},{0,0,&_44c9_s_p2_0},{0,0,&_44c9_s_p3_0},
    {0,0,&_44c9_s_p4_0},
    {&_44c9_s_p5_0,&_44c9_s_p5_1},
    {&_44c9_s_p6_0,&_44c9_s_p6_1},
    {&_44c9_s_p7_0,&_44c9_s_p7_1},
    {&_44c9_s_p8_0,&_44c9_s_p8_1},
    {&_44c9_s_p9_0,&_44c9_s_p9_1,&_44c9_s_p9_2}
   }
};
    
    /* mapping conventions:
   only one submap (this would change for efficient 5.1 support for example)*/
/* Four psychoacoustic profiles are used, one for each blocktype */
static const vorbis_info_mapping0 _map_nominal_u[2]={
  {1, {0,0,0,0,0,0}, {0}, {0}, 0,{0},{0}},
  {1, {0,0,0,0,0,0}, {1}, {1}, 0,{0},{0}}
};
    
     ********************************************************************/
    
    
    
    
    
    
    
        GLESDebugDraw( float32 ratio );
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
      void Mark(uint32_t start_offset, uint32_t end_offset) {
    assert(end_offset >= start_offset);
    // Index of first bit in mask
    uint32_t start_bit =
        (start_offset + (1 << bytes_per_bit_pow_) - rnd_ - 1) >>
        bytes_per_bit_pow_;
    // Index of last bit in mask + 1
    uint32_t exclusive_end_bit =
        (end_offset + (1 << bytes_per_bit_pow_) - rnd_) >> bytes_per_bit_pow_;
    if (start_bit >= exclusive_end_bit) {
      return;
    }
    assert(exclusive_end_bit > 0);
    }
    
        bufstart_ = new_bufstart;
    capacity_ = new_capacity;
    buf_.reset(new_buf);
  }
  // Used for write
  // Returns the number of bytes appended
  size_t Append(const char* src, size_t append_size) {
    size_t buffer_remaining = capacity_ - cursize_;
    size_t to_copy = std::min(append_size, buffer_remaining);
    
      //   Generate two files in Level 0. Both files are approx the same size.
  for (int num = 0; num < options.level0_file_num_compaction_trigger - 1;
       num++) {
    // Write 110KB (11 values, each 10K)
    for (int i = 0; i < 11; i++) {
      ASSERT_OK(Put(1, Key(key_idx), RandomString(&rnd, 10000)));
      key_idx++;
    }
    dbfull()->TEST_WaitForFlushMemTable(handles_[1]);
    ASSERT_EQ(NumSortedRuns(1), num + 1);
  }
  ASSERT_EQ(NumSortedRuns(1), 2);
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-nullptr, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(std::shared_ptr<Logger> info_log,
  // @lint-ignore TXT2 T25377293 Grandfathered in
	 unique_ptr<SequentialFileReader>&& file,
         Reporter* reporter, bool checksum, uint64_t initial_offset,
         uint64_t log_num);
    
    JniCallback::~JniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      virtual std::string ToString() const override {
    std::string res;
    res.append('SimCache MISSes: ' + std::to_string(get_miss_counter()) + '\n');
    res.append('SimCache HITs:    ' + std::to_string(get_hit_counter()) + '\n');
    char buff[350];
    auto lookups = get_miss_counter() + get_hit_counter();
    snprintf(buff, sizeof(buff), 'SimCache HITRATE: %.2f%%\n',
             (lookups == 0 ? 0 : get_hit_counter() * 100.0f / lookups));
    res.append(buff);
    return res;
  }