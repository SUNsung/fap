
        
        
    {}  // namespace leveldb
    
    void leveldb_options_set_env(leveldb_options_t* opt, leveldb_env_t* env) {
  opt->rep.env = (env ? env->rep : NULL);
}
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    TEST(FindFileTest, MultipleNullBoundaries) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_TRUE(! Overlaps(NULL, '149'));
  ASSERT_TRUE(! Overlaps('451', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
  ASSERT_TRUE(Overlaps(NULL, '150'));
  ASSERT_TRUE(Overlaps(NULL, '199'));
  ASSERT_TRUE(Overlaps(NULL, '200'));
  ASSERT_TRUE(Overlaps(NULL, '201'));
  ASSERT_TRUE(Overlaps(NULL, '400'));
  ASSERT_TRUE(Overlaps(NULL, '800'));
  ASSERT_TRUE(Overlaps('100', NULL));
  ASSERT_TRUE(Overlaps('200', NULL));
  ASSERT_TRUE(Overlaps('449', NULL));
  ASSERT_TRUE(Overlaps('450', NULL));
}
    
      void ReadSequential() {
    kyotocabinet::DB::Cursor* cur = db_->cursor();
    cur->jump();
    std::string ckey, cvalue;
    while (cur->get(&ckey, &cvalue, true)) {
      bytes_ += ckey.size() + cvalue.size();
      FinishedSingleOp();
    }
    delete cur;
  }
    
    class Slice {
 public:
  // Create an empty slice.
  Slice() : data_(''), size_(0) { }
    }
    
    #endif

    
    #include 'hphp/util/compatibility.h'
    
      // set interleave for early code. we'll then force interleave for a few
  // regions, and switch to local for the threads
  numa_set_interleave_mask(numa_all_nodes_ptr);
    
      if (asprintf(&default_magic, '%s:%s', hmagicpath, MAGIC) < 0)
    goto out;
  free(hmagicpath);
  return default_magic;
out:
  default_magic = NULL;
  free(hmagicpath);
  return MAGIC;
#else
  char *hmagicp = hmagicpath;
  char *tmppath = NULL;
  LPTSTR dllpath;
    
    struct Block;
struct SSATmp;
    
    #include 'hphp/util/disasm.h'
    
    
double Instruction::ImmFP64() {
  //  ImmFP: abcdefgh (8 bits)
  // Double: aBbb.bbbb.bbcd.efgh.0000.0000.0000.0000
  //         0000.0000.0000.0000.0000.0000.0000.0000 (64 bits)
  // where B is b ^ 1
  uint32_t bits = ImmFP();
  uint64_t bit7 = (bits >> 7) & 0x1;
  uint64_t bit6 = (bits >> 6) & 0x1;
  uint64_t bit5_to_0 = bits & 0x3f;
  uint64_t result = (bit7 << 63) | ((256 - bit6) << 54) | (bit5_to_0 << 48);
    }
    
    std::string read_embedded_data(const embedded_data& desc) {
  return std::string((const char*)LockResource(desc.m_handle), desc.m_len);
}
void* dlopen_embedded_data(const embedded_data&, char*) {
  return nullptr;
}
    
    
    {  bool ret;
  if (isLongOption(option)) {
    ret = setLongOption(option, value.toInt64());
  } else {
    raise_warning('curl_share_setopt():'
                  'Invalid curl share configuration option');
    ret = false;
  }
  return ret;
}
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
      struct alignas(64) CondVarNode {
    pthread_cond_t m_cond;
    folly::IntrusiveListHook m_listHook;
    }
    
      // Since iob3 is shared, the entire buffer should report itself as shared
  EXPECT_TRUE(iob1->isShared());
  // Unshare just iob3
  iob3ptr->unshareOne();
  EXPECT_FALSE(iob3ptr->isSharedOne());
  // Now everything in the chain should be unshared.
  // Check on all members of the chain just for good measure
  EXPECT_FALSE(iob1->isShared());
  EXPECT_FALSE(iob2ptr->isShared());
  EXPECT_FALSE(iob3ptr->isShared());
  EXPECT_FALSE(iob4ptr->isShared());
  EXPECT_FALSE(iob5ptr->isShared());
    
    
    {} // namespace folly

    
    namespace folly {
    }
    
        Node(T v, Node* n) : value_(v), next_(n) {}
    
    
    {} // namespace folly

    
    /*
 * The FOLLY_CREATE_HAS_MEMBER_FN_TRAITS is used to create traits
 * classes that check for the existence of a member function with
 * a given name and signature. It currently does not support
 * checking for inherited members.
 *
 * Such classes receive two template parameters: the class to be checked
 * and the signature of the member function. A static boolean field
 * named `value` (which is also constexpr) tells whether such member
 * function exists.
 *
 * Each traits class created is bound only to the member name, not to
 * its signature nor to the type of the class containing it.
 *
 * Say you need to know if a given class has a member function named
 * `test` with the following signature:
 *
 *    int test() const;
 *
 * You'd need this macro to create a traits class to check for a member
 * named `test`, and then use this traits class to check for the signature:
 *
 * namespace {
 *
 * FOLLY_CREATE_HAS_MEMBER_FN_TRAITS(has_test_traits, test);
 *
 * } // unnamed-namespace
 *
 * void some_func() {
 *   cout << 'Does class Foo have a member int test() const? '
 *     << boolalpha << has_test_traits<Foo, int() const>::value;
 * }
 *
 * You can use the same traits class to test for a completely different
 * signature, on a completely different class, as long as the member name
 * is the same:
 *
 * void some_func() {
 *   cout << 'Does class Foo have a member int test()? '
 *     << boolalpha << has_test_traits<Foo, int()>::value;
 *   cout << 'Does class Foo have a member int test() const? '
 *     << boolalpha << has_test_traits<Foo, int() const>::value;
 *   cout << 'Does class Bar have a member double test(const string&, long)? '
 *     << boolalpha << has_test_traits<Bar, double(const string&, long)>::value;
 * }
 *
 * @author: Marcelo Juchem <marcelo@fb.com>
 */
#define FOLLY_CREATE_HAS_MEMBER_FN_TRAITS(classname, func_name)               \
  template <typename, typename>                                               \
  struct classname##__folly_traits_impl__;                                    \
  FOLLY_CREATE_HAS_MEMBER_FN_TRAITS_IMPL(classname, func_name, );             \
  FOLLY_CREATE_HAS_MEMBER_FN_TRAITS_IMPL(classname, func_name, const);        \
  FOLLY_CREATE_HAS_MEMBER_FN_TRAITS_IMPL(                                     \
      classname, func_name, /* nolint */ volatile);                           \
  FOLLY_CREATE_HAS_MEMBER_FN_TRAITS_IMPL(                                     \
      classname, func_name, /* nolint */ volatile const);                     \
  template <typename TTheClass_, typename TTheSignature_>                     \
  using classname =                                                           \
      decltype(classname##__folly_traits_impl__<TTheClass_, TTheSignature_>:: \
                   template test<TTheClass_>(nullptr))
    
    struct T1 {}; // old-style IsRelocatable, below
struct T2 {}; // old-style IsRelocatable, below
struct T3 { typedef std::true_type IsRelocatable; };
struct T4 { typedef std::true_type IsTriviallyCopyable; };
struct T5 : T3 {};
    
    #endif // D_A2_STR_H

    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    public:
  AbstractOptionHandler(PrefPtr pref, const char* description = NO_DESCRIPTION,
                        const std::string& defaultValue = NO_DEFAULT_VALUE,
                        ARG_TYPE argType = REQ_ARG, char shortName = 0);
    
    bool AnnounceList::currentTierAcceptsCompletedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindCompletedAllowedTier()(*currentTier_);
  }
    }
    
    #include 'common.h'
    
      virtual bool addSystemTrustedCACerts() CXX11_OVERRIDE { return true; }
    
      bool HasUnit(const Unit &U) { return Hashes.count(Hash(U)); }
  bool HasUnit(const std::string &H) { return Hashes.count(H); }
  InputInfo &ChooseUnitToMutate(Random &Rand) {
    InputInfo &II = *Inputs[ChooseUnitIdxToMutate(Rand)];
    assert(!II.U.empty());
    return II;
  };
    
      std::string Path(Dir);
  assert(!Path.empty());
  if (Path.back() != '\\')
      Path.push_back('\\');
  Path.push_back('*');
    
    
    {}  // namespace fuzzer
    
    
    {  static const size_t kMaxMutations = 1 << 16;
  size_t NumMutations;
  TraceBasedMutation Mutations[kMaxMutations];
  // TODO: std::set is too inefficient, need to have a custom DS here.
  std::set<Word> InterestingWords;
  MutationDispatcher &MD;
  const FuzzingOptions Options;
  const Fuzzer *F;
  std::map<Word, size_t> AutoDictUnitCounts;
  size_t AutoDictAdds = 0;
};