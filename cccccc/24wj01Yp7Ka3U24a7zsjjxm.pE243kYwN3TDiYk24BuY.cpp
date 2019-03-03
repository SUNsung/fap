
        
        #endif  // TENSORFLOW_PYTHON_FRAMEWORK_CPP_SHAPE_INFERENCE_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow

    
    // Registered numpy type ID. Global variable populated by the registration code.
int npy_bfloat16_ = -1;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
    
    {
    {}  // namespace swig
}  // namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {    // Vector of cached {config, executor} pairs.
    std::vector<
        std::pair<StreamExecutorConfig, std::unique_ptr<StreamExecutor>>>
        configurations GUARDED_BY(configurations_mutex);
  };
    
    // Exposes the family of FFT routines as pre-canned high performance calls for
// use in conjunction with the StreamExecutor abstraction.
//
// Note that this interface is optionally supported by platforms; see
// StreamExecutor::SupportsFft() for details.
//
// This abstraction makes it simple to entrain FFT operations on GPU data into
// a Stream -- users typically will not use this API directly, but will use the
// Stream builder methods to entrain these operations 'under the hood'. For
// example:
//
//  DeviceMemory<std::complex<float>> x =
//    stream_exec->AllocateArray<std::complex<float>>(1024);
//  DeviceMemory<std::complex<float>> y =
//    stream_exec->AllocateArray<std::complex<float>>(1024);
//  // ... populate x and y ...
//  Stream stream{stream_exec};
//  std::unique_ptr<Plan> plan =
//     stream_exec.AsFft()->Create1dPlan(&stream, 1024, Type::kC2CForward);
//  stream
//    .Init()
//    .ThenFft(plan.get(), x, &y);
//  SE_CHECK_OK(stream.BlockHostUntilDone());
//
// By using stream operations in this manner the user can easily intermix custom
// kernel launches (via StreamExecutor::ThenLaunch()) with these pre-canned FFT
// routines.
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    // Get RenderView from current js context (only works under window context).
content::RenderView* GetCurrentRenderView();
content::RenderView* GetEnteredRenderView();
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
      keyval = GetKeycodeFromText(key);
  if (keyval == ui::VKEY_UNKNOWN){
    enable_shortcut_ = false;
  } else {
    enable_shortcut_ = true;
    //only code for ctrl, shift, alt, super and meta modifiers
    int modifiers_value = ui::EF_NONE;
    modifiers = base::ToLowerASCII(modifiers);
    if (modifiers.find('ctrl')!=std::string::npos){
      modifiers_value |= ui::EF_CONTROL_DOWN;
    }
    if (modifiers.find('shift')!=std::string::npos){
      modifiers_value |= ui::EF_SHIFT_DOWN ;
    }
    if (modifiers.find('alt')!=std::string::npos){
      modifiers_value |= ui::EF_ALT_DOWN;
    }
    if (modifiers.find('super')!=std::string::npos
     || modifiers.find('cmd')!=std::string::npos
     || modifiers.find('command')!=std::string::npos){
      modifiers_value |= ui::EF_COMMAND_DOWN;
    }
    if (modifiers.find('meta')!=std::string::npos){
      meta_down_flag_ = true;
    }
    accelerator_ = ui::Accelerator(keyval,modifiers_value);
  }
    
    extern 'C' {
  PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
    PyObject *module = PyModule_Create(&_module);
#else
    PyObject *module = Py_InitModule3(
        const_cast<char*>(kModuleName),
        NULL,
        const_cast<char*>(kModuleDocstring));
#endif
    if (module == NULL) {
      return INITFUNC_ERRORVAL;
    }
    }
    }
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ScopedPythonPtr);
};
    
      protobuf_unittest::TestAllTypes message2;
  message2 = std::move(message1);
  TestUtil::ExpectAllFieldsSet(message2);
    
    // Strip package name from a descriptor's full name.
// For example:
//   Full name   : foo.Bar.Baz
//   Package name: foo
//   After strip : Bar.Baz
string StripPackageName(const string& full_name,
                        const FileDescriptor* file) {
  if (file->package().empty()) {
    return full_name;
  } else {
    // Strip package name
    return full_name.substr(file->package().size() + 1);
  }
}
    
      // -----------------------------------------------------------------
  // Invoke internalBuildGeneratedFileFrom() to build the file.
  printer->Print(
    'com.google.protobuf.Descriptors.FileDescriptor\n'
    '  .internalBuildGeneratedFileFrom(descriptorData,\n');
  printer->Print(
    '    new com.google.protobuf.Descriptors.FileDescriptor[] {\n');
    }
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    
    {  return output.HadError();
}
    
    
    {  zcontext_.zalloc = Z_NULL;
  zcontext_.zfree = Z_NULL;
  zcontext_.opaque = Z_NULL;
  zcontext_.next_out = NULL;
  zcontext_.avail_out = 0;
  zcontext_.total_out = 0;
  zcontext_.next_in = NULL;
  zcontext_.avail_in = 0;
  zcontext_.total_in = 0;
  zcontext_.msg = NULL;
  // default to GZIP format
  int windowBitsFormat = 16;
  if (options.format == ZLIB) {
    windowBitsFormat = 0;
  }
  zerror_ = deflateInit2(
      &zcontext_,
      options.compression_level,
      Z_DEFLATED,
      /* windowBits */15 | windowBitsFormat,
      /* memLevel (default) */8,
      options.compression_strategy);
}
    
      // After Next() returns false, the token should have type TYPE_END.
  EXPECT_EQ(Tokenizer::TYPE_END, tokenizer.current().type);
  EXPECT_EQ('', tokenizer.current().text);
  EXPECT_EQ(0, tokenizer.current().line);
  EXPECT_EQ(kSimpleTokenCases_case.input.size(), tokenizer.current().column);
  EXPECT_EQ(kSimpleTokenCases_case.input.size(),
            tokenizer.current().end_column);
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    
    {  // Check that getting embedded messages returns the objects created during
  // SetAllFields() rather than default instances.
  EXPECT_NE(&unittest::TestAllTypes::OptionalGroup::default_instance(),
            &message.optionalgroup());
  EXPECT_NE(&unittest::TestAllTypes::NestedMessage::default_instance(),
            &message.optional_nested_message());
  EXPECT_NE(&unittest::ForeignMessage::default_instance(),
            &message.optional_foreign_message());
  EXPECT_NE(&unittest_import::ImportMessage::default_instance(),
            &message.optional_import_message());
}
    
    #endif

    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
      // Prints the content of the DENORM for debug purposes.
  void Print() const;
    
    
    {  if (op->send_message() != nullptr) {
    ++sent_message_count_;
  }
  if (op->recv_message() != nullptr) {
    recv_message_ = op->op()->payload->recv_message.recv_message;
    initial_on_done_recv_message_ =
        op->op()->payload->recv_message.recv_message_ready;
    op->op()->payload->recv_message.recv_message_ready = &on_done_recv_message_;
  }
  if (op->recv_trailing_metadata() != nullptr) {
    recv_trailing_metadata_ = op->recv_trailing_metadata()->batch();
    initial_on_done_recv_trailing_metadata_ =
        op->op()->payload->recv_trailing_metadata.recv_trailing_metadata_ready;
    op->op()->payload->recv_trailing_metadata.recv_trailing_metadata_ready =
        &on_done_recv_trailing_metadata_;
  }
  // Call next op.
  grpc_call_next_op(elem, op->op());
}
    
    #include <grpc/support/port_platform.h>
    
    #include <unordered_set>
#include <vector>
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    #include <grpc/support/port_platform.h>