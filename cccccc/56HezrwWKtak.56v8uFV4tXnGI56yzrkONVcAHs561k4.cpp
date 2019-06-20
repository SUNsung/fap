
        
        namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/platform/logging.h'
    
      ~PyRecordReader();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace stream_executor {
    }
    
    public:
    explicit OpenURIDialog(QWidget *parent);
    ~OpenURIDialog();
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    ; addm [mem], reg
; Add reg to mem using reg-mem add and store
%macro addm 2
    add	%2, %1
    mov	%1, %2
%endm
    
    // A helper class useful for DBImpl::Get()
class LookupKey {
 public:
  // Initialize *this for looking up user_key at a snapshot with
  // the specified sequence number.
  LookupKey(const Slice& user_key, SequenceNumber sequence);
    }
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& fname,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(fname);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    Status::Status(error::Code error_code, StringPiece error_message)
    : error_code_(error_code) {
  if (error_code != error::OK) {
    error_message_ = error_message.ToString();
  }
}
    
    
    {
    {
    {
    {}  // anonymous namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
      while (true) {
    void* outptr;
    int outlen;
    bool ok;
    do {
      ok = out.Next(&outptr, &outlen);
      if (!ok) {
        break;
      }
    } while (outlen <= 0);
    readlen = read(STDIN_FILENO, outptr, outlen);
    if (readlen <= 0) {
      out.BackUp(outlen);
      break;
    }
    if (readlen < outlen) {
      out.BackUp(outlen - readlen);
    }
  }
    
    string StripProto(string filename) {
  if (filename.substr(filename.size() - 11) == '.protodevel') {
    // .protodevel
    return filename.substr(0, filename.size() - 11);
  } else {
    // .proto
    return filename.substr(0, filename.size() - 6);
  }
}
    
      EnumGenerator(const EnumGenerator&) = delete;
  EnumGenerator& operator=(const EnumGenerator&) = delete;
    
    namespace leveldb {
    }
    
        uint64_t file_size;
    ASSERT_OK(env_.target()->GetFileSize(fname, &file_size));
    
    #endif  // STORAGE_LEVELDB_DB_SKIPLIST_H_

    
    class Env;
    
      // Save current contents to *log
  Status WriteSnapshot(log::Writer* log);
    
      // Control over blocks (user data is stored in a set of blocks, and
  // a block is the unit of reading from disk).
    
      // Calls (*handle_result)(arg, ...) with the entry found after a call
  // to Seek(key).  May not make such a call if filter policy says
  // that key is not present.
  Status InternalGet(const ReadOptions&, const Slice& key, void* arg,
                     void (*handle_result)(void* arg, const Slice& k,
                                           const Slice& v));
    
    #include 'leveldb/table_builder.h'
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}
    
    
    {  Env* env_;
};
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    #include 'gtest/gtest.h'
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    
    {  switch (x) {
    case 0x0:
      return OUTPUT_TYPE_NONE;
    case 0x1:
      return OUTPUT_TYPE_OBJECTS;
    case 0x2:
      return OUTPUT_TYPE_CLUSTERS;
    default:
      return OUTPUT_TYPE_ERROR;
  }
}
    
    // config detail: {'name': 'manual_input', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 7,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Accelrpt68::manual_input(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
    // config detail: {'name': 'motor_temperature', 'offset': -40.0,
// 'precision': 1.0, 'len': 16, 'is_signed_var': True, 'physical_range':
// '[-32808|32727]', 'bit': 23, 'type': 'int', 'order': 'motorola',
// 'physical_unit': 'deg C'}
int Brakemotorrpt271::motor_temperature(const std::uint8_t* bytes,
                                        int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    // config detail: {'name': 'output_value', 'enum': {0:
// 'OUTPUT_VALUE_HEADLIGHTS_OFF', 1: 'OUTPUT_VALUE_LOW_BEAMS', 2:
// 'OUTPUT_VALUE_HIGH_BEAMS'}, 'precision': 1.0, 'len': 8, 'is_signed_var':
// False, 'offset': 0.0, 'physical_range': '[0|2]', 'bit': 23, 'type': 'enum',
// 'order': 'motorola', 'physical_unit': ''}
Headlight_rpt_77::Output_valueType Headlightrpt77::output_value(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }