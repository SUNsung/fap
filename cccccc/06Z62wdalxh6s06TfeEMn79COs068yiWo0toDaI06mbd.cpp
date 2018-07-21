
        
          void GetDeviceLocalityAsync(const string& device, DeviceLocality* locality,
                              StatusCallback) override;
    
      // (X - E[X]) / Sqrt[Var[X] + epsilon].
  auto normalized = add_binary(operand_shape, HloOpcode::kMultiply,
                               operand_minus_mean, rsqrt_var_add_epsilon);
    
      std::vector<T> GetOutput() { return ExtractVector<T>(output_); }
  std::vector<int> GetOutputShape() { return GetTensorShape(output_); }
    
      ::tensorflow::NodeDef output_node_def;
  output_node_def.ParseFromString(output_toco_op->tensorflow_node_def);
  const auto& output_attr = output_node_def.attr();
  EXPECT_EQ(2.0, output_attr.at('float_attr').f());
  EXPECT_EQ('Hello World', output_attr.at('str_attr').s());
  EXPECT_EQ(17, output_attr.at('int_attr').i());
  EXPECT_EQ(true, output_attr.at('bool_attr').b());
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/record_reader.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
        const string file_format =
        str_util::Lowercase(file_format_tensor.scalar<string>()());
    const int32 samples_per_second =
        samples_per_second_tensor.scalar<int32>()();
    const int32 bits_per_second = bits_per_second_tensor.scalar<int32>()();
    
    namespace content {
class RenderView;
}
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    #include 'generic/THTensorCopy.cpp'
#include 'THGenerateAllTypes.h'
    
    TEST_CASE('cursor/non-const-to-const-conversion') {
  torch::manual_seed(0);
  auto first = std::make_shared<TestModule>(1);
  auto second = std::make_shared<TestModule>(2);
  Container model(first, second);
    }
    
    void OptimizerBase::add_parameters(const ParameterCursor& cursor) {
  std::vector<Tensor> tensors(cursor.size());
  cursor.map(tensors.begin(), [](const Tensor& tensor) { return tensor; });
  add_parameters(tensors);
}
    
    
    {
    {    if (totalSize + self->storageOffset > 0) {
      if (!self->storage)
        self->storage = THDStorage_(new)();
      if (totalSize + self->storageOffset > self->storage->size)
        THDStorage_(resize)(self->storage, totalSize+self->storageOffset);
    }
  } else {
    self->nDimension = 0;
  }
}
    
    Tensor fft(const Tensor& self, const int64_t signal_ndim, const bool normalized) {
  return _fft(self, signal_ndim, /* complex_input */ true,
              /* complex_output */ true, /* inverse */ false, {}, normalized,
              /* onesided */ false);
}
    
      template <typename F>
  auto read(F&& readFunc) -> typename std::result_of<F(const T&)>::type {
    auto localCounterIndex = counterIndex_.load();
    ++counters_[localCounterIndex];
    try {
      auto r = readFunc(data_[dataIndex_.load()]);
      --counters_[localCounterIndex];
      return r;
    } catch (const std::exception& e) {
      --counters_[localCounterIndex];
      throw;
    }
  }
    
    /* Can we use 32 bit math for indexing? */
THC_API bool THCTensor_canUse32BitIndexMath(THCState* state, const THCTensor* t, ptrdiff_t max_elem=INT32_MAX);
/* Are all tensors 32-bit indexable? */
THC_API bool THCTensor_all32BitIndexable(THCState* state, THCTensor** inputs, int numInputs);
THC_API void THCTensor_preserveReduceDimSemantics(THCState *state, THCTensor *tensor, int in_dims,
                                                  int64_t dimension, int keepdim);
