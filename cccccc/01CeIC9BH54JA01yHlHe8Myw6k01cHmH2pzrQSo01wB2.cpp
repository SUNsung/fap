
        
        namespace A2STR {
    }
    
      virtual void truncate(int64_t length) CXX11_OVERRIDE;
    
    void AbstractOptionHandler::updateFlags(int flag, bool val)
{
  if (val) {
    flags_ |= flag;
  }
  else {
    flags_ &= ~flag;
  }
}
    
      virtual void setInitialOption(bool f) CXX11_OVERRIDE;
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
      virtual ~AbstractProxyRequestCommand();
    
    #include <memory>
    
    size_t AnnounceList::countStoppedAllowedTier() const
{
  return count_if(std::begin(tiers_), std::end(tiers_),
                  FindStoppedAllowedTier());
}
    
    #include 'TLSContext.h'
#include 'DlAbortEx.h'
    
    
    {  virtual std::unique_ptr<AuthConfig>
  resolveAuthConfig(const std::string& hostname) = 0;
};