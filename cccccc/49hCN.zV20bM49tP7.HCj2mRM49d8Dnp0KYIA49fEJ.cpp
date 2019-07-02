
        
        
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    
namespace nwapi {
    }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    class NwClipboardSetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    
    {/*!
 * \brief Macro to register metric.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_METRIC(RMSE, 'ndcg')
 * .describe('Rooted mean square error.')
 * .set_body([](const char* param) {
 *     int at_k = atoi(param);
 *     return new NDCG(at_k);
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_METRIC(UniqueId, Name)                         \
  ::xgboost::MetricReg&  __make_ ## MetricReg ## _ ## UniqueId ## __ =  \
      ::dmlc::Registry< ::xgboost::MetricReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost
#endif  // XGBOOST_METRIC_H_

    
      static Predictor* Create(std::string const& name, LearnerTrainParam const*);
    
    /**
 * \brief Select coordinate with the greatest gradient magnitude.
 * \note It has O(num_feature^2) complexity. It is fully deterministic.
 *
 * \note It allows restricting the selection to top_k features per group with
 * the largest magnitude of univariate weight change, by passing the top_k value
 * through the `param` argument of Setup(). That would reduce the complexity to
 * O(num_feature*top_k).
 */
class GreedyFeatureSelector : public FeatureSelector {
 public:
  void Setup(const gbm::GBLinearModel &model,
             const std::vector<GradientPair> &gpair,
             DMatrix *p_fmat, float alpha, float lambda, int param) override {
    top_k_ = static_cast<bst_uint>(param);
    const bst_uint ngroup = model.param.num_output_group;
    if (param <= 0) top_k_ = std::numeric_limits<bst_uint>::max();
    if (counter_.size() == 0) {
      counter_.resize(ngroup);
      gpair_sums_.resize(model.param.num_feature * ngroup);
    }
    for (bst_uint gid = 0u; gid < ngroup; ++gid) {
      counter_[gid] = 0u;
    }
  }
    }
    
    namespace aria2 {
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    class Env;
class WriteControllerToken;
    
      // create column family
  ColumnFamilyHandle* cf;
  s = db->CreateColumnFamily(ColumnFamilyOptions(), 'new_cf', &cf);
  assert(s.ok());
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      // Decide we want to revert the last write from this transaction.
  txn->RollbackToSavePoint();
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    setShareTableFiles
 * Signature: (JZ)V
 */
void Java_org_rocksdb_BackupableDBOptions_setShareTableFiles(JNIEnv* /*env*/,
                                                             jobject /*jobj*/,
                                                             jlong jhandle,
                                                             jboolean flag) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  bopt->share_table_files = flag;
}
    
      env->ReleaseStringUTFChars(jcheckpoint_path, checkpoint_path);
    
    
    {  int ret = x;
  return ret;
}
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
            /**
         * Copy constructor.
         * It performs `fast copy`: For performance purpose, copying a Rectangle<T> or Datum or cv::Mat just copies
         * the reference, it still shares the same internal data.
         * Modifying the copied element will modify the original one.
         * Use clone() for a slower but real copy, similarly to cv::Mat and Rectangle<T>.
         * @param rectangle Rectangle to be copied.
         */
        Rectangle<T>(const Rectangle<T>& rectangle);