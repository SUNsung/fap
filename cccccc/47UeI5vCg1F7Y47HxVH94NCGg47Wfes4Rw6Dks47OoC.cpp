
        
        #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
    std::string LogFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'log');
}
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
    #endif  // STORAGE_LEVELDB_DB_VERSION_EDIT_H_

    
    class VersionEditTest { };
    
    TEST(FindFileTest, Single) {
  Add('p', 'q');
  ASSERT_EQ(0, Find('a'));
  ASSERT_EQ(0, Find('p'));
  ASSERT_EQ(0, Find('p1'));
  ASSERT_EQ(0, Find('q'));
  ASSERT_EQ(1, Find('q1'));
  ASSERT_EQ(1, Find('z'));
    }
    
    // Arrange to generate values that shrink to this fraction of
// their original size after compression
static double FLAGS_compression_ratio = 0.5;
    
        const char* benchmarks = FLAGS_benchmarks;
    while (benchmarks != NULL) {
      const char* sep = strchr(benchmarks, ',');
      Slice name;
      if (sep == NULL) {
        name = benchmarks;
        benchmarks = NULL;
      } else {
        name = Slice(benchmarks, sep - benchmarks);
        benchmarks = sep + 1;
      }
    }
    
    
    {  // Changes *key to a short string >= *key.
  // Simple comparator implementations may return with *key unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortSuccessor(std::string* key) const = 0;
};
    
    
    {    sm->compute(left, right, disp);
}
    
    
    {    float alpha = (dir2.x*offset.y - dir2.y*offset.x)/det;
    cross_point = origin1 + dir1*alpha;
}
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
      /* Invoked when trailers are received before closing the stream. Only invoked
   * when server sends trailers, which it may not. May be invoked while there is
   * read data remaining in local buffer. Contents of |trailers| is valid for
   * duration of the call.
   */
  void (*on_response_trailers_received)(
      bidirectional_stream* stream,
      const bidirectional_stream_header_array* trailers);
    
      ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
    DEFINE_int32(driver_port, 0, 'Port for communication with driver');
DEFINE_int32(server_port, 0, 'Port for operation as a server');
DEFINE_string(credential_type, grpc::testing::kInsecureCredentialsType,
              'Credential type for communication with driver');
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    
    {  grpc::string package = service->full_name();
  size_t pos = package.rfind('.' + service->name());
  if (pos != grpc::string::npos) {
    package.erase(pos);
    result.append('package: ' + package + ';\n');
  }
  result.append('service ' + service->name() + ' {\n');
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(DescribeMethod(service->method(i)));
  }
  result.append('}\n\n');
  return result;
}
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    ${Storage}::${Storage}(Context* context,
  void * data, std::size_t size, const std::function<void(void*)> & deleter)
  : storage(${THStorage}_newWithDataAndAllocator(${state,}
     static_cast<${THScalarType}*>(data), size,
     &storage_deleter,
     new std::function<void(void*)>(deleter)
    )),
    context(context) {
    ${THStorage}_clearFlag(${state,} storage, TH_STORAGE_RESIZABLE);
}
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
      /// Returns the runner name
  std::string name() const {
    return name_;
  }
    
     public:
  /**
   * @brief A getter for the status code property
   *
   * @return an integer representing the status code of the operation.
   */
  int getCode() const { return code_; }
    
    /**
 * @brief The requested exit code.
 *
 * Use Initializer::shutdown to request shutdown in most cases.
 * This will raise a signal to the main thread requesting the dispatcher to
 * interrupt all services. There is a thread requesting a join of all services
 * that will continue the shutdown process.
 */
