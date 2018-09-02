
        
        
    {}  // namespace atom

    
     protected:
  DownloadItem(v8::Isolate* isolate, download::DownloadItem* download_item);
  ~DownloadItem() override;
    
      Microsoft::WRL::ComPtr<ITaskbarList3> taskbar;
  HRESULT result = ::CoCreateInstance(CLSID_TaskbarList, nullptr,
                                          CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&taskbar));
  if (FAILED(result)) {
    VLOG(1) << 'Failed creating a TaskbarList object: ' << result;
    return RespondNow(NoArguments());
  }
    
    // NEED TO STAY SYNC WITH NODE
#ifndef NODE_CONTEXT_EMBEDDER_DATA_INDEX
#define NODE_CONTEXT_EMBEDDER_DATA_INDEX 32
#endif
    
    
    {}  // namespace nw

    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    bool MenuDelegate::IsCommandIdChecked(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    /* From upb_def. */
const char *upb_enumdef_fullname(const upb_enumdef *e);
const char *upb_enumdef_name(const upb_enumdef *e);
bool upb_enumdef_setfullname(upb_enumdef *e, const char *fullname,
                             upb_status *s);
    
    #include <google/protobuf/any.h>
    
    #include <google/protobuf/compiler/annotation_test_util.h>
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    
    {  return value.substr(value_index);
}
    
    void MapFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
      variables_,
      '$name$_.Add(other.$name$_);\n');
}
    
    void PrimitiveOneofFieldGenerator::GenerateMembers(io::Printer* printer) {
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ $type_name$ $property_name$ {\n'
    '  get { return $has_property_check$ ? ($type_name$) $oneof_name$_ : $default_value$; }\n'
    '  set {\n');
    if (is_value_type) {
      printer->Print(
        variables_,
        '    $oneof_name$_ = value;\n');
    } else {
      printer->Print(
        variables_,
        '    $oneof_name$_ = pb::ProtoPreconditions.CheckNotNull(value, \'value\');\n');
    }
    printer->Print(
      variables_,
      '    $oneof_name$Case_ = $oneof_property_name$OneofCase.$property_name$;\n'
      '  }\n'
      '}\n');
}
    
    // Base class for a SIMD function to multiply a matrix by a vector, with sources
// of 8-bit signed integer, and result in a double, after appropriate scaling.
// Assumes a specific method of multiplication that can be applied to any size
// and number of SIMD registers as follows:
// int32_t results are computed with num_outputs_per_register_ in each of
// max_output_registers_ result registers, repeatedly until it would make too
// many results, then the number of registers is halved, and so-on down to a
// single result register. The last calculation only outputs the required number
// of results instead of writing beyond the bounds. Eg: matrix has 75 outputs,
//  num_outputs_per_register_ = 4, and max_output_registers_ = 8,
// Step 1: 8x4=32 results are computed,
// Step 2: 8x4=32 again, total 64,
// Step 3: 2x4=8 (since 8x4 is too many, so is 4x4), total 72,
// Step 4: 1x3, total 75.
// Each step above is computed using a PartialFunc, which runs over the input
// vector once. The input is read one registerful of num_inputs_per_register_
// at a time (presumably 4x num_outputs_per_register_ since they are int8_t)
// so the inputs MUST BE PADDED to a multiple of num_inputs_per_register_.
// Since it is slow (on Intel at least) to horizontally add in a register,
// provision is made to process num_inputs_per_group_ inputs at a time, with
// the group being replicated num_input_groups_ times and multiplied by a
// num_inputs_per_group_ by num_input_groups_ rectangle of the weights matrix.
// This is most convenient if num_inputs_per_group_ is 4, and the product
// sign-extends and sums 8x8=16 bit results to 32 bits, adding 4 adjacent
// results in the process, but it doesn't have to be implemented that way.
// The weights are re-ordered by Init() to be used sequentially by the above
// algorithm, followed by the biases, so they can be added at the end.
// The base class computes the base C++ implementation.
// NOTE that, although the subclasses execute on different SIMD hardware, no
// virtual methods are needed, as the constructor sets up everything that
// is required to allow the base class implementation to do all the work.
class IntSimdMatrix {
 public:
  // Constructor should set the data members to indicate the sizes.
  // NOTE: Base constructor public only for test purposes.
  IntSimdMatrix()
      : num_outputs_per_register_(1),
        max_output_registers_(1),
        num_inputs_per_register_(1),
        num_inputs_per_group_(1),
        num_input_groups_(1) {}
    }
    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
    // If true, then AVX has been detected.
bool SIMDDetect::avx_available_;
bool SIMDDetect::avx2_available_;
bool SIMDDetect::avx512F_available_;
bool SIMDDetect::avx512BW_available_;
// If true, then SSe4.1 has been detected.
bool SIMDDetect::sse_available_;
    
    /*************************************************************************
 * word_char_quality()
 * Combination of blob quality and outline quality - how many good chars are
 * there? - I.e chars which pass the blob AND outline tests.
 *************************************************************************/
