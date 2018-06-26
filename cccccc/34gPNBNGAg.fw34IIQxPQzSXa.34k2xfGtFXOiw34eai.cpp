
        
        
    {        // copy column-wise
        for (size_t j = j0; j < j1; j++)
        {
            float       *qcol =    &us(i0,      j);      // unshifted coordinates
            const float *pcol = &patch(i0 - i0, j - j0); // (i0,j) shifted by (i0,j0)
            const size_t colbytes = (i1 - i0) * sizeof(*pcol);
            memcpy(qcol, pcol, colbytes);
        }
    }
    
    // replace a named node by newNode of the same type under the same name, including moving over all network links
// This is used in 
// 1. Update nodes to quantized versions.
// 2. The KL-reg based adaptation to reduce feature copy (deprecated)
// need to update all the mappings as well childrens.
void ComputationNetwork::ReplaceNode(wstring nodeName, ComputationNodeBasePtr newNode)
{
    ComputationNodeBasePtr oldNode = GetNodeFromName(nodeName);
    }
    
        // ProcessNDLConfig - Process the NDL script from a configuration string value
    // config - configuration string containing script
    void ProcessNDLConfig(const ConfigValue& config, bool fullValidate = false)
    {
        NDLScript<ElemType> script(config);
        ProcessNDLScript(&script, ndlPassAll, nullptr, fullValidate);
    }
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
        void getlattices(const std::wstring& key, std::shared_ptr<const latticepair>& L, size_t expectedframes) const
    {
        std::shared_ptr<latticepair> LP(new latticepair);
        denlattices.getlattice(key, LP->second, expectedframes); // this loads the lattice from disk, using the existing L.second object
        L = LP;
    }
    
    
    {
    {  Dispatcher::stopServices();
  Dispatcher::joinServices();
}
}

    
    /**
 * @brief An osquery EventPublisher for the Apple SCNetwork Reachability API.
 *
 * This exposes a lightweight network change monitoring capability.
 *
 */
class SCNetworkEventPublisher
    : public EventPublisher<SCNetworkSubscriptionContext,
                            SCNetworkEventContext> {
  DECLARE_PUBLISHER('scnetwork');
    }
    
    void KernelEventPublisher::stop() {
  WriteLock lock(mutex_);
  if (queue_ != nullptr) {
    delete queue_;
    queue_ = nullptr;
  }
}