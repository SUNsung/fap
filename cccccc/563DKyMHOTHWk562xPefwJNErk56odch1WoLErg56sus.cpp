
        
        namespace tensorflow {
namespace functor {
    }
    }
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
    class TextLineReaderOp : public ReaderOpKernel {
 public:
  explicit TextLineReaderOp(OpKernelConstruction* context)
      : ReaderOpKernel(context) {
    int skip_header_lines = -1;
    OP_REQUIRES_OK(context,
                   context->GetAttr('skip_header_lines', &skip_header_lines));
    OP_REQUIRES(context, skip_header_lines >= 0,
                errors::InvalidArgument('skip_header_lines must be >= 0 not ',
                                        skip_header_lines));
    Env* env = context->env();
    SetReaderFactory([this, skip_header_lines, env]() {
      return new TextLineReader(name(), skip_header_lines, env);
    });
  }
};
    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
    namespace tensorflow {
namespace ffmpeg {
namespace {
    }
    }
    }
    
        auto e_5_1 = cc->FindWorkerChannel('/job:mnist/replica:0/task:4');
    auto e_5_2 = cc->FindWorkerChannel('/job:mnist/replica:0/task:4');
    
    #endif  // TENSORFLOW_USE_MPI

    
    class TensorSlice {
 public:
  // Construct a tensor slice: you have a number of ways:
  // -- creating an empty slice
  // -- from just a dimension (in this case it will create a full slice)
  // -- from an array of pairs of integers.
  // -- from a TensorSliceProto protocol buffer
  // -- from a string format of 'start,length:start,length...' where each
  //    'start,length' pair represents the slice on one dimension. We allow a
  //    special '-' that means 'everything for this dimension'. One such example
  //    is:  0,10:-:14,1:-:-
  TensorSlice() {}
  explicit TensorSlice(int dim);
  explicit TensorSlice(const TensorSliceProto& proto);
  explicit TensorSlice(std::initializer_list<std::pair<int64, int64>> extents);
    }
    
    namespace HPHP {
    }
    
      std::string rows;
  for (auto const& pair : names_copy) {
    auto const& counter = s_counters[pair.name];
    if (counter.total == 0 && counter.count == 0) continue;
    }
    
    namespace HPHP { namespace jit {
    }
    }
    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
      friend bool operator==(const ClusterArc& lhs, const ClusterArc& rhs) {
    return lhs.c1 == rhs.c1 && lhs.c2 == rhs.c2;
  }
    
      /**
   * The main process is not the (direct) parent of the worker process,
   * and therefore it has to delegate to the shadow process to do waitpid.
   * There can be a timeout (in seconds), after which SIGKILL is sent to
   * the child process.
   */
  static pid_t waitpid(pid_t pid, int *stat_loc, int options, int timeout = 0);
    
    CURLcode CurlShareResource::attachToCurlHandle(CURL *cp) {
  return curl_easy_setopt(cp, CURLOPT_SHARE, m_share);
}
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    /**
 * @brief Sink a set of buffered status logs.
 *
 * When the osquery daemon uses a watcher/worker set, the watcher's status logs
 * are accumulated in a buffered log sink. Well-performing workers should have
 * the set of watcher status logs relayed and sent to the configured logger
 * plugin.
 *
 * Status logs from extensions will be forwarded to the extension manager (core)
 * normally, but the watcher does not receive or send registry requests.
 * Extensions, the registry, configuration, and optional config/logger plugins
 * are all protected as a monitored worker.
 */
void relayStatusLogs(bool async = false);
    
    #include <osquery/config.h>
#include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/extensions.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/status.h>
#include <osquery/tables.h>
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
      auto nobody = getpwnam('nobody');
  EXPECT_NE(nobody, nullptr);
  {
    auto dropper = DropPrivileges::get();
    EXPECT_TRUE(dropper->dropTo(nobody->pw_uid, nobody->pw_gid));
    EXPECT_EQ(geteuid(), nobody->pw_uid);
    }
    
    
    {  bool testIsCached(size_t interval) {
    QueryContext ctx;
    ctx.useCache(true);
    return isCached(interval, ctx);
  }
};
    
      struct tm result;
  localtime_r((time_t*)&epoch, &result);
    
    #include 'osquery/core/utils.h'
    
    WmiResultItem::WmiResultItem(WmiResultItem&& src) {
  result_ = nullptr;
  std::swap(result_, src.result_);
}