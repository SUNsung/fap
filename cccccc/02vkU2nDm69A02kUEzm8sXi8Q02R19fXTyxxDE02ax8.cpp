
        
        
    {}  // namespace mate

    
    void WrappableBase::InitWith(v8::Isolate* isolate,
                             v8::Local<v8::Object> wrapper) {
  CHECK(wrapper_.IsEmpty());
  isolate_ = isolate;
  wrapper->SetAlignedPointerInInternalField(0, this);
  wrapper_.Reset(isolate, wrapper);
  wrapper_.SetWeak(this, FirstWeakCallback, v8::WeakCallbackType::kParameter);
    }
    
    template <>
struct Converter<PersistentDictionary> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     PersistentDictionary* out);
};
    
    #if defined(OS_POSIX) && !defined(OS_ANDROID)
  static void DisablePromptForTesting();
#endif
#if defined(OS_WIN)
  // Called to query whether to kill a hung browser process that has visible
  // windows. Return true to allow killing the hung process.
  using ShouldKillRemoteProcessCallback = base::RepeatingCallback<bool()>;
  void OverrideShouldKillRemoteProcessCallbackForTesting(
      const ShouldKillRemoteProcessCallback& display_dialog_callback);
#endif
    
    namespace {
    }
    
      // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    static int GcClear(PyObject* pself) {
  PyDescriptorPool* self = reinterpret_cast<PyDescriptorPool*>(pself);
  Py_CLEAR(self->py_message_factory);
  return 0;
}
    
    TEST_F(DefaultFieldComparatorTest, Int64Comparison) {
  const FieldDescriptor* field = descriptor_->FindFieldByName('optional_int64');
  message_1_.set_optional_int64(1L);
  message_2_.set_optional_int64(1L);
    }
    
    TEST_F(ComparisonTest, MapTest) {
  Map<string, std::string>& map1 = *map_proto1_.mutable_map_string_string();
  map1['key1'] = '1';
  map1['key2'] = '2';
  map1['key3'] = '3';
  Map<string, std::string>& map2 = *map_proto2_.mutable_map_string_string();
  map2['key3'] = '0';
  map2['key2'] = '2';
  map2['key1'] = '1';
    }
    
    TEST(MovableMessageTest, Noexcept) {
  EXPECT_TRUE(
      std::is_nothrow_move_constructible<protobuf_unittest::TestAllTypes>());
  EXPECT_TRUE(std::is_nothrow_move_assignable<protobuf_unittest::TestAllTypes>());
}
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    
    {  {
    string str;
    StringByteSink sink(&str);
    source.CopyTo(&sink, source.Available());
    EXPECT_EQ('world!', str);
    EXPECT_EQ(0, source.Available());
  }
}
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace util {
    }
    }
    }
    
    #include <fstream>
    
      // Backwards compatible constrained fit with a supplied gradient.
  // Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
  // to avoid potential difficulties with infinite gradients.
  double ConstrainedFit(double m, float* c);
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
    // Initialize the table to the given size of feature space.
void IntFeatureDist::Init(const IntFeatureMap* feature_map) {
  size_ = feature_map->sparse_size();
  Clear();
  feature_map_ = feature_map;
  features_ = new bool[size_];
  features_delta_one_ = new bool[size_];
  features_delta_two_ = new bool[size_];
  memset(features_, false, size_ * sizeof(features_[0]));
  memset(features_delta_one_, false, size_ * sizeof(features_delta_one_[0]));
  memset(features_delta_two_, false, size_ * sizeof(features_delta_two_[0]));
  total_feature_weight_ = 0.0;
}
    
    namespace mongo {
    }
    
            /**
         * If an owner of a std::unique_ptr<PlanExecutor, PlanExecutor::Deleter> wants to assume
         * responsibility for calling PlanExecutor::dispose(), they can call dismissDisposal(). If
         * dismissed, a Deleter will not call dispose() when deleting the PlanExecutor.
         */
        void dismissDisposal() {
            _dismissed = true;
        }
    
    TEST_F(ExtensionsCallbackRealTest, TextNoIndex) {
    BSONObj query = fromjson('{$text: {$search:\'awesome\'}}');
    ASSERT_THROWS_CODE(StatusWithMatchExpression(
                           ExtensionsCallbackReal(&_opCtx, &_nss).parseText(query.firstElement())),
                       AssertionException,
                       ErrorCodes::IndexNotFound);
}
    
    
    {
    {        // finish counting
        while (PlanStage::IS_EOF != countState) {
            countState = count.work(&wsid);
            if (PlanStage::ADVANCED == countState)
                numCounted++;
        }
        ASSERT_EQUALS(4, numCounted);
    }
};
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    #endif // __SCRIPTSET_H__

    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    using namespace std;
