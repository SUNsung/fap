
        
        // Initializes the specified startup info struct with the required properties and
// updates its thread attribute list with the specified ConPTY handle
HRESULT InitializeStartupInfoAttachedToPseudoConsole(STARTUPINFOEX* pStartupInfo, HPCON hPC)
{
    HRESULT hr{ E_UNEXPECTED };
    }
    
        // use strings to print preset names in the perf test results:
    String preset_string = get<0>(params);
    int preset = DISOpticalFlow::PRESET_FAST;
    if (preset_string == 'PRESET_ULTRAFAST')
        preset = DISOpticalFlow::PRESET_ULTRAFAST;
    else if (preset_string == 'PRESET_FAST')
        preset = DISOpticalFlow::PRESET_FAST;
    else if (preset_string == 'PRESET_MEDIUM')
        preset = DISOpticalFlow::PRESET_MEDIUM;
    Size sz = get<1>(params);
    
    
//
// Decode using a the 'One-Shift' strategy for decoding, with a 
// small-ish table to accelerate decoding of short codes.
//
// If possible, try looking up codes into the acceleration table.
// This has a few benifits - there's no search involved; We don't
// need an additional lookup to map id to symbol; we don't need
// a full 64-bits (so less refilling). 
//
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
FrameBuffer::ConstIterator
FrameBuffer::end () const
{
    return _map.end();
}
    
    
Header::Header (const Box2i &displayWindow,
		const Box2i &dataWindow,
		float pixelAspectRatio,
		const V2f &screenWindowCenter,
		float screenWindowWidth,
		LineOrder lineOrder,
		Compression compression)
:
    _map()
{
    staticInitialize();
    }
    
    #include <ImfIO.h>
#include 'Iex.h'
#include 'ImfNamespace.h'
    
        virtual void	seekg (Int64 pos) = 0;
    
    
struct InputPartData
{
        Header                  header;
        int                     numThreads;
        int                     partNumber;
        int                     version;
        InputStreamMutex*       mutex;
        std::vector<Int64>      chunkOffsets;
        bool                    completed;
    }
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    #include 'caffe2/core/net_async_base.h'
    
    TEST_F(ModulesTest, Conv1d) {
  Conv1d model(Conv1dOptions(3, 2, 3).stride(2));
  auto x = torch::randn({2, 3, 5}, torch::requires_grad());
  auto y = model(x);
  torch::Tensor s = y.sum();
    }
    
    /// Applies [Batch Normalization](https://arxiv.org/abs/1502.03167) to an input.
///
/// Refer to the documentation for
/// [`BatchNorm1d`](https://pytorch.org/docs/stable/nn.html#torch.nn.BatchNorm1d)
/// in PyTorch to learn more about the exact semantics of this module, __but see
/// the note below regarding differences between the Python and C++ API__.
///
/// \rst
/// .. attention::
///   In the Python API, there are separate implementations for 1-D, 2-D and 3-D
///   BatchNorm. In C++, there is only one `BatchNorm` module, which works for
///   any of these dimensions.
/// \endrst
class TORCH_API BatchNormImpl : public torch::nn::Cloneable<BatchNormImpl> {
 public:
  explicit BatchNormImpl(int64_t features)
      : BatchNormImpl(BatchNormOptions(features)) {}
  explicit BatchNormImpl(BatchNormOptions options);
    }
    
    namespace caffe2 {
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensorsGradient,
    MergeSingleScalarFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensorsGradient)
    .SetDoc(
        'Explode multi-feature tensor of scalar features into one or more'
        'single-feature tensors' +
        doc)
    .NumInputs([](int n) { return n >= 2; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_presence', '.presence')
    .Input(1, '.values_grad', '.values_grad')
    .Output(0, 'in1_grad', '_grad of inputs');
REGISTER_GRADIENT(
    MergeSingleScalarFeatureTensors,
    GetMergeSingleScalarFeatureTensorsGradient);
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
        // output changed array
    std::cout << array << '\n';
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
      Status GetChildren(const std::string& dir,
                     std::vector<std::string>* result) override {
    PERF_TIMER_GUARD(env_get_children_nanos);
    return EnvWrapper::GetChildren(dir, result);
  }
    
    #include 'db/db_test_util.h'
#include 'port/stack_trace.h'
#include 'rocksdb/listener.h'
#include 'rocksdb/options.h'
#include 'rocksdb/perf_context.h'
#include 'rocksdb/perf_level.h'
#include 'rocksdb/table.h'
#include 'util/random.h'
#include 'util/string_util.h'
    
      // close DB
  delete cf;
  delete db;
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');
    
    class DbDumpTool {
 public:
  bool Run(const DumpOptions& dump_options,
           rocksdb::Options options = rocksdb::Options());
};
    
      // If non-NULL, use the specified filter policy to reduce disk reads.
  // Many applications will benefit from passing the result of
  // NewBloomFilterPolicy() here.
  //
  // Default: NULL
  const FilterPolicy* filter_policy;