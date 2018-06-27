
        
        
    {
    {
    {      rph->Send(new ViewMsg_WillQuit(&no_use));
    }
    CloseAllWindows(true);
  }
  // Then quit.
  MessageLoop::current()->PostTask(FROM_HERE, MessageLoop::QuitClosure());
}
    
    
    {}  // namespace nwapi
    
    #include 'base/logging.h'
#include 'base/values.h'
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
    {} // namespace nwapi
    
    bool NwClipboardClearSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
  return true;
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
      bool NwScreenStartMonitorFunction::RunNWSync(base::ListValue* response, std::string* error) {
    bool screens, windows;
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(0, &screens));
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(1, &windows));
    NwDesktopCaptureMonitor::GetInstance()->Start(screens, windows);
    return true;
  }
    
    
    {    // passthrough
    bool empty() const              { return m.empty(); }
    size_type size() const          { return m.size(); }
    size_type max_size() const      { return m.max_size(); }
    void clear()                    { m.clear(); }
    iterator begin()                { return m.begin(); }
    iterator end()                  { return m.end(); }
    const_iterator begin() const    { return m.begin(); }
    const_iterator end() const      { return m.end(); }
    const_iterator cbegin() const   { return m.cbegin(); }
    const_iterator cend() const     { return m.cend(); }
};
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    
    {  Status FindTable(uint64_t file_number, uint64_t file_size, Cache::Handle**);
};
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
     public:
  enum Order {
    SEQUENTIAL,
    RANDOM
  };
  enum DBState {
    FRESH,
    EXISTING
  };
    
    #include <string>
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    RepeatedPrimitiveFieldGenerator::RepeatedPrimitiveFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    GeneratorFactory::GeneratorFactory() {}
GeneratorFactory::~GeneratorFactory() {}
    
      void GenerateMembers(io::Printer* printer) const;
  void GenerateBuilderMembers(io::Printer* printer) const;
  void GenerateMergingCode(io::Printer* printer) const;
  void GenerateBuildingCode(io::Printer* printer) const;
  void GenerateParsingCode(io::Printer* printer) const;
  void GenerateSerializationCode(io::Printer* printer) const;
  void GenerateSerializedSizeCode(io::Printer* printer) const;
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
        for (auto &pfd: pollfds) {
      if (pfd.revents & (POLLERR | POLLHUP)) {
        // some process died
        DEBUG('detaching process');
        auto &session = client_sessions.at(pfd.fd);
        DEBUG('%d has died', session.pid);
        to_remove.push_back(pfd.fd);
      } else if (pfd.revents & POLLIN) {
        if (pfd.fd == srv_socket->socket_fd) {
          // someone is joining
          DEBUG('registered new client');
          auto client = srv_socket->accept();
          int fd = client.socket_fd;
          to_add.push_back(fd);
          client_sessions.emplace(fd, std::move(client));
        } else {
          // someone wants to register a segment
          DEBUG('got alloc info');
          auto &session = client_sessions.at(pfd.fd);
          AllocInfo info = session.socket.receive();
          session.pid = info.pid;
          DEBUG('got alloc info: %d %d %s', (int)info.free, info.pid, info.filename);
          if (info.free) {
            free_used_object(info.filename);
          } else {
            used_objects.insert(info.filename);
            DEBUG('registered object %s', info.filename);
            session.socket.confirm();
          }
        }
      }
    }
    
      /* will contain multinomial samples (category indices to be returned) */
  THDLongTensor_resize2d(self, n_dist, n_sample);
    
    
    {    PyThreadState *_save = NULL;
    try {
      Py_UNBLOCK_THREADS;
      copyFunc(LIBRARY_STATE dst, THDPModule_makeDescriptor(src_));
      Py_BLOCK_THREADS;
    } catch (...) {
      if (_save) {
        Py_BLOCK_THREADS;
      }
      throw;
    }
  };
    
    
    {  auto& counter = s_counters[m_name];
  counter.total += elapsed;
  ++counter.count;
  counter.max = std::max(counter.max, elapsed);
  counter.wall_time_elapsed += elapsed_wall_clock;
  m_finished = true;
  return elapsed;
}
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    //////////////////////////////////////////////////////////////////////
    
      Vconst() : kind(Quad), val(0) {}
  explicit Vconst(Kind k)        : kind(k), isUndef(true), val(0) {}
  explicit Vconst(bool b)        : kind(Byte), val(b) {}
  explicit Vconst(uint8_t b)     : kind(Byte), val(b) {}
  explicit Vconst(int8_t b)      : Vconst(uint8_t(b)) {}
  explicit Vconst(uint32_t i)    : kind(Long), val(i) {}
  // For historical reasons Vconst(int) produces an 8-byte constant.
  explicit Vconst(int32_t i)     : Vconst(int64_t(i)) {}
  explicit Vconst(uint16_t)      = delete;
  explicit Vconst(int16_t)       = delete;
  explicit Vconst(ullong i)      : kind(Quad), val(i) {}
  explicit Vconst(long long i)   : Vconst(ullong(i)) {}
  explicit Vconst(ulong i)       : Vconst(ullong(i)) {}
  explicit Vconst(long i)        : Vconst(ullong(i)) {}
  explicit Vconst(const void* p) : Vconst(uintptr_t(p)) {}
  explicit Vconst(double d)      : kind(Double), doubleVal(d) {}
    
    void initNuma();
    
    #include <stdio.h>
