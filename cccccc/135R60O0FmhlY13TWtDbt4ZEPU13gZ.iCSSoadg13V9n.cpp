
        
                    // Close ConPTY - this will terminate client process if running
            ClosePseudoConsole(hPC);
    
      const int MIN_DATA_DIM = 1;
  const int MAX_DATA_DIM = INT_MAX;
    
    
    {
    {
    {      CHECK(blob_dims == blob->shape()) << 'Cannot load blob from hdf5; shape '
            << 'mismatch. Source shape is ' << source_shape_string
            << ' target shape is ' << blob->shape_string();
    }
  }
}
    
    template <typename Dtype>
void Net<Dtype>::BackwardTo(int end) {
  BackwardFromTo(layers_.size() - 1, end);
}
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
      /**
   * @brief Compute the volume of a slice; i.e., the product of dimensions
   *        among a range of axes.
   *
   * @param start_axis The first axis to include in the slice.
   *
   * @param end_axis The first axis to exclude from the slice.
   */
  inline int count(int start_axis, int end_axis) const {
    CHECK_LE(start_axis, end_axis);
    CHECK_GE(start_axis, 0);
    CHECK_GE(end_axis, 0);
    CHECK_LE(start_axis, num_axes());
    CHECK_LE(end_axis, num_axes());
    int count = 1;
    for (int i = start_axis; i < end_axis; ++i) {
      count *= shape(i);
    }
    return count;
  }
  /**
   * @brief Compute the volume of a slice spanning from a particular first
   *        axis to the final axis.
   *
   * @param start_axis The first axis to include in the slice.
   */
  inline int count(int start_axis) const {
    return count(start_axis, num_axes());
  }
    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace leveldb
    
      void Reopen() { ASSERT_OK(TryReopen()); }
    
      // Returns true iff some file in the specified level overlaps
  // some part of [*smallest_user_key,*largest_user_key].
  // smallest_user_key==nullptr represents a key smaller than all the DB's keys.
  // largest_user_key==nullptr represents a key largest than all the DB's keys.
  bool OverlapInLevel(int level, const Slice* smallest_user_key,
                      const Slice* largest_user_key);
    
      // An iterator is either positioned at a key/value pair, or
  // not valid.  This method returns true iff the iterator is valid.
  virtual bool Valid() const = 0;
    
    #include 'leveldb/export.h'
#include 'leveldb/slice.h'
    
      // Clear all updates buffered in this batch.
  void Clear();
    
    #include <assert.h>
    
    
    {  // Total memory usage of the arena.
  //
  // TODO(costan): This member is accessed via atomics, but the others are
  //               accessed without any locking. Is this OK?
  std::atomic<size_t> memory_usage_;
};
    
    // Different bits-per-byte
    
    static const int kMMapLimit = 4;
    
    #endif  // STORAGE_LEVELDB_UTIL_HISTOGRAM_H_

    
      std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    namespace aria2 {
    }
    
      std::shared_ptr<DHTBucket> getBucketFor(const unsigned char* nodeID) const;
    
    #include 'DHTNode.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'fmt.h'
#include 'util.h'
#include 'array_fun.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
      ~DHTRoutingTableDeserializer();
    
    namespace aria2 {
    }
    
    class DHTTask;
    
    DHTTaskFactoryImpl::~DHTTaskFactoryImpl() = default;
    
      struct CacheEntry {
    std::string hostname_;
    uint16_t port_;
    std::vector<AddrEntry> addrEntries_;
    }
    
    using Matrix = Eigen::MatrixXd;
    
    // CRC algorithm from the NewtonM2 document.
inline uint32_t crc32_word(uint32_t word) {
  for (int j = 0; j < 8; ++j) {
    if (word & 1) {
      word = (word >> 1) ^ 0xEDB88320;
    } else {
      word >>= 1;
    }
  }
  return word;
}
    
    /// Definition of the position of a lane marking in respect to the ego lane.
