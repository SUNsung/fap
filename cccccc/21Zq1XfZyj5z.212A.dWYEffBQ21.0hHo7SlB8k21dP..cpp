
        
        CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    
    {}  // namespace grpc

    
      void Destroy(grpc_call_element* elem, const grpc_call_final_info* final_info,
               grpc_closure* then_call_closure) override;
    
    
    {    uint8_t version = buf[kVersionIdOffset];
    uint32_t fieldID = buf[kServerElapsedTimeOffset];
    if (version != kVersionId || fieldID != kServerElapsedTimeField) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    *time = absl::little_endian::Load64(
        &buf[kServerElapsedTimeOffset + kFieldIdSize]);
    return kRpcServerStatsSize;
  }
    
     private:
  Status ListService(ServerContext* context,
                     reflection::v1alpha::ListServiceResponse* response);
    
    #include 'src/cpp/server/dynamic_thread_pool.h'
    
    class DynamicThreadPool final : public ThreadPoolInterface {
 public:
  explicit DynamicThreadPool(int reserve_threads);
  ~DynamicThreadPool();
    }
    
    /*! \brief small eps gap for minimum split decision. */
const bst_float kRtEps = 1e-6f;
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
      // Used to initialise any regularisation hyperparameters provided by the user
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args);
    
    void Carver::start() {
  // If status_ is not Ok, the creation of our tmp FS failed
  if (!status_.ok()) {
    LOG(WARNING) << 'Carver has not been properly constructed';
    return;
  }
  for (const auto& p : carvePaths_) {
    // Ensure the file is a flat file on disk before carving
    PlatformFile pFile(p, PF_OPEN_EXISTING | PF_READ);
    if (!pFile.isValid() || isDirectory(p)) {
      VLOG(1) << 'File does not exist on disk or is subdirectory: ' << p;
      continue;
    }
    Status s = carve(p);
    if (!s.ok()) {
      VLOG(1) << 'Failed to carve file ' << p << ' ' << s.getMessage();
    }
  }
    }
    
    std::vector<std::string> FeatureVectorsConfigParserPlugin::keys() const {
  return {kFeatureVectorsRootKey};
}
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {REGISTER_INTERNAL(PrometheusMetricsConfigParserPlugin,
                  'config_parser',
                  'prometheus_targets');
}

    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json':
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    struct GLFWwindow;
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    
    {        // Rendering
        ImGui::Render();
        al_clear_to_color(al_map_rgba_f(clear_color.x, clear_color.y, clear_color.z, clear_color.w));
        ImGui_ImplAllegro5_RenderDrawData(ImGui::GetDrawData());
        al_flip_display();
    }
    
        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
    {
        static float f = 0.0f;
        static int counter = 0;
    }
    
      auto delay_token_2 = controller.GetDelayToken(10000000u);
  // Rate reset after changing the token.
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
    
    /*
 * PosixMmapFile
 *
 * We preallocate up to an extra megabyte and use memcpy to append new
 * data to the file.  This is safe since we either properly close the
 * file before reading from it, or for log files, the reading code
 * knows enough to skip zero suffixes.
 */
Status PosixMmapFile::UnmapCurrentRegion() {
  TEST_KILL_RANDOM('PosixMmapFile::UnmapCurrentRegion:0', rocksdb_kill_odds);
  if (base_ != nullptr) {
    int munmap_status = munmap(base_, limit_ - base_);
    if (munmap_status != 0) {
      return IOError('While munmap', filename_, munmap_status);
    }
    file_offset_ += limit_ - base_;
    base_ = nullptr;
    limit_ = nullptr;
    last_sync_ = nullptr;
    dst_ = nullptr;
    }
    }
    
      virtual Status Flush() override;
  virtual Status Sync() override;
  virtual Status Fsync() override;
  virtual Status Close() override;
    
    int main() {
  rocksdb::DB* raw_db;
  rocksdb::Status status;
    }
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }
    
    #include 'rocksdb/perf_level.h'
    
      ~ManagedSnapshot();
    
      // Wait for all threads to finish.
  // Discard those threads that did not start
  // executing
  virtual void JoinAllThreads() = 0;
    
      // If sync == true, we can guarantee you'll get consistent backup even
  // on a machine crash/reboot. Backup process is slower with sync enabled.
  // If sync == false, we don't guarantee anything on machine reboot. However,
  // chances are some of the backups are consistent.
  // Default: true
  bool sync;
    
    #include <string>
#include 'rocksdb/status.h'