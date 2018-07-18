
        
        
    {}
    
      if (flags & TrackVtsc) {
    flags |= TrackCPU;
  }
    
    SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
    }
    
    struct StringDataHashCompare {
  bool equal(const StringData *s1, const StringData *s2) const {
    assertx(s1 && s2);
    return s1->same(s2);
  }
  size_t hash(const StringData *s) const {
    assertx(s);
    return s->hash();
  }
};
    
      auto map_entry = weakmap->find((uintptr_t)obj.get());
  if (map_entry != weakmap->end()) {
    wr_data = map_entry->second.lock();
  } else {
    wr_data = req::make_shared<WeakRefData>(make_tv<KindOfObject>(obj.get()));
    }
    
    
    {  static constexpr Native::PropAccessorMap& map =
    reflection_extension_accessorsMap;
};
    
      unsigned num1GPages = RuntimeOption::EvalNum1GPagesForSlabs;
  unsigned num2MPages = RuntimeOption::EvalNum2MPagesForSlabs;
  if (numNodes > 1) {
    auto perNode1G = num1GPages / numNodes;
    if (auto const excessive = num1GPages % numNodes) {
      Logger::Warning('uneven distribution of %u 1G huge pages '
                      '(Eval.Num1GPagesForSlabs) to %u NUMA nodes, '
                      'excessive %u pages not used',
                      num1GPages, numNodes, excessive);
    }
    num1GPages = perNode1G;
    auto perNode2M = num2MPages / numNodes;
    if (auto const excessive = num2MPages % numNodes) {
      Logger::Warning('uneven distribution of %u 2M huge pages '
                      '(Eval.Num1MPagesForSlabs) to %u NUMA nodes, '
                      'excessive %u pages not used',
                      num2MPages, numNodes, excessive);
    }
    num2MPages = perNode2M;
  }
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
    
    {} // namespace aria2

    
      enum Flag {
    FLAG_HIDDEN = 1,
    FLAG_ERASE_AFTER_PARSE = 1 << 1,
    FLAG_INITIAL_OPTION = 1 << 2,
    FLAG_CHANGE_OPTION = 1 << 3,
    FLAG_CHANGE_OPTION_FOR_RESERVED = 1 << 4,
    FLAG_CHANGE_GLOBAL_OPTION = 1 << 5,
    FLAG_CUMULATIVE = 1 << 6
  };
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
    class RequestGroup;
class DownloadEngine;
class Peer;
class BtRuntime;
class PieceStorage;
class PeerStorage;
class BtAnnounce;
    
      virtual bool finished() CXX11_OVERRIDE;
    
    #include 'Notifier.h'