
    {
    {}  // namespace swig
}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Converts TF_DataType to the corresponding numpy type.
Status TF_DataType_to_PyArray_TYPE(TF_DataType tf_datatype,
                                   int* out_pyarray_type);
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
    #include <Python.h>
    
    // FFT support interface -- this can be derived from a GPU executor when the
// underlying platform has an FFT library implementation available. See
// StreamExecutor::AsFft().
//
// This support interface is not generally thread-safe; it is only thread-safe
// for the CUDA platform (cuFFT) usage; host side FFT support is known
// thread-compatible, but not thread-safe.
class FftSupport {
 public:
  virtual ~FftSupport() {}
    }
    
      // Delegate implementations.
  void OnError(const std::string& error) override;
  void OnError(const std::string& message,
               const int code,
               const std::string& domain) override;
  void OnCheckingForUpdate() override;
  void OnUpdateAvailable() override;
  void OnUpdateNotAvailable() override;
  void OnUpdateDownloaded(const std::string& release_notes,
                          const std::string& release_name,
                          const base::Time& release_date,
                          const std::string& update_url) override;
    
    
    {}  // namespace atom

    
    #include 'atom/browser/api/event_emitter.h'
    
     protected:
  RenderProcessPreferences(
      v8::Isolate* isolate,
      const atom::RenderProcessPreferences::Predicate& predicate);
  ~RenderProcessPreferences() override;
    
      // Removes this instance from the weak map.
  void RemoveFromWeakMap() {
    if (weak_map_ && weak_map_->Has(weak_map_id()))
      weak_map_->Remove(weak_map_id());
  }
    
    #include 'content/public/browser/javascript_dialog_manager.h'
    
      AtomQuotaPermissionContext();
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    // --------------------------- Typedefs ---------------------------
    
    AboutProtocolHandler::AboutProtocolHandler() {}
    
    void URLRequestAboutJob::Kill() {
  weak_ptr_factory_.InvalidateWeakPtrs();
  URLRequestJob::Kill();
}
    
      if (up_in_image.x() == 0.0F) {
    if (up_in_image.y() > 0.0F) {
      *orientation = ORIENTATION_PAGE_UP;
    } else {
      *orientation = ORIENTATION_PAGE_DOWN;
    }
  } else if (up_in_image.x() > 0.0F) {
    *orientation = ORIENTATION_PAGE_RIGHT;
  } else {
    *orientation = ORIENTATION_PAGE_LEFT;
  }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // A floating-point version of WordFeature, used as an intermediate during
// scaling.
struct FloatWordFeature {
  static void FromWordFeatures(const GenericVector<WordFeature>& word_features,
                               GenericVector<FloatWordFeature>* float_features);
  // Sort function to sort first by x-bucket, then by y.
  static int SortByXBucket(const void*, const void*);
    }
    
      double m() const;  // get gradient
  double c(double m) const;            // get constant
  double rms(double m, double c) const;            // get error
  double pearson() const;  // get correlation coefficient.
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    TEST(DBTest, StillReadSST) {
  ASSERT_OK(Put('foo', 'bar'));
  ASSERT_EQ('bar', Get('foo'));
    }
    
    // Return the name of the info log file for 'dbname'.
std::string InfoLogFileName(const std::string& dbname);
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
          case kEof:
        if (in_fragmented_record) {
          // This can be caused by the writer dying immediately after
          // writing a physical record but before completing the next; don't
          // treat it as a corruption, just ignore the entire logical record.
          scratch->clear();
        }
        return false;
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    TEST_F(RouteSegmentsTest, Stitch) {
  auto lane1 = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-1'));
  auto lane2 = hdmap_.GetLaneById(hdmap::MakeMapId('13_1_-1'));
  {
    RouteSegments seg1;
    RouteSegments seg2;
    seg1.emplace_back(lane1, 10, 20);
    seg1.emplace_back(lane2, 10, 15);
    seg2.emplace_back(lane2, 15, 20);
    seg2.emplace_back(lane2, 20, 30);
    EXPECT_TRUE(seg1.Stitch(seg2));
    EXPECT_EQ(3, seg1.size());
    EXPECT_EQ(lane1, seg1[0].lane);
    EXPECT_FLOAT_EQ(10, seg1[0].start_s);
    EXPECT_FLOAT_EQ(20, seg1[0].end_s);
    EXPECT_EQ(lane2, seg1[1].lane);
    EXPECT_FLOAT_EQ(10, seg1[1].start_s);
    EXPECT_FLOAT_EQ(20, seg1[1].end_s);
    EXPECT_EQ(lane2, seg1[2].lane);
    EXPECT_FLOAT_EQ(20, seg1[2].start_s);
    EXPECT_FLOAT_EQ(30, seg1[2].end_s);
  }
  {
    RouteSegments seg1;
    RouteSegments seg2;
    seg1.emplace_back(lane1, 10, 20);
    seg1.emplace_back(lane2, 10, 15);
    seg2.emplace_back(lane2, 15, 20);
    seg2.emplace_back(lane2, 20, 30);
    EXPECT_TRUE(seg2.Stitch(seg1));
    EXPECT_EQ(3, seg2.size());
    EXPECT_EQ(lane1, seg2[0].lane);
    EXPECT_FLOAT_EQ(10, seg2[0].start_s);
    EXPECT_FLOAT_EQ(20, seg2[0].end_s);
    EXPECT_EQ(lane2, seg2[1].lane);
    EXPECT_FLOAT_EQ(10, seg2[1].start_s);
    EXPECT_FLOAT_EQ(20, seg2[1].end_s);
    EXPECT_EQ(lane2, seg2[2].lane);
    EXPECT_FLOAT_EQ(20, seg2[2].start_s);
    EXPECT_FLOAT_EQ(30, seg2[2].end_s);
  }
}
    
      const auto mat = kernel.kernel_matrix() / (2.0 * 1.0 / std::pow(0.1, 4));
  const auto offset = kernel.offset_matrix();
    
    
    {
    {}  // namespace prediction
}  // namespace apollo

    
    namespace {
    }
    
    using namespace folly;
    
    #include <iostream>
    
      ~VirtualExecutor() override {
    joinKeepAlive();
  }
    
    /**
 * This functions is an extension point when FOLLY_HAVE_WEAK_SYMBOLS is true.
 * There is a default no-op implementation provided which can be overrided by
 * linking in a library which provides its own definition.
 *
 * @param codecType   The type of the codec for this counter.
 * @param codecName   The name of the codec for this counter. If the codecName
 *                    is empty it should be defaulted using the codecType.
 * @param level       Optionally the level used to construct the codec.
 * @param key         The key of the counter.
 * @param counterType The type of the counter.
 * @returns           A function to increment the counter for the given key and
 *                    type. It may be an empty folly::Function.
 */
folly::Function<void(double)> makeCompressionCounterHandler(
    folly::io::CodecType codecType,
    folly::StringPiece codecName,
    folly::Optional<int> level,
    CompressionCounterKey key,
    CompressionCounterType counterType);
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}