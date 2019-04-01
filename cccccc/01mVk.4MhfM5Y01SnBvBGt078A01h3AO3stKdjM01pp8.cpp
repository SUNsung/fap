
        
         private:
  static int32_t next_id_;
  static atom::KeyWeakMap<int32_t>* weak_map_;  // leaked on purpose
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    #include 'atom/browser/ui/cocoa/delayed_native_view_host.h'
    
        void minMaxLoc(const Size2D &size,
                   const s16 * srcBase, ptrdiff_t srcStride,
                   s16 &minVal, size_t &minCol, size_t &minRow,
                   s16 &maxVal, size_t &maxCol, size_t &maxRow);
    
    void absDiff(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<f32>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        void operator() (const typename VecTraits<s32>::vec64 & v_src0,
                     const typename VecTraits<s32>::vec64 & v_src1,
                     typename VecTraits<s32>::vec64 & v_dst) const
    {
        float32x2_t vs1 = vcvt_f32_s32(v_src0);
        float32x2_t vs2 = vcvt_f32_s32(v_src1);
    }
    
            int32x4_t norml = vmull_s16(vget_low_s16(dx), vget_low_s16(dx));
        int32x4_t normh = vmull_s16(vget_high_s16(dy), vget_high_s16(dy));
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
#endif
}
    
            for ( ; x < width; ++x)
        {
            // make extrapolation for the last elements
            if (x + 1 >= width)
            {
                if (border == BORDER_MODE_CONSTANT)
                {
                    nextx[0] = borderValue;
                    nextx[1] = borderValue;
                    nextx[2] = borderValue;
                }
                else if (border == BORDER_MODE_REPLICATE)
                {
                    nextx[0] = srow0[x];
                    nextx[1] = srow1[x];
                    nextx[2] = srow2[x];
                }
            }
            else
            {
                nextx[0] = srow0 ? srow0[x + 1] : borderValue;
                nextx[1] =         srow1[x + 1]              ;
                nextx[2] = srow2 ? srow2[x + 1] : borderValue;
            }
    }
    
    template <typename T>
inline void inRangeCheck(const Size2D &_size,
                         const T * srcBase, ptrdiff_t srcStride,
                         const T * rng1Base, ptrdiff_t rng1Stride,
                         const T * rng2Base, ptrdiff_t rng2Stride,
                         u8 * dstBase, ptrdiff_t dstStride)
{
    typedef typename internal::VecTraits<T>::vec128 vec128;
    typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
    }
    
                uint8x8_t vsrc = vld1_u8(src + j);
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    void OneofGenerator::SetOneofIndexBase(int index_base) {
  int index = descriptor_->index() + index_base;
  // Flip the sign to mark it as a oneof.
  variables_['index'] = SimpleItoa(-index);
}
    
    void MapLiteTestUtil::SetArenaMapFields(unittest::TestArenaMapLite* message) {
  MapTestUtilImpl::SetArenaMapFields<unittest::MapEnumLite,
                                     unittest::MAP_ENUM_BAR_LITE,
                                     unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    std::ostream& operator<<(std::ostream& os, const Status& x) {
  os << x.ToString();
  return os;
}
    
    
    {  return 0;
}

    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
      static void OnDoneRecvInitialMetadataCb(void* user_data, grpc_error* error);
    
    namespace grpc {
    }
    
    #if !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)
    
    // From a non-empty container, returns a pointer to a random element.
template <typename C>
const typename C::value_type* RandomElement(const C& container) {
  GPR_ASSERT(!container.empty());
  auto it = container.begin();
  std::advance(it, std::rand() % container.size());
  return &(*it);
}
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    #include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
    TEST(LogTest, MarginalTrailer) {
  // Make a trailer that is exactly the same length as an empty record.
  const int n = kBlockSize - 2*kHeaderSize;
  Write(BigString('foo', n));
  ASSERT_EQ(kBlockSize - kHeaderSize, WrittenBytes());
  Write('');
  Write('bar');
  ASSERT_EQ(BigString('foo', n), Read());
  ASSERT_EQ('', Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
}
    
      void RepairTable(const std::string& src, TableInfo t) {
    // We will copy src contents to a new table and then rename the
    // new table over the source.
    }
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != nullptr) {
    *tableptr = nullptr;
  }
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    namespace ppc64_asm {
    }
    
      void clear() {
    codeBlock.clear();
  }
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    
    {protected:
  bool closeImpl();
};
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
    #include 'hphp/util/stack-trace.h'
    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    // Using Stack
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool isValid(string s) {
    }
    }
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
        vector<int> vec2 = {2};
    Solution().sortColors(vec2);
    printArr(vec2);
    
    private:
    ListNode* reverse(ListNode* head, int index, ListNode* &left){
    }
    
    int main() {
    }
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    }
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    
    {  int ret = x;
  return ret;
}
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_general_info_60b.h'
    
    
    {
    {
    {}  // namespace msf
}  // namespace localization
}  // namespace apollo

    
    
    {  EXPECT_EQ(bd, bd_golden);
}
    
      MatrixXd mat_golden(10, 10);
  // clang-format off
  mat_golden <<
    0.2,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 0.2,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 0.2,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 0.2,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 0.2,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 0.2,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 0.2,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 0.2,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 0.2,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 0.2;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    double Spline1dSeg::ThirdOrderDerivative(const double x) const {
  return third_order_derivative_(x);
}
    
    #include 'modules/canbus/vehicle/gem/gem_message_manager.h'
    
    namespace apollo {
namespace canbus {
    }
    }
    
    
    {
    {
    {}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    #include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'