
        
        class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
    
    {    Lock& lock;
    Lock templock;
};
    
    static int secp256k1_ge_set_xo_var(secp256k1_ge *r, const secp256k1_fe *x, int odd) {
    if (!secp256k1_ge_set_xquad(r, x)) {
        return 0;
    }
    secp256k1_fe_normalize_var(&r->y);
    if (secp256k1_fe_is_odd(&r->y) != odd) {
        secp256k1_fe_negate(&r->y, &r->y, 1);
    }
    return 1;
    }
    
    #endif /* SECP256K1_HASH_IMPL_H */

    
    BOOST_AUTO_TEST_SUITE_END()

    
        BOOST_CHECK(v.setNumStr('-688'));
    BOOST_CHECK(v.isNum());
    BOOST_CHECK_EQUAL(v.getValStr(), '-688');
    
    
    {    input[4] = ReadLE32(k + 0);
    input[5] = ReadLE32(k + 4);
    input[6] = ReadLE32(k + 8);
    input[7] = ReadLE32(k + 12);
    if (keylen == 32) { /* recommended */
        k += 16;
        constants = sigma;
    } else { /* keylen == 16 */
        constants = tau;
    }
    input[8] = ReadLE32(k + 0);
    input[9] = ReadLE32(k + 4);
    input[10] = ReadLE32(k + 8);
    input[11] = ReadLE32(k + 12);
    input[0] = ReadLE32(constants + 0);
    input[1] = ReadLE32(constants + 4);
    input[2] = ReadLE32(constants + 8);
    input[3] = ReadLE32(constants + 12);
    input[12] = 0;
    input[13] = 0;
    input[14] = 0;
    input[15] = 0;
}
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
    // Verify that ByteSink is subclassable and Flush() overridable.
class FlushingByteSink : public StringByteSink {
 public:
  explicit FlushingByteSink(string* dest) : StringByteSink(dest) {}
  virtual void Flush() { Append('z', 1); }
 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FlushingByteSink);
};
    
    TEST(StatusOr, TestValue) {
  const int kI = 4;
  StatusOr<int> thing(kI);
  EXPECT_EQ(kI, thing.ValueOrDie());
}
    
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
    
    
    {}  // namespace grpc
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    
    {   private:
    DynamicThreadPool* pool_;
    grpc_core::Thread thd_;
    void ThreadFunc();
  };
  std::mutex mu_;
  std::condition_variable cv_;
  std::condition_variable shutdown_cv_;
  bool shutdown_;
  std::queue<std::function<void()>> callbacks_;
  int reserve_threads_;
  int nthreads_;
  int threads_waiting_;
  std::list<DynamicThread*> dead_threads_;
    
    #include <grpc/support/log.h>
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
      std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    
    {}  // namespace leveldb
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
    namespace leveldb {
namespace log {
    }
    }
    
     private:
  friend class SnapshotList;
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == nullptr) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = nullptr;
    Table* table = nullptr;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(options_, file, file_size, &table);
    }
    }
    }
    
                    // Sequence dynamic axes are 'Ordered' as opposed to the batch axis which is unordered.
                bool hasSequenceAxis = (std::find_if(sampleDynamicAxes.begin(), sampleDynamicAxes.end(), [](const Axis& axis) {return axis.IsOrdered(); }) != sampleDynamicAxes.end());
                if (hasSequenceAxis)
                    unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumTimeSteps() });
                else if ((packedDataLayout->GetNumTimeSteps() != 1) || packedDataLayout->HasSequenceBeyondBegin())
                    LogicError('A PackedValue object with no sequence dynamic axis, must have a layout with exactly one time step and no sequences beginning in the past.');
    
    // some older code uses this namespace
namespace DebugUtil
{
    void PrintCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
    }
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::PackSequencesForCuDNN(const Matrix<ElemType>& src, Matrix<ElemType>& dst, vector<size_t>& numSequencesForFrame2)
{
    MBLayoutPtr mb = this->GetMBLayout();
    if (mb->HasSequenceBeyondBegin())
        RuntimeError('Invalid MBLayout: Only whole-utterance processing is supported');
#if 0
    BUGBUG: Disable this check to mask a problem with the way EvalReader creates segments.
    if (mb->HasSequenceBeyondEnd())
        RuntimeError('Invalid MBLayout: Only whole-utterance processing is supported');
#endif
    }
    
        ListNode* curNode = head;
    while(curNode != NULL){
        cout << curNode->val;
        if(curNode->next != NULL)
            cout << ' -> ';
        curNode = curNode->next;
    }
    
        deleteLinkedList(head);
    
    
#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
    
    int main() {
    }
    
    
    {
    {
    {        }
        return res;
    }
};
    
            stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
    }
    
    
    {            res[level].push_back(node->val);
            if(node->left)
                q.push(make_pair(node->left, level + 1 ));
            if(node->right)
                q.push(make_pair(node->right, level + 1 ));
        }
    
    using namespace std;
    
    
    
    class DB;
    
      virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    // Take a default ColumnFamilyOptions 'base_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// ColumnFamilyOptions 'new_options'.
