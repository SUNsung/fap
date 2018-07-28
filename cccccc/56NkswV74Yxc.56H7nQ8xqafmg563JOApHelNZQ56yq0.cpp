
        
        // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    #define FPL FILE_PATH_LITERAL
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    
    {public:
    inline hardcoded_array() throw()
    {
    }
    inline hardcoded_array(size_t n) throw()
    {
        check_size(n);
    } // we can instantiate with a size parameter--just checks the size
    inline hardcoded_array(size_t n, const _T& val) throw()
    {
        check_size(n);
        for (size_t i = 0; i < n; i++)
            data[i] = val;
    }
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return _N;
    }
};

    
    void Executor::UpdateAuxArray(const Rcpp::List& array,
                              bool match_name,
                              bool skip_null) {
  UpdateArray('aux.arrays', array, aux_arrays_, match_name, skip_null);
}
    
    template<int NT, int X, int NumBanks = 32> struct sConflictFreeStorage {
	enum { count = NT * X };
	enum { divisor = sBankConflictDivisor<X, NumBanks>::value };
	enum { padding = sDivSafe<count, divisor>::value };
	enum { value = count + padding };
};
    
    namespace Rcpp {
  template<>
  inline bool is<mxnet::R::NDArray>(SEXP x) {
    if (TYPEOF(x) != EXTPTRSXP) return false;
    Rcpp::XPtr<mxnet::R::NDBlob> ptr(x);
    SEXP attr = ptr.attr('class');
    return attr != R_NilValue &&
        Rcpp::as<std::string>(attr) == 'MXNDArray';
    return true;
  }
}  // namespace Rcpp
#endif  // MXNET_RCPP_NDARRAY_H_

    
    int MXSymbolInferShapePartial(SymbolHandle sym,
                              mx_uint num_args,
                              const char** keys,
                              const mx_uint *arg_ind_ptr,
                              const mx_uint *arg_shape_data,
                              mx_uint *in_shape_size,
                              const mx_uint **in_shape_ndim,
                              const mx_uint ***in_shape_data,
                              mx_uint *out_shape_size,
                              const mx_uint **out_shape_ndim,
                              const mx_uint ***out_shape_data,
                              mx_uint *aux_shape_size,
                              const mx_uint **aux_shape_ndim,
                              const mx_uint ***aux_shape_data,
                              int *complete) {
  int succ;
  *complete = 1;
  return MXSymbolInferShape(sym, num_args, keys,
                            arg_ind_ptr, arg_shape_data,
                            in_shape_size, in_shape_ndim, in_shape_data,
                            out_shape_size, out_shape_ndim, out_shape_data,
                            aux_shape_size, aux_shape_ndim, aux_shape_data,
                            &succ);
}
    
    void MKLDNNConcatForward(const nnvm::NodeAttrs& attrs, const OpContext &ctx,
                         const std::vector<NDArray> &in_data,
                         const std::vector<OpReqType> &req,
                         const std::vector<NDArray> &out_data) {
  TmpMemMgr::Get()->Init(ctx.requested[concat_enum::kTempSpace]);
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_in_data = param.num_args;
  int concat_dim = param.dim;
  std::vector<mkldnn::memory::primitive_desc> data_md;
  std::vector<const mkldnn::memory *> data_mem;
  data_md.reserve(num_in_data);
  data_mem.reserve(num_in_data);
  for (int i = 0; i < num_in_data; i++) {
    const mkldnn::memory *tmp_mem = in_data[i].GetMKLDNNData();
    mkldnn::memory::primitive_desc tmp_pd = tmp_mem->get_primitive_desc();
    data_md.push_back(tmp_pd);
    data_mem.push_back(tmp_mem);
  }
  MKLDNNConcatFwd &fwd = GetConcatForward(concat_dim, in_data, data_md);
  mxnet::mkldnn_output_t out_mem = CreateMKLDNNMem(out_data[concat_enum::kOut],
                                                   fwd.fwd_pd.dst_primitive_desc(),
                                                   req[concat_enum::kOut]);
  fwd.SetNewMem(data_mem, *out_mem.second);
  MKLDNNStream::Get()->RegisterPrim(fwd.GetFwd());
  CommitOutput(out_data[concat_enum::kOut], out_mem);
  MKLDNNStream::Get()->Submit();
}
    
    /**
 * Get current exceptions being handled.  front() is the most recent exception.
 * There should be at most one unless rethrowing.
 */
