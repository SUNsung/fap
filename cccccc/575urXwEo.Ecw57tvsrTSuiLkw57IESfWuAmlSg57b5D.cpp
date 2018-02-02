
        
        namespace mate {
    }
    
    namespace asar {
    }
    
    #include 'base/memory/ref_counted.h'
#include 'net/url_request/url_request_job_factory.h'
    
    HttpProtocolHandler::~HttpProtocolHandler() {
}
    
    #include <string>
#include <vector>
    
      // Don't execute signal handlers of SIGUSR2.
  sigset_t mask;
  sigemptyset(&mask);
  sigaddset(&mask, SIGUSR2);
  if (sigprocmask(SIG_BLOCK, &mask, NULL) < 0) {
    PLOG(ERROR) << 'sigprocmask';
    return;
  }
    
    #include 'swift/AST/DebuggerClient.h'
#include 'swift/SIL/SILLocation.h'
#include 'swift/SIL/SILValue.h'
    
      // Overwrite the body of the existing TopLevelCodeDecl.
  TLCD->setBody(BraceStmt::create(Context,
                                  metavarBinding->getStartLoc(),
                                  ASTNode(metavarBinding),
                                  metavarBinding->getEndLoc(),
                                  /*implicit*/true));
    
    namespace swift {
  class CanType;
  class FuncDecl;
  struct SILDeclRef;
  class SILFunction;
  class SILType;
  class Substitution;
    }
    
              if (!isa<BeginBorrowInst>(I) && !isa<EndBorrowInst>(I))
            return false;
    
    #include 'swift/Basic/Unicode.h'
#include 'llvm/ADT/SmallVector.h'
#include 'llvm/Support/ConvertUTF.h'
    
    bool index::indexAndRecord(ModuleDecl *module,
                           ArrayRef<std::string> indexUnitTokens,
                           StringRef moduleUnitToken,
                           StringRef indexStorePath,
                           bool indexSystemModules,
                           bool isDebugCompilation,
                           StringRef targetTriple,
                           const DependencyTracker &dependencyTracker) {
  auto &astContext = module->getASTContext();
  auto &clangCI = astContext.getClangModuleLoader()->getClangInstance();
  auto &diags = astContext.Diags;
    }
    
    
    {  args.GetReturnValue().Set(remote::AllocateId(render_view->GetRoutingID()));
}
    
      // v8::Extension implementation.
  v8::Handle<v8::FunctionTemplate>
      GetNativeFunctionTemplate(
                        v8::Isolate* isolate,
                        v8::Handle<v8::String> name) override;
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    
    {} // namespace ui
    
        imread(getDataPath('gpu/stereobm/aloe-L.png'), IMREAD_GRAYSCALE).copyTo(left);
    imread(getDataPath('gpu/stereobm/aloe-R.png'), IMREAD_GRAYSCALE).copyTo(right);
    ASSERT_FALSE(left.empty());
    ASSERT_FALSE(right.empty());
    
    
    {    return true;
}

    
    
    {
    {        ASSERT_LT(cvtest::norm(va, vo, cv::NORM_L2), 1e-9);
    }
}

    
    #if 0
        std::cout << '------ estimate ------\n';
        std::cout << 'back projection error = ' << backProjErr << '\n';
        std::cout << 'points per view = {' << viewsObjectPoints.front().size();
        for (size_t i = 1; i < viewsObjectPoints.size(); ++i)
            std::cout << ', ' << viewsObjectPoints[i].size();
        std::cout << '}\n';
        show('fx', m_cameraMatrix(0,0), outCameraMatrix.at<double>(0,0));
        show('fy', m_cameraMatrix(1,1), outCameraMatrix.at<double>(1,1));
        show('cx', m_cameraMatrix(0,2), outCameraMatrix.at<double>(0,2));
        show('cy', m_cameraMatrix(1,2), outCameraMatrix.at<double>(1,2));
        showVec('distor', distortionCoeff, outDistCoeff);
#endif
        if (pixelNoiseHalfWidth > 0)
        {
            double tolRvec = pixelNoiseHalfWidth;
            double tolTvec = m_objectDistance * tolRvec;
            // back projection error
            for (size_t i = 0; i < viewsNoisyImagePoints.size(); ++i)
            {
                double dRvec = norm(
                    m_pointTargetRvec[i] -
                    cv::Vec3d(
                    outRvecs[i].at<double>(0),
                    outRvecs[i].at<double>(1),
                    outRvecs[i].at<double>(2)));
                // std::cout << dRvec << '  ' << tolRvec << '\n';
                EXPECT_LE(dRvec,
                    tolRvec);
                double dTvec = norm(
                    m_pointTargetTvec[i] -
                    cv::Vec3d(
                    outTvecs[i].at<double>(0),
                    outTvecs[i].at<double>(1),
                    outTvecs[i].at<double>(2)));
                // std::cout << dTvec << '  ' << tolTvec << '\n';
                EXPECT_LE(dTvec,
                    tolTvec);
    }
    }
    
    
    {
    {        if (norm(dr3_dt2, dr3dt2) > thres || norm(dt3_dt2, dt3dt2) > thres)
        {
            ts->printf( cvtest::TS::LOG, 'Invalid derivates by t2\n' );
            ts->set_failed_test_info(cvtest::TS::FAIL_BAD_ACCURACY);
        }
    }
};
    
    #include 'src/proto/grpc/testing/duplicate/echo_duplicate.grpc.pb.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
