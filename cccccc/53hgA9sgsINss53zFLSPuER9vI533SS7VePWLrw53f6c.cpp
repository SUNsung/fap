
        
        Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
      friend class SubstitutionMap;
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
      if (!wasInline) delete[] oldBegin;
    
        if (node->Left) {
      IndentScope ms(this, (childKind == ChildKind::Left ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
      print(node->Left, ChildKind::Left);
    }
    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    #include 'swift/Demangling/StandardTypesMangling.def'
    
    #ifndef BITCOIN_REVERSELOCK_H
#define BITCOIN_REVERSELOCK_H
    
    
    {    /** In case a->infinity == 1, replace r with (b->x, b->y, 1). */
    secp256k1_fe_cmov(&r->x, &b->x, a->infinity);
    secp256k1_fe_cmov(&r->y, &b->y, a->infinity);
    secp256k1_fe_cmov(&r->z, &fe_1, a->infinity);
    r->infinity = infinity;
}
    
    void test_bad_scalar(void) {
    unsigned char s_zero[32] = { 0 };
    unsigned char s_overflow[32] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
        0xba, 0xae, 0xdc, 0xe6, 0xaf, 0x48, 0xa0, 0x3b,
        0xbf, 0xd2, 0x5e, 0x8c, 0xd0, 0x36, 0x41, 0x41
    };
    unsigned char s_rand[32] = { 0 };
    unsigned char output[32];
    secp256k1_scalar rand;
    secp256k1_pubkey point;
    }
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    static void CheckSplitTorReplyLine(std::string input, std::string command, std::string args)
{
    BOOST_TEST_MESSAGE(std::string('CheckSplitTorReplyLine(') + input + ')');
    auto ret = SplitTorReplyLine(input);
    BOOST_CHECK_EQUAL(ret.first, command);
    BOOST_CHECK_EQUAL(ret.second, args);
}
    
        BOOST_CHECK(!obj.exists('nyuknyuknyuk'));
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    #include <iostream>
    
        // Construct a config map, the typical output from `Config::genConfig`.
    config_data_['awesome'] = content_;
    Config::get().reset();
    clearDecorations('awesome');
    
    /**
 * @brief The supported hashing algorithms in osquery
 *
 * These are usually used as a constructor argument to osquery::Hash
 */
enum HashType {
  HASH_TYPE_MD5 = 2,
  HASH_TYPE_SHA1 = 4,
  HASH_TYPE_SHA256 = 8,
};
    
      if (!::GetExitCodeProcess(process.nativeHandle(), &code)) {
    return false;
  }
    
    
    {
    {  // Stored query names is a factory method included alongside every query.
  // It will include the set of query names with existing 'previous' results.
  auto names = cf.getStoredQueryNames();
  auto in_vector = std::find(names.begin(), names.end(), 'foobar');
  EXPECT_NE(in_vector, names.end());
}
}

    
      // Now test inclusive bounds.
  struct ConstraintList cl3;
  constraint = Constraint(LESS_THAN_OR_EQUALS);
  constraint.expr = '1000';
  cl3.add(constraint);
  constraint = Constraint(GREATER_THAN_OR_EQUALS);
  constraint.expr = '1';
  cl3.add(constraint);
    
    void Distributed::addResult(const DistributedQueryResult& result) {
  results_.push_back(result);
}
    
    
    {  if (sc_time != file_dir_stat.st_ctime) {
    if ((rc = addMonitor(path, isc, isc->mask, isc->recursive, add_watch))) {
      isc->path_sc_time_[path] = file_dir_stat.st_ctime;
    }
  }
  return rc;
}
    
    namespace fs = boost::filesystem;
    
    
    {
    {  auto status = EventFactory::deregisterEventSubscriber(sub->getName());
  EXPECT_TRUE(status.ok());
}
}

    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    
    {} // namespace aria2
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      // do nothing; we don't use this message as outgoing message.
  virtual bool send() CXX11_OVERRIDE;