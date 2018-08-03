
        
        OS::PowerState PowerIphone::get_power_state() {
	if (UpdatePowerInfo()) {
		return power_state;
	} else {
		return OS::POWERSTATE_UNKNOWN;
	}
}
    
    /// Returns the list of contacts pairs in this order: Local contact, other body contact
struct GodotContactPairContactResultCallback : public btCollisionWorld::ContactResultCallback {
public:
	const btCollisionObject *m_self_object;
	Vector3 *m_results;
	int m_resultMax;
	int m_count;
	const Set<RID> *m_exclude;
    }
    
    
#if !defined(FFT_ARM_H)
#define FFT_ARM_H
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
    #undef silk_SMLATT_ovflw
#define silk_SMLATT_ovflw silk_SMLATT
    
        // Determine the MB size used for mapping a given learning-rate or momentum parameter to a per-sample value.
    // MB size is the number of samples across all time steps and parallel sequences.
    // This function exists to post-fix a design bug in SGD:
    // In the case of BPTT, the 'minibatchSize' parameter given to the SGD module really means the truncation size,
    // while the MB size to be used is (truncation size * number of parallel sequences).
    // SGD also does not know #parallel sequences upfront.
    size_t FixUpEffectiveMBSize(size_t specifiedMBSize, size_t numParallelSequences) const
    {
        // remedy the bug that truncation size is incorrectly passed as MB size
        if (m_truncated && specifiedMBSize > 1)      // currently only happens in this mode
        {
            if (numParallelSequences == 0)
            {
                RuntimeError('Learning rate and momentum are not supported per minibatch, please specify them per sample.');
            }
    }
    }
    
    template <class ElemType>
void PostComputingActions<ElemType>::BatchNormalizationStatistics(IDataReader * dataReader, const vector<wstring>& evalNodeNames, 
    const wstring newModelPath, const size_t mbSize, const int iters)
{
    // since the mean and variance of bn will be modified in statistics,
    // training mode will make it work. And there is no back prop, other parameters
    // are fixed during computing.
    ScopedNetworkOperationMode modeGuard(m_net, NetworkOperationMode::training);
    }
    
        // other goodies I came across (intrin.h):
    //  - _mm_prefetch
    //  - _mm_stream_ps --store without polluting cache
    //  - unknown: _mm_addsub_ps, _mm_hsub_ps, _mm_movehdup_ps, _mm_moveldup_ps, _mm_blend_ps, _mm_blendv_ps, _mm_insert_ps, _mm_extract_ps, _mm_round_ps
    //  - _mm_dp_ps dot product! http://msdn.microsoft.com/en-us/library/bb514054.aspx
    //    Not so interesting for long vectors, we get better numerical precision with parallel adds and hadd at the end
    
    // not in the cache yet: create it (or not if no such member)
void /*CustomConfigRecord::*/ ComputationNodeBase::LazyCreateConfigMember(const wstring& id) const /*override*/
{
    if (id == L'name') // node name
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(NodeName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'operation') // type ('operation' parameter to ComputationNode BS constructor)
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(OperationName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dim') // scalar dimension (#elements) per sample
    {
        // Note: When freshly creating models, dimensions may not have been inferred yet.
        size_t dim = GetSampleLayout().GetNumElements();
        if (dim == 0)
            InvalidArgument('%ls.dim: The node's dimensions are not known yet.', NodeName().c_str());
        InsertConfigMember(id, MakePrimitiveConfigValuePtr((double) dim, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dims') // tensor dimension vector
    {
        NOT_IMPLEMENTED;
    }
    // TODO: Think through what tags mean. Do we allow user-named tags? Is it a set or a single string? If set, then how to compare?
    //else if (id == L'tag')
    //{
    //}
    else if (id == L'inputs' || id == OperationName() + L'Args') // e.g. node.PlusArg[0] = alternative for node.inputs[0] that shows a user that this is a Plus node
    {
        std::vector<ConfigValuePtr> inputsAsValues;
        for (let& input : GetInputs())
            inputsAsValues.push_back(ConfigValuePtr(input, [](const std::wstring &) { LogicError('should not get here'); }, L''));
        let& arr = make_shared<ScriptableObjects::ConfigArray>(0, move(inputsAsValues));
        InsertConfigMember(id, ConfigValuePtr(arr, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    // any other id does not exist, don't create any entry for it
}
    
    #include 'modules/common/configs/vehicle_config_helper.h'
#include 'modules/planning/common/planning_gflags.h'
#include 'modules/planning/tasks/traffic_decider/backside_vehicle.h'
#include 'modules/planning/tasks/traffic_decider/change_lane.h'
#include 'modules/planning/tasks/traffic_decider/creeper.h'
#include 'modules/planning/tasks/traffic_decider/crosswalk.h'
#include 'modules/planning/tasks/traffic_decider/destination.h'
#include 'modules/planning/tasks/traffic_decider/front_vehicle.h'
#include 'modules/planning/tasks/traffic_decider/keep_clear.h'
#include 'modules/planning/tasks/traffic_decider/pull_over.h'
#include 'modules/planning/tasks/traffic_decider/reference_line_end.h'
#include 'modules/planning/tasks/traffic_decider/rerouting.h'
#include 'modules/planning/tasks/traffic_decider/signal_light.h'
#include 'modules/planning/tasks/traffic_decider/stop_sign.h'
    
    #include <algorithm>
#include <cmath>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>
    
    
    {  std::unique_ptr<SimulationWorldUpdater> sim_world_updater_;
  std::unique_ptr<PointCloudUpdater> point_cloud_updater_;
  std::unique_ptr<CivetServer> server_;
  std::unique_ptr<SimControl> sim_control_;
  std::unique_ptr<WebSocketHandler> websocket_;
  std::unique_ptr<WebSocketHandler> map_ws_;
  std::unique_ptr<WebSocketHandler> point_cloud_ws_;
  std::unique_ptr<ImageHandler> image_;
  std::unique_ptr<MapService> map_service_;
  std::unique_ptr<HMI> hmi_;
};
    
      main_stop_.Clear();
  main_stop_.set_reason_code(obj_stop.reason_code());
  main_stop_.set_reason('stop by ' + obj_id);
  main_stop_.mutable_stop_point()->set_x(obj_stop.stop_point().x());
  main_stop_.mutable_stop_point()->set_y(obj_stop.stop_point().y());
  main_stop_.set_stop_heading(obj_stop.stop_heading());
  stop_reference_line_s_ = stop_line_s;
    
    
    {  /**
   * @brief Compute the curvature change rate w.r.t. curve length (dkappa) given
   * curve X = (x(t), y(t))
   *        which t is an arbitrary parameter.
   * @param dx dx / dt
   * @param d2x d(dx) / dt
   * @param dy dy / dt
   * @param d2y d(dy) / dt
   * @param d3x d(d2x) / dt
   * @param d3y d(d2y) / dt
   * @return the curvature change rate
   */
  static double ComputeCurvatureDerivative(const double dx, const double d2x,
                                           const double d3x, const double dy,
                                           const double d2y, const double d3y);
};