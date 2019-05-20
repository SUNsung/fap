
        
        bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
    #include 'errcode.h'
#include 'genericvector.h'
    
    
    {}  // namespace grpc
    
    Status ProtoServerReflection::ServerReflectionInfo(
    ServerContext* context,
    ServerReaderWriter<ServerReflectionResponse, ServerReflectionRequest>*
        stream) {
  ServerReflectionRequest request;
  ServerReflectionResponse response;
  Status status;
  while (stream->Read(&request)) {
    switch (request.message_request_case()) {
      case ServerReflectionRequest::MessageRequestCase::kFileByFilename:
        status = GetFileByName(context, request.file_by_filename(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::kFileContainingSymbol:
        status = GetFileContainingSymbol(
            context, request.file_containing_symbol(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kFileContainingExtension:
        status = GetFileContainingExtension(
            context, &request.file_containing_extension(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kAllExtensionNumbersOfType:
        status = GetAllExtensionNumbers(
            context, request.all_extension_numbers_of_type(),
            response.mutable_all_extension_numbers_response());
        break;
      case ServerReflectionRequest::MessageRequestCase::kListServices:
        status =
            ListService(context, response.mutable_list_services_response());
        break;
      default:
        status = Status(StatusCode::UNIMPLEMENTED, '');
    }
    }
    }
    
    CreateThreadPoolFunc g_ctp_impl = CreateDefaultThreadPoolImpl;
    
    // Allows different codebases to use their own thread pool impls
typedef ThreadPoolInterface* (*CreateThreadPoolFunc)(void);
void SetCreateThreadPool(CreateThreadPoolFunc func);
    
    void CoreStatsToProto(const grpc_stats_data& core, Stats* proto) {
  for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_counter_name[i]);
    m->set_count(core.counters[i]);
  }
  for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_histogram_name[i]);
    Histogram* h = m->mutable_histogram();
    for (int j = 0; j < grpc_stats_histo_buckets[i]; j++) {
      Bucket* b = h->add_buckets();
      b->set_start(grpc_stats_histo_bucket_boundaries[i][j]);
      b->set_count(core.histograms[grpc_stats_histo_start[i] + j]);
    }
  }
}
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }
    
    /*!
 * \file gradient_compression-inl.h
 * \author Rahul Huilgol
 * \brief Declares and defines functions used to quantize and dequantize data
 */
#ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_INL_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_INL_H_
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
      std::vector<Tensor<cpu, 2, DType> > ts_t_arr;
  for (int i = 0; i < static_cast<int>(ts_arr.size()); ++i) {
    ts_t_arr.emplace_back(Shape2(ts_arr[i].size(1), ts_arr[i].size(0)));
    AllocSpace(&ts_t_arr[i]);
    flip<cpu, DType>(ts_arr[i].size(0), ts_arr[i].size(1), ts_t_arr[i].dptr_,
      ts_t_arr[i].stride_, ts_arr[i].dptr_, ts_arr[i].stride_);
  }
    
    /*!
 *  Copyright (c) 2018 by Contributors
 * \file transformer.cc
 * \brief CPU implementation of the operators used in Transformer
 */
#include <mxnet/base.h>
#include './transformer-inl.h'
#include '../tensor/elemwise_unary_op.h'
    
      ~CuDNNBilinearSamplerOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroySpatialTransformerDescriptor(st_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(in_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(out_desc_));
    }
  }
    
    MXNET_REGISTER_OP_PROPERTY(IdentityAttachKLSparseReg, IdentityAttachKLSparseRegProp)
.describe('Apply a sparse regularization to the output a sigmoid activation function.')
.add_argument('data', 'NDArray-or-Symbol', 'Input data.')
.add_arguments(IdentityAttachKLSparseRegParam::__FIELDS__());
    
    void ImGui_ImplGLUT_KeyboardUpFunc(unsigned char c, int x, int y)
{
    //printf('char_up_func %d '%c'\n', c, c);
    ImGuiIO& io = ImGui::GetIO();
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = false;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = false;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = false;
    else
        io.KeysDown[c] = false;
    ImGui_ImplGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    #include <stdint.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include 'imgui.h'
#include 'imgui_impl_allegro5.h'
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'Dear ImGui GLFW+OpenGL2 example', NULL, NULL);
    if (window == NULL)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
        routingTable->setTaskQueue(taskQueue.get());
    routingTable->setTaskFactory(taskFactory.get());
    
    #endif // D_DHT_SETUP_H

    
    #endif // D_DHT_TASK_FACTORY_H

    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}