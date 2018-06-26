
        
        void DBIter::FindPrevUserEntry() {
  assert(direction_ == kReverse);
    }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    // A utility routine: write 'data' to the named file and Sync() it.
extern Status WriteStringToFileSync(Env* env, const Slice& data,
                                    const std::string& fname);
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options* options, int entries);
  ~TableCache();
    }
    
      // Delete the specified 'file' from the specified 'level'.
  void DeleteFile(int level, uint64_t file) {
    deleted_files_.insert(std::make_pair(level, file));
  }
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
        // Check for synchronous flag in options
    std::string sync_stmt = (write_sync) ? 'PRAGMA synchronous = FULL' :
                                           'PRAGMA synchronous = OFF';
    status = sqlite3_exec(db_, sync_stmt.c_str(), NULL, NULL, &err_msg);
    ExecErrorCheck(status, err_msg);
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    	virtual int get_available_bytes() const;
    
    	GodotContactPairContactResultCallback(btCollisionObject *p_self_object, Vector3 *p_results, int p_resultMax, const Set<RID> *p_exclude) :
			m_self_object(p_self_object),
			m_results(p_results),
			m_exclude(p_exclude),
			m_resultMax(p_resultMax),
			m_count(0) {}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        ~jpeg_decoder();
    
    
    
    /*Accesses one of four (signed) bytes given an index.
  This can be used to avoid small lookup tables.*/
#define OC_BYTE_TABLE32(_a,_b,_c,_d,_i) \
  ((signed char) \
   (((_a)&0xFF|((_b)&0xFF)<<8|((_c)&0xFF)<<16|((_d)&0xFF)<<24)>>(_i)*8))
/*Accesses one of eight (unsigned) nibbles given an index.
  This can be used to avoid small lookup tables.*/
