
        
        using namespace swift;
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    
    {    // Must be 'const' or nothing.
    clang::Qualifiers quals = pointee.getQualifiers();
    bool isConst = quals.hasConst();
    quals.removeConst();
    if (quals.empty()) {
      if (auto record = pointee->getAs<clang::RecordType>()) {
        auto recordDecl = record->getDecl();
        if (recordDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeMutableAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeRelatedAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return forRecord(isConst, record->getDecl());
        }
      } else if (pointee->isVoidType()) {
        if (typedefDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return isConst ? forConstVoid() : forVoid();
        }
      }
    }
  }
    
    #endif // SWIFT_IMPORTER_CFTYPEINFO_H

    
    void ModuleWrapJobAction::anchor() {}
    
    TEST(MovableMessageTest, MoveAssignmentOperator) {
  protobuf_unittest::TestAllTypes message1;
  TestUtil::SetAllFields(&message1);
  const auto* nested = &message1.optional_nested_message();
    }
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    void MapLiteTestUtil::ExpectMapFieldsSet(const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsSet<unittest::MapEnumLite,
                                      unittest::MAP_ENUM_BAR_LITE,
                                      unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
    // Main function:  Reads the entire address book from a file and prints all
//   the information inside.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;
    }
    
    bool AuthPropertyIterator::operator==(const AuthPropertyIterator& rhs) const {
  if (property_ == nullptr || rhs.property_ == nullptr) {
    return property_ == rhs.property_;
  } else {
    return index_ == rhs.index_;
  }
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    
    {}  // namespace grpc
    
    
    {}  // namespace grpc
    
    #include <grpc/support/port_platform.h>
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  gpr_log(GPR_ERROR,
          'Platforms other than Linux, Windows, and MacOS are not supported.');
  return std::make_pair(busy, total);
}
    
    namespace parallel {
    }
    
      // RegXMM is used for both FP and SIMD registers. Registers from 0 to 15 are
  // reserved to FP and register from 16 to 29 are reserved to SIMD.
  // Ignoring the vector registers 30, 31 due to kMaxRegs == 64
  constexpr RegXMM f0(0);   // volatile scratch register
  /* volatile, argument passing floating point registers */
  constexpr RegXMM f1(1);
  constexpr RegXMM f2(2);
  constexpr RegXMM f3(3);
  constexpr RegXMM f4(4);
  constexpr RegXMM f5(5);
  constexpr RegXMM f6(6);
  constexpr RegXMM f7(7);
  constexpr RegXMM f8(8);
  constexpr RegXMM f9(9);
  constexpr RegXMM f10(10);
  constexpr RegXMM f11(11);
  constexpr RegXMM f12(12);
  constexpr RegXMM f13(13);
  /* nonvolatile, local variables */
  constexpr RegXMM f14(14);
  constexpr RegXMM f15(15);
    
    #ifndef HPHP_FILE_STREAM_WRAPPER_H
#define HPHP_FILE_STREAM_WRAPPER_H
    
    #include 'hphp/runtime/base/directory.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
    
    #include <folly/Random.h>
    
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
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
      /*!
   * \brief add an element to a sketch
   * \param x The element added to the sketch
   * \param w The weight of the element.
   */
  inline void Push(DType x, RType w = 1) {
    if (w == static_cast<RType>(0)) return;
    if (inqueue.qtail == inqueue.queue.size()) {
      // jump from lazy one value to limit_size * 2
      if (inqueue.queue.size() == 1) {
        inqueue.queue.resize(limit_size * 2);
      } else {
        temp.Reserve(limit_size * 2);
        inqueue.MakeSummary(&temp);
        // cleanup queue
        inqueue.qtail = 0;
        this->PushTemp();
      }
    }
    inqueue.Push(x, w);
  }
    
    template<typename StorageIndex>
class SparsePageLZ4Format : public SparsePageFormat {
 public:
  explicit SparsePageLZ4Format(bool use_lz4_hc)
      : use_lz4_hc_(use_lz4_hc) {
    raw_bytes_ = raw_bytes_value_ = raw_bytes_index_ = 0;
    encoded_bytes_value_ = encoded_bytes_index_ = 0;
    nthread_ = dmlc::GetEnv('XGBOOST_LZ4_DECODE_NTHREAD', 4);
    nthread_write_ = dmlc::GetEnv('XGBOOST_LZ4_COMPRESS_NTHREAD', 12);
  }
  virtual ~SparsePageLZ4Format() {
    size_t encoded_bytes = raw_bytes_ +  encoded_bytes_value_ + encoded_bytes_index_;
    raw_bytes_ += raw_bytes_value_ + raw_bytes_index_;
    if (raw_bytes_ != 0) {
      LOG(CONSOLE) << 'raw_bytes=' << raw_bytes_
                   << ', encoded_bytes=' << encoded_bytes
                   << ', ratio=' << double(encoded_bytes) / raw_bytes_
                   << ', ratio-index=' << double(encoded_bytes_index_) /raw_bytes_index_
                   << ', ratio-value=' << double(encoded_bytes_value_) /raw_bytes_value_;
    }
  }
    }
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    // setup the offset
    offset_vec.clear();
    offset_vec.push_back(0);
    for (unsigned int fid : sorted_index_set) {
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      offset_vec.push_back(offset_vec.back() + size);
    }
    data_vec.resize(offset_vec.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += offset_vec[j + 1] - offset_vec[j];
        } else {
          break;
        }
      }
    }
    }
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    
    {
    {    EXPECT_DOUBLE_EQ(v_limit, it_lower->second);
    s += ds;
  }
}
    
    namespace apollo {
namespace planning {
    }
    }
    
    
    {  acc.Parse(bytes, length, &chassis_detail);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().commanded_value(),
                   0.772);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().output_value(), 4.37);
}
    
    // config detail: {'name': 'encoder_temperature', 'offset': -40.0,
// 'precision': 1.0, 'len': 16, 'is_signed_var': True, 'physical_range':
// '[-32808|32727]', 'bit': 7, 'type': 'int', 'order': 'motorola',
// 'physical_unit': 'deg C'}
int Brakemotorrpt271::encoder_temperature(const std::uint8_t* bytes,
                                          int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    
    {    return false;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipX* reverse() const override;
    virtual FlipX* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX() :_flipX(false) {}
    virtual ~FlipX() {}
    
    // private
    
    
    {    delete action;
    return nullptr;
}
    
    /**
@brief ShakyTiles3D action.
@details This action is make the target node shake with many tiles.
        You can create the action by these parameters:
        duration, grid size, range, whether shake on the z axis.
 */
class CC_DLL ShakyTiles3D : public TiledGrid3DAction
{
public:
    /** 
    @brief Create the action with a range, shake Z vertices, a grid and duration.
    @param duration Specify the duration of the ShakyTiles3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the creation success, return a pointer of ShakyTiles3D action; otherwise, return nil.
    */
    static ShakyTiles3D* create(float duration, const Size& gridSize, int range, bool shakeZ);
    }
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    void AnimationCache::addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist)
{
    auto anisItr = dictionary.find('animations');
    if (anisItr == dictionary.end() )
    {
        CCLOG('cocos2d: AnimationCache: No animations were found in provided dictionary.');
        return;
    }
    
    const Value& animations = anisItr->second;
    unsigned int version = 1;
    }
    
    http://www.cocos2d-x.org
    
    PolygonInfo AutoPolygon::generatePolygon(const std::string& filename, const Rect& rect, float epsilon, float threshold)
{
    AutoPolygon ap(filename);
    return ap.generateTriangles(rect, epsilon, threshold);
}
