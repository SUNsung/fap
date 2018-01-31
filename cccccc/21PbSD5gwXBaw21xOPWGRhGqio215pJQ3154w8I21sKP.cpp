
        
          std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    
    {  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    PutVarint32(dst, kNewFile);
    PutVarint32(dst, new_files_[i].first);  // level
    PutVarint64(dst, f.number);
    PutVarint64(dst, f.file_size);
    PutLengthPrefixedSlice(dst, f.smallest.Encode());
    PutLengthPrefixedSlice(dst, f.largest.Encode());
  }
}
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    void WriteBatch::Clear() {
  rep_.clear();
  rep_.resize(kHeader);
}
    
    #if defined(__linux)
    time_t now = time(NULL);
    fprintf(stderr, 'Date:           %s', ctime(&now));  // ctime() adds newline
    
    #ifndef STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
#define STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
    
      for (size_t i = 0; i < compact_pointers_.size(); i++) {
    PutVarint32(dst, kCompactPointer);
    PutVarint32(dst, compact_pointers_[i].first);  // level
    PutLengthPrefixedSlice(dst, compact_pointers_[i].second.Encode());
  }
    
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
    
    #include 'db/dbformat.h'
#include 'leveldb/write_batch.h'
    
    
    {    // Create tuning options and open the database
    int open_options = kyotocabinet::PolyDB::OWRITER |
                       kyotocabinet::PolyDB::OCREATE;
    int tune_options = kyotocabinet::TreeDB::TSMALL |
        kyotocabinet::TreeDB::TLINEAR;
    if (FLAGS_compression) {
      tune_options |= kyotocabinet::TreeDB::TCOMPRESS;
      db_->tune_compressor(&comp_);
    }
    db_->tune_options(tune_options);
    db_->tune_page_cache(FLAGS_cache_size);
    db_->tune_page(FLAGS_page_size);
    db_->tune_map(256LL<<20);
    if (sync) {
      open_options |= kyotocabinet::PolyDB::OAUTOSYNC;
    }
    if (!db_->open(file_name, open_options)) {
      fprintf(stderr, 'open error: %s\n', db_->error().name());
    }
  }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
      void SeekToRestartPoint(uint32_t index) {
    key_.clear();
    restart_index_ = index;
    // current_ will be fixed by ParseNextKey();
    }
    
    bool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    void Test::SpawnBomb(const b2Vec2& worldPt)
{
	m_bombSpawnPoint = worldPt;
	m_bombSpawning = true;
}
    
void Test::CompleteBombSpawn(const b2Vec2& p)
{
	if (m_bombSpawning == false)
	{
		return;
	}
    }
    
    #endif

    
    		// Cache velocities to improve movement on breakage.
		if (m_broke == false)
		{
			m_velocity = m_body1->GetLinearVelocity();
			m_angularVelocity = m_body1->GetAngularVelocity();
		}
    
    
    {    HttpMethod getMethod() {
        if (!headers->key) {
            return METHOD_INVALID;
        }
        switch (headers->keyLength) {
        case 3:
            if (!strncmp(headers->key, 'get', 3)) {
                return METHOD_GET;
            } else if (!strncmp(headers->key, 'put', 3)) {
                return METHOD_PUT;
            }
            break;
        case 4:
            if (!strncmp(headers->key, 'post', 4)) {
                return METHOD_POST;
            } else if (!strncmp(headers->key, 'head', 4)) {
                return METHOD_HEAD;
            }
            break;
        case 5:
            if (!strncmp(headers->key, 'patch', 5)) {
                return METHOD_PATCH;
            } else if (!strncmp(headers->key, 'trace', 5)) {
                return METHOD_TRACE;
            }
            break;
        case 6:
            if (!strncmp(headers->key, 'delete', 6)) {
                return METHOD_DELETE;
            }
            break;
        case 7:
            if (!strncmp(headers->key, 'options', 7)) {
                return METHOD_OPTIONS;
            } else if (!strncmp(headers->key, 'connect', 7)) {
                return METHOD_CONNECT;
            }
            break;
        }
        return METHOD_INVALID;
    }
};
    
    struct SocketExtension {
    string buffer;
    Queue messages;
};
    
    
    {        if (webSocket->compressionStatus == WebSocket<isServer>::CompressionStatus::ENABLED) {
            webSocket->compressionStatus = WebSocket<isServer>::CompressionStatus::COMPRESSED_FRAME;
            return true;
        } else {
            return false;
        }
    }
    
    
    {    static Group<isServer> *from(uS::Socket *s) {
        return static_cast<Group<isServer> *>(s->getNodeData());
    }
};