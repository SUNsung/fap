
        
          //----- initialization and control
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    void Page::display(OutputDev *out, double hDPI, double vDPI,
		   int rotate, GBool useMediaBox, GBool crop,
		   GBool printing, Catalog *catalog,
		   GBool (*abortCheckCbk)(void *data),
		   void *abortCheckCbkData,
                   GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
                   void *annotDisplayDecideCbkData) {
  displaySlice(out, hDPI, vDPI, rotate, useMediaBox, crop, -1, -1, -1, -1, printing, catalog,
	       abortCheckCbk, abortCheckCbkData,
               annotDisplayDecideCbk, annotDisplayDecideCbkData);
}
    
    class Parser {
public:
    }
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
      //----- text drawing
  virtual void beginStringOp(GfxState *state);
  virtual void endStringOp(GfxState *state);
  virtual GBool beginType3Char(GfxState *state, double x, double y,
			       double dx, double dy,
			       CharCode code, Unicode *u, int uLen);
  virtual void endType3Char(GfxState *state);
    
    
    {  void addElement (double elapsed);
  int getCount () { return count; }
  double getTotal () { return total; }
  double getMin () { return max; }
  double getMax () { return max; }
private:
  int count;			// size of <elems> array
  double total;			// number of elements in array
  double min;			// reference count
  double max;			// reference count
};
    
    MediaRendition::~MediaRendition() {
  if (fileName)
    delete fileName;
  if (contentType)
    delete contentType;
    }
    
    
    {  Object encryptDict;
  XpdfSecurityHandler *xsh;
  void *docData;
  int permFlags;
  Guchar fileKey[16];
  int fileKeyLength;
  int encVersion;
  CryptAlgorithm encAlgorithm;
  GBool ok;
};
#endif // ENABLE_PLUGINS
    
        auto queryObj = cmd.getQuery();
    if (!queryObj.isEmpty()) {
        BSONObjBuilder matchBuilder(pipelineBuilder.subobjStart());
        matchBuilder.append('$match', queryObj);
        matchBuilder.doneFast();
    }
    
    void TemporaryKVRecordStore::deleteTemporaryTable(OperationContext* opCtx) {
    // Need at least Global IS before calling into the storage engine, to protect against it being
    // destructed while we're using it.
    invariant(opCtx->lockState()->isReadLocked());
    }
    
        enum class LockType {
        ReadLocked,
        WriteLocked,
        NotLocked,
    };
    
    namespace {
    }
    
    /**
  *  UText, replace entire contents of the destination UText with a substring of the source UText.
  *
  *     @param src    The source UText
  *     @param dest   The destination UText. Must be writable.
  *                   May be NULL, in which case a new UText will be allocated.
  *     @param start  Start index of source substring.
  *     @param limit  Limit index of source substring.
  *     @param status An error code.
  */
static UText *utext_extract_replace(UText *src, UText *dest, int64_t start, int64_t limit, UErrorCode *status) {
    if (U_FAILURE(*status)) {
        return dest;
    }
    if (start == limit) {
        if (dest) {
            utext_replace(dest, 0, utext_nativeLength(dest), NULL, 0, status);
            return dest;
        } else {
            return utext_openUChars(NULL, NULL, 0, status);
        }
    }
    int32_t length = utext_extract(src, start, limit, NULL, 0, status);
    if (*status != U_BUFFER_OVERFLOW_ERROR && U_FAILURE(*status)) {
        return dest;
    }
    *status = U_ZERO_ERROR;
    MaybeStackArray<UChar, 40> buffer;
    if (length >= buffer.getCapacity()) {
        UChar *newBuf = buffer.resize(length+1);   // Leave space for terminating Nul.
        if (newBuf == NULL) {
            *status = U_MEMORY_ALLOCATION_ERROR;
        }
    }
    utext_extract(src, start, limit, buffer.getAlias(), length+1, status);
    if (dest) {
        utext_replace(dest, 0, utext_nativeLength(dest), buffer.getAlias(), length, status);
        return dest;
    }
    }
    
    UBool ScriptSet::contains(const ScriptSet &other) const {
    ScriptSet t(*this);
    t.intersect(other);
    return (t == other);
}
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    
    {private:
    MessageHandler_t cb_handler_;
    T cb_func_;
    Mutex mutex_;
    bool valid_;
};
    
    template<class F>
MessagePost_t  AsyncInvokePeriod(int64_t _after, int64_t _period, const F& _func, const MessageTitle_t& _title, const MessageHandler_t& _handlerid = DefAsyncInvokeHandler(), const std::string& _msg_name = 'default_name') {
    return PostMessage(_handlerid, Message(_title, _func, _msg_name), MessageTiming(kPeriod, _after, _period));
}
    //~title
//---~with message name
/*
template<class F>
MessagePost_t AsyncInvoke(const F& _func, const MessageHandler_t& _handlerid = DefAsyncInvokeHandler()) {
    return PostMessage(_handlerid, Message(0, _func));
}
    
    #endif /* SRC_SHORTLINK_INTERFACE_H_ */

    
    int ScopeJEnv::Status() {
    return status_;
}

    
        jobject ret_obj = JNU_CallStaticMethodByMethodInfo(env, KC2Java_getAccountInfo).l;
 	if (NULL == ret_obj) {
 		return std::string();
 	}
    
        bool oldisactive = isactive_;
    isactive_ = true;
    isforeground_ = _isforeground;
    lastforegroundchangetime_ = ::gettickcount();
    alarm_.Cancel();
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {    return Select(_sec * 1000 + _usec / 1000);
}
    
    //
//  boost_exception.cpp
//  comm
//
//  Created by yanguoyue on 16/5/20.
//