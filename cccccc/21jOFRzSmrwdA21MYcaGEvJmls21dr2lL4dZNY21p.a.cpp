Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    void PrefixMapKeyPrinter<unsigned char>::print(raw_ostream &out,
                                               ArrayRef<unsigned char> key) {
  out << '\'';
  for (auto byte : key) {
    if (byte < 16) out << '0';
    out.write_hex(byte);
  }
  out << '\'';
}

    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    
    {}
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    #include <folly/Range.h>
    
    #include <vector>
    
    
    {  int ret = x;
  return ret;
}
    
    
    {  double ret = x * OBJECT_WIDTH_RES;
  return ret;
}
    
    void ObjectGeneralInfo60B::Parse(const std::uint8_t* bytes, int32_t length,
                                 ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  auto conti_obs = conti_radar->add_contiobs();
  conti_obs->set_clusterortrack(false);
  conti_obs->set_obstacle_id(obj_id);
  conti_obs->set_longitude_dist(longitude_dist(bytes, length));
  conti_obs->set_lateral_dist(lateral_dist(bytes, length));
  conti_obs->set_longitude_vel(longitude_vel(bytes, length));
  conti_obs->set_lateral_vel(lateral_vel(bytes, length));
  conti_obs->set_rcs(rcs(bytes, length));
  conti_obs->set_dynprop(dynprop(bytes, length));
  double timestamp = apollo::common::time::Clock::NowInSeconds();
  auto header = conti_obs->mutable_header();
  header->CopyFrom(conti_radar->header());
  header->set_timestamp_sec(timestamp);
}
    
    class RouteSegmentsTest : public ::testing::Test {
 public:
  static void SetUpTestCase() {
    AINFO << 'map file: ' << FLAGS_test_map_file;
    if (hdmap_.LoadMapFromFile(FLAGS_test_map_file) != 0) {
      AERROR << 'Failed to load map: ' << FLAGS_test_map_file;
      CHECK(false);
    }
  }
    }
    
    #include 'modules/planning/common/speed_limit.h'
    
    #include 'modules/planning/lattice/trajectory_generation/trajectory_combiner.h'
    
    TEST(TestPiecewiseLinearConstraint, add_second_derivative_boundary) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  std::vector<uint32_t> index_list;
  std::vector<double> lower_bound;
  std::vector<double> upper_bound;
  for (uint32_t i = 0; i < 10; ++i) {
    index_list.push_back(i);
    lower_bound.push_back(-4.0);
    upper_bound.push_back(2.0);
  }
    }
    
    #include 'modules/prediction/container/obstacles/obstacle_clusters.h'
    
    void BENCHFUN(insertFront)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.insert(v.begin(), obj); }
  });
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #include <iostream>
    
    //////////////////////////////////////////////////////////////////////
    
    #ifndef FOLLY_URI_H_
#error This file may only be included from folly/Uri.h
#endif