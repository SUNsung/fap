
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    namespace xla {
    }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    
    { private:
  Env* const env_;
  uint64 offset_;
  std::unique_ptr<RandomAccessFile> file_;
  std::unique_ptr<io::RecordReader> reader_;
  string compression_type_ = '';
};
    
    
    {  DynamicStitchKernel<T>
      <<<config.block_count, config.thread_per_block, 0, gpu_device.stream()>>>(
          slice_size, output_size, input_indices, input_ptrs, output);
}
    
    
    {  stats->how_many_false_positives = 0;
  stats->how_many_correct_words = 0;
  stats->how_many_wrong_words = 0;
  std::unordered_set<int64> has_ground_truth_been_matched;
  for (const std::pair<string, int64>& found_word : found_words) {
    const string& found_label = found_word.first;
    const int64 found_time = found_word.second;
    const int64 earliest_time = found_time - time_tolerance_ms;
    const int64 latest_time = found_time + time_tolerance_ms;
    bool has_match_been_found = false;
    for (const std::pair<string, int64>& ground_truth : ground_truth_list) {
      const int64 ground_truth_time = ground_truth.second;
      if ((ground_truth_time > latest_time) ||
          (ground_truth_time > latest_possible_time)) {
        break;
      }
      if (ground_truth_time < earliest_time) {
        continue;
      }
      const string& ground_truth_label = ground_truth.first;
      if ((ground_truth_label == found_label) &&
          (has_ground_truth_been_matched.count(ground_truth_time) == 0)) {
        ++stats->how_many_correct_words;
      } else {
        ++stats->how_many_wrong_words;
      }
      has_ground_truth_been_matched.insert(ground_truth_time);
      has_match_been_found = true;
      break;
    }
    if (!has_match_been_found) {
      ++stats->how_many_false_positives;
    }
  }
  stats->how_many_ground_truth_matched = has_ground_truth_been_matched.size();
}
    
    
    {  std::vector<std::pair<string, int64>> ground_truth;
  TF_ASSERT_OK(ReadGroundTruthFile(file_name, &ground_truth));
  ASSERT_EQ(2, ground_truth.size());
  EXPECT_EQ('a', ground_truth[0].first);
  EXPECT_EQ(10, ground_truth[0].second);
  EXPECT_EQ('b', ground_truth[1].first);
  EXPECT_EQ(12, ground_truth[1].second);
}
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    
namespace nwapi {
    }
    
    Menu::~Menu() {
  Destroy();
}
    
     private:
  ObjectManager* object_manager_;
    
      GdkRectangle screen_rect;
  gdk_screen_get_monitor_geometry(screen, monitor, &screen_rect);
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    bool NwShellOpenExternalFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'OpenExternal', *args_);
  return true;
}
    
    /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
    leveldb_iterator_t* leveldb_create_iterator(
    leveldb_t* db,
    const leveldb_readoptions_t* options) {
  leveldb_iterator_t* result = new leveldb_iterator_t;
  result->rep = db->rep->NewIterator(options->rep);
  return result;
}
    
      inline void ClearSavedValue() {
    if (saved_value_.capacity() > 1048576) {
      std::string empty;
      swap(empty, saved_value_);
    } else {
      saved_value_.clear();
    }
  }
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
    
    {  ASSERT_TRUE(! Overlaps(NULL, 'j'));
  ASSERT_TRUE(! Overlaps('r', NULL));
  ASSERT_TRUE(Overlaps(NULL, 'p'));
  ASSERT_TRUE(Overlaps(NULL, 'p1'));
  ASSERT_TRUE(Overlaps('q', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
}
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
      void PrintWarnings() {
#if defined(__GNUC__) && !defined(__OPTIMIZE__)
    fprintf(stdout,
            'WARNING: Optimization is disabled: benchmarks unnecessarily slow\n'
            );
#endif
#ifndef NDEBUG
    fprintf(stdout,
            'WARNING: Assertions are enabled; benchmarks unnecessarily slow\n');
#endif
  }
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    #include 'test/cpp/qps/report.h'
    
    #include <chrono>
#include <thread>
#include <vector>
    
    
    {  bool failed_ = false;
  std::string db_;
  size_t current_ = 0;
  const std::string location_ = '\'location\':';
  const std::string latitude_ = '\'latitude\':';
  const std::string longitude_ = '\'longitude\':';
  const std::string name_ = '\'name\':';
};
    
    namespace grpc_node_generator {
    }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
      PrivateGenerator(const GeneratorConfiguration& config,
                   const grpc_generator::File* file);
    
    class CodegenTestMinimal : public ::testing::Test {};
    
    // configuration parameters associated with RMSProp learning algorithm
struct RMSPropInfo
{
    double gamma;
    double inc;
    double dec;
    double max;
    double min;
    }
    
    // Section - Describes a section of the file
// This class keeps track of the current mapping of the memory mapped file
// It also wraps the headers and creates an easier way to navagate the section tree
class Section
{
protected:
    SectionFile* m_file;            // file we belong to
    Section* m_parent;              // parent pointer
    SectionHeader* m_sectionHeader; // always mapped valid header
    size_t m_filePosition;          // filePosition of the header (section)
    MappingType m_mappingType;      // type of mapping we desire for this section
    size_t m_mappedSize;            // size of the current mapping (if parent mapped, size from the beginning of this header)
    void* m_elementBuffer;          // pointer to the beginning of the buffer, may not be mapped for mappingElementWindow mappingType
    }
    
    GPUDataTransferer::GPUDataTransferer(int deviceId, bool useConcurrentStreams) 
{
#pragma warning(disable : 4127)
    if (useConcurrentStreams && (s_fetchStream == NULL))
    {
        cudaStreamCreateWithFlags(&s_fetchStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
        cudaStreamCreateWithFlags(&s_assignStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
    }
    }
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
    template <class _T>
class const_array_ref
{
    const _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
    template <typename ElemType>
class CNTKEvalBase : public IEvaluateModelBase<ElemType>
{
protected:
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    ConfigParameters m_config;
    ComputationNetworkPtr m_net;
    }
    
    #define streqi(a, b) (_wcsicmp((a), (b)) == 0)
    
    std::string stringFromCFString(const CFStringRef& cf_string) {
  // Access, then convert the CFString. CFStringGetCStringPtr is less-safe.
  CFIndex length = CFStringGetLength(cf_string);
  char* buffer = (char*)malloc(length + 1);
  if (buffer == nullptr) {
    return '';
  }
    }
    
    
    {  EXPECT_EQ(flag_info.type, 'string');
  EXPECT_EQ(flag_info.description, 'TEST DESCRIPTION');
  EXPECT_EQ(flag_info.default_value, 'TEST STRING');
  EXPECT_EQ(flag_info.value, 'NEW TEST STRING');
  EXPECT_EQ(flag_info.detail.shell, false);
  EXPECT_EQ(flag_info.detail.external, false);
}
    
    namespace osquery {
    }
    
    enum SCNetworkSubscriptionType {
  ADDRESS_TARGET = 0,
  NAME_TARGET = 1,
};