#define OC_UNIBBLE_TABLE32(_a,_b,_c,_d,_e,_f,_g,_h,_i) \
  ((((_a)&0xF|((_b)&0xF)<<4|((_c)&0xF)<<8|((_d)&0xF)<<12| \
   ((_e)&0xF)<<16|((_f)&0xF)<<20|((_g)&0xF)<<24|((_h)&0xF)<<28)>>(_i)*4)&0xF)
    
    #if defined(HAVE_ARM_NE10)
    
      /// Gets the non-blocking mode of the acceptor.
  /**
   * @returns @c true if the acceptor's synchronous operations will fail with
   * boost::asio::error::would_block if they are unable to perform the requested
   * operation immediately. If @c false, synchronous operations will block
   * until complete.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  bool non_blocking() const
  {
    return this->get_service().non_blocking(this->get_implementation());
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #include <boost/asio/detail/push_options.hpp>
    
    // Helper class to determine whether or not the current thread is inside an
// invocation of io_service::run() for a specified io_service object.
template <typename Key, typename Value = unsigned char>
class call_stack
{
public:
  // Context class automatically pushes the key/value pair on to the stack.
  class context
    : private noncopyable
  {
  public:
    // Push the key on to the stack.
    explicit context(Key* k)
      : key_(k),
        next_(call_stack<Key, Value>::top_)
    {
      value_ = reinterpret_cast<unsigned char*>(this);
      call_stack<Key, Value>::top_ = this;
    }
    }
    }
    
    #include <boost/asio/detail/config.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #include <boost/asio/detail/config.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <typename Time_Traits>
void epoll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  mutex::scoped_lock lock(mutex_);
    }
    
    // implementing configure.
template<typename PairIter>
inline void GradientBooster::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
    
    { private:
  // default chunk size.
  static const size_t kChunkSize = 64 << 10UL;
  // maximum chunk size.
  static const size_t kMaxChunk = 128;
  // bool whether use hc
  bool use_lz4_hc_;
  // number of threads
  int nthread_;
  // number of writing threads
  int nthread_write_;
  // raw bytes
  size_t raw_bytes_, raw_bytes_index_, raw_bytes_value_;
  // encoded bytes
  size_t encoded_bytes_index_, encoded_bytes_value_;
  /*! \brief minimum index value */
  uint32_t min_index_;
  /*! \brief external memory column offset */
  std::vector<size_t> disk_offset_;
  // internal index
  CompressArray<StorageIndex> index_;
  // value set.
  CompressArray<bst_float> value_;
};
    
      // gather the histogram data
  rabit::SerializeReducer<WXQSketch::SummaryContainer> sreducer;
  std::vector<WXQSketch::SummaryContainer> summary_array;
  summary_array.resize(sketchs.size());
  for (size_t i = 0; i < sketchs.size(); ++i) {
    WXQSketch::SummaryContainer out;
    sketchs[i].GetSummary(&out);
    summary_array[i].Reserve(max_num_bins * kFactor);
    summary_array[i].SetPrune(out, max_num_bins * kFactor);
  }
  size_t nbytes = WXQSketch::SummaryContainer::CalcMemCost(max_num_bins * kFactor);
  sreducer.Allreduce(dmlc::BeginPtr(summary_array), nbytes, summary_array.size());
    
    void SimpleCSRSource::CopyFrom(DMatrix* src) {
  this->Clear();
  this->info = src->Info();
  auto iter = src->RowIterator();
  iter->BeforeFirst();
  while (iter->Next()) {
    const auto &batch = iter->Value();
    page_.Push(batch);
  }
}
    
      const RowSet& BufferedRowset() const override {
    return buffered_rowset_;
  }
    
    
    {
    {      if (size_to_read != 0) {
        CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data) + page->offset[i],
                          size_to_read * sizeof(Entry)),
                 size_to_read * sizeof(Entry))
            << 'Invalid SparsePage file';
        curr_offset += size_to_read;
      }
      i = j;
    }
    // seek to end of record
    if (curr_offset != disk_offset_.back()) {
      fi->Seek(begin + disk_offset_.back() * sizeof(Entry));
    }
    return true;
  }
    
    namespace xgboost {
namespace data {
    }
    }
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD
    
      // Can't use make_shared -- no support for a custom deleter, sadly.
  std::shared_ptr<T> instance(
      create_(),
      [ destroy_baton, print_destructor_stack_trace, type = type() ](
          T*) mutable {
        destroy_baton->post();
        if (print_destructor_stack_trace->load()) {
          detail::singletonPrintDestructionStackTrace(type);
        }
      });
    
    
    {  bool cas(T& u, T& v) {
    Node* n = new Node(v);
    hazptr_holder<Atom> hptr;
    Node* p;
    while (true) {
      p = hptr.get_protected(node_);
      if (p->val_ != u) {
        delete n;
        return false;
      }
      if (node_.compare_exchange_weak(
              p, n, std::memory_order_relaxed, std::memory_order_release)) {
        break;
      }
    }
    hptr.reset();
    p->retire();
    return true;
  }
};
    
    #pragma once
    
      XLOG(DBG1, 'log arguments are concatenated: ', 12345, ', ', 92.0);
  XLOGF(DBG1, 'XLOGF supports {}-style formatting: {:.3f}', 'python', 1.0 / 3);
  XLOG(DBG2) << 'streaming syntax is also supported: ' << 1234;
  XLOG(DBG2, 'if you really want, ', 'you can even')
      << ' mix function-style and streaming syntax: ' << 42;
  XLOGF(DBG3, 'and {} can mix {} style', 'you', 'format') << ' and streaming';
    
    int chdir(const char* path) {
  return _chdir(path);
}
    
      /**
   * Communicate with the child until all pipes to/from the child are closed.
   *
   * == Semantics ==
   *
   * readCallback(pfd, cfd) will be called whenever there's data available
   * on any pipe *from* the child (PIPE_OUT).  pfd is the file descriptor
   * in the parent (that you use to read from); cfd is the file descriptor
   * in the child (used for identifying the stream; 1 = child's standard
   * output, 2 = child's standard error, etc)
   *
   * writeCallback(pfd, cfd) will be called whenever a pipe *to* the child is
   * writable (PIPE_IN).  pfd is the file descriptor in the parent (that you
   * use to write to); cfd is the file descriptor in the child (used for
   * identifying the stream; 0 = child's standard input, etc)
   *
   * The read and write callbacks must read from / write to pfd and return
   * false during normal operation.  Return true to tell communicate() to
   * close the pipe.  For readCallback, this might send SIGPIPE to the
   * child, or make its writes fail with EPIPE, so you should generally
   * avoid returning true unless you've reached end-of-file.
   *
   * communicate() returns when all pipes to/from the child are closed; the
   * child might stay alive after that, so you must still wait().
   * Conversely, the child may quit long before its pipes are closed, since
   * its descendants can keep them alive forever.
   *
   * Most users won't need to use this callback version; the simpler version
   * of communicate (which buffers data in memory) will probably work fine.
   *
   * == Things you must get correct ==
   *
   * 1) You MUST consume all data passed to readCallback (or return true to
   * close the pipe).  Similarly, you MUST write to a writable pipe (or
   * return true to close the pipe).  To do otherwise is an error that can
   * result in a deadlock.  You must do this even for pipes you are not
   * interested in.
   *
   * 2) pfd is nonblocking, so be prepared for read() / write() to return -1
   * and set errno to EAGAIN (in which case you should return false).  Use
   * readNoInt() from FileUtil.h to handle interrupted reads for you.
   *
   * 3) Your callbacks MUST NOT call any of the Subprocess methods that
   * manipulate the pipe FDs.  Check the docblocks, but, for example,
   * neither closeParentFd (return true instead) nor takeOwnershipOfPipes
   * are safe.  Stick to reading/writing from pfd, as appropriate.
   *
   * == Good to know ==
   *
   * 1) See ReadLinesCallback for an easy way to consume the child's output
   * streams line-by-line (or tokenized by another delimiter).
   *
   * 2) 'Wait until the descendants close the pipes' is usually the behavior
   * you want, since the descendants may have something to say even if the
   * immediate child is dead.  If you need to be able to force-close all
   * parent FDs, communicate() will NOT work for you.  Do it your own way by
   * using takeOwnershipOfPipes().
   *
   * Why not? You can return 'true' from your callbacks to sever active
   * pipes, but inactive ones can remain open indefinitely.  It is
   * impossible to safely close inactive pipes while another thread is
   * blocked in communicate().  This is BY DESIGN.  Racing communicate()'s
   * read/write callbacks can result in wrong I/O and data corruption.  This
   * class would need internal synchronization and timeouts, a poor and
   * expensive implementation choice, in order to make closeParentFd()
   * thread-safe.
   */
  using FdCallback = folly::Function<bool(int, int)>;
  void communicate(FdCallback readCallback, FdCallback writeCallback);
    
    void WakeUpLock::Unlock() {
    ::wakeupLock_Unlock(object_);
}
    
        LongLinkPack st = {0};
    memcpy(&st, _rawbuf, sizeof(LongLinkPack));
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
      private:
    CommFrequencyLimit(CommFrequencyLimit&);
    CommFrequencyLimit& operator=(CommFrequencyLimit&);
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    int ScopeJEnv::Status() {
    return status_;
}

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT