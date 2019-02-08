
        
        
    {    if (!ok) {
      thread->stats.AddMessage('(snappy failure)');
    } else {
      char buf[100];
      snprintf(buf, sizeof(buf), '(output: %.1f%%)',
               (produced * 100.0) / bytes);
      thread->stats.AddMessage(buf);
      thread->stats.AddBytes(bytes);
    }
  }
    
      Status OpenCompactionOutputFile(CompactionState* compact);
  Status FinishCompactionOutputFile(CompactionState* compact, Iterator* input);
  Status InstallCompactionResults(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
        Iterator* iterator2 = db_->NewIterator(read_options);
    iterator2->SeekToFirst();
    ASSERT_TRUE(!iterator2->Valid());
    delete iterator2;
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = nullptr;
  Table* table = nullptr;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
      std::string ManifestFileName() {
    std::string current;
    ASSERT_OK(ReadFileToString(env_, CurrentFileName(dbname_), &current));
    size_t len = current.size();
    if (len > 0 && current[len-1] == '\n') {
      current.resize(len - 1);
    }
    return dbname_ + '/' + current;
  }
    
    TEST(SkipTest, Concurrent1) { RunConcurrent(1); }
TEST(SkipTest, Concurrent2) { RunConcurrent(2); }
TEST(SkipTest, Concurrent3) { RunConcurrent(3); }
TEST(SkipTest, Concurrent4) { RunConcurrent(4); }
TEST(SkipTest, Concurrent5) { RunConcurrent(5); }
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}
    
    /*! \brief create a batch iterator from single instance iterator */
class BatchLoader : public IIterator<TBlobBatch> {
 public:
  explicit BatchLoader(IIterator<DataInst> *base):
    head_(1), num_overflow_(0), base_(base) {
  }
    }
    
    When `label_libsvm` is set to the path to another LibSVM file,
data is read from `data_libsvm` and label from `label_libsvm`.
In this case, both data and label are stored in the csr format.
If the label column in the `data_libsvm` file is ignored.
    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }
    
    
    {    RegexMatcher  m(this);
    int32_t r = 0;
    // Check m's status to make sure all is ok.
    if (U_SUCCESS(m.fDeferredStatus)) {
    	r = m.split(input, dest, destCapacity, status);
    }
    return r;
}
    
    SearchIterator::SearchIterator(const UnicodeString &text, 
                                     BreakIterator *breakiter) :
                                     m_breakiterator_(breakiter),
                                     m_text_(text)
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
    m_search_->text               = m_text_.getBuffer();
    m_search_->textLength         = text.length();
}
    
    #include 'unicode/messagepattern.h'
#include 'unicode/rbnf.h'
#include 'unicode/selfmt.h'
#include 'unicode/uchar.h'
#include 'unicode/ucnv_err.h'
#include 'unicode/umsg.h'
#include 'unicode/ustring.h'
#include 'unicode/utypes.h'
#include 'cmemory.h'
#include 'messageimpl.h'
#include 'patternprops.h'
#include 'selfmtimpl.h'
#include 'uassert.h'
#include 'ustrfmt.h'
#include 'util.h'
#include 'uvector.h'
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    #include 'unicode/unistr.h'
    
            int32_t nsNameHash = nsName.hashCode();
        // See if the numbering system is in the override list, if not, then add it.
        NSOverride *cur = overrideList;
        const SharedNumberFormat *snf = NULL;
        UBool found = FALSE;
        while ( cur && !found ) {
            if ( cur->hash == nsNameHash ) {
                snf = cur->snf;
                found = TRUE;
            }
            cur = cur->next;
        }
    
    #endif   // #if !UCONFIG_NO_FORMATTING
#endif   // SMPDTFST_H

    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
    //
// NOTE: Converting these macros into Templates is desirable, but please see
// issue #16159 [https://github.com/cocos2d/cocos2d-x/pull/16159] for further info
//
#define EASERATE_TEMPLATE_IMPL(CLASSNAME, TWEEN_FUNC) \
CLASSNAME* CLASSNAME::create(cocos2d::ActionInterval *action, float rate) \
{ \
    CLASSNAME *ease = new (std::nothrow) CLASSNAME(); \
    if (ease) \
    { \
        if (ease->initWithAction(action, rate)) \
            ease->autorelease(); \
        else \
            CC_SAFE_RELEASE_NULL(ease); \
    } \
    return ease; \
} \
CLASSNAME* CLASSNAME::clone() const \
{ \
    if(_inner) return CLASSNAME::create(_inner->clone(), _rate); \
    return nullptr; \
} \
void CLASSNAME::update(float time) { \
    _inner->update(TWEEN_FUNC(time, _rate)); \
} \
EaseRateAction* CLASSNAME::reverse() const { \
    return CLASSNAME::create(_inner->reverse(), 1.f / _rate); \
}
    
    
    /** Returns the numbers of actions that are running in a
     *  certain target with a specific tag.
     * Like getNumberOfRunningActionsInTarget Composable actions
     * are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @param tag       Tag that will be searched.
     * @return  The numbers of actions that are running in a certain target
     *          with a specific tag.
     * @see getNumberOfRunningActionsInTarget
     * @js NA
     */
    virtual size_t getNumberOfRunningActionsInTargetByTag(const Node *target, int tag);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__
    
    #include '2d/CCAtlasNode.h'
#include 'renderer/CCTextureAtlas.h'
#include 'base/CCDirector.h'
#include 'renderer/CCTextureCache.h'
#include 'renderer/CCRenderer.h'
#include 'renderer/CCGLProgram.h'
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions: