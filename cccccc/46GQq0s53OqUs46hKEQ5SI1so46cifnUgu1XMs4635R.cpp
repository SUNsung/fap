
        
        
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    TEST(DBTest, Randomized) {
  Random rnd(test::RandomSeed());
  do {
    ModelDB model(CurrentOptions());
    const int N = 10000;
    const Snapshot* model_snap = NULL;
    const Snapshot* db_snap = NULL;
    std::string k, v;
    for (int step = 0; step < N; step++) {
      if (step % 100 == 0) {
        fprintf(stderr, 'Step %d of %d\n', step, N);
      }
      // TODO(sanjay): Test Get() works
      int p = rnd.Uniform(100);
      if (p < 45) {                               // Put
        k = RandomKey(&rnd);
        v = RandomString(&rnd,
                         rnd.OneIn(20)
                         ? 100 + rnd.Uniform(100)
                         : rnd.Uniform(8));
        ASSERT_OK(model.Put(WriteOptions(), k, v));
        ASSERT_OK(db_->Put(WriteOptions(), k, v));
    }
    }
    }
    }
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
      // MinTopBlobs==1 guarantees at least one top blob
  CHECK_GE(hdf_blobs_[0]->num_axes(), 1) << 'Input must have at least 1 axis.';
  const int num = hdf_blobs_[0]->shape(0);
  for (int i = 1; i < top_size; ++i) {
    CHECK_EQ(hdf_blobs_[i]->shape(0), num);
  }
  // Default to identity permutation.
  data_permutation_.clear();
  data_permutation_.resize(hdf_blobs_[0]->shape(0));
  for (int i = 0; i < hdf_blobs_[0]->shape(0); i++)
    data_permutation_[i] = i;
    
    #include <vector>
    
    #include 'caffe/filler.hpp'
#include 'caffe/layers/inner_product_layer.hpp'
#include 'caffe/util/math_functions.hpp'
    
      /**
   * The network backward should take no input and output, since it solely
   * computes the gradient w.r.t the parameters, and the data has already been
   * provided during the forward pass.
   */
  void Backward();
  void BackwardFromTo(int start, int end);
  void BackwardFrom(int start);
  void BackwardTo(int end);
    
    template <typename Dtype>
Solver<Dtype>::Solver(const string& param_file)
    : net_(), callbacks_(), requested_early_exit_(false) {
  SolverParameter param;
  ReadSolverParamsFromTextFileOrDie(param_file, &param);
  Init(param);
}
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
                    // If cmpResult < 0:
                // Success case. eg. max is '127', and current number is say '11'. The second digit '1' being <
                // corresponding digit '2', means all digits are possible to append, like 119 will still be < 127
    
    class ISerializeCommandVisitor
{
public:
    virtual void Visit(_In_ COpndCommand& opndCmd) = 0;
    virtual void Visit(_In_ CUnaryCommand& unaryCmd) = 0;
    virtual void Visit(_In_ CBinaryCommand& binaryCmd) = 0;
    virtual void Visit(_In_ CParentheses& paraCmd) = 0;
};

    
    #include <memory> // for std::shared_ptr
#include 'CalculatorVector.h'
#include 'Command.h'
    
    using namespace Platform;
using namespace Windows::UI::Xaml::Data;
    
    /// <summary>
/// Notifies listeners that a property value has changed.
/// </summary>
/// <param name='propertyName'>Name of the property used to notify listeners.</param>
void BindableBase::OnPropertyChanged(String ^ propertyName)
{
    PropertyChanged(this, ref new PropertyChangedEventArgs(propertyName));
}
    
    
    {  switch (dtype) {
  case mshadow::kFloat32:
    FCBackward<xpu, float>(ctx, param, out_grad, in_data, req, outputs);
    break;
  case mshadow::kFloat64:
    FCBackward<xpu, double>(ctx, param, out_grad, in_data, req, outputs);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 fully connected layer is currently'
                  'only supported by CuDNN version.';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
}
    
    
    {
    {
    {
    {          index_t offset_trans_diff = (((n * num_classes + class_id) * 2)
            * part_size + part_h) * part_size + part_w;
          bottom_trans_diff[offset_trans_diff] += diff_x;
          bottom_trans_diff[offset_trans_diff + part_size * part_size] += diff_y;
        }
      }
    }
  }
    
    template<int req>
struct IndexArrayKernel {
  MSHADOW_XINLINE static void Map(int i,
                                  int64_t* out_data,
                                  const int n,
                                  const int64_t* workspace) {
    for (ptrdiff_t j = 0; j < n; j++) {
      int64_t upper = workspace[ptrdiff_t(2) * j];
      int64_t lower = workspace[ptrdiff_t(2) * j + ptrdiff_t(1)];
      KERNEL_ASSIGN(out_data[ptrdiff_t(i) * ptrdiff_t(n) + j], req, (i % upper) / lower);
    }
  }
};
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    
    {
    {    // Eject all bytes
    int tmp_bytes =
        static_cast<int>(std::ceil(static_cast<float>(stored_bits) / 8));
    for (int j = 0; j < tmp_bytes; j++) {
      int shift_bits = static_cast<int>(stored_bits) - (j + 1) * 8;
      if (shift_bits >= 0) {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp >> shift_bits);
      } else {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp << std::abs(shift_bits));
      }
      buffer_position++;
    }
  }
};
    
    #else
/*!
 * \brief global random engine
 */