extern volatile std::sig_atomic_t kExitCode;
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    TEST_F(ProcessTests, test_launchWorker) {
  {
    std::vector<char*> argv;
    for (size_t i = 0; i < kExpectedWorkerArgsCount; i++) {
      char* entry = new char[strlen(kExpectedWorkerArgs[i]) + 1];
      EXPECT_NE(entry, nullptr);
      memset(entry, '\0', strlen(kExpectedWorkerArgs[i]) + 1);
      memcpy(entry, kExpectedWorkerArgs[i], strlen(kExpectedWorkerArgs[i]));
      argv.push_back(entry);
    }
    argv.push_back(nullptr);
    }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    namespace detail {
template <typename T>
constexpr T constexpr_log2_(T a, T e) {
  return e == T(1) ? a : constexpr_log2_(a + T(1), e / T(2));
}
    }
    
    
    {  if (rv == 0) {
    return FutexResult::AWOKEN;
  } else {
    switch(errno) {
      case ETIMEDOUT:
        assert(timeout != nullptr);
        return FutexResult::TIMEDOUT;
      case EINTR:
        return FutexResult::INTERRUPTED;
      case EWOULDBLOCK:
        return FutexResult::VALUE_CHANGED;
      default:
        assert(false);
        // EINVAL, EACCESS, or EFAULT.  EINVAL means there was an invalid
        // op (should be impossible) or an invalid timeout (should have
        // been sanitized by timeSpecFromTimePoint).  EACCESS or EFAULT
        // means *addr points to invalid memory, which is unlikely because
        // the caller should have segfaulted already.  We can either
        // crash, or return a value that lets the process continue for
        // a bit. We choose the latter. VALUE_CHANGED probably turns the
        // caller into a spin lock.
        return FutexResult::VALUE_CHANGED;
    }
  }
}
    
    
    {  /* On some systems steady_clock is just an alias for system_clock. So,
   * we must skip run_steady_clock_test if the two clocks are the same. */
  if (!std::is_same<system_clock,steady_clock>::value) {
    run_steady_clock_test();
  }
}
    
    template <class I, class T>
void* execInSitu(Op op, Data* from, void* to) {
  switch (op) {
    case Op::eNuke:
      get<T>(*from).~T();
      break;
    case Op::eMove:
      ::new (static_cast<void*>(&static_cast<Data*>(to)->buff_))
          T(std::move(get<T>(*from)));
      get<T>(*from).~T();
      break;
    case Op::eCopy:
      detail::if_constexpr(std::is_copy_constructible<T>(), [&](auto id) {
        ::new (static_cast<void*>(&static_cast<Data*>(to)->buff_))
            T(id(get<T>(*from)));
      });
      break;
    case Op::eType:
      return const_cast<void*>(static_cast<void const*>(&typeid(T)));
    case Op::eAddr:
      if (*static_cast<std::type_info const*>(to) == typeid(T)) {
        return &from->buff_;
      }
      throwBadPolyCast();
    case Op::eRefr:
      return vtableForRef<I, Uncvref<T>>(
          static_cast<RefType>(reinterpret_cast<std::uintptr_t>(to)));
  }
  return nullptr;
}
    
    #include <bitset>
    
    #pragma once
    
      // You really shouldn't need this if you use the SmartPtr provided by create,
  // but if you really want to do something crazy like stick the released
  // pointer into a DescriminatedPtr or something, you'll need this to clean up
  // after yourself.
  static void destroy(AtomicHashArray*);
    
        jobject NewObject(jclass clazz, jmethodID methodID, ...)
    {
        va_list args;
        va_start(args, methodID);
        jobject result = functions->NewObjectV(this, clazz, methodID, args);
        va_end(args);
        return result;
    }
    
        Value(void)
    : unit(YGUnitUndefined)
    , value(0.0)
    {
    }
    
    #include './Config.hh'
    
     public: // Prevent accidental copy
    
    #pragma once
    
    
    {};

    
    #else
# define ALOGV(...) ((void)0)
# define ALOGD(...) ((void)0)
# define ALOGI(...) ((void)0)
# define ALOGW(...) ((void)0)
# define ALOGE(...) ((void)0)
# define ALOGF(...) ((void)0)
#endif

    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);