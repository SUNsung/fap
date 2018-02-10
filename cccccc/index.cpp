
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    
    {
    {      case ACTION_CLOSE:
      default:
        // Do not close stdin/out/err, instead redirect them to /dev/null so
        // their file descriptors remain unavailable for reuse by open(), etc.
        if (i <= CHAN_STDERR) {
          if (devnull_fd < 0) {
            while ((devnull_fd = open('/dev/null', O_RDWR, 0)) < 0) {
              if (!retry(errno)) {
                _exit(1);
              }
            }
          }
          while (dup2(devnull_fd, i) < 0) {
            if (!retry(errno)) {
              _exit(1);
            }
          }
        } else {
          close(i);
        }
        break;
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
    class SYCLDeviceContext : public DeviceContext {
 public:
  SYCLDeviceContext() {}
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {
    {      auto output = merged->template flat<T>().data();
      DynamicStitchGPUImpl<T>(c->eigen_gpu_device(), slice_size, first_dim_size,
                              indices_flat.data(), data_flat.data(), output);
    }
  }
};
    
    
    {
    {}  // namespace testing
}  // namespace grpc

    
     protected:
  void AddOp(grpc_op* ops, size_t* nops) {
    if (!send_) return;
    grpc_op* op = &ops[(*nops)++];
    op->op = GRPC_OP_SEND_CLOSE_FROM_CLIENT;
    op->flags = 0;
    op->reserved = NULL;
  }
  void FinishOp(bool* status) { send_ = false; }
    
    static void grpc_slice_split_inner(grpc_slice str, const char* sep,
                                   grpc_slice_buffer* dst, bool no_space) {
  const size_t sep_len = strlen(sep);
  size_t begin, end;
  const uint8_t* str_buffer = GRPC_SLICE_START_PTR(str);
  size_t sep_pos;
    }
    
    Status TestServiceImpl::RequestStream(ServerContext* context,
                                      ServerReader<EchoRequest>* reader,
                                      EchoResponse* response) {
  // If 'server_try_cancel' is set in the metadata, the RPC is cancelled by
  // the server by calling ServerContext::TryCancel() depending on the value:
  //   CANCEL_BEFORE_PROCESSING: The RPC is cancelled before the server reads
  //   any message from the client
  //   CANCEL_DURING_PROCESSING: The RPC is cancelled while the server is
  //   reading messages from the client
  //   CANCEL_AFTER_PROCESSING: The RPC is cancelled after the server reads
  //   all the messages from the client
  int server_try_cancel = GetIntValueFromMetadata(
      kServerTryCancelRequest, context->client_metadata(), DO_NOT_CANCEL);
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
      // For now, we do not support copying.
  InlinedVector(const InlinedVector&) = delete;
  InlinedVector& operator=(const InlinedVector&) = delete;
    
    #include <gtest/gtest.h>
    
    gpr_once g_once_init_add_prod_ssl_provider = GPR_ONCE_INIT;
// Register ssl with non-test roots type to the credentials provider.
void AddProdSslType() {
  testing::GetCredentialsProvider()->AddSecureType(
      kProdTlsCredentialsType, std::unique_ptr<testing::CredentialTypeProvider>(
                                   new SslCredentialProvider));
}
    
    extern std::vector<grpc::testing::Server*>* g_inproc_servers;
    
                if (EXPECTS_CRASH_DUMP_CONTENT == _state) {
                _state = EXPECTS_CRASH_DUMP_HEADER;
                return 0;
            }
    
    #endif

    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
    }
    
        bool Check();  // true pass, false limit
    
    
/*
 * ServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
      private:
    SpyCore() {}
    ~SpyCore() {}
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    jvalue JNU_CallMethodByName(JNIEnv* _env, jobject obj, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, jclass clazz, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, const char* _class_name, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByMethodInfo(JNIEnv* _env, JniMethodInfo _method_info, ...);
jvalue JNU_GetStaticField(JNIEnv* _env, jclass clazz, const char* _name, const char* sig);
jvalue JNU_GetField(JNIEnv* _env, jobject obj, const char* _name, const char* sig);
    
    inline flatbuffers::Offset<EnumVal> CreateEnumValDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int64_t value = 0,
    flatbuffers::Offset<Object> object = 0,
    flatbuffers::Offset<Type> union_type = 0) {
  return reflection::CreateEnumVal(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      value,
      object,
      union_type);
}
    
    bool VerifyCharacter(flatbuffers::Verifier &verifier, const void *obj, Character type);
bool VerifyCharacterVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);
    
      // Start the server. Lock to change the variable we're changing.
  wait_for_server.lock();
  server_instance = builder.BuildAndStart().release();
  wait_for_server.unlock();
  server_instance_cv.notify_one();
    
    // Computes how many bytes you'd have to pad to be able to write an
// 'scalar_size' scalar if the buffer had grown to 'buf_size' (downwards in
// memory).
inline size_t PaddingBytes(size_t buf_size, size_t scalar_size) {
  return ((~buf_size) + 1) & (scalar_size - 1);
}
    
      static TypedVector EmptyTypedVector() {
    static const uint8_t empty_typed_vector[] = { 0 /*len*/ };
    return TypedVector(empty_typed_vector + 1, 1, TYPE_INT);
  }
  bool IsTheEmptyVector() const {
    return data_ == TypedVector::EmptyTypedVector().data_;
  }
    
    // Set any struct field as a 64bit int, regardless of type what it is.
inline void SetAnyFieldI(Struct *st, const reflection::Field &field,
                         int64_t val) {
  SetAnyValueI(field.type()->base_type(), st->GetAddressOf(field.offset()),
               val);
}
    
      // to ensure it is correct, we now generate text back from the binary,
  // and compare the two:
  std::string jsongen;
  if (!GenerateText(parser, parser.builder_.GetBufferPointer(), &jsongen)) {
    printf('Couldn't serialize parsed data to JSON!\n');
    return 1;
  }