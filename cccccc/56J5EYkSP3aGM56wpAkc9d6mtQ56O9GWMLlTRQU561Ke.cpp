  EXPECT_EQ(false, refl->HasField(*message, optional_int32));
  refl->SetInt32(message, optional_int32, 42);
  EXPECT_EQ(true, refl->HasField(*message, optional_int32));
  refl->SetInt32(message, optional_int32, 0);
  EXPECT_EQ(false, refl->HasField(*message, optional_int32));
    
    void GzipInputStream::DoNextOutput(const void** data, int* size) {
  *data = output_position_;
  *size = ((uintptr_t)zcontext_.next_out) - ((uintptr_t)output_position_);
  output_position_ = zcontext_.next_out;
}
    
    #include <grpcpp/support/channel_arguments.h>
    
    namespace grpc {
    }
    
    using grpc::Status;
using grpc::StatusCode;
using grpc::reflection::v1alpha::ErrorResponse;
using grpc::reflection::v1alpha::ExtensionNumberResponse;
using grpc::reflection::v1alpha::ExtensionRequest;
using grpc::reflection::v1alpha::FileDescriptorResponse;
using grpc::reflection::v1alpha::ListServiceResponse;
using grpc::reflection::v1alpha::ServerReflectionRequest;
using grpc::reflection::v1alpha::ServerReflectionResponse;
using grpc::reflection::v1alpha::ServiceResponse;
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    #endif // incl_HPHP_OUTPUT_FILE_H_