using GlobalRandomEngine = RandomEngine;
#endif  // XGBOOST_CUSTOMIZE_GLOBAL_PRNG
    
            /*virtual*/ void SaveToCheckPoint(File& fstream) override
        {
            if (m_pMPI->IsMainNode())
            {
                fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BMACKP');
                fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BOptions');
                fstream << m_resetSGDMomentumAfterAggregation;
                fstream.PutMarker(FileMarker::fileMarkerEndSection, L'EOptions');
    }
    }
    
    
    {            if (EqualCI(initString, L'fixedValue'))
                m_net->InitLearnableParameters(nodePtr, L'fixedValue', value);
            else if (EqualCI(initString, L'uniform'))
                m_net->InitLearnableParameters(nodePtr, L'uniform',  initValueScale, forcedRandomSeed < 0 ? randomSeed++ : (unsigned long)forcedRandomSeed, initOnCPUOnly);
            else if (EqualCI(initString, L'gaussian'))
                m_net->InitLearnableParameters(nodePtr, L'gaussian', initValueScale, forcedRandomSeed < 0 ? randomSeed++ : (unsigned long)forcedRandomSeed, initOnCPUOnly);
            else if (EqualCI(initString, L'bilinear'))
            {
                const size_t kernelWidth = node->GetOptionalParameter('kernelWidth', '0');
                const size_t kernelHeight = node->GetOptionalParameter('kernelHeight', '0');
                assert(kernelWidth > 0 && kernelHeight > 0);
                m_net->InitLearnableParametersWithBilinearFill<ElemType>(nodePtr, kernelWidth, kernelHeight);
            }
            else if (EqualCI(initString, L'fromFile'))
            {
                std::string initFromFilePath = node->GetOptionalParameter('initFromFilePath', '');
                if (initFromFilePath == '')
                    RuntimeError('initFromFilePath must be set when using \'fromFile\' initialization method');
                if (initFromFilePath[0] == '\'' && initFromFilePath[initFromFilePath.size() - 1] == '\'')
                    // remove the opening and closing double quotes
                    initFromFilePath = initFromFilePath.substr(1, initFromFilePath.size() - 2);
                if (!fexists(initFromFilePath))
                    RuntimeError('File pointed to by initFromFilePath does not exist: %s', initFromFilePath.c_str());
                dynamic_pointer_cast<LearnableParameter<ElemType>>(nodePtr)->InitFromFile(Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(initFromFilePath));
            }
            else if (EqualCI(initString, L'heNormal'))
                m_net->InitLearnableParameters(nodePtr, L'heNormal', initValueScale, forcedRandomSeed < 0 ? randomSeed++ : (unsigned long)forcedRandomSeed, initOnCPUOnly);
            else
                RuntimeError(''init' must be one of the values of [ uniform | gaussian | fixedValue | fromFile | heNormal | bilinear]');
        }
    }
    else if (cnNodeType == L'Constant')
    {
        if (parameter.size() != 1)
            RuntimeError('Constant should have 1 fixed parameter [val] and two optional parameters [rows=[1|yourvalue], cols=[1|yourvalue]].');
    
            bool addDropoutNodes = config('addDropoutNodes', 'false');
    
        // create or load from checkpoint
    shared_ptr<ComputationNetwork> net = !loadNetworkFromCheckpoint ? createNetworkFn(deviceId) : ComputationNetwork::CreateFromFile<ElemType>(deviceId, modelFileName);
    
                // convert wstring toks2[0] to T val and check type
            parse(toks2[0], val);
    
        enum class MAWorkerStatus
    {
        DataProcessing = 0,
        DataEnd = 1, 
        NOTSTARTED = 2 
    };
    
        // Do the same via ValueRefs
    ValueRefs<float> inputRefs(1);
    inputRefs[0].m_buffer.InitFrom(inputBuffer[0].m_buffer);
    inputRefs[0].m_colIndices.InitFrom(inputBuffer[0].m_colIndices);
    inputRefs[0].m_indices.InitFrom(inputBuffer[0].m_indices);
    ValueRefs<float> outputRefs(1);
    std::vector<float> output(3);
    outputRefs[0].m_buffer.InitFrom(output);
    eval->ForwardPass(inputRefs, outputRefs);
    BOOST_CHECK_EQUAL_COLLECTIONS(output.begin(), output.end(), expected.begin(), expected.end());
    
    template <typename ElemType>
void AggregateAccumulatorValuesAndUpdateEpochEvaluation(
    std::shared_ptr<ComputationNetwork> net,
    std::set<std::shared_ptr<ComputationNodeBase>> evalNodesWhichAccumulateResult,
    std::shared_ptr<DistGradHeader> gradHeader,
    std::shared_ptr<MPIWrapper> mpi,
    std::vector<EpochCriterion>& epochEvalErrors,
    const std::vector<ComputationNodeBasePtr>& evaluationNodes,
    CriterionAccumulatorBase& localEpochEvalErrors,
    std::function<bool(ComputationNodeBasePtr)> containsAccumulatedResult,
    size_t packThresholdSizeInBytes = DEFAULT_PACK_THRESHOLD_SIZE_IN_BYTES)
{
    // Each node contains accumulated values for part of the data set, we have to aggregate accumulated values.
    AggregateAccumulatorValuesAndUpdateEvaluation<ElemType>(net, evalNodesWhichAccumulateResult, gradHeader, mpi, packThresholdSizeInBytes);
    }
    
        // output changed array
    std::cout << array << '\n';