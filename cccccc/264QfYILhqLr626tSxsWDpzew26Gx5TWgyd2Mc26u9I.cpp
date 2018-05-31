
        
        // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
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
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    #include <gtest/gtest.h>
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
    #endif  // CAFFE_LAYER_FACTORY_H_

    
    #include <utility>
#include <vector>
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    /**
 * @brief Convolves the input image with a bank of learned filters,
 *        and (optionally) adds biases.
 *
 *   Caffe convolves by reduction to matrix multiplication. This achieves
 *   high-throughput and generality of input and filter dimensions but comes at
 *   the cost of memory for matrices. This makes use of efficiency in BLAS.
 *
 *   The input is 'im2col' transformed to a channel K' x H x W data matrix
 *   for multiplication with the N x K' x H x W filter matrix to yield a
 *   N' x H x W output matrix that is then 'col2im' restored. K' is the
 *   input channel * kernel height * kernel width dimension of the unrolled
 *   inputs so that the im2col matrix has a column for each input region to
 *   be filtered. col2im restores the output spatial structure by rolling up
 *   the output channel N' columns of the output matrix.
 */
template <typename Dtype>
class ConvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  /**
   * @param param provides ConvolutionParameter convolution_param,
   *    with ConvolutionLayer options:
   *  - num_output. The number of filters.
   *  - kernel_size / kernel_h / kernel_w. The filter dimensions, given by
   *  kernel_size for square filters or kernel_h and kernel_w for rectangular
   *  filters.
   *  - stride / stride_h / stride_w (\b optional, default 1). The filter
   *  stride, given by stride_size for equal dimensions or stride_h and stride_w
   *  for different strides. By default the convolution is dense with stride 1.
   *  - pad / pad_h / pad_w (\b optional, default 0). The zero-padding for
   *  convolution, given by pad for equal dimensions or pad_h and pad_w for
   *  different padding. Input padding is computed implicitly instead of
   *  actually padding.
   *  - dilation (\b optional, default 1). The filter
   *  dilation, given by dilation_size for equal dimensions for different
   *  dilation. By default the convolution has dilation 1.
   *  - group (\b optional, default 1). The number of filter groups. Group
   *  convolution is a method for reducing parameterization by selectively
   *  connecting input and output channels. The input and output channel dimensions must be divisible
   *  by the number of groups. For group @f$ \geq 1 @f$, the
   *  convolutional filters' input and output channels are separated s.t. each
   *  group takes 1 / group of the input channels and makes 1 / group of the
   *  output channels. Concretely 4 input channels, 8 output channels, and
   *  2 groups separate input channels 1-2 and output channels 1-4 into the
   *  first group and input channels 3-4 and output channels 5-8 into the second
   *  group.
   *  - bias_term (\b optional, default true). Whether to have a bias.
   *  - engine: convolution has CAFFE (matrix multiplication) and CUDNN (library
   *    kernels + stream parallelism) engines.
   */
  explicit ConvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
      virtual inline const char* type() const { return 'Dropout'; }
    
    /**
 * @brief Compute elementwise operations, such as product and sum,
 *        along multiple input Blobs.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EltwiseLayer : public Layer<Dtype> {
 public:
  explicit EltwiseLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
    std::string GetDbFileContent(int argc, char** argv);
    
    class PythonGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  PythonGrpcGenerator(const GeneratorConfiguration& config);
  ~PythonGrpcGenerator();
    }
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
      std::unique_ptr<grpc::Server> StartServer(int port);
    
    grpc::string DescribeMethod(const grpc::protobuf::MethodDescriptor* method) {
  std::stringstream result;
  result << '  rpc ' << method->name()
         << (method->client_streaming() ? '(stream ' : '(')
         << method->input_type()->full_name() << ') returns '
         << (method->server_streaming() ? '(stream ' : '(')
         << method->output_type()->full_name() << ') {}\n';
  if (method->options().deprecated()) {
    result << ' DEPRECATED';
  }
  return result.str();
}
    
    
    {  int64_t measure() const;
};
    
    private:
  std::atomic<int> m_refCount;
  int m_timeoutSeconds;
    
    int next_numa_node(std::atomic_int& curr_node) {
  if (!use_numa) return 0;
  int node;
  do {
    node = curr_node.fetch_add(1, std::memory_order_relaxed);
    node &= numa_node_mask;
  } while (!((numa_node_set >> node) & 1));
  return node;
}
    
    
    {private:
  CodeBlock& m_cb;
  CodeAddress m_oldFrontier;
};
    
    #include 'hphp/util/hfsort.h'
    
    /**
 * A Synchronizable object that has multiple conditional variables. The benefit
 * is, notify() can choose to wake up a thread that is more favorable (e.g.,
 * one with stack/heap mapped on huge pages, or one that is recently active).
 */
struct SynchronizableMulti {
  explicit SynchronizableMulti(int size);
  virtual ~SynchronizableMulti() {}
    }
    
      switch (inst.op) {
#define O(name, ...)    \
    case Vinstr::name:  \
      return simplify(env, inst.name##_, b, i); \
    }
    
    
    {  template <typename A, typename B>
  constexpr bool operator()(A&& a, B&& b) const {
    return ne ^ (C::operator()(static_cast<A&&>(a), static_cast<B&&>(b)) == o);
  }
};
    
      struct Node : public hazptr_obj_base<Node, Atom, Reclaimer<Node>> {
    T elem_;
    Atom<Node*> next_;
    }
    
      NontrivialType::ctored = 0;
  for (int i = 0; i < 120; ++i) {
    vec.emplace_back(i);
  }
  EXPECT_EQ(NontrivialType::ctored, 120);
  EXPECT_EQ(vec[0].a, 12);
  EXPECT_EQ(vec[1].a, 13);
  EXPECT_EQ(vec.back().a, 119);
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    #include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
    
    
    {
    {} // namespace futures
} // namespace folly
