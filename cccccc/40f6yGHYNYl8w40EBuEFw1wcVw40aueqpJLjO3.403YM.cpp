
        
          // Add info about requested inputs.
  CppShapeInferenceInputsNeeded needed;
  for (int i = 0; i < c.num_inputs(); ++i) {
    if (c.requested_input_tensor(i)) {
      needed.add_input_tensors_needed(i);
    }
    if (c.requested_input_tensor_as_partial_shape(i)) {
      needed.add_input_tensors_as_shapes_needed(i);
    }
  }
  *input_tensors_needed_out = needed.SerializeAsString();
    
    
    {  total_time_measured_serialized_ = 0;
  total_time_analytical_upper_ = 0;
  total_time_analytical_lower_ = 0;
  for (const auto& op : ops_) {
    total_time_measured_serialized_ += op.time;
    total_time_analytical_upper_ += op.time_upper;
    total_time_analytical_lower_ += op.time_lower;
  }
}
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
    
    
    {}  // namespace tensorflow

    
    
    {}  // namespace tensorflow

    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    template <size_t N>
bool contains(const StringRef (&Array)[N], const StringRef &V,
              std::vector<StringRef> &suggestions) {
  // Compare against known values, ignoring case to avoid penalizing
  // characters with incorrect case.
  unsigned minDistance = std::numeric_limits<unsigned>::max();
  std::string lower = V.lower();
  for (const StringRef& candidate : Array) {
    if (candidate == V) {
      suggestions.clear();
      return true;
    }
    unsigned distance = StringRef(lower).edit_distance(candidate.lower());
    if (distance < minDistance) {
      suggestions.clear();
      minDistance = distance;
    }
    if (distance == minDistance)
      suggestions.emplace_back(candidate);
  }
  return false;
}
    
      ::UUID uuid;
  RPC_STATUS status = UuidFromStringA(t, &uuid);
  if (status == RPC_S_INVALID_STRING_UUID) {
    return None;
  }
    
    StringRef importer::getCFTypeName(
            const clang::TypedefNameDecl *decl) {
  if (auto pointee = CFPointeeInfo::classifyTypedef(decl)) {
    auto name = decl->getName();
    if (pointee.isRecord() || pointee.isTypedef())
      if (name.endswith(SWIFT_CFTYPE_SUFFIX))
        return name.drop_back(strlen(SWIFT_CFTYPE_SUFFIX));
    }
    }
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Pops a trace from the per-thread Google Test trace stack.
  void PopGTestTrace()
      GTEST_LOCK_EXCLUDED_(mutex_);
    
    // We will track memory used by this class.
class Water {
 public:
  // Normal Water declarations go here.
    }
    
    
    {    return new_queue;
  }
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_alt()
{
   //
   // error check: if there have been no previous states,
   // or if the last state was a '(' then error:
   //
   if(
      ((this->m_last_state == 0) || (this->m_last_state->type == syntax_element_startmark))
      &&
      !(
         ((this->flags() & regbase::main_option_type) == regbase::perl_syntax_group)
           &&
         ((this->flags() & regbase::no_empty_expressions) == 0)
        )
      )
   {
      fail(regex_constants::error_empty, this->m_position - this->m_base, 'A regular expression cannot start with the alternation operator |.');
      return false;
   }
   //
   // Reset mark count if required:
   //
   if(m_max_mark < m_mark_count)
      m_max_mark = m_mark_count;
   if(m_mark_reset >= 0)
      m_mark_count = m_mark_reset;
    }
    
       char_type a[2] = {'a', '\0', };
   string_type sa(pt->transform(a, a+1));
   if(sa == a)
   {
      *delim = 0;
      return sort_C;
   }
   char_type A[2] = { 'A', '\0', };
   string_type sA(pt->transform(A, A+1));
   char_type c[2] = { ';', '\0', };
   string_type sc(pt->transform(c, c+1));
    
    
    
    #ifndef BOOST_REGEX_FWD_HPP_INCLUDED
#define BOOST_REGEX_FWD_HPP_INCLUDED
    
    
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable:4700)
#endif
    
    #include 'base/CCRef.h'
#include 'math/CCGeometry.h'
#include 'base/CCScriptSupport.h'
    
    void Ripple3D::update(float time)
{
    int i, j;
    }
    
        if (ret)
    {
        ret->autorelease();
    }
    
    void RepeatForever::startWithTarget(Node* target)
{
    ActionInterval::startWithTarget(target);
    _innerAction->startWithTarget(target);
}
    
    
    {     actionAllocWithHashElement(element);
 
     CCASSERT(! ccArrayContainsObject(element->actions, action), 'action already be added!');
     ccArrayAppendObject(element->actions, action);
 
     action->startWithTarget(target);
}
    
        /** Resumes the target. All queued actions will be resumed.
     *
     * @param target    A certain target.
     */
    virtual void resumeTarget(Node *target);
    
    /** Pauses all running actions, returning a list of targets whose actions were paused.
     *
     * @return  A list of targets whose actions were paused.
     */
    virtual Vector<Node*> pauseAllRunningActions();
    
    /** Resume a set of targets (convenience function to reverse a pauseAllRunningActions call).
     *
     * @param targetsToResume   A set of targets need to be resumed.
     */
    virtual void resumeTargets(const Vector<Node*>& targetsToResume);
    
    /** Main loop of ActionManager.
     * @param dt    In seconds.
     */
    virtual void update(float dt);
    
protected:
    // declared in ActionManager.m
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    ProgressFromTo* ProgressFromTo::create(float duration, float fromPercentage, float toPercentage)
{
    ProgressFromTo *progressFromTo = new (std::nothrow) ProgressFromTo();
    if (progressFromTo && progressFromTo->initWithDuration(duration, fromPercentage, toPercentage)) {
        progressFromTo->autorelease();
        return progressFromTo;
    }
    
    delete progressFromTo;
    return nullptr;
}
    
    void AnimationCache::removeAnimation(const std::string& name)
{
    if (name.empty())
        return;
    }
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
    #endif // D_DHT_ROUTING_TABLE_SERIALIZER_H

    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) CXX11_OVERRIDE;
    
    class DHTTaskQueue {
public:
  virtual ~DHTTaskQueue() = default;
    }
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    public:
  DHTTaskQueueImpl();
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
    std::vector<DNSCache::AddrEntry>::iterator
DNSCache::CacheEntry::find(const std::string& addr)
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}