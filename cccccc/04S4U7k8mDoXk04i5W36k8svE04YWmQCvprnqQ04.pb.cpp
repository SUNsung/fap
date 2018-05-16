
        
        
    {  // FIXME: should we try to choose a delimiter if there is more than one?
  wordDelimiter = Unknown;
}

    
    /// A utility for finding dead-end blocks.
///
/// Dead-end blocks are blocks from which there is no path to the function exit
/// (either return or throw). These are blocks which end with an unreachable
/// instruction and blocks from which all paths end in 'unreachable' blocks.
/// This utility is needed to determine if the a value definition can have a
/// lack of users ignored along a specific path.
class DeadEndBlocks {
  llvm::SetVector<const SILBasicBlock *> ReachableBlocks;
  const SILFunction *F;
  bool isComputed = false;
    }
    
    class StdlibGroupsIndexRecordingConsumer : public IndexDataConsumer {
  llvm::StringMap<std::unique_ptr<SymbolTracker>> TrackerByGroup;
  // Keep a USR map to uniquely identify Decls.
  // FIXME: if we just passed the original Decl * through we could use that,
  // which would also let us avoid producing the USR/Name/etc. for decls unless
  // we actually need it (once per Decl instead of once per occurrence).
  std::vector<IndexSymbol> symbolStack;
    }
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
    SymbolInfo getSymbolInfoForDecl(const Decl *D);
SymbolSubKind getSubKindForAccessor(AccessorKind AK);
bool isLocalSymbol(const Decl *D);
    
    public:
  llvm::SourceMgr &getLLVMSourceMgr() {
    return LLVMSourceMgr;
  }
  const llvm::SourceMgr &getLLVMSourceMgr() const {
    return LLVMSourceMgr;
  }
    
    #include 'Private.h'
