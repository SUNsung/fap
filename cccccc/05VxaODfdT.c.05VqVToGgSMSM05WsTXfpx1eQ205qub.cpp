
        
        TEST(ArgMinOpTest, GetMinArgFloat) {
  ArgMinOpModel<int32_t> model({1, 1, 1, 4}, TensorType_FLOAT32,
                               TensorType_INT32, TensorType_INT32);
  model.PopulateTensor<float>(model.input(), {0.1, 0.9, 0.7, 0.3});
  // Currently only support the last dimension.
  model.PopulateTensor<int>(model.axis(), {3});
  model.Invoke();
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  // Run constant folding operations on the given module. Returns whether the
  // module was changed (constant expressions folded).
  StatusOr<bool> Run(HloModule* module) override;
};
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    Status status = input_buffer_->ReadLine(value);
    ++line_number_;
    if (status.ok()) {
      *key = strings::StrCat(current_work(), ':', line_number_);
      *produced = true;
      return status;
    }
    if (errors::IsOutOfRange(status)) {  // End of file, advance to the next.
      *at_end = true;
      return Status::OK();
    } else {  // Some other reading error
      return status;
    }
  }
    
    class SILDebuggerClient;
    
    
    {/// Extract comments parts from the given Markup node.
swift::markup::CommentParts
extractCommentParts(swift::markup::MarkupContext &MC,
                    swift::markup::MarkupASTNode *Node);
} // namespace swift
    
    inline SymbolPropertySet operator&(SymbolPropertySet SKSet, SymbolProperty SK) {
  return SKSet & (SymbolPropertySet)SK;
}
inline SymbolPropertySet operator|(SymbolPropertySet SKSet, SymbolProperty SK) {
  return SKSet | (SymbolPropertySet)SK;
}
inline SymbolPropertySet &operator|=(SymbolPropertySet &SKSet, SymbolProperty SK) {
  return SKSet = SKSet | SK;
}
    
    
    {} // namespace SourceKit
    
    // Tests that a unicharset that contains double-letter ligatures (eg ff) has
// no null char in the encoding at all.
TEST_F(UnicharcompressTest, DoesLigaturesWithDoubles) {
  LOG(INFO) << 'Testing por with ligatures';
  LoadUnicharset('por.unicharset');
  ExpectCorrect('por');
  // Check that any unichar-id that is encoded with multiple codes has the
  // correct encoded_nulll_char_ in between.
  for (int u = 0; u <= unicharset_.size(); ++u) {
    RecodedCharID code;
    int len = compressed_.EncodeUnichar(u, &code);
    if (len > 1) {
      // The should not be any null char in the code.
      for (int i = 0; i < len; ++i) {
        EXPECT_NE(encoded_null_char_, code(i));
      }
    }
  }
}
    
    // Collection of TrainingSample used for training or testing a classifier.
// Provides several useful methods to operate on the collection as a whole,
// including outlier detection and deletion, providing access by font and
// class, finding the canonical sample, finding the 'cloud' features (OR of
// all features in all samples), replication of samples, caching of distance
// metrics.
class TrainingSampleSet {
 public:
  explicit TrainingSampleSet(const FontInfoTable& fontinfo_table);
  ~TrainingSampleSet();
    }
    
      // Rotates the blobs and the TabVectors so that the gross writing direction
  // (text lines) are horizontal and lines are read down the page.
  // Applied rotation stored in rotation_.
  // A second rotation is calculated for application during recognition to
  // make the rotated blobs upright for recognition.
  // Subsequent rotation stored in text_rotation_.
  //
  // Arguments:
  //   vertical_text_lines is true if the text lines are vertical.
  //   recognition_rotation [0..3] is the number of anti-clockwise 90 degree
  //   rotations from osd required for the text to be upright and readable.
  void CorrectOrientation(TO_BLOCK* block, bool vertical_text_lines,
                          int recognition_rotation);
    
    // Make a block using lines parallel to the given vector that fit between
