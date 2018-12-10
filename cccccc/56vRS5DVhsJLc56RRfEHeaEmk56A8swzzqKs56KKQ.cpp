
        
        template <class R, class P1, class P2>
struct ReturnOf<R (*)(P1, P2)> {
  typedef R Return;
};
    
    namespace google {
namespace protobuf {
namespace compiler {
    }
    }
    }
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    SharedCodeGenerator::SharedCodeGenerator(const FileDescriptor* file,
                                         const Options& options)
    : name_resolver_(new ClassNameResolver), file_(file), options_(options) {}
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    
    {}  // namespace tesseract.
    
    /**
 * Returns the baseline of the current object at the given level.
 * The baseline is the line that passes through (x1, y1) and (x2, y2).
 * WARNING: with vertical text, baselines may be vertical!
 */
bool PageIterator::Baseline(PageIteratorLevel level,
                            int* x1, int* y1, int* x2, int* y2) const {
  if (it_->word() == nullptr) return false;  // Already at the end!
  ROW* row = it_->row()->row;
  WERD* word = it_->word()->word;
  TBOX box = (level == RIL_WORD || level == RIL_SYMBOL)
           ? word->bounding_box()
           : row->bounding_box();
  int left = box.left();
  ICOORD startpt(left, static_cast<int16_t>(row->base_line(left) + 0.5));
  int right = box.right();
  ICOORD endpt(right, static_cast<int16_t>(row->base_line(right) + 0.5));
  // Rotate to image coordinates and convert to global image coords.
  startpt.rotate(it_->block()->block->re_rotation());
  endpt.rotate(it_->block()->block->re_rotation());
  *x1 = startpt.x() / scale_ + rect_left_;
  *y1 = (rect_height_ - startpt.y()) / scale_ + rect_top_;
  *x2 = endpt.x() / scale_ + rect_left_;
  *y2 = (rect_height_ - endpt.y()) / scale_ + rect_top_;
  return true;
}
    
      // If the current WERD_RES (it_->word()) is not nullptr, sets the BlamerBundle
  // of the current word to the given pointer (takes ownership of the pointer)
  // and returns true.
  // Can only be used when iterating on the word level.
  bool SetWordBlamerBundle(BlamerBundle *blamer_bundle);
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    #include 'blread.h'
#include <cstdio>       // for fclose, fopen, FILE
#include 'host.h'       // for TRUE
#include 'ocrblock.h'   // for BLOCK_IT, BLOCK, BLOCK_LIST (ptr only)
#include 'scanutils.h'  // for tfscanf
    
    #include 'blobs.h'
