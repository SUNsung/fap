
        
          bool isValid() const { return past != SrcPos{0,0}; }
    
    //////////////////////////////////////////////////////////////////////
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    #include <fstream>
#include <sstream>
    
      /**
   * Returns a map of those support bits. Tells caller which function can be
   * called.
   */
  virtual int debuggerSupport() {
    return 0;
  }
    
    #endif // HPHP_GLOB_STREAM_WRAPPER_H

    
    
    {}
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }
    
    #include <atomic>
    
                    // Pick up the three extra operands that CTR_INIT_NG has, and
                //    skip the pattern location counter past
                int32_t instrOperandLoc = (int32_t)fp->fPatIdx;
                fp->fPatIdx += 3;
                int32_t loopLoc  = URX_VAL(pat[instrOperandLoc]);
                int32_t minCount = (int32_t)pat[instrOperandLoc+1];
                int32_t maxCount = (int32_t)pat[instrOperandLoc+2];
                U_ASSERT(minCount>=0);
                U_ASSERT(maxCount>=minCount || maxCount==-1);
                U_ASSERT(loopLoc>fp->fPatIdx);
                if (maxCount == -1) {
                    fp->fExtra[opValue+1] = fp->fInputIdx;   //  Save initial input index for loop breaking.
                }
    
        ScriptSet &setAll();
    ScriptSet &resetAll();
    int32_t countMembers() const;
    int32_t hashCode() const;
    int32_t nextSetBit(int32_t script) const;
    
    SearchIterator::SearchIterator(const SearchIterator &other)
    : UObject(other)
{   
    m_breakiterator_            = other.m_breakiterator_;
    m_text_                     = other.m_text_;
    m_search_                   = (USearch *)uprv_malloc(sizeof(USearch));   
    m_search_->breakIter        = other.m_search_->breakIter;
    m_search_->isCanonicalMatch = other.m_search_->isCanonicalMatch;
    m_search_->isOverlap        = other.m_search_->isOverlap;
    m_search_->elementComparisonType = other.m_search_->elementComparisonType;
    m_search_->matchedIndex     = other.m_search_->matchedIndex;
    m_search_->matchedLength    = other.m_search_->matchedLength;
    m_search_->text             = other.m_search_->text;
    m_search_->textLength       = other.m_search_->textLength;
}
    
    Format* SelectFormat::clone() const
{
    return new SelectFormat(*this);
}
    
    class NumberFormat;
    
    uint8_t *CollationKey::reallocate(int32_t newCapacity, int32_t length) {
    uint8_t *newBytes = static_cast<uint8_t *>(uprv_malloc(newCapacity));
    if(newBytes == NULL) { return NULL; }
    if(length > 0) {
        uprv_memcpy(newBytes, getBytes(), length);
    }
    if(fFlagAndLength < 0) { uprv_free(fUnion.fFields.fBytes); }
    fUnion.fFields.fBytes = newBytes;
    fUnion.fFields.fCapacity = newCapacity;
    fFlagAndLength |= 0x80000000;
    return newBytes;
}
    
     public:
    
    void printLinkedList(ListNode* head){
    }
    
                    char match;
                if( s[i] == ')' )
                    match = '(';
                else if( s[i] == ']' )
                    match = '[';
                else{
                    assert( s[i] == '}' );
                    match = '{';
                }
    
    #include <iostream>
#include <vector>
#include <cassert>
    
    #include <iostream>
#include <vector>
#include <cassert>
    
            ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                stack.push(Command('print', command.node));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
                if(cur->left == NULL){
                res.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode* prev = cur->left;
                while(prev->right != NULL && prev->right != cur)
                    prev = prev->right;
    }
    
    using namespace std;