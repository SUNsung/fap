
        
        TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
      void Generate(io::Printer* printer);
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    // Factory that creates generators for immutable-default messages.
class ImmutableGeneratorFactory : public GeneratorFactory {
 public:
  ImmutableGeneratorFactory(Context* context);
  virtual ~ImmutableGeneratorFactory();
    }
    
    int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
    }
    
    
    {  /* Copy the output layer to a std::vector */
  Blob<float>* output_layer = net_->output_blobs()[0];
  const float* begin = output_layer->cpu_data();
  const float* end = begin + output_layer->channels();
  return std::vector<float>(begin, end);
}
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    /**
 * @brief Exponential Linear Unit non-linearity @f$
 *        y = \left\{
 *        \begin{array}{lr}
 *            x                  & \mathrm{if} \; x > 0 \\
 *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
 *        \end{array} \right.
 *      @f$.  
 */
template <typename Dtype>
class ELULayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ELUParameter elu_param,
   *     with ELULayer options:
   *   - alpha (\b optional, default 1).
   *     the value @f$ \alpha @f$ by which controls saturation for negative inputs.
   */
  explicit ELULayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    namespace at {
    }
    
    #include '../ChannelUtils.hpp'
#include '../DataChannel.hpp'
#include 'DataChannelUtils.hpp'
    
    CUDAGenerator::CUDAGenerator(Context * context_)
  : context(context_)
{
  // there's no reason to call THCRandom_init, because it is called
  // during THCudaInit, which is called before this initializer
  generator = THCRandom_getGenerator(context->thc_state);
}
    
    PyObject* tensor_to_list(const Tensor& tensor) {
  Tensor data = tensor;
  if (data.type().backend() != kCPU) {
    with_no_gil([&]() {
      data = data.toBackend(kCPU);
    });
  }
  auto& type = data.type();
  return recursive_to_list(
      (char*)data.data_ptr(), data.sizes(), data.strides(), 0,
      type.scalarType(), type.elementSizeInBytes());
}
    
    #undef THPStorage_
#undef THPStorage
#undef THPStorageBaseStr
#undef THPStorageStr
#undef THPStorageClass
#undef THPStorageType
    
    #include <cstdint>
#include <iosfwd>
#include <typeinfo>
#include <vector>
    
    inline namespace literals {
inline namespace string_literals {
inline namespace {
// 'const std::size_t&' is so that folly::npos has the same address in every
// translation unit. This is to avoid potential violations of the ODR.
constexpr const std::size_t& npos = detail::fixedstring::FixedStringBase::npos;
} // namespace
    }
    }
    
    #include <folly/lang/Ordering.h>
    
    #include <sys/types.h>
    
    #include <sys/stat.h>
#include <sys/types.h>
#include <cstddef>
#include <string>
#include <utility>
#include <vector>
    
    
    {  size_t foundCompleted = 0;
  for (auto& op : ops) {
    if (op->state() == AsyncIOOp::State::COMPLETED) {
      ++foundCompleted;
    } else {
      EXPECT_TRUE(op->state() == AsyncIOOp::State::CANCELED) << *op;
    }
  }
  EXPECT_EQ(foundCompleted, completed);
}

    
    
    {      if (version_ == 0) {
        // Re-throw exception if this is the first time we run creator
        throw;
      }
    }
    
    
    {    return true;
  }