std::vector<ExceptionInfo> getCurrentExceptions();
    
    class SingletonVault {
 public:
  enum class Type {
    Strict, // Singletons can't be created before registrationComplete()
    Relaxed, // Singletons can be created before registrationComplete()
  };
    }
    
      bool pop(T& val) {
    hazptr_local<1, Atom> h;
    hazptr_holder<Atom>& hptr = h[0];
    Node* node;
    while (true) {
      node = hptr.get_protected(head_);
      if (node == nullptr) {
        return false;
      }
      auto next = node->next();
      if (cas_head(node, next)) {
        break;
      }
    }
    hptr.reset();
    val = node->value();
    node->retire();
    return true;
  }
    
      bool remove(const T& v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (!curr || curr->elem_ != v) {
      return false;
    }
    Node* curr_next = curr->next_.load();
    // Patch up the actual list...
    prev->store(curr_next, std::memory_order_release);
    // ...and only then null out the removed node.
    curr->next_.store(nullptr, std::memory_order_release);
    curr->retire();
    return true;
  }
    
    // See portability/Unistd.h for why these need to be in a namespace
// rather then extern 'C'.
namespace folly {
namespace portability {
namespace fcntl {
int creat(char const* fn, int pm);
int fcntl(int fd, int cmd, ...);
int posix_fallocate(int fd, off_t offset, off_t len);
int open(char const* fn, int of, int pm = 0);
}
}
}
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (true) {
      if (nonBlockingTake(item)) {
        return std::move(item);
      }
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
  }
    
        uint64_t origAllocated = *counter;
    
    FOLLY_ALWAYS_INLINE int __builtin_ctzll(unsigned long long x) {
  unsigned long index;
  return int(_BitScanForward64(&index, x) ? index : 64);
}
    
      void push(hazptr_obj* obj) {
    while (true) {
      if (tail()) {
        if (pushInNonEmptyList(obj)) {
          break;
        }
      } else {
        if (pushInEmptyList(obj)) {
          break;
        }
      }
    }
    if (++rcount_ >= HAZPTR_PRIV_THRESHOLD) {
      push_all_to_domain();
    }
  }
    
      // Actions to run in child.
  // Note that this runs after vfork(), so tread lightly.
  // Returns 0 on success, or an errno value on failure.
  int prepareChild(const Options& options,
                   const sigset_t* sigmask,
                   const char* childDir) const;
  int runChild(const char* executable, char** argv, char** env,
               const Options& options) const;
    
    /* Platform specific TLS support
 * gcc implements __thread
 * msvc implements __declspec(thread)
 * the semantics are the same
 * (but remember __thread has different semantics when using emutls (ex. apple))
 */
#if defined(_MSC_VER)
# define FOLLY_TLS __declspec(thread)
#elif defined(__GNUC__) || defined(__clang__)
# define FOLLY_TLS __thread
#else
# error cannot define platform specific thread local storage
#endif
    
    ///////////////////////////////////
#if FOLLY_F14_VECTOR_INTRINSICS_AVAILABLE
///////////////////////////////////
    
    class AbstractCommand : public Command {
private:
  std::shared_ptr<Request> req_;
  std::shared_ptr<FileEntry> fileEntry_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<SocketRecvBuffer> socketRecvBuffer_;
  std::shared_ptr<SocketCore> readCheckTarget_;
  std::shared_ptr<SocketCore> writeCheckTarget_;
    }
    
    
    {} // namespace aria2

    
    void AbstractOptionHandler::updateFlags(int flag, bool val)
{
  if (val) {
    flags_ |= flag;
  }
  else {
    flags_ &= ~flag;
  }
}
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2