
        
            explicit reverse_lock(Lock& _lock) : lock(_lock) {
        _lock.unlock();
        _lock.swap(templock);
    }
    
    
    {    /* On the first run, return 0 to force a second run */
    if (counter == 0) {
        memset(nonce32, 0, 32);
        return 1;
    }
    /* On the second run, return an overflow to force a third run */
    if (counter == 1) {
        memset(nonce32, 0xff, 32);
        return 1;
    }
    /* On the next run, return a valid nonce, but flip a coin as to whether or not to fail signing. */
    memset(nonce32, 1, 32);
    return secp256k1_rand_bits(1);
}
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    #ifndef BITCOIN_CRYPTO_RIPEMD160_H
#define BITCOIN_CRYPTO_RIPEMD160_H
    
    
    {
    {        : '+r'(s), '+r'(chunk), '+r'(blocks), '=r'(a), '=r'(b), '=r'(c), '=r'(d), /* e = chunk */ '=r'(f), '=r'(g), '=r'(h), '=r'(y0), '=r'(y1), '=r'(y2), '=r'(tbl), '+m'(inp_end), '+m'(inp), '+m'(xfer)
        : 'm'(K256), 'm'(FLIP_MASK), 'm'(SHUF_00BA), 'm'(SHUF_DC00)
        : 'cc', 'memory', 'xmm0', 'xmm1', 'xmm2', 'xmm3', 'xmm4', 'xmm5', 'xmm6', 'xmm7', 'xmm8', 'xmm9', 'xmm10', 'xmm11', 'xmm12'
   );
}
}
    
    TEST(DBTest, Snapshot) {
  do {
    Put('foo', 'v1');
    const Snapshot* s1 = db_->GetSnapshot();
    Put('foo', 'v2');
    const Snapshot* s2 = db_->GetSnapshot();
    Put('foo', 'v3');
    const Snapshot* s3 = db_->GetSnapshot();
    }
    }
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
      // When start user key is prefix of limit user key
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foobar', 200, kTypeValue)));
    
    namespace {
    }
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
    #ifdef __linux__
#if defined __i386 || defined __x86_64
#define BREAKPOINT __asm__ volatile ('int3')
#else   /* not x86/amd64 */
#define BREAKPOINT (raise(SIGTRAP))
#endif  /* x86/amd64 */
#elif defined(__MACH__)
#define BREAKPOINT (raise(SIGTRAP))
#elif defined(_WIN32)
#define BREAKPOINT DebugBreak()
#else
#error 'BREAKPOINT not defined for this operating system'
#endif
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
    namespace internal {
    }
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
      tuple& operator=(const tuple& t) { return CopyFrom(t); }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22>
struct Types22 {
  typedef T1 Head;
  typedef Types21<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22> Tail;
};
    
      if (max_value == min_value) {
    return max_value;
  }
    
    TEST_F(PacksTests, test_schedule) {
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  // Expect a single query in the schedule since one query has an explicit
  // invalid/fake platform requirement.
  EXPECT_EQ(fpack.getSchedule().size(), 1U);
}
    
    #pragma once
    
      assert(column_families.size() == raw_handles.size() &&
         'can't map column families to handles');
  if (column_families.size() != raw_handles.size()) {
    return createError(
        DatabaseError::FailToOpenDatabase,
        'Fail to open database: can't map column families to handles');
  }
    
    #pragma once
    
    bool Flag::isDefault(const std::string& name) {
  flags::CommandLineFlagInfo info;
  if (!flags::GetCommandLineFlagInfo(name.c_str(), &info)) {
    return false;
  }
    }
    
    Status LoggerPlugin::call(const PluginRequest& request,
                          PluginResponse& response) {
  std::vector<StatusLogLine> intermediate_logs;
  if (request.count('string') > 0) {
    return this->logString(request.at('string'));
  } else if (request.count('snapshot') > 0) {
    return this->logSnapshot(request.at('snapshot'));
  } else if (request.count('init') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    this->setProcessName(request.at('init'));
    this->init(this->name(), intermediate_logs);
    return Status(0);
  } else if (request.count('status') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    return this->logStatus(intermediate_logs);
  } else if (request.count('event') > 0) {
    return this->logEvent(request.at('event'));
  } else if (request.count('action') && request.at('action') == 'features') {
    size_t features = 0;
    features |= (usesLogStatus()) ? LOGGER_FEATURE_LOGSTATUS : 0;
    features |= (usesLogEvent()) ? LOGGER_FEATURE_LOGEVENT : 0;
    return Status(static_cast<int>(features));
  } else {
    return Status(1, 'Unsupported call to logger plugin');
  }
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
    
            void addWrite() {
            if (m_write) return;
            m_write = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Write, 0);
            connect(m_write, SIGNAL(activated(int)), this, SLOT(write()));
        }
    
    class ExampleQt : public QObject {
    }
    
        std::map<int, int> _map;
    
    
    {    if (p < data + header.length)
    {
        // 1              character set
        charset = *p;
        p += 1;
        // 2              status flags
        memcpy(&status_flags, p, 2);
        p += 2;
        // 2              capability flags (upper 2 bytes)
        memcpy(((char *) (&capability_flags) + 2), p, 2);
        p += 2;
        // 1              auth plugin data length
        auth_plugin_data_length = (uint8_t) *p;
        p += 1;
        // x              reserved
        memcpy(&reserved, p, sizeof(reserved));
        p += sizeof(reserved);
        if (capability_flags & SW_MYSQL_CLIENT_SECURE_CONNECTION)
        {
            uint8_t len = SW_MAX(13, auth_plugin_data_length - 8);
            memcpy(auth_plugin_data + 8, p, len);
            p += len;
        }
        if (capability_flags & SW_MYSQL_CLIENT_PLUGIN_AUTH)
        {
            auth_plugin_name = std::string(p, strlen(p));
            swTraceLog(SW_TRACE_MYSQL_CLIENT, 'use %s auth plugin', auth_plugin_name.c_str());
        }
    }
    swTraceLog(
        SW_TRACE_MYSQL_CLIENT, 'Server protocol=%d, version=%s, connection_id=%d, capabilites=0x%08x, status=%u, auth_plugin_name=%s, auth_plugin_data=L%u[%s]',
        protocol_version, server_version.c_str(), connection_id, capability_flags, status_flags, auth_plugin_name.c_str(), auth_plugin_data_length, auth_plugin_data
    );
};
    
        if (ctx.err.has_error)
    {
        zend_llist_destroy(&ctx.allocations); /* deallocates structure as well */
        structure = NULL;
        *err = ctx.err;
    }
    else
    {
        *allocations = (zend_llist *) emalloc(sizeof **allocations);
        **allocations = ctx.allocations;
    }
    
    int php_do_getsockopt_ipv6_rfc3542(Socket *php_sock, int level, int optname, zval *result)
{
    struct err_s err =
    { 0 };
    char *buffer;
    socklen_t size;
    int res;
    to_zval_read_field *reader;
    }
    
                    if ((zmode = zend_hash_index_find(Z_ARRVAL_P(descitem), 2)) != NULL)
                {
                    convert_to_string_ex(zmode);
                }
                else
                {
                    php_swoole_fatal_error(E_WARNING, 'Missing mode parameter for 'file'');
                    goto exit_fail;
                }