
        
          // Import private keys and certificates from PKCS #12 encoded
  // |data|, using the given |password|. If |is_extractable| is false,
  // mark the private key as unextractable from the module.
  // Returns a net error code on failure.
  int ImportFromPKCS12(PK11SlotInfo* slot_info,
                       const std::string& data,
                       const base::string16& password,
                       bool is_extractable,
                       net::ScopedCERTCertificateList* imported_certs);
    
    bool CertificateManagerModel::ImportServerCert(
    const net::ScopedCERTCertificateList& certificates,
    net::NSSCertDatabase::TrustBits trust_bits,
    net::NSSCertDatabase::ImportCertFailureList* not_imported) {
  return cert_db_->ImportServerCert(certificates, trust_bits, not_imported);
}
    
    template <typename P1, typename P2>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2))
    return nullptr;
  return callback.Run(a1, a2);
}
    
    bool Converter<v8::Local<v8::Value>>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             v8::Local<v8::Value>* out) {
  *out = val;
  return true;
}
    
    #ifndef NATIVE_MATE_NATIVE_MATE_DICTIONARY_H_
#define NATIVE_MATE_NATIVE_MATE_DICTIONARY_H_
    
    void AtomURLRequest::FollowRedirect() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  base::PostTaskWithTraits(
      FROM_HERE, {content::BrowserThread::IO},
      base::BindOnce(&AtomURLRequest::DoFollowRedirect, this));
}
    
        auto resource_response_head = response->head;
    auto headers = resource_response_head.headers;
    auto mime_type = resource_response_head.mime_type;
    if (headers.get())
      stream_info_->response_headers =
          new net::HttpResponseHeaders(headers->raw_headers());
    stream_info_->mime_type = mime_type;
    
    namespace {
    }
    
    
    {  EXPECT_EQ(71u, vec.size());
  EXPECT_EQ(71u, copy.size());
  EXPECT_EQ(71u, orig.size());
  EXPECT_EQ(false, vec[64]);
  EXPECT_EQ(false, copy[64]);
  EXPECT_EQ(false, orig[64]);
}
    
    bool swift::_swift_shouldReportFatalErrorsToDebugger() {
  return _swift_reportFatalErrorsToDebugger;
}
    
    KNOWN_STDLIB_TYPE_DECL(UInt,   NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt64, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt32, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt16, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UInt8,  NominalTypeDecl, 0)
    
    
    {      if (auto *dvi = dyn_cast<DestroyValueInst>(user)) {
        destroy = dvi;
        continue;
      }
    }
    
      /// Return the parent function of this scope. If the scope was
  /// inlined this recursively returns the function it was inlined
  /// into.
  SILFunction *getParentFunction() const;
    
      void setIsIndirectCase(bool IndirectCase=true) {
    if (IndirectCase)
      Data |= IsIndirectCase;
    else
      Data &= ~IsIndirectCase;
  }
    
    
    {    // Cache the result for future lookups
    Cache[MetadataAddress] = TI;
    return TI;
  }
    
      bool isAddressValid(RemoteAddress Addr, uint64_t Size) const {
    return (uintptr_t)Memory.data() <= Addr.getAddressData() &&
           Addr.getAddressData() + Size <=
               (uintptr_t)Memory.data() + Memory.size();
  }
    
        block_id_t get_root_block_id();
    void set_root_block_id(block_id_t new_root_block);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39>
internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28,
    T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36,
    T37 v37, T38 v38, T39 v39) {
  return internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39>(v1,
      v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17,
      v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31,
      v32, v33, v34, v35, v36, v37, v38, v39);
}
    
    // Overloaded PrintTo() for tuples of various arities.  We support
