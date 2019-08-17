
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
    
#include 'base/basictypes.h'
    
    
    {  gtk_widget_show(menu_item_);
  g_object_ref_sink(G_OBJECT(menu_item_));
} 
    
    bool NwAppClearCacheFunction::RunNWSync(base::ListValue* response, std::string* error) {
  content::BrowsingDataRemover* remover = content::BrowserContext::GetBrowsingDataRemover(
      Profile::FromBrowserContext(context_));
    }
    
    
    {  KeyComparator comparator_;
  int refs_;
  Arena arena_;
  Table table_;
};
    
    template <typename Key, class Comparator>
typename SkipList<Key, Comparator>::Node* SkipList<Key, Comparator>::FindLast()
    const {
  Node* x = head_;
  int level = GetMaxHeight() - 1;
  while (true) {
    Node* next = x->Next(level);
    if (next == nullptr) {
      if (level == 0) {
        return x;
      } else {
        // Switch to next list
        level--;
      }
    } else {
      x = next;
    }
  }
}
    
      // If true, the implementation will do aggressive checking of the
  // data it is processing and will stop early if it detects any
  // errors.  This may have unforeseen ramifications: for example, a
  // corruption of one DB entry may cause a large number of entries to
  // become unreadable or for the entire DB to become unopenable.
  bool paranoid_checks = false;
    
    
    {}  // namespace leveldb
    
      // Advanced operation: flush any buffered key/value pairs to file.
  // Can be used to ensure that two adjacent entries never live in
  // the same data block.  Most clients should not need to use this method.
  // REQUIRES: Finish(), Abandon() have not been called
  void Flush();
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_

    
    #include <atomic>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <vector>
    
    //------------------------------------------------------------------------
    
      // Get angle
  int getAngle() { return angle; }
    
    PopplerCacheItem::~PopplerCacheItem()
{
}
    
    void PreScanOutputDev::check(GfxColorSpace *colorSpace, GfxColor *color,
			     double opacity, GfxBlendMode blendMode) {
  GfxRGB rgb;
    }
    
    #include <stdlib.h>
#include <stddef.h>
#include 'ProfileData.h'
    
    
    {  //
  // parse Media Screen Parameters
  if (obj->dictLookup('SP', &tmp2)->isDict()) { // media screen parameters
    Object params;
    if (tmp2.dictLookup('MH', &params)->isDict()) {
      MH.parseMediaScreenParameters(&params);
    }
    params.free();
    if (tmp2.dictLookup('BE', &params)->isDict()) {
      BE.parseMediaScreenParameters(&params);
    }
    params.free();
  }
  tmp2.free();
}
    
      GBool getIsEmbedded() { return isEmbedded; }
  Stream* getEmbbededStream() { return embeddedStream; }
  // write embedded stream to file
  void outputToFile(FILE*);
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    #ifndef SECURITYHANDLER_H
#define SECURITYHANDLER_H
    
      XRef *xref;			// xref table for current document
    
    /**
 * Simple struct for storing a write concern error with an endpoint.
 *
 * Certain types of errors are not stored in WriteOps or must be returned to a caller.
 */
struct ShardWCError {
    ShardWCError(const ShardEndpoint& endpoint, const WriteConcernErrorDetail& error)
        : endpoint(endpoint) {
        error.cloneTo(&this->error);
    }
    }
    
    #pragma once
    
        /**
     * Reattaches to the OperationContext and reacquires any storage-engine state.
     *
     * It is only legal to call this in the 'detached' state. On return, the cursor is left in a
     * 'saved' state, so callers must still call restoreState to use this object.
     */
    virtual void reattachToOperationContext(OperationContext* opCtx) = 0;
    
    
    {    switch (logicalOp) {
        case LogicalOp::opInvalid:
            // use 0 for unknown, non-specific
            break;
        case LogicalOp::opUpdate:
            c.update.inc(micros);
            break;
        case LogicalOp::opInsert:
            c.insert.inc(micros);
            break;
        case LogicalOp::opQuery:
            c.queries.inc(micros);
            break;
        case LogicalOp::opGetMore:
            c.getmore.inc(micros);
            break;
        case LogicalOp::opDelete:
            c.remove.inc(micros);
            break;
        case LogicalOp::opKillCursors:
            break;
        case LogicalOp::opCommand:
            c.commands.inc(micros);
            break;
        default:
            MONGO_UNREACHABLE;
    }
}
    
    
    {    if (UTEXT_FULL_TEXT_IN_CHUNK(fInputText, fInputLength)) {
        MatchChunkAt((int32_t)nativeStart, TRUE, status);
    } else {
        MatchAt(nativeStart, TRUE, status);
    }
    return fMatch;
}
    
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
    
        /**
     * Destructor.
     */
    virtual ~RemoveTransliterator();
    
    U_CAPI int32_t U_EXPORT2
uhash_hashScriptSet(const UElement key);
    
    void SearchIterator::setAttribute(USearchAttribute       attribute,
                                  USearchAttributeValue  value,
                                  UErrorCode            &status)
{
    if (U_SUCCESS(status)) {
        switch (attribute)
        {
        case USEARCH_OVERLAP :
            m_search_->isOverlap = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_CANONICAL_MATCH :
            m_search_->isCanonicalMatch = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_ELEMENT_COMPARISON :
            if (value == USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD || value == USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD) {
                m_search_->elementComparisonType = (int16_t)value;
            } else {
                m_search_->elementComparisonType = 0;
            }
            break;
        default:
            status = U_ILLEGAL_ARGUMENT_ERROR;
        }
    }
    if (value == USEARCH_ATTRIBUTE_VALUE_COUNT) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
    }
}
    
    UnicodeString&
SelectFormat::format(const Formattable& obj,
                   UnicodeString& appendTo,
                   FieldPosition& pos,
                   UErrorCode& status) const
{
    if (U_FAILURE(status)) {
        return appendTo;
    }
    if (obj.getType() == Formattable::kString) {
        return format(obj.getString(status), appendTo, pos, status);
    } else {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return appendTo;
    }
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
    
      Options options = CurrentOptions();
  options.table_factory.reset(NewBlockBasedTableFactory(table_options));
  options.prefix_extractor.reset(NewCappedPrefixTransform(9));
  options.compaction_filter_factory = std::make_shared<SkipEvenFilterFactory>();
  options.disable_auto_compactions = true;
  options.create_if_missing = true;
  DestroyAndReopen(options);
    
    Status TransactionDBMutexImpl::TryLockFor(int64_t timeout_time) {
  bool locked = true;
    }
    
    #pragma once
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      MyFilter filter;
    
      // atomically apply a set of updates
  {
    WriteBatch batch;
    batch.Delete('key1');
    batch.Put('key2', value);
    s = db->Write(WriteOptions(), &batch);
  }
    
      WriteOptions write_options;
  ReadOptions read_options;
  TransactionOptions txn_options;
  std::string value;