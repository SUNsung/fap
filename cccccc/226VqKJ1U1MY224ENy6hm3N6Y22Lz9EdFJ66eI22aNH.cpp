IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    namespace nw {
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
      void InitializeOnIOThread(
      const scoped_refptr<net::CertVerifyProc>& verify_proc);
    
    class DispatcherBindings : public v8::Extension {
 public:
  DispatcherBindings();
  ~DispatcherBindings() final;
    }
    
      // Helper function to convert type.
  template<class T>
  static T* GetApiObject(int id) {
    return static_cast<T*>(GetApiObject(id));
  }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void PointMenuPositionFunc(GtkMenu* menu,
                           int* x,
                           int* y,
                           gboolean* push_in,
                           gpointer userdata) {
  *push_in = TRUE;
    }
    
    
    {}  // namespace nwapi

    
    extern JSClass  *jsb_cocos2d_Physics3D6DofConstraint_class;
extern JSObject *jsb_cocos2d_Physics3D6DofConstraint_prototype;
    
    
    
    
    
    
    {	b2Vec2 viewCenter;
	float32 hz;
	int32 velocityIterations;
	int32 positionIterations;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawAABBs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactImpulse;
	int32 drawFrictionImpulse;
	int32 drawCOMs;
	int32 drawStats;
	int32 drawProfile;
	int32 enableWarmStarting;
	int32 enableContinuous;
	int32 enableSubStepping;
	int32 enableSleep;
	int32 pause;
	int32 singleStep;
};
    
    		// Define platform
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-4.0f, 5.0f);
			m_platform = m_world->CreateBody(&bd);
    }
    
    
    {	b2Body* m_middle;
};
    
    namespace facebook {
namespace jni {
    }
    }
    
        double width;
    double height;
    
    void Node::setBorder(int edge, double border)
{
    YGNodeStyleSetBorder(m_node, static_cast<YGEdge>(edge), border);
}
    
    #include './Layout.hh'
#include './Size.hh'
#include './Value.hh'
#include './Config.hh'
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
        method(getOverflow);
    method(getDisplay);
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      ProgramLocation(const char* functionName, const char* fileName, int line) :
      m_functionName(functionName),
      m_fileName(fileName),
      m_lineNumber(line)
    {}
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};
    
    private:
  void initialize() {
    int ret = pthread_key_create(&m_key, m_cleanup);
    if (ret != 0) {
      const char *msg = '(unknown error)';
      switch (ret) {
      case EAGAIN:
        msg = 'PTHREAD_KEYS_MAX (1024) is exceeded';
        break;
      case ENOMEM:
        msg = 'Out-of-memory';
        break;
      }
      (void) msg;
      FBASSERTMSGF(0, 'pthread_key_create failed: %d %s', ret, msg);
    }
  }
    
    namespace facebook {
#define ENABLE_FBASSERT 1
    }
    
    #include 'CoreClasses.h'
    
        FILE *pipe = popen(('fuser ' + to_string(port) + '/tcp 2> /dev/null').c_str(), 'r');
    char line[10240] = {};
    fgets(line, sizeof(line), pipe);
    pclose(pipe);
    int pid = atoi(line);
    
    int byteSize, framesPerSend;
unsigned char *framePackBuffer;
int framePackBufferLength = 0;
const char upgradeHeaderBuffer[] = 'GET /socket.io/?EIO=4&transport=websocket HTTP/1.1\r\n'
                                   'Upgrade: websocket\r\n'
                                   'Connection: Upgrade\r\n'
                                   'Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n'
                                   'Host: server.example.com\r\n'
                                   'Sec-WebSocket-Version: 13\r\n\r\n';
    
    
    {}

    
    
    {}

    
    public:
    Socket(NodeData *nodeData, Loop *loop, uv_os_sock_t fd, SSL *ssl) : Poll(loop, fd), ssl(ssl), nodeData(nodeData) {
        if (ssl) {
            // OpenSSL treats SOCKETs as int
            SSL_set_fd(ssl, (int) fd);
            SSL_set_mode(ssl, SSL_MODE_RELEASE_BUFFERS);
        }
    }
    
    void Loop::doEpoll(int epollTimeout) {
    for (std::pair<Poll *, void (*)(Poll *)> c : closing) {
        numPolls--;
    }
    }
    
    
    {                listenSocket->timer = new Timer(listenSocket->nodeData->loop);
                listenSocket->timer->setData(listenSocket);
                listenSocket->timer->start(accept_timer_cb<A>, 1000, 1000);
            }
            return;
        } else if (TIMER) {
            listenSocket->timer->stop();
            listenSocket->timer->close();
            listenSocket->timer = nullptr;
    
    class AbstractAuthResolver : public AuthResolver {
public:
  AbstractAuthResolver();
    }
    
      virtual bool getChangeOptionForReserved() const CXX11_OVERRIDE;
    
    #endif // D_ABSTRACT_PROXY_RESPONSE_COMMAND_H

    
      BinaryStream* stream_;
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    #include 'common.h'