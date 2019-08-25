
        
        typedef tuple<String, Size> DISParams;
typedef TestBaseWithParam<DISParams> DenseOpticalFlow_DIS;
    
        const unsigned char *currByte = src + 2 * sizeof (Int64);
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    #ifndef IMFINPUTPART_H_
#define IMFINPUTPART_H_
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
      // Backwards compatible constrained fit with a supplied gradient.
  // Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
  // to avoid potential difficulties with infinite gradients.
  double ConstrainedFit(double m, float* c);
    
    ALL processing of the reject map is done in this module. There are lots of
separate calls to set reject/accept flags. These have DELIBERATELY been kept
distinct so that this module can decide what to do.
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
      void ModifySendMessage(const void* message) override {
    GPR_CODEGEN_ASSERT(
        false &&
        'It is illegal to call ModifySendMessage on a method which '
        'has a Cancel notification');
  }
    
    class TestServiceImpl : public ::grpc::testing::EchoTestService::Service {
 public:
  TestServiceImpl() : signal_client_(false), host_() {}
  explicit TestServiceImpl(const grpc::string& host)
      : signal_client_(false), host_(new grpc::string(host)) {}
    }
    
    #include <grpc/impl/codegen/grpc_types.h>
#include <grpc/support/log.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/resource_quota.h>
#include 'src/core/lib/channel/channel_args.h'
#include 'src/core/lib/iomgr/exec_ctx.h'
#include 'src/core/lib/iomgr/socket_mutator.h'
    
    
    {  if (status == 0) {
    DisconnectEx(winsocket->socket, NULL, 0, 0);
  } else {
    char* utf8_message = gpr_format_message(WSAGetLastError());
    gpr_log(GPR_INFO, 'Unable to retrieve DisconnectEx pointer : %s',
            utf8_message);
    gpr_free(utf8_message);
  }
  closesocket(winsocket->socket);
}
    
    #endif /* GRPC_WINSOCK_SOCKET */

    
    static_assert(std::is_trivially_destructible<GlobalConfigEnvInt32>::value,
              'GlobalConfigEnvInt32 needs to be trivially destructible.');
    
      LOG_TEST_NAME('test_unsetenv');
    
      std::shared_ptr<grpc::Channel> CreateChannelImpl(
      const string& target, const grpc::ChannelArguments& args) override {
    return CreateChannelWithInterceptors(
        target, args,
        std::vector<std::unique_ptr<
            experimental::ClientInterceptorFactoryInterface>>());
  }
    
    struct GLFWwindow;
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
#include 'imgui_impl_win32.h'
#include <d3d9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    // About GLSL version:
//  The 'glsl_version' initialization parameter should be NULL (default) or a '#version XXX' string.
//  On computer platform the GLSL version default to '#version 130'. On OpenGL ES 3 platform it defaults to '#version 300 es'
//  Only override if your GL version doesn't handle this GLSL version. See GLSL version table at the top of imgui_impl_opengl3.cpp.
    
    
    {                // Tip: Because ImGui:: is a namespace you would typicall add your own function into the namespace in your own source files.
                // For example, you may add a function called ImGui::InputText(const char* label, MyString* my_str).
                static bool MyInputTextMultiline(const char* label, ImVector<char>* my_str, const ImVec2& size = ImVec2(0, 0), ImGuiInputTextFlags flags = 0)
                {
                    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
                    return ImGui::InputTextMultiline(label, my_str->begin(), (size_t)my_str->size(), size, flags | ImGuiInputTextFlags_CallbackResize, Funcs::MyResizeCallback, (void*)my_str);
                }
            };
    
    #ifdef _DEBUG
    if (traceLevel > 0)
    {
    // This simply merges all the different config parameters specified (eg, via config files or via command line directly),
    // and prints it.
        fprintf(stderr, '\nConfiguration, Raw:\n\n');
        LOGPRINTF(stderr, '%s\n', rawConfigString.c_str());
    }
    
            std::string newConfigLine = StripComments(configLine);
        std::size_t start = newConfigLine.find_first_of(openBraceVar);
        std::size_t end = 0;
        while (start != std::string::npos )
        {
            // variable names must begin with a letter or '_'
            if (start + 1 < newConfigLine.size() && !iscalpha(newConfigLine[start + 1]) && newConfigLine[start + 1] != '_')
            {
                start = newConfigLine.find_first_of(openBraceVar, start + 2);
                continue;
            }
    }
    
                auto consumer2 = GetNodeConsumers(consumers.front()).front();
            if (consumer2->OperationName() == L'Sigmoid')
            {
                sigmoided = true;
                layerId = consumer2->GetName();
            }
            else
            {
                layerId = firstConsumer->GetName();
            }
    
        void InitDistGradAgg(int numEvalNodes, int numGradientBits, int deviceId, int traceLevel);
    void InitModelAggregationHandler(int traceLevel, DEVICEID_TYPE devID);
private:
    // UpdateWeights() - actual weight update, implementing various update rules
    void UpdateWeights(Matrix<ElemType>& functionValues, Matrix<ElemType>& gradientValues,
        MatrixBasePtr& smoothedGradient, double& smoothedCount,
        const double learnRatePerSample, const double momentumPerSample,
        size_t actualMBSize,
        const double L2RegWeight, const double L1RegWeight,
        const bool needAveMultiplier,
        const bool useNesterovMomentum) const;
    
    #endif // D_DHT_RESPONSE_MESSAGE_H

    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
        const std::string& getGoodAddr() const;
    
    #include 'cyber/common/log.h'
#include 'cyber/record/record_reader.h'
#include 'cyber/record/record_writer.h'
    
        for (const std::string &model_config_path :
         file_list_proto.model_config_path()) {
      const std::string abs_path =
          GetAbsolutePath(work_root_, model_config_path);
      MultiModelConfigProto multi_model_config_proto;
      if (!GetProtoFromASCIIFile(abs_path, &multi_model_config_proto)) {
        AERROR << 'Invalid MultiModelConfigProto file: ' << abs_path;
        return false;
      }
    }
    
    
    {
    {      if (request->timeout_ms == 0) {
        responses[item.first] = PollResponse();
        request->timeout_ms = -1;
      }
    }
  }
    
    TEST(NaviSpeedTsGraph, Solve1) {
  NaviSpeedTsGraph graph;
  graph.Reset(1.0, 100.0, 0.0, 0.0, 0.0);
    }
    
    
    { private:
  ScenarioTrafficLightUnprotectedRightTurnConfig scenario_config_;
};
    
    class StageApproachingParkingSpot : public Stage {
 public:
  explicit StageApproachingParkingSpot(
      const ScenarioConfig::StageConfig& config)
      : Stage(config) {}
    }