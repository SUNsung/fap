
        
        namespace tesseract {
    }
    
      enum IndentType {
    NO_INDENT,
    LEFT_INDENT,
    RIGHT_INDENT,
    BOTH_INDENT,
    INDENT_TYPE_COUNT
  };
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
      // Constructors for the various ParamTypes.
  ParamContent() = default;
  explicit ParamContent(tesseract::StringParam* it);
  explicit ParamContent(tesseract::IntParam* it);
  explicit ParamContent(tesseract::BoolParam* it);
  explicit ParamContent(tesseract::DoubleParam* it);
    
    namespace tesseract {
    }
    
    #include <grpcpp/impl/grpc_library.h>
#include <grpcpp/security/credentials.h>
    
    grpc_slice CoreCodegen::grpc_slice_malloc(size_t length) {
  return ::grpc_slice_malloc(length);
}
    
    #include <grpc/support/port_platform.h>
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    namespace grpc {
    }
    
    
    {}  // namespace grpc

    
    ThreadPoolInterface* CreateDefaultThreadPool() { return g_ctp_impl(); }
    
    MAKE_TYPE_INFO(String, Variant::STRING)
MAKE_TYPE_INFO(Vector2, Variant::VECTOR2)
MAKE_TYPE_INFO(Rect2, Variant::RECT2)
MAKE_TYPE_INFO(Vector3, Variant::VECTOR3)
MAKE_TYPE_INFO(Transform2D, Variant::TRANSFORM2D)
MAKE_TYPE_INFO(Plane, Variant::PLANE)
MAKE_TYPE_INFO(Quat, Variant::QUAT)
MAKE_TYPE_INFO(AABB, Variant::AABB)
MAKE_TYPE_INFO(Basis, Variant::BASIS)
MAKE_TYPE_INFO(Transform, Variant::TRANSFORM)
MAKE_TYPE_INFO(Color, Variant::COLOR)
MAKE_TYPE_INFO(NodePath, Variant::NODE_PATH)
MAKE_TYPE_INFO(RID, Variant::_RID)
MAKE_TYPE_INFO(Dictionary, Variant::DICTIONARY)
MAKE_TYPE_INFO(Array, Variant::ARRAY)
MAKE_TYPE_INFO(PoolByteArray, Variant::POOL_BYTE_ARRAY)
MAKE_TYPE_INFO(PoolIntArray, Variant::POOL_INT_ARRAY)
MAKE_TYPE_INFO(PoolRealArray, Variant::POOL_REAL_ARRAY)
MAKE_TYPE_INFO(PoolStringArray, Variant::POOL_STRING_ARRAY)
MAKE_TYPE_INFO(PoolVector2Array, Variant::POOL_VECTOR2_ARRAY)
MAKE_TYPE_INFO(PoolVector3Array, Variant::POOL_VECTOR3_ARRAY)
MAKE_TYPE_INFO(PoolColorArray, Variant::POOL_COLOR_ARRAY)
    
    
    {	int slices = ip.get_slice_count('.');
	if (slices != 4) {
		ERR_EXPLAIN('Invalid IP Address String: ' + ip);
		ERR_FAIL();
	}
	for (int i = 0; i < 4; i++) {
		p_ret[i] = ip.get_slicec('.', i).to_int();
	}
};
    
    	struct File {
    }
    
    namespace osquery {
    }
    
    #include <iostream>
    
      std::vector<std::string> pack_names;
  c.packs(
      ([&pack_names](const Pack& p) { pack_names.push_back(p.getName()); }));
    
    #pragma once
    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchWorker(
    const std::string& exec_path, int argc /* unused */, char** argv) {
  auto worker_pid = ::fork();
  if (worker_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (worker_pid == 0) {
    setEnvVar('OSQUERY_WORKER', std::to_string(::getpid()).c_str());
    ::execve(exec_path.c_str(), argv, ::environ);
    }
    }
    
    
    {
    {    int code = 0;
    EXPECT_TRUE(getProcessExitCode(*process, code));
    EXPECT_EQ(code, EXTENSION_SUCCESS_CODE);
  }
}
    
    
    {Status deserializeDistributedQueryResultJSON(const std::string& json,
                                             DistributedQueryResult& r) {
  auto doc = JSON::newObject();
  if (!doc.fromString(json) || !doc.doc().IsObject()) {
    return Status(1, 'Error Parsing JSON');
  }
  return deserializeDistributedQueryResult(doc.doc(), r);
}
}

    
      /// Only add the subscription, if it not already part of subscription list.
  Status addSubscription(const SubscriptionRef& subscription) override;
    
      std::shared_ptr<DHTNode> getNode(const unsigned char* id,
                                   const std::string& ipaddr,
                                   uint16_t port) const;
    
    class DHTRoutingTableDeserializer {
private:
  int family_;
    }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    #include <vector>
#include <memory>
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    double ButteraugliComparator::CompareBlock(const OutputImage& img,
                                           int off_x, int off_y) const {
  int block_x = block_x_ * factor_x_ + off_x;
  int block_y = block_y_ * factor_y_ + off_y;
  int xmin = 8 * block_x;
  int ymin = 8 * block_y;
  int block_ix = off_y * factor_x_ + off_x;
  const std::vector<std::vector<float> >& rgb0 =
      per_block_pregamma_[block_ix];
    }
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    
    {}  // namespace guetzli

    
    
    {}  // namespace guetzli
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }
    
     protected:
  explicit Benchmark(const char* name);
  Benchmark(Benchmark const&);
  void SetName(const char* name);
    
    // Class for managing registered benchmarks.  Note that each registered
// benchmark identifies a family of related benchmarks to run.
class BenchmarkFamilies {
 public:
  static BenchmarkFamilies* GetInstance();
    }
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    class LogType {
  friend LogType& GetNullLogInstance();
  friend LogType& GetErrorLogInstance();
    }
    
    
    {    return false;
  }