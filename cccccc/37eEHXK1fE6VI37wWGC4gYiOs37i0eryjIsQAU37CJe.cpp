
        
        
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include 'src/core/lib/iomgr/port.h'
    
      LOG_TEST_NAME('test_unsetenv');
    
    static inline std::shared_ptr<::grpc::Channel> CreateCustomChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds,
    const ChannelArguments& args) {
  return ::grpc_impl::CreateCustomChannelImpl(target, creds, args);
}
    
    namespace grpc_impl {
    }
    
    /**
 * Stage used by the count command. This stage sits at the root of a plan tree and counts the number
 * of results returned by its child stage.
 *
 * This should not be confused with the CountScan stage. CountScan is a special index access stage
 * which can optimize index access for count operations in some cases. On the other hand, *every*
 * count op has a CountStage at its root.
 *
 * Only returns NEED_TIME until hitting EOF. The count result can be obtained by examining the
 * specific stats.
 */
class CountStage final : public PlanStage {
public:
    CountStage(OperationContext* opCtx,
               Collection* collection,
               long long limit,
               long long skip,
               WorkingSet* ws,
               PlanStage* child);
    }
    
    
    {        UsageData queries;
        UsageData getmore;
        UsageData insert;
        UsageData update;
        UsageData remove;
        UsageData commands;
        OperationLatencyHistogram opLatencyHistogram;
    };
    
    class ExtensionsCallbackRealTest : public unittest::Test {
public:
    ExtensionsCallbackRealTest() : _nss('unittests.extensions_callback_real_test') {}
    }
    
    class UpdateDate2 : public Base {
public:
    void run() {
        BSONObj o;
        {
            BSONObjBuilder b;
            b.appendTimestamp('a');
            b.appendTimestamp('b');
            b.append('_id', 1);
            o = b.obj();
        }
    }
    }
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
    #include 'imgui.h'
#include 'imgui_impl_glfw.h'
#include 'imgui_impl_opengl2.h'
#include <stdio.h>
#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif
#include <GLFW/glfw3.h>
    
    
    {    // 3. Show another simple window.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
}
    
    #pragma once
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
        Channel(size_t _capacity = 1) :
            capacity(_capacity)
    {
    }
    
        un1.sun_family = AF_UNIX;
    un2.sun_family = AF_UNIX;
    
    static int thread_onTask(swThreadPool *pool, void *task, int task_len)
{
    sw_atomic_long_t *n = (sw_atomic_long_t *) task;
    sw_atomic_fetch_add(n, 1);
    if (*n == N - 1)
    {
        write(_pipe, (void*) n, sizeof(long));
    }
    return SW_OK;
}
    
    class ExampleQt : public QObject {
    }
    
    TEST(lru_cache, memory_free)
{
    shared_ptr<lru_cache_test_class> val = make_shared<lru_cache_test_class>();
    cache.set('test', val);
    ASSERT_EQ(cache.get('test').get(), val.get());
    val.reset();
    ASSERT_EQ(dtor_num, 0);
    cache.clear();
    ASSERT_EQ(dtor_num, 1);
}
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
    greeting_packet::greeting_packet(const char *data) : server_packet(data)
{
    swMysqlPacketDump(header.length, header.number, data, 'Protocol::HandshakeGreeting');
    /**
    1              [0a] protocol version
    string[NUL]    server version
    4              connection id
    string[8]      auth-plugin-data-part-1
    1              [00] filler
    2              capability flags (lower 2 bytes)
      if more data in the packet:
    1              character set
    2              status flags
    2              capability flags (upper 2 bytes)
      if capabilities & CLIENT_PLUGIN_AUTH {
    1              length of auth-plugin-data
      } else {
    1              [00]
      }
    string[10]     reserved (all [00])
      if capabilities & CLIENT_SECURE_CONNECTION {
    string[$len]   auth-plugin-data-part-2 ($len=MAX(13, length of auth-plugin-data - 8))
      if capabilities & CLIENT_PLUGIN_AUTH {
    string[NUL]    auth-plugin name
      }
    */
    const char *p = data + SW_MYSQL_PACKET_HEADER_SIZE;
    // 1              [0a] protocol version
    protocol_version = *p;
    p++;
    // x              server version
    server_version = std::string(p);
    p += server_version.length() + 1;
    // 4              connection id
    connection_id = *((int *) p);
    p += 4;
    // string[8]      auth-plugin-data-part-1
    memcpy(auth_plugin_data, p, 8);
    p += 8;
    // 1              [00] filler
    filler = *p;
    p += 1;
    // 2              capability flags (lower 2 bytes)
    memcpy(((char *) (&capability_flags)), p, 2);
    p += 2;
    }
    }
    
    
    {		optlen = sizeof(struct in6_pktinfo);
		goto dosockopt;
#endif
	}
    
            if (valid_ptr(function))
        {
            if (0 > trace_get_long(traced_pid, function + offsetof(zend_function, common.function_name), &l))
            {
                return -1;
            }
    }