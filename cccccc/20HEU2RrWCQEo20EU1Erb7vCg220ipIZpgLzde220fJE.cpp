#include <fstream>
    
     public:
  /**
   * @brief The std::thread entrypoint.
   *
   * This is used by the Dispatcher only.
   */
  virtual void run() final;
    
    /**
 * @brief These tables populate the 'host_details' content.
 *
 * Enrollment plugins should send 'default' host details to enroll request
 * endpoints. This allows the enrollment service to identify the new node.
 */
extern const std::set<std::string> kEnrollHostDetails;
    
      /// Disable event expiration for this subscriber.
  void doNotExpire() {
    expire_events_ = false;
  }
    
      /**
   * @brief A feature method to decide if events should be forwarded.
   *
   * See the optional logEvent method.
   *
   * @return false if this logger plugin should NOT handle events directly.
   */
  virtual bool usesLogEvent() {
    return false;
  }
    
      /// Get the registry external status.
  bool external() {
    return external_;
  }
    
    #ifndef OSQUERY_BUILD_SDK
#define OSQUERY_BUILD_SDK
#endif
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    
    {  c.reset();
}
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    #ifndef WAKEUPLOCK_H_
#define WAKEUPLOCK_H_
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
        bool Check();  // true pass, false limit
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
    
    {  bool cas(T& u, T& v) {
    DEBUG_PRINT(this << ' ' << u << ' ' << v);
    Node* n = new Node(v);
    hazptr_holder hptr;
    Node* p;
    do {
      p = hptr.get_protected(p_);
      if (p->val_ != u) { delete n; return false; }
      if (p_.compare_exchange_weak(p, n)) {
        break;
      }
    } while (true);
    hptr.reset();
    p->retire();
    DEBUG_PRINT(this << ' ' << p << ' ' << u << ' ' << n << ' ' << v);
    return true;
  }
};
    
      std::atomic<Node2*> shared0 = {node0};
  std::atomic<Node2*> shared1 = {node1};
  std::atomic<Node2*> shared2 = {node2};
  std::atomic<Node2*> shared3 = {node3};
    
    /**
 * An AsyncIOOp represents a pending operation.  You may set a notification
 * callback or you may use this class's methods directly.
 *
 * The op must remain allocated until it is completed or canceled.
 */
class AsyncIOOp : private boost::noncopyable {
  friend class AsyncIO;
  friend std::ostream& operator<<(std::ostream& stream, const AsyncIOOp& o);
    }
    
    #include <folly/experimental/io/FsUtil.h>
    
    class FileHandlerFactory::WriterFactory
    : public StandardLogHandlerFactory::WriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value) override {
    if (name == 'path') {
      path_ = value.str();
      return true;
    }
    }
    }
    
    
    {} // namespace folly

    
      // Format the data into a buffer.
  std::string buffer;
  StringPiece msgData{message.getMessage()};
  if (message.containsNewlines()) {
    // If there are multiple lines in the log message, add a header
    // before each one.
    std::string header;
    header.reserve(headerLengthGuess);
    headerFormatter.appendTo(header);
    }
    
    namespace folly {
    }
    
      // TODO: In the future it would be nice to build a better mechanism so that
  // additional LogHandlerFactory objects could be automatically registered on
  // startup if they are linked into our current executable.
  //
  // For now we register only the StreamHandlerFactory.  There is a
  // FileHandlerFactory, but we do not register it by default: it allows
  // appending to arbitrary files based on the config settings, and we do not
  // want to allow this by default for security reasons.  (In the future
  // maybe it would be worth enabling the FileHandlerFactory by default if we
  // confirm that we are not a setuid or setgid binary.  i.e., if the real
  // UID+GID is the same as the effective UID+GID.)
    
    namespace folly {
    }