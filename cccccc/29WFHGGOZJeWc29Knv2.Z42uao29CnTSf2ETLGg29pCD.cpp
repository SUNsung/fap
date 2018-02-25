// Returns the `cand' if it was successfully inserted; otherwise it's
// the callers responsibility to free it.
const RepoAuthType::Array* Builder::insert(RepoAuthType::Array* cand) {
  assert(cand->id() == -1u);
  std::lock_guard<std::mutex> g(m_impl->mutex);
  auto ins = m_impl->types.insert(cand);
  if (ins.second) {
    cand->m_id = m_impl->nextId++;
    assert(*ins.first == cand);
    assert((*ins.first)->id() == cand->id());
    return cand;
  }
  return *ins.first;
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    Variant HHVM_FUNCTION(mb_convert_encoding,
                      const String& str,
                      const String& to_encoding,
                      const Variant& from_encoding /* = uninit_variant */) {
  String encoding = from_encoding.toString();
  if (from_encoding.isArray()) {
    StringBuffer _from_encodings;
    Array encs = from_encoding.toArray();
    for (ArrayIter iter(encs); iter; ++iter) {
      if (!_from_encodings.empty()) {
        _from_encodings.append(',');
      }
      _from_encodings.append(iter.second().toString());
    }
    encoding = _from_encodings.detach();
  }
    }
    
    /**
 * (1) For people who want to quickly come up with an HTTP server handling
 *     their specific requests, we really want to minimize writing an HTTP
 *     server to something like this,
 *
 *     struct MyRequestHandler : RequestHandler {
 *       virtual void handleRequest(Transport *transport) {
 *         // ...
 *       }
 *     };
 *
 *     Then, run a server like this,
 *
 *       auto server = std::make_shared<LibEventServer>('127.0.0.1', 80, 20);
 *       server->setRequestHandlerFactory<MyRequestHandler>();
 *       Server::InstallStopSignalHandlers(server);
 *       server->start();
 *
 *     This way, we can easily swap out an implementation like LibEventServer
 *     without any modifications to MyRequestHandler, if LibEventServer model
 *     doesn't perform well with the specific requests.
 *
 * (2) For people who are interested in implementing a high-performance HTTP
 *     server, derive a new class from Server just like LibEventServer
 *     does.
 *
 *     struct MyTransport : Transport {
 *       // implements transport-related functions
 *     };
 *
 *     struct MyServer : Server {
 *       // implements how to start/stop a server
 *     };
 *
 * (3) LibEventServer is pre-implemented with evhttp, and it has one thread
 *     listening on a socket and dispatching jobs to multiple worker threads.
 *
 */
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi) {
    fi.open(fname);
    if (fi.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator(void) {
    fi.close();
  }
    }
    
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
namespace tree {
    }
    }
    
    #define XGBOOST_TYPE_SWITCH(dtype, OP)        \
switch (dtype) {                \
  case xgboost::common::uint32 : {           \
    typedef uint32_t DType;         \
    OP; break;              \
  }               \
  case xgboost::common::uint16 : {           \
    typedef uint16_t DType;         \
    OP; break;              \
  }               \
  case xgboost::common::uint8 : {            \
    typedef uint8_t DType;          \
    OP; break;              \
    default: LOG(FATAL) << 'don't recognize type flag' << dtype;  \
  }               \
}
    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
    void AbstractBtMessage::setBtRequestFactory(BtRequestFactory* factory)
{
  requestFactory_ = factory;
}
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
    #include 'AbstractCommand.h'
    
    
    {} // namespace aria2
    
    #include 'TimerA2.h'
    
    bool AdaptiveFileAllocationIterator::finished()
{
  if (!allocator_) {
    return offset_ == totalLength_;
  }
  else {
    return allocator_->finished();
  }
}
    
      /**
   * The internal announce URL pointer points to next URL.
   * If the current URL is the last element of its group, then the first
   * element of the next group is pointed.
   */
  void announceFailure();
    
    #include 'common.h'
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    void configureAsyncNameResolverMan(AsyncNameResolverMan* asyncNameResolverMan,
                                   Option* option);