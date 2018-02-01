
        
        // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    RepeatedMessageFieldGenerator::RepeatedMessageFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    
/// Reference : Eric W. Weisstein. 'Cubic Equation.' From MathWorld--A Wolfram Web Resource.
/// http://mathworld.wolfram.com/CubicEquation.html
/// \return Number of real roots found.
int solve_deg3(double a, double b, double c, double d,
               double & x0, double & x1, double & x2)
{
  if (a == 0) {
    // Solve second order sytem
    if (b == 0)	{
      // Solve first order system
      if (c == 0)
    return 0;
    }
    }
    }
    
    static void findCorner(const std::vector<Point2f>& contour, Point2f point, Point2f& corner)
{
    // find the nearest point
    double min_dist = std::numeric_limits<double>::max();
    int min_idx = -1;
    }
    
            /* read the image */
        filename = cv::format('%s%s', filepath.c_str(), imgname );
    
    TEST_F(RoundRobinEnd2endTest, RoundRobin) {
  // Start servers and send one RPC per server.
  const int kNumServers = 3;
  StartServers(kNumServers);
  ResetStub(true /* round_robin */);
  // Send one RPC per backend and make sure they are used in order.
  // Note: This relies on the fact that the subchannels are reported in
  // state READY in the order in which the addresses are specified,
  // which is only true because the backends are all local.
  for (size_t i = 0; i < servers_.size(); ++i) {
    SendRpc(1);
    EXPECT_EQ(1, servers_[i]->service_.request_count()) << 'for backend #' << i;
  }
  // Check LB policy name for the channel.
  EXPECT_EQ('round_robin', channel_->GetLoadBalancingPolicyName());
}
    
     private:
  friend std::shared_ptr<Channel> CreateCustomChannel(
      const grpc::string& target,
      const std::shared_ptr<ChannelCredentials>& creds,
      const ChannelArguments& args);
    
    void grpc_channel_args_destroy(grpc_channel_args* a) {
  size_t i;
  if (!a) return;
  for (i = 0; i < a->num_args; i++) {
    switch (a->args[i].type) {
      case GRPC_ARG_STRING:
        gpr_free(a->args[i].value.string);
        break;
      case GRPC_ARG_INTEGER:
        break;
      case GRPC_ARG_POINTER:
        a->args[i].value.pointer.vtable->destroy(a->args[i].value.pointer.p);
        break;
    }
    gpr_free(a->args[i].key);
  }
  gpr_free(a->args);
  gpr_free(a);
}
    
    void grpc_compression_options_init(grpc_compression_options* opts) {
  memset(opts, 0, sizeof(*opts));
  /* all enabled by default */
  opts->enabled_algorithms_bitset = (1u << GRPC_COMPRESS_ALGORITHMS_COUNT) - 1;
}
    
    /* TODO(dgq): Add the ability to specify parameters to the individual
 * compression algorithms */
grpc_message_compression_algorithm grpc_message_compression_algorithm_for_level(
    grpc_compression_level level, uint32_t accepted_encodings) {
  GRPC_API_TRACE('grpc_message_compression_algorithm_for_level(level=%d)', 1,
                 ((int)level));
  if (level > GRPC_COMPRESS_LEVEL_HIGH) {
    gpr_log(GPR_ERROR, 'Unknown message compression level %d.', (int)level);
    abort();
  }
    }
    
      GPR_ASSERT(GPR_BITCOUNT(grpc_call_test_only_get_encodings_accepted_by_peer(
                 s)) == GRPC_COMPRESS_ALGORITHMS_COUNT);
  GPR_ASSERT(GPR_BITGET(grpc_call_test_only_get_encodings_accepted_by_peer(s),
                        GRPC_COMPRESS_NONE) != 0);
  GPR_ASSERT(GPR_BITGET(grpc_call_test_only_get_encodings_accepted_by_peer(s),
                        GRPC_COMPRESS_MESSAGE_DEFLATE) != 0);
  GPR_ASSERT(GPR_BITGET(grpc_call_test_only_get_encodings_accepted_by_peer(s),
                        GRPC_COMPRESS_MESSAGE_GZIP) != 0);
  GPR_ASSERT(GPR_BITGET(grpc_call_test_only_get_encodings_accepted_by_peer(s),
                        GRPC_COMPRESS_STREAM_GZIP) != 0);
  GPR_ASSERT(GPR_BITCOUNT(grpc_call_test_only_get_encodings_accepted_by_peer(
                 s)) == GRPC_COMPRESS_ALGORITHMS_COUNT);
    
    #ifndef WAKEUPLOCK_H_
#define WAKEUPLOCK_H_
    
    #include 'comm/comm_frequency_limit.h'
