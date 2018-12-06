
        
        
    {        v_dst = vmovn_u16(_v_dst);
    }
    
    #ifdef CAROTENE_NEON
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
        const NDShape& Variable::Shape() const
    {
        return m_dataFields->m_shape; 
    }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        mode_t mask = umask(0);
    }
    
    // Same as above but with additional information about required streams.
void DataReader::StartDistributedMinibatchLoop(size_t mbSize, size_t epoch, size_t subsetNum, size_t numSubsets, const std::unordered_set<InputStreamDescription>& streamDescriptions, size_t requestedEpochSamples /* = requestDataSize*/)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        m_dataReaders[m_ioNames[i]]->StartDistributedMinibatchLoop(mbSize, epoch, subsetNum, numSubsets, streamDescriptions, requestedEpochSamples);
    }
}
    
        virtual const char * CallStack() const override { return m_callStack.c_str(); }
    
        void Start();
    void Stop();
    void Restart();
    
    class ComputationNetworkWithEdits : public ComputationNetwork
{
    // helper to execute a BS function that maps a CompuationNode to a ComputationNode
    // The function may return:
    //  - its input --> no edit was made
    //  - an different existing node --> all nodes that use this input should use the returned node instead
    //  - a newly created node or sub-graph --> this node should replace the old one
    // In the latter two cases, the returned node may have inputs that are totally different
    // from the original node's.
    ComputationNodeBasePtr CallEditFunction(ComputationNodeBasePtr node, const ConfigLambda& editFn)
    {
        // wrap the argument in a ConfigValuePtr
        const wstring& nodeName = node->NodeName();
        const wstring& expressionName = nodeName;   // TODO: think this through
        auto valuep = ConfigValuePtr(static_pointer_cast<Object>(node), [nodeName](const std::wstring &) { LogicError('CallEditFunction: Failed to retrieve node '%ls'.', nodeName.c_str()); }, expressionName);
        vector<ConfigValuePtr> args{ valuep };
        // execute the lambda (this executes a function that is BS)
        ConfigValuePtr result = editFn.Apply(move(args), ConfigLambda::NamedParams(), expressionName);
        // cast the result back
        return result.AsPtr<ComputationNodeBase>();
    }
    }
    
    #include 'gflags/gflags.h'
#include 'modules/common/log.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/common/time/time.h'
#include 'modules/common/util/factory.h'
#include 'modules/common/util/file.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/can_client/can_client_factory.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    bool HermesCanClient::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  } else {
    _card_port = parameter.channel_id();
    return true;
  }
}
    
    #include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
    
    #include 'gtest/gtest.h'