enum class LaneLinePositionType {
  CURB_LEFT = -5,
  FOURTH_LEFT = -4,
  THIRD_LEFT = -3,
  ADJACENT_LEFT = -2,  //!< lane marking on the left side next to ego lane
  EGO_LEFT = -1,       //!< left lane marking of the ego lane
  EGO_CENTER = 0,      //!< center lane marking of the ego lane, changing lane
  EGO_RIGHT = 1,       //!< right lane marking of the ego lane
  ADJACENT_RIGHT = 2,  //!< lane marking on the right side next to ego lane
  THIRD_RIGHT = 3,
  FOURTH_RIGHT = 4,
  CURB_RIGHT = 5,
  OTHER = 6,   //!< other types of lane
  UNKNOWN = 7  //!< background
};
    
      // @brief age of the tracked object, required
  double tracking_time = 0.0;
  // @brief timestamp of latest measurement, required
  double latest_tracked_time = 0.0;
    
    
    {  //----------------------------------------------------------------
  //    area ID, corner ID and face ID
  //----------------------------------------------------------------
  //    8 | 1 | 2       a
  //    ---------    0-----1   ^
  //      |   |       |   |    |
  //    7 | 0 | 3    d|   |b
  //      |   |       |   |
  //    ---------    3-----2
  //    6 | 5 | 4       c
  //----------------------------------------------------------------
  int area_id;
  // @brief visible ratios
  float visible_ratios[4];
  // @brief cut off ratios on width, length (3D)
  //        cut off ratios on left, right (2D)
  float cut_off_ratios[4];
};
typedef std::shared_ptr<CameraObjectSupplement> CameraObjectSupplementPtr;
typedef std::shared_ptr<const CameraObjectSupplement>
    CameraObjectSupplementConstPtr;
    
    // @brief: compute polygon center
// @return true if get center successfully, otherwise return false
bool TrackObjectDistance::ComputePolygonCenter(
    const base::PolygonDType& polygon, const Eigen::Vector3d& ref_pos,
    int range, Eigen::Vector3d* center) {
  base::PolygonDType polygon_part;
  std::map<double, int> distance2idx;
  for (size_t idx = 0; idx < polygon.size(); ++idx) {
    const auto& point = polygon.at(idx);
    double distance =
        sqrt(pow(point.x - ref_pos(0), 2) + pow(point.y - ref_pos(1), 2));
    distance2idx.insert(std::make_pair(distance, idx));
  }
  int size = static_cast<int>(distance2idx.size());
  int nu = std::max(range, size / range + 1);
  nu = std::min(nu, size);
  int count = 0;
  std::map<double, int>::iterator it = distance2idx.begin();
  for (; it != distance2idx.end(), count < nu; ++it, ++count) {
    polygon_part.push_back(polygon[it->second]);
  }
  bool state = ComputePolygonCenter(polygon_part, center);
  return state;
}
    
    const char *DstExistanceFusion::name_ = 'DstExistanceFusion';
const char *DstExistanceFusion::toic_name_ = 'DstToicFusion';
ExistanceDstMaps DstExistanceFusion::existance_dst_maps_;
ToicDstMaps DstExistanceFusion::toic_dst_maps_;
DstExistanceFusionOptions DstExistanceFusion::options_;
    
    #include 'modules/perception/lib/config_manager/config_manager.h'
#include 'modules/perception/proto/map_manager_config.pb.h'
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    setAllowFallocate
 * Signature: (JZ)V
 */
void Java_org_rocksdb_EnvOptions_setAllowFallocate(
    JNIEnv*, jobject, jlong jhandle, jboolean allow_fallocate) {
  ENV_OPTIONS_SET_BOOL(jhandle, allow_fallocate);
}
    
      // Column family descriptor
  for (rocksdb::ColumnFamilyDescriptor& cfd : cf_descs) {
    // Construct a ColumnFamilyDescriptor java object
    jobject jcfd = rocksdb::ColumnFamilyDescriptorJni::construct(env, &cfd);
    if (env->ExceptionCheck()) {
      // exception occurred constructing object
      if (jcfd != nullptr) {
        env->DeleteLocalRef(jcfd);
      }
      return;
    }
    }
    
      jlong jfile_size = env->CallLongMethod(m_jcallback_obj,
      m_jget_file_size_methodid);
    
    #include <jni.h>
#include <memory>