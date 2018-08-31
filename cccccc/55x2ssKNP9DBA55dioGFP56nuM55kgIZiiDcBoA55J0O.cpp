
        
        // Convert an AttrValue with type `type` to the Python representation for
// that value.
string AttrValueToPython(const string& type, const AttrValue& value,
                         const string& dtype_module = 'tf.');
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    // Called by python code on initialization.
//
// 'trampoline' must represent a python function which has the
// following signature:
//   (string, list(ndarray)) | (string, list(EagerTensor)) ->
//     ndarray | list(ndarray) | python scalar |
//     EagerTensor | list(EagerTensor) | None
//
// The trampoline takes two arguments, the first is a string token
// used by the python frontend's dispatching logic; the second is a
// list of numpy ndarrays or EagerTensor objects. It can return a
// single numpy ndarray, a list of numpy ndarrays, a python scalar, an
// EagerTensor, a list of EagerTensors, or None.
//
// PyFunc requires inputs and outputs to be ndarrays. EagerPyFunc requires
// inputs to be a list of EagerTensors and outputs to be an EagerTensor, a list
// of EagerTensors, or None.
//
// The C++ runtime converts outputs back to Tensor objects.
//
// This function is called by script_ops.py during its module initialization.
//
// TODO(zhifengc): Support distributed runtime.
void InitializePyTrampoline(PyObject* trampoline);
    
    
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
      /**
   * @brief Return whether to allow force_backward for a given bottom blob
   *        index.
   *
   * If AllowForceBackward(i) == false, we will ignore the force_backward
   * setting and backpropagate to blob i only if it needs gradient information
   * (as is done when force_backward == false).
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return true;
  }
    
      static CreatorRegistry& Registry() {
    static CreatorRegistry* g_registry_ = new CreatorRegistry();
    return *g_registry_;
  }
    
      virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
    
    #include <vector>
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    #if !defined(__AVX__)
// Implementation for non-avx archs.
    
    void EquationDetect::ComputeCPsSuperBBox() {
  ColPartitionGridSearch gsearch(part_grid_);
  ColPartition *part = nullptr;
  gsearch.StartFullSearch();
  delete cps_super_bbox_;
  cps_super_bbox_ = new TBOX();
  while ((part = gsearch.NextFullSearch()) != nullptr) {
    (*cps_super_bbox_) += part->bounding_box();
  }
}
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
      InternalIterator* input_;
  const Comparator* cmp_;
  MergeHelper* merge_helper_;
  const std::vector<SequenceNumber>* snapshots_;
  const SequenceNumber earliest_write_conflict_snapshot_;
  const SnapshotChecker* const snapshot_checker_;
  Env* env_;
  bool report_detailed_time_;
  bool expect_valid_internal_key_;
  RangeDelAggregator* range_del_agg_;
  std::unique_ptr<CompactionProxy> compaction_;
  const CompactionFilter* compaction_filter_;
  const std::atomic<bool>* shutting_down_;
  const SequenceNumber preserve_deletes_seqnum_;
  bool bottommost_level_;
  bool valid_ = false;
  bool visible_at_tip_;
  SequenceNumber earliest_snapshot_;
  SequenceNumber latest_snapshot_;
  bool ignore_snapshots_;
    
    
    {    if (table == 0) {
      snapshot = db_->GetSnapshot();
    }
  }
  assert(snapshot != nullptr);
    
      auto defaultEnv = Env::Default();
  int hits = 0;
  for (auto it = fileNames.begin() ; it != fileNames.end(); ++it) {
    if ((*it == '..') || (*it == '.')) {
      continue;
    }
    auto filePath = dbname_ + '/' + *it;
    unique_ptr<SequentialFile> seqFile;
    auto envOptions = EnvOptions(CurrentOptions());
    status = defaultEnv->NewSequentialFile(filePath, &seqFile, envOptions);
    ASSERT_OK(status);
    }
    
    
    {  mutex_.Unlock();
  return Status::OK();
}
    
      using DBImpl::CompactFiles;
  virtual Status CompactFiles(
      const CompactionOptions& /*compact_options*/,
      ColumnFamilyHandle* /*column_family*/,
      const std::vector<std::string>& /*input_file_names*/,
      const int /*output_level*/, const int /*output_path_id*/ = -1,
      std::vector<std::string>* const /*output_file_names*/ = nullptr
      ) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
      // Writes the given byte to the output, writes an extra zero if byte is 0xff.
  void EmitByte(int byte) {
    if (pos < len) {
      data[pos++] = byte;
    } else {
      overflow = true;
    }
    if (byte == 0xff) {
      EmitByte(0);
    }
  }
    
    bool JPEGData::Is420() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 2 &&
          max_v_samp_factor == 2 &&
          components[0].h_samp_factor == 2 &&
          components[0].v_samp_factor == 2 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    #ifndef GUETZLI_JPEG_DATA_ENCODER_H_
#define GUETZLI_JPEG_DATA_ENCODER_H_
    
    // Saves the APP marker segment as a string to *jpg.
bool ProcessAPP(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  // Save the marker type together with the app data.
  std::string app_str(reinterpret_cast<const char*>(
      &data[*pos - 3]), marker_len + 1);
  *pos += marker_len - 2;
  jpg->app_data.push_back(app_str);
  return true;
}
    
    
    {}  // namespace