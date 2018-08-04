
        
            http://www.apache.org/licenses/LICENSE-2.0
    
      // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
      void Compute(OpKernelContext* context) override {
    // Get and verify the input data.
    OP_REQUIRES(
        context, context->num_inputs() == 1,
        errors::InvalidArgument('EncodeAudio requires exactly one input.'));
    const Tensor& contents = context->input(0);
    OP_REQUIRES(context, TensorShapeUtils::IsMatrix(contents.shape()),
                errors::InvalidArgument(
                    'sampled_audio must be a rank 2 tensor but got shape ',
                    contents.shape().DebugString()));
    OP_REQUIRES(
        context, contents.NumElements() <= std::numeric_limits<int32>::max(),
        errors::InvalidArgument(
            'sampled_audio cannot have more than 2^31 entries. Shape = ',
            contents.shape().DebugString()));
    }
    
    #include 'tensorflow/core/kernels/cwise_ops_gpu_common.cu.h'
    
    void leveldb_compact_range(
    leveldb_t* db,
    const char* start_key, size_t start_key_len,
    const char* limit_key, size_t limit_key_len) {
  Slice a, b;
  db->rep->CompactRange(
      // Pass NULL Slice if corresponding 'const char*' is NULL
      (start_key ? (a = Slice(start_key, start_key_len), &a) : NULL),
      (limit_key ? (b = Slice(limit_key, limit_key_len), &b) : NULL));
}
    
    
    {}  // namespace leveldb
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    namespace leveldb {
    }
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    #endif

    
    inline bool is_smaller(const std::pair<int, float>& p1, const std::pair<int, float>& p2)
{
    return p1.second < p2.second;
}
    
    #include 'test_precomp.hpp'
    
    namespace cv
{
    }
    
    #ifndef GL_NV_vdpau_interop
    typedef GLintptr GLvdpauSurfaceNV;
#endif
    
    #if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>
    
    static void* openclamdfft_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdfft_fn)/sizeof(openclamdfft_fn[0])));
    const struct DynamicFnEntry* e = openclamdfft_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD FFT function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    #else
    
    /*! \file silk_Inlines.h
 *  \brief silk_Inlines.h defines OPUS_INLINE signal processing functions.
 */
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    class VersionEditTest { };
    
    TEST(MemEnvTest, Misc) {
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  ASSERT_TRUE(!test_dir.empty());
    }
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    
    {  // No copying allowed
  FilterBlockBuilder(const FilterBlockBuilder&);
  void operator=(const FilterBlockBuilder&);
};
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    #ifndef STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
#define STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
    
    // A very simple random number generator.  Not especially good at
