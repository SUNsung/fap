
        
          CancellationManager* cancellation_manager;
  partial_run_mgr_.FindOrCreate(step_id, &cancellation_manager);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    Status status = input_buffer_->ReadLine(value);
    ++line_number_;
    if (status.ok()) {
      *key = strings::StrCat(current_work(), ':', line_number_);
      *produced = true;
      return status;
    }
    if (errors::IsOutOfRange(status)) {  // End of file, advance to the next.
      *at_end = true;
      return Status::OK();
    } else {  // Some other reading error
      return status;
    }
  }
    
        string compression_type;
    OP_REQUIRES_OK(context,
                   context->GetAttr('compression_type', &compression_type));
    
    void MPIUtils::InitMPI() {
  // Initialize the MPI environment if that hasn't been done
  int flag = 0;
  MPI_CHECK(MPI_Initialized(&flag));
  if (!flag) {
    int proc_id = 0, number_of_procs = 1, len = -1;
    char my_host_name[max_worker_name_length];
    // MPI_CHECK(MPI_Init_thread(0, 0, MPI_THREAD_MULTIPLE, &flag));
    MPI_CHECK(MPI_Init(0, 0));
    MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
    MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    MPI_CHECK(MPI_Get_processor_name(my_host_name, &len));
    fprintf(stderr,
            'MPI Environment initialized. Process id: %d Total processes: %d '
            '|| Hostname: %s \n',
            proc_id, number_of_procs, my_host_name);
  }
}
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    namespace tensorflow {
namespace functor {
DEFINE_UNARY2(get_angle, complex64, complex128);
}  // namespace functor
}  // namespace tensorflow
    
    IPC_MESSAGE_ROUTED4(ShellViewHostMsg_Call_Object_Method,
                    int /* object id */,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    
    {}
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
      NwScreenGetScreensFunction::NwScreenGetScreensFunction() {}
    
    static int set_addresses(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* data,
		  size_t len) {
	if (msg->ifa_family == AF_INET) {
		sockaddr_in* sa = new sockaddr_in;
		sa->sin_family = AF_INET;
		memcpy(&sa->sin_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else if (msg->ifa_family == AF_INET6) {
		sockaddr_in6* sa = new sockaddr_in6;
		sa->sin6_family = AF_INET6;
		sa->sin6_scope_id = msg->ifa_index;
		memcpy(&sa->sin6_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else {
		return -1;
	}
	return 0;
}
    
    	virtual void poll() = 0;
	virtual Error accept_stream(Ref<StreamPeer> p_base) = 0;
	virtual Error connect_to_stream(Ref<StreamPeer> p_base, bool p_validate_certs = false, const String &p_for_hostname = String()) = 0;
	virtual Status get_status() const = 0;
    
    
    {	connected = false;
	status = STATUS_DISCONNECTED;
}
    
    WebSocketClient::~WebSocketClient() {
}
    
    #endif // WEBSOCKET_CLIENT_H

    
    
    {
    {    pTemp[0] = DESCALE(tmp10 + btmp3, CONST_BITS-PASS1_BITS);
    pTemp[7] = DESCALE(tmp10 - btmp3, CONST_BITS-PASS1_BITS);
    pTemp[1] = DESCALE(tmp11 + btmp2, CONST_BITS-PASS1_BITS);
    pTemp[6] = DESCALE(tmp11 - btmp2, CONST_BITS-PASS1_BITS);
    pTemp[2] = DESCALE(tmp12 + btmp1, CONST_BITS-PASS1_BITS);
    pTemp[5] = DESCALE(tmp12 - btmp1, CONST_BITS-PASS1_BITS);
    pTemp[3] = DESCALE(tmp13 + btmp0, CONST_BITS-PASS1_BITS);
    pTemp[4] = DESCALE(tmp13 - btmp0, CONST_BITS-PASS1_BITS);
  }
};
    
    
    {}  // namespace leveldb
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
    void Footer::EncodeTo(std::string* dst) const {
  const size_t original_size = dst->size();
  metaindex_handle_.EncodeTo(dst);
  index_handle_.EncodeTo(dst);
  dst->resize(2 * BlockHandle::kMaxEncodedLength);  // Padding
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber & 0xffffffffu));
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber >> 32));
  assert(dst->size() == original_size + kEncodedLength);
  (void)original_size;  // Disable unused variable warning.
}
    
    #include 'port/port.h'
#include 'port/thread_annotations.h'
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
    bool js_cocos2dx_physics3d_Physics3DObject_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DObject_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DObject(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DObject_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getObjType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_setPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getWorldTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_setMask(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getCollisionCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getMask(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_needCollisionCallback(JSContext *cx, uint32_t argc, jsval *vp);
    
        virtual void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    
    /// Test settings. Some can be controlled in the GUI.
struct Settings
{
	Settings()
	{
		viewCenter.Set(0.0f, 20.0f);
		hz = 60.0f;
		velocityIterations = 8;
		positionIterations = 3;
		drawShapes = 1;
		drawJoints = 1;
		drawAABBs = 0;
		drawContactPoints = 0;
		drawContactNormals = 0;
		drawContactImpulse = 0;
		drawFrictionImpulse = 0;
		drawCOMs = 0;
		drawStats = 0;
		drawProfile = 0;
		enableWarmStarting = 1;
		enableContinuous = 1;
		enableSubStepping = 0;
		enableSleep = 1;
		pause = 0;
		singleStep = 0;
	}
    }
    
    
    {			// Bottom horizontal
			shape.Set(b2Vec2(-20.0f, -20.0f), b2Vec2(20.0f, -20.0f));
			ground->CreateFixture(&sd);
		}