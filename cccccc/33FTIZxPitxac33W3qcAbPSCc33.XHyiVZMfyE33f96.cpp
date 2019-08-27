
        
                buf_lock_t sindex_block(superblock->expose_buf(),
                                superblock->get_sindex_block_id(),
                                access_t::read);
    
                    bool sindex_exists = store.acquire_sindex_superblock_for_write(
                    name,
                    '',
                    super_block.get(),
                    &sindex_super_block,
                    &sindex_uuid);
                ASSERT_TRUE(sindex_exists);
    
    // The following macros are useful for writing death tests.
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    #endif  // 0
    
      // Clears the results of all tests in this test case.
  void ClearResult();
    
    // Finds the first element in the iterator range [begin, end) that
// equals elem.  Element may be a native array type itself.
template <typename Iter, typename Element>
Iter ArrayAwareFind(Iter begin, Iter end, const Element& elem) {
  for (Iter it = begin; it != end; ++it) {
    if (internal::ArrayEq(*it, elem))
      return it;
  }
  return end;
}
    
      // Take over ownership of a raw pointer.  This should happen as soon as
  // possible after the object is created.
  explicit linked_ptr(T* ptr = NULL) { capture(ptr); }
  ~linked_ptr() { depart(); }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49, typename T50>
class ValueArray50 {
 public:
  ValueArray50(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
      T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47, T48 v48, T49 v49,
      T50 v50) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
      v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
      v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
      v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
      v39_(v39), v40_(v40), v41_(v41), v42_(v42), v43_(v43), v44_(v44),
      v45_(v45), v46_(v46), v47_(v47), v48_(v48), v49_(v49), v50_(v50) {}
    }
    
    template <class ElemType>
template <class ValueType>
shared_ptr<ComputationNode<ValueType>> ComputationNetworkBuilder<ElemType>::TypedCreateSparseInputNode(const std::wstring& inputName, const TensorShape& imageLayout, const wstring& dynamicAxisName)
{
    return net.AddNodeToNetWithElemType(New<SparseInputValue<ValueType>>(net.GetDeviceId(), inputName, imageLayout, dynamicAxisName));
}
    
    
    {
    {
    {
    {       static double TimeConstant2Momentum(double timeConstant, size_t syncPeroid)
       {
           return exp(-((double)syncPeroid) / timeConstant);
       }
       static double Momentum2TimeConstant(double bm, size_t syncPeroid)
       {
           if (bm >= 1.0 || bm < 0.0)
           {
               InvalidArgument('Unexpected block momentum (%.2f). Block momentum should be in the range of [0,1)\n', bm);
           }
           return -(double)syncPeroid / log(bm); 
       }
    };
} } }

    
                    // Subtract it from the previous model
                auto blockGrad = std::make_shared<Matrix<ElemType>>(prevWeight, CPUDEVICE);
                *blockGrad -= currentWeight;                                              // matW becomes local block gradient (of one worker)
    
    // declare the static variables from the classes
template <>
NDLScript<half> NDLScript<half>::s_global{};
template <>
NDLScript<float> NDLScript<float>::s_global{};
template <>
NDLScript<double> NDLScript<double>::s_global{};
    
    
    {        return sortedEvalOrder;
    }
    
    
    {    for (const auto& n : nodes)
    {
        inputLayouts.push_back(ToVariableLayout(n));
    }
    return inputLayouts;
}
    
    
#ifndef CPUONLY
#include <cuda_runtime.h>
#pragma comment (lib, 'cudart.lib')     // for cudaMemcpyAsync()
#endif
    
    #include 'Basics.h'
#include 'ComputationNetwork.h'
#include 'SimpleEvaluator.h'
#include 'DataReader.h'
#include 'ScriptableObjects.h'
#include 'Criterion.h'
#include <vector>
#include <string>
#include <stdexcept>
#include 'fileutil.h'
#include 'Config.h'
#include <chrono>
#include <random>
#include 'Profiler.h'
#include 'MASGD.h'
#include 'ASGDHelper.h'
#include <map>
using namespace std; // ugh! TODO: get rid of this from .h files!!!
    
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
    
    namespace aria2 {
    }
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPeerAnnounceTask(const unsigned char* infoHash)
{
  // TODO
  return nullptr;
}
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    DHTTokenTracker::~DHTTokenTracker() = default;
    
    #include 'TimeBasedCommand.h'
    
      DNSCache& operator=(const DNSCache& c);