void Tesseract::word_char_quality(WERD_RES *word,
                                  ROW *row,
                                  int16_t *match_count,
                                  int16_t *accepted_match_count) {
  if (word->bln_boxes == nullptr || word->rebuild_word == nullptr ||
      word->rebuild_word->blobs.empty()) {
    *match_count = 0;
    *accepted_match_count = 0;
    return;
  }
    }
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    void EquationDetect::IdentifyBlobsToSkip(ColPartition* part) {
  ASSERT_HOST(part);
  BLOBNBOX_C_IT blob_it(part->boxes());
    }
    
    #endif  // GRPC_INTERNAL_CPP_CLIENT_CREATE_CHANNEL_INTERNAL_H

    
      SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
    
    void Alarm::SetInternal(CompletionQueue* cq, gpr_timespec deadline, void* tag) {
  // Note that we know that alarm_ is actually an internal::AlarmImpl
  // but we declared it as the base pointer to avoid a forward declaration
  // or exposing core data structures in the C++ public headers.
  // Thus it is safe to use a static_cast to the subclass here, and the
  // C++ style guide allows us to do so in this case
  static_cast<internal::AlarmImpl*>(alarm_)->Set(cq, deadline, tag);
}
    
    CompletionQueue::NextStatus CompletionQueue::AsyncNextInternal(
    void** tag, bool* ok, gpr_timespec deadline) {
  for (;;) {
    auto ev = grpc_completion_queue_next(cq_, deadline, nullptr);
    switch (ev.type) {
      case GRPC_QUEUE_TIMEOUT:
        return TIMEOUT;
      case GRPC_QUEUE_SHUTDOWN:
        return SHUTDOWN;
      case GRPC_OP_COMPLETE:
        auto cq_tag = static_cast<internal::CompletionQueueTag*>(ev.tag);
        *ok = ev.success != 0;
        *tag = cq_tag;
        if (cq_tag->FinalizeResult(tag, ok)) {
          return GOT_EVENT;
        }
        break;
    }
  }
}
    
    grpc_completion_queue* CoreCodegen::grpc_completion_queue_create_for_next(
    void* reserved) {
  return ::grpc_completion_queue_create_for_next(reserved);
}
    
      std::vector<grpc::string_ref> FindPropertyValues(
      const grpc::string& name) const override;
    
    
    {}  // namespace grpc

    
    
    {}  // namespace grpc
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    size_t ServerStatsSerialize(uint64_t server_elapsed_time, char* buf,
                            size_t buf_size) {
  return RpcServerStatsEncoding::Encode(server_elapsed_time, buf, buf_size);
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/string_view.h'
#include 'absl/time/clock.h'
#include 'absl/time/time.h'
#include 'opencensus/stats/stats.h'
#include 'src/core/lib/surface/call.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
#include 'src/cpp/ext/filters/census/measures.h'
    
      /* volatile, local variables */
  constexpr RegXMM v16(16);
  constexpr RegXMM v17(17);
  constexpr RegXMM v18(18);
  constexpr RegXMM v19(19);
  /* nonvolatile, local variables */
  constexpr RegXMM v20(20);
  constexpr RegXMM v21(21);
  constexpr RegXMM v22(22);
  constexpr RegXMM v23(23);
  constexpr RegXMM v24(24);
  constexpr RegXMM v25(25);
  constexpr RegXMM v26(26);
  constexpr RegXMM v27(27);
  constexpr RegXMM v28(28);
  constexpr RegXMM v29(29);
  constexpr RegXMM v30(30);
  constexpr RegXMM v31(31);
    
    
    {  auto const makeShared = [&] () {
    if (isVectorCollection(obj->collectionType())) {
      return APCArray::MakeSharedVec(const_cast<ArrayData*>(array),
                                     level,
                                     unserializeObj);
    }
    return APCArray::MakeSharedDict(const_cast<ArrayData*>(array),
                                    level,
                                    unserializeObj);
  };
  return WrapArray(makeShared(), obj->collectionType());
}
    
    inline TypedValue ExecutionContext::invokeFuncFew(
  const CallCtx& ctx,
  int argc,
  const TypedValue* argv
) {
  auto const thisOrCls = [&] () -> void* {
    if (ctx.this_) return (void*)(ctx.this_);
    if (ctx.cls) return (void*)((char*)(ctx.cls) + 1);
    return nullptr;
  }();
    }
    
    /// Prefix applied to the file carve tar archive.
const std::string kCarveNamePrefix = 'carve_';
    
    #include <string>
#include <vector>
    
    
    {
    {  EXPECT_TRUE(doc.HasMember('custom_nested_json'));
  EXPECT_FALSE(Flag::getValue('custom_nested_json').empty());
  EXPECT_EQ(R'raw({'foo':1,'bar':'baz'})raw',
            Flag::getValue('custom_nested_json'));
}
}

    
    Status ViewsConfigParserPlugin::update(const std::string& source,
                                       const ParserConfig& config) {
  auto cv = config.find('views');
  if (cv == config.end()) {
    return Status(1);
  }
    }
    
        auto process = PlatformProcess::launchWorker(
        kProcessTestExecPath.c_str(),
        static_cast<int>(kExpectedWorkerArgsCount),
        &argv[0]);
    for (size_t i = 0; i < argv.size(); i++) {
      delete[] argv[i];
    }