
        
          std::vector<string> output;
  string input_tensors_needed_out;
  tensorflow::Status status = RunCppShapeInferenceImpl(
      graph_def_version, serialized_node_def, input_serialized_shapes,
      input_constant_tensor_values_v, input_constant_tensor_as_shape_values,
      &output, &input_tensors_needed_out);
    
    namespace tensorflow {
    }
    
    // This file contains APIs that assume a StreamExecutor is backed by CUDA.
// It reaches into the CUDA implementation to activate an underlying CUDA
// context.
//
// Having this file separate from cuda_gpu_executor.h means that dependent
// code does not also have to depend on cuda.h.
    
    namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
    bool PageIterator::IsWithinFirstTextlineOfParagraph() const {
  PageIterator p_start(*this);
  p_start.RestartParagraph();
  return p_start.it_->row() == it_->row();
}
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
      WERD_RES *word2 = new WERD_RES(*word);
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
    template <class ElemType>
class InputValueBase : public ComputationNode<ElemType>, public NumInputs<0>, public ITakesDynamicAxis
{
    typedef ComputationNode<ElemType> Base;
    UsingComputationNodeMembers;
    }
    
    CardinalSplineBy* CardinalSplineBy::reverse() const
{
    PointArray *copyConfig = _points->clone();
    }
    
        //
    // Overrides
    //
    virtual MoveBy* clone() const override;
    virtual MoveBy* reverse() const  override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time in seconds
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    MoveBy():_is3D(false) {}
    virtual ~MoveBy() {}
    
    void ActionManager::removeActionByTag(int tag, Node *target)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    }
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    void AtlasNode::setOpacityModifyRGB(bool value)
{
    Color3B oldColor = this->getColor();
    _isOpacityModifyRGB = value;
    this->setColor(oldColor);
}
    
    using folly::Function;
using folly::FunctionRef;
    
    BENCHMARK(skip_overhead, iter) {
  auto prev = FLAGS_minloglevel;
  FLAGS_minloglevel = 2;
    }
    
    // clang-format off
#include <cstddef>
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}