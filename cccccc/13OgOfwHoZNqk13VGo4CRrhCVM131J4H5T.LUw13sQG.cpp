
        
        template <typename Dtype>
void SGDSolver<Dtype>::Regularize(int param_id) {
  const vector<Blob<Dtype>*>& net_params = this->net_->learnable_params();
  const vector<float>& net_params_weight_decay =
      this->net_->params_weight_decay();
  Dtype weight_decay = this->param_.weight_decay();
  string regularization_type = this->param_.regularization_type();
  Dtype local_decay = weight_decay * net_params_weight_decay[param_id];
  switch (Caffe::mode()) {
  case Caffe::CPU: {
    if (local_decay) {
      if (regularization_type == 'L2') {
        // add weight decay
        caffe_axpy(net_params[param_id]->count(),
            local_decay,
            net_params[param_id]->cpu_data(),
            net_params[param_id]->mutable_cpu_diff());
      } else if (regularization_type == 'L1') {
        caffe_cpu_sign(net_params[param_id]->count(),
            net_params[param_id]->cpu_data(),
            temp_[param_id]->mutable_cpu_data());
        caffe_axpy(net_params[param_id]->count(),
            local_decay,
            temp_[param_id]->cpu_data(),
            net_params[param_id]->mutable_cpu_diff());
      } else {
        LOG(FATAL) << 'Unknown regularization type: ' << regularization_type;
      }
    }
    break;
  }
  case Caffe::GPU: {
#ifndef CPU_ONLY
    if (local_decay) {
      if (regularization_type == 'L2') {
        // add weight decay
        caffe_gpu_axpy(net_params[param_id]->count(),
            local_decay,
            net_params[param_id]->gpu_data(),
            net_params[param_id]->mutable_gpu_diff());
      } else if (regularization_type == 'L1') {
        caffe_gpu_sign(net_params[param_id]->count(),
            net_params[param_id]->gpu_data(),
            temp_[param_id]->mutable_gpu_data());
        caffe_gpu_axpy(net_params[param_id]->count(),
            local_decay,
            temp_[param_id]->gpu_data(),
            net_params[param_id]->mutable_gpu_diff());
      } else {
        LOG(FATAL) << 'Unknown regularization type: ' << regularization_type;
      }
    }
#else
    NO_GPU;
#endif
    break;
  }
  default:
    LOG(FATAL) << 'Unknown caffe mode: ' << Caffe::mode();
  }
}
    
      // check that we were passed appropriately-sized contiguous memory
  PyArrayObject* data_arr =
      reinterpret_cast<PyArrayObject*>(data_obj.ptr());
  PyArrayObject* labels_arr =
      reinterpret_cast<PyArrayObject*>(labels_obj.ptr());
  CheckContiguousArray(data_arr, 'data array', md_layer->channels(),
      md_layer->height(), md_layer->width());
  CheckContiguousArray(labels_arr, 'labels array', 1, 1, 1);
  if (PyArray_DIMS(data_arr)[0] != PyArray_DIMS(labels_arr)[0]) {
    throw std::runtime_error('data and labels must have the same first'
        ' dimension');
  }
  if (PyArray_DIMS(data_arr)[0] % md_layer->batch_size() != 0) {
    throw std::runtime_error('first dimensions of input arrays must be a'
        ' multiple of batch size');
  }
    
    namespace caffe {
    }
    
    // A singleton class to hold common caffe stuff, such as the handler that
// caffe is going to use for cublas, curand, etc.
class Caffe {
 public:
  ~Caffe();
    }
    
            if (data->magic == reql_btree_version_magic_t<cluster_version_t::v2_1>::value) {
            *version_out = cluster_version_t::v2_1;
        } else if (data->magic == reql_btree_version_magic_t<cluster_version_t::v2_0>::value) {
            *version_out = cluster_version_t::v2_0;
        } else {
            crash('Unrecognized reql_btree_superblock_t::magic found.');
        }
    
        filepath_file_opener_t file_opener(temp_file.name(), &io_backender);
    log_serializer_t::create(
        &file_opener,
        log_serializer_t::static_config_t());
    
        filepath_file_opener_t file_opener(temp_file.name(), &io_backender);
    log_serializer_t::create(
        &file_opener,
        log_serializer_t::static_config_t());
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
    // Due to C++ preprocessor weirdness, we need double indirection to
// concatenate two tokens when one of them is __LINE__.  Writing
//
//   foo ## __LINE__
//
// will result in the token foo__LINE__, instead of foo followed by
// the current line number.  For more details, see
// http://www.parashift.com/c++-faq-lite/misc-technical-issues.html#faq-39.6
#define GTEST_CONCAT_TOKEN_(foo, bar) GTEST_CONCAT_TOKEN_IMPL_(foo, bar)
#define GTEST_CONCAT_TOKEN_IMPL_(foo, bar) foo ## bar
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31>
struct Templates31 {
  typedef TemplateSel<T1> Head;
  typedef Templates30<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31> Tail;
};
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_sdl_opengl3/ folder**
// See imgui_impl_sdl.cpp for details.
    
        // Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
    bool err = gl3wInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
    bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
    bool err = gladLoadGL() == 0;
#else
    bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
    if (err)
    {
        fprintf(stderr, 'Failed to initialize OpenGL loader!\n');
        return 1;
    }
    
    
    {        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
#include 'imgui_impl_win32.h'
#include <d3d9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
    #pragma once
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    struct ID3D10Device;
    
    // Set default OpenGL3 loader to be gl3w
#if !defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_CUSTOM)
#define IMGUI_IMPL_OPENGL_LOADER_GL3W
#endif
    
        // output changed array
    std::cout << array << '\n';
    
    
    { private:
  BlobCompactionContext context_;
  const uint64_t current_time_;
  Statistics* statistics_;
  // It is safe to not using std::atomic since the compaction filter, created
  // from a compaction filter factroy, will not be called from multiple threads.
  mutable uint64_t expired_count_ = 0;
  mutable uint64_t expired_size_ = 0;
  mutable uint64_t evicted_count_ = 0;
  mutable uint64_t evicted_size_ = 0;
};
    
      Status GetChildren(const std::string& dir,
                     std::vector<std::string>* result) override {
    PERF_TIMER_GUARD(env_get_children_nanos);
    return EnvWrapper::GetChildren(dir, result);
  }
    
      bool PartialMergeMulti(const Slice& /*key*/,
                         const std::deque<Slice>& operand_list,
                         std::string* new_value,
                         Logger* /*logger*/) const override {
    Slice max;
    for (const auto& operand : operand_list) {
      if (max.compare(operand) < 0) {
        max = operand;
      }
    }
    }
    
    namespace rocksdb {
    }
    
      // Set a snapshot at start of transaction by setting set_snapshot=true
  txn_options.set_snapshot = true;
  txn = txn_db->BeginTransaction(write_options, txn_options);
    
      virtual ~PersistentCache() {}
    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
    class Context
{
public:
    Context(size_t stack_size, coroutine_func_t fn, void* private_data);
    ~Context();
    bool swap_in();
    bool swap_out();
#if !defined(SW_NO_USE_ASM_CONTEXT) && defined(SW_LOG_TRACE_OPEN)
    ssize_t get_stack_usage();
#endif
    inline bool is_end()
    {
        return end_;
    }
    static void context_func(void* arg);
    }
    
    
    {    //1
    ret = p.read(&p, buf, sizeof(buf));
    if (ret < 0)
    {
        swSysWarn('read() failed.');
    }
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world1', buf), 0);
    //2
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world2', buf), 0);
    //3
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world3', buf), 0);
}
    
            make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
            int i = 1;
            bool ret;
    }
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}
#endif
    
    class Exception
{
public:
    int code;
    const char *msg;
    }
    
        public:
        ExampleQt(const char * value, QObject * parent = 0)
            : QObject(parent), m_value(value) {}
    
                    /* try a wrapper */
                stream = php_stream_open_wrapper(Z_STRVAL_P(zfile), Z_STRVAL_P(zmode), REPORT_ERRORS|STREAM_WILL_CAST, NULL);