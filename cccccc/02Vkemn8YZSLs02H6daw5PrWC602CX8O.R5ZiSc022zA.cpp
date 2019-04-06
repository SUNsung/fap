
        
          void AddDocStringArgs();
  void AddDocStringInputs();
  void AddDocStringAttrs();
  void AddDocStringNameArg();
  void AddOutputGlobals();
  void AddDocStringOutputs();
  void AddBody(const string& prefix);
  void AddBodyNoReturn(const string& apply_prefix);
  void AddExport();
    
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
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_

    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Acquire the per-Entry mutex without holding the map mutex. Initializing
  // an Executor may be expensive, so we want to allow concurrent
  // initialization of different entries.
  mutex_lock lock{entry->configurations_mutex};
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache';
      return iter.second.get();
    }
  }
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    
// Death tests do not work on Windows as of yet.
#ifdef PROTOBUF_HAS_DEATH_TEST
TEST(ObjCHelperDeathTest, TextFormatDecodeData_Failures) {
  TextFormatDecodeData decode_data;
    }
    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    class GoGoProtoGenerator : public CodeGenerator {
 public:
  virtual bool GenerateAll(const std::vector<const FileDescriptor*>& files,
                           const string& parameter,
                           GeneratorContext* context,
                           string* error) const {
    for (int i = 0; i < files.size(); i++) {
      for (auto file : files) {
        bool can_generate =
            (new_pool_.FindFileByName(file->name()) == nullptr);
        for (int j = 0; j < file->dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->public_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->public_dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->weak_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->weak_dependency(j)->name()) != nullptr);
        }
        if (can_generate) {
          Generate(file, parameter, context, error);
          break;
        }
      }
    }
    }
    }
    
    
    {
    {    return true;
  }
 private:
  bool CanGenerate(const FileDescriptor* file) const {
    if (GetPool()->FindFileByName(file->name()) != nullptr) {
      return false;
    }
    for (int j = 0; j < file->dependency_count(); j++) {
      if (GetPool()->FindFileByName(file->dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->public_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->public_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->weak_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->weak_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    return true;
  }
};
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
     protected:
  virtual void InternalThreadEntry();
  virtual void load_batch(Batch<Dtype>* batch) = 0;
    
    namespace caffe {
    }
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
                           const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
                            const vector<bool>& propagate_down,
                            const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensors,
    MergeSingleListFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with list features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(4)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values', '.values')
    .Input(2, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
    
    Each feature has fixed lengths which are passed as lengths argument and a
separate tensor will be produced for each feature.
i.e. DATA.dim(1) = len(lengths) = NumOuptuts.
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/utils/math.h'
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    
    {}  // namespace tesseract.
    
      // Returns the average sum of squared perpendicular error from a line
  // through mean_point() in the direction dir.
  double rms_orth(const FCOORD &dir) const;
    
        char display_char() {
      if (perm_rejected ())
        return MAP_REJECT_PERM;
      else if (accept_if_good_quality ())
        return MAP_REJECT_POTENTIAL;
      else if (rejected ())
        return MAP_REJECT_TEMP;
      else
        return MAP_ACCEPT;
    }
    
      // Add entry to the heap, keeping the smallest item at the top, by operator<.
  // Note that *entry is used as the source of operator=, but it is non-const
  // to allow for a smart pointer to be contained within.
  // Time = O(log n).
  void Push(Pair* entry) {
    int hole_index = heap_.size();
    // Make a hole in the end of heap_ and sift it up to be the correct
    // location for the new *entry. To avoid needing a default constructor
    // for primitive types, and to allow for use of DoublePtr in the Pair
    // somewhere, we have to incur a double copy here.
    heap_.push_back(*entry);
    *entry = heap_.back();
    hole_index = SiftUp(hole_index, *entry);
    heap_[hole_index] = *entry;
  }
    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
      fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
    
    
    {
    {
    {      default: {
        char buf[40];
        snprintf(buf, sizeof(buf), 'unknown record type %u', record_type);
        ReportCorruption(
            (fragment.size() + (in_fragmented_record ? scratch->size() : 0)),
            buf);
        in_fragmented_record = false;
        scratch->clear();
        break;
      }
    }
  }
  return false;
}
    
      // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2
  };
    
        SequenceNumber max_sequence = 0;
    for (size_t i = 0; i < tables_.size(); i++) {
      if (max_sequence < tables_[i].max_sequence) {
        max_sequence = tables_[i].max_sequence;
      }
    }
    
      SequenceNumber sequence_number() const { return sequence_number_; }
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
          case kCompactPointer:
        if (GetLevel(&input, &level) &&
            GetInternalKey(&input, &key)) {
          compact_pointers_.push_back(std::make_pair(level, key));
        } else {
          msg = 'compaction pointer';
        }
        break;
    
      VersionSet* vset_;            // VersionSet to which this Version belongs
  Version* next_;               // Next version in linked list
  Version* prev_;               // Previous version in linked list
  int refs_;                    // Number of live refs to this version
    
    
    {}
    
      inline const char* regname(RegXMM r) {
    RNAME(f0);  RNAME(f1);  RNAME(f2);  RNAME(f3);  RNAME(f4);  RNAME(f5);
    RNAME(f6);  RNAME(f7);  RNAME(f8);  RNAME(f9);  RNAME(f10); RNAME(f11);
    RNAME(f12); RNAME(f13); RNAME(f14); RNAME(f15);
    }
    
    Object APCCollection::createObject() const {
  if (m_arrayHandle->isTypedValue()) {
    Variant local(m_arrayHandle->toLocal());
    assertx(local.isArray());
    return Object::attach(
      collections::alloc(m_colType, local.getArrayData())
    );
  }
    }
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    #include <vector>
#include <string>
#include <memory>
    
    #include 'common.h'
    
    #include <algorithm>
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
    
    {  void setTokenTracker(DHTTokenTracker* tokenTracker);
};