
        
        
    {
    {
    {}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, enum_);
  printer->Print(
    ' * Protobuf enum {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(enum_->full_name()));
}
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
    class GeneratorResponseContext : public GeneratorContext {
 public:
  GeneratorResponseContext(
      const Version& compiler_version,
      CodeGeneratorResponse* response,
      const std::vector<const FileDescriptor*>& parsed_files)
      : compiler_version_(compiler_version),
        response_(response),
        parsed_files_(parsed_files) {}
  virtual ~GeneratorResponseContext() {}
    }
    
    
    {  if (!GetParam()) {
    delete message;
  }
}
    
    
    {  zcontext_.zalloc = Z_NULL;
  zcontext_.zfree = Z_NULL;
  zcontext_.opaque = Z_NULL;
  zcontext_.next_out = NULL;
  zcontext_.avail_out = 0;
  zcontext_.total_out = 0;
  zcontext_.next_in = NULL;
  zcontext_.avail_in = 0;
  zcontext_.total_in = 0;
  zcontext_.msg = NULL;
  // default to GZIP format
  int windowBitsFormat = 16;
  if (options.format == ZLIB) {
    windowBitsFormat = 0;
  }
  zerror_ = deflateInit2(
      &zcontext_,
      options.compression_level,
      Z_DEFLATED,
      /* windowBits */15 | windowBitsFormat,
      /* memLevel (default) */8,
      options.compression_strategy);
}
    
    /**
 * @brief Fills a Blob with values @f$ x \sim N(0, \sigma^2) @f$ where
 *        @f$ \sigma^2 @f$ is set inversely proportional to number of incoming
 *        nodes, outgoing nodes, or their average.
 *
 * A Filler based on the paper [He, Zhang, Ren and Sun 2015]: Specifically
 * accounts for ReLU nonlinearities.
 *
 * Aside: for another perspective on the scaling factor, see the derivation of
 * [Saxe, McClelland, and Ganguli 2013 (v3)].
 *
 * It fills the incoming matrix by randomly sampling Gaussian data with std =
 * sqrt(2 / n) where n is the fan_in, fan_out, or their average, depending on
 * the variance_norm option. You should make sure the input blob has shape (num,
 * a, b, c) where a * b * c = fan_in and num * b * c = fan_out. Note that this
 * is currently not the case for inner product layers.
 */
template <typename Dtype>
class MSRAFiller : public Filler<Dtype> {
 public:
  explicit MSRAFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype std = sqrt(Dtype(2) / n);
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(0), std,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
      int Property(const std::string& name) {
    std::string property;
    int result;
    if (db_->GetProperty(name, &property) &&
        sscanf(property.c_str(), '%d', &result) == 1) {
      return result;
    } else {
      return -1;
    }
  }
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
    
    {
    {}  // namespace log
}  // namespace leveldb

    
      // Reports dropped bytes to the reporter.
  // buffer_ must be updated to remove the dropped bytes prior to invocation.
  void ReportCorruption(uint64_t bytes, const char* reason);
  void ReportDrop(uint64_t bytes, const Status& reason);
    
    
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
    
    namespace leveldb {
    }
    
      virtual bool Valid() const { return iter_.Valid(); }
  virtual void Seek(const Slice& k) { iter_.Seek(EncodeKey(&tmp_, k)); }
  virtual void SeekToFirst() { iter_.SeekToFirst(); }
  virtual void SeekToLast() { iter_.SeekToLast(); }
  virtual void Next() { iter_.Next(); }
  virtual void Prev() { iter_.Prev(); }
  virtual Slice key() const { return GetLengthPrefixedSlice(iter_.key()); }
  virtual Slice value() const {
    Slice key_slice = GetLengthPrefixedSlice(iter_.key());
    return GetLengthPrefixedSlice(key_slice.data() + key_slice.size());
  }
    
        // TODO: This could actually be strided?
    const MaskKind* NDMask::DataBuffer() const
    {
        // First make sure that the underlying matrix is on the right device
        auto matrix = GetMatrix();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(m_device), true);
        return (const MaskKind*)(matrix->Data());
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
        public:
        template <typename ElementType>
        PackedValue(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::Matrix<ElementType>>& packedDataMatrix, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout, bool isReadOnly)
            : Value(nullptr), m_isPacked(true), m_sampleShape(sampleShape), m_sampleDynamicAxes(sampleDynamicAxes), m_packedData(nullptr), m_packedDataLayout(packedDataLayout), m_isReadOnly(isReadOnly)
        {
            NDShape packedMatrixShape({ packedDataMatrix->GetNumRows(), packedDataMatrix->GetNumCols() });
            auto tensorView = new Microsoft::MSR::CNTK::TensorView<ElementType>(packedDataMatrix, AsTensorViewShape(packedMatrixShape));
            m_packedData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), AsDeviceDescriptor(packedDataMatrix->GetDeviceId()), AsStorageFormat(packedDataMatrix->GetFormat()), packedMatrixShape, m_isReadOnly, tensorView);
    }
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    #define BENCHMARK_TEMPLATE2_DEFINE_F(BaseClass, Method, a, b)    \
  BENCHMARK_TEMPLATE2_PRIVATE_DECLARE_F(BaseClass, Method, a, b) \
  void BaseClass##_##Method##_Benchmark::BenchmarkCase
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    DEFINE_bool(benchmark_report_aggregates_only, false,
            'Report the result of each benchmark repetitions. When 'true' is '
            'specified only the mean, standard deviation, and other statistics '
            'are reported for repeated benchmarks.');
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt,
                 va_list args);
void ColorPrintf(std::ostream& out, LogColor color, const char* fmt, ...);
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';
    
      // Open context block and print context information.
  out << inner_indent << '\'context\': {\n';
  std::string indent(4, ' ');
    }
    
    #else
inline bool Regex::Init(const std::string& spec, std::string* error) {
  int ec = regcomp(&re_, spec.c_str(), REG_EXTENDED | REG_NOSUB);
  if (ec != 0) {
    if (error) {
      size_t needed = regerror(ec, &re_, nullptr, 0);
      char* errbuf = new char[needed];
      regerror(ec, &re_, errbuf, needed);
    }
    }
    }
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    #include 'internal_macros.h'