// the min and max coordinates specified by the ColPartitions.
// Construct a block from the given list of partitions.
void WorkingPartSet::MakeBlocks(const ICOORD& bleft, const ICOORD& tright,
                                int resolution, ColPartition_LIST* used_parts) {
  part_it_.move_to_first();
  while (!part_it_.empty()) {
    // Gather a list of ColPartitions in block_parts that will be split
    // by linespacing into smaller blocks.
    ColPartition_LIST block_parts;
    ColPartition_IT block_it(&block_parts);
    ColPartition* next_part = nullptr;
    bool text_block = false;
    do {
      ColPartition* part = part_it_.extract();
      if (part->blob_type() == BRT_UNKNOWN ||
          (part->IsTextType() && part->type() != PT_TABLE))
        text_block = true;
      part->set_working_set(nullptr);
      part_it_.forward();
      block_it.add_after_then_move(part);
      next_part = part->SingletonPartner(false);
      if (part_it_.empty() || next_part != part_it_.data()) {
        // Sequences of partitions can get split by titles.
        next_part = nullptr;
      }
      // Merge adjacent blocks that are of the same type and let the
      // linespacing determine the real boundaries.
      if (next_part == nullptr && !part_it_.empty()) {
        ColPartition* next_block_part = part_it_.data();
        const TBOX& part_box = part->bounding_box();
        const TBOX& next_box = next_block_part->bounding_box();
    }
    }
    }
    }
    
    
    {
    {    SECTION('names are hierarchical') {
      auto iterator = cursor.begin();
      REQUIRE(iterator->key == '0.0.tensor1');
      REQUIRE((++iterator)->key == '0.0.tensor2');
      REQUIRE((++iterator)->key == '0.1.tensor1');
      REQUIRE((++iterator)->key == '0.1.tensor2');
      REQUIRE((++iterator)->key == '1.tensor1');
      REQUIRE((++iterator)->key == '1.tensor2');
      REQUIRE((++iterator)->key == '2.0.tensor1');
      REQUIRE((++iterator)->key == '2.0.tensor2');
      REQUIRE((++iterator)->key == '2.1.0.tensor1');
      REQUIRE((++iterator)->key == '2.1.0.tensor2');
      REQUIRE((++iterator)->key == '2.1.1.tensor1');
      REQUIRE((++iterator)->key == '2.1.1.tensor2');
      REQUIRE(++iterator == cursor.end());
    }
  }
}
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/utils.cpp'
#include <THC/THCGenerateAllTypes.h>
    
      // Populate outputs
  for (int k = 0; k < N; k++) { // For each box, even skipped
    }
    
    Tensor addr(const Tensor& self, const Tensor& vec1, const Tensor& vec2, Scalar beta, Scalar alpha) {
  check_1d(vec1, 'vec1', 'addr');
  check_1d(vec2, 'vec2', 'addr');
  return at::_addr(self, vec1, vec2, beta, alpha);
}
    
    PyObject * THPWrapper_New(void *data, void (*destructor)(void*))
{
  PyObject *args = PyTuple_New(0);
  if (!args) {
    return NULL;
  }
  PyObject *result = PyObject_Call(THPWrapperClass, args, NULL);
  if (result) {
    THPWrapper* wrapper = (THPWrapper*) result;
    wrapper->data = data;
    wrapper->destructor = destructor;
  }
  Py_DECREF(args);
  return result;
}
    
    namespace rpc {
    }
    
    #include '../master_worker/common/RPC.hpp'
#include 'TH/THStorageFunctions.h'
    
    /*static*/ struct DataReaderHelpers
{
    template <class ElemType>
    static void NotifyChangedNodes(ComputationNetworkPtr net, StreamMinibatchInputs& inputMatrices)
    {
        // reader will have resized input node's m_value directly. Nodes must be notified to do necessary internal state updates from that.
        // TODO: This is a stopgap. SGD will at some point change from sets of matrices to sets of nodes. Then this will become much simpler.
        std::set<MatrixBasePtr> matrices;
        for (const auto& iter : inputMatrices)
            matrices.insert(iter.second.matrix);
        for (auto& node : net->FeatureNodes())
            if (matrices.find(node->As<ComputationNode<ElemType>>()->ValuePtr()) != matrices.end())
                node->NotifyFunctionValuesMBSizeModified();
        for (auto& node : net->LabelNodes())
            if (matrices.find(node->As<ComputationNode<ElemType>>()->ValuePtr()) != matrices.end())
                node->NotifyFunctionValuesMBSizeModified();
    }
    }
    
    protected:
    std::wstring m_modelPath;
    bool m_keepCheckPointFiles;
    bool m_saveBestModelPerCriterion;
    // Mapping from criterion to the best epoch on validation data set.
    std::map<std::wstring, BestEpoch> m_criteriaBestEpoch;
    
    #ifdef PRINT_MEAN_VARIANCE
    double mean = 0;
    size_t count = 0;
    foreach_row (i, m)
    {
        double colsum = 0;
        foreach_column (j, m)
        {
            colsum += m(i, j);
            count += 1;
        }
        mean += colsum;
    }
    mean /= count;
    double variance = 0;
    foreach_row (i, m)
    {
        double colsum = 0;
        foreach_column (j, m)
        {
            colsum += (m(i, j) - mean) * (m(i, j) - mean);
        }
        variance += colsum;
    }
    variance /= count;
    fprintf(stderr, '\n###### count = %d, mean = %0.12f, variance = %.12f, stddev = %.12f ######\n', count, mean, variance, sqrt(variance));
#endif
#if 1
    const size_t numparts = 100;
    for (size_t i = 1; i <= numparts; i++)
    {
        fprintf(stderr, '%.5f%% absolute values are under %.10f\n', i * 100.0 / numparts, vals[std::min((size_t) num - 1, i * num / numparts)]);
    }
    fprintf(stderr, '\n%.5f%% values are zero\n\n', 100.0 * numzeros / num);
#endif
#if 0 // experimental: dump the length of each column  --are they similar?
    if (m.rows() > 1 && m.cols() > 1)
    {
        fprintf (stderr, '\n### lengths of columns\n');
        double avlen = 0.0;
        foreach_column (j, m)
        {
            if (j % 20 == 0)
                fprintf (stderr, '\n%d:\t', j);
            else
                fprintf (stderr, '\t');
            double sum = 0.0;
            foreach_row (i, m)
                sum += m(i,j) * m(i,j);
            double len_j = sqrt (sum);
            fprintf (stderr, '%7.3f', len_j);
            avlen += len_j;
        }
        fprintf (stderr, '\n\n%s -> av length = %.10f\n', name, avlen / m.cols());
    }
    else if (m.rows() > 1)
    {
        fprintf (stderr, '\n### biases\n');
        double avbias = 0.0;
        foreach_row (j, m)
        {
            if (j % 20 == 0)
                fprintf (stderr, '\n%d:\t', j);
            else
                fprintf (stderr, '\t');
            fprintf (stderr, '%7.3f', m[j]);
            avbias += m[j];
        }
        fprintf (stderr, '\n\n%s -> av bias = %.10f\n', name, avbias / m.rows());
    }
#endif
    
    
    {
    {            // nodeToDelete is a child
            if (child == nodeToDelete)
            {
                // this used to call DetatchInputs(), but it's better for MEL to retain other inputs
                node->SetInput(i, nullptr);
                break;
            }
        }
    }
    
    cudaStream_t GPUDataTransferer::s_assignStream = NULL;
    
    template <class _T, int _N>
class hardcoded_array
{
    _T data[_N];
    inline void check_index(size_t i) const
    {
        i;
        assert(i < _N);
    }
    inline void check_size(size_t n) const
    {
        n;
        assert(n == _N);
    }
    }
    
        // construct from a single float, copy to all components
    float4(float f)
        : v(_mm_load1_ps(&f))
    {
    }
    // float4 (float f) : v (_mm_set_ss (f)) {}  // code seems more complex than _mm_load1_ps()
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSliceDMatrix
 * Signature: (J[I)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSliceDMatrix
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jintArray jindexset, jlongArray jout) {
  DMatrixHandle result;
  DMatrixHandle handle = (DMatrixHandle) jhandle;
    }
    
    // macro to dispatch according to specified pointer types
#define DISPATCH_CONST_PTR(dtype, old_ptr, cast_ptr, proc)              \
  switch (dtype) {                                                      \
    case kFloat32: {                                                    \
      auto cast_ptr = reinterpret_cast<const float*>(old_ptr); proc; break; \
    }                                                                   \
    case kDouble: {                                                     \
      auto cast_ptr = reinterpret_cast<const double*>(old_ptr); proc; break; \
    }                                                                   \
    case kUInt32: {                                                     \
      auto cast_ptr = reinterpret_cast<const uint32_t*>(old_ptr); proc; break; \
    }                                                                   \
    case kUInt64: {                                                     \
      auto cast_ptr = reinterpret_cast<const uint64_t*>(old_ptr); proc; break; \
    }                                                                   \
    default: LOG(FATAL) << 'Unknown data type' << dtype;                \
  }                                                                     \
    
    void SimpleCSRSource::CopyFrom(DMatrix* src) {
  this->Clear();
  this->info = src->Info();
  auto iter = src->RowIterator();
  iter->BeforeFirst();
  while (iter->Next()) {
    const auto &batch = iter->Value();
    page_.Push(batch);
  }
}
    
        const uint64_t default_max = std::numeric_limits<uint64_t>::max();
    uint64_t last_group_id = default_max;
    bst_uint group_size = 0;
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
    /*
 * baseevent.h
 *
 *  Created on: 2016年3月24日
 *      Author: caoshaokun
 */
    
    void WakeUpLock::Unlock() {
    ::wakeupLock_Unlock(object_);
}
    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
        void* This() const {return m_this;}
    
    #include <jni.h>