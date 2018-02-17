#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/db.hpp'
#include 'caffe/util/format.hpp'
    
    #ifdef USE_LEVELDB
#include 'leveldb/db.h'
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    #endif  // CAFFE_ELU_LAYER_HPP_

    
    // Subclass of TestServiceImpl that increments a request counter for
// every call to the Echo RPC.
class MyTestServiceImpl : public TestServiceImpl {
 public:
  MyTestServiceImpl() : request_count_(0) {}
    }
    
      const T& operator[](size_t offset) const {
    assert(offset < size_);
    if (offset < N) {
      return *reinterpret_cast<const T*>(inline_ + offset);
    } else {
      return dynamic_[offset - N];
    }
  }
    
    int main(int argc, char** argv) {
  grpc_test_init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    
    { private:
  static void CheckDone(grpc::Status s, SimpleResponse* response,
                        HistogramEntry* entry) {
    entry->set_status(s.error_code());
  }
  static std::unique_ptr<grpc::ClientAsyncResponseReader<SimpleResponse>>
  PrepareReq(BenchmarkService::Stub* stub, grpc::ClientContext* ctx,
             const SimpleRequest& request, CompletionQueue* cq) {
    return stub->PrepareAsyncUnaryCall(ctx, request, cq);
  };
  static ClientRpcContext* SetupCtx(BenchmarkService::Stub* stub,
                                    std::function<gpr_timespec()> next_issue,
                                    const SimpleRequest& req) {
    return new ClientRpcContextUnaryImpl<SimpleRequest, SimpleResponse>(
        stub, req, next_issue, AsyncUnaryClient::PrepareReq,
        AsyncUnaryClient::CheckDone);
  }
};
    
    grpc_slice grpc_byte_buffer_reader_readall(grpc_byte_buffer_reader* reader) {
  grpc_slice in_slice;
  size_t bytes_read = 0;
  const size_t input_size = grpc_byte_buffer_length(reader->buffer_out);
  grpc_slice out_slice = GRPC_SLICE_MALLOC(input_size);
  uint8_t* const outbuf = GRPC_SLICE_START_PTR(out_slice); /* just an alias */
    }
    
    
    {
    {      // Send a simple response after a small delay that would ensure the client
      // deadline is exceeded.
      gpr_log(GPR_INFO, 'Got request %d', n);
      testing::EchoResponse response;
      response.set_message('foobar');
      // A bit of sleep to make sure the deadline elapses.
      gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_MONOTONIC),
                                   gpr_time_from_millis(50, GPR_TIMESPAN)));
      {
        std::lock_guard<std::mutex> lock(mu);
        if (shutting_down) {
          gpr_log(GPR_INFO,
                  'shut down while processing call, not calling Finish()');
          // Continue flushing the CQ.
          continue;
        }
        gpr_log(GPR_INFO, 'Finishing request %d', n);
        responder.Finish(response, grpc::Status::OK, (void*)2);
        if (!cq->Next(&tag, &ok)) {
          break;
        }
        EXPECT_EQ((void*)2, tag);
      }
    }
  });
    
    DEFINE_int32(driver_port, 0, 'Port for communication with driver');
DEFINE_int32(server_port, 0, 'Port for operation as a server');
DEFINE_string(credential_type, grpc::testing::kInsecureCredentialsType,
              'Credential type for communication with driver');
    
    
    {  return 0;
}

    
      Status ListFeatures(ServerContext* context,
                      const routeguide::Rectangle* rectangle,
                      ServerWriter<Feature>* writer) override {
    auto lo = rectangle->lo();
    auto hi = rectangle->hi();
    long left = (std::min)(lo.longitude(), hi.longitude());
    long right = (std::max)(lo.longitude(), hi.longitude());
    long top = (std::max)(lo.latitude(), hi.latitude());
    long bottom = (std::min)(lo.latitude(), hi.latitude());
    for (const Feature& f : feature_list_) {
      if (f.location().longitude() >= left &&
          f.location().longitude() <= right &&
          f.location().latitude() >= bottom &&
          f.location().latitude() <= top) {
        writer->Write(f);
      }
    }
    return Status::OK;
  }
    
    #ifndef GRPC_IMPL_CODEGEN_SYNC_POSIX_H