/* Returns false if there is no possibility that the tensor    */
/* has more than one index that references the same datapoint, */
/* true otherwise.                                             */
THC_API bool THCTensor_maybeOverlappingIndices(THCState* state, const THCTensor* t);

    
      std::vector<THCStream*> streams;
  Py_ssize_t length = PySequence_Fast_GET_SIZE(seq.get());
  for (Py_ssize_t i = 0; i < length; i++) {
    PyObject *stream = PySequence_Fast_GET_ITEM(seq.get(), i);
    }
    
        for (int i = 0; i < nnz; ++i) {
      TIndex offset = old_row_data[i] * old_stride_ + old_col_data[i];
      new_row_data[i] = offset / new_stride_;
      new_col_data[i] = offset % new_stride_;
    }
    
    int jpeg_decoder_mem_stream::read(uint8 *pBuf, int max_bytes_to_read, bool *pEOF_flag)
{
  *pEOF_flag = false;
    }
    
    
int             oc_has_mode_metrics;
oc_mode_metrics OC_MODE_METRICS[64][3][2][OC_SAD_BINS];
# endif
    
    /*      These defines enable functionality introduced with the 1999 ISO C
**      standard. They must be defined before the inclusion of math.h to
**      engage them. If optimisation is enabled, these functions will be
**      inlined. With optimisation switched off, you have to link in the
**      maths library using -lm.
*/
    
    
    {}  // namespace leveldb
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
    #ifndef STORAGE_LEVELDB_UTIL_RANDOM_H_
#define STORAGE_LEVELDB_UTIL_RANDOM_H_
    
    namespace leveldb {
    }
    
        // Glut has 1 function for characters and one for 'special keys'. We map the characters in the 0..255 range and the keys above.
    io.KeyMap[ImGuiKey_Tab]         = '\t'; // == 9 == CTRL+I
    io.KeyMap[ImGuiKey_LeftArrow]   = 256 + GLUT_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow]  = 256 + GLUT_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow]     = 256 + GLUT_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow]   = 256 + GLUT_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp]      = 256 + GLUT_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown]    = 256 + GLUT_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home]        = 256 + GLUT_KEY_HOME;
    io.KeyMap[ImGuiKey_End]         = 256 + GLUT_KEY_END;
    io.KeyMap[ImGuiKey_Insert]      = 256 + GLUT_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete]      = 127;
    io.KeyMap[ImGuiKey_Backspace]   = 8;  // == CTRL+H
    io.KeyMap[ImGuiKey_Space]       = ' ';
    io.KeyMap[ImGuiKey_Enter]       = 13; // == CTRL+M
    io.KeyMap[ImGuiKey_Escape]      = 27;
    io.KeyMap[ImGuiKey_A]           = 'A';
    io.KeyMap[ImGuiKey_C]           = 'C';
    io.KeyMap[ImGuiKey_V]           = 'V';
    io.KeyMap[ImGuiKey_X]           = 'X';
    io.KeyMap[ImGuiKey_Y]           = 'Y';
    io.KeyMap[ImGuiKey_Z]           = 'Z';
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplAllegro5_Init(display);
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    /* using override */ using namespace folly::portability::fcntl;
#endif

    
      BlockingQueueAddResult add(T item) override {
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queue_.write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queue_.blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    namespace folly {
    }
    
    #if FOLLY_USE_SYMBOLIZER
  // Don't use glog's DumpStackTraceAndExit; rely on our signal handler.
  google::InstallFailureFunction(abort);
    
    #include <folly/logging/example/lib.h>
    
      // more complex conditional expressions
  std::array<bool, 2> conds = {{false, true}};
  for (unsigned i = 0; i < conds.size(); i++) {
    for (unsigned j = 0; j < conds.size(); j++) {
      argumentEvaluated = false;
      XLOGC_IF(
          DBG1, conds[i] && conds[j], 'testing conditional %d', getValue());
      EXPECT_EQ((conds[i] && conds[j]) ? 1 : 0, messages.size());
      messages.clear();
      if (conds[i] && conds[j]) {
        EXPECT_TRUE(argumentEvaluated);
      } else {
        EXPECT_FALSE(argumentEvaluated);
      }
    }
    }
    
    void Barrier::freeControlBlock(ControlBlock* block) {
  auto p = promises(block);
  for (uint32_t i = size_; i != 0; --i) {
    p[i - 1].~BoolPromise();
  }
  free(block);
}