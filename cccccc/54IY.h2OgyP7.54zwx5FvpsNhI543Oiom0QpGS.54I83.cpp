
        
        namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
      IndexRecordWriter recordWriter(indexStorePath);
  std::string error;
  auto result = recordWriter.beginRecord(
      Filename, record.hashRecord(), error, &outRecordFile);
  switch (result) {
  case IndexRecordWriter::Result::Failure:
    diags->diagnose(SourceLoc(), diag::error_write_index_record, error);
    return true;
  case IndexRecordWriter::Result::AlreadyExists:
    return false;
  case IndexRecordWriter::Result::Success:
    break;
  }
    
    SILFunction *SILDebugScope::getInlinedFunction() const {
  if (Parent.isNull())
    return nullptr;
    }
    
      /// Suppress all warnings
  bool SuppressWarnings = false;
    
    /// A shorthand to clearly indicate that a value is a reference counted and
/// heap-allocated.
template <typename Inner>
using RC = llvm::IntrusiveRefCntPtr<Inner>;
    
    #include 'swift/Index/IndexDataConsumer.h'
    
    public:
  FixitApplyDiagnosticConsumer(const StringRef Text,
                               const StringRef BufferName);
    
    /**
 * Install the terminate / unexpected handlers to dump exceptions.
 */
void installHandlers();
    
      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
   * Erase all characters from this string.
   * \note Equivalent to `clear()`
   * \return *this;
   */
  FOLLY_CPP14_CONSTEXPR BasicFixedString& erase() noexcept {
    clear();
    return *this;
  }
    
    template <typename T>
struct OddCompare {
  constexpr ordering operator()(T const& a, T const& b) const {
    return b < a ? ordering::lt : a < b ? ordering::gt : ordering::eq;
  }
};
    
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
    
      bool pop(T& val) {
    hazptr_local<1, Atom> h;
    hazptr_holder<Atom>& hptr = h[0];
    Node* node;
    while (true) {
      node = hptr.get_protected(head_);
      if (node == nullptr) {
        return false;
      }
      auto next = node->next();
      if (cas_head(node, next)) {
        break;
      }
    }
    hptr.reset();
    val = node->value();
    node->retire();
    return true;
  }
    
    TEST(SortedVectorTest, MoveTest) {
  sorted_vector_set<std::unique_ptr<int>> s;
  s.insert(std::make_unique<int>(5));
  s.insert(s.end(), std::make_unique<int>(10));
  EXPECT_EQ(s.size(), 2);
    }
    
    Future<Unit> sleep(Duration dur, Timekeeper* tk) {
  std::shared_ptr<Timekeeper> tks;
  if (LIKELY(!tk)) {
    tks = folly::detail::getTimekeeperSingleton();
    tk = tks.get();
  }
    }