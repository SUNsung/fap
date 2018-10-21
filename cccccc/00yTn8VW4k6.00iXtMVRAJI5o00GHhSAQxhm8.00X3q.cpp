
        
        // Calls the registered C++ shape inference function for <node> (a serialized
// NodeDef).
// Should not be called for shape functions that access input tensors; constant
// input tensor values are not made available, and so the inferred shapes will
// be less precise than they could be.
//
// Returns an error, or OK, in <out_status> according to whether the shape
// inference was successful.
//
// On success, returns a vector populated with the inferred output shapes (as
// serialized CppShapeInferenceResult protos) followed by a serialized
// CppShapeInferenceInputsNeeded proto.
//
// This is temporary code to be used during the migration
// from python shape inference functions to C++ shape inference functions.
std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow

    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class RandomAccessFile;
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    #ifndef TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_ACTIVATION_H_
#define TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_ACTIVATION_H_
    
    // BLAS plugin for CUDA platform via cuBLAS library.
//
// This satisfies the platform-agnostic BlasSupport interface.
//
// Note that the cuBLAS handle that this encapsulates is implicitly tied to the
// context (and, as a result, the device) that the parent CUDAExecutor is tied
// to. This simply happens as an artifact of creating the cuBLAS handle when a
// CUDA context is active.
//
// Thread-safe post-initialization.
class CUDABlas : public blas::BlasSupport {
 public:
  explicit CUDABlas(CUDAExecutor *parent);
    }
    
    port::StatusOr<DriverVersion> Diagnostician::FindKernelModuleVersion(
    const string &driver_version_file_contents) {
  static const char *kDriverFilePrelude = 'Kernel Module  ';
  size_t offset = driver_version_file_contents.find(kDriverFilePrelude);
  if (offset == string::npos) {
    return port::Status(
        port::error::NOT_FOUND,
        port::StrCat('could not find kernel module information in '
                     'driver version file contents: \'',
                     driver_version_file_contents, '\''));
  }
    }
    
    
    
      std::vector<std::thread> workers;
  for (auto worker = size_t{0}; worker < num_threads; ++worker) {
    workers.push_back(std::thread([&] {
      try {
        hphp_thread_init();
        hphp_session_init(Treadmill::SessionKind::HHBBC);
        SCOPE_EXIT {
          hphp_context_exit();
          hphp_session_exit();
          hphp_thread_exit();
        };
    }
    }
    }
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    struct ObjectData;
struct Object;
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
      int cnt = 1;
  bool ignore_default_configs = ::getenv('HHVM_NO_DEFAULT_CONFIGS') != nullptr;
  while (cnt < argc) {
    if (strcmp(argv[cnt], '-a') == 0 ||
        strcmp(argv[cnt], '--interactive') == 0) {
      need_file = false;
      newargv.push_back('-a');
      cnt++;
      continue;
    }
    if (strcmp(argv[cnt], '-z') == 0) {
      std::string arg = '-vDynamicExtensions.0=';
      arg.append(argv[cnt+1]);
      newargv.push_back(arg.c_str());
      cnt += 2;
      continue;
    }
    if (strcmp(argv[cnt], '-l') == 0 || strcmp(argv[cnt], '--lint') == 0) {
      cnt++;
      lint = true;
      continue;
    }
    if (strcmp(argv[cnt], '-r') == 0) {
      if (cnt + 1 == argc) {
        // Hmm, no program fragment passed along. Let hhvm print its usage
        // message?
        newargv.push_back(argv[cnt++]);
        continue;
      }
      assertx(cnt + 1 < argc);
      program = argv[cnt + 1];
      need_file = true;
      cnt += 2;
      continue;
    }
    if (strcmp(argv[cnt], '-i') == 0 || strcmp(argv[cnt], '--info') == 0) {
      // Pretend they did '-r 'phpinfo();''
      program = 'phpinfo();';
      need_file = true;
      cnt = argc; // no need to check the rest of options and arguments
      break;
    }
    if (strcmp(argv[cnt], '-w') == 0) {
      cnt++;
      show = true;
      continue;
    }
    if (strcmp(argv[cnt], '-v') == 0 || strcmp(argv[cnt], '--version') == 0) {
      newargv.push_back('--version');
      cnt = argc; // no need to check the rest of options and arguments
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '--modules') == 0) {
    // zend has a -m flag but we're already using it for --mode
      newargv.push_back('--modules');
      cnt = argc; // no need to check the rest of options and arguments
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '-f') == 0 || strcmp(argv[cnt], '--file') == 0) {
      cnt++;
      newargv.push_back(lint ? '-l' : '-f');
      newargv.push_back(argv[cnt++]);
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '-n') == 0) {
      ignore_default_configs = true;
      cnt++;
      newargv.push_back('--no-config');
      continue;
    }
    if (strcmp(argv[cnt], '-c')  == 0) {
      if (cnt + 1 < argc && argv[cnt + 1][0] != '-') {
        newargv.push_back('-c');
        newargv.push_back(argv[cnt + 1]);
        cnt = cnt + 2;
        continue;
      } else {
        fprintf(stderr, 'Notice: No config file specified');
        exit(EXIT_FAILURE);
      }
    }
    if (strcmp(argv[cnt], '-d')  == 0 || strcmp(argv[cnt], '--define') == 0) {
      ini_fd = get_tempfile_if_not_exists(ini_fd, ini_path);
    }
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {  closedir(dir);
}
    
      String ret(maxlen, ReserveString);
  char* path = ret.mutableData();
    
    /**
 * Make dest directory look identical to src by copying files and directories,
 * without copying identical files (so they keep the same timestamp as before).
 */
void syncdir(const std::string &dest, const std::string &src,
             bool keepSrc = false);
    
    namespace CNTK
{
    class UDFUtils
    {
    public:
    }
    }
    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
    #endif