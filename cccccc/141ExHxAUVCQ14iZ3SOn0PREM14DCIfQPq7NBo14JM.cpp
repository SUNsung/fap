
        
        Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    #ifdef _WIN32
#include 'windows.hpp'
#endif
    
    template <typename T1, typename T2, typename T3>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3>& t, ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
      // Returns true iff the current test has a (either fatal or
  // non-fatal) failure.
  static bool HasFailure() { return HasFatalFailure() || HasNonfatalFailure(); }
    
    // Makes sure this header is not included before gtest.h.
#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
# error Do not include gtest_pred_impl.h directly.  Include gtest.h instead.
#endif  // GTEST_INCLUDE_GTEST_GTEST_H_
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
        Collection* getCollection() const;
    void setCollection(Collection* oplog);
    void resetCollection();
    
        // Note that we only apply the TransientTxnError label if the 'autocommit' field is present in
    // the session options. When present, 'autocommit' will always be false, so we don't check its
    // value.
    if (sessionOptions.getAutocommit() &&
        isTransientTransactionError(code,
                                    hasWriteConcernError,
                                    commandName == 'commitTransaction' ||
                                        commandName == 'coordinateCommitTransaction')) {
        // An error code for which isTransientTransactionError() is true indicates a transaction
        // failure with no persistent side effects.
        labelArray << txn::TransientTxnErrorFieldName;
    }
    
        // Build an aggregation pipeline that performs the counting. We add stages that satisfy the
    // query, skip and limit before finishing with the actual $count stage.
    BSONArrayBuilder pipelineBuilder(aggregationBuilder.subarrayStart('pipeline'));
    
        //
    // Factory methods.
    //
    // On success, return a new PlanExecutor, owned by the caller.
    //
    // Passing YIELD_AUTO to any of these factories will construct a yielding executor which
    // may yield in the following circumstances:
    //   - During plan selection inside the call to make().
    //   - On any call to getNext().
    //   - On any call to restoreState().
    //   - While executing the plan inside executePlan().
    //
    // If auto-yielding is enabled, a yield during make() may result in the PlanExecutor being
    // killed, in which case this method will return a non-OK status.
    //
    
        BSONObj query = fromjson('{$text:{$search:\'awesome\', $diacriticSensitive: 0}}');
    StatusWithMatchExpression result =
        ExtensionsCallbackReal(&_opCtx, &_nss).parseText(query.firstElement());
    
    
    {
    {        BSONElement a = fixed['a'];
        ASSERT(o['a'].type() == bsonTimestamp);
        ASSERT(o['a'].timestampValue() == 0);
        ASSERT(a.type() == bsonTimestamp);
        ASSERT(a.timestampValue() > 0);
    }
};
    
            PlanStage::StageState countState = count->work(&wsid);
    
    
    {                if (minCount == 0) {
                    fp = StateSave(fp, loopLoc+1, status);
                }
                if (maxCount == -1) {
                    fp->fExtra[opValue+1] = fp->fInputIdx;   //  For loop breaking.
                } else if (maxCount == 0) {
                    fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                }
            }
            break;
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    int32_t RegexPattern::groupNumberFromName(const char *groupName, int32_t nameLength, UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return 0;
    }
    UnicodeString name(groupName, nameLength, US_INV);
    return groupNumberFromName(name, status);
}
    
    UBool
SelectFormat::operator==(const Format& other) const {
    if (this == &other) {
        return TRUE;
    }
    if (!Format::operator==(other)) {
        return FALSE;
    }
    const SelectFormat& o = (const SelectFormat&)other;
    return msgPattern == o.msgPattern;
}
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    namespace aria2 {
    }
    
    void DHTRoutingTable::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
      void setMessageFactory(DHTMessageFactory* factory);
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    namespace aria2 {
    }
    
    
    {  bool FullMergeV2(const MergeOperationInput& merge_in,
                   MergeOperationOutput* merge_out) const override {
    // Put basically only looks at the current/latest value
    assert(!merge_in.operand_list.empty());
    merge_out->existing_operand = merge_in.operand_list.back();
    return true;
  }
};
    
      // drop column family
  s = db->DropColumnFamily(handles[1]);
  assert(s.ok());
    
      // Commit.  Since the snapshot was advanced, the write done outside of the
  // transaction does not prevent this transaction from Committing.
  s = txn->Commit();
  assert(s.ok());
  delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
    
    #pragma once
    
    #include 'rocksdb/env.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/statistics.h'
#include 'rocksdb/status.h'
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/db.h'