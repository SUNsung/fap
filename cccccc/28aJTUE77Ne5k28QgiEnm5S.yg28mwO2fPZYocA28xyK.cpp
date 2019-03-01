
        
        
    {}  // namespace atom

    
    #endif  // ATOM_BROWSER_API_ATOM_API_IN_APP_PURCHASE_H_

    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
    class Menu;
class NativeImage;
    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {}
    
    namespace in_app_purchase {
    }
    
    void OffScreenOutputDevice::OnPaint(const gfx::Rect& damage_rect) {
  gfx::Rect rect = damage_rect;
  if (!pending_damage_rect_.IsEmpty()) {
    rect.Union(pending_damage_rect_);
    pending_damage_rect_.SetRect(0, 0, 0, 0);
  }
    }
    
    #endif // BITCOIN_QT_NETWORKSTYLE_H

    
        QString getURI();
    
    #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
    static void secp256k1_gej_set_ge(secp256k1_gej *r, const secp256k1_ge *a) {
   r->infinity = a->infinity;
   r->x = a->x;
   r->y = a->y;
   secp256k1_fe_set_int(&r->z, 1);
}
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, signature);
    VERIFY_CHECK(recid >= 0 && recid < 4);  /* should have been caught in parse_compact */
    secp256k1_scalar_set_b32(&m, msg32, NULL);
    if (secp256k1_ecdsa_sig_recover(&ctx->ecmult_ctx, &r, &s, &q, &m, recid)) {
        secp256k1_pubkey_save(pubkey, &q);
        return 1;
    } else {
        memset(pubkey, 0, sizeof(*pubkey));
        return 0;
    }
}
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
        // A more complex valid grammar. PROTOCOLINFO accepts a VersionLine that
    // takes a key=value pair followed by an OptArguments, making this valid.
    // Because an OptArguments contains no semantic data, there is no point in
    // parsing it.
    CheckParseTorReplyMapping(
        'SOME=args,here MORE optional=arguments  here', {
            {'SOME', 'args,here'},
        });
    
    inline void printfln(const char* fmt)
{
    format(std::cout, fmt);
    std::cout << '\n';
}
    
    const std::vector<std::string>& UniValue::getKeys() const
{
    if (typ != VOBJ)
        throw std::runtime_error('JSON value is not an object as expected');
    return keys;
}
    
        BOOST_CHECK_EQUAL(v[0].getValStr(), '1.10000000');
    
    #ifndef BITCOIN_BECH32_H
#define BITCOIN_BECH32_H
    
    #if defined(OS_WIN)
#define _USE_MATH_DEFINES
#include <math.h>
#endif
    
    // static
void App::EmitReopenEvent() {
  std::set<RenderProcessHost*> rphs;
  std::set<RenderProcessHost*>::iterator it;
    }
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    #include 'ui/base/models/simple_menu_model.h'
    
    
    {  *y = CalculateMenuYPosition(&screen_rect, &menu_req, NULL, *y);
}
    
    MenuItem::~MenuItem() {
  Destroy();
}
    
    	wchar_t commandStr[MAX_PATH + 20] = { 0 };
	wchar_t baseCommandStr[MAX_PATH + 20] = { 0 };
	if (!single) {
		swprintf_s(baseCommandStr, L'\'%s\'', exePath);
	}
	else {
		swprintf_s(baseCommandStr, L'\'%s\' /single', exePath);
	}
    
    
    {                UTEXT_SETNATIVEINDEX(fInputText, fp->fInputIdx);
                UChar32 c = UTEXT_NEXT32(fInputText);
                if (c < 256) {
                    Regex8BitSet *s8 = &fPattern->fStaticSets8[opValue];
                    if (s8->contains(c)) {
                        success = !success;
                    }
                } else {
                    const UnicodeSet *s = fPattern->fStaticSets[opValue];
                    if (s->contains(c)) {
                        success = !success;
                    }
                }
                if (success) {
                    fp->fInputIdx = UTEXT_GETNATIVEINDEX(fInputText);
                } else {
                    // the character wasn't in the set.
                    fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                }
            }
            break;
    
    int32_t ScriptSet::countMembers() const {
    // This bit counter is good for sparse numbers of '1's, which is
    //  very much the case that we will usually have.
    int32_t count = 0;
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        uint32_t x = bits[i];
        while (x > 0) {
            count++;
            x &= (x - 1);    // and off the least significant one bit.
        }
    }
    return count;
}
    
    int32_t SearchIterator::getMatchedLength() const
{
    return m_search_->matchedLength;
}
    
void SearchIterator::getMatchedText(UnicodeString &result) const
{
    int32_t matchedindex  = m_search_->matchedIndex;
    int32_t     matchedlength = m_search_->matchedLength;
    if (matchedindex != USEARCH_DONE && matchedlength != 0) {
        result.setTo(m_search_->text + matchedindex, matchedlength); 
    }
    else {
        result.remove();
    }
}
    
void SearchIterator::setBreakIterator(BreakIterator *breakiter, 
                                      UErrorCode &status)
{
    if (U_SUCCESS(status)) {
#if 0
        m_search_->breakIter = NULL;
        // the c++ breakiterator may not make use of ubreakiterator.
        // so we'll have to keep track of it ourselves.
#else
        // Well, gee... the Constructors that take a BreakIterator
        // all cast the BreakIterator to a UBreakIterator and
        // pass it to the corresponding usearch_openFromXXX
        // routine, so there's no reason not to do this.
        //
        // Besides, a UBreakIterator is a BreakIterator, so
        // any subclass of BreakIterator should work fine here...
        m_search_->breakIter = (UBreakIterator *) breakiter;
#endif
        
        m_breakiterator_ = breakiter;
    }
}
    
const BreakIterator * SearchIterator::getBreakIterator(void) const
{
    return m_breakiterator_;
}
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
    U_NAMESPACE_BEGIN
    
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
    
    #endif  // __SIGNIFICANTDIGITINTERVAL_H__

    
    void 
SimpleTimeZone::setEndRule(int32_t month, int32_t dayOfMonth, 
                           int32_t time, TimeMode mode, UErrorCode& status)
{
    setEndRule(month, dayOfMonth, 0, time, mode, status);
}
    
    #include 'unicode/utypes.h'
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
 * and return the pointer.
 */
UnicodeReplacer* StringMatcher::toReplacer() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeReplacer *nonconst_base = static_cast<UnicodeReplacer *>(nonconst_this);
  
  return nonconst_base;
}
    
    #include 'DHTAbstractTask.h'
#include 'a2time.h'
    
    bool DHTResponseMessage::isReply() const { return true; }
    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
    DHTRoutingTableSerializer::DHTRoutingTableSerializer(int family)
    : family_(family)
{
}
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    
    {} // namespace aria2
    
      unsigned char secret_[2][SECRET_SIZE];
    
    #endif /* !__HIREDIS_QT_H__ */

    
    
    {
    {        if (msg.timer)
        {
            swTimer_del(&SwooleG.timer, msg.timer);
        }
        if (msg.error || closed)
        {
            return nullptr;
        }
    }
    /**
     * pop data
     */
    void *data = data_queue.front();
    data_queue.pop();
    /**
     * notify producer
     */
    if (!producer_queue.empty())
    {
        Coroutine *co = pop_coroutine(PRODUCER);
        co->resume();
    }
    return data;
}
    
    TEST(coroutine_socket, recv_success)
{
    coro_test([](void *arg)
    {
        Socket sock(SW_SOCK_TCP);
        bool retval = sock.connect('127.0.0.1', 9501, -1);
        ASSERT_EQ(retval, true);
        ASSERT_EQ(sock.errCode, 0);
        sock.send('echo', 5);
        char buf[128];
        int n = sock.recv(buf, sizeof(buf));
        ASSERT_EQ(strcmp(buf, 'hello world\n'), 0);
    });
}
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}

    
    
    {    return retval;
}

    
        _socket->object = NULL;
    _socket->active = 0;
    efree(object);
    swoole_set_object(zobject, NULL);