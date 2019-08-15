
        
          const char* tmpdir = getenv('TMPDIR');
  if (tmpdir == nullptr) {
    tmpdir = '/tmp';
  }
    
    Github Links:
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
      // A hole in the heap exists at hole_index, and we want to fill it with the
  // given pair. SiftDown sifts the hole downward to the correct position and
  // returns the destination index without actually putting pair there.
  int SiftDown(int hole_index, const Pair& pair) {
    int heap_size = heap_.size();
    int child;
    while ((child = LeftChild(hole_index)) < heap_size) {
      if (child + 1 < heap_size && heap_[child + 1] < heap_[child])
        ++child;
      if (heap_[child] < pair) {
        heap_[hole_index] = heap_[child];
        hole_index = child;
      } else {
        break;
      }
    }
    return hole_index;
  }
    
    
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
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    
    {}  // namespace tesseract

    
    
    {}  // namespace mongo

    
    #include 'mongo/db/stats/top.h'
#include 'mongo/unittest/unittest.h'
    
        virtual ~Base() {
        if (!collection())
            return;
        WriteUnitOfWork wunit(&_opCtx);
        _context.db()->dropCollection(&_opCtx, nss()).transitional_ignore();
        wunit.commit();
    }
    
            // Set up the count stage
        auto params = makeCountScanParams(&_opCtx, getIndex(ctx.db(), BSON('a' << 1)));
        params.startKey = BSON('' << 3);
        params.startKeyInclusive = false;
        params.endKey = BSON('' << 7);
        params.endKeyInclusive = false;
    
    #ifdef REGEX_RUN_DEBUG
    if (fTraceDebug) {
        printf('MatchAt(startIdx=%ld)\n', startIdx);
        printf('Original Pattern: \'%s\'\n', CStr(StringFromUText(fPattern->fPattern))());
        printf('Input String:     \'%s\'\n\n', CStr(StringFromUText(fInputText))());
    }
#endif
    
    #if !UCONFIG_NO_TRANSLITERATION
    
    #include 'unicode/regex.h'
#include 'unicode/uclean.h'
#include 'cmemory.h'
#include 'cstr.h'
#include 'uassert.h'
#include 'uhash.h'
#include 'uvector.h'
#include 'uvectr32.h'
#include 'uvectr64.h'
#include 'regexcmp.h'
#include 'regeximp.h'
#include 'regexst.h'
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
    #endif

    
    namespace apollo {
namespace planning {
    }
    }
    
    #pragma once
    
    namespace apollo {
namespace planning {
    }
    }
    
        params.push_back(static_cast<float>(node['world2cam'].size()));
    
    TEST_F(StageApproachingParkingSpotTest, Init) {
  StageApproachingParkingSpot stage_approaching_parking_spot(config_);
  EXPECT_EQ(stage_approaching_parking_spot.Name(),
            ScenarioConfig::StageType_Name(config_.stage_type()));
}
    
    inline void L2Norm(int feat_dim, float *feat_data) {
  if (feat_dim == 0) {
    return;
  }
  // feature normalization
  float l2norm = 0.0f;
  for (int i = 0; i < feat_dim; ++i) {
    l2norm += feat_data[i] * feat_data[i];
  }
  if (l2norm == 0) {
    float val = 1.f / std::sqrt(static_cast<float>(feat_dim));
    for (int i = 0; i < feat_dim; ++i) {
      feat_data[i] = val;
    }
  } else {
    l2norm = std::sqrt(l2norm);
    for (int i = 0; i < feat_dim; ++i) {
      feat_data[i] /= l2norm;
    }
  }
}
    
    /// Size of blocks used for POSTing data back to remote endpoints
CLI_FLAG(uint32,
         carver_block_size,
         8192,
         'Size of blocks used for POSTing data back to remote endpoints');
    
      /**
   * @brief Map a function across the set of scheduled queries
   *
   * @param predicate is a function which accepts two parameters, the name of
   * the query and the ScheduledQuery struct of the queries data. predicate
   * will be called on each currently scheduled query.
   *
   * @param blacklisted [optional] return blacklisted queries if true.
   *
   * @code{.cpp}
   *   std::map<std::string, ScheduledQuery> queries;
   *   Config::get().scheduledQueries(
   *      ([&queries](std::string name, const ScheduledQuery& query) {
   *        queries[name] = query;
   *      }));
   * @endcode
   */
  void scheduledQueries(
      std::function<void(std::string name, const ScheduledQuery& query)>
          predicate,
      bool blacklisted = false) const;
    
    FLAG(uint64,
     pack_refresh_interval,
     3600,
     'Cache expiration for a packs discovery queries');
    
      // Return default value in case of NotFound error
  Expected<int32_t, DatabaseError> getInt32Or(const std::string& domain,
                                              const std::string& key,
                                              const int32_t default_value = 0);
  Expected<std::string, DatabaseError> getStringOr(
      const std::string& domain,
      const std::string& key,
      const std::string& default_value = '');
    
    template <typename StorageType>
void InMemoryStorage<StorageType>::put(const std::string& key,
                                       const StorageType value) {
  storage_[key] = value;
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::checkDbConnection() {
  if (db_ == nullptr) {
    return createError(DatabaseError::DbIsNotOpen, 'Database is closed');
  }
  return Success();
}
    
    #include <boost/noncopyable.hpp>
    
      virtual void SetUp() {
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    auto random_name = boost::uuids::to_string(uuid);
    auto path = boost::filesystem::temp_directory_path().append(random_name);
    boost::filesystem::create_directory(path);
    path_ = path.string();
  }