
        
        #define INSTANTIATE_LAYER_GPU_FUNCS(classname) \
  INSTANTIATE_LAYER_GPU_FORWARD(classname); \
  INSTANTIATE_LAYER_GPU_BACKWARD(classname)
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See data_layer.cpp for an example.
   */
  void Transform(const Datum& datum, Blob<Dtype>* transformed_blob);
    
    /**
 * @brief Get a specific filler from the specification given in FillerParameter.
 *
 * Ideally this would be replaced by a factory pattern, but we will leave it
 * this way for now.
 */
template <typename Dtype>
Filler<Dtype>* GetFiller(const FillerParameter& param) {
  const std::string& type = param.type();
  if (type == 'constant') {
    return new ConstantFiller<Dtype>(param);
  } else if (type == 'gaussian') {
    return new GaussianFiller<Dtype>(param);
  } else if (type == 'positive_unitball') {
    return new PositiveUnitballFiller<Dtype>(param);
  } else if (type == 'uniform') {
    return new UniformFiller<Dtype>(param);
  } else if (type == 'xavier') {
    return new XavierFiller<Dtype>(param);
  } else if (type == 'msra') {
    return new MSRAFiller<Dtype>(param);
  } else if (type == 'bilinear') {
    return new BilinearFiller<Dtype>(param);
  } else {
    CHECK(false) << 'Unknown filler name: ' << param.type();
  }
  return (Filler<Dtype>*)(NULL);
}
    
    
 protected:
  /** The protobuf that stores the layer parameters */
  LayerParameter layer_param_;
  /** The phase: TRAIN or TEST */
  Phase phase_;
  /** The vector that stores the learnable parameters as a set of blobs. */
  vector<shared_ptr<Blob<Dtype> > > blobs_;
  /** Vector indicating whether to compute the diff of each param blob. */
  vector<bool> param_propagate_down_;
    
    
    {  // extra temporarary variables is used to carry out sums/broadcasting
  // using BLAS
  Blob<Dtype> batch_sum_multiplier_;
  Blob<Dtype> num_by_chans_;
  Blob<Dtype> spatial_sum_multiplier_;
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
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    RANGES dimensions description:
1: represents list of examples within a batch
2: represents list features
3: two values which are start and length or a range (to be applied on DATA)
    
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
    
    
    {          return out;
        });
    
    
    {}
    
    namespace php {
struct Program;
}
struct Index;
    
    void Assembler::cmpb(const Reg64& rs, const Reg64& ra, const Reg64& rb) {
  EmitXForm(31, rn(rs), rn(ra), rn(rb), 508);
}
    
    //////////////////////////////////////////////////////////////////////
    
    String ArrayDirectory::path() {
  if (!m_it) {
    return empty_string();
  }
    }
    
    
    {    if (show) {
      newargv.push_back('-w');
    } else {
      newargv.push_back(lint ? '-l' : '-f');
    }
    newargv.push_back(tmp);
    newargv.push_back('--temp-file');
  }
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
        /*virtual*/ Dictionary LearnerFSAdaGrad::CreateCheckpoint() /*override*/
    {
        auto dict = LearnerBase::CreateCheckpoint();
        dict[smoothedCountKey] = m_smoothedCount;
        return dict;
    }
    
        void NDMask::MarkSectionAs(const std::vector<size_t>& sectionOffset, const NDShape& sectionShape, MaskKind maskKind)
    {
        // TODO: Implement batching of masking operation for masks residing on GPUs to avoid making
        // GPU invocations for each MaskSection call.
    }
    
            template <typename ElementType>
        std::pair<std::shared_ptr<const Microsoft::MSR::CNTK::Matrix<ElementType>>, std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>> PackedData()
        {
            if (!m_isPacked)
                InvalidArgument('PackedValue::PackedData called on a Value object that has already been unpacked.');
    }
    
    //IsLegacyReader - Returns true if one of the readers is a legacy reader, false otherwise.
bool DataReader::IsLegacyReader() const
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        auto currReaderIter = m_dataReaders.find(m_ioNames[i]);
        assert(currReaderIter != m_dataReaders.end());
    }
    }
    
    using namespace std;
    
    
    
    UnicodeString &ScientificNumberFormatter::MarkupStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets & /*unusedDecimalFormatSets*/,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            appendTo.append(fBeginMarkup);
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getEndIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(fEndMarkup);
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    ScriptSet &ScriptSet::parseScripts(const UnicodeString &scriptString, UErrorCode &status) {
    resetAll();
    if (U_FAILURE(status)) {
        return *this;
    }
    UnicodeString oneScriptName;
    for (int32_t i=0; i<scriptString.length();) {
        UChar32 c = scriptString.char32At(i);
        i = scriptString.moveIndex32(i, 1);
        if (!u_isUWhiteSpace(c)) {
            oneScriptName.append(c);
            if (i < scriptString.length()) {
                continue;
            }
        }
        if (oneScriptName.length() > 0) {
            char buf[40];
            oneScriptName.extract(0, oneScriptName.length(), buf, sizeof(buf)-1, US_INV);
            buf[sizeof(buf)-1] = 0;
            int32_t sc = u_getPropertyValueEnum(UCHAR_SCRIPT, buf);
            if (sc == UCHAR_INVALID_CODE) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
            } else {
                this->set((UScriptCode)sc, status);
            }
            if (U_FAILURE(status)) {
                return *this;
            }
            oneScriptName.remove();
        }
    }
    return *this;
}
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    U_NAMESPACE_END
    
    /**
 * An interval of allowed significant digit counts.
 */
class U_I18N_API SignificantDigitInterval : public UMemory {
public:
    }
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    // set the key to a 'bogus' or invalid state
CollationKey&
CollationKey::setToBogus()
{
    fFlagAndLength &= 0x80000000;
    fHashCode = kBogusHashCode;
    }
    
    
    {    friend
    void getCallback(redisAsyncContext *, void *, void *);
};
    
            auto iter = cache_map.find(key);
        if (iter != cache_map.end())
        {
            iter->second->second.first = expire_time;
            iter->second->second.second = val;
            cache_list.splice(cache_list.begin(), cache_list, iter->second);
            return;
        }
    
        SwooleG.main_reactor = (swReactor *) sw_malloc(sizeof(swReactor));
    swReactor_create(SwooleG.main_reactor, SW_REACTOR_MAXEVENTS);