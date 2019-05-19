
        
        template<typename Dtype>
void DelCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    delete v->at(i);
}
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    template<typename xpu>
void Dequantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                                const float threshold) {
  mxnet::op::mxnet_op::Kernel<dequantize_2bit, xpu>
  ::Launch(s,
          inputs[1].Size(),         // original size
          inputs[1].dptr<float>(),  // out array
          inputs[0].dptr<float>(),  // compressed array
          -1 *threshold,            // negative threshold
          threshold);               // positive threshold
}
    
      /*!
   * \brief sets parameters for gradient compression
   * \param kwargs a vector of pair of strings. A pair represents key and value
   * of the parameter. Will be parsed by GradientCompressionParam
   */
  void SetParams(const std::vector<std::pair<std::string, std::string> >& kwargs);
    
    
    {  if (has('dist')) {
#if MXNET_USE_DIST_KVSTORE
    kv = new kvstore::KVStoreDist(use_device_comm);
    if (!has('_async') && kv->IsWorkerNode() && kv->get_rank() == 0) {
      // configure the server to be the sync mode
      kv->SendCommandToServers(static_cast<int>(kvstore::CommandType::kSyncMode), '');
    }
#else
    LOG(FATAL) << 'compile with USE_DIST_KVSTORE=1 to use ' << tname;
    return nullptr;
#endif  // MXNET_USE_DIST_KVSTORE
  } else {
    if (has('nccl')) {
#if MXNET_USE_NCCL
      kv = new kvstore::KVStoreNCCL();
#else
      LOG(FATAL) << 'compile with USE_NCCL=1 to use ' << tname;
      return nullptr;
#endif
    } else {
      kv =  new kvstore::KVStoreLocal(use_device_comm);
    }
  }
  kv->type_ = tname;
  return kv;
}
    
    
    {  FreeSpace(&out_t);
  for (auto &ts_t : ts_t_arr)
    FreeSpace(&ts_t);
}
    
    #ifndef MXNET_OPERATOR_CUDNN_LRN_INL_H_
#define MXNET_OPERATOR_CUDNN_LRN_INL_H_
#include <vector>
#include './lrn-inl.h'
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file identity_attach_KL_sparse_reg.cc
 * \brief\
*/
#include './identity_attach_KL_sparse_reg-inl.h'
#include <nnvm/op_attr_types.h>
    
    struct SrcPos {
  bool operator==(SrcPos o) const {
    return line == o.line && col == o.col;
  }
  bool operator!=(SrcPos o) const { return !(*this == o); }
    }
    
        dword(xfx_formater.instruction);
  }
  void EmitXFXForm(const uint8_t op,
                   const RegNumber rs,
                   const uint16_t mask,
                   const uint16_t xo,
                   const uint8_t rsv = 0) {
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
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
    
        inline bool is_closed()
    {
        return closed;
    }
    
        cache.set('test', val);
    ASSERT_EQ(cache.get('test').get(), val.get());
    
    using namespace std;
    
            if (pid == 0)
        {
            exit(0);
        }
    
    struct defer_task
{
    swCallback callback;
    void *data;
};
    
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