#include 'boxword.h'
#include 'normalis.h'
#include 'ocrblock.h'
#include 'pageres.h'
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    
    {
    {}}
    
    //////////////////////////////////////////////////////////////////////
    
      /**
   * Prefer the Bind() over the GetFoo() as it makes ini_get() work too.
   * These Bind()s should be used for ini settings. Specifically, they
   * should be used when the bound setting is needed before the main ini
   * processing pass. Unlike IniSetting::Bind, these bindings will fetch the
   * value in an ini setting if it is set otherwise it will use the defValue.
   */
  static void Bind(bool& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const bool defValue = false,
                   const bool prepend_hhvm = true);
  static void Bind(const char*& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char *defValue = nullptr,
                   const bool prepend_hhvm = true);
  static void Bind(std::string& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const std::string defValue = '',
                   const bool prepend_hhvm = true);
  static void Bind(char& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char defValue = 0, const bool prepend_hhvm = true);
  static void Bind(unsigned char& loc,const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const unsigned char defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(double& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const double defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(HackStrictOption& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name,
                   HackStrictOption def);
  static void
  Bind(std::vector<uint32_t>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<uint32_t>& defValue = std::vector<uint32_t>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::vector<std::string>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<std::string>& defValue = std::vector<std::string>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::unordered_map<std::string, int>& loc,
       const IniSettingMap& ini, const Hdf& config,
       const std::string& name = '',
       const std::unordered_map<std::string, int>& defValue =
         std::unordered_map<std::string, int>{},
       const bool prepend_hhvm = true);
  static void Bind(ConfigMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMap& defValue = ConfigMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigMapC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMapC& defValue = ConfigMapC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSet& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSet& defValue = ConfigSet(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSetC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSetC& defValue = ConfigSetC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigIMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigIMap& defValue = ConfigIMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigFlatSet& loc, const IniSettingMap& ini,
                   const Hdf& config, const std::string& name = '',
                   const ConfigFlatSet& defValue = ConfigFlatSet(),
                   const bool prepend_hhvm = true);
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
    /**
 * For php://output, a simple wrapper of g_context->out().
 */
struct OutputFile : File {
  DECLARE_RESOURCE_ALLOCATION(OutputFile);
    }
    
        template <typename ElementType>
    void Value::CopyVariableValueToCSCSparse(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<ElementType>& nonZeroValues, size_t& numNonZeroValues)
    {
        // All sanity check has been done in ValidateSparseCSCAndGetIndexSizes().
        NDArrayViewPtr cpuView;
        if (Device().Type() == DeviceKind::GPU)
        {
            // Todo: GPUSparseMatrix to CPUSparseMatrix is not implemented in matrix, as a workaround the dense matrix is used as intermediate presentation.
            // However, it is possible that data value very close to 0 could treated as 0 after transformation between dense and sparse.
            auto cpuDenseView = MakeSharedObject<NDArrayView>(GetDataType(), StorageFormat::Dense, Shape(), DeviceDescriptor::CPUDevice());
            cpuDenseView->CopyFrom(*Data());
            cpuView = MakeSharedObject<NDArrayView>(GetDataType(), GetStorageFormat(), Shape(), DeviceDescriptor::CPUDevice());
            cpuView->CopyFrom(*cpuDenseView);
        }
        else
            cpuView = Data();
    }
    
    // GetData - Gets metadata from the specified section (into CPU memory)
// sectionName - section name to retrieve data from
// numRecords - number of records to read
// data - pointer to data buffer, if NULL, dataBufferSize will be set to size of required buffer to accomidate request
// dataBufferSize - [in] size of the databuffer in bytes
//                  [out] size of buffer filled with data
// recordStart - record to start reading from, defaults to zero (start of data)
// returns: true if data remains to be read, false if the end of data was reached
bool DataReader::GetData(const std::wstring& sectionName, size_t numRecords, void* data, size_t& dataBufferSize, size_t recordStart)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetData(sectionName, numRecords, data, dataBufferSize, recordStart);
    return bRet;
}
    
        EyeLikeNode(DEVICEID_TYPE deviceId, const wstring& name, bool isOutputSparse)
        : Base(deviceId, name), m_isOutputSparse(isOutputSparse)
    {
    }
    
    /// Root key to retrieve Kafka topic configurations.
extern const std::string kKafkaTopicParserRootKey;
    
      std::string log_line;
  serializeQueryLogItemJSON(item, log_line);
  std::string expected =
      '{\'snapshot\':[],\'action\':\'snapshot\',\'name\':\'\','
      '\'hostIdentifier\':\'\',\'calendarTime\':\'\',\'unixTime\':0,'
      '\'epoch\':0,\'counter\':0,'
      '\'decorations\':{\'internal_60_test\':\'test\',\'one\':\'1\'}}';
  EXPECT_EQ(log_line, expected);
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json': 
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
    /**
 * @brief A simple ConfigParserPlugin for a 'views' dictionary key.
 */
class ViewsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {'views'};
  }
    }
    
      Pack kpack('unrestricted_pack', getUnrestrictedPack().doc());
  EXPECT_EQ(kpack.getDiscoveryQueries(), expected);
    
      struct ConstraintList cl2;
  cl2.affinity = INTEGER_TYPE;
  constraint = Constraint(LESS_THAN);
  constraint.expr = '1000';
  cl2.add(constraint);
  constraint = Constraint(GREATER_THAN);
  constraint.expr = '1';
  cl2.add(constraint);
    
    #include <osquery/system.h>
    
      /// Check if the application-global `inotify` handle is alive.
  bool isHandleOpen() const {
    return inotify_handle_ > 0;
  }
    
      // Create a subscription context
  auto mc = std::make_shared<INotifySubscriptionContext>();
  mc->path = real_test_path;
  mc->mask = IN_ALL_EVENTS;
  status = EventFactory::addSubscription(
      'inotify', Subscription::create('TestINotifyEventSubscriber', mc));
  EXPECT_TRUE(status.ok());
  event_pub_->configure();
    
        // Use the basic 'force' flag to check implicit SQL usage.
    auto flags =
        SQL('select default_value from osquery_flags where name = 'force'');
    if (flags.rows().size() > 0) {
      r['flag_test'] = flags.rows().back().at('default_value');
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    CallFunc::~CallFunc()
{
    CC_SAFE_RELEASE(_selectorTarget);
}
    
    
    {CC_CONSTRUCTOR_ACCESS:
    FadeOut():_reverseAction(nullptr) {}
    virtual ~FadeOut() {}
private:
    CC_DISALLOW_COPY_AND_ASSIGN(FadeOut);
    FadeTo* _reverseAction;
};
    
    
NS_CC_END

    
        for (auto& spriteFrame : frames)
    {
        auto animFrame = AnimationFrame::create(spriteFrame, 1, ValueMap());
        _frames.pushBack(animFrame);
        _totalDelayUnits++;
    }
    
    void BENCHFUN(fillCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size_t(size), randomObject<VECTOR::value_type>());
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(fillCtor), 16)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 128)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 1024)
    
      /**
   * Returns a random uint64_t in [min, max). If min == max, returns 0.
   */
  static uint64_t rand64(uint64_t min, uint64_t max) {
    return rand64(min, max, ThreadLocalPRNG());
  }
    
    // Some utility routines relating to unicode.
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    TEST_F(SparseByteSetTest, empty) {
  for (auto c = lims::min(); c < lims::max(); ++c) {
    EXPECT_FALSE(s.contains(c));
  }
}