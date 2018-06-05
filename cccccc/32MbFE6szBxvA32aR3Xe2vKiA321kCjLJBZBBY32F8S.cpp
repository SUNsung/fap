
        
        namespace grpc {
namespace testing {
    }
    }
    
      bool TryParseOne(Feature* feature) {
    if (failed_ || Finished() || !Match('{')) {
      return SetFailedAndReturnFalse();
    }
    if (!Match(location_) || !Match('{') || !Match(latitude_)) {
      return SetFailedAndReturnFalse();
    }
    long temp = 0;
    ReadLong(&temp);
    feature->mutable_location()->set_latitude(temp);
    if (!Match(',') || !Match(longitude_)) {
      return SetFailedAndReturnFalse();
    }
    ReadLong(&temp);
    feature->mutable_location()->set_longitude(temp);
    if (!Match('},') || !Match(name_) || !Match('\'')) {
      return SetFailedAndReturnFalse();
    }
    size_t name_start = current_;
    while (current_ != db_.size() && db_[current_++] != ''') {
    }
    if (current_ == db_.size()) {
      return SetFailedAndReturnFalse();
    }
    feature->set_name(db_.substr(name_start, current_-name_start-1));
    if (!Match('},')) {
      if (db_[current_ - 1] == ']' && current_ == db_.size()) {
        return true;
      }
      return SetFailedAndReturnFalse();
    }
    return true;
  }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    #endif

    
      struct Result {
    double wall;
    double user;
    double system;
    unsigned long long total_cpu_time;
    unsigned long long idle_cpu_time;
  };
    
      // Initialize the internal timer and reset the query count to 0
  void Reset();
    
      // Return the sequence number for the start of this batch.
  static SequenceNumber Sequence(const WriteBatch* batch);
    
    void BlockHandle::EncodeTo(std::string* dst) const {
  // Sanity check that all fields have been set
  assert(offset_ != ~static_cast<uint64_t>(0));
  assert(size_ != ~static_cast<uint64_t>(0));
  PutVarint64(dst, offset_);
  PutVarint64(dst, size_);
}
    
    #include <string.h>
#include 'util/coding.h'
#include 'util/hash.h'
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
      // Delete everything
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Delete(WriteOptions(), Key(i)));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
      // Reset the contents as if the BlockBuilder was just constructed.
  void Reset();
    
    template <typename Stream>
class buffered_read_stream;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_DETAIL_CALL_STACK_HPP
#define BOOST_ASIO_DETAIL_CALL_STACK_HPP
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    template <typename Handler, typename Arg1, typename Arg2>
auto two_arg_handler_test(Handler h, Arg1* a1, Arg2* a2)
  -> decltype(
    sizeof(Handler(static_cast<const Handler&>(h))),
    ((h)(*a1, *a2)),
    char(0));
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
    int close(int d, state_type& state, boost::system::error_code& ec)
{
  int result = 0;
  if (d != -1)
  {
    errno = 0;
    result = error_wrapper(::close(d), ec);
    }
    }
    
    
    {  // Destroy all operations associated with the descriptor.
  op_queue<operation> ops;
  boost::system::error_code ec;
  for (int i = 0; i < max_ops; ++i)
    op_queue_[i].cancel_operations(descriptor, ops, ec);
}
    
    namespace folly {
namespace exception_tracer {
    }
    }
    
    namespace folly {
    }
    
    template <typename C>
struct compare_greater_equal : detail::cmp_pred<C, ordering::lt, 1> {
  using detail::cmp_pred<C, ordering::lt, 1>::cmp_pred;
};
    
      bool add(T v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (curr && curr->elem_ == v) {
      return false;
    }
    prev->store(new Node(std::move(v), curr));
    return true;
  }
    
    // I have no idea what the normal values for these are,
// and really don't care what they are. They're only used
// within fcntl, so it's not an issue.
#define FD_CLOEXEC HANDLE_FLAG_INHERIT
#define O_NONBLOCK 1
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
    
    // TLDR: Prefer using operator< for ordering. And when
// a and b are equivalent objects, we return b to make
// sorting stable.
// See http://stepanovpapers.com/notes.pdf for details.
template <typename T>
constexpr T constexpr_max(T a) {
  return a;
}
template <typename T, typename... Ts>
constexpr T constexpr_max(T a, T b, Ts... ts) {
  return b < a ? constexpr_max(a, ts...) : constexpr_max(b, ts...);
}
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    int main(int argc, char* argv[]) {
  // Using log macros before calling folly::initLogging() will use the default
  // log settings defined by folly::initializeLoggerDB().  The default behavior
  // is to log WARNING+ messages to stderr.
  XLOG(INFO) << 'log messages less than WARNING will be ignored';
  XLOG(ERR) << 'error messages before initLogging() will be logged to stderr';
    }
    
       private:
    friend class SerialExecutor;
    explicit Deleter(std::shared_ptr<Executor> parent)
        : parent_(std::move(parent)) {}
    
    int Node::getPositionType(void) const
{
    return YGNodeStyleGetPositionType(m_node);
}
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace facebook {
    }
    
    #pragma once
#include <cstring>
#include <string>
#include <sstream>
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};
    
    #endif  // BENCHMARK_API_INTERNAL_H

    
    namespace benchmark {
enum LogColor {
  COLOR_DEFAULT,
  COLOR_RED,
  COLOR_GREEN,
  COLOR_YELLOW,
  COLOR_BLUE,
  COLOR_MAGENTA,
  COLOR_CYAN,
  COLOR_WHITE
};
    }
    
      // Calculate least square fitting parameter
  for (size_t i = 0; i < n.size(); ++i) {
    double gn_i = fitting_curve(n[i]);
    sigma_gn += gn_i;
    sigma_gn_squared += gn_i * gn_i;
    sigma_time += time[i];
    sigma_time_gn += time[i] * gn_i;
  }
    
      Out << run.GetAdjustedRealTime() << ',';
  Out << run.GetAdjustedCPUTime() << ',';
    
    namespace benchmark {
    }
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>