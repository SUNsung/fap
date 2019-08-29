
        
        class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
    
    {  /* Accept modes which occur between the above rejection groups */
  R_NN_ACCEPT,          // NN acceptance
  R_HYPHEN_ACCEPT,      // Hyphen acceptance
  R_MM_ACCEPT,          // Matrix match acceptance
  R_QUALITY_ACCEPT,     // Accept word in good quality doc
  R_MINIMAL_REJ_ACCEPT  // Accept EVERYTHING except tess failures
};
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      // Add entry to the heap, keeping the smallest item at the top, by operator<.
  // Note that *entry is used as the source of operator=, but it is non-const
  // to allow for a smart pointer to be contained within.
  // Time = O(log n).
  void Push(Pair* entry) {
    int hole_index = heap_.size();
    // Make a hole in the end of heap_ and sift it up to be the correct
    // location for the new *entry. To avoid needing a default constructor
    // for primitive types, and to allow for use of DoublePtr in the Pair
    // somewhere, we have to incur a double copy here.
    heap_.push_back(*entry);
    *entry = heap_.back();
    hole_index = SiftUp(hole_index, *entry);
    heap_[hole_index] = *entry;
  }
    
    #endif  // TESSERACT_CLASSIFY_SHAPECLASSIFIER_H_

    
    // Classifies the given [training] sample, writing to results.
// See ShapeClassifier for a full description.
int TessClassifier::UnicharClassifySample(
    const TrainingSample& sample, Pix* page_pix, int debug,
    UNICHAR_ID keep_this, GenericVector<UnicharRating>* results) {
  const int old_matcher_level = classify_->matcher_debug_level;
  const int old_matcher_flags = classify_->matcher_debug_flags;
  const int old_classify_level = classify_->classify_debug_level;
  if (debug) {
    // Explicitly set values of various control parameters to generate debug
    // output if required, restoring the old values after classifying.
    classify_->matcher_debug_level.set_value(2);
    classify_->matcher_debug_flags.set_value(25);
    classify_->classify_debug_level.set_value(3);
  }
  classify_->CharNormTrainingSample(pruner_only_, keep_this, sample, results);
  if (debug) {
    classify_->matcher_debug_level.set_value(old_matcher_level);
    classify_->matcher_debug_flags.set_value(old_matcher_flags);
    classify_->classify_debug_level.set_value(old_classify_level);
  }
  return results->size();
}
    
      bool operator==(uint64_t v) const { return compare(v) == 0;}
  bool operator!=(uint64_t v) const { return compare(v) != 0;}
  bool operator>=(uint64_t v) const { return compare(v) >= 0;}
  bool operator<=(uint64_t v) const { return compare(v) <= 0;}
  bool operator> (uint64_t v) const { return compare(v) >  0;}
  bool operator< (uint64_t v) const { return compare(v) <  0;}
    
    void StackTraceNoHeap::ClearAllExtraLogging() {
  StackTraceLog::s_logData->data.clear();
}
    
    // Get the total/available number of huge pages on a node, -1 means all
// nodes.
HugePageInfo get_huge1g_info(int node = -1);
HugePageInfo get_huge2m_info(int node = -1);
    
      const Mutex& getMutex() const { return m_mutex; }
  Mutex& getMutex() { return m_mutex; }
    
    TEST_F(ProxygenTransportBasicTest, valid_expect_overlarge_length) {
  auto req = getRequest(HTTPMethod::POST);
  auto length = folly::to<std::string>(RuntimeOption::MaxPostSize + 1);
  req->getHeaders().add(HTTP_HEADER_CONTENT_LENGTH, length);
  req->getHeaders().add(HTTP_HEADER_EXPECT, '100-continue');
  EXPECT_CALL(m_server, onRequestError(_));
  EXPECT_CALL(m_txn, sendHeaders(IsResponseStatusCode(417)));
  EXPECT_CALL(m_txn, sendEOM());
  m_transport->onHeadersComplete(std::move(req));
}
    
    
    { private:
  template <typename F> friend void scan(const ReflectionTypeAliasHandle&, F&);
  const TypeAliasReq* m_req;
};
    
    template<class vinst>
void implArithO(Vout& v, IRLS& env, const IRInstruction* inst) {
  auto const sf = implBinopSF<vinst>(v, env, inst);
  v << jcc{CC_O, sf, {label(env, inst->next()), label(env, inst->taken())}};
}
    
    #include 'hphp/runtime/base/array-data.h'
#include 'hphp/runtime/base/array-data-defs.h'
#include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/array-iterator.h'
#include 'hphp/runtime/base/mixed-array-defs.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/set-array.h'
#include 'hphp/runtime/base/packed-array.h'
#include 'hphp/runtime/base/type-variant.h'
    
    /**
 * Start processing TEST_SIZE number of requests at the same time with
 * that many threads. This is mainly testing global variables to make sure
 * all handling are thread-safe.
 */
bool TestServer::TestRequestHandling() {
  RuntimeOption::AllowedFiles.insert('/string');
  TestTransportPtrVec transports(TEST_SIZE);
  TestTransportAsyncFuncPtrVec funcs(TEST_SIZE);
  for (unsigned int i = 0; i < TEST_SIZE; i++) {
    TestTransport *transport = new TestTransport();
    transports[i] = TestTransportPtr(transport);
    funcs[i] = TestTransportAsyncFuncPtr
      (new TestTransportAsyncFunc(transport, &TestTransport::process));
  }
    }
    
    
    {  return true;
}
    
    Context::~Context()
{
    if (stack_)
    {
        swTraceLog(SW_TRACE_COROUTINE, 'free stack: ptr=%p', stack_);
#ifdef SW_CONTEXT_PROTECT_STACK_PAGE
        if (protect_page_)
        {
            unprotect_stack(stack_, protect_page_);
        }
#endif
#ifdef USE_VALGRIND
        VALGRIND_STACK_DEREGISTER(valgrind_stack_id);
#endif
        sw_free(stack_);
        stack_ = NULL;
    }
}
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
        int length;
    char address[256];
    int port = 0;
    int ret;
    
    TEST(thread_pool, dispatch)
{
    ASSERT_EQ(swThreadPool_create(&pool, 4), SW_OK);
    pool.onTask = thread_onTask;
    ASSERT_EQ(swThreadPool_run(&pool), SW_OK);
    sw_atomic_long_t result = 0;
    }
    
    TEST(coroutine_base, get_current)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        auto co = Coroutine::get_current();
        *(long *) arg = co->get_cid();
    }, &_cid);
    }
    
        friend
    void RedisQtDelRead(void * adapter) {
        RedisQtAdapter * a = static_cast<RedisQtAdapter *>(adapter);
        a->delRead();
    }
    
        redisReply * reply = static_cast<redisReply *>(r);
    ExampleQt * ex = static_cast<ExampleQt *>(privdata);
    if (reply == nullptr || ex == nullptr) return;
    
    bool swoole_mime_type_delete(const char *suffix, const char *mime_type)
{
    if (mime_map.find(suffix) == mime_map.end())
    {
        return false;
    }
    else
    {
        mime_map.erase(string(suffix));
        return true;
    }
}
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = ((rand() % 19999) + 1) * 37;
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_GT(ret, 0);
        lists.insert(key);
    }
    
        event.handler = [](swAio_event *event)
    {
        (*(atomic<int> *) event->object)++;
    };