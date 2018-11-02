
        
          class ConstOneofAccessor {
   public:
    explicit ConstOneofAccessor(const MessageDef* msg) : msg_(msg) {}
    const_oneof_iterator begin() { return msg_->oneof_begin(); }
    const_oneof_iterator end() { return msg_->oneof_end(); }
   private:
    const MessageDef* msg_;
  };
    
    #include <google/protobuf/compiler/java/java_extension_lite.h>
    
    
    {  (*variables)['default_entry'] = (*variables)['capitalized_name'] +
      'DefaultEntryHolder.defaultEntry';
  (*variables)['map_field_parameter'] = (*variables)['default_entry'];
  (*variables)['descriptor'] =
      name_resolver->GetImmutableClassName(descriptor->file()) +
      '.internal_' + UniqueFileScopeIdentifier(descriptor->message_type()) +
      '_descriptor, ';
  (*variables)['ver'] = GeneratedCodeVersionSuffix();
}
    
    // Strip package name from a descriptor's full name.
// For example:
//   Full name   : foo.Bar.Baz
//   Package name: foo
//   After strip : Bar.Baz
string StripPackageName(const string& full_name,
                        const FileDescriptor* file) {
  if (file->package().empty()) {
    return full_name;
  } else {
    // Strip package name
    return full_name.substr(file->package().size() + 1);
  }
}
    
    #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
    #include <vector>
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/data_transformer.hpp'
#include 'caffe/internal_thread.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/blocking_queue.hpp'
    
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
    
    namespace caffe {
    }
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
namespace atomics {
namespace detail {
    }
    }
    }
    
    namespace atomics {
    }