using namespace Microsoft::MSR;
using namespace Microsoft::MSR::CNTK;
    
    
// ----------------------------------------------------------------------------
// Basic interface
// ----------------------------------------------------------------------------
    
            void OnEpochStart()
        {
            m_Timer.Restart(); 
            m_numSyncPerformedInCurrentEpoch = 0; 
            m_accumulatedSecondsOnSyncPointInOneEpoch = 0;
            m_syncPointHitCounterInOneEpoch = 0;
        }
        void OnEpochEnd()
        {
            m_Timer.Stop();
        }
        void OnMAPerformed(size_t localSamplesProcessedSinceLastSync, size_t totalSamplesProcessedSinceLastSync, float secondsOnCommunication)
        {
            m_numSyncPerformedInCurrentEpoch++;
            m_totalSamplesProcessedSinceLastReport += totalSamplesProcessedSinceLastSync; 
            m_localSamplesProcessedSinceLastReport += localSamplesProcessedSinceLastSync; 
            if ( m_reportFrequency > 0 && 
                ( m_numSyncPerformedInCurrentEpoch % m_reportFrequency == 0 || m_numSyncPerformedInCurrentEpoch <=5 )
               )
                // reporting condition: 
                // 1. if m_reportFrequency == 0 , no reporting 
                // 2. if m_reportFrequence >0   , report MA perf Stats every m_reportFrequency model aggregation are performed 
                //                                and the first 5 perf stats within each epoch is always reported 
            {
                ReportMAPerfStats(m_totalSamplesProcessedSinceLastReport, 
                                  m_localSamplesProcessedSinceLastReport, 
                                  secondsOnCommunication );
    }
    }
    
    /*
 * Class:     org_rocksdb_CompactionOptionsFIFO
 * Method:    allowCompaction
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_CompactionOptionsFIFO_allowCompaction(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsFIFO*>(jhandle);
  return static_cast<jboolean>(opt->allow_compaction);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setMinMergeWidth
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setMinMergeWidth(
    JNIEnv*, jobject, jlong jhandle, jint jmin_merge_width) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->min_merge_width = static_cast<unsigned int>(jmin_merge_width);
}
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    useDirectWrites
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_EnvOptions_useDirectWrites(
    JNIEnv*,  jobject, jlong jhandle) {
  return ENV_OPTIONS_GET(jhandle, use_direct_writes);
}
    
    /*
 * Class:     org_rocksdb_ReadOptions
 * Method:    setReadaheadSize
 * Signature: (JJ)V
 */
void Java_org_rocksdb_ReadOptions_setReadaheadSize(
    JNIEnv*, jobject, jlong jhandle, jlong jreadahead_size) {
  auto* opt = reinterpret_cast<rocksdb::ReadOptions*>(jhandle);
  opt->readahead_size = static_cast<size_t>(jreadahead_size);
}
    
    /*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getDeadlockInfoBuffer
 * Signature: (J)[Lorg/rocksdb/TransactionDB/DeadlockPath;
 */
jobjectArray Java_org_rocksdb_TransactionDB_getDeadlockInfoBuffer(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* txn_db = reinterpret_cast<rocksdb::TransactionDB*>(jhandle);
  const std::vector<rocksdb::DeadlockPath> deadlock_info_buffer =
      txn_db->GetDeadlockInfoBuffer();
    }
    
      auto* opt = reinterpret_cast<rocksdb::DBOptions*>(jopt_handle);
  std::vector<rocksdb::ColumnFamilyHandle*> handles;
  rocksdb::DBWithTTL* db = nullptr;
  rocksdb::Status s = rocksdb::DBWithTTL::Open(
      *opt, db_path, column_families, &handles, &db, ttl_values, jread_only);
    
    #endif  // V8_HEAP_STORE_BUFFER_INL_H_

    
    namespace v8 {
namespace internal {
    }
    }
    
    #ifndef V8_HEAP_STRESS_SCAVENGE_OBSERVER_H_
#define V8_HEAP_STRESS_SCAVENGE_OBSERVER_H_
    
        V8_INLINE void Push(Segment* segment) {
      base::MutexGuard guard(&lock_);
      segment->set_next(top_);
      set_top(segment);
    }
    
    
void Assembler::emit_code_relative_offset(Label* label) {
  if (label->is_bound()) {
    int32_t pos;
    pos = label->pos() + Code::kHeaderSize - kHeapObjectTag;
    emit(pos);
  } else {
    emit_disp(label, Displacement::CODE_RELATIVE);
  }
}
    
      union Value {
    Value() {}
    HeapObjectRequest heap_object_request;
    int immediate;
  } value_;
  bool is_heap_object_request_ = false;
  RelocInfo::Mode rmode_;
    
    inline Operand ContextOperand(Register context, int index) {
  return Operand(context, Context::SlotOffset(index));
}
    
    // The ExtraArg1Register not part of the real JS calling convention and is
// mostly there to simplify consistent interface descriptor definitions across
// platforms. Note that on ia32 it aliases kJavaScriptCallCodeStartRegister.
constexpr Register kJavaScriptCallExtraArg1Register = ecx;
    
    
    {      BIND(&if_rhsissmi);
    }
    
      Node* Generate_DivideWithFeedback(Node* context, Node* dividend,
                                    Node* divisor, Node* slot_id,
                                    Node* feedback_vector, bool rhs_is_smi);