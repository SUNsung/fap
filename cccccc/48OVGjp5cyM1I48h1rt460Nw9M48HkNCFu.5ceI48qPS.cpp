
        
        
    {      for (auto result : lookup) {
        diagnose(result.getValueDecl(), diag::decl_declared_here,
                 result.getValueDecl()->getFullName());
      }
      isInvalid = true;
      break;
    }
    
        // Then remove any begin/end borrow that we found. These are unneeded since
    // the lifetime guarantee from the argument exists above and beyond said
    // scope.
    while (!NewBorrowInsts.empty()) {
      SILInstruction *I = NewBorrowInsts.pop_back_val();
      if (auto *BBI = dyn_cast<BeginBorrowInst>(I)) {
        // Any copy_value that is used by the begin borrow is added to the
        // worklist.
        for (auto *BBIUse : BBI->getUses()) {
          if (auto *BBIUseCopyValue =
                  dyn_cast<CopyValueInst>(BBIUse->getUser())) {
            Worklist.push_back(BBIUseCopyValue);
          }
        }
        BBI->replaceAllUsesWith(BBI->getOperand());
        BBI->eraseFromParent();
        ++NumEliminatedInsts;
        continue;
      }
    }
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_SPI_H_
#define GTEST_INCLUDE_GTEST_GTEST_SPI_H_
    
      // Gets the outcome of the test part.
  Type type() const { return type_; }
    
      // Creates an empty UnitTest.
  UnitTest();
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Outputs a message explaining invalid registration of different
// fixture class for the same test case. This may happen when
// TEST_P macro is used to define two tests with the same name
// but in different namespaces.
GTEST_API_ void ReportInvalidTestCaseType(const char* test_case_name,
                                          const char* file, int line);
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
    int64_t gettime_diff_us(const timespec& start, const timespec& end) {
  int64_t dsec = end.tv_sec - start.tv_sec;
  int64_t dnsec = end.tv_nsec - start.tv_nsec;
  return dsec * 1000000 + dnsec / 1000;
}
    
    void PageletTransport::decRefCount() {
  assert(m_refCount.load() > 0);
  if (--m_refCount == 0) {
    delete this;
  }
}
    
    //////////////////////////////////////////////////////////////////////
// Friends
    
    
    
    
    
    
    
    
    
    
    
        virtual void DrawString(int x, int y, const char* string, ...); 
    
    		if (b2_toiCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'toi calls = %d, ave toi iters = %3.1f, max toi iters = %d',
				b2_toiCalls, b2_toiIters / float32(b2_toiCalls), b2_toiMaxRootIters);
			m_textLine += DRAW_STRING_NEW_LINE;
    }
    
    
    {  return p;
}
    
    namespace {
// We cannot use EXPECT_EQ(a, b) due to a bug in gtest 1.6.0: gtest wants
// to print path as a container even though it has operator<< defined,
// and as path is a container of path, this leads to infinite
// recursion.
void expectPathEq(const path& a, const path& b) {
  EXPECT_TRUE(a == b) << 'expected path=' << a << '\nactual path=' << b;
}
} // namespace
    
    
    {
    {      if (end == msgData.size()) {
        break;
      }
      idx = end + 1;
    }
  } else {
    buffer.reserve(headerLengthGuess + msgData.size());
    headerFormatter.appendTo(buffer);
    buffer.append(msgData.data(), msgData.size());
    buffer.push_back('\n');
  }
    
    /**
 * A LogWriter implementation that immediately writes to a file descriptor when
 * it is invoked.
 *
 * The downside of this class is that logging I/O occurs directly in your
 * normal program threads, so that logging I/O may block or slow down normal
 * processing.
 *
 * However, one benefit of this class is that log messages are written out
 * immediately, so if your program crashes, all log messages generated before
 * the crash will have already been written, and no messages will be lost.
 */
