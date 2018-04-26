
        
              T* resource;
      OP_REQUIRES_OK(
          context,
          mgr->LookupOrCreate<T>(cinfo_.container(), cinfo_.name(), &resource,
                                 [this](T** ret) EXCLUSIVE_LOCKS_REQUIRED(mu_) {
                                   Status s = CreateResource(ret);
                                   if (!s.ok() && *ret != nullptr) {
                                     CHECK((*ret)->Unref());
                                   }
                                   return s;
                                 }));
    
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    #include 'tensorflow/compiler/xla/service/versioned_computation_handle.h'
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/inputbuffer.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
      Status ResetLocked() override {
    offset_ = 0;
    reader_.reset(nullptr);
    file_.reset(nullptr);
    return ReaderBase::ResetLocked();
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tensorflow {
namespace functor {
DEFINE_UNARY2(get_angle, complex64, complex128);
}  // namespace functor
}  // namespace tensorflow
    
    namespace ONNXIR
{
    namespace Utils
    {
        class TensorUtils
        {
        public:
#define DEFINE_UNPACK_TENSOR(T, Type, fieldName, fieldSize)                                                                    \
    static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/T* p_data, int64_t p_expected_size)           \
    {                                                                                                                          \
        if (Type != p_tensor.data_type()                                                                                       \
            || nullptr == p_data)                                                                                              \
        {                                                                                                                      \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::INVALID_ARGUMENT);                        \
        }                                                                                                                      \
        if (p_tensor.has_raw_data())                                                                                           \
        {                                                                                                                      \
            if (p_tensor.raw_data().size() != (p_expected_size) * sizeof(T))                                                   \
                return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                 \
                                               'UnpackTensor: the pre-allocate size does not match the raw data size');        \
            UnpackTensorWithRawData(p_tensor, p_data);                                                                         \
            return Common::Status::OK();                                                                                       \
        }                                                                                                                      \
        if (p_tensor.fieldSize() != p_expected_size)                                                                           \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                     \
                                            'UnpackTensor: the pre-allocate size does not match the size in proto');           \
        for (auto elem : p_tensor.fieldName())                                                                                 \
        {                                                                                                                      \
            *p_data++ = static_cast<T>(elem);                                                                                  \
        }                                                                                                                      \
        return Common::Status::OK();                                                                                           \
    }
    }
    }
    }
    
    namespace ONNXIR {
    // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Sigmoid)
        .Description('Sigmoid takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the sigmoid function, y = 1 / (1 + exp(-x)), is applied to the '
            'tensor elementwise.')
        .Input('X', 'input tensor', 'T')
        .Output('Y', 'The sigmoid value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    }
    
        REGISTER_OPERATOR_SCHEMA(Dropout)
        .Description('Dropout takes one input data (Tensor<float>) and produces two Tensor outputs, '
            'output (Tensor<float>) and mask (Tensor<bool>). Depending on whether it is in '
            'test mode or not, the output Y will either be a random dropout, or a simple '
            'copy of the input. Note that our implementation of Dropout does scaling in '
            'the training phase, so during testing nothing needs to be done.')
        .Input('data', 'The input data as Tensor.', 'T')
        .Output('output', 'The output.', 'T')
        .Output('mask',
            'The output mask. If is_test is nonzero, this output is not filled.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('ratio',
            '(float, default 0.5) the ratio of random dropout',
            AttrType::AttributeProto_AttributeType_FLOAT, float(0.5))
        .Attr('is_test',
            '(int, default 0) if nonzero, run dropout in test mode where '
            'the output is simply Y = X.',
            AttrType::AttributeProto_AttributeType_INT, int64_t(0));
    
        // TODO: We should be able to configure IO chunks based on size.
    // distribute utterances over chunks
    // We simply count off frames until we reach the chunk size.
    // Note that we first randomize the chunks, i.e. when used, chunks are non-consecutive and thus cause the disk head to seek for each chunk.
    
    
    {    auto status = stub_->SayHello(&context, request_msg, &response_msg);
    if (status.ok()) {
      const HelloReply *response = response_msg.GetRoot();
      return response->message()->str();
    } else {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
    static void Error(const flatbuffers::FlatCompiler *flatc,
                  const std::string &err, bool usage, bool show_exe_name) {
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('error: %s\n', err.c_str());
  if (usage) { printf('%s', flatc->GetUsageString(g_program_name).c_str()); }
  exit(1);
}
    
    std::string GenType(const Type &type) {
  if (type.enum_def != nullptr && !type.enum_def->is_union) {
    // it is a reference to an enum type
    return GenTypeRef(type.enum_def);
  }
  switch (type.base_type) {
    case BASE_TYPE_VECTOR: {
      std::string typeline;
      typeline.append('\'type\' : \'array\', \'items\' : { ');
      if (type.element == BASE_TYPE_STRUCT) {
        typeline.append(GenTypeRef(type.struct_def));
      } else {
        typeline.append(GenType(GenNativeType(type.element)));
      }
      typeline.append(' }');
      return typeline;
    }
    case BASE_TYPE_STRUCT: {
      return GenTypeRef(type.struct_def);
    }
    case BASE_TYPE_UNION: {
      std::string union_type_string('\'anyOf\': [');
      const auto &union_types = type.enum_def->vals.vec;
      for (auto ut = union_types.cbegin(); ut < union_types.cend(); ++ut) {
        auto &union_type = *ut;
        if (union_type->union_type.base_type == BASE_TYPE_NONE) { continue; }
        if (union_type->union_type.base_type == BASE_TYPE_STRUCT) {
          union_type_string.append(
              '{ ' + GenTypeRef(union_type->union_type.struct_def) + ' }');
        }
        if (union_type != *type.enum_def->vals.vec.rbegin()) {
          union_type_string.append(',');
        }
      }
      union_type_string.append(']');
      return union_type_string;
    }
    case BASE_TYPE_UTYPE: return GenTypeRef(type.enum_def);
    default: return GenType(GenNativeType(type.base_type));
  }
}
    
          ss << '\n';
    
    #include 'flatbuffers/flatbuffers.h'