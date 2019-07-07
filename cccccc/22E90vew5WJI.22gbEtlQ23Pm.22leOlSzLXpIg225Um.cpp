
        
        // Unlike test_ops.cc, these are built with the 'require_shapes' option in the
// BUILD file.
    
    // An example Op.
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
      const tensorflow::OpRegistrationData* op_reg_data;
  auto status =
      tensorflow::OpRegistry::Global()->LookUp(node_def.op(), &op_reg_data);
  if (!status.ok()) {
    LOG(WARNING) << 'Op ' << node_def.op() << ' not found: ' << status;
    return '';
  }
  AddDefaultsToNodeDef(op_reg_data->op_def, &node_def);
    
      // Constructs an or-d together set of device options.
  explicit DeviceOptions(unsigned flags) : flags_(flags) {
    CHECK((flags & kMask) == flags);
  }
    
    
    {
    {}  // namespace host
}  // namespace stream_executor
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Indicates a preference for more shared memory than L1 cache.
  kPreferShared,
    
    public:
    explicit OpenURIDialog(QWidget *parent);
    ~OpenURIDialog();
    
    
    {    Lock& lock;
    Lock templock;
};
    
    
    {    /* On the first run, return 0 to force a second run */
    if (counter == 0) {
        memset(nonce32, 0, 32);
        return 1;
    }
    /* On the second run, return an overflow to force a third run */
    if (counter == 1) {
        memset(nonce32, 0xff, 32);
        return 1;
    }
    /* On the next run, return a valid nonce, but flip a coin as to whether or not to fail signing. */
    memset(nonce32, 1, 32);
    return secp256k1_rand_bits(1);
}
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    TEST(DBTest, FilesDeletedAfterCompaction) {
  ASSERT_OK(Put('foo', 'v2'));
  Compact('a', 'z');
  const int num_files = CountFiles();
  for (int i = 0; i < 10; i++) {
    ASSERT_OK(Put('foo', 'v2'));
    Compact('a', 'z');
  }
  ASSERT_EQ(CountFiles(), num_files);
}
    
    // A comparator for internal keys that uses a specified comparator for
// the user key portion and breaks ties by decreasing sequence number.
class InternalKeyComparator : public Comparator {
 private:
  const Comparator* user_comparator_;
 public:
  explicit InternalKeyComparator(const Comparator* c) : user_comparator_(c) { }
  virtual const char* Name() const;
  virtual int Compare(const Slice& a, const Slice& b) const;
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const;
  virtual void FindShortSuccessor(std::string* key) const;
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    // Get RenderView from current js context (only works under window context).
content::RenderView* GetCurrentRenderView();
content::RenderView* GetEnteredRenderView();
    
      ~EventListener() override;
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
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
    
    void NwDesktopCaptureMonitor::OnSourceRemoved(DesktopMediaList* list, int index) {
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceRemoved::Create(index);
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceRemoved::kEventName,
      std::move(args));
  }
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8, typename Generator9>
internal::CartesianProductHolder9<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8,
    Generator9> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8, const Generator9& g9) {
  return internal::CartesianProductHolder9<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8, Generator9>(
      g1, g2, g3, g4, g5, g6, g7, g8, g9);
}
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
#define GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)
    
    #if GTEST_HAS_DEATH_TEST
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
    namespace internal {
    }
    
    // Implementation #1 calculates the primes on-the-fly.
class OnTheFlyPrimeTable : public PrimeTable {
 public:
  virtual bool IsPrime(int n) const {
    if (n <= 1) return false;
    }
    }
    
    
// Tests IsPrime()
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    void SetCreateThreadPool(CreateThreadPoolFunc func) { g_ctp_impl = func; }
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    namespace grpc {
    }
    
    system_clock::time_point Timespec2Timepoint(gpr_timespec t) {
  if (gpr_time_cmp(t, gpr_inf_future(t.clock_type)) == 0) {
    return system_clock::time_point::max();
  }
  t = gpr_convert_clock_type(t, GPR_CLOCK_REALTIME);
  system_clock::time_point tp;
  tp += duration_cast<system_clock::time_point::duration>(seconds(t.tv_sec));
  tp +=
      duration_cast<system_clock::time_point::duration>(nanoseconds(t.tv_nsec));
  return tp;
}
    
    #include <algorithm>
#include 'Header Files/Number.h'
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetDisplayUpdatedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::DisplayUpdated, AutomationNotificationKind::Other, AutomationNotificationProcessing::ImportantMostRecent);
}
    
    #include 'PageTransition.h'
    
    
    {private:
  
  PageTransitionType type;           // transition style
  int duration;                      // duration of the effect in seconds
  PageTransitionAlignment alignment; // dimension of the effect
  PageTransitionDirection direction; // direction of motion
  int angle;                         // direction in degrees
  double scale;                      // scale
  GBool rectangular;                 // is the area to be flown in rectangular?
  GBool ok;                          // set if created successfully
};
    
    MediaRendition::MediaRendition(Object* obj) {
  Object tmp, tmp2;
  GBool hasClip = gFalse;
    }
    
      Sound *copy();
    
    // based in GfxState.cc
    
    #include <vector>
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
    
    #include 'glog/logging.h'
    
      std::vector<uint32_t> index_list;
  std::vector<double> pos_list;
  for (int i = 0; i < 8; i += 2) {
    index_list.push_back(i);
    pos_list.push_back(i * 2);
  }
    
    
    {
    {  } else {
    for (uint32_t r = 3; r < num_params; ++r) {
      for (uint32_t c = 3; c < num_params; ++c) {
        (*term_matrix)(r, c) = x_pow[r + c - 5];
      }
    }
    (*term_matrix).block(0, 0, num_params, 3) =
        Eigen::MatrixXd::Zero(num_params, 3);
    (*term_matrix).block(0, 0, 3, num_params) =
        Eigen::MatrixXd::Zero(3, num_params);
  }
}
    
    // config detail: {'name': 'brake_on_off', 'enum': {0: 'BRAKE_ON_OFF_OFF', 1:
// 'BRAKE_ON_OFF_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 48, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Brake_rpt_6c::Brake_on_offType Brakerpt6c::brake_on_off(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 1);
    }
    
    // config detail: {'name': 'pacmod_status', 'enum': {0:
// 'PACMOD_STATUS_CONTROL_DISABLED', 1: 'PACMOD_STATUS_CONTROL_ENABLED'},
// 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0,
// 'physical_range': '[0|1]', 'bit': 0, 'type': 'enum', 'order': 'motorola',
// 'physical_unit': ''}
Global_rpt_6a::Pacmod_statusType Globalrpt6a::pacmod_status(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 1);
    }