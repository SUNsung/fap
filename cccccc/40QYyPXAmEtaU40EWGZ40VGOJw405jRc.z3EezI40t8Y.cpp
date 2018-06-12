
        
        class AbstractAuthResolver : public AuthResolver {
public:
  AbstractAuthResolver();
    }
    
      virtual void setEraseAfterParse(bool f) CXX11_OVERRIDE;
    
    #endif // D_ACTIVE_PEER_CONNECTION_COMMAND_H

    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
    
    {} // namespace aria2
    
    class AsyncNameResolver;
class DownloadEngine;
class Command;
class Option;
    
    AuthConfig::AuthConfig() {}