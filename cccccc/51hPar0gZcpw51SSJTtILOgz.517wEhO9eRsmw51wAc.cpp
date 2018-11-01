
        
          // If we don't have any window then quitAndInstall immediately.
  if (WindowList::IsEmpty()) {
    auto_updater::AutoUpdater::QuitAndInstall();
    return;
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
    
    namespace api {
    }
    
    // static
void InAppPurchase::BuildPrototype(v8::Isolate* isolate,
                                   v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'InAppPurchase'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('canMakePayments', &in_app_purchase::CanMakePayments)
      .SetMethod('getReceiptURL', &in_app_purchase::GetReceiptURL)
      .SetMethod('purchaseProduct', &InAppPurchase::PurchaseProduct)
      .SetMethod('finishAllTransactions',
                 &in_app_purchase::FinishAllTransactions)
      .SetMethod('finishTransactionByDate',
                 &in_app_purchase::FinishTransactionByDate)
      .SetMethod('getProducts', &in_app_purchase::GetProducts);
}
    
    void PowerMonitor::UnblockShutdown() {
  PowerObserverLinux::UnblockShutdown();
}
#endif
    
     private:
  void QuerySystemIdleState(v8::Isolate* isolate,
                            int idle_threshold,
                            const ui::IdleCallback& callback);
  void QuerySystemIdleTime(const ui::IdleTimeCallback& callback);
    
      display::Screen* screen = display::Screen::GetScreen();
  if (!screen) {
    isolate->ThrowException(v8::Exception::Error(
        mate::StringToV8(isolate, 'Failed to get screen information')));
    return v8::Null(isolate);
  }
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/generated_message_util.h>
    
    bool DecodeMetadata(const string& path, GeneratedCodeInfo* info) {
  string data;
  GOOGLE_CHECK_OK(File::GetContents(path, &data, true));
  io::ArrayInputStream input(data.data(), data.size());
  return info->ParseFromZeroCopyStream(&input);
}
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
      // TODO(jonskeet): Consider a C#-escaping format here instead of just Base64.
  std::string base64 = FileDescriptorToBase64(file_);
  while (base64.size() > 60) {
    printer->Print('\'$base64$\',\n', 'base64', base64.substr(0, 60));
    base64 = base64.substr(60);
  }
  printer->Print('\'$base64$\'));\n', 'base64', base64);
  printer->Outdent();
  printer->Outdent();
  printer->Outdent();
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    void ImmutableMapFieldGenerator::
GenerateBuilderMembers(io::Printer* printer) const {
  printer->Print(
      variables_,
      'private com.google.protobuf.MapField<\n'
      '    $type_parameters$> $name$_;\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGet$capitalized_name$() {\n'
      '  if ($name$_ == null) {\n'
      '    return com.google.protobuf.MapField.emptyMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGetMutable$capitalized_name$() {\n'
      '  $on_changed$;\n'
      '  if ($name$_ == null) {\n'
      '    $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  if (!$name$_.isMutable()) {\n'
      '    $name$_ = $name$_.copy();\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n');
  GenerateMapGetters(printer);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$clear$capitalized_name$$}$() {\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .clear();\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$remove$capitalized_name$$}$(\n'
      '    $key_type$ key) {\n'
      '  $key_null_check$\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .remove(key);\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetAdapted$capitalized_name$Map(\n'
        '       internalGetMutable$capitalized_name$().getMutableMap());\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(variables_,
                   '$deprecation$public Builder ${$put$capitalized_name$$}$(\n'
                   '    $key_type$ key,\n'
                   '    $value_enum_type$ value) {\n'
                   '  $key_null_check$\n'
                   '  $value_null_check$\n'
                   '  internalGetMutable$capitalized_name$().getMutableMap()\n'
                   '      .put(key, $name$ValueConverter.doBackward(value));\n'
                   '  return this;\n'
                   '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$boxed_key_type$, $value_enum_type$> values) {\n'
        '  internalGetAdapted$capitalized_name$Map(\n'
        '      internalGetMutable$capitalized_name$().getMutableMap())\n'
        '          .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    if (SupportUnknownEnumValue(descriptor_->file())) {
      printer->Print(
          variables_,
          '/**\n'
          ' * Use alternate mutation accessors instead.\n'
          ' */\n'
          '@java.lang.Deprecated\n'
          'public java.util.Map<$boxed_key_type$, $boxed_value_type$>\n'
          '${$getMutable$capitalized_name$Value$}$() {\n'
          '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$put$capitalized_name$Value$}$(\n'
          '    $key_type$ key,\n'
          '    $value_type$ value) {\n'
          '  $key_null_check$\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .put(key, value);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$putAll$capitalized_name$Value$}$(\n'
          '    java.util.Map<$boxed_key_type$, $boxed_value_type$> values) {\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .putAll(values);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
    }
  } else {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$type_parameters$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$'
        'public Builder ${$put$capitalized_name$$}$(\n'
        '    $key_type$ key,\n'
        '    $value_type$ value) {\n'
        '  $key_null_check$\n'
        '  $value_null_check$\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .put(key, value);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$type_parameters$> values) {\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
  }
}
    
    EnumGenerator::EnumGenerator(const EnumDescriptor* descriptor)
    : descriptor_(descriptor),
      name_(EnumName(descriptor_)) {
  for (int i = 0; i < descriptor_->value_count(); i++) {
    const EnumValueDescriptor* value = descriptor_->value(i);
    const EnumValueDescriptor* canonical_value =
        descriptor_->FindValueByNumber(value->number());
    }
    }
    
    
    {
    {
    {
    {}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_FIELD_H__

    
    
    {  printer->Print(vars,
                 '{\n'
                 '  .defaultValue.$default_name$ = $default$,\n'
                 '  .singletonName = GPBStringifySymbol($root_class_and_method_name$),\n'
                 '  .extendedClass = GPBStringifySymbol($extended_type$),\n'
                 '  .messageOrGroupClassName = $type$,\n'
                 '  .enumDescriptorFunc = $enum_desc_func_name$,\n'
                 '  .fieldNumber = $number$,\n'
                 '  .dataType = $extension_type$,\n'
                 '  .options = $options$,\n'
                 '},\n');
}
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    class GetMergeMultiScalarFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    </details>
    
    <summary> <b>Example</b> </summary>
    
    Each feature has fixed lengths which are passed as lengths argument and a
separate tensor will be produced for each feature.
i.e. DATA.dim(1) = len(lengths) = NumOuptuts.
    
    OPERATOR_SCHEMA(GivenTensorIntFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(FillerTensorInference<TensorProto_DataType_INT32>);
    
    void ChannelArguments::SetCompressionAlgorithm(
    grpc_compression_algorithm algorithm) {
  SetInt(GRPC_COMPRESSION_CHANNEL_DEFAULT_ALGORITHM, algorithm);
}
    
    #include <grpc/support/port_platform.h>
    
    ThreadPoolInterface* CreateDefaultThreadPool() { return g_ctp_impl(); }
    
    DynamicThreadPool::DynamicThread::DynamicThread(DynamicThreadPool* pool)
    : pool_(pool),
      thd_('grpcpp_dynamic_pool',
           [](void* th) {
             static_cast<DynamicThreadPool::DynamicThread*>(th)->ThreadFunc();
           },
           this) {
  thd_.Start();
}
DynamicThreadPool::DynamicThread::~DynamicThread() { thd_.Join(); }
    
    
   void EmitXLForm(const uint8_t op,
                   const uint8_t bt,
                   const uint8_t ba,
                   const uint8_t bb,
                   const uint16_t xop,
                   const bool lk = 0) {
    }
    
    #include 'hphp/runtime/base/ini-setting.h'
#include 'hphp/runtime/base/array-iterator.h'
#include 'hphp/util/logger.h'
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    struct RequestMemoryExceededException : ResourceExceededException {
  RequestMemoryExceededException(const std::string& msg,
                                 const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestMemoryExceededException);
};
    
    void FileUtil::find(std::vector<std::string> &out,
                    const std::string &root, const std::string& path, bool php,
                    const std::set<std::string> *excludeDirs /* = NULL */,
                    const std::set<std::string> *excludeFiles /* = NULL */) {
    }
    
      /* Initialize return array */
  Array ret;
    
      RateLimiter* low_pri_rate_limiter() { return low_pri_rate_limiter_.get(); }
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      // In this example, we set the snapshot multiple times.  This is probably
  // only necessary if you have very strict isolation requirements to
  // implement.
    
      virtual Status NewRandomAccessFile(const std::string& /*fname*/,
                                     unique_ptr<RandomAccessFile>* /*result*/,
                                     const EnvOptions& /*options*/) override {
    return notsup;
  }
    
    int main(int argc, char** argv) {
  folly::init(&argc, &argv);
  CHECK_GT(argc, 2);
  folly::compareBenchmarkResults(argv[1], argv[2]);
  return 0;
}

    
    template <class... Args>
[[noreturn]] void throwSystemErrorExplicit(int err, Args&&... args) {
  throw makeSystemErrorExplicit(err, std::forward<Args>(args)...);
}
    
    exception_wrapper::exception_wrapper(std::exception_ptr ptr) noexcept
    : exception_wrapper{} {
  if (ptr) {
    if (auto e = get_std_exception_(ptr)) {
      LOG(DFATAL)
          << 'Performance error: Please construct exception_wrapper with a '
             'reference to the std::exception along with the '
             'std::exception_ptr.';
      *this = exception_wrapper{std::move(ptr), *e};
    } else {
      Unknown uk;
      *this = exception_wrapper{ptr, uk};
    }
  }
}
    
      virtual uint8_t getNumPriorities() const {
    return 1;
  }
    
    /*
 * Return a good seed for a random number generator.
 * Note that this is a legacy function, as it returns a 32-bit value, which
 * is too small to be useful as a 'real' RNG seed. Use the functions in class
 * Random instead.
 */
inline uint32_t randomNumberSeed() {
  return Random::rand32();
}
    
    namespace detail {
    }
    
    /**
 * Interface for Zlib-specific codec initialization.
 */
namespace folly {
namespace io {
namespace zlib {
    }
    }
    }
    
      // the cpus are now sorted by locality, with neighboring entries closer
  // to each other than entries that are far away.  For striping we want
  // the inverse map, since we are starting with the cpu
  std::vector<size_t> indexes(cpus.size());
  for (size_t i = 0; i < cpus.size(); ++i) {
    indexes[cpus[i]] = i;
  }
    
    template <class T, size_t kNumSlots = 64>
class CoreCachedWeakPtr {
 public:
  explicit CoreCachedWeakPtr(const CoreCachedSharedPtr<T, kNumSlots>& p) {
    for (auto slot : folly::enumerate(slots_)) {
      *slot = p.slots_[slot.index];
    }
  }
    }
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
      // Compares the 8x8 block with offsets (off_x, off_y) within the current
  // macro-block of the baseline image with the same block of img and returns
  // the resulting per-block distance. The interpretation of the returned
  // distance depends on the comparator used.
  virtual double CompareBlock(const OutputImage& img,
                              int off_x, int off_y) const = 0;
    
    #include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <memory>
#include <string>
#include <sstream>
#include <string.h>
#include 'png.h'
#include 'guetzli/jpeg_data.h'
#include 'guetzli/jpeg_data_reader.h'
#include 'guetzli/processor.h'
#include 'guetzli/quality.h'
#include 'guetzli/stats.h'
    
    #ifndef GUETZLI_JPEG_BIT_WRITER_H_
#define GUETZLI_JPEG_BIT_WRITER_H_
    
    #include <assert.h>
#include <string.h>
    
    
    {}  // namespace guetzli

    
    
    {}  // namespace guetzli
