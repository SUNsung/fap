
        
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
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/c_api.h>
#include <nnvm/symbolic.h>
#include <nnvm/op.h>
#include <nnvm/graph.h>
#include <vector>
#include <atomic>
#include <utility>
#include <string>
#include <unordered_map>
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    // Set mode before backward
    caffe::CaffeMode::SetMode<xpu>();
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK_EQ(out_grad.size(), param_.num_out);
    for (int i = 0; i < param_.num_data; ++i)
      CHECK(req[i] != kAddTo) << 'caffe doesn't accm diff on bottom data';
    CHECK(in_data.size() == param_.num_data);
    }
    
      /*! \brief internal next function, inlined for fater processing. */
  inline bool Next_(void) {
    if (!base_->Next()) return false;
    const DataInst &src = base_->Value();
    this->SetOutImg(src);
    out_.data.resize(2);
    out_.data[0] = outimg_;
    out_.data[1] = src.data[1];
    out_.index = src.index;
    out_.extra_data = src.extra_data;
    return true;
  }
  /*!
   * \brief Set the output image, after augmentation and normalization.
   * \param src The source image.
   */
  inline void SetOutImg(const DataInst &src) {
    using namespace mshadow::expr;  // NOLINT(*)
    }
    
        template <>
    /*static*/ NDArrayViewPtr NDArrayView::RandomNormal<float16>(const NDShape& shape, double mean, double stdDev, unsigned long seed, const DeviceDescriptor& device)
    {
        return NDArrayView::_RandomNormal<float16, half>(shape, mean, stdDev, seed, device);
    }
    
        template <typename T>
    inline void ValidateType(const Dictionary& dict, const std::wstring& typeValue, size_t currentVersion)
    {
        if (!dict.Contains(typeKey))
        {
            const auto& version = GetVersion(dict);
            LogicError('Required key '%ls' is not found in the dictionary (%s).',
                       typeKey.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        } 
    }
    
            // this ensures that nobody will start writing to the model/checkpoint files, until
        // everybody is done reading them.
        DistributedCommunicatorPtr communicator = MPICommunicator();
        communicator->Barrier();
    
        //
    // Create NDMask for the 'sequences' if the 'sequences' do not have the same length.
    // It returns null if all the 'sequences' have the same length.
    //
    template <typename T>
    static NDMaskPtr CreateMask(size_t numElementsPerSample, const std::vector<std::vector<T>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device)
    {
        size_t numSequences = sequences.size();
        std::vector<size_t> sequenceLengths(numSequences);
        for (size_t i = 0; i < numSequences; ++i)
            sequenceLengths[i] = sequences[i].size() / numElementsPerSample;
    }
    
        private:
        bool m_isReadOnly;
        NDShape m_sampleShape;
        std::vector<Axis> m_sampleDynamicAxes;
        NDShape m_unpackedShape;
    
    #define NOMINMAX
#include 'Windows.h' // for HANDLE
    
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
    
    class Clock
{
public:
    static long long GetTimeStamp();
    static long long GetTicksPerSecond();
};
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    #include <folly/DefaultKeepAliveExecutor.h>
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
    
    {  T* get() const {
    return p_;
  }
  T* operator->() const {
    return p_;
  }
  explicit operator bool() const {
    return p_ == nullptr ? false : true;
  }
  bool operator==(const counted_ptr<T, Atom>& p) const {
    return get() == p.get();
  }
};