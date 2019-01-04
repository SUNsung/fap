
        
        #include 'atom/browser/render_process_preferences.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
      // download::DownloadItem::Observer:
  void OnDownloadUpdated(download::DownloadItem* item) override;
    
    
    {  // We need to handle SIGTERM, because that is how many POSIX-based distros ask
  // processes to quit gracefully at shutdown time.
  struct sigaction action;
  memset(&action, 0, sizeof(action));
  action.sa_handler = SIGTERMHandler;
  CHECK_EQ(sigaction(SIGTERM, &action, nullptr), 0);
  // Also handle SIGINT - when the user terminates the browser via Ctrl+C. If
  // the browser process is being debugged, GDB will catch the SIGINT first.
  action.sa_handler = SIGINTHandler;
  CHECK_EQ(sigaction(SIGINT, &action, nullptr), 0);
  // And SIGHUP, for when the terminal disappears. On shutdown, many Linux
  // distros send SIGHUP, SIGTERM, and then SIGKILL.
  action.sa_handler = SIGHUPHandler;
  CHECK_EQ(sigaction(SIGHUP, &action, nullptr), 0);
}
    
    #ifndef ATOM_BROWSER_ATOM_JAVASCRIPT_DIALOG_MANAGER_H_
#define ATOM_BROWSER_ATOM_JAVASCRIPT_DIALOG_MANAGER_H_
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    #include <grpc/support/port_platform.h>
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
      ::opencensus::trace::SpanContext ToSpanContext() const {
    return ::opencensus::trace::SpanContext(
        ::opencensus::trace::TraceId(trace_id),
        ::opencensus::trace::SpanId(span_id),
        ::opencensus::trace::TraceOptions(trace_options));
  }
    
    const ViewDescriptor& ServerReceivedMessagesPerRpcCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/server/sent_messages_per_rpc/cumulative')
          .set_measure(kRpcServerReceivedMessagesPerRpcMeasureName)
          .set_aggregation(CountDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    #include 'src/core/lib/gprpp/thd.h'
#include 'src/cpp/server/thread_pool_interface.h'
    
    #endif  // GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H

    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  FILE* fp;
  fp = fopen('/proc/stat', 'r');
  uint64_t user, nice, system, idle;
  fscanf(fp, 'cpu %lu %lu %lu %lu', &user, &nice, &system, &idle);
  fclose(fp);
  busy = user + nice + system;
  total = busy + idle;
  return std::make_pair(busy, total);
}
    
    
    {
    {}}
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
      // only accept paths with the glob:// prefix
  if (strncmp(path_str, prefix, strlen(prefix)) != 0) {
    return nullptr;
  }
    
    
    {protected:
  bool closeImpl();
};
    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows during development. Please read the comments in imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Create custom vertex declaration.
    // Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats.
    // We still use a custom declaration to use 'ALLEGRO_PRIM_TEX_COORD' instead of 'ALLEGRO_PRIM_TEX_COORD_PIXEL' else we can't do a reliable conversion.
    ALLEGRO_VERTEX_ELEMENT elems[] =
    {
        { ALLEGRO_PRIM_POSITION, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, pos) },
        { ALLEGRO_PRIM_TEX_COORD, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, uv) },
        { ALLEGRO_PRIM_COLOR_ATTR, 0, IM_OFFSETOF(ImDrawVertAllegro, col) },
        { 0, 0, 0 }
    };
    g_VertexDecl = al_create_vertex_decl(elems, sizeof(ImDrawVertAllegro));
    
    // Include OpenGL header (without an OpenGL loader) requires a bit of fiddling
#if defined(_WIN32) && !defined(APIENTRY)
#define APIENTRY __stdcall                  // It is customary to use APIENTRY for OpenGL function pointer declarations on all platforms.  Additionally, the Windows OpenGL header needs APIENTRY.
#endif
#if defined(_WIN32) && !defined(WINGDIAPI)
#define WINGDIAPI __declspec(dllimport)     // Some Windows OpenGL headers need this
#endif
#if defined(__APPLE__)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();