
        
        
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ScopedPythonPtr);
};
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    bool FieldGeneratorBase::is_nullable_type() {
  switch (descriptor_->type()) {
    case FieldDescriptor::TYPE_ENUM:
    case FieldDescriptor::TYPE_DOUBLE:
    case FieldDescriptor::TYPE_FLOAT:
    case FieldDescriptor::TYPE_INT64:
    case FieldDescriptor::TYPE_UINT64:
    case FieldDescriptor::TYPE_INT32:
    case FieldDescriptor::TYPE_FIXED64:
    case FieldDescriptor::TYPE_FIXED32:
    case FieldDescriptor::TYPE_BOOL:
    case FieldDescriptor::TYPE_UINT32:
    case FieldDescriptor::TYPE_SFIXED32:
    case FieldDescriptor::TYPE_SFIXED64:
    case FieldDescriptor::TYPE_SINT32:
    case FieldDescriptor::TYPE_SINT64:
      return false;
    }
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    // Attempt to remove a prefix from a value, ignoring casing and skipping underscores.
// (foo, foo_bar) => bar - underscore after prefix is skipped
// (FOO, foo_bar) => bar - casing is ignored
// (foo_bar, foobarbaz) => baz - underscore in prefix is ignored
// (foobar, foo_barbaz) => baz - underscore in value is ignored
// (foo, bar) => bar - prefix isn't matched; return original value
std::string TryRemovePrefix(const std::string& prefix, const std::string& value) {
  // First normalize to a lower-case no-underscores prefix to match against
  std::string prefix_to_match = '';
  for (size_t i = 0; i < prefix.size(); i++) {
    if (prefix[i] != '_') {
      prefix_to_match += ascii_tolower(prefix[i]);
    }
  }
  
  // This keeps track of how much of value we've consumed
  size_t prefix_index, value_index;
  for (prefix_index = 0, value_index = 0;
      prefix_index < prefix_to_match.size() && value_index < value.size();
      value_index++) {
    // Skip over underscores in the value
    if (value[value_index] == '_') {
      continue;
    }
    if (ascii_tolower(value[value_index]) != prefix_to_match[prefix_index++]) {
      // Failed to match the prefix - bail out early.
      return value;
    }
  }
    }
    
    
    {  printer->Outdent();
  printer->Print('}\n\n');
    
    
    
      // Oneofs
  if (descriptor->oneof_decl_count() > 0) {
      std::vector<std::string> oneofs;
      for (int i = 0; i < descriptor->oneof_decl_count(); i++) {
          oneofs.push_back(UnderscoresToCamelCase(descriptor->oneof_decl(i)->name(), true));
      }
      printer->Print('new[]{ \'$oneofs$\' }, ', 'oneofs', JoinStrings(oneofs, '\', \''));
  }
  else {
      printer->Print('null, ');
  }
    
    // We will use the boost shared_ptr instead of the new C++11 one mainly
// because cuda does not work (at least now) well with C++11 features.
using boost::shared_ptr;
    
      /* Should be tested when running loops to exit when requested. */
  bool must_stop();
    
    #endif  // CAFFE_ABSVAL_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  // Helper functions that abstract away the column buffer and gemm arguments.
  // The last argument in forward_cpu_gemm is so that we can skip the im2col if
  // we just called weight_cpu_gemm with the same input.
  void forward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_cpu_bias(Dtype* output, const Dtype* bias);
  void backward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output);
  void weight_cpu_gemm(const Dtype* input, const Dtype* output, Dtype*
      weights);
  void backward_cpu_bias(Dtype* bias, const Dtype* input);
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    X before running op:
[[0.5821691  0.07719802 0.50159824]
 [0.40952456 0.36788362 0.84887683]
 [0.02472685 0.65730894 0.9066397 ]]
X after running op:
[[1.7899168 1.080256  1.6513585]
 [1.5061016 1.4446739 2.3370204]
 [1.0250351 1.9295927 2.4759884]]
    
    
<details>
    
        const auto* data_ptr = data.template data<T>();
    std::unordered_map<T, int64_t> dict;
    std::vector<int64_t> dupIndices;
    // i is the index of unique elements, j is the index of all elements
    for (int64_t i = 0, j = 0; j < data.dims()[0]; ++i, ++j) {
      bool retVal = dict.insert({data_ptr[j], i}).second;
      if (!retVal) {
        --i;
        dupIndices.push_back(j);
      }
    }
    
    <details>
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    std::vector<std::string> KafkaTopicsConfigParserPlugin::keys() const {
  return {kKafkaTopicParserRootKey};
}
    
    namespace osquery {
    }
    
      // If a constraint list exists for a map key, normal constraints apply.
  EXPECT_TRUE(cm['path'].matches('some'));
  EXPECT_FALSE(cm['path'].matches('not_some'));
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    Status INotifyEventPublisher::run() {
  struct pollfd fds[1];
  fds[0].fd = getHandle();
  fds[0].events = POLLIN;
  int selector = ::poll(fds, 1, 1000);
  if (selector == -1) {
    if (errno == EINTR) {
      return Status(0, 'inotify poll interrupted');
    }
    LOG(WARNING) << 'Could not read inotify handle';
    return Status(1, 'inotify poll failed');
  }
    }
    
    [[noreturn]] void exception_wrapper::onNoExceptionError(
    char const* const name) {
  std::ios_base::Init ioinit_; // ensure std::cerr is alive
  std::cerr << 'Cannot use `' << name
            << '` with an empty folly::exception_wrapper' << std::endl;
  std::terminate();
}
    
      template <typename ExecutorT>
  static KeepAlive<ExecutorT> getKeepAliveToken(ExecutorT* executor) {
    static_assert(
        std::is_base_of<Executor, ExecutorT>::value,
        'getKeepAliveToken only works for folly::Executor implementations.');
    if (!executor) {
      return {};
    }
    folly::Executor* executorPtr = executor;
    if (executorPtr->keepAliveAcquire()) {
      return makeKeepAlive<ExecutorT>(executor);
    }
    return makeKeepAliveDummy<ExecutorT>(executor);
  }
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;