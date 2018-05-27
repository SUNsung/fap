
        
        TEST(PartialRunMgrFindOrCreate, Create) {
  // Basic test of PartialRunMgr CancellationManager creation.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  EXPECT_TRUE(cancellation_manager != nullptr);
}
    
    
    {}  // namespace xla
    
    namespace tensorflow {
    }
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::psub(one, internal::pmul(y, y));
  }
};
    
      ~SYCLDeviceContext() override {}
    
    REGISTER_KERNEL_BUILDER(Name('TFRecordReader').Device(DEVICE_CPU),
                        TFRecordReaderOp);
REGISTER_KERNEL_BUILDER(Name('TFRecordReaderV2').Device(DEVICE_CPU),
                        TFRecordReaderOp);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #ifdef TENSORFLOW_USE_MPI
    
    Status RealGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      FDH::Const('zero', 0.f),
      {{'dx'}, 'Complex', {'dy', 'zero'}},
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Real', RealGrad);
    
      ::grpc::Status SendEvents(
      ::grpc::ServerContext* context,
      ::grpc::ServerReaderWriter< ::tensorflow::EventReply,
                                  ::tensorflow::Event>* stream);
    
    #include 'db/filename.h'
#include 'db/dbformat.h'
#include 'db/table_cache.h'
#include 'db/version_edit.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
    
    #include <stdlib.h>
#include <unistd.h>
#include 'leveldb/cache.h'
#include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/write_batch.h'
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    
    {  // Changes *key to a short string >= *key.
  // Simple comparator implementations may return with *key unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortSuccessor(std::string* key) const = 0;
};
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_

    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    
    {}  // namespace leveldb
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));