
        
        class NwCurrentWindowInternalCapturePageInternalFunction : public AsyncExtensionFunction {
 public:
  NwCurrentWindowInternalCapturePageInternalFunction();
    }
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
        // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    namespace nwapi {
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
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    namespace ui {
    }
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    RepeatedPrimitiveFieldGenerator::RepeatedPrimitiveFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    // Author: liujisi@google.com (Pherl Liu)
    
      ::google::InitGoogleLogging(argv[0]);
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
    // Finds the first element in the iterator range [begin, end) that
// equals elem.  Element may be a native array type itself.
template <typename Iter, typename Element>
Iter ArrayAwareFind(Iter begin, Iter end, const Element& elem) {
  for (Iter it = begin; it != end; ++it) {
    if (internal::ArrayEq(*it, elem))
      return it;
  }
  return end;
}
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
    
    {  const Generator1 g1_;
  const Generator2 g2_;
  const Generator3 g3_;
  const Generator4 g4_;
  const Generator5 g5_;
  const Generator6 g6_;
  const Generator7 g7_;
  const Generator8 g8_;
};  // class CartesianProductHolder8
    
    
]]
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    
    {  T0 f0_;
};
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
      /**
   * @brief End all EventPublisher run loops and deregister.
   *
   * End is NOT the same as deregistration. End will call deregister on all
   * publishers then either join or detach their run loop threads.
   * See EventFactory::deregisterEventPublisher for actions taken during
   * deregistration.
   *
   * @param join if true, threads will be joined
   */
  static void end(bool join = false);
    
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
    
    #include 'osquery/core/json.h'
    
    bool isLauncherProcessDead(PlatformProcess& launcher) {
  if (!launcher.isValid()) {
    return true;
  }
    }
    
    	const char* tag_cstr = NULL;
	const char* filename_cstr = NULL;
	const char* funcname_cstr = NULL;
	const char* log_cstr = NULL;
    
                if (EXPECTS_CRASH_DUMP_CONTENT == _state) {
                _state = EXPECTS_CRASH_DUMP_HEADER;
                return 0;
            }
    
    #include <vector>
#include <string>
    
    //
//  comm_frequency_limit.h
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    #ifndef CORESERVICEBASE_H_
#define CORESERVICEBASE_H_
    
      protected:
    ServiceBase(const char* _servicename) : m_servicename(_servicename) {}
    
    #include 'comm/debugger/testspy.h'
    
    jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const AutoBuffer& ab);
jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const void* _buffer, size_t _length);
void JNU_FreeJbyteArray(JNIEnv* _env, jbyteArray bytes);
    
    
#endif /* SCOP_JENV_H_ */

    
    class TestWriteChainAsyncTransportWrapper :
  public WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper> {
 public:
  TestWriteChainAsyncTransportWrapper() :
    WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper>(nullptr) {}
    }
    
      uint32_t size3 = 4321;
  unique_ptr<uint8_t[]> buf3(new uint8_t[size3]);
  IOBuf iobuf3(IOBuf::WRAP_BUFFER, buf3.get(), size3);
  EXPECT_EQ(buf3.get(), iobuf3.data());
  EXPECT_EQ(size3, iobuf3.length());
  EXPECT_EQ(buf3.get(), iobuf3.buffer());
  EXPECT_EQ(size3, iobuf3.capacity());
    
    memory_resource* get_default_resource();
void set_default_resource(memory_resource*);
memory_resource* new_delete_resource();
    
    #include <folly/Exception.h>
#include <folly/Format.h>
#include <folly/Likely.h>
#include <folly/String.h>
#include <folly/portability/Unistd.h>
    
     private:
  struct Context {
    folly::Synchronized<std::shared_ptr<const T>> value_;
    folly::Synchronized<folly::Function<void()>> callback_;
  };
  struct Wrapper;
  std::shared_ptr<Context> context_;
    
    class ObserverManager;