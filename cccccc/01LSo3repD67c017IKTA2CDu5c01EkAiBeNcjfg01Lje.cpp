
        
            private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    namespace CNTK
{
    Trainer::Trainer(const FunctionPtr& model, const FunctionPtr& lossFunction,
                     const std::vector<LearnerPtr>& parameterLearners,
                     const std::vector<ProgressWriterPtr>& progressWriters)
        : Trainer(model, lossFunction, nullptr, parameterLearners, progressWriters)
    {}
    }
    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// -----------------------------------------------------------------------
    
      // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);
    
    
    {
    {}} // namespace
    
      fprintf(p->out,
          '%13.13s: %s\n',
          'Distributed',
          osquery::FLAGS_distributed_plugin.c_str());
    
    
    {
    {    // If we don't find a serial_number match, we assume this drive information
    // can only be retrieved by explicitly passing driver information.
    if (!matched) {
      results.push_back(std::move(entry.second));
    }
  }
}
    
    #include <linux/hw_breakpoint.h>
#include <linux/perf_event.h>
    
    #include <linux/perf_event.h>
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    
    {} // namespace aria2
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
    
      void setMessageDispatcher(DHTMessageDispatcher* dispatcher);
    
    bool DNSCache::CacheEntry::add(const std::string& addr)
{
  for (std::vector<AddrEntry>::const_iterator i = addrEntries_.begin(),
                                              eoi = addrEntries_.end();
       i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return false;
    }
  }
  addrEntries_.push_back(AddrEntry(addr));
  return true;
}
    
    #endif // D_DNS_CACHE_H

    
    Shaky3D* Shaky3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Shaky3D();
    a->initWithDuration(_duration, _gridSize, _randrange, _shakeZ);
    a->autorelease();
    return a;
}
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
            Then once you running ActionTween on the node, the method updateTweenAction will be invoked.
*/
class CC_DLL ActionTweenDelegate
{
public:
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionTweenDelegate() {}
    }
    
        /** Returns a Animation that was previously added.
     * If the name is not found it will return nil.
     * You should retain the returned copy if you are going to use it.
     *
     * @return A Animation that was previously added. If the name is not found it will return nil.
     */
    Animation* getAnimation(const std::string& name);
    /**
     * @deprecated. Use getAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE Animation* animationByName(const std::string& name){ return getAnimation(name); }
    
    std::vector<Vec2> AutoPolygon::expand(const std::vector<Vec2>& points, const cocos2d::Rect &rect, float epsilon)
{
    auto size = points.size();
    // if there are less than 3 points, then we have nothing
    if(size<3)
    {
        log('AUTOPOLYGON: cannot expand points for %s with less than 3 points, e: %f', _filename.c_str(), epsilon);
        return std::vector<Vec2>();
    }
    ClipperLib::Path subj;
    ClipperLib::PolyTree solution;
    ClipperLib::PolyTree out;
    for(const auto& pt : points)
    {
        subj << ClipperLib::IntPoint(pt.x* PRECISION, pt.y * PRECISION);
    }
    ClipperLib::ClipperOffset co;
    co.AddPath(subj, ClipperLib::jtMiter, ClipperLib::etClosedPolygon);
    co.Execute(solution, epsilon * PRECISION);
    
    ClipperLib::PolyNode* p = solution.GetFirst();
    if(!p)
    {
        log('AUTOPOLYGON: Clipper failed to expand the points');
        return points;
    }
    while(p->IsHole()){
        p = p->GetNext();
    }
    }
    
    /**
 * PolygonInfo is an object holding the required data to display Sprites.
 * It can be a simple as a triangle, or as complex as a whole 3D mesh
 */
class CC_DLL PolygonInfo
{
public:
    /// @name Creators
    /// @{
    /**
     * Creates an empty Polygon info
     * @memberof PolygonInfo
     * @return PolygonInfo object
     */
    PolygonInfo();
    }
    }