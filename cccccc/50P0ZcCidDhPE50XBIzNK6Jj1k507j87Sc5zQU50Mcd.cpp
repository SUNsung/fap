
        
        namespace google {
namespace protobuf {
    }
    }
    
    #include <google/protobuf/any_test.pb.h>
#include <gtest/gtest.h>
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__

    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
      // Daemon is requesting a synchronization of readable queue space.
  case OSQUERY_IOCTL_BUF_SYNC:
    // The queue buffer cannot be synchronized if it has not been allocated.
    if (osquery.buffer == NULL) {
      err = -EINVAL;
      goto error_exit;
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
      void SetUp() override {
    fs::create_directories(perm_path_);
  }
    
      // Now test inclusive bounds.
  struct ConstraintList cl3;
  constraint = Constraint(LESS_THAN_OR_EQUALS);
  constraint.expr = '1000';
  cl3.add(constraint);
  constraint = Constraint(GREATER_THAN_OR_EQUALS);
  constraint.expr = '1';
  cl3.add(constraint);
    
    
    { private:
  FRIEND_TEST(WatcherTests, test_watcherrunner_watch);
  FRIEND_TEST(WatcherTests, test_watcherrunner_stop);
  FRIEND_TEST(WatcherTests, test_watcherrunner_unhealthy_delay);
};
    
    
    {  return std::string(buffer.data());
}
    
    class RocksDBDatabasePluginTests : public DatabasePluginTests {
 protected:
  std::string name() override {
    return 'rocksdb';
  }
};
    
     private:
  void setName(const std::string& name) {
    name_ = name;
  }
    
      static void DiskDisappearedCallback(DADiskRef disk, void* context);
    
      EXPECT_CALL(transport, writeChain(_, BufMatches(buf.get()), _));
    
      // Copy the data
  // Maintain the same amount of headroom.  Since we maintained the same
  // minimum capacity we also maintain at least the same amount of tailroom.
  uint64_t headlen = headroom();
  if (length_ > 0) {
    assert(data_ != nullptr);
    memcpy(buf + headlen, data_, length_);
  }
    
    #include <fcntl.h>
    
    TEST_F(ConstexprMathTest, constexpr_abs_unsigned) {
  constexpr auto v = uint32_t(17);
  constexpr auto a = folly::constexpr_abs(v);
  EXPECT_EQ(17, a);
  EXPECT_TRUE((std::is_same<const uint32_t, decltype(a)>::value));
}
    
    template <class T>
class BlockingQueue {
 public:
  virtual ~BlockingQueue() = default;
  // Adds item to the queue (with priority).
  //
  // Returns true if an existing thread was able to work on it (used
  // for dynamically sizing thread pools), false otherwise.  Return false
  // if this feature is not supported.
  virtual BlockingQueueAddResult add(T item) = 0;
  virtual BlockingQueueAddResult addWithPriority(
      T item,
      int8_t /* priority */) {
    return add(std::move(item));
  }
  virtual uint8_t getNumPriorities() {
    return 1;
  }
  virtual T take() = 0;
  virtual folly::Optional<T> try_take_for(std::chrono::milliseconds time) = 0;
  virtual size_t size() = 0;
};
    
    template <class T, QueueBehaviorIfFull kBehavior = QueueBehaviorIfFull::THROW>
class PriorityLifoSemMPMCQueue : public BlockingQueue<T> {
 public:
  // Note A: The queue pre-allocates all memory for max_capacity
  // Note B: To use folly::Executor::*_PRI, for numPriorities == 2
  //         MID_PRI and HI_PRI are treated at the same priority level.
  PriorityLifoSemMPMCQueue(uint8_t numPriorities, size_t max_capacity) {
    queues_.reserve(numPriorities);
    for (int8_t i = 0; i < numPriorities; i++) {
      queues_.emplace_back(max_capacity);
    }
  }
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
    
    Barrier::~Barrier() {
  auto block = controlBlock_.load(std::memory_order_relaxed);
  auto prev = block->valueAndReaderCount.load(std::memory_order_relaxed);
  DCHECK_EQ(prev >> kReaderShift, 0u);
  auto val = prev & kValueMask;
  auto p = promises(block);
    }
    
      // Move from the registration phase to the 'you can actually instantiate
  // things now' phase.
  folly::SingletonVault::singleton()->registrationComplete();
    
      XLOG(DBG1, 'log arguments are concatenated: ', 12345, ', ', 92.0);
  XLOGF(DBG1, 'XLOGF supports {}-style formatting: {:.3f}', 'python', 1.0 / 3);
  XLOG(DBG2) << 'streaming syntax is also supported: ' << 1234;
  XLOG(DBG2, 'if you really want, ', 'you can even')
      << ' mix function-style and streaming syntax: ' << 42;
  XLOGF(DBG3, 'and {} can mix {} style', 'you', 'format') << ' and streaming';