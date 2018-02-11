
        
        #include <memory>
    
    /* Starts the stream by sending request to |url| using |method| and |headers|.
 * If |end_of_stream| is true, then no data is expected to be written. The
 * |method| is HTTP verb, with PUT having a special meaning to mark idempotent
 * request, which could use QUIC 0-RTT.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_start(bidirectional_stream* stream,
                               const char* url,
                               int priority,
                               const char* method,
                               const bidirectional_stream_header_array* headers,
                               bool end_of_stream);
    
        EchoRequest request;
    while (server_return_after_n_reads--) {
      EXPECT_TRUE(reader->Read(&request));
    }
    
    static int is_compressed(grpc_byte_buffer* buffer) {
  switch (buffer->type) {
    case GRPC_BB_RAW:
      if (buffer->data.raw.compression == GRPC_COMPRESS_NONE) {
        return 0 /* GPR_FALSE */;
      }
      break;
  }
  return 1 /* GPR_TRUE */;
}
    
      // Shut down everything properly.
  gpr_log(GPR_INFO, 'Shutting down.');
  {
    std::lock_guard<std::mutex> lock(mu);
    shutting_down = true;
  }
  server->Shutdown();
  cq->Shutdown();
  server->Wait();
    
    gpr_once g_once_init_add_prod_ssl_provider = GPR_ONCE_INIT;
// Register ssl with non-test roots type to the credentials provider.
void AddProdSslType() {
  testing::GetCredentialsProvider()->AddSecureType(
      kProdTlsCredentialsType, std::unique_ptr<testing::CredentialTypeProvider>(
                                   new SslCredentialProvider));
}
    
    namespace grpc {
namespace testing {
    }
    }
    
      bool Finished() {
    return current_ >= db_.size();
  }
    
        ImGuiIO& io = ImGui::GetIO();
    io.KeyMap[ImGuiKey_Tab] = ALLEGRO_KEY_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = ALLEGRO_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = ALLEGRO_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = ALLEGRO_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow] = ALLEGRO_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = ALLEGRO_KEY_PGUP;
    io.KeyMap[ImGuiKey_PageDown] = ALLEGRO_KEY_PGDN;
    io.KeyMap[ImGuiKey_Home] = ALLEGRO_KEY_HOME;
    io.KeyMap[ImGuiKey_End] = ALLEGRO_KEY_END;
    io.KeyMap[ImGuiKey_Insert] = ALLEGRO_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete] = ALLEGRO_KEY_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = ALLEGRO_KEY_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = ALLEGRO_KEY_SPACE;
    io.KeyMap[ImGuiKey_Enter] = ALLEGRO_KEY_ENTER;
    io.KeyMap[ImGuiKey_Escape] = ALLEGRO_KEY_ESCAPE;
    io.KeyMap[ImGuiKey_A] = ALLEGRO_KEY_A;
    io.KeyMap[ImGuiKey_C] = ALLEGRO_KEY_C;
    io.KeyMap[ImGuiKey_V] = ALLEGRO_KEY_V;
    io.KeyMap[ImGuiKey_X] = ALLEGRO_KEY_X;
    io.KeyMap[ImGuiKey_Y] = ALLEGRO_KEY_Y;
    io.KeyMap[ImGuiKey_Z] = ALLEGRO_KEY_Z;
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    #include 'imgui.h'
#include 'imgui_impl_sdl_gl2.h'
#include <stdio.h>
#include <SDL.h>
#include <SDL_opengl.h>
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL3_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL3_NewFrame(window);
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