// tuples of up-to 10 fields.  The following implementation works
// regardless of whether tr1::tuple is implemented using the
// non-standard variadic template feature or not.
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
    # define TYPED_TEST(CaseName, TestName) \
  template <typename gtest_TypeParam_> \
  class GTEST_TEST_CLASS_NAME_(CaseName, TestName) \
      : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  bool gtest_##CaseName##_##TestName##_registered_ GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTest< \
          CaseName, \
          ::testing::internal::TemplateSel< \
              GTEST_TEST_CLASS_NAME_(CaseName, TestName)>, \
          GTEST_TYPE_PARAMS_(CaseName)>::Register(\
              '', #CaseName, #TestName, 0); \
  template <typename gtest_TypeParam_> \
  void GTEST_TEST_CLASS_NAME_(CaseName, TestName)<gtest_TypeParam_>::TestBody()
    
      // Creates directories so that path exists. Returns true if successful or if
  // the directories already exist; returns false if unable to create
  // directories for any reason. Will also return false if the FilePath does
  // not represent a directory (that is, it doesn't end with a path separator).
  bool CreateDirectoriesRecursively() const;
    
      // Join an existing circle.
  void join(linked_ptr_internal const* ptr)
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    // SameSizeTuplePrefixComparator<k, k>::Eq(t1, t2) returns true if the
// first k fields of t1 equals the first k fields of t2.
// SameSizeTuplePrefixComparator(k1, k2) would be a compiler error if
// k1 != k2.
template <int kSize1, int kSize2>
struct SameSizeTuplePrefixComparator;
    
            rootFrame->NavigationFailed += ref new Windows::UI::Xaml::Navigation::NavigationFailedEventHandler(this, &App::OnNavigationFailed);
    
            struct CurrencyUnitMetadata
        {
            CurrencyUnitMetadata(const std::wstring& s)
                : symbol(s)
            {
            }
    }
    
    
    {    m_historyItems.push_back(spHistoryItem);
    unsigned int lastIndex = static_cast<unsigned>(m_historyItems.size() - 1);
    return lastIndex;
}
    
    namespace CalcEngine
{
    class CalcNumSec
    {
    public:
        CalcNumSec()
            : value()
            , m_isNegative(false)
        {
        }
    }
    }
    
    /* NurbsCallback */
#define GLU_NURBS_ERROR                    100103
#define GLU_ERROR                          100103
#define GLU_NURBS_BEGIN                    100164
#define GLU_NURBS_BEGIN_EXT                100164
#define GLU_NURBS_VERTEX                   100165
#define GLU_NURBS_VERTEX_EXT               100165
#define GLU_NURBS_NORMAL                   100166
#define GLU_NURBS_NORMAL_EXT               100166
#define GLU_NURBS_COLOR                    100167
#define GLU_NURBS_COLOR_EXT                100167
#define GLU_NURBS_TEXTURE_COORD            100168
#define GLU_NURBS_TEX_COORD_EXT            100168
#define GLU_NURBS_END                      100169
#define GLU_NURBS_END_EXT                  100169
#define GLU_NURBS_BEGIN_DATA               100170
#define GLU_NURBS_BEGIN_DATA_EXT           100170
#define GLU_NURBS_VERTEX_DATA              100171
#define GLU_NURBS_VERTEX_DATA_EXT          100171
#define GLU_NURBS_NORMAL_DATA              100172
#define GLU_NURBS_NORMAL_DATA_EXT          100172
#define GLU_NURBS_COLOR_DATA               100173
#define GLU_NURBS_COLOR_DATA_EXT           100173
#define GLU_NURBS_TEXTURE_COORD_DATA       100174
#define GLU_NURBS_TEX_COORD_DATA_EXT       100174
#define GLU_NURBS_END_DATA                 100175
#define GLU_NURBS_END_DATA_EXT             100175
    
      // Check to see if a page slice should be displayed.  If this
  // returns false, the page display is aborted.  Typically, an
  // OutputDev will use some alternate means to display the page
  // before returning false.
  virtual GBool checkPageSlice(Page *page, double hDPI, double vDPI,
			       int rotate, GBool useMediaBox, GBool crop,
			       int sliceX, int sliceY, int sliceW, int sliceH,
			       GBool printing, Catalog *catalog,
			       GBool (*abortCheckCbk)(void *data) = NULL,
			       void *abortCheckCbkData = NULL);
    
      // Reserve room for terminating '\0'
  size--;
    
      base = 0;
  interval = NULL;
  for (i = 0; i < intervals.getLength(); i++) {
    interval = (Interval *) intervals.get(i);
    if (base <= index && index < base + interval->length)
      break;
    base += interval->length;
  }
    
      if (*keys[0] == key) {
    return items[0];
  }
  for (int i = 1; i <= lastValidCacheIndex; i++) {
    if (*keys[i] == key) {
      PopplerCacheKey *keyHit = keys[i];
      PopplerCacheItem *itemHit = items[i];
    }
    }
    
    PreScanOutputDev::~PreScanOutputDev() {
}
    
      GBool getIsEmbedded() { return isEmbedded; }
  Stream* getEmbbededStream() { return embeddedStream; }
  // write embedded stream to file
  void outputToFile(FILE*);
    
    Sound *Sound::parseSound(Object *obj)
{
  // let's try to see if this Object is a Sound, according to the PDF specs
  // (section 9.2)
  Stream *str = NULL;
  // the Object must be a Stream
  if (obj->isStream()) {
    str = obj->getStream();
  } else {
    return NULL;
  }
  // the Stream must have a Dict
  Dict *dict = str->getDict();
  if (dict == NULL)
    return NULL;
  Object tmp;
  // the Dict must have the 'R' key of type num
  dict->lookup('R', &tmp);
  if (tmp.isNum()) {
    return new Sound(obj);
  } else {
    return NULL;
  }
}
    
    
    {  sPath = new SplashPath();
  for (i = 0; i < path->getNumSubpaths(); ++i) {
    subpath = path->getSubpath(i);
    if (subpath->getNumPoints() > 0) {
      sPath->moveTo((SplashCoord)subpath->getX(0),
		    (SplashCoord)subpath->getY(0));
      j = 1;
      while (j < subpath->getNumPoints()) {
	if (subpath->getCurve(j)) {
	  sPath->curveTo((SplashCoord)subpath->getX(j),
			 (SplashCoord)subpath->getY(j),
			 (SplashCoord)subpath->getX(j+1),
			 (SplashCoord)subpath->getY(j+1),
			 (SplashCoord)subpath->getX(j+2),
			 (SplashCoord)subpath->getY(j+2));
	  j += 3;
	} else {
	  sPath->lineTo((SplashCoord)subpath->getX(j),
			(SplashCoord)subpath->getY(j));
	  ++j;
	}
      }
      if (subpath->isClosed()) {
	sPath->close();
      }
    }
  }
  return sPath;
}
    
    
    {    // wait for other agent receiving is ok.
    while (!other_agent()->is_receiving()) {
      std::this_thread::yield();
    }
    int64_t start = AsInt64<micros>(Clock::Now());
    while (true) {
      // param->print();
      if (count >= FLAGS_agent_mutual_send_frames) {
        break;
      }
      for (int32_t i = 0; i < MAX_CAN_SEND_FRAME_LEN; ++i) {
        // frames[i].id = id_count & 0x3FF;
        send_id = id;
        frames[i].id = id;
        frames[i].len = 8;
        frames[i].data[7] = static_cast<uint8_t>(count % 256);
        for (uint8_t j = 0; j < 7; ++j) {
          frames[i].data[j] = j;
        }
        ++count;
        ++id;
        if (id > end_id) {
          id = start_id;
        }
      }
      int32_t frame_num = MAX_CAN_SEND_FRAME_LEN;
      if (client->Send(frames, &frame_num) != ErrorCode::OK) {
        param->send_err_cnt += MAX_CAN_SEND_FRAME_LEN;
        AERROR << 'send_thread send msg failed!, id:' << send_id
               << ', conf:' << param->conf.ShortDebugString();
      } else {
        param->send_cnt += frame_num;
        param->send_lost_cnt += MAX_CAN_SEND_FRAME_LEN - frame_num;
        AINFO << 'send_frames: ' << frame_num << 'send_frame#'
              << frames[0].CanFrameString()
              << ' send lost:' << MAX_CAN_SEND_FRAME_LEN - frame_num
              << ', conf:' << param->conf.ShortDebugString();
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->send_time = static_cast<int32_t>(end - start);
    // In case for finish too quick to receiver miss some msg
    sleep(2);
    AINFO << 'Send thread stopping...' << param->conf.ShortDebugString();
    is_sending_finish(true);
    return;
  }
    
     private:
  void MakeDecisions(Frame* const frame,
                     ReferenceLineInfo* const reference_line_info);
  bool FindCrosswalks(ReferenceLineInfo* const reference_line_info);
  bool CheckStopForObstacle(ReferenceLineInfo* const reference_line_info,
                            const hdmap::CrosswalkInfoConstPtr crosswalk_ptr,
                            const Obstacle& obstacle,
                            const double stop_deceleration);
    
    #pragma once
    
     private:
  Stage::StageStatus FinishStage();
    
    double GetDistanceBetweenADCAndObstacle(const Frame& frame,
                                        const Obstacle* obstacle) {
  const auto& reference_line_info = frame.reference_line_info().front();
  const SLBoundary& adc_sl_boundary = reference_line_info.AdcSlBoundary();
  double distance_between_adc_and_obstacle =
      obstacle->PerceptionSLBoundary().start_s() - adc_sl_boundary.end_s();
  return distance_between_adc_and_obstacle;
}
    
    void Scenario::Init() {
  CHECK(!config_.stage_type().empty());
    }
    
    /**
 * @file
 **/
    
        params.push_back(node['focallength'].as<float>());
    params.push_back(node['principalpoint']['x'].as<float>());
    params.push_back(node['principalpoint']['y'].as<float>());
    
    class PullOverScenarioTest : public ::testing::Test {
 public:
  virtual void SetUp() {}
    }
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
class StageApproachingParkingSpotTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    config_.set_stage_type(
        ScenarioConfig::VALET_PARKING_APPROACHING_PARKING_SPOT);
  }
    }
    }
    }
    }
    }
    
    class StageParkingTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    config_.set_stage_type(ScenarioConfig::VALET_PARKING_PARKING);
  }
    }
    
    TEST_F(ValetParkingScenarioTest, VerifyConf) {
  FLAGS_scenario_valet_parking_config_file =
      '/apollo/modules/planning/conf/scenario/valet_parking_config.pb.txt';
    }
    
    #pragma once
    
    /**
 * @class FrameProcessor
 * @brief FrameProcessor is a class to process video streams.
 */
