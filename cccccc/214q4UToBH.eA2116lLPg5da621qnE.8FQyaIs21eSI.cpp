
        
          CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnProxyCreated,
                     GObject*,
                     GAsyncResult*);
  CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnNameOwnerChanged,
                     GObject*,
                     GParamSpec*);
    
    bool Converter<PersistentDictionary>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             PersistentDictionary* out) {
  if (!val->IsObject())
    return false;
  *out = PersistentDictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    
    {}  // namespace
    
    namespace mate {
    }
    
    template <>
struct Converter<Promise> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, Promise val);
  // TODO(MarshallOfSound): Implement FromV8 to allow promise chaining
  //                        in native land
  // static bool FromV8(v8::Isolate* isolate,
  //                    v8::Local<v8::Value> val,
  //                    Promise* out);
};
    
    void GlobalMenuBarRegistrarX11::RegisterXID(unsigned long xid) {
  DCHECK(registrar_proxy_);
  std::string path = electron::GlobalMenuBarX11::GetPathForWindow(xid);
    }
    
    // We will use the boost shared_ptr instead of the new C++11 one mainly
// because cuda does not work (at least now) well with C++11 features.
using boost::shared_ptr;
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/neuron_layer.hpp'
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
        Rational Pow(Rational const& base, Rational const& pow);
    Rational Root(Rational const& base, Rational const& root);
    Rational Fact(Rational const& rat);
    Rational Mod(Rational const& a, Rational const& b);
    
                    uint64_t w64Bits = result.ToUInt64_t();
                uint64_t lsb = ((w64Bits & 0x01) == 1) ? 1 : 0;
                w64Bits >>= 1; // RShift by 1
                w64Bits |= (lsb << (m_dwWordBitWidth - 1));
    
                uint64_t w64Bits = rhs.ToUInt64_t();
            bool fMsb = (w64Bits >> (m_dwWordBitWidth - 1)) & 1;
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
     private:
  /*! \brief indexes into top_ */
  enum { DATA = 0, LABEL, NR_SUPPORTED_TOP_ITEMS };
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
       out = data / sqrt(data.shape[-1])
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file ndarray_op.cc
 * \brief
 * \author Junyuan Xie
*/
#include './ndarray_op-inl.h'
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
    
    MXNET_REGISTER_OP_PROPERTY(IdentityAttachKLSparseReg, IdentityAttachKLSparseRegProp)
.describe('Apply a sparse regularization to the output a sigmoid activation function.')
.add_argument('data', 'NDArray-or-Symbol', 'Input data.')
.add_arguments(IdentityAttachKLSparseRegParam::__FIELDS__());
    
    /*!
 * \brief concat CSRNDArray on the first dimension.
 */
struct concat_csr_first_dim {
  /*!
   * \param i              the i-th row of the input ndarray
   * \param out_idx        output csr ndarray column indices
   * \param out_data       output csr ndarray data
   * \param out_indptr     output csr ndarray row index pointer
   * \param in_idx         input csr ndarray column indices
   * \param in_data        input csr ndarray data
   * \param in_indptr      input csr ndarray row index pointer
   * \param indptr_offset  offset for ouput ndarray row index pointer
   * \param idx_offset     offset for ouput ndarray column indices
   */
  template<typename DType, typename RType, typename IType>
  MSHADOW_XINLINE static void Map(int i, const OpReqType req,
                                  DType* out_data, const DType* in_data,
                                  RType* out_indptr, const RType* in_indptr,
                                  IType* out_idx, const IType* in_idx,
                                  const nnvm::dim_t indptr_offset,
                                  const nnvm::dim_t idx_offset) {
    if (i == 0) out_indptr[0] = 0;
    out_indptr[i+1+indptr_offset] = in_indptr[i+1] + idx_offset;
    for (nnvm::dim_t j = in_indptr[i]; j < in_indptr[i+1]; ++j) {
      KERNEL_ASSIGN(out_idx[j+idx_offset], req, in_idx[j]);
      KERNEL_ASSIGN(out_data[j+idx_offset], req, in_data[j]);
    }
  }
};
    
    namespace CNTK
{
    static Matrix<char>* AllocateMatrix(const NDShape& viewShape, const DeviceDescriptor& device)
    {
        auto matrixDims = GetMatrixDimensions(viewShape);
        return new Matrix<char>(matrixDims.first, matrixDims.second, AsCNTKImplDeviceId(device));
    }
    }
    
    
    {        const auto& type = dict[typeKey].Value<std::wstring>();
        if (type != typeValue) 
        {
            const auto& version = GetVersion(dict);
            LogicError('Unexpected '%ls':'%ls' in place of '%ls':'%ls' (%s).',
                       typeKey.c_str(), type.c_str(), typeKey.c_str(), typeValue.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        }
    }
    
            for (auto outputToFetch : outputsToFetch)
        {
            if (outputToFetch.second == nullptr)
                outputsToFetch[outputToFetch.first] = outputs[outputToFetch.first];
        }
    
            auto matrix = sequenceData->GetMatrix<ElementType>();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(DeviceDescriptor::CPUDevice()), true);
        auto cpuSparseMatrix = matrix->m_CPUSparseMatrix;
        auto currentSequenceNumCols = matrix->GetNumCols();
        auto currentSequenceColStarts = cpuSparseMatrix->SecondaryIndexLocation();
        auto currentSequenceNumNonZeroValues = currentSequenceColStarts[currentSequenceNumCols] - currentSequenceColStarts[0];
        std::copy(cpuSparseMatrix->MajorIndexLocation(), cpuSparseMatrix->MajorIndexLocation() + currentSequenceNumNonZeroValues, std::back_inserter(rowIndices));
        std::copy((char*)(cpuSparseMatrix->Data()), (char*)(cpuSparseMatrix->Data() + currentSequenceNumNonZeroValues), std::back_inserter(nonZeroValues));
    
        void VariableFields::SetValueInitialization(const ParameterInitializer& initializationConfig, const DeviceDescriptor& device)
    {
        if (m_value != nullptr)
            LogicError('Variable '%S': Value initialization config cannot be set if a value already exists', AsString().c_str());
    }
    
    size_t DataReader::GetNumParallelSequencesForFixingBPTTMode()
{
    size_t nNbr = 0;
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        IDataReader* ptr = m_dataReaders[m_ioNames[i]];
        if (nNbr == 0)
            nNbr = ptr->GetNumParallelSequencesForFixingBPTTMode();
        else if (nNbr != ptr->GetNumParallelSequencesForFixingBPTTMode())
            LogicError('GetNumParallelSequences: number of slices in each minibatch not consistent for these streams');
    }
    return nNbr;
}
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    using namespace std;
    
    
    {            for (size_t i = 0; i < 2; i++)
                Input(i)->Gradient().TransferToDeviceIfNotThere(m_deviceId, true);
        }
        catch (...)
        {
            fprintf(stderr, 'LookupTableNode unit test is not passed!');
            return false;
        }
    
        // a count of how many sequnces are packed for a particular frame.
    // reset to zero, and compute from current layout information
    // this information is useful when creating the tensor descriptors for CuDNN.
    numSequencesForFrame2.resize(maxSeqLength);
    fill(numSequencesForFrame2.begin(), numSequencesForFrame2.end(), 0L);