
        
        
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 2));
    }
    input_blob_names.push_back(GO(2));
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    workspace.RunOperatorOnce(op)
print('Out:\n', workspace.FetchBlob('out'))
    
    REGISTER_CUDA_OPERATOR(LC2D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC2DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';