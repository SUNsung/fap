
        
        CholeskyThunk::CholeskyThunk(const CholeskyOptions& options,
                             BufferAllocation::Slice a_buffer,
                             BufferAllocation::Slice workspace_buffer,
                             BufferAllocation::Slice info_buffer,
                             PrimitiveType type, int64 batch_size, int64 n,
                             const HloInstruction* hlo)
    : Thunk(Kind::kCholesky, hlo),
      uplo_(options.lower() ? se::blas::UpperLower::kLower
                            : se::blas::UpperLower::kUpper),
      a_buffer_(a_buffer),
      workspace_buffer_(workspace_buffer),
      info_buffer_(info_buffer),
      type_(type),
      batch_size_(batch_size),
      a_batch_stride_(n * n *
                      ShapeUtil::ByteSizeOfPrimitiveType(
                          hlo->operand(0)->shape().element_type())),
      n_(n) {}
    
    #include 'tensorflow/compiler/xla/service/gpu/copy_thunk.h'
    
      {
    // The infeed buffer has an extra outer tuple with a token. Adjust the index
    // accordingly.
    ShapeIndex index = {0};
    std::function<void(std::vector<void*>*)> copy_tuple_contents =
        [&](std::vector<void*>* tuple_element_addresses) {
          const Shape& shape = ShapeUtil::GetSubshape(infeed_buffers.shape(),
                                                      ShapeIndexView(index, 1));
          // For the leaf buffers of the tuple copy the elements directly.
          if (shape.IsArray()) {
            const BufferAllocation::Slice& tuple_element_buffer =
                infeed_slices_.element(index);
            se::DeviceMemoryBase tuple_element_address =
                buffer_allocations.GetDeviceAddress(tuple_element_buffer);
    }
    }
    }
    
    #include <string>
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
      /// Get the function name mangled for use with PGO.
  StringRef getPGOFuncName() const { return PGOFuncName; }
    
    
    {
    {
    {
    {          // Get the file-name to group map if parsing correctly.
          pMap = Parser.getParsedMap();
        }
      }
      if (!pMap)
        return NullGroupName;
      StringRef FileName = llvm::sys::path::filename(FullPath);
      auto Found = pMap->find(FileName);
      if (Found == pMap->end()) {
        Ctx.Diags.diagnose(SourceLoc(), diag::error_no_group_info, FileName);
        return NullGroupName;
      }
      return Found->second;
    }
  };
    
    static _Unwind_Reason_Code SwiftUnwindFrame(struct _Unwind_Context *context, void *arg) {
  struct UnwindState *state = static_cast<struct UnwindState *>(arg);
  if (state->current == state->end) {
    return _URC_END_OF_STACK;
  }
    }
    
    #if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
// Avoid defining macro max(), min() which conflict with std::max(), std::min()
#define NOMINMAX
#include <windows.h>
#else
#if !defined(__HAIKU__)
#include <sys/errno.h>
#else
#include <errno.h>
#endif
#include <sys/resource.h>
#include <unistd.h>
#endif
#include <climits>
#include <clocale>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#if defined(__CYGWIN__) || defined(_WIN32) || defined(__HAIKU__)
#include <sstream>
#include <cmath>
#elif defined(__ANDROID__)
#include <locale.h>
    
    /// A value for `SymbolNamespace` which indicates that this type came
/// from a C `typedef` that was imported as a distinct type instead
/// of a `typealias`.  This can happen for reasons like:
///
/// - the `typedef` was declared with the `swift_wrapper` attribute
/// - the `typedef` is a CF type
constexpr static const char CTypedef[] = 't';
    
    	HKEY command;
	FAIL_ON_ERROR(RegCreateKeyEx(cmderKey, L'command', 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &command, NULL));
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
      GpuIdType const n_devices_visible = AllVisible().Size();
  CHECK_LE(n_gpus, n_devices_visible);
  if (n_devices_visible == 0 || n_gpus == 0 || n_rows == 0) {
    LOG(DEBUG) << 'Runing on CPU.';
    return Empty();
  }
    
    
/*!
 * \brief Callback to set the data to handle,
 * \param handle The handle to the callback.
 * \param batch The data content to be set.
 */
XGB_EXTERN_C typedef int XGBCallbackSetData(  // NOLINT(*)
    DataHolderHandle handle, XGBoostBatchCSR batch);
    
    struct SquaredLogError {
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float label) {
    return label > -1;
  }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);  // ensure correct value for log1p
    return (std::log1p(predt) - std::log1p(label)) / (predt + 1);
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);
    float res = (-std::log1p(predt) + std::log1p(label) + 1) /
                std::pow(predt + 1, 2);
    res = fmaxf(res, 1e-6f);
    return res;
  }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() {
    return 'label must be greater than -1 for rmsle so that log(label + 1) can be valid.';
  }
  static const char* DefaultEvalMetric() { return 'rmsle'; }
};
    
    /*!
 * \brief define regression tree to be the most common tree model.
 *  This is the data structure used in xgboost's major tree models.
 */
class RegTree {
 public:
  /*! \brief auxiliary statistics of node to help tree building */
  using SplitCondT = bst_float;
  /*! \brief tree node */
  class Node {
   public:
    Node()  {
      // assert compact alignment
      static_assert(sizeof(Node) == 4 * sizeof(int) + sizeof(Info),
                    'Node: 64 bit align');
    }
    /*! \brief index of left child */
    XGBOOST_DEVICE int LeftChild() const {
      return this->cleft_;
    }
    /*! \brief index of right child */
    XGBOOST_DEVICE int RightChild() const {
      return this->cright_;
    }
    /*! \brief index of default child when feature is missing */
    XGBOOST_DEVICE int DefaultChild() const {
      return this->DefaultLeft() ? this->LeftChild() : this->RightChild();
    }
    /*! \brief feature index of split condition */
    XGBOOST_DEVICE unsigned SplitIndex() const {
      return sindex_ & ((1U << 31) - 1U);
    }
    /*! \brief when feature is unknown, whether goes to left child */
    XGBOOST_DEVICE bool DefaultLeft() const {
      return (sindex_ >> 31) != 0;
    }
    /*! \brief whether current node is leaf node */
    XGBOOST_DEVICE bool IsLeaf() const {
      return cleft_ == -1;
    }
    /*! \return get leaf value of leaf node */
    XGBOOST_DEVICE bst_float LeafValue() const {
      return (this->info_).leaf_value;
    }
    /*! \return get split condition of the node */
    XGBOOST_DEVICE SplitCondT SplitCond() const {
      return (this->info_).split_cond;
    }
    /*! \brief get parent of the node */
    XGBOOST_DEVICE int Parent() const {
      return parent_ & ((1U << 31) - 1);
    }
    /*! \brief whether current node is left child */
    XGBOOST_DEVICE bool IsLeftChild() const {
      return (parent_ & (1U << 31)) != 0;
    }
    /*! \brief whether this node is deleted */
    XGBOOST_DEVICE bool IsDeleted() const {
      return sindex_ == std::numeric_limits<unsigned>::max();
    }
    /*! \brief whether current node is root */
    XGBOOST_DEVICE bool IsRoot() const { return parent_ == -1; }
    /*!
     * \brief set the left child
     * \param nid node id to right child
     */
    XGBOOST_DEVICE void SetLeftChild(int nid) {
      this->cleft_ = nid;
    }
    /*!
     * \brief set the right child
     * \param nid node id to right child
     */
    XGBOOST_DEVICE void SetRightChild(int nid) {
      this->cright_ = nid;
    }
    /*!
     * \brief set split condition of current node
     * \param split_index feature index to split
     * \param split_cond  split condition
     * \param default_left the default direction when feature is unknown
     */
    XGBOOST_DEVICE void SetSplit(unsigned split_index, SplitCondT split_cond,
                          bool default_left = false) {
      if (default_left) split_index |= (1U << 31);
      this->sindex_ = split_index;
      (this->info_).split_cond = split_cond;
    }
    /*!
     * \brief set the leaf value of the node
     * \param value leaf value
     * \param right right index, could be used to store
     *        additional information
     */
    XGBOOST_DEVICE void SetLeaf(bst_float value, int right = -1) {
      (this->info_).leaf_value = value;
      this->cleft_ = -1;
      this->cright_ = right;
    }
    /*! \brief mark that this node is deleted */
    XGBOOST_DEVICE void MarkDelete() {
      this->sindex_ = std::numeric_limits<unsigned>::max();
    }
    /*! \brief Reuse this deleted node. */
    XGBOOST_DEVICE void Reuse() {
      this->sindex_ = 0;
    }
    // set parent
    XGBOOST_DEVICE void SetParent(int pidx, bool is_left_child = true) {
      if (is_left_child) pidx |= (1U << 31);
      this->parent_ = pidx;
    }
    bool operator==(const Node& b) const {
      return parent_ == b.parent_ && cleft_ == b.cleft_ &&
             cright_ == b.cright_ && sindex_ == b.sindex_ &&
             info_.leaf_value == b.info_.leaf_value;
    }
    }
    }
    
    
    {    return retval;
}
#endif
    
    bool Context::swap_out()
{
    return 0 == swapcontext(&ctx_, &swap_ctx_);
}
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
    
    {    coro_test_wait(&complete_num, args.size());
}
    
        DataBuffer(const char *str)
    {
        copy((void *) str, strlen(str));
    }
    
        fd1 = socket(AF_UNIX,SOCK_DGRAM,0);
    strncpy(un1.sun_path, sock1_path, sizeof(un1.sun_path) - 1); 
    bind(fd1,(struct sockaddr *)&un1,sizeof(un1));
    
        sigemptyset(&curset);
    sigprocmask(SIG_BLOCK, NULL, &curset);
    ret = sigismember(&curset,SIGUSR1);
    ASSERT_EQ(ret, 1);
    
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
    
            ~RedisQtAdapter() {
            if (m_ctx != 0) {
                m_ctx->ev.data = NULL;
            }
        }
    
    void ExampleQt::run() {
    }
    
        private:
        const char * m_value;
        redisAsyncContext * m_ctx;
        RedisQtAdapter m_adapter;