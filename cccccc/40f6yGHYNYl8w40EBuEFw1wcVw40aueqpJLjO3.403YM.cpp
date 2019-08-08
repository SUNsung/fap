
        
        #endif /* __glu_h__ */

    
      case csDeviceGray:
    writePS('/DeviceGray');
    if (genXform) {
      writePS(' {}');
    }
    if (updateColors) {
      processColors |= psProcessBlack;
    }
    break;
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
// Copyright (C) 2008 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    private:
    
      ObjectKey *key = new ObjectKey(ref.num, ref.gen);
  ObjectItem *item = new ObjectItem(&obj);
  cache->put(key, item);
  obj.free();
    
    void
ProfileData::addElement (double elapsed) {
	if (count == 0) {
		min = elapsed;
		max = elapsed;
	} else {
		if (elapsed < min)
			min = elapsed;
		if (elapsed > max)
			max = elapsed;
	}
	total += elapsed;
	count ++;
}
    
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
    
    BSONObj getErrorLabels(const OperationSessionInfoFromClient& sessionOptions,
                       const std::string& commandName,
                       ErrorCodes::Error code,
                       bool hasWriteConcernError) {
    BSONArrayBuilder labelArray;
    }
    
        if (auto limit = cmd.getLimit()) {
        BSONObjBuilder limitBuilder(pipelineBuilder.subobjStart());
        limitBuilder.append('$limit', limit.get());
        limitBuilder.doneFast();
    }
    
    void Top::incrementGlobalTransactionLatencyStats(uint64_t latency) {
    stdx::lock_guard<SimpleMutex> guard(_lock);
    _globalHistogramStats.increment(latency, Command::ReadWriteType::kTransaction);
}
    
    #include <boost/date_time/posix_time/posix_time.hpp>
    
    
    {
    {        StatusWith<BSONObj> fixed = fixDocumentForInsert(_opCtx.getServiceContext(), x);
        ASSERT(fixed.isOK());
        x = fixed.getValue();
        ASSERT(x['_id'].type() == jstOID);
        ASSERT(collection->insertDocument(&_opCtx, InsertStatement(x), nullOpDebug, true).isOK());
        wunit.commit();
    }
};
    
    
    {    // Copy the named capture group hash map.
    int32_t hashPos = UHASH_FIRST;
    while (const UHashElement *hashEl = uhash_nextElement(other.fNamedCaptureMap, &hashPos)) {
        if (U_FAILURE(fDeferredStatus)) {
            break;
        }
        const UnicodeString *name = (const UnicodeString *)hashEl->key.pointer;
        UnicodeString *key = new UnicodeString(*name);
        int32_t val = hashEl->value.integer;
        if (key == NULL) {
            fDeferredStatus = U_MEMORY_ALLOCATION_ERROR;
        } else {
            uhash_puti(fNamedCaptureMap, key, val, &fDeferredStatus);
        }
    }
    return *this;
}
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    SearchIterator::SearchIterator(CharacterIterator &text, 
                               BreakIterator     *breakiter) :
                               m_breakiterator_(breakiter)
{
    m_search_                     = (USearch *)uprv_malloc(sizeof(USearch));
    m_search_->breakIter          = NULL;
    m_search_->isOverlap          = FALSE;
    m_search_->isCanonicalMatch   = FALSE;
    m_search_->elementComparisonType = 0;
    m_search_->isForwardSearching = TRUE;
    m_search_->reset              = TRUE;
    m_search_->matchedIndex       = USEARCH_DONE;
    m_search_->matchedLength      = 0;
    text.getText(m_text_);
    m_search_->text               = m_text_.getBuffer();
    m_search_->textLength         = m_text_.length();
    m_breakiterator_             = breakiter;
}
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    status
 * Signature: (J)Lorg/rocksdb/Status;
 */
jobject Java_org_rocksdb_CompactionJobInfo_status(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_info =
      reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  return rocksdb::StatusJni::construct(
      env, compact_job_info->status);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    allowTrivialMove
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_CompactionOptionsUniversal_allowTrivialMove(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  return opt->allow_trivial_move;
}
    
    namespace rocksdb {
TableFilterJniCallback::TableFilterJniCallback(
    JNIEnv* env, jobject jtable_filter)
    : JniCallback(env, jtable_filter) {
  m_jfilter_methodid =
      AbstractTableFilterJni::getFilterMethod(env);
  if(m_jfilter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    /*
 * Class:     org_rocksdb_ThreadStatus
 * Method:    getOperationPropertyName
 * Signature: (BI)Ljava/lang/String;
 */
jstring Java_org_rocksdb_ThreadStatus_getOperationPropertyName(
    JNIEnv* env, jclass, jbyte joperation_type_value, jint jindex) {
  auto name = rocksdb::ThreadStatus::GetOperationPropertyName(
      rocksdb::OperationTypeJni::toCppOperationType(joperation_type_value),
      static_cast<int>(jindex));
  return rocksdb::JniUtil::toJavaString(env, &name, true);
}
    
    #pragma once
    
      // This function designed to write batch of data as one operation and get
  // as much performance as possbile. Because of this, db may not guarantee
  // data consistency or atomic nature of operation
  // Please see actual function implementation for details and limitations
  virtual ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) = 0;
    
     private:
  bool in_panic_ = false;
  rocksdb::ReadOptions default_read_options_;
  rocksdb::WriteOptions default_write_options_;
  rocksdb::WriteOptions batch_write_options_;
  std::unique_ptr<rocksdb::DB> db_ = nullptr;
    
    ExpectedSuccess<RocksdbMigrationError> RocksdbMigration::migrateIfNeeded() {
  auto open_result = openDatabase(source_path_, false, false);
  if (open_result) {
    auto db_handle = open_result.take();
    auto version_result = getVersion(db_handle);
    if (version_result) {
      int version = version_result.take();
      if (version != kDatabaseSchemaVersionCurrent) {
        migrateFromVersion(version);
      } else {
        return Success();
      }
    } else {
      return version_result.takeError();
    }
  } else {
    // InvalidArgument means that db does not exists
    if (open_result.getErrorCode() == RocksdbMigrationError::InvalidArgument) {
      return Success();
    } else {
      return open_result.takeError();
    }
  }
  return Success();
}
    
    
    {} // namespace osquery
