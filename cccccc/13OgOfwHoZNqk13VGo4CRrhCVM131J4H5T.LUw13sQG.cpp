
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
    @interface NumberBridgingTester : NSObject
- (BOOL)verifyKeysInRange:(NSRange)range existInDictionary:(NSDictionary *)dictionary;
@end
    
      /// Returns the identifier string for the buffer containing the given source
  /// location.
  ///
  /// This respects #line directives.
  StringRef getBufferIdentifierForLoc(SourceLoc Loc) const {
    if (auto VFile = getVirtualFile(Loc))
      return VFile->Name;
    else
      return getIdentifierForBuffer(findBufferContainingLoc(Loc));
  }
    
    #include 'leveldb/env.h'
    
    #include 'db/version_set.h'
#include 'util/coding.h'
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      for (size_t i = 0; i < 3; ++i) {
    std::string res;
    ASSERT_OK(db->Get(ReadOptions(), keys[i], &res));
    ASSERT_TRUE(res == vals[i]);
  }
    
    class Issue178 { };
    
    // Test for issue 200: when iterator switches direction from backward
// to forward, the current key can be yielded unexpectedly if a new
// mutation has been added just before the current key.
    
    
    {
    {}  // namespace port
}  // namespace leveldb

    
    Block::~Block() {
  if (owned_) {
    delete[] data_;
  }
}
    
      // Add '<shared><non_shared><value_size>' to buffer_
  PutVarint32(&buffer_, shared);
  PutVarint32(&buffer_, non_shared);
  PutVarint32(&buffer_, value.size());
    
    #include 'leveldb/iterator.h'
    
    AbstractBtMessage::AbstractBtMessage(uint8_t id, const char* name)
    : BtMessage(id),
      invalidate_(false),
      uploading_(false),
      cuid_(0),
      name_(name),
      pieceStorage_(nullptr),
      dispatcher_(nullptr),
      messageFactory_(nullptr),
      requestFactory_(nullptr),
      peerConnection_(nullptr),
      metadataGetMode_(false)
{
}
    
      virtual void openExistingFile(int64_t totalLength = 0) CXX11_OVERRIDE;
    
    #endif // D_ABSTRACT_PROXY_RESPONSE_COMMAND_H

    
    AnnounceTier::AnnounceEvent AnnounceList::getEvent() const
{
  if (currentTrackerInitialized_) {
    return (*currentTier_)->event;
  }
  else {
    return AnnounceTier::STARTED;
  }
}
    
      /**
   * Counts the number of tiers to which the 'stopped' event can be sent.
   */
  size_t countStoppedAllowedTier() const;
    
    
    {} // namespace aria2

    
      SecIdentityRef id;
  while (SecIdentitySearchCopyNext(search, &id) == errSecSuccess) {
    if (!checkIdentity(id, fp, ht)) {
      continue;
    }
    A2_LOG_INFO('Found cert with matching fingerprint');
    credentials_ = id;
    return true;
  }