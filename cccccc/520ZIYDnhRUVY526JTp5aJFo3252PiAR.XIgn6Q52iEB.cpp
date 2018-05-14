
        
        #include 'atom/browser/ui/views/frameless_view.h'
    
    UnresponsiveSuppressor::~UnresponsiveSuppressor() {
  g_suppress_level--;
}
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // The session service has been saved.  This notification type is only sent
  // if there were new SessionService commands to save, and not for no-op save
  // operations.
  NOTIFICATION_SESSION_SERVICE_SAVED,
    
    #include 'base/time/time.h'
    
    
    {}  // namespace printing
    
    
    {  DISALLOW_COPY_AND_ASSIGN(ChromeBrowserPepperHostFactory);
};
    
      /// Return true if the object has a member named key.
  /// \note 'key' must be null-terminated.
  bool isMember(const char* key) const;
  /// Return true if the object has a member named key.
  /// \param key may contain embedded nulls.
  bool isMember(const std::string& key) const;
  /// Same as isMember(std::string const& key)const
  bool isMember(const char* begin, const char* end) const;
#ifdef JSON_USE_CPPTL
  /// Return true if the object has a member named key.
  bool isMember(const CppTL::ConstString& key) const;
#endif
    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ReflectionClassGenerator);
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
      // Set up security params
  SecurityParams security;
  security.set_use_test_ca(true);
  security.set_server_host_override('foo.test.google.fr');
  client_config.mutable_security_params()->CopyFrom(security);
  server_config.mutable_security_params()->CopyFrom(security);
    
    #endif  // GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H

    
      Result Mark() const;
    
    #include <iostream>
#include <sstream>
#include <string>
#include <vector>
    
                if (rv == 0)
                rv = numCols;
            else if (rv != numCols)
                LogicError('DecimateMinibatch: Inconsistent number of columns among inputs (found %d and %d).', (int) rv, (int) numCols);
    
        // Parallel training related with ASGD 
    intargvector m_nSyncSamplesPerWorker;
    bool m_isAsyncBufferEnabled;
    bool m_isSimulateMA;
    AdjustLearningRateAtBeginning m_adjustLearningRateAtBeginning;
    double m_adjustCoefficient;
    size_t m_adjustPerMinibatches;
    
            const VERSION c_noVersion = INT64_MAX;
    
        const OpSignature& OperatorSchema::GetOpSignature() const
    {
        return m_opSignature;
    }
    
            bool StringRange::EndsWith(const StringRange& p_str) const
        {
            return ((m_size >= p_str.m_size) &&
                (memcmp(m_data + (m_size - p_str.m_size), p_str.m_data, p_str.m_size) == 0));
        }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(BatchNormalization)
        .Description('Carries out batch normalization as described in the paper'
            'https://arxiv.org/abs/1502.03167. Depending on the mode it is being run,'
            'there are multiple cases for the number of outputs, which we list below:'
            ''
            'Output case #1: Y, mean, var, saved_mean, saved_var (training mode)'
            'Output case #2: Y (test mode)')
        .Input('X',
            'The input 4-dimensional tensor of shape NCHW or NHWC depending '
            'on the order parameter.',
            'T')
        .Input('scale',
            'The scale as a 1-dimensional tensor of size C to be applied to the '
            'output.',
            'T')
        .Input('B',
            'The bias as a 1-dimensional tensor of size C to be applied to the '
            'output.',
            'T')
        .Input('mean',
            'The running mean (training) or the estimated mean (testing) '
            'as a 1-dimensional tensor of size C.',
            'T')
        .Input('var',
            'The running variance (training) or the estimated '
            'variance (testing) as a 1-dimensional tensor of size C.',
            'T')
        .Output('Y', 'The output 4-dimensional tensor of the same shape as X.',
            'T')
        .Output('mean',
            'The running mean after the BatchNormalization operator. Must be in-place '
            'with the input mean. Should not be used for testing.',
            'T')
        .Output('var',
            'The running variance after the BatchNormalization operator. Must be '
            'in-place with the input var. Should not be used for testing.',
            'T')
        .Output('saved_mean',
            'Saved mean used during training to speed up gradient '
            'computation. Should not be used for testing.',
            'T')
        .Output('saved_var',
            'Saved variance used during training to speed up '
            'gradient computation. Should not be used for testing.',
            'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('epsilon',
            'The epsilon value to use to avoid division by zero.',
            AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('is_test',
            'If set to nonzero, run spatial batch normalization in test mode.',
            AttrType::AttributeProto_AttributeType_INT)
        .Attr('momentum',
            'Factor used in computing the running mean and variance.'
            'e.g., running_mean = running_mean * momentum + mean * (1 - momentum)',
            AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('spatial',
            'Compute the mean and variance across all spatial elements or per feature.',
            AttrType::AttributeProto_AttributeType_INT);
    
    #define LONGTHREADID2INT(a) ((a >> 32)^((a & 0xFFFF)))
DEFINE_FIND_CLASS(KXlog, 'com/tencent/mars/xlog/Xlog')
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    //
//  comm_frequency_limit.h
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
        JNIEnv* GetEnv();
    int Status();
    
    
    {} // namespace aria2
    
      std::unique_ptr<AuthConfig> getDefaultAuthConfig() const;
    
    AbstractBtMessage::AbstractBtMessage(uint8_t id, const char* name)
    : BtMessage(id),
      invalidate_(false),
      uploading_(false),
      cuid_(0),
      name_(name),
      pieceStorage_(nullptr),
      dispatcher_(nullptr),
      messageFactory_(nullptr),
      requestFactory_(nullptr),
      peerConnection_(nullptr),
      metadataGetMode_(false)
{
}
    
    class AbstractHttpServerResponseCommand : public Command {
private:
  DownloadEngine* e_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<HttpServer> httpServer_;
  Timer timeoutTimer_;
  bool readCheck_;
  bool writeCheck_;
    }
    
    bool AbstractOptionHandler::getChangeGlobalOption() const
{
  return flags_ & FLAG_CHANGE_GLOBAL_OPTION;
}