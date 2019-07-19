
        
        #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    class TBOX;
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
      double m() const;  // get gradient
  double c(double m) const;            // get constant
  double rms(double m, double c) const;            // get error
  double pearson() const;  // get correlation coefficient.
    
    
    {}  // namespace tesseract.
    
      // Fills in two ambiguity tables (replaceable and dangerous) with information
  // read from the ambigs file. An ambiguity table is an array of lists.
  // The array is indexed by a class id. Each entry in the table provides
  // a list of potential ambiguities which can start with the corresponding
  // character. For example the ambiguity 'rn -> m', would be located in the
  // table at index of unicharset.unichar_to_id('r').
  // In 1-1 ambiguities (e.g. s -> S, 1 -> I) are recorded in
  // one_to_one_definite_ambigs_. This vector is also indexed by the class id
  // of the wrong part of the ambiguity and each entry contains a vector of
  // unichar ids that are ambiguous to it.
  // encoder_set is used to encode the ambiguity strings, undisturbed by new
  // unichar_ids that may be created by adding the ambigs.
  void LoadUnicharAmbigs(const UNICHARSET& encoder_set,
                         TFile *ambigs_file, int debug_level,
                         bool use_ambigs_for_adaption, UNICHARSET *unicharset);
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // The UNICHARMAP is represented as a tree whose nodes are of type
  // UNICHARMAP_NODE.
  struct UNICHARMAP_NODE {
    }
    
    namespace xgboost {
namespace data {
// Used for single batch data.
class SimpleDMatrix : public DMatrix {
 public:
  explicit SimpleDMatrix(std::unique_ptr<DataSource>&& source)
      : source_(std::move(source)) {}
    }
    }
    }
    
    #endif  // DMLC_ENABLE_STD_THREAD

    
    TEST(Tree, DumpText) {
  auto tree = ConstructTree();
  FeatureMap fmap;
  auto str = tree.DumpModel(fmap, true, 'text');
  size_t n_leaves = 0;
  size_t iter = 0;
  while ((iter = str.find('leaf', iter + 1)) != std::string::npos) {
    n_leaves++;
  }
  ASSERT_EQ(n_leaves, 4);
    }
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
    
    {GlobalRandomEngine& GlobalRandom() {
  return RandomThreadLocalStore::Get()->engine;
}
}  // namespace common
    
    void GBTree::DoBoost(DMatrix* p_fmat,
                     HostDeviceVector<GradientPair>* in_gpair,
                     ObjFunction* obj) {
  std::string updater_seq = tparam_.updater_seq;
  this->PerformTreeMethodHeuristic(p_fmat, {this->cfg_.begin(), this->cfg_.end()});
  this->ConfigureUpdaters({this->cfg_.begin(), this->cfg_.end()});
  LOG(DEBUG) << 'Using updaters: ' << tparam_.updater_seq;
  // initialize the updaters only when needed.
  if (updater_seq != tparam_.updater_seq) {
    this->updaters_.clear();
  }
    }
    
      /**
   * @brief Optionally handle snapshot query results separately from events.
   *
   * If a logger plugin wants to write snapshot query results (potentially
   * large amounts of data) to a specific sink it should implement logSnapshot.
   * Otherwise the serialized log item data will be forwarded to logString.
   *
   * @param s A special log item will complete results from a query.
   * @return log status
   */
  virtual Status logSnapshot(const std::string& s) {
    return logString(s);
  }
    
    TEST_F(RocksdbDatabaseTest, test_keys_search) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  ASSERT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key_1', 1));
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key_2', 2));
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key_3', 3));
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'kEy_1', 4));
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'kEy_2', 5));
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
    
    {  // Append the decorations.
  if (!item.decorations.empty()) {
    auto dec_obj = doc.getObject();
    auto target_obj = std::ref(dec_obj);
    if (FLAGS_decorations_top_level) {
      target_obj = std::ref(obj);
    }
    for (const auto& name : item.decorations) {
      doc.addRef(name.first, name.second, target_obj);
    }
    if (!FLAGS_decorations_top_level) {
      doc.add('decorations', dec_obj, obj);
    }
  }
}