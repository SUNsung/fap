
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #define IPC_MESSAGE_START ShellMsgStart
    
    namespace nwapi {
    }
    
    #include 'content/nw/src/api/menu/menu.h'
    
      GdkRectangle screen_rect;
  gdk_screen_get_monitor_geometry(screen, monitor, &screen_rect);
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    
    {  for (AppWindow* window : windows) {
    if (window->NWCanClose())
      window->GetBaseWindow()->Close();
  }
  return RespondNow(NoArguments());
}
    
        bool ReadHTML(ClipboardData& data) {
      DCHECK(data.type == TYPE_HTML);
      base::string16 text;
      std::string src_url;
      uint32_t fragment_start, fragment_end;
      clipboard_->ReadHTML(ui::CLIPBOARD_TYPE_COPY_PASTE, &text, &src_url, &fragment_start, &fragment_end);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
        if (windows) {
      std::unique_ptr<DesktopMediaList> window_media_list =
        std::make_unique<NativeDesktopMediaList>(
          content::DesktopMediaID::TYPE_WINDOW,
          webrtc::DesktopCapturer::CreateWindowCapturer(options));
      media_list_.push_back(std::move(window_media_list));
    }
    
    #ifdef __clang__
#elif defined __GNUC__ // not clang (gcc comes later since clang emulates gcc)
#  if (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5))
#    define JSONCPP_DEPRECATED(message)  __attribute__ ((deprecated(message)))
#  elif (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1))
#    define JSONCPP_DEPRECATED(message)  __attribute__((__deprecated__))
#  endif  // GNUC version
#endif // __clang__ || __GNUC__
    
    bool OurReader::readValue() {
  if (stackDepth_ >= features_.stackLimit_) throwRuntimeError('Exceeded stackLimit in readValue().');
  ++stackDepth_;
  Token token;
  skipCommentTokens(token);
  bool successful = true;
    }
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
     private:
  const FileDescriptor* file_;
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
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
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    namespace google {
namespace protobuf {
  class FieldDescriptor;         // descriptor.h
  class Descriptor;              // descriptor.h
  class ServiceDescriptor;       // descriptor.h
  namespace compiler {
    namespace java {
      class MessageGenerator;    // message.h
      class ExtensionGenerator;  // extension.h
      class ServiceGenerator;    // service.h
      class Context;             // context.h
    }
  }
}
    }
    
    void ImmutableLazyMessageOneofFieldGenerator::
GenerateMergingCode(io::Printer* printer) const {
  printer->Print(variables_,
    'if (!($has_oneof_case_message$)) {\n'
    '  $oneof_name$_ = new $lazy_type$();\n'
    '}\n'
    '(($lazy_type$) $oneof_name$_).merge(\n'
    '    ($lazy_type$) other.$oneof_name$_);\n'
    '$set_oneof_case_message$;\n');
}
    
    #include 'override_macros.h'
    
    void THDTensor_(potrs)(THDTensor *rb, THDTensor *b, THDTensor *a,  const char *uplo) {
  bool free_b = false;
  if (b == NULL) b = rb;
    }
    
    	static int bio_recv(void *ctx, unsigned char *buf, size_t len);
	static int bio_send(void *ctx, const unsigned char *buf, size_t len);
    
        if (!m_huff_val[index])
      m_huff_val[index] = (uint8 *)alloc(256);
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
    /*Some common macros for potential platform-specific optimization.*/
#include <math.h>
#if !defined(_ocintrin_H)
# define _ocintrin_H (1)
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    	// Now set the registry keys
	HKEY root = GetRootKey(opt);
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #ifndef BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP
#define BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #define BOOST_ASIO_ACCEPT_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'AcceptHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    
    {    // Connect to echo server
    newConnection();
    return uv_run(loop, UV_RUN_DEFAULT);
}
    
    void echo()
{
    for (int i = 0; i < connections; i++) {
        // Write message on random socket
        uv_write(new uv_write_t, sockets[rand() % connections], &framePack, 1, [](uv_write_t *write_t, int status) {
            if (status < 0) {
                cout << 'Write error' << endl;
                exit(0);
            }
            delete write_t;
        });
    }
    }
    
    
    {}

    
    #include 'Networking.h'
    
    Node::Node(int recvLength, int prePadding, int postPadding, bool useDefaultLoop) {
    nodeData = new NodeData;
    nodeData->recvBufferMemoryBlock = new char[recvLength];
    nodeData->recvBuffer = nodeData->recvBufferMemoryBlock + prePadding;
    nodeData->recvLength = recvLength - prePadding - postPadding;
    }
    
    
    {        httpSocket->sendTransformed<NoopTransformer>(message, length, callback, callbackData, 0);
        hasHead = true;
    }
    
        Hub(int extensionOptions = 0, bool useDefaultLoop = false, unsigned int maxPayload = 16777216) : uS::Node(LARGE_BUFFER_SIZE, WebSocketProtocol<SERVER, WebSocket<SERVER>>::CONSUME_PRE_PADDING, WebSocketProtocol<SERVER, WebSocket<SERVER>>::CONSUME_POST_PADDING, useDefaultLoop),
                                             Group<SERVER>(extensionOptions, maxPayload, this, nodeData), Group<CLIENT>(0, maxPayload, this, nodeData) {
        inflateInit2(&inflationStream, -15);
        zlibBuffer = new char[LARGE_BUFFER_SIZE];
    }
    
    // Creates an action that invokes the given method on the given object
// with the mock function's arguments.
template <class Class, typename MethodPtr>
PolymorphicAction<internal::InvokeMethodAction<Class, MethodPtr> > Invoke(
    Class* obj_ptr, MethodPtr method_ptr) {
  return MakePolymorphicAction(
      internal::InvokeMethodAction<Class, MethodPtr>(obj_ptr, method_ptr));
}
    
    class MockFoo {
 public:
  // A mock method that returns a user-defined type.  Google Mock
  // doesn't know what the default value for this type is.
  MOCK_METHOD0(GetNonDefaultConstructible, NonDefaultConstructible());
};
    
    $for k [[
$range m 0..k-1
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
        E* element = new E(old_head->element());
    delete old_head;
    
    // A group of value-parameterized tests.
    
      h1 = fmix64(h1);
  h2 = fmix64(h2);
    
    
    {
    { protected:
  float momentum_{0.9};
  float weight_decay_{0.0};
  bool nesterov_;
  bool fp32_update_;
  INPUT_TAGS(GRAD, MOMENTUM, LR, PARAM);
  OUTPUT_TAGS(OUTPUT_GRAD, OUTPUT_MOMENTUM, OUTPUT_PARAM);
};
}

    
    #include 'caffe2/core/operator.h'
#include 'caffe2/core/timer.h'
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
      // Executes the closure F on the CuDNNState associated with state_idx
  template <typename F>
  void with_cudnn_state(size_t state_idx, F&& f) {
    CAFFE_ENFORCE(
        state_idx < CAFFE2_COMPILE_TIME_MAX_CUDNN_STATES, 'Invalid state_idx');
    auto& sync_state = cudnn_states()[context_->cuda_gpu_id()][state_idx];
    }
    
    #define MAKE_OPENGL_OPERATOR(_op)                                              \
  _op->mutable_device_option()->set_device_type(OPENGL);
    
      NetBase* net = ws->CreateNet(predict_net_def);
  LOG(INFO) << '[C2DEBUG] Benchmarking OpenGL Net';
  net->TEST_Benchmark(caffe2::FLAGS_warmup, caffe2::FLAGS_iter, caffe2::FLAGS_run_individual);
  // Test CPU
  for (auto i = 0; i < predict_net_def.op().size(); ++i) {
    auto op = predict_net_def.mutable_op(i);
    if (std::find(cpu_ops.begin(), cpu_ops.end(), op->type()) == cpu_ops.end()) {
      op->mutable_device_option()->set_device_type(CPU);
    }
  }
  predict_net_def.set_type('simple');
  predict_net_def.set_name('cpu_net');
  net = ws->CreateNet(predict_net_def);
  LOG(INFO) << '[C2DEBUG] Benchmarking CPU Net';
  net->TEST_Benchmark(caffe2::FLAGS_warmup, caffe2::FLAGS_iter, caffe2::FLAGS_run_individual);
    
      TIndex output_offset = 0;
  // Sort preserving indices
  for (TIndex i = 0; i < linear_shape[0]; ++i) {
    // Build a min-heap, the heap element is pair of (value, idx)
    // the top of the heap is the smallest value
    std::priority_queue<
        std::pair<T, TIndex>,
        std::vector<std::pair<T, TIndex>>,
        ValueCmp<T>>
        PQ;
    }
    
    namespace caffe2 {
    }