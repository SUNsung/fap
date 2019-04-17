
        
        // Names that corresponds to a single input parameter.
class ParamNames {
 public:
  // Create param based on Arg.
  ParamNames(const string& name, const string& rename_to) : name_(name) {
    rename_to_ = AvoidPythonReserved(rename_to);
  }
    }
    
    
    {}  // end namespace tensorflow

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Comparisons on PyBfloat16s.
PyObject* PyBfloat16_RichCompare(PyObject* a, PyObject* b, int op) {
  bfloat16 x, y;
  if (!AsBfloat16(a, &x) || !AsBfloat16(b, &y)) return nullptr;
  bool result;
  switch (op) {
    case Py_LT:
      result = x < y;
      break;
    case Py_LE:
      result = x <= y;
      break;
    case Py_EQ:
      result = x == y;
      break;
    case Py_NE:
      result = x != y;
      break;
    case Py_GT:
      result = x > y;
      break;
    case Py_GE:
      result = x >= y;
      break;
    default:
      LOG(FATAL) << 'Invalid op type ' << op;
  }
  return PyBool_FromLong(result);
}
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/stream_executor/lib/status.h'
#include 'tensorflow/stream_executor/lib/statusor.h'
#include 'tensorflow/stream_executor/platform/mutex.h'
#include 'tensorflow/stream_executor/stream_executor_pimpl.h'
    
    // Macro used to quickly declare overrides for abstract virtuals in the
// fft::FftSupport base class. Assumes that it's emitted somewhere inside the
// ::stream_executor namespace.
#define TENSORFLOW_STREAM_EXECUTOR_GPU_FFT_SUPPORT_OVERRIDES                   \
  std::unique_ptr<fft::Plan> Create1dPlan(Stream *stream, uint64 num_x,        \
                                          fft::Type type, bool in_place_fft)   \
      override;                                                                \
  std::unique_ptr<fft::Plan> Create2dPlan(Stream *stream, uint64 num_x,        \
                                          uint64 num_y, fft::Type type,        \
                                          bool in_place_fft) override;         \
  std::unique_ptr<fft::Plan> Create3dPlan(                                     \
      Stream *stream, uint64 num_x, uint64 num_y, uint64 num_z,                \
      fft::Type type, bool in_place_fft) override;                             \
  std::unique_ptr<fft::Plan> Create1dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, fft::Type type, bool in_place_fft,         \
      ScratchAllocator *scratch_allocator) override;                           \
  std::unique_ptr<fft::Plan> Create2dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, uint64 num_y, fft::Type type,              \
      bool in_place_fft, ScratchAllocator *scratch_allocator) override;        \
  std::unique_ptr<fft::Plan> Create3dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, uint64 num_y, uint64 num_z,                \
      fft::Type type, bool in_place_fft, ScratchAllocator *scratch_allocator)  \
      override;                                                                \
  std::unique_ptr<fft::Plan> CreateBatchedPlan(                                \
      Stream *stream, int rank, uint64 *elem_count, uint64 *input_embed,       \
      uint64 input_stride, uint64 input_distance, uint64 *output_embed,        \
      uint64 output_stride, uint64 output_distance, fft::Type type,            \
      bool in_place_fft, int batch_count) override;                            \
  std::unique_ptr<fft::Plan> CreateBatchedPlanWithScratchAllocator(            \
      Stream *stream, int rank, uint64 *elem_count, uint64 *input_embed,       \
      uint64 input_stride, uint64 input_distance, uint64 *output_embed,        \
      uint64 output_stride, uint64 output_distance, fft::Type type,            \
      bool in_place_fft, int batch_count, ScratchAllocator *scratch_allocator) \
      override;                                                                \
  void UpdatePlanWithScratchAllocator(Stream *stream, fft::Plan *plan,         \
                                      ScratchAllocator *scratch_allocator)     \
      override;                                                                \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<float>> &input,                   \
             DeviceMemory<std::complex<float>> *output) override;              \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<double>> &input,                  \
             DeviceMemory<std::complex<double>> *output) override;             \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<float> &input,                                 \
             DeviceMemory<std::complex<float>> *output) override;              \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<double> &input,                                \
             DeviceMemory<std::complex<double>> *output) override;             \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<float>> &input,                   \
             DeviceMemory<float> *output) override;                            \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<double>> &input,                  \
             DeviceMemory<double> *output) override;
    
      // If a PyObject is owned, decrement its reference count.
  ~ScopedPythonPtr() { Py_XDECREF(ptr_); }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    #include 'google/protobuf/message.h'
#include 'google/protobuf/descriptor.h'
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
      void ScrubMessage(DescriptorProto *message_type) {
    for (int i = 0; i < message_type->mutable_enum_type()->size(); i++) {
      ScrubEnum(message_type->mutable_enum_type(i));
    }
    for (int i = 0; i < message_type->mutable_nested_type()->size(); i++) {
      ScrubMessage(message_type->mutable_nested_type(i));
    }
  }
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
      void GetGradient(const HostDeviceVector<bst_float>& preds,
                   const MetaInfo& info,
                   int iter,
                   HostDeviceVector<GradientPair>* out_gpair) override {
    CHECK_EQ(preds.Size(), info.labels_.Size()) << 'label size predict size not match';
    const auto& preds_h = preds.HostVector();
    out_gpair->Resize(preds_h.size());
    std::vector<GradientPair>& gpair = out_gpair->HostVector();
    // quick consistency when group is not available
    std::vector<unsigned> tgptr(2, 0); tgptr[1] = static_cast<unsigned>(info.labels_.Size());
    const std::vector<unsigned> &gptr = info.group_ptr_.size() == 0 ? tgptr : info.group_ptr_;
    CHECK(gptr.size() != 0 && gptr.back() == info.labels_.Size())
        << 'group structure not consistent with #rows';
    }
    
    float SimpleDMatrix::GetColDensity(size_t cidx) {
  size_t column_size = 0;
  // Use whatever version of column batches already exists
  if (sorted_column_page_) {
    auto batch = this->GetSortedColumnBatches();
    column_size = (*batch.begin())[cidx].size();
  } else {
    auto batch = this->GetColumnBatches();
    column_size = (*batch.begin())[cidx].size();
  }
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // About GLSL version:
// The 'glsl_version' initialization parameter defaults to '#version 150' if NULL.
// Only override if your GL version doesn't handle this GLSL version. Keep NULL if unsure!
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    using apollo::common::ErrorCode;
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    
    {  Byte t1(bytes + 2);
  uint32_t t = t1.get_byte(3, 5);
  x <<= 5;
  x |= t;
  double ret = x * CLUSTER_DIST_RES + CLUSTER_DIST_LONG_MIN;
  return ret;
}
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    
    {  bool ret = x;
  return ret;
}
    
    
    {  Headlight_rpt_77::Manual_inputType ret =
      static_cast<Headlight_rpt_77::Manual_inputType>(x);
  return ret;
}