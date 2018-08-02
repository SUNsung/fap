
        
        class RocksDBDatabasePluginTests : public DatabasePluginTests {
 protected:
  std::string name() override {
    return 'rocksdb';
  }
};
    
      /// Check whether the subscription matches the event.
  bool shouldFire(const KernelSubscriptionContextRef &sc,
                  const KernelEventContextRef &ec) const override;
    
     public:
  virtual ~UdevEventPublisher() {
    tearDown();
  }
    
    #include <boost/filesystem.hpp>