//
// Below are the instructions of how to config some non-primitive-typed
// options in ColumnFOptions:
//
// * table_factory:
//   table_factory can be configured using our custom nested-option syntax.
//
//   {option_a=value_a; option_b=value_b; option_c=value_c; ... }
//
//   A nested option is enclosed by two curly braces, within which there are
//   multiple option assignments.  Each assignment is of the form
//   'variable_name=value;'.
//
//   Currently we support the following types of TableFactory:
//   - BlockBasedTableFactory:
//     Use name 'block_based_table_factory' to initialize table_factory with
//     BlockBasedTableFactory.  Its BlockBasedTableFactoryOptions can be
//     configured using the nested-option syntax.
//     [Example]:
//     * {'block_based_table_factory', '{block_cache=1M;block_size=4k;}'}
//       is equivalent to assigning table_factory with a BlockBasedTableFactory
//       that has 1M LRU block-cache with block size equals to 4k:
//         ColumnFamilyOptions cf_opt;
//         BlockBasedTableOptions blk_opt;
//         blk_opt.block_cache = NewLRUCache(1 * 1024 * 1024);
//         blk_opt.block_size = 4 * 1024;
//         cf_opt.table_factory.reset(NewBlockBasedTableFactory(blk_opt));
//   - PlainTableFactory:
//     Use name 'plain_table_factory' to initialize table_factory with
//     PlainTableFactory.  Its PlainTableFactoryOptions can be configured using
//     the nested-option syntax.
//     [Example]:
//     * {'plain_table_factory', '{user_key_len=66;bloom_bits_per_key=20;}'}
//
// * memtable_factory:
//   Use 'memtable' to config memtable_factory.  Here are the supported
//   memtable factories:
//   - SkipList:
//     Pass 'skip_list:<lookahead>' to config memtable to use SkipList,
//     or simply 'skip_list' to use the default SkipList.
//     [Example]:
//     * {'memtable', 'skip_list:5'} is equivalent to setting
//       memtable to SkipListFactory(5).
//   - PrefixHash:
//     Pass 'prfix_hash:<hash_bucket_count>' to config memtable
//     to use PrefixHash, or simply 'prefix_hash' to use the default
//     PrefixHash.
//     [Example]:
//     * {'memtable', 'prefix_hash:1000'} is equivalent to setting
//       memtable to NewHashSkipListRepFactory(hash_bucket_count).
//   - HashLinkedList:
//     Pass 'hash_linkedlist:<hash_bucket_count>' to config memtable
//     to use HashLinkedList, or simply 'hash_linkedlist' to use the default
//     HashLinkedList.
//     [Example]:
//     * {'memtable', 'hash_linkedlist:1000'} is equivalent to
//       setting memtable to NewHashLinkListRepFactory(1000).
//   - VectorRepFactory:
//     Pass 'vector:<count>' to config memtable to use VectorRepFactory,
//     or simply 'vector' to use the default Vector memtable.
//     [Example]:
//     * {'memtable', 'vector:1024'} is equivalent to setting memtable
//       to VectorRepFactory(1024).
//   - HashCuckooRepFactory:
//     Pass 'cuckoo:<write_buffer_size>' to use HashCuckooRepFactory with the
//     specified write buffer size, or simply 'cuckoo' to use the default
//     HashCuckooRepFactory.
//     [Example]:
//     * {'memtable', 'cuckoo:1024'} is equivalent to setting memtable
//       to NewHashCuckooRepFactory(1024).
//
//  * compression_opts:
//    Use 'compression_opts' to config compression_opts.  The value format
//    is of the form '<window_bits>:<level>:<strategy>:<max_dict_bytes>'.
//    [Example]:
//    * {'compression_opts', '4:5:6:7'} is equivalent to setting:
//        ColumnFamilyOptions cf_opt;
//        cf_opt.compression_opts.window_bits = 4;
//        cf_opt.compression_opts.level = 5;
//        cf_opt.compression_opts.strategy = 6;
//        cf_opt.compression_opts.max_dict_bytes = 7;
//
// @param base_options the default options of the output 'new_options'.
// @param opts_map an option name to value map for specifying how 'new_options'
//     should be set.
// @param new_options the resulting options based on 'base_options' with the
//     change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_options' will be set to 'base_options'.
Status GetColumnFamilyOptionsFromMap(
    const ColumnFamilyOptions& base_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    ColumnFamilyOptions* new_options, bool input_strings_escaped = false,
    bool ignore_unknown_options = false);
    
      // Obtain the name of an operation given its type.
  static const std::string& GetOperationName(OperationType op_type);
    
    
    {};
    
    private:
  State state_;
  std::string message_;
    
        Size winSize = Director::getInstance()->getWinSize();
    _fullScreenSize.set(winSize.width, winSize.height);
    _halfScreenSize = _fullScreenSize * 0.5f;
    _offsetX=xOffset;
    _offsetY=yOffset;
    _halfScreenSize.x += _offsetX;
    _halfScreenSize.y += _offsetY;
    
    if (_boundarySet)
    {
        _leftBoundary = -((rect.origin.x+rect.size.width) - _fullScreenSize.x);
        _rightBoundary = -rect.origin.x ;
        _topBoundary = -rect.origin.y;
        _bottomBoundary = -((rect.origin.y+rect.size.height) - _fullScreenSize.y);
    }
    
        /** Creates an action with a Cardinal Spline array of points and tension.
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var t,var table)
     * In lua: local create(local t, local table)
     * @endcode
     */
    static CardinalSplineTo* create(float duration, PointArray* points, float tension);
    /**
     * @js NA
     * @lua NA
     */
    virtual ~CardinalSplineTo();
    /**
     * @js ctor
     * @lua NA
     */
    CardinalSplineTo();
    
    
    {// end of actions group
/// @}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
    
        /**
     * set the data to be a pointer to a number of Quads
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad quads
     */
    void setQuads(V3F_C4B_T2F_Quad *quads, int numberOfQuads);