class FrameProcessor {
 public:
  // Constructor
  FrameProcessor(const std::string& input_video_file,
                 const std::string& output_jpg_dir);
    }
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setAllowTrivialMove
 * Signature: (JZ)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setAllowTrivialMove(
    JNIEnv*, jobject, jlong jhandle, jboolean jallow_trivial_move) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->allow_trivial_move = static_cast<bool>(jallow_trivial_move);
}
    
    /*
 * Class:     org_rocksdb_Env
 * Method:    getBackgroundThreads
 * Signature: (JB)I
 */
jint Java_org_rocksdb_Env_getBackgroundThreads(
    JNIEnv*, jobject, jlong jhandle, jbyte jpriority_value) {
  auto* rocks_env = reinterpret_cast<rocksdb::Env*>(jhandle);
  const int num = rocks_env->GetBackgroundThreads(
      rocksdb::PriorityJni::toCppPriority(jpriority_value));
  return static_cast<jint>(num);
}
    
      // Column family descriptor
  for (rocksdb::ColumnFamilyDescriptor& cfd : cf_descs) {
    // Construct a ColumnFamilyDescriptor java object
    jobject jcfd = rocksdb::ColumnFamilyDescriptorJni::construct(env, &cfd);
    if (env->ExceptionCheck()) {
      // exception occurred constructing object
      if (jcfd != nullptr) {
        env->DeleteLocalRef(jcfd);
      }
      return;
    }
    }
    
          env->SetObjectArrayElement(jresults, static_cast<jsize>(i), jentry_value);
      if (env->ExceptionCheck()) {
        // exception thrown: ArrayIndexOutOfBoundsException
        env->DeleteLocalRef(jentry_value);
        return nullptr;
      }
    
    /*
 * Class:     org_rocksdb_SstFileManager
 * Method:    newSstFileManager
 * Signature: (JJJDJ)J
 */
