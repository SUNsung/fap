
        
        ConditionalThunk::ConditionalThunk(
    const BufferAllocation::Slice& branch_index_buffer_index,
    absl::Span<const BufferAllocation::Slice> branch_operand_buffer_indexes,
    std::vector<ThunkSequence> branch_thunk_sequences,
    const HloInstruction* hlo)
    : Thunk(Kind::kConditional, hlo),
      branch_index_is_bool_(hlo->operand(0)->shape().element_type() == PRED),
      branch_index_buffer_index_(branch_index_buffer_index),
      branch_operand_buffer_indexes_(branch_operand_buffer_indexes.begin(),
                                     branch_operand_buffer_indexes.end()) {
  // Pass nullptr as the HloInstruction* to the branch_thunks_
  // constructors because these SequentialThunks are logically 'part of'
  // this ConditionalThunk, and shouldn't be profiled separately from it.
  branch_thunks_.reserve(branch_thunk_sequences.size());
  for (auto& branch_thunk_sequence : branch_thunk_sequences) {
    branch_thunks_.emplace_back(
        new SequentialThunk(std::move(branch_thunk_sequence), nullptr));
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Gets the set of devices that have a NCCL channel open.  This is primarily
  // for testing.
  //
  // (Indeed, because the NCCL channels are a global variable, in the real
  // world, the value returned here is stale as soon as you read it, so it's not
  // clear how you *could* use it for anything other than tests.)
  static absl::flat_hash_set<int> DevicesWithOpenNcclChannels();
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    Status SequentialThunk::ExecuteOnStream(const ExecuteParams& params) {
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  for (const auto& thunk : thunks_) {
    TF_RETURN_IF_ERROR(thunk->ExecuteOnStream(params));
  }
  return Status::OK();
}
    
    #ifndef CHROME_BROWSER_PROCESS_SINGLETON_H_
#define CHROME_BROWSER_PROCESS_SINGLETON_H_
    
    
    {  // Time to take action. Kill the browser process.
  process.Terminate(content::RESULT_CODE_HUNG, true);
  remote_window_ = NULL;
  return PROCESS_NONE;
}
    
      // Parsers reject out-of-bound integer values.
  ExpectParseFailure('Int32FieldTooLarge', REQUIRED,
                     'optional_int32: 2147483648');
  ExpectParseFailure('Int32FieldTooSmall', REQUIRED,
                     'optional_int32: -2147483649');
  ExpectParseFailure('Uint32FieldTooLarge', REQUIRED,
                     'optional_uint32: 4294967296');
  ExpectParseFailure('Int64FieldTooLarge', REQUIRED,
                     'optional_int64: 9223372036854775808');
  ExpectParseFailure('Int64FieldTooSmall', REQUIRED,
                     'optional_int64: -9223372036854775809');
  ExpectParseFailure('Uint64FieldTooLarge', REQUIRED,
                     'optional_uint64: 18446744073709551616');
    
    namespace python {
    }
    
    // Accesses messages in the container.
//
// Returns a new reference to the message for an integer parameter.
// Returns a new reference to a list of messages for a slice.
PyObject* Subscript(RepeatedCompositeContainer* self, PyObject* slice);
    
    static PyObject* GetFieldNumber(PyUnknownFieldRef* self, void *closure) {
  const UnknownField* unknown_field = GetUnknownField(self);
  if (unknown_field == NULL) {
    return NULL;
  }
  return PyInt_FromLong(unknown_field->number());
}
    
    template <typename T, bool use_arena>
void TestParseCorruptedString(const T& message) {
  int success_count = 0;
  std::string s;
  {
    // Map order is not deterministic. To make the test deterministic we want
    // to serialize the proto deterministically.
    io::StringOutputStream output(&s);
    io::CodedOutputStream out(&output);
    out.SetSerializationDeterministic(true);
    message.SerializePartialToCodedStream(&out);
  }
  const int kMaxIters = 900;
  const int stride = s.size() <= kMaxIters ? 1 : s.size() / kMaxIters;
  const int start = stride == 1 || use_arena ? 0 : (stride + 1) / 2;
  for (int i = start; i < s.size(); i += stride) {
    for (int c = 1 + (i % 17); c < 256; c += 2 * c + (i & 3)) {
      s[i] ^= c;
      Arena arena;
      T* message = Arena::CreateMessage<T>(use_arena ? &arena : nullptr);
      if (message->ParseFromString(s)) {
        ++success_count;
      }
      if (!use_arena) {
        delete message;
      }
      s[i] ^= c;  // Restore s to its original state.
    }
  }
  // This next line is a low bar.  But getting through the test without crashing
  // due to use-after-free or other bugs is a big part of what we're checking.
  GOOGLE_CHECK_GT(success_count, 0);
}
    
    TEST(GENERATED_MESSAGE_TEST_NAME, TestConflictingSymbolNames) {
  // test_bad_identifiers.proto successfully compiled, then it works.  The
  // following is just a token usage to insure that the code is, in fact,
  // being compiled and linked.
    }
    
    #include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/java/java_options.h>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
    
    
    {}  // namespace leveldb
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    int main(int argc, char** argv) { return leveldb::test::RunAllTests(); }

    
      // Release the lock acquired by a previous successful call to LockFile.
  // REQUIRES: lock was returned by a successful LockFile() call
  // REQUIRES: lock has not already been unlocked.
  virtual Status UnlockFile(FileLock* lock) = 0;
    
    std::string Key2(int i) { return Key1(i) + '_xxx'; }
    
    // Thinly wraps std::condition_variable.
class CondVar {
 public:
  explicit CondVar(Mutex* mu) : mu_(mu) { assert(mu != nullptr); }
  ~CondVar() = default;
    }
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    // A internal wrapper class with an interface similar to Iterator that
// caches the valid() and key() results for an underlying iterator.
// This can help avoid virtual function calls and also gives better
// cache locality.
class IteratorWrapper {
 public:
  IteratorWrapper() : iter_(nullptr), valid_(false) {}
  explicit IteratorWrapper(Iterator* iter) : iter_(nullptr) { Set(iter); }
  ~IteratorWrapper() { delete iter_; }
  Iterator* iter() const { return iter_; }
    }
    
    // Return a new two level iterator.  A two-level iterator contains an
// index iterator whose values point to a sequence of blocks where
// each block is itself a sequence of key,value pairs.  The returned
// two-level iterator yields the concatenation of all key/value pairs
// in the sequence of blocks.  Takes ownership of 'index_iter' and
// will delete it when no longer needed.
//
// Uses a supplied function to convert an index_iter value into
// an iterator over the contents of the corresponding block.
Iterator* NewTwoLevelIterator(
    Iterator* index_iter,
    Iterator* (*block_function)(void* arg, const ReadOptions& options,
                                const Slice& index_value),
    void* arg, const ReadOptions& options);
    
    // WARNING: IDC_SIGN is a special unary op but still this doesn't catch this. Caller has to be aware
// of it and catch it themselves or not needing this
bool IsUnaryOpCode(OpCode opCode)
{
    return IsOpInRange(opCode, IDC_UNARYFIRST, IDC_UNARYLAST);
}
    
                    uint64_t w64Bits = result.ToUInt64_t();
                uint64_t lsb = ((w64Bits & 0x01) == 1) ? 1 : 0;
                w64Bits >>= 1; // RShift by 1
                w64Bits |= (lsb << (m_dwWordBitWidth - 1));
    
    #include 'Header Files/CalcEngine.h'
    
    void ascalerat(_Inout_ PRAT* pa, ANGLE_TYPE angletype, int32_t precision)
{
    switch (angletype)
    {
    case ANGLE_RAD:
        break;
    case ANGLE_DEG:
        divrat(pa, two_pi, precision);
        mulrat(pa, rat_360, precision);
        break;
    case ANGLE_GRAD:
        divrat(pa, two_pi, precision);
        mulrat(pa, rat_400, precision);
        break;
    }
}
    
        a = *pa;
    pgcd = gcd(a->pp, a->pq);
    
    //---------------------------------------------------------------------------
//
//  FUNCTION: rat_gt
//
//  ARGUMENTS:  PRAT a and PRAT b
//
//  RETURN: true if a is greater than b
//
//
//---------------------------------------------------------------------------