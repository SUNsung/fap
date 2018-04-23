
        
          /// \brief Return a list of the member names.
  ///
  /// If null, return an empty list.
  /// \pre type() is objectValue or nullValue
  /// \post if type() was nullValue, it remains nullValue
  Members getMemberNames() const;
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
    class ReflectionClassGenerator : public SourceGeneratorBase {
 public:
  ReflectionClassGenerator(const FileDescriptor* file, const Options* options);
  ~ReflectionClassGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_EXTENSION_LITE_H__

    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    CV_EXPORTS_W void max(InputArray src1, Scalar src2, OutputArray dst);
    
    /* End of file. */

    
      ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
      grpc::testing::RunServer();
    
    
    { private:
  GeneratorConfiguration config_;
};
    
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
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    double UsageTimer::Now() {
  auto ts = gpr_now(GPR_CLOCK_REALTIME);
  return ts.tv_sec + 1e-9 * ts.tv_nsec;
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    
    
    
    
    void GLESDebugDraw::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color)
{
    mShaderProgram->use();
    mShaderProgram->setUniformsForBuiltins();
    }
    
        virtual void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
    
    class ApplyForce : public Test
{
public:
	ApplyForce()
	{
		m_world->SetGravity(b2Vec2(0.0f, 0.0f));
    }
    }
    
    
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-8.0f + 8.0f * i, 12.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
    
    		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 4.0f);
    }
    
    namespace {
    }
    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    namespace guetzli {
    }
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    
    {}  // namespace guetzli

    
    #include <string>
#include <vector>
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    void Test_Spy_Sample::TestFun0()
{
    SPY_HOOK_THIS_API(TestFun0);
    int i = 0;
    SPY_ATTACH_VARIABLE('TestFun0 i', i);
    i++;
    xinfo2(TSF'Test');
    }
    
    
/*
 * scop_jenv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    namespace fuzzer {
    }
    
    
    {  T.seekg(0, T.beg);
  Unit Res(FileLen);
  T.read(reinterpret_cast<char *>(Res.data()), FileLen);
  return Res;
}
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    size_t MutationDispatcher::Mutate_AddWordFromPersistentAutoDictionary(
    uint8_t *Data, size_t Size, size_t MaxSize) {
  return AddWordFromDictionary(PersistentAutoDictionary, Data, Size, MaxSize);
}