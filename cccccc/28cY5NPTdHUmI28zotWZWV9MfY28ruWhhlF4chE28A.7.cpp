
        
          Status DecorateGraph(Graph* graph, Device* device) override;
  Status PublishGraph(const Graph& graph, const string& device_name) override;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class TextLineReaderOp : public ReaderOpKernel {
 public:
  explicit TextLineReaderOp(OpKernelConstruction* context)
      : ReaderOpKernel(context) {
    int skip_header_lines = -1;
    OP_REQUIRES_OK(context,
                   context->GetAttr('skip_header_lines', &skip_header_lines));
    OP_REQUIRES(context, skip_header_lines >= 0,
                errors::InvalidArgument('skip_header_lines must be >= 0 not ',
                                        skip_header_lines));
    Env* env = context->env();
    SetReaderFactory([this, skip_header_lines, env]() {
      return new TextLineReader(name(), skip_header_lines, env);
    });
  }
};
    
    namespace tensorflow {
    }
    
    template <int NDIMS>
void TensorSlice::FillIndicesAndSizes(
    const TensorShape& shape, Eigen::DSizes<Eigen::DenseIndex, NDIMS>* indices,
    Eigen::DSizes<Eigen::DenseIndex, NDIMS>* sizes) const {
  CHECK_EQ(shape.dims(), dims()) << 'Incompatible dimensions between shape '
                                 << 'slices: shape = ' << shape.DebugString()
                                 << ', slice = ' << DebugString();
  CHECK_GE(NDIMS, dims()) << 'Asking for a ' << NDIMS << '-dim slice from '
                          << 'a slice of dimension ' << dims();
  for (int d = 0; d < dims(); ++d) {
    if (IsFullAt(d)) {
      (*indices)[d] = 0;
      (*sizes)[d] = shape.dim_size(d);
    } else {
      (*indices)[d] = starts_[d];
      (*sizes)[d] = lengths_[d];
    }
  }
  for (int d = dims(); d < NDIMS; ++d) {
    (*indices)[d] = 0;
    (*sizes)[d] = 1;
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status AcoshGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'y'}, 'Acosh', {'x'}},
      {{'sinh'}, 'Sinh', {'y'}},
      {{'dx'}, 'Mul', {'dy', 'sinh'}},  // dy * sinh(y)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Acosh', AcoshGrad);
    
    // Poll a gRPC debug server by sending a small tensor repeatedly till success.
//
// Args:
//   server_url: gRPC URL of the server to poll, e.g., 'grpc://foo:3333'.
//   max_attempts: Maximum number of attempts.
//
// Returns:
//   Whether the polling succeeded within max_attempts.
bool PollTillFirstRequestSucceeds(const string& server_url,
                                  const size_t max_attempts);
    
      /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
      Optional<const markup::LocalizationKeyField *>
  getLocalizationKeyField() const {
    return Parts.LocalizationKeyField;
  }
    
    // On OS X and iOS, swift_once_t matches dispatch_once_t.
typedef long swift_once_t;
    
      virtual bool recordHash(StringRef hash, bool isKnown) = 0;
  virtual bool startDependency(StringRef name, StringRef path, bool isClangModule,
                               bool isSystem, StringRef hash) = 0;
  virtual bool finishDependency(bool isClangModule) = 0;
  virtual Action startSourceEntity(const IndexSymbol &symbol) = 0;
  virtual bool finishSourceEntity(SymbolInfo symInfo, SymbolRoleSet roles) = 0;
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      WebView* view = frame->view();
  if (!view)
    return NULL;  // can happen during closing.
    
    
    {} // namespace nwapi
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  gtk_widget_set_tooltip_text(menu_item_, tooltip.c_str());
}
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, true);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    
    {
    {}  // namespace
}  // namespace grpc
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    ///////////////////////////////////////////////////////////////////////////////
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    namespace HPHP { namespace jit {
    }
    }
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
    #include <sys/types.h>
#include <sys/stat.h>
#include <cstdio>
#include <cstring>
#include <dlfcn.h>
#include <fcntl.h>
    
    
///////////////////////////////////////////////////////////////////////////////
    
    
    {  // if dir is a file, returns IOError
  ASSERT_OK(env_->CreateDir(test_dir_));
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(
      env_->NewWritableFile(test_dir_ + '/file', &writable_file, soptions_));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
  ASSERT_TRUE(!env_->GetChildren(test_dir_ + '/file', &children).ok());
  ASSERT_EQ(0U, children.size());
}
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
    #include 'rocksdb/db.h'
#include 'rocksdb/merge_operator.h'
#include 'rocksdb/utilities/db_ttl.h'
#include 'utilities/merge_operators.h'
#include 'utilities/merge_operators/string_append/stringappend.h'
#include 'utilities/merge_operators/string_append/stringappend2.h'
#include 'util/testharness.h'
#include 'util/random.h'
    
    
    {}  // namespace rocksdb
    
    SyncPoint::SyncPoint() : 
  impl_(new Data) {
}
    
      Env* env_;
    
    #include 'rocksjni/compaction_filter_factory_jnicallback.h'
#include 'rocksjni/portal.h'
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    WakeUpLock::~WakeUpLock() {
    ASSERT(object_);
    xinfo2('delete wakeuplock:%p', object_);
    }
    
        void Lock(int64_t _timelock);  // ms
    void Lock();
    void Unlock();
    bool IsLocking();
    
        _outbuf.AllocWrite(st.total_length);
    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    ScopeJEnv::~ScopeJEnv() {
    if (NULL != env_) {
        env_->PopLocalFrame(NULL);
    }
}
    
    #include <stddef.h>
#include <stdint.h>
    
    
    {} // namespace fuzzer
    
    #include 'FuzzerIO.h'
#include 'FuzzerDefs.h'
#include 'FuzzerExtFunctions.h'
#include <algorithm>
#include <cstdarg>
#include <fstream>
#include <iterator>
#include <sys/stat.h>
#include <sys/types.h>
    
    Unit FileToVector(const std::string &Path, size_t MaxSize = 0,
                  bool ExitOnError = true);
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
      if (FileType == FILE_TYPE_UNKNOWN) {
    Printf('GetFileType() failed for \'%s\' (Error code: %lu).\n', Path.c_str(),
        GetLastError());
    CloseHandle(FileHandle);
    return false;
  }
    
    size_t MutationDispatcher::Mutate_AddWordFromManualDictionary(uint8_t *Data,
                                                              size_t Size,
                                                              size_t MaxSize) {
  return AddWordFromDictionary(ManualDictionary, Data, Size, MaxSize);
}
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_pc_indir(uintptr_t Callee) {
  uintptr_t PC = (uintptr_t)__builtin_return_address(0);
  fuzzer::TPC.HandleCallerCallee(PC, Callee);
}