#define GRPC_IMPL_CODEGEN_SYNC_POSIX_H
    
    TableCache::TableCache(const std::string& dbname,
                       const Options* options,
                       int entries)
    : env_(options->env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
    
    {}  // namespace leveldb
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
    
#endif  // STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_

    
    static Slice TrimSpace(Slice s) {
  int start = 0;
  while (start < s.size() && isspace(s[start])) {
    start++;
  }
  int limit = s.size();
  while (limit > start && isspace(s[limit-1])) {
    limit--;
  }
  return Slice(s.data() + start, limit - start);
}
    
     public:
  Iter(const Comparator* comparator,
       const char* data,
       uint32_t restarts,
       uint32_t num_restarts)
      : comparator_(comparator),
        data_(data),
        restarts_(restarts),
        num_restarts_(num_restarts),
        current_(restarts_),
        restart_index_(num_restarts_) {
    assert(num_restarts_ > 0);
  }
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
      void EncodeTo(std::string* dst) const;
  Status DecodeFrom(Slice* input);
    
    namespace leveldb {
    }
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief Define mt19937 as default type Random Engine.
 */
typedef std::mt19937 RandomEngine;
    }
    }
    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher.reset(TreeUpdater::Create('sync'));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
    syncher->Init(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    for (size_t i = 0; i < trees.size(); ++i) {
      this->DoPrune(*trees[i]);
    }
    param.learning_rate = lr;
    syncher->Update(gpair, p_fmat, trees);
  }
    }
    
      float float2[2] = {1.0f, 2.0f};
  EXPECT_EQ(info.GetWeight(1), 1.0f)
    << 'When no weights are given, was expecting default value 1';
  info.SetInfo('weight', float2, xgboost::kFloat32, 2);
  EXPECT_EQ(info.GetWeight(1), 2.0f);
    
      xgboost::tree::SplitEntry se3;
  se3.Update(2, 101, 0, false);
  xgboost::tree::SplitEntry::Reduce(se2, se3);
  EXPECT_EQ(se2.split_index(), 101);
  EXPECT_FALSE(se2.default_left());
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
        bool        WantCaptureMouse;           // When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application. This is set by ImGui when it wants to use your mouse (e.g. unclicked mouse is hovering a window, or a widget is active). 
    bool        WantCaptureKeyboard;        // When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application. This is set by ImGui when it wants to use your keyboard inputs.
    bool        WantTextInput;              // Mobile/console: when io.WantTextInput is true, you may display an on-screen keyboard. This is set by ImGui when it wants textual keyboard input to happen (e.g. when a InputText widget is active).
    bool        WantMoveMouse;              // MousePos has been altered, back-end should reposition mouse on next frame. Set only when ImGuiNavFlags_MoveMouse flag is enabled in io.NavFlags.
    bool        NavActive;                  // Directional navigation is currently allowed (will handle ImGuiKey_NavXXX events) = a window is focused and it doesn't use the ImGuiWindowFlags_NoNavInputs flag.
    bool        NavVisible;                 // Directional navigation is visible and allowed (will handle ImGuiKey_NavXXX events).
    float       Framerate;                  // Application framerate estimation, in frame per second. Solely for convenience. Rolling average estimation based on IO.DeltaTime over 120 frames
    int         MetricsRenderVertices;      // Vertices output during last call to Render()
    int         MetricsRenderIndices;       // Indices output during last call to Render() = number of triangles * 3
    int         MetricsActiveWindows;       // Number of visible root windows (exclude child windows)
    ImVec2      MouseDelta;                 // Mouse delta. Note that this is zero if either current or previous position are invalid (-FLT_MAX,-FLT_MAX), so a disappearing/reappearing mouse won't have a huge delta.
    
        glGenVertexArrays(1, &g_VaoHandle);
    glBindVertexArray(g_VaoHandle);
    glBindBuffer(GL_ARRAY_BUFFER, g_VboHandle);
    glEnableVertexAttribArray(g_AttribLocationPosition);
    glEnableVertexAttribArray(g_AttribLocationUV);
    glEnableVertexAttribArray(g_AttribLocationColor);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data)
{
    // Handle cases of screen coordinates != from framebuffer coordinates (e.g. retina displays)
    ImGuiIO& io = ImGui::GetIO();
    draw_data->ScaleClipRects(io.DisplayFramebufferScale);
    }
    
        // Cleanup
    ImGui_ImplGlfwGL2_Shutdown();
    ImGui::DestroyContext();
    glfwTerminate();