#include 'comm/xlogger/xlogger.h'
#include 'comm/time_utils.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
            D3DCompile(vertexShader, strlen(vertexShader), NULL, NULL, NULL, 'main', 'vs_4_0', 0, 0, &g_pVertexShaderBlob, NULL);
        if (g_pVertexShaderBlob == NULL) // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreateVertexShader((DWORD*)g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pVertexShader) != S_OK)
            return false;
    
        // Setup render state: fixed-pipeline, alpha-blending, no face culling, no depth testing
    g_pd3dDevice->SetPixelShader(NULL);
    g_pd3dDevice->SetVertexShader(NULL);
    g_pd3dDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
    g_pd3dDevice->SetRenderState(D3DRS_LIGHTING, false);
    g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, false);
    g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
    g_pd3dDevice->SetRenderState(D3DRS_ALPHATESTENABLE, false);
    g_pd3dDevice->SetRenderState(D3DRS_BLENDOP, D3DBLENDOP_ADD);
    g_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    g_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
    g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, true);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
    g_pd3dDevice->SetTextureStageState(0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
    g_pd3dDevice->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
    g_pd3dDevice->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
    
    
    {    return 0;
}

    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //ImGuiIO& io = ImGui::GetIO();
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        if (dst < index_size && IndexLookup.Data[dst] == (unsigned short)-1 && !overwrite_dst) // 'dst' already exists
        return;
    if (src >= index_size && dst >= index_size) // both 'dst' and 'src' don't exist -> no-op
        return;
    
    
    {
    {        // Start the ASIO io_service run loop
        echo_server.run();
    } catch (websocketpp::exception const & e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << 'other exception' << std::endl;
    }
}

    
    
    {    // slow without string_view!
    std::string toString() {
        return std::string(value, valueLength);
    }
};
    
    #include 'websocket_async_echo_server.hpp'
#include <boost/asio/io_service.hpp>
#include <boost/asio/signal_set.hpp>
#include <iostream>
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    
    {    int hashedToken = 0;
    while (isalnum(*in) || *in == '-' || *in == '_') {
        if (isdigit(*in)) {
            hashedToken = hashedToken * 10 - (*in - '0');
        } else {
            hashedToken += *in;
        }
        in++;
    }
    return hashedToken;
}
    
    
    {    this->extensionOptions |= CLIENT_NO_CONTEXT_TAKEOVER | SERVER_NO_CONTEXT_TAKEOVER;
}
    
        // duplicated code for now!
    template <class F>
    void forEachHttpSocket(const F &cb) {
        uS::Poll *iterator = httpSocketHead;
        iterators.push(iterator);
        while (iterator) {
            uS::Poll *lastIterator = iterator;
            cb((HttpSocket<isServer> *) iterator);
            iterator = iterators.top();
            if (lastIterator == iterator) {
                iterator = ((uS::Socket *) iterator)->next;
                iterators.top() = iterator;
            }
        }
        iterators.pop();
    }
    
        using uS::Node::run;
    using uS::Node::getLoop;
    using Group<SERVER>::onConnection;
    using Group<CLIENT>::onConnection;
    using Group<SERVER>::onTransfer;
    using Group<CLIENT>::onTransfer;
    using Group<SERVER>::onMessage;
    using Group<CLIENT>::onMessage;
    using Group<SERVER>::onDisconnection;
    using Group<CLIENT>::onDisconnection;
    using Group<SERVER>::onPing;
    using Group<CLIENT>::onPing;
    using Group<SERVER>::onPong;
    using Group<CLIENT>::onPong;
    using Group<SERVER>::onError;
    using Group<CLIENT>::onError;
    using Group<SERVER>::onHttpRequest;
    using Group<SERVER>::onHttpData;
    using Group<SERVER>::onHttpConnection;
    using Group<SERVER>::onHttpDisconnection;
    using Group<SERVER>::onHttpUpgrade;
    using Group<SERVER>::onCancelledHttpRequest;
    
    
    {                listenSocket->timer = new Timer(listenSocket->nodeData->loop);
                listenSocket->timer->setData(listenSocket);
                listenSocket->timer->start(accept_timer_cb<A>, 1000, 1000);
            }
            return;
        } else if (TIMER) {
            listenSocket->timer->stop();
            listenSocket->timer->close();
            listenSocket->timer = nullptr;
    
    #ifdef _WIN32
#define NOMINMAX
#include <WinSock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib, 'ws2_32.lib')
#define SHUT_WR SD_SEND
#ifdef __MINGW32__
// Windows has always been tied to LE
#define htobe64(x) __builtin_bswap64(x)
#define be64toh(x) __builtin_bswap64(x)
#else
#define __thread __declspec(thread)
#define htobe64(x) htonll(x)
#define be64toh(x) ntohll(x)
#define pthread_t DWORD
#define pthread_self GetCurrentThreadId
#endif
#define WIN32_EXPORT __declspec(dllexport)
    
        SSL *ssl;
    void *user = nullptr;
    NodeData *nodeData;