
        
        
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    #include <sstream>
    
    int ImmutableExtensionLiteGenerator::GenerateRegistrationCode(
    io::Printer* printer) {
  printer->Print(
    'registry.add($scope$.$name$);\n',
    'scope', scope_,
    'name', UnderscoresToCamelCase(descriptor_));
  return 7;
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    }
    
    // A simple macro to mark codes that are not implemented, so that when the code
// is executed we will see a fatal log.
#define NOT_IMPLEMENTED LOG(FATAL) << 'Not Implemented Yet'
    
    template <typename Dtype>
class LayerRegistry {
 public:
  typedef shared_ptr<Layer<Dtype> > (*Creator)(const LayerParameter&);
  typedef std::map<string, Creator> CreatorRegistry;
    }
    
      virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
    
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
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
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
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    bool AuthPropertyIterator::operator!=(const AuthPropertyIterator& rhs) const {
  return !operator==(rhs);
}
    
    void ChannelArguments::SetPointer(const grpc::string& key, void* value) {
  static const grpc_arg_pointer_vtable vtable = {
      &PointerVtableMembers::Copy, &PointerVtableMembers::Destroy,
      &PointerVtableMembers::Compare};
  SetPointerWithVtable(key, value, &vtable);
}
    
    CompletionQueue::CompletionQueueTLSCache::~CompletionQueueTLSCache() {
  GPR_ASSERT(flushed_);
}
    
    size_t TraceContextSerialize(const ::opencensus::trace::SpanContext& context,
                             char* tracing_buf, size_t tracing_buf_size) {
  GrpcTraceContext trace_ctxt(context);
  return TraceContextEncoding::Encode(trace_ctxt, tracing_buf,
                                      tracing_buf_size);
}
    
    namespace grpc {
    }
    
    #ifndef GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
#define GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
    
    #include <grpc/support/cpu.h>
    
    namespace dmlc {
DMLC_REGISTRY_ENABLE(::xgboost::TreeUpdaterReg);
}  // namespace dmlc
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
      CanAgent agent_a(param_ptr_a.get());
  CanAgent agent_b(param_ptr_b.get());
  agent_a.AddOtherAgent(&agent_b);
  agent_b.AddOtherAgent(&agent_a);
  if (!agent_a.Start()) {
    AERROR << 'Agent a start failed.';
    return -1;
  }
  if (FLAGS_only_one_send) {
    agent_b.is_receiving(true);
    agent_b.is_sending_finish(true);
  } else {
    if (!agent_b.Start()) {
      AERROR << 'Agent b start failed.';
      return -1;
    }
  }
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    using apollo::common::ErrorCode;
    
    #endif  // MODULES_DRIVERS_CANBUS_CAN_CLIENT_FAKE_FAKE_CAN_CLIENT_H_

    
    
    {  auto ret = recv_client_->Receive(&buf, &frame_num);
  EXPECT_EQ(ret, ErrorCode::OK);
  recv_client_->Stop();
}
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                            int32_t *const frame_num);
  /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  virtual std::string GetErrorString(const int32_t status);
  /**
   * @brief Set inited status.
   * @param if status is inited.
   */
  void SetInited(bool init);
    
    int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
    #include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    const int32_t CANBUS_MESSAGE_LENGTH = 8;  // according to ISO-11891-1
const int32_t MAX_CAN_PORT = 3;