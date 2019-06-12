
        
        string Status::ToString() const {
  if (error_code_ == error::OK) {
    return 'OK';
  } else {
    if (error_message_.empty()) {
      return error::CodeEnumToString(error_code_);
    } else {
      return error::CodeEnumToString(error_code_) + ':' +
          error_message_;
    }
  }
}
    
    
    {  return 0;
}

    
        std::vector<std::pair<string,string>> option_pairs;
    ParseGeneratorParameter(parameter, &option_pairs);
    
    
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    namespace caffe2 {
    }
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    template <typename Dtype>
class Batch {
 public:
  Blob<Dtype> data_, label_;
};
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    #include <utility>
#include <vector>
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }
    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::const_reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }