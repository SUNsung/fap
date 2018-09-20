
        
          // Convert output shapes.
  output_tensor_shape_protos->resize(c.num_outputs());
  CppShapeInferenceResult out;
  for (int i = 0; i < c.num_outputs(); ++i) {
    out.Clear();
    ProtoFromShapeHandle(c.output(i), &c, out.mutable_shape());
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
    
    int NPyBfloat16_Fill(void* buffer_raw, npy_intp length, void* ignored) {
  bfloat16* const buffer = reinterpret_cast<bfloat16*>(buffer_raw);
  const float start(buffer[0]);
  const float delta = static_cast<float>(buffer[1]) - start;
  for (npy_intp i = 2; i < length; ++i) {
    buffer[i] = static_cast<bfloat16>(start + i * delta);
  }
  return 0;
}
    
    #include 'tensorflow/python/lib/core/numpy.h'
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
    #include 'tensorflow/stream_executor/blas.h'
    
      inline const shared_ptr<SyncedMemory>& data() const {
    CHECK(data_);
    return data_;
  }
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline const char* type() const { return 'Bias'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MaxBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    REGISTER_GRADIENT(Sub, GetSubGradient);
    
    
    {
    {OPERATOR_SCHEMA(ExtendTensor)
    .NumInputs(2)
    .NumOutputs(1)
    .EnforceInplace({{0, 0}})
    .SetDoc(R'DOC(
Extend input 0 if necessary based on max element in input 1.
Input 0 must be the same as output, that is, it is required to be in-place.
Input 0 may have to be re-allocated in order for accommodate to the new size.
Currently, an exponential growth ratio is used in order to ensure amortized
constant time complexity.
All except the outer-most dimension must be the same between input 0 and 1.
)DOC')
    .Input(0, 'tensor', 'The tensor to be extended.')
    .Input(
        1,
        'new_indices',
        'The size of tensor will be extended based on max element in '
        'new_indices.')
    .Output(
        0,
        'extended_tensor',
        'Same as input 0, representing the mutated tensor.');
}
} // namespace

    
    #include 'caffe2/core/common_omp.h'
#include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
    
    namespace caffe2 {
    }
    
    namespace mxnet {
/*! \brief runtime functions for NDArray */
class Imperative {
 public:
  /*! \brief */
  class AGInfo {
   public:
    Context ctx;
    OpReqType grad_req;
    OpStatePtr state;
    std::vector<NDArray> outputs;
    std::vector<NDArray> out_grads;
    bool fresh_out_grad;
    }
    }
    }
    
    #if DMLC_USE_CXX11
// OperatorProperty allows C++11, while Operator do not rely on it.
/*!
 * \brief OperatorProperty is a object that stores all information about Operator.
 * It also contains method to generate context(device) specific operators.
 *
 * It also contains various functions that can be optimally overriden to
 * provide optimization chance for computation engine.
 */
class OperatorProperty {
 public:
  /*!
   * \brief virtual destructor
   */
  virtual ~OperatorProperty() {}
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief Get a map representation of internal parameters.
   *  This can be used by Init to recover the state of OperatorProperty.
   */
  virtual std::map<std::string, std::string> GetParams() const = 0;
  /*!
   * \brief Get input arguments of the Operator.
   * \return vector of arguments.
   */
  virtual std::vector<std::string> ListArguments() const {
    return {'data'};
  }
  /*!
   * \brief Get name of output values of Operator
   * \return name of output values.
   */
  virtual std::vector<std::string> ListOutputs() const {
    return {'output'};
  }
  /*!
   * \brief Get name of auxiliary states of Operator
   * \return name of return values.
   */
  virtual std::vector<std::string> ListAuxiliaryStates() const {
    return {};
  }
  /*! \return number of real return values of the Operator */
  virtual int NumOutputs() const {
    return this->ListOutputs().size();
  }
  /*!
   * \brief get number of visible return values during Symbol creation.
   *  If NumVisibleOutputs() = k, and NumOutputs() = n.
   *  The first k returns will be presented in the resulting symbol.
   *
   *  The rest of the returns can be used for auxiliary states for Backward.
   *  For example, Dropout will return [data, mask], with NumVisibleOutputs() == 1.
   *  So when user call sym = Dropout(input), only data is presented in sym.
   *  But all the returns will be presented in out_data parameter of Backward if requested.
   *
   * \return number of default return values
   */
  virtual int NumVisibleOutputs() const {
    return NumOutputs();
  }
  /*!
   * \brief infer the shapes of outputs and unknown input arguments
   * \param in_shape the shape of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_shape allows unknown elements, which are checked by shape.ndim() == 0.
   *     For unknown shapes, InferShape will try to fill in the correct Shape in in_shape
   *     For known shapes, InferShape will check shape consistency
   *
   *     common practice: set the shape of data input, and usually weight's shape can be inferred
   *
   * \param out_shape the shape of outputs of the operator
   *     InferShape will modify the vector to fill output TShape
   * \param aux_shape the shape of auxiliary states of the operator
   *     InferShape will modify the vector to fill output TShape
   * \return true if the shape inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_shapes are inconsistent.
   */
  virtual bool InferShape(std::vector<TShape> *in_shape,
                          std::vector<TShape> *out_shape,
                          std::vector<TShape> *aux_shape) const = 0;
  /*!
   * \brief infer the data types of outputs and unknown input arguments
   * \param in_type the type of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_type allows unknown elements, which are checked by type.ndim() == 0.
   *     For unknown types, Infertype will try to fill in the correct type in in_type
   *     For known types, Infertype will check type consistency
   *
   *     common practice: set the type of data input, and usually weight's type can be inferred
   *
   * \param out_type the type of outputs of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \param aux_type the type of auxiliary states of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \return true if the type inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_types are inconsistent.
   */
  virtual bool InferType(std::vector<int> *in_type,
                          std::vector<int> *out_type,
                          std::vector<int> *aux_type) const {
    CHECK_LE(in_type->size(), this->ListArguments().size());
    int n_in = this->ListArguments().size();
    for (unsigned i = 0; i < in_type->size(); ++i) {
      CHECK(in_type->at(i) == mshadow::default_type_flag ||
            in_type->at(i) == -1) << 'Unsupported data type ' << in_type->at(i);
    }
    in_type->clear();
    for (int i = 0; i < n_in; ++i ) in_type->push_back(mshadow::default_type_flag);
    }
    }
    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
        for (int i = 0; i < param_.num_out; ++i)
      top_blobs.push_back(new Blob<float>());
    
    
    {    for (auto blob_ptr : bot_blobs)
      delete blob_ptr;
    for (auto blob_ptr : top_blobs)
      delete blob_ptr;
    return true;
  }
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    /*!
 *  Copyright (c) 2016 by Contributors
 * \file optimizer_op-inl.h
 * \brief Optimizer operators
 * \author Junyuan Xie
 */
#include <dmlc/parameter.h>
#include <dmlc/logging.h>
#include <mxnet/ndarray.h>
#include <mxnet/operator.h>
#include <mxnet/operator_util.h>
#include <mxnet/op_attr_types.h>
#include <mshadow/base.h>
#include <nnvm/op.h>
#include <nnvm/op_attr_types.h>
#include <nnvm/tuple.h>
    
    #define FindFirstFileA _fi_FindFirstFile
#define FindNextFileA _fi_FindNextFile
#define FindClose _fi_FindClose
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
    
    
    

    
    
    
    #include <osquery/config.h>
#include <osquery/registry_factory.h>
    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
      fpack.platform_ = 'posix';
  if (isPlatform(PlatformType::TYPE_POSIX) ||
      isPlatform(PlatformType::TYPE_LINUX) ||
      isPlatform(PlatformType::TYPE_OSX) ||
      isPlatform(PlatformType::TYPE_FREEBSD)) {
    EXPECT_TRUE(fpack.checkPlatform());
  }
    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchExtension(
    const std::string& exec_path,
    const std::string& extensions_socket,
    const std::string& extensions_timeout,
    const std::string& extensions_interval,
    bool verbose) {
  auto ext_pid = ::fork();
  if (ext_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (ext_pid == 0) {
    setEnvVar('OSQUERY_EXTENSION', std::to_string(::getpid()).c_str());
    }
    }
    
    /// The WatcherWatcher is spawned within the worker and watches the watcher.
class WatcherWatcherRunner : public InternalRunnable {
 public:
  explicit WatcherWatcherRunner(const std::shared_ptr<PlatformProcess>& watcher)
      : InternalRunnable('WatcherWatcherRunner'), watcher_(watcher) {}
    }
    
    #include <osquery/system.h>
    
    Status deserializeDistributedQueryResult(const rj::Value& obj,
                                         DistributedQueryResult& r) {
  DistributedQueryRequest request;
  auto s = deserializeDistributedQueryRequest(obj['request'], request);
  if (!s.ok()) {
    return s;
  }
    }
    
        static BOOST_FORCEINLINE storage_type fetch_sub(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        typedef typename make_signed< storage_type >::type signed_storage_type;
        return Derived::fetch_add(storage, static_cast< storage_type >(-static_cast< signed_storage_type >(v)), order);
    }
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};
    
    namespace atomics {
    }
    
    struct YGCachedMeasurement {
  float availableWidth;
  float availableHeight;
  YGMeasureMode widthMeasureMode;
  YGMeasureMode heightMeasureMode;
    }
    
    #pragma once
#include <fb/assert.h>
#include <utility>