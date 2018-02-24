
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    #include 'content/nw/src/api/menu/menu_delegate.h'
    
    
    {}  // namespace nw

    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      static bool all_empty(const boost::array<Elem, 2>& buffer_sequence)
  {
    return boost::asio::buffer_size(buffer_sequence[0]) == 0
      && boost::asio::buffer_size(buffer_sequence[1]) == 0;
  }
    
      // Is there no unread data in the buffer.
  bool empty() const
  {
    return begin_offset_ == end_offset_;
  }
    
    template <typename ConstBufferSequence, typename Handler>
class descriptor_write_op
  : public descriptor_write_op_base<ConstBufferSequence>
{
public:
  BOOST_ASIO_DEFINE_HANDLER_PTR(descriptor_write_op);
    }
    
    #if !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    // LogTest::initial_offset_last_record_offsets_ must be defined before this.
int LogTest::num_initial_offset_records_ =
    sizeof(LogTest::initial_offset_last_record_offsets_)/sizeof(uint64_t);
    
      const SnapshotImpl* New(SequenceNumber seq) {
    SnapshotImpl* s = new SnapshotImpl;
    s->number_ = seq;
    s->list_ = this;
    s->next_ = &list_;
    s->prev_ = list_.prev_;
    s->prev_->next_ = s;
    s->next_->prev_ = s;
    return s;
  }
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      // Random reads.
  ASSERT_OK(env_->NewRandomAccessFile('/dir/f', &rand_file));
  ASSERT_OK(rand_file->Read(6, 5, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(rand_file->Read(0, 5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(rand_file->Read(10, 100, &result, scratch)); // Read 'd'.
  ASSERT_EQ(0, result.compare('d'));
    
    
    {
    {    // Decode next entry
    uint32_t shared, non_shared, value_length;
    p = DecodeEntry(p, limit, &shared, &non_shared, &value_length);
    if (p == NULL || key_.size() < shared) {
      CorruptionError();
      return false;
    } else {
      key_.resize(shared);
      key_.append(p, non_shared);
      value_ = Slice(p + non_shared, value_length);
      while (restart_index_ + 1 < num_restarts_ &&
             GetRestartPoint(restart_index_ + 1) < current_) {
        ++restart_index_;
      }
      return true;
    }
  }
};
    
    
    {}  // namespace leveldb
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    #include 'leveldb/iterator.h'
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
     public:
  /**
   * @brief The std::thread entrypoint.
   *
   * This is used by the Dispatcher only.
   */
  virtual void run() final;
    
      /**
   * @brief A synonym for osquery::Status::getMessage()
   *
   * @see getMessage()
   */
  std::string toString() const { return getMessage(); }
  std::string what() const { return getMessage(); }
    
      /**
   * @brief Move a function callable into the initializer to be called.
   *
   * Install an optional platform method to call when waiting for shutdown.
   * This exists for Windows when the daemon must wait for the service to stop.
   */
  void installShutdown(std::function<void()>& handler);
    
    #include 'osquery/core/json.h'
    
    namespace osquery {
    }
    
    std::string stringFromCFAbsoluteTime(const CFDataRef& cf_abstime) {
  double value;
  if (CFNumberGetValue((CFNumberRef)cf_abstime, kCFNumberFloat64Type, &value)) {
    // Add seconds difference between CFAbsoluteTime and UNIX times.
    value += kCFAbsoluteTimeIntervalSince1970;
    }
    }
    
    #include <yoga/Yoga.h>
    
        Size callMeasureFunc(double width, int widthMode, double height, int heightMode) const;
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    #pragma once
    
    
    {}

    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
    #pragma once
    
    FBEXPORT void assertInternal(const char* formatstr, ...) __attribute__((noreturn));