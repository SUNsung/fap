
        
        inline bool DBIter::ParseKey(ParsedInternalKey* ikey) {
  Slice k = iter_->key();
  ssize_t n = k.size() + iter_->value().size();
  bytes_counter_ -= n;
  while (bytes_counter_ < 0) {
    bytes_counter_ += RandomPeriod();
    db_->RecordReadSample(k);
  }
  if (!ParseInternalKey(k, ikey)) {
    status_ = Status::Corruption('corrupted internal key in DBIter');
    return false;
  } else {
    return true;
  }
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
    
    {    status = sqlite3_finalize(read_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(begin_trans_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(end_trans_stmt);
    ErrorCheck(status);
  }
    
    
    {    // Write to database
    for (int i = 0; i < num_entries; i++)
    {
      const int k = (order == SEQUENTIAL) ? i : (rand_.Next() % num_entries);
      char key[100];
      snprintf(key, sizeof(key), '%016d', k);
      bytes_ += value_size + strlen(key);
      std::string cpp_key = key;
      if (!db_->set(cpp_key, gen_.Generate(value_size).ToString())) {
        fprintf(stderr, 'set error: %s\n', db_->error().name());
      }
      FinishedSingleOp();
    }
  }
    
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
    
    #define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const MyVec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }     \
        operator MyVec4() const { return MyVec4(x,y,z,w); }
*/
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
        // Hide OS mouse cursor if ImGui is drawing it
    if (io.MouseDrawCursor)
    {
        al_set_mouse_cursor(g_Display, g_MouseCursorInvisible);
    }
    else
    {
        ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT;
        switch (ImGui::GetMouseCursor())
        {
        case ImGuiMouseCursor_TextInput:    cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_EDIT; break;
        case ImGuiMouseCursor_Move:         cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_MOVE; break;
        case ImGuiMouseCursor_ResizeNS:     cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_N; break;
        case ImGuiMouseCursor_ResizeEW:     cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_E; break;
        case ImGuiMouseCursor_ResizeNESW:   cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NE; break;
        case ImGuiMouseCursor_ResizeNWSE:   cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NW; break;
        }
        al_set_system_mouse_cursor(g_Display, cursor_id);
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    int main(int, char**)
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    #include 'imgui.h'
#include 'imgui_impl_glfw_gl2.h'
#include <stdio.h>
#include <GLFW/glfw3.h>
    
        g_ShaderHandle = glCreateProgram();
    g_VertHandle = glCreateShader(GL_VERTEX_SHADER);
    g_FragHandle = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(g_VertHandle, 1, &vertex_shader, 0);
    glShaderSource(g_FragHandle, 1, &fragment_shader, 0);
    glCompileShader(g_VertHandle);
    glCompileShader(g_FragHandle);
    glAttachShader(g_ShaderHandle, g_VertHandle);
    glAttachShader(g_ShaderHandle, g_FragHandle);
    glLinkProgram(g_ShaderHandle);
    
        VkDynamicState dynamic_states[2] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo dynamic_state = {};
    dynamic_state.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamic_state.dynamicStateCount = 2;
    dynamic_state.pDynamicStates = dynamic_states;
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
            float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
            float2 pos : POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
            PS_INPUT output;\
            output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
            output.col = input.col;\
            output.uv  = input.uv;\
            return output;\
            }';
    }
    
      // ...Code to store on disk or send over a network goes here...
    
    	// Server registration.
	printer->Print(vars, 'func Register$Service$Server(s *$grpc$.Server, srv $Service$Server) {\n');
	printer->Indent();
	printer->Print(vars, 's.RegisterService(&$ServiceDesc$, srv)\n');
	printer->Outdent();
	printer->Print('}\n\n');
    
    struct TableInNestedNSBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo(int32_t foo) {
    fbb_.AddElement<int32_t>(TableInNestedNS::VT_FOO, foo, 0);
  }
  explicit TableInNestedNSBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableInNestedNSBuilder &operator=(const TableInNestedNSBuilder &);
  flatbuffers::Offset<TableInNestedNS> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TableInNestedNS>(end);
    return o;
  }
};
    
    inline flatbuffers::Offset<Monster> CreateMonsterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vec3 *pos = 0,
    int16_t mana = 150,
    int16_t hp = 100,
    const char *name = nullptr,
    const std::vector<uint8_t> *inventory = nullptr,
    Color color = Color_Blue,
    const std::vector<flatbuffers::Offset<Weapon>> *weapons = nullptr,
    Equipment equipped_type = Equipment_NONE,
    flatbuffers::Offset<void> equipped = 0) {
  return MyGame::Sample::CreateMonster(
      _fbb,
      pos,
      mana,
      hp,
      name ? _fbb.CreateString(name) : 0,
      inventory ? _fbb.CreateVector<uint8_t>(*inventory) : 0,
      color,
      weapons ? _fbb.CreateVector<flatbuffers::Offset<Weapon>>(*weapons) : 0,
      equipped_type,
      equipped);
}
    
    MonsterStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_Store_(MonsterStorage_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retrieve_(MonsterStorage_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}
  
::grpc::Status MonsterStorage::Stub::Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Store_, context, request, response);
}
    
      // Start the server. Lock to change the variable we're changing.
  wait_for_server.lock();
  server_instance = builder.BuildAndStart().release();
  wait_for_server.unlock();
  server_instance_cv.notify_one();
    
      static std::string LastNamespacePart(const Namespace &ns);
    
    struct Queue {
    Message *head = nullptr, *tail = nullptr;
    void pop()
    {
        Message *nextMessage;
        if ((nextMessage = head->nextMessage)) {
            delete [] (char *) head;
            head = nextMessage;
        } else {
            delete [] (char *) head;
            head = tail = nullptr;
        }
    }
    }
    
        if (connections % 1000 == 0 || connections < 1000) {
        cout << 'Connections: ' << connections << endl;
    }
    
    int connections, remainingBytes;
