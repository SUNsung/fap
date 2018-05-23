
        
          {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__long,&_huff_book__16u1__long,
   &_resbook_16u_1,&_resbook_16u_1}
};
static const vorbis_residue_template _res_16u_2[]={
  {1,0,32,  &_residue_44_hi_un,
   &_huff_book__16u2__short,&_huff_book__16u2__short,
   &_resbook_16u_2,&_resbook_16u_2},
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c3_s_long,&_huff_book__44c3_s_long,
   &_resbook_44s_3,&_resbook_44s_3}
};
static const vorbis_residue_template _res_44s_4[]={
  {2,0,16,  &_residue_44_mid,
   &_huff_book__44c4_s_short,&_huff_book__44c4_s_short,
   &_resbook_44s_4,&_resbook_44s_4},
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
        intargvector m_mbSize;
    bool m_truncated; // do BPTT
    // BUGBUG: The 'Truncated' option is duplicated in the reader and must be set to the same there (e.g. by defining in the config on an outer enclosing level, like current samples).
    //         We really should only read it in SGD and pass it ourselves on to the Reader, instead of it being a Reader parameter.
    // BUGBUG: If m_truncated, then m_mbSize is interpreted as truncation length; the actual MB size is a combination of that and the #parallel sequences specified in the reader.
    // TODO: do not specify 'Truncated' but 'TruncatedLength', set m_truncated so given, and let m_mbSize control how many #parallel sequences the reader is allowed to pack into an MB.
    size_t m_maxSamplesInRAM;
    // This is related with subminibatch implementation
    // maxSamplesInRAM denotes how many samples we used in forward-backward on net.
    // Due to the GPU memory limitations, it is sometime not possible to hold the m_mbSize in RAM.
    // To mitigate this issue, we adopt the sub-minibatch implementation, where
    // each m_mbSize[epoch] is divided by a few sub-minibatch of which size will be no more than m_maxSamplesInRAM
    // a forward-backward is performed for each sub-minibatch; a model update is performed after each minibatch
    size_t m_numSubminiBatches;
    // alternative method to specify how to split minibatches into subminibatches
    // default is 1, which means no subminibatch is used
    // if m_maxTempMemSizeInSamples = SIZE_MAX (which means users do not specify the option) and m_numSubminiBatches > 1
    // we divide one minibatch to m_numSubminiBatches subMinibatches
    
        REGISTER_OPERATOR_SCHEMA(RNN)
        .Description(R'DOC(
            Computes an one-layer simple RNN. This operator is usually supported
            via some custom implementation such as CuDNN.
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Flatten)
        .Description('Flattens the input tensor into a 2D matrix, '
            'keeping the first dimension unchanged.')
        .Input('input', 'A tensor of rank >= 2.', 'T')
        .Output('output', 'A tensor of rank 2 with the contents of the input tensor, '
            'with first dimension equal first dimension of input, and remaining '
            'input dimensions flatenned into the inner dimension of the output.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
    
    REGISTER_OPERATOR_SCHEMA(Normalizer)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be encoded', 'T')
        .Output('Y', 'encoded output data', 'tensor(float)')
        .Description(R'DOC(
            Normalize the input.  There are three normalization modes,
            which have the corresponding formulas:
            Max .. math::     max(x_i)
            L1  .. math::  z = ||x||_1 = \sum_{i=1}^{n} |x_i|
            L2  .. math::  z = ||x||_2 = \sqrt{\sum_{i=1}^{n} x_i^2}
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('norm', 'enum 'MAX', 'L1', 'L2'', AttrType::AttributeProto_AttributeType_STRING);
    
        // Returns all frames of a given utterance.
    msra::dbn::matrixstripe GetUtteranceFrames(size_t index) const
    {
        if (!IsInRam())
        {
            LogicError('GetUtteranceFrames was called when data have not yet been paged in.');
        }
    }
    
    LatticeDeserializer::LatticeDeserializer(
    CorpusDescriptorPtr corpus,
    const ConfigParameters& cfg,
    bool primary)
    : DataDeserializerBase(primary),
      m_verbosity(0),
      m_corpus(corpus)
{
    if (primary)
        LogicError('Lattice deserializer does not support primary mode, it cannot control chunking. '
            'Please specify HTK deserializer as the first deserializer in your config file.');
    }
    
            size_t cachesizeV = 54096;                                     // this was tuned--smaller is better (50k is quite little!!)
        const size_t colsizeV = colstride * sizeof(float);             // stored bytes per column of V
        size_t cacheablecolsV = (cachesizeV - 1) / colsizeV + (1 - 1); // #cols of V that fit into cache; -1 = space for row of M
        cacheablecolsV = (cacheablecolsV + 3) & ~3;                    // align (round up to multiples of 4)
    
    // SectionStats - section to hold statistics for a featureSet
class SectionStats : public Section
{
private:
    // single pass measures
    size_t m_count; // number of elements
    double m_max;   // maximum value we have seen
    double m_min;   // minimum value we have seen
    double m_sum;   // sum of all numbers we have seen
    double m_sum2;  // sum of the squares of all numbers we have seen
    }
    
    void GranularGPUDataTransferer::WaitForSyncPointOnAssignStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetAssignStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
    #include <yoga/Yoga.h>
    
    using InstructionPointer = const void*;
    
    _Unwind_Reason_Code unwindCallback(struct _Unwind_Context* context, void* arg) {
  BacktraceState* state = reinterpret_cast<BacktraceState*>(arg);
  auto absoluteProgramCounter =
      reinterpret_cast<InstructionPointer>(_Unwind_GetIP(context));
    }
    
     public: // Setters
    
        double getAspectRatio(void) const;
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }
    
      // The STL assumes rvalue references are unique and for simplicity's sake, we
  // make the same assumption here, that &ref != this.
  RefPtr<T>& operator=(RefPtr<T>&& ref) {
    unrefIfNecessary(m_ptr);
    m_ptr = ref.m_ptr;
    ref.m_ptr = nullptr;
    return *this;
  }
    
    #include <fb/visibility.h>
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }