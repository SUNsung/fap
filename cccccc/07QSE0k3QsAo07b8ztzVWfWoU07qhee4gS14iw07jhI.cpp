
        
                int k = length - n;
        assert(k >= 0);
        ListNode* cur = dummyHead;
        for(int i = 0 ; i < k ; i ++)
            cur = cur->next;
    
                    char c = stack.top();
                stack.pop();
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
    // Counting
// Time Complexity: O(n)
// Space Complexity: O(3)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
    public:
    vector<int> inorderTraversal(TreeNode* root) {
    }
    
            stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
    }
    
                int new_level_num = 0;
            vector<int> level;
            for(int i = 0; i < level_num; i ++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
    }
    
    #include <iostream>
#include <vector>
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
            stack.push(root);
        while(!stack.empty()){
    }
    
    #endif

    
    //////////////////////////////////////////////////////////////////////
    
    
    {  if (TOCoffset > INT16_MAX) {
    int16_t complement = 0;
    // If last four bytes is still bigger than a signed 16bits, uses as two
    // complement.
    if ((TOCoffset & UINT16_MAX) > INT16_MAX) complement = 1;
    addis(rt, reg::r2, static_cast<int16_t>((TOCoffset >> 16) + complement));
    ld (rt, rt[TOCoffset & UINT16_MAX]);
  } else {
    ld (rt, reg::r2[TOCoffset]);
    emitNop(instr_size_in_bytes);
  }
}
    
          X_form_t x_formater {{
                            rc,
                            xop,
                            static_cast<uint32_t>(rb),
                            static_cast<uint32_t>(ra),
                            static_cast<uint32_t>(rt),
                            op
                          }};
    
    namespace HPHP {
    }
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/execution-context.h'
#include 'hphp/runtime/base/request-event-handler.h'
    
    U_NAMESPACE_BEGIN
    
    void SearchIterator::setText(const UnicodeString &text, UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        if (text.length() == 0) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
        }
        else {
            m_text_        = text;
            m_search_->text = m_text_.getBuffer();
            m_search_->textLength = m_text_.length();
        }
    }
}
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    // Called by TimeZone::createDefault(), then clone() inside a Mutex - be careful.
SimpleTimeZone &
SimpleTimeZone::operator=(const SimpleTimeZone &right)
{
    if (this != &right)
    {
        TimeZone::operator=(right);
        rawOffset      = right.rawOffset;
        startMonth     = right.startMonth;
        startDay       = right.startDay;
        startDayOfWeek = right.startDayOfWeek;
        startTime      = right.startTime;
        startTimeMode  = right.startTimeMode;
        startMode      = right.startMode;
        endMonth       = right.endMonth;
        endDay         = right.endDay;
        endDayOfWeek   = right.endDayOfWeek;
        endTime        = right.endTime;
        endTimeMode    = right.endTimeMode;
        endMode        = right.endMode;
        startYear      = right.startYear;
        dstSavings     = right.dstSavings;
        useDaylight    = right.useDaylight;
        clearTransitionRules();
    }
    return *this;
}
    
    // Bitwise comparison for the collation keys.
UCollationResult
CollationKey::compareTo(const CollationKey& target, UErrorCode &status) const
{
  if(U_SUCCESS(status)) {
    const uint8_t *src = getBytes();
    const uint8_t *tgt = target.getBytes();
    }
    }
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword, or OTHER
     */
    static Form orOtherFromString(const char *keyword) {
        return static_cast<Form>(indexOrOtherIndexFromString(keyword));
    }