#include 'swift/Runtime/Once.h'
#include 'swift/Runtime/Debug.h'
#include <type_traits>
    
    class IndexDataConsumer {
  virtual void anchor();
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
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
    
    // Soft limit on number of level-0 files.  We slow down writes at this point.
static const int kL0_SlowdownWritesTrigger = 8;
    
    static std::string Shorten(const std::string& s, const std::string& l) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortestSeparator(&result, l);
  return result;
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    namespace leveldb {
    }
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    class WriteBatchTest { };
    
        bool transaction = (entries_per_batch > 1);
    for (int i = 0; i < reads_; i += entries_per_batch) {
      // Begin read transaction
      if (FLAGS_transaction && transaction) {
        status = sqlite3_step(begin_trans_stmt);
        StepErrorCheck(status);
        status = sqlite3_reset(begin_trans_stmt);
        ErrorCheck(status);
      }
    }
    
    
    {}  // namespace leveldb
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    class RepeatedMessageFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedMessageFieldGenerator(const FieldDescriptor* descriptor,
                                int fieldOrdinal,
                                const Options *options);
  ~RepeatedMessageFieldGenerator();
    }
    
      // Field.Builder setField(Field.Builder builderForValue)
  WriteFieldDocComment(printer, descriptor_);
  PrintNestedBuilderFunction(printer,
    '$deprecation$public Builder set$capitalized_name$(\n'
    '    $type$.Builder builderForValue)',
    
    void HHVM_FUNCTION(xhprof_frame_begin, const String& name) {
  Profiler *prof = ThreadInfo::s_threadInfo->m_profiler;
  if (prof) {
    s_profiler_factory->cacheString(name);
    prof->beginFrame(name.data());
  }
}
    
    void Timer::report() const {
  int64_t ms = getMicroSeconds();
  int seconds = ms / 1000000;
  PRINT_MSG('%s took %d'%02d\' (%' PRId64 ' us) %s', m_name.c_str(),
            seconds / 60, seconds % 60, ms, getName());
}
    
    
    {private:
  Timer m_timer;
  int64_t m_msThreshold;
  std::string m_location;
  std::string m_info;
};
    
    protected:
 void unserialize(Cell& result) final {
   cellCopy(make_array_like_tv(m_job->getAsyncResults(false).detach()), result);
  }
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
    
static Variant HHVM_FUNCTION(gmp_rootrem,
                             const Variant& data,
                             int64_t root) {
  if (root < 1) {
    raise_warning(cs_GMP_INVALID_ROOT_MUST_BE_POSITIVE, 'gmp_rootrem');
    return false;
  }
    }
    
    /* XXX this functionality is excluded in php, enable it in apprentice.c:340 */
#if 0
private const char *
get_default_magic(void)
{
  static const char hmagic[] = '/.magic/magic.mgc';
  static char *default_magic;
  char *home, *hmagicpath;
    }
    
      auto data = JmpSwitchData{};
  data.cases = iv.size();
  data.targets = &targets[0];
  data.spOffBCFromFP = spOffBCFromFP(env);
  data.spOffBCFromIRSP = spOffBCFromIRSP(env);
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    bool js_cocos2dx_physics3d_Physics3DConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConstraint_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::PhysicsShape* arg0;
        cocos2d::PhysicsShape* arg1;
    }
    
        virtual void DrawPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    
    {	m_bomb->CreateFixture(&fd);
}
    
    
    {
    {
    {				m_world->CreateJoint(&jd);
			}
		}
	}
    
    
    {	b2Body* m_attachment;
	b2Body* m_platform;
	float32 m_speed;
};
    
    			//m_x = RandomFloat(-1.0f, 1.0f);
			m_x = 0.20352793f;
			bd.position.Set(m_x, 10.0f);
			bd.bullet = true;
    
    				b2Vec2 anchor(-15.0f + 2.0f * i, 15.0f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
        // In-place growth failed.
    if (!success) {
      success =
          ((reallocated = static_cast<ElementWrapper*>(
                mallocx(newByteSize, MALLOCX_ZERO))) != nullptr);
    }
    
    
    {
    {} // namespace test
} // namespace folly

    
      using Indices = folly::make_index_sequence<N>;
    
      EXPECT_EQ(iob2ptr, iob1->next());
  EXPECT_EQ(iob3ptr, iob2ptr->next());
  EXPECT_EQ(iob4ptr, iob3ptr->next());
  EXPECT_EQ(iob5ptr, iob4ptr->next());
  EXPECT_EQ(iob1.get(), iob5ptr->next());
    
    TEST_F(OrderingTest, compare_greater_equal) {
  compare_greater_equal<OddCompare<int>> op;
  EXPECT_TRUE(op(3, 4));
  EXPECT_TRUE(op(3, 3));
  EXPECT_FALSE(op(4, 3));
}

    
    void CPUThreadPoolExecutor::add(Func func) {
  add(std::move(func), std::chrono::milliseconds(0));
}
    
    #include <folly/portability/Sockets.h>
#include <folly/portability/Windows.h>
    
      std::thread newThread(Func&& func) override {
    return threadFactory_->newThread(
        [func = std::move(func), initializer = threadInitializer_]() mutable {
          (*initializer)();
          func();
        });
  }
    
      /**
   * Class representing various options: file descriptor behavior, and
   * whether to use $PATH for searching for the executable,
   *
   * By default, we don't use $PATH, file descriptors are closed if
   * the close-on-exec flag is set (fcntl FD_CLOEXEC) and inherited
   * otherwise.
   */
  class Options {
    friend class Subprocess;
   public:
    Options() {}  // E.g. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=58328
    }
    
      T h4{h2};
  EXPECT_EQ(h2.size(), 1000);
  EXPECT_EQ(h4.size(), 1000);
    
    void AsyncSocket::failRead(const char* fn, const AsyncSocketException& ex) {
  VLOG(5) << 'AsyncSocket(this=' << this << ', fd=' << fd_ << ', state='
               << state_ << ' host=' << addr_.describe()
               << '): failed while reading in ' << fn << '(): '
               << ex.what();
  startFail();
    }
    
        double width;
    double height;
    
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
    
    void AnnounceList::setCurrentTier(
    std::deque<std::shared_ptr<AnnounceTier>>::iterator itr)
{
  if (itr != std::end(tiers_)) {
    currentTier_ = std::move(itr);
    currentTracker_ = std::begin((*currentTier_)->urls);
  }
}
    
      // Don't allow copying
  AnnounceTier(const AnnounceTier&) = delete;
  AnnounceTier& operator=(const AnnounceTier&) = delete;
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }