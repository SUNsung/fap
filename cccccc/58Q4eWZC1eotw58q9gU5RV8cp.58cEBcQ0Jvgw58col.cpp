inline bool is_smaller(const std::pair<int, float>& p1, const std::pair<int, float>& p2)
{
    return p1.second < p2.second;
}
    
        int pointsCount = cvtest::randInt(rng) % maxPointsCount;
    usedPointsCount = pointsCount == 0 ? 0 : cvtest::randInt(rng) % pointsCount;
    
    #ifndef __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
#define __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    void HHVM_FUNCTION(xhprof_enable, int64_t flags/* = 0 */,
                                  const Array& args /* = null_array */) {
  if (!RuntimeOption::EnableHotProfiler) {
    raise_warning('The runtime option Stats.EnableHotProfiler must be on to '
                  'use xhprof.');
    return;
  }
    }
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    namespace irgen {
    }
    
    struct DataBlockFull : std::runtime_error {
  std::string name;
    }
    
    #include 'hphp/runtime/base/req-list.h'
#include 'hphp/runtime/base/request-event-handler.h'
#include 'hphp/runtime/base/request-local.h'
#include 'hphp/runtime/base/req-ptr.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-resource.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/runtime/base/type-variant.h'
    
    namespace mxnet {
namespace R {
    }
    }
    
    namespace Rcpp {
  template<>
  inline bool is<mxnet::R::NDArray>(SEXP x) {
    if (TYPEOF(x) != EXTPTRSXP) return false;
    Rcpp::XPtr<mxnet::R::NDBlob> ptr(x);
    SEXP attr = ptr.attr('class');
    return attr != R_NilValue &&
        Rcpp::as<std::string>(attr) == 'MXNDArray';
    return true;
  }
}  // namespace Rcpp
#endif  // MXNET_RCPP_NDARRAY_H_

    
    
struct ROIAlignParam : public dmlc::Parameter<ROIAlignParam> {
  TShape pooled_size;
  float spatial_scale;
  int sample_ratio;
  DMLC_DECLARE_PARAMETER(ROIAlignParam) {
    DMLC_DECLARE_FIELD(pooled_size)
    .set_expect_ndim(2).enforce_nonzero()
    .describe('ROI Align output roi feature map height and width: (h, w)');
    DMLC_DECLARE_FIELD(spatial_scale).set_range(0.0, 1.0)
    .describe('Ratio of input feature map height (or w) to raw image height (or w). '
    'Equals the reciprocal of total stride in convolutional layers');
    DMLC_DECLARE_FIELD(sample_ratio).set_default(-1)
    .describe('Optional sampling ratio of ROI align, using adaptive size by default.');
  }
};
    
    
    { private:
  inline TBlob AsTBlob(const dmlc::Row<uint32_t, DType>& row, const TShape& shape) {
    CHECK_EQ(row.length, shape.Size())
        << 'The data size in CSV do not match size of shape: '
        << 'specified shape=' << shape << ', the csv row-length=' << row.length;
    const DType* ptr = row.value;
    return TBlob((DType*)ptr, shape, cpu::kDevMask, 0);  // NOLINT(*)
  }
  // dummy label
  mshadow::TensorContainer<cpu, 1, DType> dummy_label;
  std::unique_ptr<dmlc::Parser<uint32_t, DType> > label_parser_;
  std::unique_ptr<dmlc::Parser<uint32_t, DType> > data_parser_;
};
    
    // Transfer gradient and input and output to FGradient function
struct ElemwiseGradUseInOut {
  const char *op_name;
  std::vector<nnvm::NodeEntry> operator()(const nnvm::NodePtr& n,
                                          const std::vector<nnvm::NodeEntry>& ograds) const {
    std::vector<nnvm::NodeEntry> heads(ograds.begin(), ograds.end());
    for (auto& h : n->inputs) {
      heads.push_back(h);
    }
    index_t n_out = n->num_outputs();
    for (index_t i = 0; i < n_out; ++i) {
      heads.emplace_back(nnvm::NodeEntry{n, i, 0});
    }
    return MakeGradNode(op_name, n, heads, n->attrs.dict);
  }
};
    
    struct ElementWiseSumParam : public dmlc::Parameter<ElementWiseSumParam> {
  int num_args;
  DMLC_DECLARE_PARAMETER(ElementWiseSumParam) {
    DMLC_DECLARE_FIELD(num_args).set_lower_bound(1)
        .describe('Number of inputs to be summed.');
  }
};
    
    #if 0   // merge leftover?
        // This will automatically discard a large fraction of the data, useful if the training data is known to be highly correlated
        if (dataDecimationFactor)
        {
            auto& pMBLayout = net->GetMBLayoutPtrOfNetwork();
    }
    
    
    {        return Data()->AsScalar<ElementType>();
    }
    
    
    {        // perform the operation on one long vector
        msra::math::float4 threshold4(threshold);
        foreach_index (i, us4)
        {
            us4[i] &= ((us4[i] >= threshold4) | (us4[i] <= -threshold4));
        }
    }
    
        // Save the data into this section,
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized);
    
    void GranularGPUDataTransferer::CopyCPUToGPUAsync(const void* cpuBuffer, size_t numElements, size_t elementSize, void* gpuBuffer)
{
    PrepareDevice(m_deviceId);
    cudaMemcpyAsync(gpuBuffer, cpuBuffer, numElements * elementSize, cudaMemcpyHostToDevice, GetAssignStream()) || 'cudaMemcpyAsync failed';
}
    
        ComputationNetworkPtr net;
    
    template <class _T>
class const_array_ref
{
    const _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
    public:
    float4()
    {
    } // uninitialized
    float4(const float4& f4)
        : v(f4.v)
    {
    }
    float4& operator=(const float4& other)
    {
        v = other.v;
        return *this;
    }