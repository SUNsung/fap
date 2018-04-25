
        
        std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    static const int WARMUP = 5;
static const int BENCHMARK = 5;
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
      // gRPC Python
  grpc_python_generator::GeneratorConfiguration grpc_py_config;
  grpc_python_generator::PythonGrpcGenerator grpc_py_generator(grpc_py_config);
  cli.RegisterGenerator('--grpc_python_out', &grpc_py_generator,
                        'Generate Python source file.');
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    IMGUI_API bool        ImGui_ImplGlfwGL3_Init(GLFWwindow* window, bool install_callbacks, const char* glsl_version = NULL);
IMGUI_API void        ImGui_ImplGlfwGL3_Shutdown();
IMGUI_API void        ImGui_ImplGlfwGL3_NewFrame();
IMGUI_API void        ImGui_ImplGlfwGL3_RenderDrawData(ImDrawData* draw_data);
    
        // Setup time step (we don't use SDL_GetTicks() because it is using millisecond resolution)
    static Uint64 frequency = SDL_GetPerformanceFrequency();
    Uint64 current_time = SDL_GetPerformanceCounter();
    io.DeltaTime = g_Time > 0 ? (float)((double)(current_time - g_Time) / frequency) : (float)(1.0f / 60.0f);
    g_Time = current_time;
    
        ImGui_ImplDX10_Shutdown();
    ImGui::DestroyContext();
    
      // REQUIRES: 'SkipWithError(...)' has not been called previously by the
  //            current thread.
  // Report the benchmark as resulting in an error with the specified 'msg'.
  // After this call the user may explicitly 'return' from the benchmark.
  //
  // If the ranged-for style of benchmark loop is used, the user must explicitly
  // break from the loop, otherwise all future iterations will be run.
  // If the 'KeepRunning()' loop is used the current thread will automatically
  // exit the loop at the end of the current iteration.
  //
  // For threaded benchmarks only the current thread stops executing and future
  // calls to `KeepRunning()` will block until all threads have completed
  // the `KeepRunning()` loop. If multiple threads report an error only the
  // first error message is used.
  //
  // NOTE: Calling 'SkipWithError(...)' does not cause the benchmark to exit
  // the current scope immediately. If the function is called from within
  // the 'KeepRunning()' loop the current iteration will finish. It is the users
  // responsibility to exit the scope as needed.
  void SkipWithError(const char* msg);
    
    DEFINE_string(benchmark_filter, '.',
              'A regular expression that specifies the set of benchmarks '
              'to execute.  If this flag is empty, no benchmarks are run.  '
              'If this flag is the string \'all\', all benchmarks linked '
              'into the process are run.');
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt,
                 va_list args);
void ColorPrintf(std::ostream& out, LogColor color, const char* fmt, ...);
    
    // Function to return an string for the calculated complexity
std::string GetBigOString(BigO complexity);
    
    inline LogType& GetLogInstanceForLevel(int level) {
  if (level <= LogLevel()) {
    return GetErrorLogInstance();
  }
  return GetNullLogInstance();
}
    
      // Compile a regular expression matcher from spec.  Returns true on success.
  //
  // On failure (and if error is not nullptr), error is populated with a human
  // readable error message if an error occurs.
  bool Init(const std::string& spec, std::string* error);
    
    #include <cstdlib>
    
    #include 'sleep.h'