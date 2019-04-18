
        
        #include 'include/secp256k1_ecdh.h'
#include 'ecmult_const_impl.h'
    
        /* Check for (correctly reporting) a parsing error if the initial
       JSON construct is followed by more stuff.  Note that whitespace
       is, of course, exempt.  */
    
    ROTATE_ARGS
	movdqa	XTMP2, XTMP3	; XTMP2 = W[-15]
    mov	y0, e		; y0 = e
    mov	y1, a		; y1 = a
	movdqa	XTMP4, XTMP3	; XTMP4 = W[-15]
    ror	y0, (25-11)	; y0 = e >> (25-11)
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    mov	y2, f		; y2 = f
    ror	y1, (22-13)	; y1 = a >> (22-13)
	pslld	XTMP3, (32-18)
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
    xor	y2, g		; y2 = f^g
	psrld	XTMP2, 18
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
	pxor	XTMP1, XTMP3
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
	psrld	XTMP4, 3	; XTMP4 = W[-15] >> 3
    add	y2, y0		; y2 = S1 + CH
    add	y2, [rsp + _XFER + 1*4]	; y2 = k + w + S1 + CH
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
	pxor	XTMP1, XTMP2	; XTMP1 = W[-15] ror 7 ^ W[-15] ror 18
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pxor	XTMP1, XTMP4	; XTMP1 = s0
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	;; compute low s1
	pshufd	XTMP2, X3, 11111010b	; XTMP2 = W[-2] {BBAA}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
	paddd	XTMP0, XTMP1	; XTMP0 = W[-16] + W[-7] + s0
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
    namespace nw {
    }
    
    
    {}  // namespace
    
    
    {  base::WaitableEvent done(base::WaitableEvent::ResetPolicy::AUTOMATIC,
                           base::WaitableEvent::InitialState::NOT_SIGNALED);
  base::PostTaskWithTraits(
      FROM_HERE, {content::BrowserThread::IO},
      base::BindOnce(&SetProxyConfigCallback, &done,
                 base::WrapRefCounted(context_getter), config));
  done.Wait();
  return true;
}
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.quit', UNKNOWN)
 private:
  void Callback();
};
    
      for(auto& data : params->data) {
    if (!writer->Write(data)) {
      *error = writer->error();
      writer->Reset();
      return false;
    }
  }
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      // Null char in the string.
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    #include <ostream>
#include <stdio.h>
#include <string>
#include <utility>
    
    // Copyright 2008 Google Inc. All Rights Reserved.
// Author: xpeng@google.com (Peter Peng)
    
    #include 'google/protobuf/message.h'
#include 'google/protobuf/descriptor.h'
    
    namespace {
    }
    
    string StripProto(string filename) {
  return filename.substr(0, filename.rfind('.proto'));
}
    
      cout << 'Enter name: ';
  getline(cin, *person->mutable_name());
    
        float32* x; //vertex arrays
    float32* y;
    int32 nVertices;
	
	float32 area;
	bool areaIsSet;
	
    b2Polygon(float32* _x, float32* _y, int32 nVert);
    b2Polygon(b2Vec2* v, int32 nVert);
	b2Polygon();
    ~b2Polygon();
	
	float32 GetArea();
	
	void MergeParallelEdges(float32 tolerance);
    b2Vec2* GetVertexVecs();
    b2Polygon(b2Triangle& t);
    void Set(const b2Polygon& p);
    bool IsConvex();
	bool IsCCW();
	bool IsUsable(bool printError);
	bool IsUsable();
    bool IsSimple();
   // void AddTo(b2FixtureDef& pd);
	
    b2Polygon* Add(b2Triangle& t);
    
    #ifndef VPX_DSP_TXFM_COMMON_H_
#define VPX_DSP_TXFM_COMMON_H_
    
      Decompression is memory safe and guaranteed not to write the output buffer
  more than what is specified in maxout.
 */
    
    #define NORM_SCALING 1.f
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv5e(opus_val16 a, opus_val32 b)
{
  int res;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(b),'r'(a)
  );
  return res;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv5e(a, b))
    
    /* Requires that shift > 0 */
#define silk_RSHIFT_ROUND(a, shift)         ((shift) == 1 ? ((a) >> 1) + ((a) & 1) : (((a) >> ((shift) - 1)) + 1) >> 1)
#define silk_RSHIFT_ROUND64(a, shift)       ((shift) == 1 ? ((a) >> 1) + ((a) & 1) : (((a) >> ((shift) - 1)) + 1) >> 1)
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
    #include 'db/builder.h'
    
    
    {  ParsedInternalKey() { }  // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString() const;
};
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    class FileNameTest { };
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
    class LogTest {
 private:
  class StringDest : public WritableFile {
   public:
    std::string contents_;
    }
    }
    
    
    {
    {      // Install new manifest
      status = env_->RenameFile(tmp, DescriptorFileName(dbname_, 1));
      if (status.ok()) {
        status = SetCurrentFile(env_, dbname_, 1);
      } else {
        env_->DeleteFile(tmp);
      }
    }
    return status;
  }
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != nullptr) {
    *tableptr = nullptr;
  }
    }
    
    
    {  Status FindTable(uint64_t file_number, uint64_t file_size, Cache::Handle**);
};
    
    uint32_t Extension_ping_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin('Extension_ping_args');
    }
    
    
    {};
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
    
    {  auto blk_devices = SQL::selectAllFrom('block_devices');
  for (const auto& device : blk_devices) {
    auto size = device.find('size');
    auto name = device.find('name');
    if (size != device.end() && size->second != '0' && size->second != '' &&
        name != device.end()) {
      handle_device_func(name->second, type);
    }
  }
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    #include <osquery/tests/integration/tables/helper.h>
    
    TEST_F(kernelExtensions, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_extensions');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'idx', IntType}
  //      {'refs', IntType}
  //      {'size', IntType}
  //      {'name', NormalType}
  //      {'version', NormalType}
  //      {'linked_against', NormalType}
  //      {'path', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    TEST_F(KernelInfo, test_sanity) {
  QueryData data = execute_query('select * from kernel_info');
  ValidatatioMap row_map = {{'version', NonEmptyString},
                            {'arguments', NormalType},
                            {'path', NormalType},
                            {'device', NonEmptyString}};
  validate_rows(data, row_map);
}
    
    TEST_F(kernelIntegrity, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_integrity');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'sycall_addr_modified', IntType}
  //      {'text_segment_hash', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    TEST_F(keychainAcls, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from keychain_acls');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'keychain_path', NormalType}
  //      {'authorizations', NormalType}
  //      {'path', NormalType}
  //      {'description', NormalType}
  //      {'label', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    TEST(CanSenderTest, OneRunCase) {
  CanSender<::apollo::canbus::ChassisDetail> sender;
  can::FakeCanClient can_client;
  sender.Init(&can_client, true);
    }
    
    #include 'modules/drivers/canbus/common/byte.h'
    
    int ObjectGeneralInfo60B::dynprop(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 3);
    }
    
    class SpeedLimitTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    speed_limit_.Clear();
    for (int i = 0; i < 100; ++i) {
      std::pair<double, double> sp;
      sp.first = i * 1.0;
      sp.second = (i % 2 == 0) ? 5.0 : 10.0;
      speed_limit_.AppendSpeedLimit(sp.first, sp.second);
    }
  }
    }
    
      MatrixXd mat_golden(10, 10);
  // clang-format off
  mat_golden <<
      6, -4,  1,  0,  0,  0,  0,  0,  0,  0,
     -4,  6, -4,  1,  0,  0,  0,  0,  0,  0,
      1, -4,  6, -4,  1,  0,  0,  0,  0,  0,
      0,  1, -4,  6, -4,  1,  0,  0,  0,  0,
      0,  0,  1, -4,  6, -4,  1,  0,  0,  0,
      0,  0,  0,  1, -4,  6, -4,  1,  0,  0,
      0,  0,  0,  0,  1, -4,  6, -4,  1,  0,
      0,  0,  0,  0,  0,  1, -4,  6, -4,  1,
      0,  0,  0,  0,  0,  0,  1, -4,  5, -2,
      0,  0,  0,  0,  0,  0,  0,  1, -2,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    SplineSegKernel::SplineSegKernel() {
  const int reserved_num_params = reserved_order_ + 1;
  CalculateFx(reserved_num_params);
  CalculateDerivative(reserved_num_params);
  CalculateSecondOrderDerivative(reserved_num_params);
  CalculateThirdOrderDerivative(reserved_num_params);
}
    
    
    {  acc.Parse(bytes, length, &chassis_detail);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().commanded_value(),
                   0.772);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().output_value(), 4.37);
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
      Brakerpt6c brake;
  brake.Parse(bytes, length, &chassis_detail);
    
    
    {  bool ret = x;
  return ret;
}