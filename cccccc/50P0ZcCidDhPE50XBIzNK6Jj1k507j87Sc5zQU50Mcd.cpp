
        
        
    {} // namespace aria2
    
    class HttpConnection;
class SocketCore;
    
    
    {  virtual int64_t getTotalLength() CXX11_OVERRIDE;
};
    
    namespace {
class FindCompletedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::COMPLETED:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
    #include 'AnnounceTier.h'
#include 'ValueBase.h'
    
    
    {} // namespace aria2