
        
        
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    EnumGenerator::EnumGenerator(const EnumDescriptor* descriptor, const Options* options) :
    SourceGeneratorBase(descriptor->file(), options),
    descriptor_(descriptor) {
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void Context::InitializeFieldGeneratorInfoForFields(
    const std::vector<const FieldDescriptor*>& fields) {
  // Find out all fields that conflict with some other field in the same
  // message.
  std::vector<bool> is_conflict(fields.size());
  std::vector<string> conflict_reason(fields.size());
  for (int i = 0; i < fields.size(); ++i) {
    const FieldDescriptor* field = fields[i];
    const string& name = UnderscoresToCapitalizedCamelCase(field);
    for (int j = i + 1; j < fields.size(); ++j) {
      const FieldDescriptor* other = fields[j];
      const string& other_name = UnderscoresToCapitalizedCamelCase(other);
      if (name == other_name) {
        is_conflict[i] = is_conflict[j] = true;
        conflict_reason[i] = conflict_reason[j] =
            'capitalized name of field \'' + field->name() +
            '\' conflicts with field \'' + other->name() + '\'';
      } else if (IsConflicting(field, name, other, other_name,
                               &conflict_reason[j])) {
        is_conflict[i] = is_conflict[j] = true;
        conflict_reason[i] = conflict_reason[j];
      }
    }
    if (is_conflict[i]) {
      GOOGLE_LOG(WARNING) << 'field \'' << field->full_name() << '\' is conflicting '
                   << 'with another field: ' << conflict_reason[i];
    }
  }
  for (int i = 0; i < fields.size(); ++i) {
    const FieldDescriptor* field = fields[i];
    FieldGeneratorInfo info;
    info.name = CamelCaseFieldName(field);
    info.capitalized_name = UnderscoresToCapitalizedCamelCase(field);
    // For fields conflicting with some other fields, we append the field
    // number to their field names in generated code to avoid conflicts.
    if (is_conflict[i]) {
      info.name += SimpleItoa(field->number());
      info.capitalized_name += SimpleItoa(field->number());
      info.disambiguated_reason = conflict_reason[i];
    }
    field_generator_info_map_[field] = info;
  }
}
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
    namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    }
    
    class ExtensionGenerator {
 public:
  ExtensionGenerator(const string& root_class_name,
                     const FieldDescriptor* descriptor);
  ~ExtensionGenerator();
    }
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    
    { private:
  // vector: node_id -> elements
  std::vector<Elem> elem_of_each_node_;
};
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
      void SendThreadFunc() {
    using common::time::Clock;
    using common::time::AsInt64;
    using common::time::micros;
    using common::ErrorCode;
    AINFO << 'Send thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    std::vector<CanFrame> frames;
    frames.resize(MAX_CAN_SEND_FRAME_LEN);
    }
    
    /************************************************************************/
/************************************************************************/
/* Function: GetErrorString()                                            */
/* Return ASCII representation of NTCAN return code                     */
/************************************************************************/
/************************************************************************/
const int32_t ERROR_BUF_SIZE = 200;
std::string EsdCanClient::GetErrorString(const NTCAN_RESULT ntstatus) {
  struct ERR2STR {
    NTCAN_RESULT ntstatus;
    const char *str;
  };
    }
    
      /**
   * @brief Start the fake CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    #include 'modules/drivers/canbus/common/byte.h'
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    /**
 * @file
 */