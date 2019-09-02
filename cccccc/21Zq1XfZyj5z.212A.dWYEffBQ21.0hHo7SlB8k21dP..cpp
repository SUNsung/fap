
        
        #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
      // ValidFirstLine() and ValidBodyLine() take arguments describing a text line
  // in a block of text which we are trying to model:
  //   lmargin, lindent:  these add up to the distance from the leftmost ink
  //                      in the text line to the surrounding text block's left
  //                      edge.
  //   rmargin, rindent:  these add up to the distance from the rightmost ink
  //                      in the text line to the surrounding text block's right
  //                      edge.
  // The caller determines the division between 'margin' and 'indent', which
  // only actually affect whether we think the line may be centered.
  //
  // If the amount of whitespace matches the amount of whitespace expected on
  // the relevant side of the line (within tolerance_) we say it matches.
    
    #define           MAP_ACCEPT '1'
#define           MAP_REJECT_PERM '0'
#define           MAP_REJECT_TEMP '2'
#define           MAP_REJECT_POTENTIAL '3'
    
    
    {}  // namespace tesseract.
    
    
    {  // WARNING! Keep data as the first element! KDPairInc and KDPairDec depend
  // on the order of these elements so they can downcast pointers appropriately
  // for use by GenericHeap::Reshuffle.
  Data data;
  Key key;
};
// Specialization of KDPair to provide operator< for sorting in increasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairInc : public KDPair<Key, Data> {
  KDPairInc() = default;
  KDPairInc(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPairInc<Key, Data>& other) const {
    return this->key < other.key;
  }
  // Returns the input Data pointer recast to a KDPairInc pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairInc* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairInc*>(data_ptr);
  }
};
// Specialization of KDPair to provide operator< for sorting in decreasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairDec : public KDPair<Key, Data> {
  KDPairDec() = default;
  KDPairDec(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPairDec<Key, Data>& other) const {
    return this->key > other.key;
  }
  // Returns the input Data pointer recast to a KDPairDec pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairDec* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairDec*>(data_ptr);
  }
};
    
    
    {  UNICHARMAP_NODE* nodes;
};
    
      // If we manage the given dawg, decrement its count,
  // and possibly delete it if the count reaches zero.
  // If dawg is unknown to us, return false.
  bool FreeDawg(Dawg *dawg) {
    return dawgs_.Free(dawg);
  }
    
    TEST_F(DistanceApproachIPOPTInterfaceTest, eval_f) {
  int n = 1274;
  double obj_value = 0.0;
  double x[1274];
  std::fill_n(x, n, 1.2);
  bool res = ptop_->eval_f(n, x, true, obj_value);
  EXPECT_DOUBLE_EQ(obj_value, 1443.3600000000008) << 'eval_f: ' << obj_value;
  EXPECT_TRUE(res);
}
    
      ValetParkingContext* GetContext() {
    return GetContextAs<ValetParkingContext>();
  }
    
    GemController::~GemController() {}
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
class StageApproachingParkingSpotTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    config_.set_stage_type(
        ScenarioConfig::VALET_PARKING_APPROACHING_PARKING_SPOT);
  }
    }
    }
    }
    }
    }
    
    
    {    K key = 0;
    std::atomic<V *> value_ptr = {nullptr};
    std::atomic<Entry *> next = {nullptr};
  };
    
    bool ChannelManager::IsMessageTypeMatching(const std::string& lhs,
                                           const std::string& rhs) {
  if (lhs == rhs) {
    return true;
  }
  if (exempted_msg_types_.count(lhs) > 0) {
    return true;
  }
  if (exempted_msg_types_.count(rhs) > 0) {
    return true;
  }
  return false;
}
    
    
    {
    {    for (const auto& pair : data) {
      auto status = batch.Put(handle_ptr.get(), pair.first, pair.second);
      if (!status.ok()) {
        auto batch_write_error = createError(RocksdbError::BatchWriteFail)
                                 << status.ToString();
        return createError(DatabaseError::FailToWriteData,
                           std::move(batch_write_error))
               << 'Failed to write data';
      }
    }
    auto status = db_->Write(batch_write_options_, &batch);
    if (!status.ok()) {
      return createError(DatabaseError::FailToWriteData) << status.ToString();
    }
  }
  return handle.takeError();
}
    
    namespace osquery {
    }
    
    namespace osquery {
    }