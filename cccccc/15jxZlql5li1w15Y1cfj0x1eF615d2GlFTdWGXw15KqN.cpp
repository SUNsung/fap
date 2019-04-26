
        
        
    {    return;
  }
    
      /// Retrieve the array of protocol conformances, which line up with the
  /// requirements of the generic signature.
  ArrayRef<ProtocolConformanceRef> getConformances() const {
    return llvm::makeArrayRef(getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
  MutableArrayRef<ProtocolConformanceRef> getConformances() {
    return MutableArrayRef<ProtocolConformanceRef>(
                              getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
      if (*BufferPtr == '\n')
    return 1;
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
    
    
    void ModuleWrapJobAction::anchor() {}
    
    #ifndef SWIFT_DRIVER_TOOLCHAINS_H
#define SWIFT_DRIVER_TOOLCHAINS_H
    
      /// Emits an error for each file in \p unusedPrimaryFiles.
  ///
  /// \returns true if \p unusedPrimaryFiles is non-empty.
  bool diagnoseUnusedPrimaryFiles(std::set<StringRef> unusedPrimaryFiles);
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <gtest/gtest.h>
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    template<typename A>
struct type_equals_<A, A> : public true_ {
};
    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    
    {
    {    reflection->MutableUnknownFields(message)->Clear();
  }
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) = 0;
};
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
    SEXP XGBoosterEvalOneIter_R(SEXP handle, SEXP iter, SEXP dmats, SEXP evnames) {
  const char *ret;
  R_API_BEGIN();
  CHECK_EQ(length(dmats), length(evnames))
      << 'dmats and evnams must have same length';
  int len = length(dmats);
  std::vector<void*> vec_dmats;
  std::vector<std::string> vec_names;
  std::vector<const char*> vec_sptr;
  for (int i = 0; i < len; ++i) {
    vec_dmats.push_back(R_ExternalPtrAddr(VECTOR_ELT(dmats, i)));
    vec_names.push_back(std::string(CHAR(asChar(VECTOR_ELT(evnames, i)))));
  }
  for (int i = 0; i < len; ++i) {
    vec_sptr.push_back(vec_names[i].c_str());
  }
  CHECK_CALL(XGBoosterEvalOneIter(R_ExternalPtrAddr(handle),
                                asInteger(iter),
                                BeginPtr(vec_dmats),
                                BeginPtr(vec_sptr),
                                len, &ret));
  R_API_END();
  return mkString(ret);
}
    
      inline static void LimitSizeLevel
    (size_t maxn, double eps, size_t* out_nlevel, size_t* out_limit_size) {
    size_t& nlevel = *out_nlevel;
    size_t& limit_size = *out_limit_size;
    nlevel = 1;
    while (true) {
      limit_size = static_cast<size_t>(ceil(nlevel / eps)) + 1;
      size_t n = (1ULL << nlevel);
      if (n * limit_size >= maxn) break;
      ++nlevel;
    }
    // check invariant
    size_t n = (1ULL << nlevel);
    CHECK(n * limit_size >= maxn) << 'invalid init parameter';
    CHECK(nlevel <= limit_size * eps) << 'invalid init parameter';
  }
    
    XGBOOST_REGISTER_OBJECTIVE(PairwiseRankObj, 'rank:pairwise')
.describe('Pairwise rank objective.')
.set_body([]() { return new PairwiseRankObj(); });
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }
    
    #include 'gtest/gtest.h'
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    /**
 * @file
 **/
#include 'modules/planning/math/smoothing_spline/piecewise_linear_constraint.h'
    
    void Spline1dSeg::SetSplineFunc(const PolynomialXd& spline_func) {
  spline_func_ = spline_func;
  derivative_ = PolynomialXd::DerivedFrom(spline_func_);
  second_order_derivative_ = PolynomialXd::DerivedFrom(derivative_);
  third_order_derivative_ = PolynomialXd::DerivedFrom(second_order_derivative_);
}
    
      Byte t1(bytes + 5);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;