#include 'test/cpp/end2end/test_service_impl.h'
#include 'test/cpp/util/byte_buffer_proto_helper.h'
    
    
    {  LOG_TEST('test_read_corrupted_slice');
  slice = grpc_slice_from_copied_string('test');
  buffer = grpc_raw_byte_buffer_create(&slice, 1);
  buffer->data.raw.compression = GRPC_COMPRESS_MESSAGE_GZIP; /* lies! */
  grpc_slice_unref(slice);
  GPR_ASSERT(!grpc_byte_buffer_reader_init(&reader, buffer));
  grpc_byte_buffer_destroy(buffer);
}
    
      void push_back(T&& value) { emplace_back(std::move(value)); }
    
    #include 'src/core/lib/gprpp/inlined_vector.h'
#include <gtest/gtest.h>
#include 'src/core/lib/gprpp/memory.h'
#include 'test/core/util/test_config.h'
    
      void SendRpcAndCount(int* num_total, int* num_ok, int* num_failure,
                       int* num_drops) {
    const Status status = SendRpc();
    if (status.ok()) {
      ++*num_ok;
    } else {
      if (status.error_message() == 'Call dropped by load balancing policy') {
        ++*num_drops;
      } else {
        ++*num_failure;
      }
    }
    ++*num_total;
  }
    
      bool InitThreadFuncImpl(size_t thread_idx) override { return true; }
    
    static grpc_arg copy_arg(const grpc_arg* src) {
  grpc_arg dst;
  dst.type = src->type;
  dst.key = gpr_strdup(src->key);
  switch (dst.type) {
    case GRPC_ARG_STRING:
      dst.value.string = gpr_strdup(src->value.string);
      break;
    case GRPC_ARG_INTEGER:
      dst.value.integer = src->value.integer;
      break;
    case GRPC_ARG_POINTER:
      dst.value.pointer = src->value.pointer;
      dst.value.pointer.p =
          src->value.pointer.vtable->copy(src->value.pointer.p);
      break;
  }
  return dst;
}
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
    
    static void destroy_channel(void* arg, grpc_error* error) {
  grpc_channel* channel = (grpc_channel*)arg;
  grpc_channel_stack_destroy(CHANNEL_STACK_FROM_CHANNEL(channel));
  while (channel->registered_calls) {
    registered_call* rc = channel->registered_calls;
    channel->registered_calls = rc->next;
    GRPC_MDELEM_UNREF(rc->path);
    GRPC_MDELEM_UNREF(rc->authority);
    gpr_free(rc);
  }
  GRPC_MDELEM_UNREF(channel->default_authority);
  gpr_mu_destroy(&channel->registered_call_mu);
  gpr_free(channel->target);
  gpr_free(channel);
}
    
      /**
   * Create an AsyncIO context capable of holding at most 'capacity' pending
   * requests at the same time.  As requests complete, others can be scheduled,
   * as long as this limit is not exceeded.
   *
   * Note: the maximum number of allowed concurrent requests is controlled
   * by the fs.aio-max-nr sysctl, the default value is usually 64K.
   *
   * If pollMode is POLLABLE, pollFd() will return a file descriptor that
   * can be passed to poll / epoll / select and will become readable when
   * any IOs on this AsyncIO have completed.  If you do this, you must use
   * pollCompleted() instead of wait() -- do not read from the pollFd()
   * file descriptor directly.
   *
   * You may use the same AsyncIO object from multiple threads, as long as
   * there is only one concurrent caller of wait() / pollCompleted() / cancel()
   * (perhaps by always calling it from the same thread, or by providing
   * appropriate mutual exclusion).  In this case, pending() returns a snapshot
   * of the current number of pending requests.
   */
  explicit AsyncIO(size_t capacity, PollMode pollMode = NOT_POLLABLE);
  ~AsyncIO();
    
    #pragma once
    
    /**
 * Get list of supported huge page sizes and their mount points, if
 * hugetlbfs file systems are mounted for those sizes.
 */
const HugePageSizeVec& getHugePageSizes();
    
    
    {  testReads(
      {
          {kAlign, 0},
          {kAlign, kAlign},
          {kAlign, 2 * kAlign},
          {kAlign, 20 * kAlign},
          {kAlign, 1024 * 1024},
      },
      AsyncIO::NOT_POLLABLE);
}
    
    /**
 * A LogWriter implementation that asynchronously writes to a file descriptor.
 *
 * This class performs the log I/O in a separarate thread.
 *
 * The advantage of this class over ImmediateFileWriter is that logging I/O can
 * never slow down or block your normal program operation.  If log messages are
 * generated faster than they can be written, messages will be dropped (and an
 * indication of how many messages were dropped will be written to the log file
 * when we are able to catch up a bit.)
 *
 * However, one downside is that if your program crashes, not all log messages
 * may have been written, so you may lose messages generated immediately before
 * the crash.
 */
class AsyncFileWriter : public LogWriter {
 public:
  /**
   * The default maximum buffer size.
   *
   * The comments for setMaxBufferSize() explain how this parameter is used.
   */
  static constexpr size_t kDefaultMaxBufferSize = 1024 * 1024;
    }
    
    #include <folly/Conv.h>
#include <folly/File.h>
#include <folly/experimental/logging/AsyncFileWriter.h>
#include <folly/experimental/logging/ImmediateFileWriter.h>
    
      // Parse the default log level settings before processing the input config
  // string.
  auto config = parseLogConfig(kDefaultLoggingConfig);
    
    /**
 * Configuration for a LogCategory
 */
class LogCategoryConfig {
 public:
  explicit LogCategoryConfig(
      LogLevel level = LogLevel::WARNING,
      bool inheritParentLevel = true);
  LogCategoryConfig(
      LogLevel level,
      bool inheritParentLevel,
      std::vector<std::string> handlers);
    }
    
    #include <folly/experimental/logging/LogCategoryConfig.h>
#include <folly/experimental/logging/LogHandlerConfig.h>