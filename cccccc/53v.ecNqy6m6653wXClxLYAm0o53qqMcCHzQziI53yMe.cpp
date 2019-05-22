
        
            secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    b2Triangle::~b2Triangle(){
	delete[] x;
	delete[] y;
}
    
    #pragma once
    
    #endif

    
    /** 16x16 multiply-add where the result fits in 32 bits */
#undef MAC16_16
static OPUS_INLINE opus_val32 MAC16_16_armv5e(opus_val32 c, opus_val16 a,
 opus_val16 b)
{
  int res;
  __asm__(
      '#MAC16_16\n\t'
      'smlabb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b), 'r'(c)
  );
  return res;
}
#define MAC16_16(c, a, b) (MAC16_16_armv5e(c, a, b))
    
    static OPUS_INLINE int DIV32_16_(opus_int64 a, opus_int64 b, char *file, int line)
{
   opus_int64 res;
   if (b==0)
   {
      fprintf(stderr, 'DIV32_16: divide by zero: %d/%d in %s: line %d\n', (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
      return 0;
   }
   if (!VERIFY_INT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'DIV32_16: inputs are not int/short: %d %d in %s: line %d\n', (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a/b;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'DIV32_16: output is not short: %d / %d = %d in %s: line %d\n', (int)a,(int)b,(int)res, file, line);
      if (res>32767)
         res = 32767;
      if (res<-32768)
         res = -32768;
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=35;
   return res;
}
    
    #include 'gtest/gtest.h'
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_general_info_60b.h'
    
    namespace apollo {
namespace localization {
namespace msf {
    }
    }
    }
    
      x <<= 0;
  x >>= 0;
    
    
    {
    {
    {}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    #include 'glog/logging.h'
    
    // config detail: {'name': 'latitude_seconds', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 23,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'sec'}
int Latlonheadingrpt82::latitude_seconds(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
    
        int i;
    for (i = 0; i < SIZE - 1; i++)
    {
        int pri = swoole_system_random(10000, 99999);
        ns = (node_t*) malloc(sizeof(node_t));
        ns->val = i;
        ns->pri = pri;
        swHeap_push(pq, pri, ns);
        _map[i] = pri;
    }
    
        int ret1 = (int) (long) swHashMap_find(hm, (char *) SW_STRL('hello'));
    ASSERT_GT(ret1, 0);
    
    TEST(coroutine_base, yield_resume)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        long cid = Coroutine::get_current_cid();
        Coroutine *co = Coroutine::get_by_cid(cid);
        co->yield();
        *(long *) arg = Coroutine::get_current_cid();
    }, &_cid);
    }
    
    TEST(coroutine_channel, push_yield)
{
    Channel chan(1);
    }
    
            usleep(100000);
        int status = -1;
        pid_t pid2 = -1;
    
    void swReactor_defer_task_create(swReactor *reactor)
{
    reactor->defer = add_defer_task;
    reactor->defer_tasks = nullptr;
    reactor->do_defer_tasks = do_defer_tasks;
}
    
        //udp ipv4
    if (req->info.type == SW_EVENT_UDP)
    {
        inet_ntop(AF_INET6, &packet->info.addr.inet_v4.sin_addr, address, sizeof(address));
        data = packet->data;
        length = packet->length;
        port = ntohs(packet->info.addr.inet_v4.sin_port);
    }
    //udp ipv6
    else if (req->info.type == SW_EVENT_UDP6)
    {
        inet_ntop(AF_INET6, &packet->info.addr.inet_v6.sin6_addr, address, sizeof(address));
        data = packet->data;
        length = packet->length;
        port = ntohs(packet->info.addr.inet_v6.sin6_port);
    }
    //unix dgram
    else if (req->info.type == SW_EVENT_UNIX_DGRAM)
    {
        strcpy(address, packet->info.addr.un.sun_path);
        data = packet->data;
        length = packet->length;
    }
    
    static A G_a =
{ 0, 0 };
    
    const char* swoole_strerror(int code)
{
    if (code < SW_ERROR_START)
    {
        return strerror(code);
    }
    /* swstrerror {{{*/
    switch(code)
    {
    case SW_ERROR_MALLOC_FAIL:
        return 'Malloc fail';
    case SW_ERROR_SYSTEM_CALL_FAIL:
        return 'System call fail';
    case SW_ERROR_PHP_FATAL_ERROR:
        return 'PHP fatal error';
    case SW_ERROR_NAME_TOO_LONG:
        return 'Name too long';
    case SW_ERROR_INVALID_PARAMS:
        return 'Invalid params';
    case SW_ERROR_QUEUE_FULL:
        return 'Queue full';
    case SW_ERROR_OPERATION_NOT_SUPPORT:
        return 'Operation not support';
    case SW_ERROR_FILE_NOT_EXIST:
        return 'File not exist';
    case SW_ERROR_FILE_TOO_LARGE:
        return 'File too large';
    case SW_ERROR_FILE_EMPTY:
        return 'File empty';
    case SW_ERROR_DNSLOOKUP_DUPLICATE_REQUEST:
        return 'DNS Lookup duplicate request';
    case SW_ERROR_DNSLOOKUP_RESOLVE_FAILED:
        return 'DNS Lookup resolve failed';
    case SW_ERROR_DNSLOOKUP_RESOLVE_TIMEOUT:
        return 'DNS Lookup resolve timeout';
    case SW_ERROR_BAD_IPV6_ADDRESS:
        return 'Bad ipv6 address';
    case SW_ERROR_UNREGISTERED_SIGNAL:
        return 'Unregistered signal';
    case SW_ERROR_SESSION_CLOSED_BY_SERVER:
        return 'Session closed by server';
    case SW_ERROR_SESSION_CLOSED_BY_CLIENT:
        return 'Session closed by client';
    case SW_ERROR_SESSION_CLOSING:
        return 'Session closing';
    case SW_ERROR_SESSION_CLOSED:
        return 'Session closed';
    case SW_ERROR_SESSION_NOT_EXIST:
        return 'Session not exist';
    case SW_ERROR_SESSION_INVALID_ID:
        return 'Session invalid id';
    case SW_ERROR_SESSION_DISCARD_TIMEOUT_DATA:
        return 'Session discard timeout data';
    case SW_ERROR_OUTPUT_BUFFER_OVERFLOW:
        return 'Output buffer overflow';
    case SW_ERROR_SSL_NOT_READY:
        return 'SSL not ready';
    case SW_ERROR_SSL_CANNOT_USE_SENFILE:
        return 'SSL cannot use senfile';
    case SW_ERROR_SSL_EMPTY_PEER_CERTIFICATE:
        return 'SSL empty peer certificate';
    case SW_ERROR_SSL_VEFIRY_FAILED:
        return 'SSL vefiry failed';
    case SW_ERROR_SSL_BAD_CLIENT:
        return 'SSL bad client';
    case SW_ERROR_SSL_BAD_PROTOCOL:
        return 'SSL bad protocol';
    case SW_ERROR_PACKAGE_LENGTH_TOO_LARGE:
        return 'Package length too large';
    case SW_ERROR_DATA_LENGTH_TOO_LARGE:
        return 'Data length too large';
    case SW_ERROR_TASK_PACKAGE_TOO_BIG:
        return 'Task package too big';
    case SW_ERROR_TASK_DISPATCH_FAIL:
        return 'Task dispatch fail';
    case SW_ERROR_HTTP2_STREAM_ID_TOO_BIG:
        return 'Http2 stream id too big';
    case SW_ERROR_HTTP2_STREAM_NO_HEADER:
        return 'Http2 stream no header';
    case SW_ERROR_HTTP2_STREAM_NOT_FOUND:
        return 'Http2 stream not found';
    case SW_ERROR_AIO_BAD_REQUEST:
        return 'Aio bad request';
    case SW_ERROR_AIO_CANCELED:
        return 'Aio canceled';
    case SW_ERROR_CLIENT_NO_CONNECTION:
        return 'Client no connection';
    case SW_ERROR_SOCKET_CLOSED:
        return 'Socket closed';
    case SW_ERROR_SOCKS5_UNSUPPORT_VERSION:
        return 'Socks5 unsupport version';
    case SW_ERROR_SOCKS5_UNSUPPORT_METHOD:
        return 'Socks5 unsupport method';
    case SW_ERROR_SOCKS5_AUTH_FAILED:
        return 'Socks5 auth failed';
    case SW_ERROR_SOCKS5_SERVER_ERROR:
        return 'Socks5 server error';
    case SW_ERROR_HTTP_PROXY_HANDSHAKE_ERROR:
        return 'Http proxy handshake error';
    case SW_ERROR_HTTP_INVALID_PROTOCOL:
        return 'Http invalid protocol';
    case SW_ERROR_WEBSOCKET_BAD_CLIENT:
        return 'Websocket bad client';
    case SW_ERROR_WEBSOCKET_BAD_OPCODE:
        return 'Websocket bad opcode';
    case SW_ERROR_WEBSOCKET_UNCONNECTED:
        return 'Websocket unconnected';
    case SW_ERROR_WEBSOCKET_HANDSHAKE_FAILED:
        return 'Websocket handshake failed';
    case SW_ERROR_SERVER_MUST_CREATED_BEFORE_CLIENT:
        return 'Server must created before client';
    case SW_ERROR_SERVER_TOO_MANY_SOCKET:
        return 'Server too many socket';
    case SW_ERROR_SERVER_WORKER_TERMINATED:
        return 'Server worker terminated';
    case SW_ERROR_SERVER_INVALID_LISTEN_PORT:
        return 'Server invalid listen port';
    case SW_ERROR_SERVER_TOO_MANY_LISTEN_PORT:
        return 'Server too many listen port';
    case SW_ERROR_SERVER_PIPE_BUFFER_FULL:
        return 'Server pipe buffer full';
    case SW_ERROR_SERVER_NO_IDLE_WORKER:
        return 'Server no idle worker';
    case SW_ERROR_SERVER_ONLY_START_ONE:
        return 'Server only start one';
    case SW_ERROR_SERVER_SEND_IN_MASTER:
        return 'Server send in master';
    case SW_ERROR_SERVER_INVALID_REQUEST:
        return 'Server invalid request';
    case SW_ERROR_SERVER_CONNECT_FAIL:
        return 'Server connect fail';
    case SW_ERROR_SERVER_WORKER_EXIT_TIMEOUT:
        return 'Server worker exit timeout';
    case SW_ERROR_CO_OUT_OF_COROUTINE:
        return 'Coroutine out of coroutine';
    case SW_ERROR_CO_HAS_BEEN_BOUND:
        return 'Coroutine has been bound';
    case SW_ERROR_CO_MUTEX_DOUBLE_UNLOCK:
        return 'Coroutine mutex double unlock';
    case SW_ERROR_CO_BLOCK_OBJECT_LOCKED:
        return 'Coroutine block object locked';
    case SW_ERROR_CO_BLOCK_OBJECT_WAITING:
        return 'Coroutine block object waiting';
    case SW_ERROR_CO_YIELD_FAILED:
        return 'Coroutine yield failed';
    case SW_ERROR_CO_GETCONTEXT_FAILED:
        return 'Coroutine getcontext failed';
    case SW_ERROR_CO_SWAPCONTEXT_FAILED:
        return 'Coroutine swapcontext failed';
    case SW_ERROR_CO_MAKECONTEXT_FAILED:
        return 'Coroutine makecontext failed';
    case SW_ERROR_CO_IOCPINIT_FAILED:
        return 'Coroutine iocpinit failed';
    case SW_ERROR_CO_PROTECT_STACK_FAILED:
        return 'Coroutine protect stack failed';
    case SW_ERROR_CO_STD_THREAD_LINK_ERROR:
        return 'Coroutine std thread link error';
    case SW_ERROR_CO_DISABLED_MULTI_THREAD:
        return 'Coroutine disabled multi thread';
    default:
        static char buffer[32];
#ifndef __MACH__
        snprintf(buffer, sizeof(buffer), 'Unknown error %d', code);
#else
        snprintf(buffer, sizeof(buffer), 'Unknown error: %d', code);
#endif
        return buffer;
    }
/*}}}*/
}