
        
        
    {}  // namespace tensorflow

    
    namespace tensorflow {
    }
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Given an numpy ndarray object 'obj', creates a corresponding tf
// Tensor in '*ret'.
Status ConvertNdarrayToTensor(PyObject* obj, Tensor* ret);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Attempt to get the next record at 'current_offset()'. Populates status
  // with OK on success, OUT_OF_RANGE for end of file, DATA_LOSS for some
  // kinds of truncated reads, or another code for other errors
  // (e.g., filesystem errors).
  void GetNext(TF_Status* status);
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    StreamExecutor *stream_exec)
    : ScopedActivateExecutorContext(ExtractCudaExecutor(stream_exec)) {}
    
    #ifndef BITCOIN_QT_TRANSACTIONDESCDIALOG_H
#define BITCOIN_QT_TRANSACTIONDESCDIALOG_H
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    /* These points can be generated in sage as follows:
 *
 * 0. Setup a worksheet with the following parameters.
 *   b = 4  # whatever CURVE_B will be set to
 *   F = FiniteField (0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFC2F)
 *   C = EllipticCurve ([F (0), F (b)])
 *
 * 1. Determine all the small orders available to you. (If there are
 *    no satisfactory ones, go back and change b.)
 *   print C.order().factor(limit=1000)
 *
 * 2. Choose an order as one of the prime factors listed in the above step.
 *    (You can also multiply some to get a composite order, though the
 *    tests will crash trying to invert scalars during signing.) We take a
 *    random point and scale it to drop its order to the desired value.
 *    There is some probability this won't work; just try again.
 *   order = 199
 *   P = C.random_point()
 *   P = (int(P.order()) / int(order)) * P
 *   assert(P.order() == order)
 *
 * 3. Print the values. You'll need to use a vim macro or something to
 *    split the hex output into 4-byte chunks.
 *   print '%x %x' % P.xy()
 */
#if defined(EXHAUSTIVE_TEST_ORDER)
#  if EXHAUSTIVE_TEST_ORDER == 199
const secp256k1_ge secp256k1_ge_const_g = SECP256K1_GE_CONST(
    0xFA7CC9A7, 0x0737F2DB, 0xA749DD39, 0x2B4FB069,
    0x3B017A7D, 0xA808C2F1, 0xFB12940C, 0x9EA66C18,
    0x78AC123A, 0x5ED8AEF3, 0x8732BC91, 0x1F3A2868,
    0x48DF246C, 0x808DAE72, 0xCFE52572, 0x7F0501ED
);
    
      const auto& X = in[0];
  const auto& W = in[1];
  const auto& b = in[2];
  auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  const int M = size_to_dim_(canonical_axis, GetDimsVector(in[0]));
  const int K = size_from_dim_(canonical_axis, GetDimsVector(in[0]));
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    
    {  bool RunOnDevice() override;
};
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    NO_GRADIENT(GivenTensorFill);
NO_GRADIENT(GivenTensorDoubleFill);
NO_GRADIENT(GivenTensorBoolFill);
NO_GRADIENT(GivenTensorIntFill);
NO_GRADIENT(GivenTensorInt64Fill);
NO_GRADIENT(GivenTensorStringFill);
    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
    namespace leveldb {
    }
    
    // Append the serialization of 'key' to *result.
void AppendInternalKey(std::string* result, const ParsedInternalKey& key);
    
    unsigned int Reader::ReadPhysicalRecord(Slice* result) {
  while (true) {
    if (buffer_.size() < kHeaderSize) {
      if (!eof_) {
        // Last read was a full read, so this is a trailer to skip
        buffer_.clear();
        Status status = file_->Read(kBlockSize, &buffer_, backing_store_);
        end_of_buffer_offset_ += buffer_.size();
        if (!status.ok()) {
          buffer_.clear();
          ReportDrop(kBlockSize, status);
          eof_ = true;
          return kEof;
        } else if (buffer_.size() < kBlockSize) {
          eof_ = true;
        }
        continue;
      } else {
        // Note that if buffer_ is non-empty, we have a truncated header at the
        // end of the file, which can be caused by the writer crashing in the
        // middle of writing the header. Instead of considering this an error,
        // just report EOF.
        buffer_.clear();
        return kEof;
      }
    }
    }
    }
    
    TEST(LogTest, Empty) {
  ASSERT_EQ('EOF', Read());
}
    
    TEST(RecoveryTest, MultipleMemTables) {
  // Make a large log.
  const int kNum = 1000;
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_OK(Put(buf, buf));
  }
  ASSERT_EQ(0, NumTables());
  Close();
  ASSERT_EQ(0, NumTables());
  ASSERT_EQ(1, NumLogs());
  uint64_t old_log_file = FirstLogFile();
    }
    
    template<typename Key, class Comparator>
class SkipList {
 private:
  struct Node;
    }
    
        // Create the blending setup
    {
        D3D10_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.BlendEnable[0] = true;
        desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
        desc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
        desc.BlendOp = D3D10_BLEND_OP_ADD;
        desc.SrcBlendAlpha = D3D10_BLEND_INV_SRC_ALPHA;
        desc.DestBlendAlpha = D3D10_BLEND_ZERO;
        desc.BlendOpAlpha = D3D10_BLEND_OP_ADD;
        desc.RenderTargetWriteMask[0] = D3D10_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
    void ImGui_ImplFreeGLUT_MouseFunc(int glut_button, int state, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    int button = -1;
    if (glut_button == GLUT_LEFT_BUTTON) button = 0;
    if (glut_button == GLUT_RIGHT_BUTTON) button = 1;
    if (glut_button == GLUT_MIDDLE_BUTTON) button = 2;
    if (button != -1 && state == GLUT_DOWN)
        io.MouseDown[button] = true;
    if (button != -1 && state == GLUT_UP)
        io.MouseDown[button] = false;
}
    
    bool Follow::isDone() const
{
    return ( !_followedNode->isRunning() );
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
            animation->setRestoreOriginalFrame(restoreOriginalFrame);
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    
    {  std::atomic<int> refCount{0};
};
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    /// Returns a keep-alive token which guarantees that Executor will keep
/// processing tasks until the token is released (if supported by Executor).
/// KeepAlive always contains a valid pointer to an Executor.
template <typename ExecutorT>
Executor::KeepAlive<ExecutorT> getKeepAliveToken(ExecutorT* executor) {
  static_assert(
      std::is_base_of<Executor, ExecutorT>::value,
      'getKeepAliveToken only works for folly::Executor implementations.');
  return Executor::getKeepAliveToken(executor);
}
    
    namespace folly {
    }
    
      /**
   * Returns a random uint64_t
   */
  static uint64_t rand64() {
    return rand64(ThreadLocalPRNG());
  }
    
      mutable AtomicStruct<PackedPtr, Atom> ptr_;
    
    namespace {
    }