class ImmediateFileWriter : public LogWriter {
 public:
  /**
   * Construct an ImmediateFileWriter that appends to the file at the specified
   * path.
   */
  explicit ImmediateFileWriter(folly::StringPiece path);
    }
    
    LogCategoryConfig::LogCategoryConfig(
    LogLevel l,
    bool inherit,
    std::vector<std::string> h)
    : level{l}, inheritParentLevel{inherit}, handlers{h} {}
    
      bool operator==(const LogCategoryConfig& other) const;
  bool operator!=(const LogCategoryConfig& other) const;
    
      /**
   * Update this LogConfig object by merging in settings from another
   * LogConfig.
   *
   * All LogHandler settings from the other LogConfig will be inserted into
   * this LogConfig.  If a log handler with the same name was already defined
   * in this LogConfig it will be replaced with the new settings.
   *
   * All LogCategory settings from the other LogConfig will be inserted into
   * this LogConfig.  If a log category with the same name was already defined
   * in this LogConfig, its settings will be updated with settings from the
   * other LogConfig.  However, if the other LogConfig does not define handler
   * settings for the category it will retain its current handler settings.
   *
   * This method allows LogConfig objects to be combined before applying them.
   * Using LogConfig::update() will produce the same results as if
   * LoggerDB::updateConfig() had been called with both configs sequentially.
   * In other words, this operation:
   *
   *   configA.update(configB);
   *   loggerDB.updateConfig(configA);
   *
   * will produce the same results as:
   *
   *   loggerDB.updateConfig(configA);
   *   loggerDB.updateConfig(configA);
   */
  void update(const LogConfig& other);
    
      // folder with contents returns relative path to test dir
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/niu'));
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/you'));
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/guo'));
  ASSERT_OK(env_->GetChildren(test_dir_, &children));
  ASSERT_OK(env_->GetChildrenFileAttributes(test_dir_, &childAttr));
  ASSERT_EQ(3U, children.size());
  ASSERT_EQ(3U, childAttr.size());
  for (auto each : children) {
    env_->DeleteDir(test_dir_ + '/' + each);
  }  // necessary for default POSIX env
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      // Set strict capacity limit flag. Now block will only load into compressed
  // block cache.
  cache->SetCapacity(usage);
  cache->SetStrictCapacityLimit(true);
  ASSERT_EQ(usage, cache->GetPinnedUsage());
  iter = db_->NewIterator(read_options);
  iter->Seek(ToString(kNumBlocks - 1));
  ASSERT_TRUE(iter->status().IsIncomplete());
  CheckCacheCounters(options, 1, 0, 0, 1);
  CheckCompressedCacheCounters(options, 1, 0, 1, 0);
  delete iter;
  iter = nullptr;
    
    void BlockIter::Seek(const Slice& target) {
  PERF_TIMER_GUARD(block_seek_nanos);
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  uint32_t index = 0;
  bool ok = false;
  if (prefix_index_) {
    ok = PrefixSeek(target, &index);
  } else {
    ok = BinarySeek(target, 0, num_restarts_ - 1, &index);
  }
    }
    
        size_t new_capacity = Roundup(requested_capacity, alignment_);
    char* new_buf = new char[new_capacity + alignment_];
    char* new_bufstart = reinterpret_cast<char*>(
        (reinterpret_cast<uintptr_t>(new_buf) + (alignment_ - 1)) &
        ~static_cast<uintptr_t>(alignment_ - 1));
    
      // A heap with the amortized O(1) complexity for erase. It uses one extra heap
  // to keep track of erased entries that are not yet on top of the main heap.
  class PreparedHeap {
    std::priority_queue<uint64_t, std::vector<uint64_t>, std::greater<uint64_t>>
        heap_;
    std::priority_queue<uint64_t, std::vector<uint64_t>, std::greater<uint64_t>>
        erased_heap_;
    }
    
    
    {        delete transferData;
        transferCb(s);
    }
    
    #include <iostream>
#include <vector>
#include <chrono>
#include <uv.h>
#include <cstring>
#include <endian.h>
using namespace std;
using namespace chrono;
    
    
    {            int repeat = timers[0].nextDelay;
            auto cb = timers[0].cb;
            timers.erase(timers.begin());
            if (repeat) {
                timer->start(cb, repeat, repeat);
            }
        }
    
    namespace uWS {
    }
    
    
    {
    {
    {
    {                    return webSocket;
                } else {
                    httpSocket->onEnd(httpSocket);
                }
                return httpSocket;
            }
        } else {
            if (!httpSocket->httpBuffer.length()) {
                if (length > MAX_HEADER_BUFFER_SIZE) {
                    httpSocket->onEnd(httpSocket);
                } else {
                    httpSocket->httpBuffer.append(lastCursor, end - lastCursor);
                }
            }
            return httpSocket;
        }
    } while(cursor != end);
    
    bool Hub::listen(int port, uS::TLS::Context sslContext, int options, Group<SERVER> *eh) {
    return listen(nullptr, port, sslContext, options, eh);
}
    
    struct Hub;