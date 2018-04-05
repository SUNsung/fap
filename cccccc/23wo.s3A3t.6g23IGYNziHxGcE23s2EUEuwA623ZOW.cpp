
        
        
    {}  // namespace api
    
    namespace api {
    }
    
    namespace content {
class WebContents;
}
    
    #include 'net/url_request/url_request_http_job.h'
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
      // URLRequestSimpleJob:
  int GetRefCountedData(std::string* mime_type,
                        std::string* charset,
                        scoped_refptr<base::RefCountedMemory>* data,
                        const net::CompletionCallback& callback) const override;
    
    // The entry point from ChromeMain into the relauncher process.
int RelauncherMain(const content::MainFunctionParams& main_parameters);
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
    #endif

    
    // skip isnan and isinf check for integral types
template<typename To, typename From>
typename std::enable_if<std::is_integral<From>::value, bool>::type overflows(From f) {
  using limit = std::numeric_limits<To>;
  return f < limit::lowest() || f > limit::max();
}
    
    #include <assert.h>
#include <stdint.h>
#include <stdexcept>
#include <string>
#include <utility>
    
    #include <xgboost/logging.h>
#include 'src/common/random.h'
#include './xgboost_R.h'
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    namespace xgboost {
namespace metric {
// tag the this file, used by force static link later.
DMLC_REGISTRY_FILE_TAG(elementwise_metric);
    }
    }
    
      T operator+=(T v) noexcept {
    DeterministicSchedule::beforeSharedAccess();
    T rv = (data += v);
    FOLLY_TEST_DSCHED_VLOG(this << ' += ' << std::hex << v << ' -> ' << std::hex
                                << rv);
    DeterministicSchedule::afterSharedAccess(true);
    return rv;
  }
    
    using namespace folly::detail;
using namespace folly::test;
using namespace std;
using namespace std::chrono;
using folly::chrono::coarse_steady_clock;
    
    
    {  atomic_shared_ptr<foo> asp;
  asp.store(alias);
  a.reset();
  alias.reset();
  auto res1 = asp.load();
  auto res2 = asp.exchange(nullptr);
  EXPECT_EQ(b, res1.get());
  EXPECT_EQ(b, res2.get());
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(0, d_count);
  res1.reset();
  res2.reset();
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(1, d_count);
  delete b;
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(2, d_count);
}
    
    #include <algorithm>
#include <string>
    
    
    {  // Check that global flags can still be given after the command
  EXPECT_EQ(
      'running foo\n'
      'foo global-foo 43\n'
      'foo local-foo 44\n'
      'foo arg a\n'
      'foo arg b\n',
      callHelper({'foo', '--global-foo', '43', '--local-foo', '44',
                 'a', 'b'}));
}
    
     private:
friend class AtomicHashMap<KeyT,
                           ValueT,
                           HashFcn,
                           EqualFcn,
                           Allocator,
                           ProbeFcn>;
    
        if (isEnd() || other.isEnd()) {
      return isEnd() == other.isEnd();
    }