jlong Java_org_rocksdb_SstFileManager_newSstFileManager(
    JNIEnv* jnienv, jclass /*jcls*/, jlong jenv_handle, jlong jlogger_handle,
    jlong jrate_bytes, jdouble jmax_trash_db_ratio,
    jlong jmax_delete_chunk_bytes) {
  auto* env = reinterpret_cast<rocksdb::Env*>(jenv_handle);
  rocksdb::Status s;
  rocksdb::SstFileManager* sst_file_manager = nullptr;
    }
    
    
    {  // as TTLDB extends RocksDB on the java side, we can reuse
  // the RocksDB portal here.
  if (s.ok()) {
    return reinterpret_cast<jlong>(db);
  } else {
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
    return 0;
  }
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
    
            component->onRemove();
        component->setOwner(nullptr);
        component->release();
    
        void incrOutboundOverflowCount() {
      uint64_t count = tags_hi_.load(std::memory_order_relaxed);
      if (count < kSaturatedOutboundOverflowCount) {
        tags_hi_.store(
            count + kOutboundOverflowOperand, std::memory_order_relaxed);
      }
    }
    
    void UniqueInstance::enforce(
    char const* tmpl,
    Ptr const* ptrs,
    std::uint32_t key_size,
    std::uint32_t mapped_size,
    Value& global) noexcept {
  Value const local{tmpl, ptrs, key_size, mapped_size};
    }
    
    #include <cstdint>
#include <typeinfo>
    
    BENCHMARK(throwAndCatchContended) {
  contend(throwAndCatchImpl);
}
    
      /// Advance the clock. The clock never advances on its own.
  /// Advancing the clock causes some work to be done, if work is available
  /// to do (perhaps newly available because of the advanced clock).
  /// If dur is <= 0 this is a noop.
  void advance(Duration const& dur) {
    advanceTo(now_ + dur);
  }
    
    TEST(PriorityMPMCQueue, BasicOps) {
  // With just one priority, this should behave like a normal MPMCQueue
  PriorityMPMCQueue<size_t> queue(1, 10);
  EXPECT_TRUE(queue.isEmpty());
  EXPECT_EQ(1, queue.getNumPriorities());
    }
    
    using namespace std;
using namespace std::chrono;
using namespace folly;
    
    ////////////////