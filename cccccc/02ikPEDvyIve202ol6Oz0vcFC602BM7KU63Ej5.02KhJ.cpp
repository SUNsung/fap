
        
            // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    namespace leveldb {
    }
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
      // The name of the comparator.  Used to check for comparator
  // mismatches (i.e., a DB created with one comparator is
  // accessed using a different comparator.
  //
  // The client of this package should switch to a new name whenever
  // the comparator implementation changes in a way that will cause
  // the relative ordering of any two keys to change.
  //
  // Names starting with 'leveldb.' are reserved and should not be used
  // by any clients of this package.
  virtual const char* Name() const = 0;
    
    
    {  /** Called by ctor, but you can use this to reset settings_.
   * \pre 'settings' != NULL (but Json::null is fine)
   * \remark Defaults:
   * \snippet src/lib_json/json_writer.cpp StreamWriterBuilderDefaults
   */
  static void setDefaults(Json::Value* settings);
};
    
    namespace enum_descriptor {
PyObject* NewEnumValuesByName(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesByNumber(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesSeq(const EnumDescriptor* descriptor);
}  // namespace enum_descriptor
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {    // Explicit template instantiations
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<float>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<double>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<float16>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(const NDShape& sampleShape, const std::vector<float>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(const NDShape& sampleShape, const std::vector<double>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16>(const NDShape& sampleShape, const std::vector<float16>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, const std::vector<float>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, const std::vector<double>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16> (const NDShape& sampleShape, const std::vector<float16>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16> (size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const double* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float16* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<float>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<double>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<float16>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<double>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float16>(const Variable& outputVariable);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<double>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<double>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float16>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float16>& nonZeroValues, size_t& numNonZeroValues);
    template float Value::AsScalar<float>() const;
    template double Value::AsScalar<double>() const;
    template float16 Value::AsScalar<float16>() const;
}

    
    BOOST_FIXTURE_TEST_CASE(CPUMatrixDenseTimesSparseAsSparse, RandomSeedFixture)
{
#if 0
// TODO commented temporarily since 'IsEqualTo' is not yet implemented
                    Matrix<float> mAdense(CPUDEVICE);
                    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
        // construction
    TextLocation()
        : lineNo(SIZE_MAX), charPos(SIZE_MAX), sourceFileAsIndex(SIZE_MAX)
    {
    } // default constructor constructs an unmissably invalid object
    bool IsValid() const;
    
        // start at 1, because 0 is the name of the EXE
    for (int i = 1; i < argc; ++i)
    {
        wstring str = argv[i];
    }
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    namespace boost {
namespace asio {
    }
    }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    #ifndef BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
    
      // The type of a non-const iterator over the hash map.
  typedef typename std::list<value_type>::iterator iterator;
    
    
    {
    {    return true;
  }
}
    
    #include <boost/asio/detail/push_options.hpp>
    
    template <typename Time_Traits>
void epoll_reactor::remove_timer_queue(timer_queue<Time_Traits>& queue)
{
  do_remove_timer_queue(queue);
}
    
    // Reads the DRI marker and saved the restart interval into *jpg.
bool ProcessDRI(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  if (jpg->restart_interval > 0) {
    fprintf(stderr, 'Duplicate DRI marker.\n');
    jpg->error = JPEG_DUPLICATE_DRI;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(4);
  size_t marker_len = ReadUint16(data, pos);
  int restart_interval = ReadUint16(data, pos);
  jpg->restart_interval = restart_interval;
  VERIFY_MARKER_END();
  return true;
}
    
    void OutputImage::Downsample(const DownsampleConfig& cfg) {
  if (components_[1].IsAllZero() && components_[2].IsAllZero()) {
    // If the image is already grayscale, nothing to do.
    return;
  }
  if (cfg.use_silver_screen &&
      cfg.u_factor_x == 2 && cfg.u_factor_y == 2 &&
      cfg.v_factor_x == 2 && cfg.v_factor_y == 2) {
    std::vector<uint8_t> rgb = ToSRGB();
    std::vector<std::vector<float> > yuv = RGBToYUV420(rgb, width_, height_);
    SetDownsampledCoefficients(yuv[0], 1, 1, &components_[0]);
    SetDownsampledCoefficients(yuv[1], 2, 2, &components_[1]);
    SetDownsampledCoefficients(yuv[2], 2, 2, &components_[2]);
    return;
  }
  // Get the floating-point precision YUV array represented by the set of
  // DCT coefficients.
  std::vector<std::vector<float> > yuv(3, std::vector<float>(width_ * height_));
  for (int c = 0; c < 3; ++c) {
    components_[c].ToFloatPixels(&yuv[c][0], 1);
  }
    }
    
    typedef void (*Transform1d)(const double* in, int stride, double* out);
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    
    {}  // namespace guetzli
    
    
    {  bool has_key_for_array(Local<Object> obj, std::string key) {
    return obj->Has(String::NewSymbol(key.c_str())) &&
        obj->Get(String::NewSymbol(key.c_str()))->IsArray();
  }
}
    
    
    {  MockEnvTest()
      : env_(new MockEnv(Env::Default())) {
  }
  ~MockEnvTest() {
    delete env_;
  }
};
    
    
    { protected:
  static OpenFuncPtr OpenDb;
};
StringAppendOperatorTest::OpenFuncPtr StringAppendOperatorTest::OpenDb = nullptr;
    
    namespace rocksdb {
    }