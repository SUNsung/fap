
    { protected:
  std::ostringstream log_stream_;
};
    
      uint64_t uint64_t2[2] = {1U, 2U};
  EXPECT_EQ(info.group_ptr.size(), 0);
  info.SetInfo('group', uint64_t2, xgboost::kUInt64, 2);
  ASSERT_EQ(info.group_ptr.size(), 3);
  EXPECT_EQ(info.group_ptr[2], 3);
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '1a';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    DMLC_REGISTRY_FILE_TAG(updater_refresh);
    
      XGBOOST_DEVICE float GetGrad() const { return grad_; }
  XGBOOST_DEVICE float GetHess() const { return hess_; }
    
    memory_resource* get_default_resource();
void set_default_resource(memory_resource*);
memory_resource* new_delete_resource();
    
    #include <folly/Range.h>
#include <folly/experimental/io/FsUtil.h>
#include <folly/portability/Unistd.h>
    
    namespace {
// We cannot use EXPECT_EQ(a, b) due to a bug in gtest 1.6.0: gtest wants
// to print path as a container even though it has operator<< defined,
// and as path is a container of path, this leads to infinite
// recursion.
void expectPathEq(const path& a, const path& b) {
  EXPECT_TRUE(a == b) << 'expected path=' << a << '\nactual path=' << b;
}
} // namespace
    
    
    {std::string AsyncFileWriter::getNumDiscardedMsg(size_t numDiscarded) {
  // We may want to make this customizable in the future (e.g., to allow it to
  // conform to the LogFormatter style being used).
  // For now just return a simple fixed message.
  return folly::to<std::string>(
      numDiscarded,
      ' log messages discarded: logging faster than we can write\n');
}
} // namespace folly

    
        jbooleanArray NewBooleanArray(jsize length)
    { return functions->NewBooleanArray(this, length); }
    jbyteArray NewByteArray(jsize length)
    { return functions->NewByteArray(this, length); }
    jcharArray NewCharArray(jsize length)
    { return functions->NewCharArray(this, length); }
    jshortArray NewShortArray(jsize length)
    { return functions->NewShortArray(this, length); }
    jintArray NewIntArray(jsize length)
    { return functions->NewIntArray(this, length); }
    jlongArray NewLongArray(jsize length)
    { return functions->NewLongArray(this, length); }
    jfloatArray NewFloatArray(jsize length)
    { return functions->NewFloatArray(this, length); }
    jdoubleArray NewDoubleArray(jsize length)
    { return functions->NewDoubleArray(this, length); }
    
    // In order to avoid potentially filling the jni locals table,
// temporary objects (right now, this is just jstrings) need to be
// released. This is done by returning a holder which autoconverts to
// jstring.
template <typename T>
inline T callToJni(T&& t) {
  return t;
}
    
    TEST_F(YogaTest_HadOverflowTests, no_overflow_no_wrap_and_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeStyleSetFlexShrink(child1, 1);
  YGNodeInsertChild(root, child1, 1);
    }
    
    
    {  if (logger) {
    if (!context) {
      context = new YGConfigContext();
      YGConfigSetContext(config, context);
    }
    context->logger = new global_ref<jobject>(make_global(logger));
    YGConfigSetLogger(config, YGJNILogFunc);
  } else {
    YGConfigSetLogger(config, NULL);
  }
}
    
        Config const & operator=(Config const &) = delete;
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
    
    {  pthread_key_t m_key;
  CleanupFunction m_cleanup;
};
    
    #define FBCRASH(msg, ...) facebook::assertInternal('Fatal error (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__)
#define FBUNREACHABLE() facebook::assertInternal('This code should be unreachable (%s:%d)', __FILE__, __LINE__)
    
    
    {    if (addr.ss_family == AF_INET) {
        sockaddr_in *ipv4 = (sockaddr_in *) &addr;
        inet_ntop(AF_INET, &ipv4->sin_addr, buf, sizeof(buf));
        return {ntohs(ipv4->sin_port), buf, 'IPv4'};
    } else {
        sockaddr_in6 *ipv6 = (sockaddr_in6 *) &addr;
        inet_ntop(AF_INET6, &ipv6->sin6_addr, buf, sizeof(buf));
        return {ntohs(ipv6->sin6_port), buf, 'IPv6'};
    }
}
    
    
    {    httpSocket->setState<HttpSocket<SERVER>>();
    httpSocket->start(httpSocket->nodeData->loop, httpSocket, httpSocket->setPoll(UV_READABLE));
    httpSocket->setNoDelay(true);
    Group<SERVER>::from(httpSocket)->addHttpSocket(httpSocket);
    Group<SERVER>::from(httpSocket)->httpConnectionHandler(httpSocket);
}
    
        void start(void (*cb)(Timer *), int timeout, int repeat) {
        loop->timepoint = std::chrono::system_clock::now();
        std::chrono::system_clock::time_point timepoint = loop->timepoint + std::chrono::milliseconds(timeout);
    }