#include <cxxabi.h>
#include <vector>
#include <assert.h>
#include <iomanip>
#include <sys/stat.h>
    
      // Return the set of clusters that are left, which are the ones that
  // didn't get merged (so their first func is its original func).
  std::vector<Cluster> sortedClusters;
  for (auto func : sortedFuncs) {
    auto cluster = funcCluster[func];
    if (!cluster || cluster->targets.empty()) continue;
    if (cluster->targets[0] != func) continue;
    sortedClusters.emplace_back(std::move(*cluster));
    cluster->targets.clear();
  }
    
    #include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <map>
    
    #endif // incl_HPHP_SYNCHRONIZABLE_MULTI_H_

    
    #include <boost/asio/detail/pop_options.hpp>
    
    #endif // BOOST_ASIO_DETAIL_BUFFERED_STREAM_STORAGE_HPP

    
      static bool do_perform(reactor_op* base)
  {
    descriptor_write_op_base* o(static_cast<descriptor_write_op_base*>(base));
    }
    
    #define BOOST_ASIO_DEFINE_HANDLER_PTR(op) \
  struct ptr \
  { \
    Handler* h; \
    void* v; \
    op* p; \
    ~ptr() \
    { \
      reset(); \
    } \
    void reset() \
    { \
      if (p) \
      { \
        p->~op(); \
        p = 0; \
      } \
      if (v) \
      { \
        boost_asio_handler_alloc_helpers::deallocate(v, sizeof(op), *h); \
        v = 0; \
      } \
    } \
  } \
  /**/
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
    
    private:
  // Calculate the hash size for the specified number of elements.
  static std::size_t hash_size(std::size_t num_elems)
  {
    static std::size_t sizes[] =
    {
#if defined(BOOST_ASIO_HASH_MAP_BUCKETS)
      BOOST_ASIO_HASH_MAP_BUCKETS
#else // BOOST_ASIO_HASH_MAP_BUCKETS
      3, 13, 23, 53, 97, 193, 389, 769, 1543, 3079, 6151, 12289, 24593,
      49157, 98317, 196613, 393241, 786433, 1572869, 3145739, 6291469,
      12582917, 25165843
#endif // BOOST_ASIO_HASH_MAP_BUCKETS
    };
    const std::size_t nth_size = sizeof(sizes) / sizeof(std::size_t) - 1;
    for (std::size_t i = 0; i < nth_size; ++i)
      if (num_elems < sizes[i])
        return sizes[i];
    return sizes[nth_size];
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
        // Setup render state
    const float blend_factor[4] = { 0.f, 0.f, 0.f, 0.f };
    ctx->OMSetBlendState(g_pBlendState, blend_factor, 0xffffffff);
    ctx->OMSetDepthStencilState(g_pDepthStencilState, 0);
    ctx->RSSetState(g_pRasterizerState);
    
        // Create the pixel shader
    {
        static const char* pixelShader =
            'struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            sampler sampler0;\
            Texture2D texture0;\
            \
            float4 main(PS_INPUT input) : SV_Target\
            {\
            float4 out_col = input.col * texture0.Sample(sampler0, input.uv); \
            return out_col; \
            }';
    }
    
        // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
    
    void ImGui_ImplFreeGLUT_NewFrame()
{
    // Setup time step
    ImGuiIO& io = ImGui::GetIO();
    int current_time = glutGet(GLUT_ELAPSED_TIME);
    io.DeltaTime = (current_time - g_Time) / 1000.0f;
    g_Time = current_time;
    }
    
    
    {        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // Data
static SDL_Window*  g_Window = NULL;
static Uint64       g_Time = 0;
static bool         g_MousePressed[3] = { false, false, false };
static SDL_Cursor*  g_MouseCursors[ImGuiMouseCursor_COUNT] = { 0 };
static char*        g_ClipboardTextData = NULL;
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
    /**
 * Install the terminate / unexpected handlers to dump exceptions.
 */
void installHandlers();
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
    namespace folly {
    }
    
    #ifdef _WIN32
#include <sys/types.h>
    
    int main(int argc, char* argv[]) {
  // Using log macros before calling folly::initLogging() will use the default
  // log settings defined by folly::initializeLoggerDB().  The default behavior
  // is to log WARNING+ messages to stderr.
  XLOG(INFO) << 'log messages less than WARNING will be ignored';
  XLOG(ERR) << 'error messages before initLogging() will be logged to stderr';
    }
    
    namespace folly {
    }
    
    FOLLY_ALWAYS_INLINE int __builtin_clzl(unsigned long x) {
  return __builtin_clz((unsigned int)x);
}
    
      XLOGC(DBG5, 'passing log: %03d', getValue());
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ('passing log: 005', messages[0].first.getMessage());
  EXPECT_TRUE(argumentEvaluated);
  messages.clear();
    
    
    {  XLOGF_IF(DBG1, false, 'number: {:>3d}; string: {}', 12, 'foo');
  ASSERT_EQ(0, messages.size());
  messages.clear();
  XLOGF_IF(DBG1, true, 'number: {:>3d}; string: {}', 12, 'foo');
  ASSERT_EQ(1, messages.size());
  messages.clear();
}
    
        jobject     (*CallNonvirtualObjectMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jobject     (*CallNonvirtualObjectMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jobject     (*CallNonvirtualObjectMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jboolean    (*CallNonvirtualBooleanMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jboolean    (*CallNonvirtualBooleanMethodV)(JNIEnv*, jobject, jclass,
                         jmethodID, va_list);
    jboolean    (*CallNonvirtualBooleanMethodA)(JNIEnv*, jobject, jclass,
                         jmethodID, jvalue*);
    jbyte       (*CallNonvirtualByteMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jbyte       (*CallNonvirtualByteMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jbyte       (*CallNonvirtualByteMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jchar       (*CallNonvirtualCharMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jchar       (*CallNonvirtualCharMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jchar       (*CallNonvirtualCharMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jshort      (*CallNonvirtualShortMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jshort      (*CallNonvirtualShortMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jshort      (*CallNonvirtualShortMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jint        (*CallNonvirtualIntMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jint        (*CallNonvirtualIntMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jint        (*CallNonvirtualIntMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jlong       (*CallNonvirtualLongMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jlong       (*CallNonvirtualLongMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jlong       (*CallNonvirtualLongMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jfloat      (*CallNonvirtualFloatMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jfloat      (*CallNonvirtualFloatMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jfloat      (*CallNonvirtualFloatMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    jdouble     (*CallNonvirtualDoubleMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    jdouble     (*CallNonvirtualDoubleMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    jdouble     (*CallNonvirtualDoubleMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    void        (*CallNonvirtualVoidMethod)(JNIEnv*, jobject, jclass,
                        jmethodID, ...);
    void        (*CallNonvirtualVoidMethodV)(JNIEnv*, jobject, jclass,
                        jmethodID, va_list);
    void        (*CallNonvirtualVoidMethodA)(JNIEnv*, jobject, jclass,
                        jmethodID, jvalue*);
    
    typedef struct YGValue {
  float value;
  YGUnit unit;
} YGValue;
    
    _Unwind_Reason_Code unwindCallback(struct _Unwind_Context* context, void* arg) {
  BacktraceState* state = reinterpret_cast<BacktraceState*>(arg);
  auto absoluteProgramCounter =
      reinterpret_cast<InstructionPointer>(_Unwind_GetIP(context));
    }
    
        double top;
    double bottom;
    
    int Node::getAlignContent(void) const
{
    return YGNodeStyleGetAlignContent(m_node);
}
    
     private:
    
    /**
 * A thread-local object is a 'global' object within a thread. This is useful
 * for writing apartment-threaded code, where nothing is actullay shared
 * between different threads (hence no locking) but those variables are not
 * on stack in local scope. To use it, just do something like this,
 *
 *   ThreadLocal<MyClass> static_object;
 *     static_object->data_ = ...;
 *     static_object->doSomething();
 *
 *   ThreadLocal<int> static_number;
 *     int value = *static_number;
 *
 * So, syntax-wise it's similar to pointers. T can be primitive types, and if
 * it's a class, there has to be a default constructor.
 */
template<typename T>
class ThreadLocal {
public:
  /**
   * Constructor that has to be called from a thread-neutral place.
   */
  ThreadLocal() :
    m_key(0),
    m_cleanup(OnThreadExit) {
    initialize();
  }
    }