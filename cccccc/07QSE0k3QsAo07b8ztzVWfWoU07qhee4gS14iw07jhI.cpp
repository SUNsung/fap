
        
          PyObjectStruct* get() const { return ptr_; }
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
      desired_output_for_decode = 'abcdezghIJ';
  expected = string('\0abcdezghIJ\0', 12);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    void OneofGenerator::GenerateClearFunctionDeclaration(io::Printer* printer) {
  printer->Print(
      variables_,
      '/**\n'
      ' * Clears whatever value was set for the oneof '$name$'.\n'
      ' **/\n'
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message);\n');
}
    
    GzipOutputStream::GzipOutputStream(ZeroCopyOutputStream* sub_stream) {
  Init(sub_stream, Options());
}
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    DEF_FP_LIMITS(float, FLT)
DEF_FP_LIMITS(double, DBL)
DEF_FP_LIMITS(long double, LDBL);
    
    namespace google {
namespace protobuf {
namespace util {
namespace error {
inline string CodeEnumToString(error::Code code) {
  switch (code) {
    case OK:
      return 'OK';
    case CANCELLED:
      return 'CANCELLED';
    case UNKNOWN:
      return 'UNKNOWN';
    case INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case NOT_FOUND:
      return 'NOT_FOUND';
    case ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case ABORTED:
      return 'ABORTED';
    case OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case INTERNAL:
      return 'INTERNAL';
    case UNAVAILABLE:
      return 'UNAVAILABLE';
    case DATA_LOSS:
      return 'DATA_LOSS';
  }
    }
    }
    }
    }
    }
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    const AuthProperty AuthPropertyIterator::operator*() {
  return std::pair<grpc::string_ref, grpc::string_ref>(
      property_->name,
      grpc::string_ref(property_->value, property_->value_length));
}
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    #include <grpc/status.h>
#include 'absl/memory/memory.h'
#include 'absl/strings/string_view.h'
#include 'absl/strings/strip.h'
#include 'opencensus/trace/span.h'
#include 'opencensus/trace/span_context.h'
#include 'opencensus/trace/trace_params.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/cpp/common/channel_filter.h'
#include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
    #include 'src/core/lib/gprpp/thd.h'
    
    namespace grpc {
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
    /*!
 * \brief Macro to register tree updater.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_TREE_UPDATER(ColMaker, 'colmaker')
 * .describe('Column based tree maker.')
 * .set_body([]() {
 *     return new ColMaker<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_TREE_UPDATER(UniqueId, Name)                   \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::TreeUpdaterReg&               \
  __make_ ## TreeUpdaterReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->__REGISTER__(Name)
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    /*! \brief collection of rowset */
class RowSetCollection {
 public:
  /*! \brief data structure to store an instance set, a subset of
   *  rows (instances) associated with a particular node in a decision
   *  tree. */
  struct Elem {
    const size_t* begin{nullptr};
    const size_t* end{nullptr};
    int node_id{-1};
      // id of node associated with this instance set; -1 means uninitialized
    Elem()
         = default;
    Elem(const size_t* begin,
         const size_t* end,
         int node_id)
        : begin(begin), end(end), node_id(node_id) {}
    }
    }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    SEXP XGBoosterSaveModel_R(SEXP handle, SEXP fname) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterSaveModel(R_ExternalPtrAddr(handle), CHAR(asChar(fname))));
  R_API_END();
  return R_NilValue;
}
    
    
    {  /*!
   * \brief dump the model in the requested format
   * \param fmap feature map that may help give interpretations of feature
   * \param with_stats extra statistics while dumping model
   * \param format the format to dump the model in
   * \return a vector of dump for boosters.
   */
  virtual std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                             bool with_stats,
                                             std::string format) const = 0;
  /*!
   * \brief create a gradient booster from given name
   * \param name name of gradient booster
   * \param cache_mats The cache data matrix of the Booster.
   * \param base_margin The base margin of prediction.
   * \return The created booster.
   */
  static GradientBooster* Create(
      const std::string& name,
      const std::vector<std::shared_ptr<DMatrix> >& cache_mats,
      bst_float base_margin);
};
    
    
    {    return;
}
    
    using namespace std;
    
    /// Linear Scan
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    }
    }
    
    int main() {
    }
    
    
    {    return 0;
}
    
    
    {
    {                if(prev->right == NULL){
                    res.push_back(cur->val);
                    prev->right = cur;
                    cur = cur->left;
                }
                else{
                    prev->right = NULL;
                    cur = cur->right;
                }
            }
        }
    
            TreeNode* p = root;
        while(p != NULL || !stack.empty()){
            if(p != NULL){
                stack.push(p);
                output.push(p);
                p = p->right;
            }
            else{
                p = stack.top();
                stack.pop();
                p = p->left;
            }
        }
    
      ExtensionManager_getQueryColumns_pargs args;
  args.sql = &sql;
  args.write(oprot_);
    
      // Extract information from the minidump
  r['crash_path'] = fileName;
  logDumpType(control, r);
  logDumpTime(control, r);
  logProcessUptime(system, r);
  logPIDAndTID(system, r);
  logOSVersion(control, r);
  logExceptionInfo(control, r);
  logStackTrace(control, symbols, r);
  logPEPathAndVersion(symbols, r);
  logModulePath(symbols, r);
  logRegisters(client, control, registers, advanced, r);
  logPEBInfo(client, control, symbols, system, data, r);
    
        // We now try to find device information based on any explicit storage
    // controller info.  Once we find one, we can search until the max ID of
    // that controller, and assume that all information with that controller
    // has been retrieved.
    for (size_t i = 0; i <= type->maxID; i++) {
      std::string full_type = type->driver + std::to_string(i);
    }
    
    #include <osquery/logger.h>
    
    bool EnterExitJoiner::isEmpty() const {
  return table_.empty();
}