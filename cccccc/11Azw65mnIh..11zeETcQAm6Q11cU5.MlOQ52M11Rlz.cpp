
        
            /** We need to calculate (rx,ry,rz) = (ax,ay,az) + (bx,by,1/bzinv). Due to
     *  secp256k1's isomorphism we can multiply the Z coordinates on both sides
     *  by bzinv, and get: (rx,ry,rz*bzinv) = (ax,ay,az*bzinv) + (bx,by,1).
     *  This means that (rx,ry,rz) can be calculated as
     *  (ax,ay,az*bzinv) + (bx,by,1), when not applying the bzinv factor to rz.
     *  The variable az below holds the modified Z coordinate for a, which is used
     *  for the computation of rx and ry, but not for rz.
     */
    secp256k1_fe_mul(&az, &a->z, bzinv);
    
        Round(a, b, c, d, e, f, g, h, 0x19a4c116, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x1e376c08, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x2748774c, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x34b0bcb5, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x391c0cb3, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x4ed8aa4a, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x5b9cca4f, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x682e6ff3, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0x748f82ee, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0x78a5636f, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0x84c87814, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0x8cc70208, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0x90befffa, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xa4506ceb, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xbef9a3f7, w14 + sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0xc67178f2, w15 + sigma1(w13) + w8 + sigma0(w0));
    
    void test_ecdsa_recovery_api(void) {
    /* Setup contexts that just count errors */
    secp256k1_context *none = secp256k1_context_create(SECP256K1_CONTEXT_NONE);
    secp256k1_context *sign = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_context *vrfy = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY);
    secp256k1_context *both = secp256k1_context_create(SECP256K1_CONTEXT_SIGN | SECP256K1_CONTEXT_VERIFY);
    secp256k1_pubkey pubkey;
    secp256k1_pubkey recpubkey;
    secp256k1_ecdsa_signature normal_sig;
    secp256k1_ecdsa_recoverable_signature recsig;
    unsigned char privkey[32] = { 1 };
    unsigned char message[32] = { 2 };
    int32_t ecount = 0;
    int recid = 0;
    unsigned char sig[74];
    unsigned char zero_privkey[32] = { 0 };
    unsigned char over_privkey[32] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
    }
    
        BOOST_CHECK_EQUAL(arr[999].getValStr(), '');
    
    
    
        return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
    namespace nw {
    }
    
    namespace content {
class RenderFrameHost;
}
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    namespace nw {
    }
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    NwClipboardClearSyncFunction::~NwClipboardClearSyncFunction() {
    }
    
      protected:
    ~NwScreenIsMonitorStartedFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.isMonitorStarted', UNKNOWN)
    
    
    {} // namespace
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    
  )DOC')
    .Input(0, 'data', 'a 1-D tensor.')
    .Output(
        0,
        'indices',
        'Indices of duplicate elements in data, excluding first occurrences.');
    
    workspace.ResetWorkspace()
    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    
    {    // Force registry to use ephemeral database plugin
    FLAGS_disable_database = true;
    DatabasePlugin::setAllowOpen(true);
    DatabasePlugin::initPlugin();
  }
  void TearDown() override {
    fs::remove_all(fs::temp_directory_path() / '/files_to_carve/');
  }
    
        if (q.value.HasMember('shard')) {
      auto shard = JSON::valueToSize(q.value['shard']);
      if (shard > 0 && shard < getMachineShard()) {
        continue;
      }
    }
    
    
    {  ReadLock lock(DecoratorsConfigParserPlugin::kDecorationsMutex);
  // Copy the decorations into the log_item.
  for (const auto& source : DecoratorsConfigParserPlugin::kDecorations) {
    for (const auto& decoration : source.second) {
      results[decoration.first] = decoration.second;
    }
  }
}
    
    #include <osquery/config/config.h>
#include <osquery/registry_factory.h>
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
      if (config.count('file_paths_query') > 0) {
    // We know this top-level is an Object.
    const auto& path_query_node = config.at('file_paths_query').doc();
    if (path_query_node.IsObject()) {
      for (const auto& category : path_query_node.GetObject()) {
        if (category.value.IsArray()) {
          std::string name = category.name.GetString();
          for (const auto& query : category.value.GetArray()) {
            auto sql = SQL(query.GetString());
            if (!sql.ok()) {
              LOG(ERROR) << 'Could not add file_paths using file_paths_query ''
                         << query.GetString()
                         << '': ' << sql.getMessageString();
            } else {
              for (const auto& row : sql.rows()) {
                auto pathIt = row.find('path');
                if (pathIt == row.end()) {
                  LOG(ERROR) << 'Cold not find non-empty 'path' column in the '
                                'results of file_paths_query ''
                             << query.GetString();
                } else {
                  std::string path = pathIt->second;
                  replaceGlobWildcards(path);
                  Config::get().addFile(source, name, path);
                }
              }
            }
          }
        }
      }
    }
  }
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_run_load) {
  // Re-enable the decorators, then update the config.
  // The 'load' decorator set should run every time the config is updated.
  FLAGS_disable_decorators = false;
  Config::get().update(config_data_);
    }
    
    DECLARE_bool(disable_database);
    
    #include <gflags/gflags.h>
#include <gtest/gtest.h>
    
    
    {  return Status(0, 'OK');
}
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
    class WriteControllerToken {
 public:
  explicit WriteControllerToken(WriteController* controller)
      : controller_(controller) {}
  virtual ~WriteControllerToken() {}
    }
    
      ASSERT_TRUE(controller.IsStopped());
  stop_token_1.reset();
  ASSERT_TRUE(controller.IsStopped());
  stop_token_2.reset();
  ASSERT_FALSE(controller.IsStopped());
    
      static void CompactFiles(void* arg) {
    std::unique_ptr<CompactionTask> task(
        reinterpret_cast<CompactionTask*>(arg));
    assert(task);
    assert(task->db);
    Status s = task->db->CompactFiles(
        task->compact_options,
        task->input_file_names,
        task->output_level);
    printf('CompactFiles() finished with status %s\n', s.ToString().c_str());
    if (!s.ok() && !s.IsIOError() && task->retry_on_fail) {
      // If a compaction task with its retry_on_fail=true failed,
      // try to schedule another compaction in case the reason
      // is not an IO error.
      CompactionTask* new_task = task->compactor->PickCompaction(
          task->db, task->column_family_name);
      task->compactor->ScheduleCompaction(new_task);
    }
  }
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // Write a key OUTSIDE of transaction
  s = txn_db->Put(write_options, 'abc', 'xyz');
  assert(s.ok());
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
    namespace rocksdb {
    }
    
    
    {  // time spent in open() and fopen().
  uint64_t open_nanos;
  // time spent in fallocate().
  uint64_t allocate_nanos;
  // time spent in write() and pwrite().
  uint64_t write_nanos;
  // time spent in read() and pread()
  uint64_t read_nanos;
  // time spent in sync_file_range().
  uint64_t range_sync_nanos;
  // time spent in fsync
  uint64_t fsync_nanos;
  // time spent in preparing write (fallocate etc).
  uint64_t prepare_write_nanos;
  // time spent in Logger::Logv().
  uint64_t logger_nanos;
};
    
    #pragma once