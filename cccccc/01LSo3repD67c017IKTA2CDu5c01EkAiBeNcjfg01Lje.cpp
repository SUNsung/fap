
        
        bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
    
    {  return forInvalid();
}
    
      using SourceManagerRef = llvm::IntrusiveRefCntPtr<const clang::SourceManager>;
  auto iter = std::lower_bound(sourceManagersWithDiagnostics.begin(),
                               sourceManagersWithDiagnostics.end(),
                               &clangSrcMgr,
                               [](const SourceManagerRef &inArray,
                                  const clang::SourceManager *toInsert) {
    return std::less<const clang::SourceManager *>()(inArray.get(), toInsert);
  });
  if (iter == sourceManagersWithDiagnostics.end() ||
      iter->get() != &clangSrcMgr) {
    sourceManagersWithDiagnostics.insert(iter, &clangSrcMgr);
  }
    
      IAMResult(DeclName declName, IAMAccessorKind kind, unsigned selfIdx,
            EffectiveClangContext dc)
      : name(declName), accessorKind(kind), selfIndex(selfIdx),
        effectiveDC(dc) {}
    
      bool shouldStoreInvocationInDebugInfo() const override;
    
    b2Triangle::~b2Triangle(){
	delete[] x;
	delete[] y;
}
    
    
	// ----------------------------------------------------------------------------------------------------
	//
    
    
    {}

    
    		inline SourceAlphaMix GetSourceAlphaMix(void)
		{
			return m_sourcealphamix;
		}
    
    static OPUS_INLINE int SATURATE(int a, int b)
{
   if (a>b)
      a=b;
   if (a<-b)
      a = -b;
   celt_mips+=3;
   return a;
}
    
    /* (opus_val32)(opus_val16) gives TI compiler a hint that it's 16x16->32 multiply */
/** 16x16 multiplication where the result fits in 32 bits */
#define MULT16_16(a,b)     (((opus_val32)(opus_val16)(a))*((opus_val32)(opus_val16)(b)))
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    
    {
    {        throw invalid_argument('the input has no solution');
    }
};
    
    int main() {
    }
    
        vector<int> nums1 = {1, 1, 2};
    cout << Solution().removeDuplicates(nums1) << endl;
    
    using namespace std;
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    }
    }
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    
    {            res[level].push_back(node->val);
            if(node->left)
                q.push(make_pair(node->left, level + 1 ));
            if(node->right)
                q.push(make_pair(node->right, level + 1 ));
        }
    
    //--------------------------------------------------------------------------
//
//    Assignment Operator
//
//--------------------------------------------------------------------------
RegexPattern &RegexPattern::operator = (const RegexPattern &other) {
    if (this == &other) {
        // Source and destination are the same.  Don't do anything.
        return *this;
    }
    }
    
    
    {        if(equalPrefixLength > 0) {
            if((leftUnit >= 0 && data->isUnsafeBackward(leftUnit, numeric)) ||
                    (rightUnit >= 0 && data->isUnsafeBackward(rightUnit, numeric))) {
                // Identical prefix: Back up to the start of a contraction or reordering sequence.
                do {
                    --equalPrefixLength;
                    leftUnit = left.previous(&left);
                    right.previous(&right);
                } while(equalPrefixLength > 0 && data->isUnsafeBackward(leftUnit, numeric));
            }
            // See the notes in the UTF-16 version.
        }
    }
    
    int32_t SearchIterator::next(UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        int32_t offset = getOffset();
        int32_t matchindex  = m_search_->matchedIndex;
        int32_t     matchlength = m_search_->matchedLength;
        m_search_->reset = FALSE;
        if (m_search_->isForwardSearching == TRUE) {
            int32_t textlength = m_search_->textLength;
            if (offset == textlength || matchindex == textlength || 
                (matchindex != USEARCH_DONE && 
                matchindex + matchlength >= textlength)) {
                // not enough characters to match
                setMatchNotFound();
                return USEARCH_DONE; 
            }
        }
        else {
            // switching direction. 
            // if matchedIndex == USEARCH_DONE, it means that either a 
            // setOffset has been called or that previous ran off the text
            // string. the iterator would have been set to offset 0 if a 
            // match is not found.
            m_search_->isForwardSearching = TRUE;
            if (m_search_->matchedIndex != USEARCH_DONE) {
                // there's no need to set the collation element iterator
                // the next call to next will set the offset.
                return matchindex;
            }
        }
    }
    }
    
    #endif

    
    
    {        int32_t length = other.getLength();
        if (length > getCapacity() && reallocate(length, 0) == NULL) {
            return setToBogus();
        }
        if (length > 0) {
            uprv_memcpy(getBytes(), other.getBytes(), length);
        }
        fFlagAndLength = (fFlagAndLength & 0x80000000) | length;
        fHashCode = other.fHashCode;
    }
    
    /**
 * Implement UnicodeReplacer
 */
void StringReplacer::addReplacementSetTo(UnicodeSet& toUnionTo) const {
    UChar32 ch;
    for (int32_t i=0; i<output.length(); i+=U16_LENGTH(ch)) {
    ch = output.char32At(i);
    UnicodeReplacer* r = data->lookupReplacer(ch);
    if (r == NULL) {
        toUnionTo.add(ch);
    } else {
        r->addReplacementSetTo(toUnionTo);
    }
    }
}
    
      void __set_request(const ExtensionPluginRequest& val);
    
    /// Static map of supported controller types.
static const std::map<std::string, hardwareDriver>
    kSmartExplicitDriverToDevice = {
        {'megaraid_sas', hardwareDriver{'megaraid,', 127}},
        {'hpsa', hardwareDriver{'cciss,', 14}},
};