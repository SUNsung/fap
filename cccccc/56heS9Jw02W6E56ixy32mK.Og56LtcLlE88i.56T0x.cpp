
        
        HostToDeviceCopyThunk::HostToDeviceCopyThunk(
    const void* source_address,
    const BufferAllocation::Slice& destination_buffer, uint64 mem_size,
    const HloInstruction* hlo_instruction)
    : Thunk(Kind::kCopy, hlo_instruction),
      source_address_(source_address),
      destination_buffer_(destination_buffer),
      mem_size_(mem_size) {}
    
    // ForThunk executes 'loop_limit' invocations of 'body_thunk_sequence'.
class ForThunk : public Thunk {
 public:
  ForThunk(const int64 loop_limit,
           std::unique_ptr<ThunkSequence> body_thunk_sequence,
           const HloInstruction* hlo);
  ForThunk(const ForThunk&) = delete;
  ForThunk& operator=(const ForThunk&) = delete;
    }
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    #include <memory>
#include <string>
#include <vector>
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/status.h'
#include 'tensorflow/stream_executor/stream_executor.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Forward declarations of the functor specializations for GPU.
namespace functor {
extern template struct DiagFunctor<GPUDevice, double>;
extern template struct DiagFunctor<GPUDevice, float>;
extern template struct DiagFunctor<GPUDevice, int32>;
extern template struct DiagFunctor<GPUDevice, int64>;
extern template struct DiagFunctor<GPUDevice, complex64>;
extern template struct DiagFunctor<GPUDevice, complex128>;
}  // namespace functor
    
    TEST_F(HloDceTest, CustomCallInstructionsWithSideEffect) {
  // Verify that custom call instruction with side-effect is not removed.
  auto builder = HloComputation::Builder(TestName());
  auto instr = Cast<HloCustomCallInstruction>(builder.AddInstruction(
      HloInstruction::CreateCustomCall(ShapeUtil::MakeShape(F32, {}),
                                       /*operands=*/{},
                                       /*custom_call_target=*/'foo')));
  instr->set_custom_call_has_side_effect(true);
  builder.AddInstruction(HloInstruction::CreateTuple({}));
    }
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
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
    'movq $0xfffffffffffff,%%r15\n'
    }
    
        std::map<std::string,UniValue> kv;
    obj.getObjMap(kv);
    BOOST_CHECK_EQUAL(kv['age'].getValStr(), '43');
    BOOST_CHECK_EQUAL(kv['name'].getValStr(), 'foo bar');
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; void sha256_sse4(void *input_data, UINT32 digest[8], UINT64 num_blks)
;; arg 1 : pointer to input data
;; arg 2 : pointer to digest
;; arg 3 : Num blocks
section .text
global sha256_sse4
align 32
sha256_sse4:
    push	rbx
%ifndef LINUX
    push	rsi
    push	rdi
%endif
    push	rbp
    push	r13
    push	r14
    push	r15
    
    typedef uint64_t SequenceNumber;
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    std::string LockFileName(const std::string& dbname) {
  return dbname + '/LOCK';
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
  virtual std::string GetName() const { return '[stdout]'; }
};
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
          case kFirstType:
        if (in_fragmented_record) {
          // Handle bug in earlier versions of log::Writer where
          // it could emit an empty kFirstType record at the tail end
          // of a block followed by a kFullType or kFirstType record
          // at the beginning of the next block.
          if (scratch->empty()) {
            in_fragmented_record = false;
          } else {
            ReportCorruption(scratch->size(), 'partial record without end(2)');
          }
        }
        prospective_record_offset = physical_record_offset;
        scratch->assign(fragment.data(), fragment.size());
        in_fragmented_record = true;
        break;
    
    TEST_F(JsonObjectWriterTest, TestWebsafeByteEncoding) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->set_use_websafe_base64_for_bytes(true);
  ow_->StartObject('')
      ->RenderBytes('bytes', '\x03\xef\xc0\x10')
      ->EndObject();
    }
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
      if (argc != 2) {
    cerr << 'Usage:  ' << argv[0] << ' ADDRESS_BOOK_FILE' << endl;
    return -1;
  }
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_SCOPED_PYOBJECT_PTR_H__

    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    
    {
    {    if (!s.ok()) {
      assert(table == nullptr);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
      // Return true iff the length of the referenced data is zero
  bool empty() const { return size_ == 0; }
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
      DB* db;
  Options options;
  options.create_if_missing = true;
  ASSERT_OK(DB::Open(options, dbpath, &db));
    
    /**
 * Simple struct for storing an error with an endpoint.
 *
 * Certain types of errors are not stored in WriteOps or must be returned to a caller.
 */
struct ShardError {
    ShardError(const ShardEndpoint& endpoint, const WriteErrorDetail& error) : endpoint(endpoint) {
        error.cloneTo(&this->error);
    }
    }
    
    
    {
}  // namespace mongo

    
    #define MONGO_LOG_DEFAULT_COMPONENT ::mongo::logger::LogComponent::kStorage
    
        void _record(OperationContext* opCtx,
                 CollectionData& c,
                 LogicalOp logicalOp,
                 LockType lockType,
                 long long micros,
                 Command::ReadWriteType readWriteType);
    
    
    {}  // namespace

    
    #include 'unicode/translit.h'
    
    
//---------------------------------------------------------------------
//
//   flags
//
//---------------------------------------------------------------------
uint32_t RegexPattern::flags() const {
    return fFlags;
}
    
    UBool ScriptSet::contains(const ScriptSet &other) const {
    ScriptSet t(*this);
    t.intersect(other);
    return (t == other);
}