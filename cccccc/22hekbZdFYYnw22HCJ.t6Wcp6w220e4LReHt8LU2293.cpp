
        
          // The Python MessageFactory used to create the class. It is needed to resolve
  // fields descriptors, including extensions fields; its C++ MessageFactory is
  // used to instantiate submessages.
  // This reference must stay alive until all message pointers are destructed.
  PyMessageFactory* py_message_factory;
    
    bool AnyMetadata::UnpackTo(Message* message) const {
  if (!InternalIs(message->GetDescriptor()->full_name())) {
    return false;
  }
  return message->ParseFromString(value_->GetNoArena());
}
    
      struct ThreadCache {
#if defined(GOOGLE_PROTOBUF_NO_THREADLOCAL)
    // If we are using the ThreadLocalStorage class to store the ThreadCache,
    // then the ThreadCache's default constructor has to be responsible for
    // initializing it.
    ThreadCache() : last_lifecycle_id_seen(-1), last_serial_arena(NULL) {}
#endif
    }
    
    void GeneratorContext::ListParsedFiles(
    std::vector<const FileDescriptor*>* output) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support ListParsedFiles';
}
    
      // Get the FieldGeneratorInfo for a given field.
  const FieldGeneratorInfo* GetFieldGeneratorInfo(
      const FieldDescriptor* field) const;
    
      // If true, the implementation will do aggressive checking of the
  // data it is processing and will stop early if it detects any
  // errors.  This may have unforeseen ramifications: for example, a
  // corruption of one DB entry may cause a large number of entries to
  // become unreadable or for the entire DB to become unopenable.
  bool paranoid_checks = false;
    
    namespace leveldb {
    }
    
      ~Table();
    
    #include 'leveldb/export.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
    
      // Support for iterating over the contents of a batch.
  Status Iterate(Handler* handler) const;
    
    #include <stddef.h>
#include <stdint.h>
    
    #include <stdint.h>
    
    namespace leveldb {
    }
    
    #include 'port/port.h'
#include 'util/env_windows_test_helper.h'
#include 'util/testharness.h'
    
    namespace mongo {
namespace repl {
    }
    }
    
        if (auto limit = cmd.getLimit()) {
        BSONObjBuilder limitBuilder(pipelineBuilder.subobjStart());
        limitBuilder.append('$limit', limit.get());
        limitBuilder.doneFast();
    }
    
    
    {    if (!databaseDropped) {
        // If a collection drop occurred, there will be a subsequent call to record for this
        // collection namespace which must be ignored. This does not apply to a database drop.
        _collDropNs.insert(nss.toString());
    }
}
    
    /**
 * pdfile unit tests
 */
    
    
    {            if (fPattern->fFlags & UREGEX_UNIX_LINES) {
                for (;;) {
                    if (c == 0x0a) {
                            MatchAt(startPos, FALSE, status);
                            if (U_FAILURE(status)) {
                                return FALSE;
                            }
                            if (fMatch) {
                                return TRUE;
                            }
                            UTEXT_SETNATIVEINDEX(fInputText, startPos);
                    }
                    if (startPos >= testStartLimit) {
                        fMatch = FALSE;
                        fHitEnd = TRUE;
                        return FALSE;
                    }
                    c = UTEXT_NEXT32(fInputText);
                    startPos = UTEXT_GETNATIVEINDEX(fInputText);
                    // Note that it's perfectly OK for a pattern to have a zero-length
                    //   match at the end of a string, so we must make sure that the loop
                    //   runs with startPos == testStartLimit the last time through.
                    if  (findProgressInterrupt(startPos, status))
                        return FALSE;
                }
            } else {
                for (;;) {
                    if (isLineTerminator(c)) {
                        if (c == 0x0d && startPos < fActiveLimit && UTEXT_CURRENT32(fInputText) == 0x0a) {
                            (void)UTEXT_NEXT32(fInputText);
                            startPos = UTEXT_GETNATIVEINDEX(fInputText);
                        }
                        MatchAt(startPos, FALSE, status);
                        if (U_FAILURE(status)) {
                            return FALSE;
                        }
                        if (fMatch) {
                            return TRUE;
                        }
                        UTEXT_SETNATIVEINDEX(fInputText, startPos);
                    }
                    if (startPos >= testStartLimit) {
                        fMatch = FALSE;
                        fHitEnd = TRUE;
                        return FALSE;
                    }
                    c = UTEXT_NEXT32(fInputText);
                    startPos = UTEXT_GETNATIVEINDEX(fInputText);
                    // Note that it's perfectly OK for a pattern to have a zero-length
                    //   match at the end of a string, so we must make sure that the loop
                    //   runs with startPos == testStartLimit the last time through.
                    if  (findProgressInterrupt(startPos, status))
                        return FALSE;
                }
            }
        }
    
    
    {    // Compare identical level.
    const Normalizer2Impl &nfcImpl = data->nfcImpl;
    left += equalPrefixLength;
    right += equalPrefixLength;
    if(leftLength > 0) {
        leftLength -= equalPrefixLength;
        rightLength -= equalPrefixLength;
    }
    if(settings->dontCheckFCD()) {
        UTF8NFDIterator leftIter(left, leftLength);
        UTF8NFDIterator rightIter(right, rightLength);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    } else {
        FCDUTF8NFDIterator leftIter(data, left, leftLength);
        FCDUTF8NFDIterator rightIter(data, right, rightLength);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    }
}
    
    U_NAMESPACE_END
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    public:
  DHTResponseMessage(const std::shared_ptr<DHTNode>& localNode,
                     const std::shared_ptr<DHTNode>& remoteNode,
                     const std::string& transactionID);
    
    class DHTNode;
    
      ~DHTSetup();
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
    class DHTTokenTracker;
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    DNSCache::DNSCache(const DNSCache& c) = default;