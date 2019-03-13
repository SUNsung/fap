
        
          // Create template
  std::vector<char> tmp(256);
  auto len = snprintf(tmp.data(), tmp.size(), '%s/testXXXXXX', tmpdir);
  tmp.resize(len);
    
    X before running op:
[[ 3.813361   -1.319647    5.2089314  -4.931328    0.6218652 ]
 [ 7.2757645   5.5552588   5.785643   -2.4790506  -0.41400087]
 [ 1.1541046  -6.933266    3.3754056   1.6569928  -1.7670316 ]
 [-3.4932013   4.891472    1.5530115  -3.2443287  -4.605099  ]
 [-4.574543   -7.360948    5.91305    -8.196495   -5.357458  ]]
X after running op:
[[ 3. -2.  5. -5.  0.]
 [ 7.  5.  5. -3. -1.]
 [ 1. -7.  3.  1. -2.]
 [-4.  4.  1. -4. -5.]
 [-5. -8.  5. -9. -6.]]
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    enum FileType {
  kLogFile,
  kDBLockFile,
  kTableFile,
  kDescriptorFile,
  kCurrentFile,
  kTempFile,
  kInfoLogFile  // Either the current one, or an old one
};
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
    #include 'db/version_edit.h'
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
        void ProgressWriter::UpdateTest(size_t samples, const ValuePtr& accumulatedMetric)
    {
        m_test->Update(samples, nullptr, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> /*aggregateLoss*/, std::pair<double, double> aggregateMetric)
            {
                OnWriteTestUpdate(samples, updates, aggregateMetric);
            });
    }
    
            if (::WaitForSingleObject(m_handle, wait ? INFINITE : 0) != WAIT_OBJECT_0)
        {
            // failed to acquire
            int rc = ::CloseHandle(m_handle);
            if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
            {
                RuntimeError('Acquire: Handler close failure with error code %d', ::GetLastError());
            }
            m_handle = NULL;
            return false;
        }
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        size_t rank = DetermineElementwiseTensorRank();
        auto output    =           ValueTensorFor(rank, fr);
        auto input     = InputRef(0).ValueTensorFor(rank, fr);
        auto mean      = Input(1)->ValueTensorFor(rank, fr.AllowBroadcast());
        auto invStdDev = Input(2)->ValueTensorFor(rank, fr.AllowBroadcast());
    }
    
        // Overrides
    virtual CardinalSplineTo *clone() const override;
    virtual CardinalSplineTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
    //
// NOTE: Converting these macros into Templates is desirable, but please see
// issue #16159 [https://github.com/cocos2d/cocos2d-x/pull/16159] for further info
//
#define EASEELASTIC_TEMPLATE_IMPL(CLASSNAME, TWEEN_FUNC, REVERSE_CLASSNAME) \
CLASSNAME* CLASSNAME::create(cocos2d::ActionInterval *action, float period /* = 0.3f*/) \
{ \
    CLASSNAME *ease = new (std::nothrow) CLASSNAME(); \
    if (ease) \
    { \
        if (ease->initWithAction(action, period)) \
            ease->autorelease(); \
        else \
            CC_SAFE_RELEASE_NULL(ease); \
    } \
    return ease; \
} \
CLASSNAME* CLASSNAME::clone() const \
{ \
    if(_inner) return CLASSNAME::create(_inner->clone(), _period); \
    return nullptr; \
} \
void CLASSNAME::update(float time) { \
    _inner->update(TWEEN_FUNC(time, _period)); \
} \
EaseElastic* CLASSNAME::reverse() const { \
    return REVERSE_CLASSNAME::create(_inner->reverse(), _period); \
}
    
    void CallFunc::update(float time)
{
    ActionInstant::update(time);
    this->execute();
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    protected:
    void calculateMaxItems();
    void updateBlendFunc();
    void updateOpacityModifyRGB();
    
        stack_ = (char*) sw_malloc(stack_size);
    swTraceLog(SW_TRACE_COROUTINE, 'alloc stack: size=%lu, ptr=%p', stack_size, stack_);
    
        QObject::connect(&example, SIGNAL(finished()), &app, SLOT(quit()));
    QTimer::singleShot(0, &example, SLOT(run()));
    
    
    {    //1
    ret = p.read(&p, buf, sizeof(buf));
    if (ret < 0)
    {
        swSysError('read() failed.');
    }
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world1', buf), 0);
    //2
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world2', buf), 0);
    //3
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world3', buf), 0);
}
    
    TEST(hashmap, string)
{
    swHashMap *hm = swHashMap_new(16, NULL);
    swHashMap_add(hm, (char *) SW_STRL('hello'), (void *) 199);
    swHashMap_add(hm, (char *) SW_STRL('swoole22'), (void *) 8877);
    swHashMap_add(hm, (char *) SW_STRL('hello2'), (void *) 200);
    swHashMap_add(hm, (char *) SW_STRL('willdel'), (void *) 888);
    swHashMap_add(hm, (char *) SW_STRL('willupadte'), (void *) 9999);
    swHashMap_add(hm, (char *) SW_STRL('hello3'), (void *) 78978);
    }
    
        for (i = 0; i < READ_THREAD_N; i++)
    {
        int ret = swPipeUnsock_create(&threads[i].pipe, 1, SOCK_DGRAM);
        ASSERT_EQ(ret, 0);
        threads[i].thread = new std::thread(thread_read, i);
    }
    
            pid_t pid = fork();
        ASSERT_NE(pid, -1);
    
    
    {        SwooleG.main_reactor = (swReactor *) malloc(sizeof(swReactor));
        if (SwooleG.main_reactor == NULL)
        {
            swWarn('malloc failed.');
        }
        if (swReactor_create(SwooleG.main_reactor, SW_REACTOR_MAXEVENTS) < 0)
        {
            swWarn('create reactor failed.');
        }
        //client, swoole_event_exit will set swoole_running = 0
        SwooleWG.in_client = 1;
        SwooleWG.reactor_wait_onexit = 1;
        SwooleWG.reactor_ready = 0;
    }
    
    #include 'api.h'
#include 'wrapper/base.hpp'
#include 'server.h'