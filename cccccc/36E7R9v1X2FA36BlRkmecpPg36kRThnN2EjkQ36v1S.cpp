
        
        #if GOOGLE_CUDA
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
    
    
    {  auto module = CreateNewModule();
  auto computation = module->AddEntryComputation(builder.Build());
  HloInstruction* root = computation->root_instruction();
  EXPECT_EQ(root->opcode(), HloOpcode::kBatchNormTraining);
  BatchNormExpander rewriter(/*rewrite_training_op=*/true,
                             /*rewrite_inference_op=*/true,
                             /*rewrite_grad_op=*/true);
  ASSERT_TRUE(rewriter.Run(module.get()).ValueOrDie());
  root = computation->root_instruction();
  // Make sure this operation is expanded.
  EXPECT_EQ(root->opcode(), HloOpcode::kTuple);
}
    
    bool PropagateArrayDataTypes::Run(Model* model, std::size_t op_index) {
  auto it = model->operators.begin() + op_index;
  auto* op = it->get();
    }
    
    namespace {
    }
    
    class DebuggerState : public DebuggerStateInterface {
 public:
  DebuggerState(const DebugOptions& debug_options);
  virtual ~DebuggerState();
    }
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-06-13: Platform: Added clipboard support (from Allegro 5.1.12).
//  2018-06-13: Renderer: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-06-13: Renderer: Backup/restore transform and clipping rectangle.
//  2018-06-11: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-04-18: Misc: Renamed file from imgui_impl_a5.cpp to imgui_impl_allegro5.cpp.
//  2018-04-18: Misc: Added support for 32-bits vertex indices to avoid conversion at runtime. Added imconfig_allegro5.h to enforce 32-bit indices when included from imgui.h.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplAllegro5_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
    
    void ImGui_ImplVulkanH_CreateWindowDataSwapChainAndFramebuffer(VkPhysicalDevice physical_device, VkDevice device, ImGui_ImplVulkanH_WindowData* wd, const VkAllocationCallbacks* allocator, int w, int h)
{
    uint32_t min_image_count = 2;	// FIXME: this should become a function parameter
    }
    
    #include <algorithm>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <cstdlib>
    
    // Entropy encoding (Huffman) utilities.
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    /**
 * Install the terminate / unexpected handlers to dump exceptions.
 */
void installHandlers();
    
      // Why is this overload deleted? So as not to get confused with
  // append('null-terminated', N), where N would be a count instead
  // of a position.
  template <std::size_t M>
  FOLLY_CPP14_CONSTEXPR BasicFixedString& append(
      const BasicFixedString<Char, M>& that,
      std::size_t pos) noexcept(false) = delete;
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
    #include <folly/CPortability.h>
#include <folly/Optional.h>
    
    #include <folly/Executor.h>
#include <folly/MPMCQueue.h>
#include <folly/Range.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
#include <glog/logging.h>
    
    // Configure folly to enable INFO+ messages, and everything else to
// enable WARNING+.
//
// Set the default log handler to log asynchronously by default.
FOLLY_INIT_LOGGING_CONFIG('.=WARNING,folly=INFO; default:async=true');
    
    class SerialExecutor : public SequencedExecutor {
 public:
  SerialExecutor(SerialExecutor const&) = delete;
  SerialExecutor& operator=(SerialExecutor const&) = delete;
  SerialExecutor(SerialExecutor&&) = delete;
  SerialExecutor& operator=(SerialExecutor&&) = delete;
    }
    
    #endif

    
    
    {
    {      argumentEvaluated = false;
      XLOGC_IF(
          DBG1, conds[i] || conds[j], 'testing conditional %d', getValue());
      EXPECT_EQ((conds[i] || conds[j]) ? 1 : 0, messages.size());
      messages.clear();
      if (conds[i] || conds[j]) {
        EXPECT_TRUE(argumentEvaluated);
      } else {
        EXPECT_FALSE(argumentEvaluated);
      }
    }
  }
    
      // Use the simple helper function in XlogHeader2
  testXlogHdrFunction('factor', 99);
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ('test: factor=99', messages[0].first.getMessage());
  EXPECT_TRUE(messages[0].first.getFileName().endsWith('XlogHeader2.h'))
      << 'unexpected file name: ' << messages[0].first.getFileName();
  EXPECT_EQ(LogLevel::DBG3, messages[0].first.getLevel());
  EXPECT_EQ(
      'folly.logging.test.XlogHeader2.h',
      messages[0].first.getCategory()->getName());
  EXPECT_EQ('folly.logging.test', messages[0].second->getName());
  messages.clear();