// generating truly random bits, but good enough for our needs in this
// package.
class Random {
 private:
  uint32_t seed_;
 public:
  explicit Random(uint32_t s) : seed_(s & 0x7fffffffu) {
    // Avoid bad seeds.
    if (seed_ == 0 || seed_ == 2147483647L) {
      seed_ = 1;
    }
  }
  uint32_t Next() {
    static const uint32_t M = 2147483647L;   // 2^31-1
    static const uint64_t A = 16807;  // bits 14, 8, 7, 5, 2, 1, 0
    // We are computing
    //       seed_ = (seed_ * A) % M,    where M = 2^31-1
    //
    // seed_ must not be zero or M, or else all subsequent computed values
    // will be zero or M respectively.  For all other values, seed_ will end
    // up cycling through every number in [1,M-1]
    uint64_t product = seed_ * A;
    }
    }
    
    
    {  vault_.creationOrder_.wlock()->push_back(type());
}
    
      BlockingQueueAddResult addWithPriority(T item, int8_t priority) override {
    int mid = getNumPriorities() / 2;
    size_t queue = priority < 0
        ? std::max(0, mid + priority)
        : std::min(getNumPriorities() - 1, mid + priority);
    CHECK_LT(queue, queues_.size());
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queues_[queue].write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queues_[queue].blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    #if FOLLY_USE_SYMBOLIZER
#include <folly/experimental/symbolizer/SignalHandler.h> // @manual
#endif
#include <folly/portability/GFlags.h>
    
    
    {
    {    // If we were to just call _close on the descriptor, it would
    // close the HANDLE, but it wouldn't free any of the resources
    // associated to the SOCKET, and we can't call _close after
    // calling closesocket, because closesocket has already closed
    // the HANDLE, and _close would attempt to close the HANDLE
    // again, resulting in a double free.
    // We can however protect the HANDLE from actually being closed
    // long enough to close the file descriptor, then close the
    // socket itself.
    constexpr DWORD protectFlag = HANDLE_FLAG_PROTECT_FROM_CLOSE;
    DWORD handleFlags = 0;
    if (!GetHandleInformation((HANDLE)h, &handleFlags)) {
      return -1;
    }
    if (!SetHandleInformation((HANDLE)h, protectFlag, protectFlag)) {
      return -1;
    }
    int c = 0;
    __try {
      // We expect this to fail. It still closes the file descriptor though.
      c = _close(fh);
      // We just have to catch the SEH exception that gets thrown when we do
      // this with a debugger attached -_-....
    } __except (
        GetExceptionCode() == STATUS_HANDLE_NOT_CLOSABLE
            ? EXCEPTION_CONTINUE_EXECUTION
            : EXCEPTION_CONTINUE_SEARCH) {
      // We told it to continue execution, so there's nothing here would
      // be run anyways.
    }
    // We're at the core, we don't get the luxery of SCOPE_EXIT because
    // of circular dependencies.
    if (!SetHandleInformation((HANDLE)h, protectFlag, handleFlags)) {
      return -1;
    }
    if (c != -1) {
      return -1;
    }
    return closesocket(h);
  }
  return _close(fh);
}
    
    /**
 *  Helper classes and functions
 */
    
      auto estimates = estimator.estimateQuantiles(
      std::array<double, 5>{{.001, .01, .5, .99, .999}});
    
    
    {    bool operator<(const Pipe& other) const {
      return childFd < other.childFd;
    }
    bool operator==(const Pipe& other) const {
      return childFd == other.childFd;
    }
  };
    
    // A folly::Future-istic Barrier synchronization primitive
//
// The barrier is initialized with a count N.
//
// The first N-1 calls to wait() return uncompleted futures.
//
// The Nth call to wait() completes the previous N-1 futures successfully,
// returns a future that is already completed successfully, and resets the
// barrier; the barrier may be reused immediately, as soon as at least one
// of the future completions has been observed.
//
// Of these N futures, exactly one is completed with true, while the others are
// completed with false; it is unspecified which future completes with true.
// (This may be used to elect a 'leader' among a group of threads.)
//
// If the barrier is destroyed, any futures already returned by wait() will
// complete with an error.
class Barrier {
 public:
  explicit Barrier(uint32_t n);
  ~Barrier();
    }
    
    
    {
    {
    {} // namespace detail
} // namespace f14
} // namespace folly
    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
    void AbstractOptionHandler::setCumulative(bool f)
{
  updateFlags(FLAG_CUMULATIVE, f);
}
    
    class AbstractOptionHandler : public OptionHandler {
protected:
  PrefPtr pref_;
    }
    
    class AbstractProxyResponseCommand : public AbstractCommand {
private:
  std::shared_ptr<HttpConnection> httpConnection_;
    }
    
    namespace aria2 {
    }
    
      void nextEvent();
    
    /*
 * C++ object wrapper.
 *
 * This is usually overlaid on a C struct whose first element is a
 * JNINativeInterface*.  We rely somewhat on compiler behavior.
 */
struct _JNIEnv {
    /* do not rename this; it does not seem to be entirely opaque */
    const struct JNINativeInterface* functions;
    }
    
    template <typename T, typename B>
/* static */ inline std::string HybridClass<T, B>::JavaPart::get_instantiated_base_name() {
  auto name = get_instantiated_java_descriptor();
  return name.substr(1, name.size() - 2);
}
    
    
template<typename T>
enable_if_t<IsPlainJniReference<T>(), alias_ref<T>> wrap_alias(T ref) noexcept;
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
        method(getAlignContent);
    method(getAlignItems);
    method(getAlignSelf);
    method(getFlexDirection);
    method(getFlexWrap);
    method(getJustifyContent);
    
    namespace facebook {
namespace alog {
    }
    }
    
    namespace facebook {
    }
    
      static inline void refIfNecessary(T* ptr) {
    if (ptr) {
      ptr->ref();
    }
  }
  static inline void unrefIfNecessary(T* ptr) {
    if (ptr) {
      ptr->unref();
    }
  }