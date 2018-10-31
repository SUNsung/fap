
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  cache_t *cache_out = nullptr;
  cache_create(NameBuf.c_str(), &Attrs, &cache_out);
  assert(cache_out);
  return cache_out;
}
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
      // Scan forward until we find the word as a complete word.
  size_t startingIndex = 0;
  while (true) {
    size_t index = string.find(word, startingIndex);
    if (index == StringRef::npos)
      return StringRef::npos;
    }
    
      RPC_CSTR str;
  UuidToStringA(&uuid, &str);
    
    from GYBUnicodeDataUtils import GraphemeClusterBreakPropertyTable, get_extended_grapheme_cluster_rules_matrix
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
      StringRef presumedFile = presumedLoc.getFilename();
  SourceLoc startOfLine = loc.getAdvancedLoc(-presumedLoc.getColumn() + 1);
  bool isNewVirtualFile =
    swiftSrcMgr.openVirtualFile(startOfLine, presumedFile,
                                presumedLoc.getLine() - bufferLineNumber);
  if (isNewVirtualFile) {
    SourceLoc endOfLine = findEndOfLine(swiftSrcMgr, loc, mirrorID);
    swiftSrcMgr.closeVirtualFile(endOfLine);
  }
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    void Menu::RemoveKeys() {
  if (!focus_manager_) return;
    }
    
    namespace {
    }
    
    
    {  for (AppWindow* window : windows) {
    if (window->NWCanClose())
      window->GetBaseWindow()->Close();
  }
}
    
    namespace extensions {
    }
    
    
    {
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenRegisterStreamFunction);
  };
} // extensions
    
    template <typename T>
inline StringName __constant_get_enum_name(T param, const String &p_constant) {
	if (GetTypeInfo<T>::VARIANT_TYPE == Variant::NIL)
		ERR_PRINTS('Missing VARIANT_ENUM_CAST for constant's enum: ' + p_constant);
	return GetTypeInfo<T>::get_class_info().class_name;
}
    
    void ConstraintBullet::disable_collisions_between_bodies(const bool p_disabled) {
	disabled_collisions_between_bodies = p_disabled;
    }
    
    public:
	HingeJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Transform &frameA, const Transform &frameB);
	HingeJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Vector3 &pivotInA, const Vector3 &pivotInB, const Vector3 &axisInA, const Vector3 &axisInB);
    
    #include 'constraint_bullet.h'
#include 'servers/physics_server.h'
    
    public:
	_FORCE_INLINE_ void set_self(const RID &p_self) { self = p_self; }
	_FORCE_INLINE_ RID get_self() const { return self; }
    
    
    {#ifdef __cplusplus
}
#endif
    
    
    {		allocs[i].free_list = &allocs[i + 1];
	}
    
    	ClassDB::bind_method(D_METHOD('set_transfer_mode', 'mode'), &NetworkedMultiplayerPeer::set_transfer_mode);
	ClassDB::bind_method(D_METHOD('get_transfer_mode'), &NetworkedMultiplayerPeer::get_transfer_mode);
	ClassDB::bind_method(D_METHOD('set_target_peer', 'id'), &NetworkedMultiplayerPeer::set_target_peer);
    
    #endif // PCK_PACKER_H

    
      int Property(const std::string& name) {
    std::string property;
    int result;
    if (db_->GetProperty(name, &property) &&
        sscanf(property.c_str(), '%d', &result) == 1) {
      return result;
    } else {
      return -1;
    }
  }
    
    
    {    if (!ok) {
      thread->stats.AddMessage('(snappy failure)');
    } else {
      thread->stats.AddBytes(bytes);
    }
  }
    
    // Return the length of the encoding of 'key'.
inline size_t InternalKeyEncodingLength(const ParsedInternalKey& key) {
  return key.user_key.size() + 8;
}
    
    namespace leveldb {
    }
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
        virtual Status Skip(uint64_t n) {
      if (n > contents_.size()) {
        contents_.clear();
        return Status::NotFound('in-memory file skipped past end');
      }
    }
    
      // Return an iterator that yields the contents of the memtable.
  //
  // The caller must ensure that the underlying MemTable remains live
  // while the returned iterator is live.  The keys returned by this
  // iterator are internal keys encoded by AppendInternalKey in the
  // db/format.{h,cc} module.
  Iterator* NewIterator();
    
    TEST(RecoveryTest, LargeManifestCompacted) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  ASSERT_OK(Put('foo', 'bar'));
  Close();
  std::string old_manifest = ManifestFileName();
    }
    
        //fprintf(stderr, 'NewDescriptor:\n%s\n', edit_.DebugString().c_str());
    {
      log::Writer log(file);
      std::string record;
      edit_.EncodeTo(&record);
      status = log.AddRecord(record);
    }
    if (status.ok()) {
      status = file->Close();
    }
    delete file;
    file = nullptr;
    
    
    {#if !defined(NDEBUG)
    snapshot->list_ = this;
#endif  // !defined(NDEBUG)
    snapshot->next_ = &head_;
    snapshot->prev_ = head_.prev_;
    snapshot->prev_->next_ = snapshot;
    snapshot->next_->prev_ = snapshot;
    return snapshot;
  }
    
    
    {
    {  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    TEST_F(OptionsConfigParserPluginTests, test_get_option) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    namespace osquery {
    }
    
    /**
 * @brief Categories of process performance limitations.
 *
 * Performance limits are applied by a watcher thread on autoloaded extensions
 * and a optional daemon worker process. The performance types are identified
 * here, and organized into levels. Such that a caller may enforce rigor or
 * relax the performance expectations of a osquery daemon.
 */
enum class WatchdogLimitType {
  MEMORY_LIMIT,
  UTILIZATION_LIMIT,
  RESPAWN_LIMIT,
  RESPAWN_DELAY,
  LATENCY_LIMIT,
  INTERVAL,
};
    
    #include <stdio.h>
    
    
    {} // namespace aria2
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}