
        
        void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    std::pair<std::vector<std::unique_ptr<Command>>,
          std::vector<std::unique_ptr<Command>>>
DHTSetup::setup(DownloadEngine* e, int family)
{
  std::vector<std::unique_ptr<Command>> tempCommands;
  std::vector<std::unique_ptr<Command>> tempRoutineCommands;
  if ((family != AF_INET && family != AF_INET6) ||
      (family == AF_INET && DHTRegistry::isInitialized()) ||
      (family == AF_INET6 && DHTRegistry::isInitialized6())) {
    return {};
  }
  try {
    // load routing table and localnode id here
    std::shared_ptr<DHTNode> localNode;
    }
    }
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
    DHTTokenTracker::~DHTTokenTracker() = default;
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
    #include <gtest/gtest.h>
    
    /*
 * Visitor for rewriting Vreg uses, replacing them with the expressions for
 * their defs.
 */
struct OptVisit {
  const Env& env;
  const RegState& state;
    }
    
    int DecodedInstruction::decodeOpcode(uint8_t* ip) {
  int sz = 1;
  if (*ip == 0x0f) {
    ++ip;
    ++sz;
    m_map_select = 1;
    if (*ip == 0x38) {
      ++ip;
      ++sz;
      m_map_select = 2;
    } else if (*ip == 0x3a) {
      ++ip;
      ++sz;
      m_map_select = 3;
    }
  }
    }
    
    bool OutputFile::flush() {
  if (!isClosed()) {
    g_context->flush();
    return true;
  }
  return false;
}
    
    bool Pipe::closeImpl() {
  bool ret = true;
  *s_pcloseRet = 0;
  if (valid() && !isClosed()) {
    assertx(m_stream);
#ifdef _MSC_VER
    int pcloseRet = _pclose(m_stream);
#else
    int pcloseRet = LightProcess::pclose(m_stream);
    if (WIFEXITED(pcloseRet)) pcloseRet = WEXITSTATUS(pcloseRet);
#endif
    *s_pcloseRet = pcloseRet;
    ret = (pcloseRet == 0);
    setIsClosed(true);
    m_stream = nullptr;
  }
  File::closeImpl();
  return ret;
}
    
    bool HHVM_FUNCTION(stream_context_set_option,
                   const Variant& stream_or_context,
                   const Variant& wrapper,
                   const Variant& option = uninit_variant,
                   const Variant& value = uninit_variant);
    
    
    {  {
    Array arr = make_map_array(0, 'a', 1, 'b');
    EXPECT_TRUE(arr->isVectorData());
  }
  {
    Array arr = make_map_array(1, 'a', 0, 'b');
    EXPECT_TRUE(!arr->isVectorData());
  }
  {
    Array arr = make_map_array(1, 'a', 2, 'b');
    EXPECT_TRUE(!arr->isVectorData());
  }
  {
    Array arr = make_map_array(1, 'a');
    arr.set(0, 'b');
    EXPECT_TRUE(!arr->isVectorData());
  }
}
    
    void processInit() {
  TRACE(1, 'mcgen startup\n');
    }
    
    using apollo::common::Status;
using apollo::dreamview::Chart;
using apollo::planning_internal::SLFrameDebug;
using apollo::planning_internal::SpeedPlan;
using apollo::planning_internal::STGraphDebug;
    
    #include 'cyber/binary.h'
#include 'glog/logging.h'
#include 'glog/raw_logging.h'
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
    }
    }
    }
    }
    
    
    {  for (const auto& stage_config : config_.stage_config()) {
    stage_config_map_[stage_config.stage_type()] = &stage_config;
  }
  for (int i = 0; i < config_.stage_type_size(); ++i) {
    auto stage_type = config_.stage_type(i);
    CHECK(common::util::ContainsKey(stage_config_map_, stage_type))
        << 'stage type : ' << ScenarioConfig::StageType_Name(stage_type)
        << ' has no config';
  }
  ADEBUG << 'init stage '
         << ScenarioConfig::StageType_Name(config_.stage_type(0));
  current_stage_ = CreateStage(*stage_config_map_[config_.stage_type(0)]);
}
    
    #pragma once
    
    #ifndef CYBER_BASE_ATOMIC_HASH_MAP_H_
#define CYBER_BASE_ATOMIC_HASH_MAP_H_
    
    Status ControllerAgent::Reset() {
  for (auto &controller : controller_list_) {
    ADEBUG << 'controller:' << controller->Name() << ' reset...';
    controller->Reset();
  }
  return Status::OK();
}