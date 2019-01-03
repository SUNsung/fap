
        
        EnumGenerator::EnumGenerator(const EnumDescriptor* descriptor, const Options* options) :
    SourceGeneratorBase(descriptor->file(), options),
    descriptor_(descriptor) {
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      for (int i = 0; i < dependencies.size(); i++) {
    const string& dependency = dependencies[i].second;
    printer->Print(
        '      $dependency$.getDescriptor(),\n',
        'dependency', dependency);
  }
    
    
    {    output.WriteLittleEndian32(0x02014b50);  // magic
    WriteShort(&output, 10);  // version made by
    WriteShort(&output, 10);  // version needed to extract
    WriteShort(&output, 0);  // flags
    WriteShort(&output, 0);  // compression method: stored
    WriteShort(&output, 0);  // last modified time
    WriteShort(&output, kDosEpoch);  // last modified date
    output.WriteLittleEndian32(crc32);  // crc-32
    output.WriteLittleEndian32(size);  // compressed size
    output.WriteLittleEndian32(size);  // uncompressed size
    WriteShort(&output, filename_size);  // file name length
    WriteShort(&output, 0);   // extra field length
    WriteShort(&output, 0);   // file comment length
    WriteShort(&output, 0);   // starting disk number
    WriteShort(&output, 0);   // internal file attributes
    output.WriteLittleEndian32(0);  // external file attributes
    output.WriteLittleEndian32(offset);  // local header offset
    output.WriteString(filename);  // file name
  }
  uint32 dir_len = output.ByteCount();
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
      int num_words;
  TBOX lword_box;     // in normalized (horiz text rows) space
  TBOX rword_box;     // in normalized (horiz text rows) space
    
    
    {}  // namespace tesseract
    
      // Backwards compatible constrained fit with a supplied gradient.
  // Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
  // to avoid potential difficulties with infinite gradients.
  double ConstrainedFit(double m, float* c);
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
    #  define ASSERT_DEBUG_DEATH(statement, regex) \
  ASSERT_DEATH(statement, regex)
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the namespace name that the type-parameterized tests for
// the given type-parameterized test case are defined in.  The exact
// name of the namespace is subject to change without notice.
# define GTEST_CASE_NAMESPACE_(TestCaseName) \
  gtest_case_##TestCaseName##_
    
    namespace testing {
namespace internal {
    }
    }
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4, class Generator5, class Generator6>
class CartesianProductHolder6 {
 public:
CartesianProductHolder6(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4, const Generator5& g5,
    const Generator6& g6)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {}
  template <typename T1, typename T2, typename T3, typename T4, typename T5,
      typename T6>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >(
        new CartesianProductGenerator6<T1, T2, T3, T4, T5, T6>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_),
        static_cast<ParamGenerator<T5> >(g5_),
        static_cast<ParamGenerator<T6> >(g6_)));
  }
    }
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    // GetTypeName<T>() returns a human-readable name of type T.
// NB: This function is also used in Google Mock, so don't move it inside of
// the typed-test-only section below.
template <typename T>
std::string GetTypeName() {
# if GTEST_HAS_RTTI
    }
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
    #pragma once
    
    #include <algorithm>
#include <chrono>
#include <functional>
#include <map>
#include <string>
#include <vector>
    
    namespace rj = rapidjson;
    
    /**
 * @brief A simple ConfigParserPlugin for an 'events' dictionary key.
 */
class EventsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {'events'};
  }
    }
    
    Status FilePathsConfigParserPlugin::setUp() {
  auto paths_obj = data_.getObject();
  data_.add('file_paths', paths_obj);
  auto paths_query_obj = data_.getObject();
  data_.add('file_paths_query', paths_query_obj);
  auto accesses_arr = data_.getArray();
  data_.add('file_accesses', accesses_arr);
  auto exclude_obj = data_.getObject();
  data_.add('exclude_paths', exclude_obj);
  return Status();
}
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    #include <osquery/config/config.h>