
        
        #include <vector>
#include <string>
    
    QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
      mPlatformType = PlatformType::TYPE_OSX | PlatformType::TYPE_POSIX;
  EXPECT_TRUE(isPlatform(PlatformType::TYPE_POSIX, mPlatformType));
  EXPECT_TRUE(isPlatform(PlatformType::TYPE_OSX, mPlatformType));
    
    
    {  if (handle) {
    ::CloseHandle(handle);
  }
}
#else
TEST_F(ProcessTests, test_constructorPosix) {
  auto p = PlatformProcess(getpid());
  EXPECT_TRUE(p.isValid());
  EXPECT_EQ(p.nativeHandle(), getpid());
}
#endif
    
    TEST_F(StatusTests, test_ok) {
  auto s1 = Status(5, 'message');
  EXPECT_FALSE(s1.ok());
  auto s2 = Status(0, 'message');
  EXPECT_TRUE(s2.ok());
}
    
    namespace osquery {
    }
    
    bool js_cocos2dx_physics3d_Physics3DHingeConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DHingeConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DHingeConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getHingeAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getMotorTargetVelosity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getUpperLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getLowerLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getEnableAngularMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_enableMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getBFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setAngularOnly(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setMotorTarget(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getAngularOnly(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setAxis(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getAFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_Physics3DHingeConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    {    mColorLocation = glGetUniformLocation( mShaderProgram->getProgram(), 'u_color');
}
    
    
    {
    {
    {			if (settings->drawFrictionImpulse == 1)
			{
				b2Vec2 tangent = b2Cross(point->normal, 1.0f);
				b2Vec2 p1 = point->position;
				b2Vec2 p2 = p1 + k_impulseScale * point->tangentImpulse * tangent;
				m_debugDraw.DrawSegment(p1, p2, b2Color(0.9f, 0.9f, 0.3f));
			}
		}
	}
}
    
    	// Callbacks for derived classes.
	virtual void BeginContact(b2Contact* contact) { B2_NOT_USED(contact); }
	virtual void EndContact(b2Contact* contact) { B2_NOT_USED(contact); }
	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);
	virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse)
	{
		B2_NOT_USED(contact);
		B2_NOT_USED(impulse);
	}
    
    #endif

    
    
    {	b2Body* m_middle;
};
    
    
    {	b2Body* m_middle;
};
    
    TEST(IOBuf, PullAndPeek) {
  std::unique_ptr<IOBuf> iobuf1(IOBuf::create(10));
  append(iobuf1, 'he');
  std::unique_ptr<IOBuf> iobuf2(IOBuf::create(10));
  append(iobuf2, 'llo ');
  std::unique_ptr<IOBuf> iobuf3(IOBuf::create(10));
  append(iobuf3, 'world');
  iobuf1->prependChain(std::move(iobuf2));
  iobuf1->prependChain(std::move(iobuf3));
  EXPECT_EQ(3, iobuf1->countChainElements());
  EXPECT_EQ(11, iobuf1->computeChainDataLength());
    }
    
      for (size_t i = 0; i < count - 1; i++) {
    auto buf2 = IOBuf::create(len + 1);
    buf2->append(rand() % len + 1);
    fillBuf(buf2.get(), gen);
    buf->prependChain(std::move(buf2));
  }
  EXPECT_EQ(count, buf->countChainElements());
    
    namespace detail {
    }
    
    class OrderingTest : public testing::Test {};
    
    /// Futex<MockAtom> is our mocked futex implementation.  Note that the
/// method signatures differ from the real Futex because we have elided
/// unused default params and collapsed templated methods into the
/// used type
template <>
struct Futex<MockAtom> {
  MOCK_METHOD2(futexWait, FutexResult(uint32_t, uint32_t));
  MOCK_METHOD3(futexWaitUntil,
               FutexResult(uint32_t, const MockClock::time_point&, uint32_t));
};
    
    namespace detail {
    }
    
    #include <folly/Portability.h>
    
    /**
 *  AtomicHashArray is the building block for AtomicHashMap.  It provides the
 *  core lock-free functionality, but is limited by the fact that it cannot
 *  grow past its initialization size and is a little more awkward (no public
 *  constructor, for example).  If you're confident that you won't run out of
 *  space, don't mind the awkardness, and really need bare-metal performance,
 *  feel free to use AHA directly.
 *
 *  Check out AtomicHashMap.h for more thorough documentation on perf and
 *  general pros and cons relative to other hash maps.
 *
 *  @author Spencer Ahrens <sahrens@fb.com>
 *  @author Jordan DeLong <delong.j@fb.com>
 */
    
    
unsigned int XXH32_intermediateDigest (void* state);
/*
This function does the same as XXH32_digest(), generating a 32-bit hash,
but preserve memory context.
This way, it becomes possible to generate intermediate hashes, and then continue feeding data with XXH32_update().
To free memory context, use XXH32_digest(), or free().
*/
    
        // Compact, Get
    db->CompactRange(CompactRangeOptions(), nullptr, nullptr);
    ASSERT_EQ(a, 'x\nt\nr\nsa\ngh\njk');
    ASSERT_EQ(b, 'y\n2\nmonkey\ndf\nl;');
    ASSERT_EQ(c, 'asdasd\nasdasd\nbbnagnagsx\nrogosh');
    
    class InlineSkipTest : public testing::Test {
 public:
  void Insert(TestInlineSkipList* list, Key key) {
    char* buf = list->AllocateKey(sizeof(Key));
    memcpy(buf, &key, sizeof(Key));
    list->Insert(buf);
    keys_.insert(key);
  }
    }
    
      // call once at the beginning of a test to setup the dependency between
  // sync points
  void LoadDependency(const std::vector<SyncPointPair>& dependencies);
    
      std::unique_ptr<AuthConfig> getDefaultAuthConfig() const;
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
    
    {} // namespace aria2
    
    bool AbstractOptionHandler::hasTag(uint32_t tag) const
{
  return (tags_ & (1 << tag));
}
    
    class AbstractOptionHandler : public OptionHandler {
protected:
  PrefPtr pref_;
    }
    
      /**
   * Counts the number of tiers to which the 'completed' event can be sent.
   */
  size_t countCompletedAllowedTier() const;
    
      A2_LOG_ERROR(
      fmt('Failed to lookup %s in your KeyChain', fingerprint.c_str()));
  return false;
    
    
    {} // namespace fuzzer
    
      // Parse NumFilesInFirstCorpus.
  if (!std::getline(IS, Line, '\n')) return false;
  std::istringstream L2(Line);
  NumFilesInFirstCorpus = NumFiles + 1;
  L2 >> NumFilesInFirstCorpus;
  if (NumFilesInFirstCorpus > NumFiles) return false;
    
    namespace fuzzer {
    }
    
      void StopTraceRecording() {
    if (!RecordingMemcmp)
      return;
    RecordingMemcmp = false;
    for (size_t i = 0; i < NumMutations; i++) {
      auto &M = Mutations[i];
      if (Options.Verbosity >= 2) {
        AutoDictUnitCounts[M.W]++;
        AutoDictAdds++;
        if ((AutoDictAdds & (AutoDictAdds - 1)) == 0) {
          typedef std::pair<size_t, Word> CU;
          std::vector<CU> CountedUnits;
          for (auto &I : AutoDictUnitCounts)
            CountedUnits.push_back(std::make_pair(I.second, I.first));
          std::sort(CountedUnits.begin(), CountedUnits.end(),
                    [](const CU &a, const CU &b) { return a.first > b.first; });
          Printf('AutoDict:\n');
          for (auto &I : CountedUnits) {
            Printf('   %zd ', I.first);
            PrintASCII(I.second.data(), I.second.size());
            Printf('\n');
          }
        }
      }
      MD.AddWordToAutoDictionary({M.W, M.Pos});
    }
    for (auto &W : InterestingWords)
      MD.AddWordToAutoDictionary({W});
  }