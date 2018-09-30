
        
        #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    /* Enum lookups:
 * - ntoi:  look up a name with specified length.
 * - ntoiz: look up a name provided as a null-terminated string.
 * - iton:  look up an integer, returning the name as a null-terminated
 *          string. */
bool upb_enumdef_ntoi(const upb_enumdef *e, const char *name, size_t len,
                      int32_t *num);
UPB_INLINE bool upb_enumdef_ntoiz(const upb_enumdef *e,
                                  const char *name, int32_t *num) {
  return upb_enumdef_ntoi(e, name, strlen(name), num);
}
const char *upb_enumdef_iton(const upb_enumdef *e, int32_t num);
    
      virtual bool Generate(const FileDescriptor* file, const string& parameter,
                        GeneratorContext* context, string* error) const {
    file->CopyTo(file_);
    return true;
  }
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <sstream>
    
    #include <string>
    
    // Does this message class have generated parsing, serialization, and other
// standard methods for which reflection-based fallback implementations exist?
bool Context::HasGeneratedMethods(const Descriptor* descriptor) const {
  return options_.enforce_lite ||
         descriptor->file()->options().optimize_for() != FileOptions::CODE_SIZE;
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    ServiceGenerator* ImmutableGeneratorFactory::NewServiceGenerator(
    const ServiceDescriptor* descriptor) const {
  return new ImmutableServiceGenerator(descriptor, context_);
}
    
    AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    bool CompletionQueue::CompletionQueueTLSCache::Flush(void** tag, bool* ok) {
  int res = 0;
  void* res_tag;
  flushed_ = true;
  if (grpc_completion_queue_thread_local_cache_flush(cq_->cq_, &res_tag,
                                                     &res)) {
    auto cq_tag = static_cast<internal::CompletionQueueTag*>(res_tag);
    *ok = res == 1;
    if (cq_tag->FinalizeResult(tag, ok)) {
      return true;
    }
  }
  return false;
}
    
    
    {}  // namespace grpc

    
    namespace mxnet {
    }
    
    #if defined(__i386__) || defined(_M_X86) || defined(_M_X64) || defined(__x86_64__)
#define ARCH_IS_INTEL_X86
#endif
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
            // 'initializer' must be a random initializer
        auto initializerType = initializer[InitializerTypeAttributeName].Value<std::wstring>();
        if ((initializerType != Microsoft::MSR::CNTK::UniformInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::BilinearInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::ConstantInitializerTypeName))
        {
            int oldOutputRank = initializer[OutputRankAttributeName].Value<int>();
            int oldFilterRank = initializer[FilterRankAttributeName].Value<int>();
    }
    
        // computation functions don't do anything for parameter nodes
    virtual void UpdateFunctionMBSize() override;
    virtual void /*ComputationNode::*/ ForwardProp(const FrameRange&) override;
    virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange&) override;
    virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override;
    
    BENCHMARK_PARAM(BENCHFUN(pushBack), 16)
BENCHMARK_PARAM(BENCHFUN(pushBack), 128)
BENCHMARK_PARAM(BENCHFUN(pushBack), 1024)
BENCHMARK_PARAM(BENCHFUN(pushBack), 10240)
BENCHMARK_PARAM(BENCHFUN(pushBack), 102400)
BENCHMARK_PARAM(BENCHFUN(pushBack), 1024000)

    
    
    {  // Synchronous transmission of CAN messages
  int32_t ret = canWrite(dev_handler_, send_frames_, frame_num, nullptr);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'send message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  return ErrorCode::OK;
}
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {  // Synchronous transmission of CAN messages
  int32_t send_num = *frame_num;
  int32_t ret = bcan_send(_dev_handler, _send_frames, send_num);
  if (ret < 0) {
    int ret_send_error = bcan_get_status(_dev_handler);
    AERROR << 'send message failed, error code: ' << ret
           << ', send error: ' << ret_send_error;
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  *frame_num = ret;
  return ErrorCode::OK;
}
    
    #include 'gtest/gtest.h'
    
    
    {  std::condition_variable cvar_;
};
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}