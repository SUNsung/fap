
        
        EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
    namespace {
    }
    
    #include 'extensions/browser/extension_function.h'
    
    #endif
    
            int16x8_t l02 = vaddq_s16(line0x, line2x);
        int16x8_t l1x2 = vshlq_n_s16(line1x, 1);
        int16x8_t dy = vsubq_s16(line2y, line0y);
        int16x8_t dx = vaddq_s16(l1x2, l02);
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    #endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, f32, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src]]                              \n\t'
             'vcvt.f32.s32 q1, q0                                    \n\t'
             'vst1.32 {d2-d3}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3'//,'d4','d5'
         );
         __asm__ (
             'vld1.32 {d0-d1}, [%[src]]                              \n\t'
             'vcvt.f32.s32 q1, q0                                    \n\t'
             'vst1.32 {d2-d3}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i + 4)
             : 'd0','d1','d2','d3'//,'d4','d5'
         );
     }
})
#else
CVT_FUNC(s32, f32, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline_s32 = vld1q_s32(_src + i);
         float32x4_t vline_f32 = vcvtq_f32_s32(vline_s32);
         vst1q_f32(_dst + i, vline_f32);
    }
    }
    
                // calculate values for plain CPU part below if needed
            if (x + 8 >= bwidth)
            {
                ptrdiff_t x3 = x == width ? width - 1 : x;
                ptrdiff_t x4 = border == BORDER_MODE_CONSTANT ? x3 - 1 : std::max<ptrdiff_t>(x3 - 1, 0);
    }
    
    f64 dotProduct(const Size2D &_size,
               const f32 * src0Base, ptrdiff_t src0Stride,
               const f32 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width * sizeof(f32)))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    #ifdef CAROTENE_NEON
    
    
    {            prev = vaddw_u16(prev, vdup_lane_u16(el4h, 3));
        }
    
            s16 prevx = 0, currx = 0, nextx = 0;
        ptrdiff_t x = 0;
        const ptrdiff_t bwidth = y + 2 < height ? width : (width - 8);
    
    namespace leveldb {
    }
    
    #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
      bool empty() const { return head_.next_ == &head_; }
  SnapshotImpl* oldest() const { assert(!empty()); return head_.next_; }
  SnapshotImpl* newest() const { assert(!empty()); return head_.prev_; }
    
      if (msg == nullptr && !input.empty()) {
    msg = 'invalid tag';
  }
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    
    {  SrcPos start;
  SrcPos past;
};
    
      char* comma = (char*)memchr(data, ',', data_len);
  if (comma == nullptr) {
    raise_warning('rfc2397: missing comma');
    return nullptr;
  }
    
    #endif // incl_HPHP_DEBUGGABLE_H_

    
    
    {}

    
        class Rational
    {
    public:
        Rational() noexcept;
        Rational(Number const& n) noexcept;
        Rational(Number const& p, Number const& q) noexcept;
        Rational(int32_t i);
        Rational(uint32_t ui);
        Rational(uint64_t ui);
    }
    
            static property Windows::UI::Xaml::DependencyProperty^ AnnouncementProperty
        {
            Windows::UI::Xaml::DependencyProperty^ get()
            {
                return s_announcementProperty;
            }
        }
    
            static std::unordered_map<std::wstring, std::wstring> GetTokenToReadableNameMap();
    
    static constexpr auto sc_MetadataUriLocalizeFor = L'https://go.microsoft.com/fwlink/?linkid=2041093&localizeFor=';
static constexpr auto sc_RatiosUriRelativeTo = L'https://go.microsoft.com/fwlink/?linkid=2041339&localCurrency=';
    
      static bool isInitialized6() { return data6_.initialized; }
    
      virtual bool isReply() const CXX11_OVERRIDE;
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
      ~DHTRoutingTable();
    
    #endif // D_DHT_ROUTING_TABLE_DESERIALIZER_H

    
    
    {  void serialize(const std::string& filename);
};
    
    #include <memory>
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    std::vector<DNSCache::AddrEntry>::const_iterator
DNSCache::CacheEntry::find(const std::string& addr) const
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}
    
    #include 'gtest/gtest.h'
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    
    {  Byte t1(bytes + 6);
  uint32_t t = t1.get_byte(5, 3);
  x <<= 3;
  x |= t;
  double ret = x * CLUSTER_VREL_RES + CLUSTER_VREL_LAT_MIN;
  return ret;
}
    
    void Spline1dSeg::SetParams(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
    #include 'modules/canbus/vehicle/gem/protocol/accel_rpt_68.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_1_70.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_2_71.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_3_72.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'
#include 'modules/canbus/vehicle/gem/protocol/date_time_rpt_83.h'
#include 'modules/canbus/vehicle/gem/protocol/global_rpt_6a.h'
#include 'modules/canbus/vehicle/gem/protocol/headlight_rpt_77.h'
#include 'modules/canbus/vehicle/gem/protocol/horn_rpt_79.h'
#include 'modules/canbus/vehicle/gem/protocol/lat_lon_heading_rpt_82.h'
#include 'modules/canbus/vehicle/gem/protocol/parking_brake_status_rpt_80.h'
#include 'modules/canbus/vehicle/gem/protocol/shift_rpt_66.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_1_73.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_2_74.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_3_75.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_rpt_1_6e.h'
#include 'modules/canbus/vehicle/gem/protocol/turn_rpt_64.h'
#include 'modules/canbus/vehicle/gem/protocol/vehicle_speed_rpt_6f.h'
#include 'modules/canbus/vehicle/gem/protocol/wheel_speed_rpt_7a.h'
#include 'modules/canbus/vehicle/gem/protocol/wiper_rpt_91.h'
#include 'modules/canbus/vehicle/gem/protocol/yaw_rate_rpt_81.h'
    
      Byte t3(bytes + 7);
  t = t3.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    #include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'
    
    // config detail: {'name': 'output_value', 'enum': {0: 'OUTPUT_VALUE_OFF', 1:
// 'OUTPUT_VALUE_ON'}, 'precision': 1.0, 'len': 8, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 23, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Horn_rpt_79::Output_valueType Hornrpt79::output_value(const std::uint8_t* bytes,
                                                      int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }