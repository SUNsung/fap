
        
        bool js_cocos2dx_navmesh_NavMesh_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMesh_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMesh(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMesh_removeNavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_removeNavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_addNavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_addNavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_setDebugDrawEnable(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_debugDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_NavMesh(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    {    virtual void DrawAABB(b2AABB* aabb, const b2Color& color);
};
    
    		b2Body* body2 = m_world->CreateBody(&bd);
		m_piece2 = body2->CreateFixture(&m_shape2, 1.0f);
    
    #ifndef BRIDGE_H
#define BRIDGE_H
    
    			b2RevoluteJointDef jd;
			jd.Initialize(ground, body, body->GetPosition());
			jd.lowerAngle = -8.0f * b2_pi / 180.0f;
			jd.upperAngle = 8.0f * b2_pi / 180.0f;
			jd.enableLimit = true;
			m_world->CreateJoint(&jd);
    
    #include <fstream>
    
    #include <boost/noncopyable.hpp>
    
    /// Internal startExtension implementation using a UNIX domain socket path.
Status startExtension(const std::string& manager_path,
                      const std::string& name,
                      const std::string& version,
                      const std::string& min_sdk_version,
                      const std::string& sdk_version);
    
      /**
   * @brief the distributed work ID of a carve
   *
   * This value should be used by the TLS endpoints where carve data is
   * aggregated, to tie together a distributed query with the carve data
   */
  std::string requestId_;
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
      // Make sure TLSConfigPlugin called enroll
  status = request.call(pt::ptree());
  ASSERT_TRUE(status.ok());
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
    class StringAppendTESTOperator : public MergeOperator {
 public:
  // Constructor with delimiter
  explicit StringAppendTESTOperator(char delim_char);
    }
    
      // Will store a local copy of all data in order to verify correctness
  std::map<std::string, std::string> parallel_copy;
    
      virtual void Prev() override {
    assert(Valid());
    // Ensure that all children are positioned before key().
    // If we are moving in the reverse direction, it is already
    // true for all of the non-current children since current_ is
    // the largest child and key() == current_->key().
    if (direction_ != kReverse) {
      // Otherwise, retreat the non-current children.  We retreat current_
      // just after the if-block.
      ClearHeaps();
      InitMaxHeap();
      for (auto& child : children_) {
        if (&child != current_) {
          if (!prefix_seek_mode_) {
            child.Seek(key());
            if (child.Valid()) {
              // Child is at first entry >= key().  Step back one to be < key()
              TEST_SYNC_POINT_CALLBACK('MergeIterator::Prev:BeforePrev',
                                       &child);
              child.Prev();
            } else {
              // Child has no entries >= key().  Position at last entry.
              TEST_SYNC_POINT('MergeIterator::Prev:BeforeSeekToLast');
              child.SeekToLast();
            }
          } else {
            child.SeekForPrev(key());
            if (child.Valid() && comparator_->Equal(key(), child.key())) {
              child.Prev();
            }
          }
        }
        if (child.Valid()) {
          maxHeap_->push(&child);
        }
      }
      direction_ = kReverse;
      if (!prefix_seek_mode_) {
        // Note that we don't do assert(current_ == CurrentReverse()) here
        // because it is possible to have some keys larger than the seek-key
        // inserted between Seek() and SeekToLast(), which makes current_ not
        // equal to CurrentReverse().
        current_ = CurrentReverse();
      }
      // The loop advanced all non-current children to be < key() so current_
      // should still be strictly the smallest key.
      assert(current_ == CurrentReverse());
    }
    }
    
    /*
 * Class:     org_rocksdb_SstFileWriter
 * Method:    merge
 * Signature: (JJJ)V
 */
void Java_org_rocksdb_SstFileWriter_merge__JJJ(JNIEnv *env, jobject jobj,
                                               jlong jhandle, jlong jkey_handle,
                                               jlong jvalue_handle) {
  auto *key_slice = reinterpret_cast<rocksdb::Slice *>(jkey_handle);
  auto *value_slice = reinterpret_cast<rocksdb::Slice *>(jvalue_handle);
  rocksdb::Status s =
    reinterpret_cast<rocksdb::SstFileWriter *>(jhandle)->Merge(*key_slice,
                                                               *value_slice);
  if (!s.ok()) {
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
  }
}
    
    namespace aria2 {
    }
    
      virtual bool getEraseAfterParse() const CXX11_OVERRIDE;
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
      virtual ~AdaptiveFileAllocationIterator();
    
    
    {  return false;
}
    
    #include 'TLSContext.h'
#include 'DlAbortEx.h'
    
      void DeleteInput(size_t Idx) {
    InputInfo &II = *Inputs[Idx];
    if (!OutputCorpus.empty() && II.MayDeleteFile)
      RemoveFile(DirPlusFile(OutputCorpus, Sha1ToString(II.Sha1)));
    Unit().swap(II.U);
    if (FeatureDebug)
      Printf('EVICTED %zd\n', Idx);
  }
    
      bool HasPositionHint() const { return PositionHint != std::numeric_limits<size_t>::max(); }
  size_t GetPositionHint() const {
    assert(HasPositionHint());
    return PositionHint;
  }
  void IncUseCount() { UseCount++; }
  void IncSuccessCount() { SuccessCount++; }
  size_t GetUseCount() const { return UseCount; }
  size_t GetSuccessCount() const {return SuccessCount; }
    
    struct ExternalFunctions {
  // Initialize function pointers. Functions that are not available will be set
  // to nullptr.  Do not call this constructor  before ``main()`` has been
  // entered.
  ExternalFunctions();
    }
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
    
    Unit FileToVector(const std::string &Path, size_t MaxSize, bool ExitOnError) {
  std::ifstream T(Path);
  if (ExitOnError && !T) {
    Printf('No such directory: %s; exiting\n', Path.c_str());
    exit(1);
  }
    }
    
    Unit FileToVector(const std::string &Path, size_t MaxSize = 0,
                  bool ExitOnError = true);
    
    void Fuzzer::ShuffleCorpus(UnitVector *V) {
  std::random_shuffle(V->begin(), V->end(), MD.GetRand());
  if (Options.PreferSmall)
    std::stable_sort(V->begin(), V->end(), [](const Unit &A, const Unit &B) {
      return A.size() < B.size();
    });
}
    
      size_t AddWordFromDictionary(Dictionary &D, uint8_t *Data, size_t Size,
                               size_t MaxSize);
  size_t MutateImpl(uint8_t *Data, size_t Size, size_t MaxSize,
                    const std::vector<Mutator> &Mutators);