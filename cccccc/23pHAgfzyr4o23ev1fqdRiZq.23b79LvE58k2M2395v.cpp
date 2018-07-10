
        
        class ObjectManager;
    
    namespace nwapi {
    }
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
        std::string tooltip;
    if (option.GetString('tooltip', &tooltip))
      SetTooltip(tooltip);
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.destroy', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjDestroyFunction);
};
    
    bool NwShellOpenItemFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'OpenItem', *args_);
  return true;
}
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
#define GTEST_PRED5_(pred, v1, v2, v3, v4, v5, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred5Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             #v4, \
                                             #v5, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3, \
                                             v4, \
                                             v5), on_failure)
    
    #if GTEST_HAS_DEATH_TEST
    
    namespace testing {
namespace internal {
    }
    }
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
      TestCaseInfoContainer test_case_infos_;
    
    // isspace(int ch) and friends accept an unsigned char or EOF.  char
// may be signed, depending on the compiler (or compiler flags).
// Therefore we need to cast a char to unsigned char before calling
// isspace(), etc.
    
    template <GTEST_8_TYPENAMES_(T)>
inline GTEST_8_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5, const T6& f6, const T7& f7) {
  return GTEST_8_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7);
}
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    	virtual void poll() = 0;
	virtual Error accept_stream(Ref<StreamPeer> p_base) = 0;
	virtual Error connect_to_stream(Ref<StreamPeer> p_base, bool p_validate_certs = false, const String &p_for_hostname = String()) = 0;
	virtual Status get_status() const = 0;
    
    public:
	GodotClosestRayResultCallback(const btVector3 &rayFromWorld, const btVector3 &rayToWorld, const Set<RID> *p_exclude) :
			btCollisionWorld::ClosestRayResultCallback(rayFromWorld, rayToWorld),
			m_exclude(p_exclude),
			m_pickRay(false),
			m_shapeId(0) {}
    
    
    
    QueryData genNFSShares(QueryContext& context) {
  QueryData results;
    }
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
        auto dropper = DropPrivileges::get();
    EXPECT_TRUE(dropper->dropToParent(perm_path_ + 'ro'));
    EXPECT_TRUE(dropper->dropped_);
    EXPECT_EQ(dropper->to_user_, nobody->pw_uid);
    
     private:
  /// Plugin name
  std::string name_;
    
     private:
  void restart();
    
    static std::unique_ptr<Env> def_env(new NormalizingEnvWrapper(Env::Default()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvBasicTestWithParam,
                        ::testing::Values(def_env.get()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvMoreTestWithParam,
                        ::testing::Values(def_env.get()));
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    namespace rocksdb {
    }
    
    
    {    // if file not exist
    if (ret < 0) {
      _file_size = 0;
    }
  }
    
    std::unique_ptr<CompactionFilter> CompactionFilterFactoryJniCallback::CreateCompactionFilter(
    const CompactionFilter::Context& context) {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    ComparatorJniCallback::~ComparatorJniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
      // Generally your program life cycle should be fine with calling
  // get() repeatedly rather than saving the reference, and then not
  // call get() during process shutdown.
  [[deprecated('Replaced by try_get')]]
  static T* get() { return getEntry().get(); }
    
    // I have no idea what the normal values for these are,
// and really don't care what they are. They're only used
// within fcntl, so it's not an issue.
#define FD_CLOEXEC HANDLE_FLAG_INHERIT
#define O_NONBLOCK 1
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
    
    inline void* checkedCalloc(size_t n, size_t size) {
  void* p = calloc(n, size);
  if (!p) {
    throw_exception<std::bad_alloc>();
  }
  return p;
}
    
       private:
    friend class SerialExecutor;
    explicit Deleter(std::shared_ptr<Executor> parent)
        : parent_(std::move(parent)) {}