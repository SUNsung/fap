
        
          auto* message2_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
    
      string str_with_null_char('ab\0c', 4);
  EXPECT_EXIT(
      decode_data.AddString(1, str_with_null_char, 'def'),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
  EXPECT_EXIT(
      decode_data.AddString(1, 'def', str_with_null_char),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
    
    TEST(StatusOr, TestAssignmentStatusOk) {
  const int kI = 4;
  StatusOr<int> source(kI);
  StatusOr<int> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    
// Abbreviations: true_type and false_type are structs that represent boolean
// true and false values. Also define the boost::mpl versions of those names,
// true_ and false_.
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;
typedef true_type  true_;
typedef false_type false_;
    
    int main(int argc, const char** argv) {
  FileInputStream fin(STDIN_FILENO);
  GzipInputStream in(&fin);
    }
    
    #include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
    int main(int argc, char *argv[]) {
  if (argc % 2 == 0 || argc == 1) {
    std::cerr << 'Usage: [input_files] [output_file_names] where ' <<
        'input_files are one to one mapping to output_file_names.' <<
        std::endl;
    return 1;
  }
    }
    
    class Proto2ToProto3Generator final : public CodeGenerator {
 public:
  bool GenerateAll(const std::vector<const FileDescriptor*>& files,
                           const string& parameter,
                           GeneratorContext* context,
                           string* error) const {
    for (int i = 0; i < files.size(); i++) {
      for (auto file : files) {
        if (CanGenerate(file)) {
          Generate(file, parameter, context, error);
          break;
        }
      }
    }
    }
    }
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
    
    
#ifdef __cplusplus
class GLUnurbs;
class GLUquadric;
class GLUtesselator;
#else
typedef struct GLUnurbs GLUnurbs;
typedef struct GLUquadric GLUquadric;
typedef struct GLUtesselator GLUtesselator;
#endif
    
      // crop box
  if (readBox(dict, 'CropBox', &cropBox)) {
    haveCropBox = gTrue;
  }
  if (!haveCropBox) {
    cropBox = mediaBox;
  }
    
    
    {  return gFalse;
}
    
      // Was the Page Transition created successfully?
  GBool isOk() { return ok; }
    
      // Does this device use upside-down coordinates?
  // (Upside-down means (0,0) is the top left corner of the page.)
  virtual GBool upsideDown() { return gTrue; }
    
    #endif

    
      embeddedStream->reset();
    
    int StdinCacheLoader::load(const std::vector<ByteRange> &ranges, CachedFileWriter *writer)
{
  return 0;
}
    
    void CCalcEngine::InitChopNumbers()
{
    // these rat numbers are set only once and then never change regardless of
    // base or precision changes
    assert(m_chopNumbers.size() >= 4);
    m_chopNumbers[0] = Rational{ rat_qword };
    m_chopNumbers[1] = Rational{ rat_dword };
    m_chopNumbers[2] = Rational{ rat_word };
    m_chopNumbers[3] = Rational{ rat_byte };
    }
    
    // try to load weight information from file, if exists
inline bool MetaTryLoadFloatInfo(const std::string& fname,
                                 std::vector<bst_float>* data) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  data->clear();
  bst_float value;
  while (is >> value) {
    data->push_back(value);
  }
  return true;
}
    
      offset = {0, 1, 4};
  for (size_t i = 0; i < offset.back(); ++i) {
    data.emplace_back(Entry(i, 0.1f));
  }
    
    #if defined(_OPENMP)
  const auto nthread = static_cast<bst_omp_uint>(this->nthread_);  // NOLINT
#endif  // defined(_OPENMP)
  tree::GradStats* p_self = self.data();
  tree::GradStats* p_sibling = sibling.data();
  tree::GradStats* p_parent = parent.data();
    
    TEST(SparseColumn, Test) {
  auto dmat = CreateDMatrix(100, 1, 0.85);
  GHistIndexMatrix gmat;
  gmat.Init((*dmat).get(), 256);
  ColumnMatrix column_matrix;
  column_matrix.Init(gmat, 0.5);
  auto col = column_matrix.GetColumn(0);
  ASSERT_EQ(col.Size(), gmat.index.size());
  for (auto i = 0ull; i < col.Size(); i++) {
    EXPECT_EQ(gmat.index[gmat.row_ptr[col.GetRowIdx(i)]],
              col.GetGlobalBinIdx(i));
  }
  delete dmat;
}
    
            valueData = cpuArrayView->DataBuffer<ValueType>();
    
    #pragma once
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    
    {};
    
    //---------------------------------------------------------------------
//
//   pattern
//
//---------------------------------------------------------------------
UnicodeString RegexPattern::pattern() const {
    if (fPatternString != NULL) {
        return *fPatternString;
    } else if (fPattern == NULL) {
        return UnicodeString();
    } else {
        UErrorCode status = U_ZERO_ERROR;
        int64_t nativeLen = utext_nativeLength(fPattern);
        int32_t len16 = utext_extract(fPattern, 0, nativeLen, NULL, 0, &status); // buffer overflow error
        UnicodeString result;
    }
    }
    
    U_NAMESPACE_END
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_NAMESPACE_BEGIN
    
    #endif // incl_HPHP_DEBUGGABLE_H_

    
      // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    int main() {
  DB* db;
  Options options;
  // Optimize RocksDB. This is the easiest way to get RocksDB to perform well
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  // create the DB if it's not already present
  options.create_if_missing = true;
    }
    
      const Snapshot* snapshot = txn->GetSnapshot();
    
    class Cache;
class Comparator;
class Env;
class FilterPolicy;
class Logger;
struct Options;
class Snapshot;