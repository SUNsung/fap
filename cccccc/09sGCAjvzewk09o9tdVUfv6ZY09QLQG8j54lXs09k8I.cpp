
        
        bool NwCurrentWindowInternalGetTitleInternalFunction::RunNWSync(base::ListValue* response, std::string* error) {
  AppWindow* window = getAppWindow(this);
  response->AppendString(window->title_override());
  return true;
}
    
    // Multiply-included file, no traditional include guard.
#include <string>
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
      gfx::Point* point = reinterpret_cast<gfx::Point*>(userdata);
  *x = point->x();
  *y = point->y();
    
    bool MenuItem::CanHandleAccelerators() const {
  return enable_shortcut_ && is_enabled_;
}
    
          std::unique_ptr<SkBitmap> bitmap(new SkBitmap());
      if (data.type == TYPE_PNG &&
        !gfx::PNGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size(), bitmap.get())) {
        error_ = 'Failed to decode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG) {
        std::unique_ptr<SkBitmap> tmp_bitmap = gfx::JPEGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size());
        if (tmp_bitmap == NULL) {
          error_ = 'Failed to decode as JPEG';
          return false;
        }
        bitmap = std::move(tmp_bitmap);
      }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    NwObjCallObjectMethodAsyncFunction::~NwObjCallObjectMethodAsyncFunction() {
}
    
    
    {
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenRegisterStreamFunction);
  };
} // extensions
    
    bool NwShellOpenExternalFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'OpenExternal', *args_);
  return true;
}
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    #endif  // STORAGE_LEVELDB_DB_DBFORMAT_H_

    
      ReadOptions ro;
  ro.fill_cache = false;
  Iterator* iter = table->NewIterator(ro);
  std::string r;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    r.clear();
    ParsedInternalKey key;
    if (!ParseInternalKey(iter->key(), &key)) {
      r = 'badkey '';
      AppendEscapedStringTo(&r, iter->key());
      r += '' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    } else {
      r = ''';
      AppendEscapedStringTo(&r, key.user_key);
      r += '' @ ';
      AppendNumberTo(&r, key.sequence);
      r += ' : ';
      if (key.type == kTypeDeletion) {
        r += 'del';
      } else if (key.type == kTypeValue) {
        r += 'val';
      } else {
        AppendNumberTo(&r, key.type);
      }
      r += ' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    }
  }
  s = iter->status();
  if (!s.ok()) {
    dst->Append('iterator error: ' + s.ToString() + '\n');
  }
    
    
    {  fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
}
    
    #ifndef STORAGE_LEVELDB_DB_TABLE_CACHE_H_
#define STORAGE_LEVELDB_DB_TABLE_CACHE_H_
    
    class VersionEdit {
 public:
  VersionEdit() { Clear(); }
  ~VersionEdit() { }
    }
    
    void WriteBatchInternal::SetSequence(WriteBatch* b, SequenceNumber seq) {
  EncodeFixed64(&b->rep_[0], seq);
}
    
    namespace leveldb {
    }
    
      // Constructs a Message from a C-string.
  explicit Message(const char* str) : ss_(new ::std::stringstream) {
    *ss_ << str;
  }
    
    
    
      // Signals that the death test did not die as expected.
  virtual void Abort(AbortReason reason) = 0;
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
struct Types17 {
  typedef T1 Head;
  typedef Types16<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17> Tail;
};
    
    
// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {  return 0;
}

    
    namespace routeguide {
class Feature;
    }
    
    namespace grpc {
    }
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    #include <gtest/gtest.h>
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  auto status = ::strncpy_s(dst, nelms, src, count);
  if (status != 0) {
    return Status(1, 'Failed to strncpy_s: ' + status);
  }
    }
    
    #include 'osquery/devtools/devtools.h'
    
    using DiskArbitrationEventContextRef =
    std::shared_ptr<DiskArbitrationEventContext>;
using DiskArbitrationSubscriptionContextRef =
    std::shared_ptr<DiskArbitrationSubscriptionContext>;
    
      // gmock doesn't work with the IOBuf&& so we have to wrap this.
  void writeChain(WriteCallback* callback,
                  std::unique_ptr<folly::IOBuf>&& iob,
                  folly::WriteFlags flags = folly::WriteFlags::NONE) override {
    writeChain(callback, std::shared_ptr<folly::IOBuf>(iob.release()), flags);
  }
    
    
    {  // Now try gather again on the chain head
  cursor = RWPrivateCursor(iobuf1.get());
  cursor.gather(5);
  // Since gather() doesn't split buffers, everything should be collapsed into
  // a single buffer now.
  EXPECT_EQ(1, iobuf1->countChainElements());
  EXPECT_EQ(11, iobuf1->computeChainDataLength());
  EXPECT_EQ(11, cursor.length());
  EXPECT_EQ(11, cursor.totalLength());
}
    
    enum : uint64_t {
  // When create() is called for buffers less than kDefaultCombinedBufSize,
  // we allocate a single combined memory segment for the IOBuf and the data
  // together.  See the comments for createCombined()/createSeparate() for more
  // details.
  //
  // (The size of 1k is largely just a guess here.  We could could probably do
  // benchmarks of real applications to see if adjusting this number makes a
  // difference.  Callers that know their exact use case can also explicitly
  // call createCombined() or createSeparate().)
  kDefaultCombinedBufSize = 1024
};
    
    
    {  EXPECT_EQ(ordering::eq, op(n, n));
  EXPECT_EQ(ordering::lt, op(n, e));
  EXPECT_EQ(ordering::gt, op(e, n));
  EXPECT_EQ(ordering::lt, op(e, hello1));
  EXPECT_EQ(ordering::gt, op(hello1, e));
  EXPECT_EQ(ordering::eq, op(hello1, hello1));
  EXPECT_EQ(ordering::eq, op(hello1, hello2));
  EXPECT_EQ(ordering::eq, op(hello1, hello3));
  EXPECT_EQ(ordering::lt, op(hello1, hellow));
  EXPECT_EQ(ordering::gt, op(hellow, hello1));
  EXPECT_EQ(ordering::lt, op(hellow, hellox));
  EXPECT_EQ(ordering::gt, op(hellox, hellow));
}
    
    // Some queue implementations (for example, LifoSemMPMCQueue or
// PriorityLifoSemMPMCQueue) support both blocking (BLOCK) and
// non-blocking (THROW) behaviors.
enum class QueueBehaviorIfFull { THROW, BLOCK };
    
    template <class T, QueueBehaviorIfFull kBehavior = QueueBehaviorIfFull::THROW>
class LifoSemMPMCQueue : public BlockingQueue<T> {
 public:
  // Note: The queue pre-allocates all memory for max_capacity
  explicit LifoSemMPMCQueue(size_t max_capacity) : queue_(max_capacity) {}
    }
    
    
    {} // namespace folly

    
      if (UNLIKELY(!tk)) {
    return makeFuture<Unit>(FutureNoTimekeeper());
  }
    
      folly::EventBaseManager* getEventBaseManager();
    
    template <typename DigestT, typename ClockT>
std::unique_lock<SharedMutex> BufferedStat<DigestT, ClockT>::updateIfExpired(
    TimePoint now) {
  std::unique_lock<SharedMutex> g(mutex_);
  doUpdate(now, g);
  return g;
}
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
      // Do not print timeLabel on bigO and RMS report
  if (run.report_big_o) {
    Out << GetBigOString(run.complexity);
  } else if (!run.report_rms) {
    Out << GetTimeUnitString(run.time_unit);
  }
  Out << ',';
    
    
    { private:
  LogType(std::ostream* out) : out_(out) {}
  std::ostream* out_;
  BENCHMARK_DISALLOW_COPY_AND_ASSIGN(LogType);
};
    
    #include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <numeric>
#include 'check.h'
#include 'statistics.h'