vector<uv_stream_t *> sockets;
sockaddr_in addr;
    
                    if (stream->data) {
                    // If we now received all bytes we expect from last echoing, echo again
                    remainingBytes -= nread;
                    if (!remainingBytes) {
                        cout << 'Echo performance: ' << double(sent) / (1e-3 * duration_cast<microseconds>(high_resolution_clock::now() - startPoint).count()) << ' echoes/ms' << endl;
                        echo();
                    }
                } else {
                    // Receive Socket.IO connection messages and ignore them
                    char message[1024];
                    int fd;
                    uv_fileno((uv_handle_t *) stream, &fd);
                    for (int r = nread; r < 221; ) {
                        r += std::max<int>(0, recv(fd, message, sizeof(message), 0));
                    }
    }
    
    /*
 * Decrements the reference count of passed PreparedMessage. On zero references
 * the memory will be deleted.
 *
 * Hints: Used together with prepareMessage, prepareMessageBatch and similar calls.
 *
 * Warning: Will modify passed PrepareMessage and is thus not thread safe by itself.
 *
 */
template <bool isServer>
void WebSocket<isServer>::finalizeMessage(typename WebSocket<isServer>::PreparedMessage *preparedMessage) {
    if (!--preparedMessage->references) {
        delete [] preparedMessage->buffer;
        delete preparedMessage;
    }
}
    
        bool listen(int port, uS::TLS::Context sslContext = nullptr, int options = 0, Group<SERVER> *eh = nullptr);
    bool listen(const char *host, int port, uS::TLS::Context sslContext = nullptr, int options = 0, Group<SERVER> *eh = nullptr);
    void connect(std::string uri, void *user = nullptr, std::map<std::string, std::string> extraHeaders = {}, int timeoutMs = 5000, Group<CLIENT> *eh = nullptr);
    void upgrade(uv_os_sock_t fd, const char *secKey, SSL *ssl, const char *extensions, size_t extensionsLength, const char *subprotocol, size_t subprotocolLength, Group<SERVER> *serverGroup = nullptr);
    
    
    {    nodeData->changePollQueue.clear();
    nodeData->transferQueue.clear();
    nodeData->asyncMutex->unlock();
}
    
        // Not thread safe
    void terminate();
    void close(int code = 1000, char *message = nullptr, size_t length = 0);
    void startAutoPing(int intervalMs, std::string userMessage = '');
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
      // Is the parsed value in the range of an Int32?
  const int32_t result = static_cast<int32_t>(long_value);
  if (long_value == std::numeric_limits<long>::max() ||
      long_value == std::numeric_limits<long>::min() ||
      // The parsed value overflows as a long.  (strtol() returns
      // LONG_MAX or LONG_MIN when the input overflows.)
      result != long_value
      // The parsed value overflows as an Int32.
      ) {
    std::cerr << src_text << ' is expected to be a 32-bit integer, '
              << 'but actually has value \'' << str << '\', '
              << 'which overflows.\n';
    return false;
  }
    
    // Parses a string for an Int32 flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseInt32Flag(const char* str, const char* flag, int32_t* value);
    
    namespace {
std::vector<std::string> elements = {
    'name',           'iterations',       'real_time',        'cpu_time',
    'time_unit',      'bytes_per_second', 'items_per_second', 'label',
    'error_occurred', 'error_message'};
}  // namespace
    
    #include 'check.h'
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }