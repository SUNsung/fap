
        
            ratio = loader.GetCurrencyRatioEquality(usdUnit, fakeUnit1);
    
        auto groupedString = groupedStream.str();
    wstring result(groupedString.rbegin(), groupedString.rend());
    // Add the right (fractional or exponential) part of the number to the final string.
    if (hasDecimal)
    {
        result += displayString.substr(dec);
    }
    else if (hasExponent)
    {
        result += displayString.substr(exp);
    }
    
    /****************************Module*Header***********************************
* Module Name: EngineStrings.h
*
* Module Description:
*       Resource String ID's for the private strings used by Engine. Internal to Engine related code
*         not required by the clients
*
* Warnings:
*
* Created: 13-Feb-2008
*
\****************************************************************************/
    
            const CollectionData& coll = map.find(names[i])->second;
    
    //
// Check that cursor returns no results if there are no docs within interval
// and the first key located during initialization is above upper bound
//
class QueryStageCountScanNothingInIntervalFirstMatchTooHigh : public CountBase {
public:
    void run() {
        dbtests::WriteContextForTests ctx(&_opCtx, ns());
    }
    }
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        DecimalFormat *fmtToAdopt,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            fmtToAdopt,
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
    namespace {
struct bio_deleter {
  void operator()(BIO* b)
  {
    if (b)
      BIO_free(b);
  }
};
typedef std::unique_ptr<BIO, bio_deleter> bio_t;
struct p12_deleter {
  void operator()(PKCS12* p)
  {
    if (p)
      PKCS12_free(p);
  }
};
typedef std::unique_ptr<PKCS12, p12_deleter> p12_t;
struct pkey_deleter {
  void operator()(EVP_PKEY* x)
  {
    if (x)
      EVP_PKEY_free(x);
  }
};
typedef std::unique_ptr<EVP_PKEY, pkey_deleter> pkey_t;
struct x509_deleter {
  void operator()(X509* x)
  {
    if (x)
      X509_free(x);
  }
};
typedef std::unique_ptr<X509, x509_deleter> x509_t;
struct x509_sk_deleter {
  void operator()(STACK_OF(X509) * x)
  {
    if (x)
      sk_X509_pop_free(x, X509_free);
  }
};
typedef std::unique_ptr<STACK_OF(X509), x509_sk_deleter> x509_sk_t;
} // namespace
    
    CredHandle* WinTLSContext::getCredHandle()
{
  if (cred_) {
    return cred_.get();
  }
    }
    
    /**
 * HTTP related preferences
 */
PrefPtr PREF_HTTP_USER = makePref('http-user');
PrefPtr PREF_HTTP_PASSWD = makePref('http-passwd');
// values: string
PrefPtr PREF_USER_AGENT = makePref('user-agent');
// value: string that your file system recognizes as a file name.
PrefPtr PREF_LOAD_COOKIES = makePref('load-cookies');
// value: string that your file system recognizes as a file name.
PrefPtr PREF_SAVE_COOKIES = makePref('save-cookies');
// values: true | false
PrefPtr PREF_ENABLE_HTTP_KEEP_ALIVE = makePref('enable-http-keep-alive');
// values: true | false
PrefPtr PREF_ENABLE_HTTP_PIPELINING = makePref('enable-http-pipelining');
// value: 1*digit
PrefPtr PREF_MAX_HTTP_PIPELINING = makePref('max-http-pipelining');
// value: string
PrefPtr PREF_HEADER = makePref('header');
// value: string that your file system recognizes as a file name.
PrefPtr PREF_CERTIFICATE = makePref('certificate');
// value: string that your file system recognizes as a file name.
PrefPtr PREF_PRIVATE_KEY = makePref('private-key');
// value: string that your file system recognizes as a file name.
PrefPtr PREF_CA_CERTIFICATE = makePref('ca-certificate');
// value: true | false
PrefPtr PREF_CHECK_CERTIFICATE = makePref('check-certificate');
// value: true | false
PrefPtr PREF_USE_HEAD = makePref('use-head');
// value: true | false
PrefPtr PREF_HTTP_AUTH_CHALLENGE = makePref('http-auth-challenge');
// value: true | false
PrefPtr PREF_HTTP_NO_CACHE = makePref('http-no-cache');
// value: true | false
PrefPtr PREF_HTTP_ACCEPT_GZIP = makePref('http-accept-gzip');
// value: true | false
PrefPtr PREF_CONTENT_DISPOSITION_DEFAULT_UTF8 =
    makePref('content-disposition-default-utf8');
    
    extern PrefPtr PREF_VERSION;
extern PrefPtr PREF_HELP;
    
    std::string wCharToUtf8(const std::wstring& wsrc)
{
  int len = wCharToUtf8(nullptr, 0, wsrc.c_str());
  if (len <= 0) {
    abort();
  }
  auto buf = make_unique<char[]>((size_t)len);
  len = wCharToUtf8(buf.get(), len, wsrc.c_str());
  if (len <= 0) {
    abort();
  }
  else {
    return buf.get();
  }
}
    
      std::chrono::seconds timeout_;
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    #endif // D_DHT_SETUP_H

    
    namespace aria2 {
    }
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
        swListenPort *port = swServer_add_port(&serv, SW_SOCK_TCP, '127.0.0.1', 9501);
    port->open_eof_check = 0;
    //config
    port->backlog = 128;
    memcpy(port->protocol.package_eof, SW_STRL('\r\n\r\n'));  //开启eof检测，启用buffer区
    
    #include <sys/stat.h>
    
    static void thread_read(int i)
{
    pkg recv_pkg;
    uint32_t tmp;
    int ret;
    uint32_t recv_count = 0;
    int j = 0;
    swPipe *sock = &threads[i].pipe;
    int task_n = WRITE_N / READ_THREAD_N;
    }
    
    
    {
    {    Exception(int code) : code(code)
    {
        msg = swoole_strerror(code);
    }
};
}
    
    TEST(coroutine_base, get_current)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        auto co = Coroutine::get_current();
        *(long *) arg = co->get_cid();
    }, &_cid);
    }