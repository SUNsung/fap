
        
        REGISTER_GRADIENT(Sub, GetSubGradient);
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    REGISTER_CPU_OPERATOR(
    MergeMultiListFeatureTensors,
    MergeMultiListFeatureTensorsOp<CPUContext>);
REGISTER_CPU_OPERATOR(
    MergeMultiListFeatureTensorsGradient,
    MergeMultiListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiListFeatureTensors)
    .SetDoc(
        'Merge given multi-feature tensors with list features into one.' + doc)
    .NumInputs([](int n) { return n >= 4 && n % 4 == 0; })
    .NumOutputs(4)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values_lengths', '.values.lengths')
    .Input(3, 'in1_values_values', '.values.values')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_values', '.values.values');
OPERATOR_SCHEMA(MergeMultiListFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with list features '
        'into many.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values_lengths', '.values.lengths')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_values_grad', '.values.values_grad');
    
    ```
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    )DOC')
    .Arg(
        'values',
        '*(type depends on dtype, Required=True)* The value of the elements to go in the *output* tensor.',
        true /* required */)
    .Arg(
        'dtype',
        'The data type for the elements of the output tensor. Strictly must be one of the types from DataType enum in TensorProto.')
    .Arg(
        'shape',
        '*(type: [int])* Desired shape of the *output* tensor.')
    .Arg(
        'extra_shape',
        '*(type: [int])* The additional dimensions appended at the end of the *shape* indicated by the input blob. Cannot set the *extra_shape* argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '*(type: bool; default: False)* set to *True* to use the *input* as shape. First, input must be in CPU context.')
    .Input(
        0,
        'input',
        '(Optional) 1D tensor specifying the shape of the output. Must be used with *input_as_shape=True*')
    .Output(
        0,
        'output',
        'Output tensor with desired dimension filled with specified data. If the shape argument is set, this is the shape specified, and if the *input* exists and *input_as_shape=True*, it is the shape specified by the *input* tensor.')
    .TensorInferenceFunction(FillerTensorInference<>);
    
    namespace caffe2 {
    }
    
    REGISTER_CUDA_OPERATOR(LC, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LCGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
      // Sets up the stuff shared by all tests in this test case.
  //
  // Google Test will call Foo::SetUpTestCase() before running the first
  // test in test case Foo.  Hence a sub-class can define its own
  // SetUpTestCase() method to shadow the one defined in the super
  // class.
  static void SetUpTestCase() {}
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
        static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
        static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
        static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
        static_cast<T>(v42_)};
    return ValuesIn(array);
  }
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    // Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.
    }
    
    #include 'sample2.h'
    
    
    {
    {      // 2. Resets the member variables.
      head_ = last_ = NULL;
      size_ = 0;
    }
  }
    
    public:
  DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode);
    
    #include 'common.h'
    
        uint16_t port;
    auto connection = make_unique<DHTConnectionImpl>(family);
    {
      port = e->getBtRegistry()->getUdpPort();
      const std::string& addr = e->getOption()->get(
          family == AF_INET ? PREF_DHT_LISTEN_ADDR : PREF_DHT_LISTEN_ADDR6);
      // If UDP port is already used, use the same port
      // number. Normally IPv4 port is available, then IPv6 port is
      // (especially for port >= 1024). We don't loose much by doing
      // this. We did the same thing in TCP socket. See BtSetup.cc.
      bool rv;
      if (port == 0) {
        auto sgl =
            util::parseIntSegments(e->getOption()->get(PREF_DHT_LISTEN_PORT));
        sgl.normalize();
        rv = connection->bind(port, addr, sgl);
      }
      else {
        rv = connection->bind(port, addr);
      }
      if (!rv) {
        throw DL_ABORT_EX('Error occurred while binding UDP port for DHT');
      }
      localNode->setPort(port);
    }
    A2_LOG_DEBUG(fmt('Initialized local node ID=%s',
                     util::toHex(localNode->getID(), DHT_ID_LENGTH).c_str()));
    auto tracker = std::make_shared<DHTMessageTracker>();
    auto routingTable = make_unique<DHTRoutingTable>(localNode);
    auto factory = make_unique<DHTMessageFactoryImpl>(family);
    auto dispatcher = make_unique<DHTMessageDispatcherImpl>(tracker);
    auto receiver = make_unique<DHTMessageReceiver>(tracker);
    auto taskQueue = make_unique<DHTTaskQueueImpl>();
    auto taskFactory = make_unique<DHTTaskFactoryImpl>();
    auto peerAnnounceStorage = make_unique<DHTPeerAnnounceStorage>();
    auto tokenTracker = make_unique<DHTTokenTracker>();
    // For now, UDPTrackerClient was enabled along with DHT
    auto udpTrackerClient = std::make_shared<UDPTrackerClient>();
    const auto messageTimeout =
        e->getOption()->getAsInt(PREF_DHT_MESSAGE_TIMEOUT);
    // wiring up
    tracker->setRoutingTable(routingTable.get());
    tracker->setMessageFactory(factory.get());
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2

    
    #include <memory>
    
      unsigned char secret_[2][SECRET_SIZE];