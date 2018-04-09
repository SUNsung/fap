
        
        // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    // A helper class for implementing EXPECT_FATAL_FAILURE() and
// EXPECT_NONFATAL_FAILURE().  Its destructor verifies that the given
// TestPartResultArray contains exactly one failure that has the given
// type and contains the given substring.  If that's not the case, a
// non-fatal failure will be generated.
class GTEST_API_ SingleFailureChecker {
 public:
  // The constructor remembers the arguments.
  SingleFailureChecker(const TestPartResultArray* results,
                       TestPartResult::Type type,
                       const string& substr);
  ~SingleFailureChecker();
 private:
  const TestPartResultArray* const results_;
  const TestPartResult::Type type_;
  const string substr_;
    }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TYPED_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_TYPED_TEST_H_
    
    #define GTEST_MESSAGE_AT_(file, line, message, result_type) \
  ::testing::internal::AssertHelper(result_type, file, line, message) \
    = ::testing::Message()
    
      bool operator==(T* p) const { return value_ == p; }
  bool operator!=(T* p) const { return value_ != p; }
  template <typename U>
  bool operator==(linked_ptr<U> const& ptr) const {
    return value_ == ptr.get();
  }
  template <typename U>
  bool operator!=(linked_ptr<U> const& ptr) const {
    return value_ != ptr.get();
  }
    
    
    {    const ParamGeneratorInterface<ParamType>* const base_;
    // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
    // current[i]_ is the actual traversing iterator.
    const typename ParamGenerator<T1>::iterator begin1_;
    const typename ParamGenerator<T1>::iterator end1_;
    typename ParamGenerator<T1>::iterator current1_;
    const typename ParamGenerator<T2>::iterator begin2_;
    const typename ParamGenerator<T2>::iterator end2_;
    typename ParamGenerator<T2>::iterator current2_;
    const typename ParamGenerator<T3>::iterator begin3_;
    const typename ParamGenerator<T3>::iterator end3_;
    typename ParamGenerator<T3>::iterator current3_;
    const typename ParamGenerator<T4>::iterator begin4_;
    const typename ParamGenerator<T4>::iterator end4_;
    typename ParamGenerator<T4>::iterator current4_;
    const typename ParamGenerator<T5>::iterator begin5_;
    const typename ParamGenerator<T5>::iterator end5_;
    typename ParamGenerator<T5>::iterator current5_;
    const typename ParamGenerator<T6>::iterator begin6_;
    const typename ParamGenerator<T6>::iterator end6_;
    typename ParamGenerator<T6>::iterator current6_;
    const typename ParamGenerator<T7>::iterator begin7_;
    const typename ParamGenerator<T7>::iterator end7_;
    typename ParamGenerator<T7>::iterator current7_;
    const typename ParamGenerator<T8>::iterator begin8_;
    const typename ParamGenerator<T8>::iterator end8_;
    typename ParamGenerator<T8>::iterator current8_;
    const typename ParamGenerator<T9>::iterator begin9_;
    const typename ParamGenerator<T9>::iterator end9_;
    typename ParamGenerator<T9>::iterator current9_;
    ParamType current_value_;
  };  // class CartesianProductGenerator9::Iterator
    
    
    {
    {
    {        int i = 0;
        for (typename ParamGenerator<ParamType>::iterator param_it =
                 generator.begin();
             param_it != generator.end(); ++param_it, ++i) {
          Message test_name_stream;
          test_name_stream << test_info->test_base_name << '/' << i;
          MakeAndRegisterTestInfo(
              test_case_name.c_str(),
              test_name_stream.GetString().c_str(),
              NULL,  // No type parameter.
              PrintToString(*param_it).c_str(),
              GetTestCaseTypeId(),
              TestCase::SetUpTestCase,
              TestCase::TearDownTestCase,
              test_info->test_meta_factory->CreateTestFactory(*param_it));
        }  // for param_it
      }  // for gen_it
    }  // for test_it
  }  // RegisterTests
    
    // <regex.h> is not available on Windows.  Use our own simple regex
// implementation instead.
# define GTEST_USES_SIMPLE_RE 1
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      /**
   * Invoked when there is no data to be read or written and the stream is
   * closed successfully remotely and locally. Once invoked, no further callback
   * methods will be invoked.
   */
  void (*on_succeded)(bidirectional_stream* stream);
    
    #endif

    
    std::string GetDbFileContent(int argc, char** argv);
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    class CodegenTestMinimal : public ::testing::Test {};
    
    #ifndef TEST_QPS_STATS_UTILS_H
#define TEST_QPS_STATS_UTILS_H
    
    #ifndef TEST_QPS_USAGE_TIMER_H
#define TEST_QPS_USAGE_TIMER_H
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
     private:
  SubProcess(const SubProcess& other);
  SubProcess& operator=(const SubProcess& other);
    
      std::shared_ptr<ServerCredentials> GetServerCredentials(
      const grpc::string& type) override {
    if (type == grpc::testing::kInsecureCredentialsType) {
      return InsecureServerCredentials();
    } else if (type == grpc::testing::kTlsCredentialsType) {
      SslServerCredentialsOptions::PemKeyCertPair pkcp = {test_server1_key,
                                                          test_server1_cert};
      SslServerCredentialsOptions ssl_opts;
      ssl_opts.pem_root_certs = '';
      ssl_opts.pem_key_cert_pairs.push_back(pkcp);
      return SslServerCredentials(ssl_opts);
    } else {
      std::unique_lock<std::mutex> lock(mu_);
      auto it(std::find(added_secure_type_names_.begin(),
                        added_secure_type_names_.end(), type));
      if (it == added_secure_type_names_.end()) {
        gpr_log(GPR_ERROR, 'Unsupported credentials type %s.', type.c_str());
        return nullptr;
      }
      return added_secure_type_providers_[it - added_secure_type_names_.begin()]
          ->GetServerCredentials();
    }
  }
  std::vector<grpc::string> GetSecureCredentialsTypeList() override {
    std::vector<grpc::string> types;
    types.push_back(grpc::testing::kTlsCredentialsType);
    std::unique_lock<std::mutex> lock(mu_);
    for (auto it = added_secure_type_names_.begin();
         it != added_secure_type_names_.end(); it++) {
      types.push_back(*it);
    }
    return types;
  }
    
    struct Barrier {
  Barrier() : _count(0) {}
  Barrier(std::size_t count) : _count(count) {}
    }
    
    void test_allReduce_group(std::shared_ptr<thd::DataChannel> data_channel,
                          THDGroup group, std::vector<thd::rank_type> group_ranks) {
  if (contains(group_ranks, data_channel->getRank())) {
    auto int_tensor = buildTensor({1, 2, 3, 4, 5, 6, 7, 100}, 10);
    data_channel->allReduce(*int_tensor, THDReduceOp::THDReduceSUM, group);
    ASSERT_TENSOR_VALUE(int, *int_tensor, 10 * group_ranks.size())
  } else {
    auto int_tensor = buildTensor({1, 2, 3, 4, 5, 6, 7, 100}, 1000);
    data_channel->allReduce(*int_tensor, THDReduceOp::THDReduceSUM, group);
    ASSERT_TENSOR_VALUE(int, *int_tensor, 1000)
  }
}
    
    constexpr ptrdiff_t STORAGE_SIZE = 10;
constexpr size_t VEC_SIZE = 3;
    
    auto ${Storage}::fill(Scalar value) -> ${Storage}& {
  ${THStorage}_fill(${state,} storage, ${to_th_type}(value.to${ScalarName}()));
  return *this;
}
    
      // NOTE: this function needs to be thread safe
  std::shared_ptr<buffer_type> createBuffer(std::size_t bytes, DeviceType device) const {
    if (device == DeviceType::CPU) {
      return std::shared_ptr<buffer_type>(new char[bytes],
                                          std::default_delete<char[]>());
#ifdef WITH_CUDA
    } else if (device == DeviceType::CUDA) {
      buffer_type *buf;
      THCudaCheck(THCudaMalloc(THDGetCudaState(), (void**)&buf, bytes));
      return std::shared_ptr<buffer_type>(buf, [](char* ptr) { THCudaFree(THDGetCudaState(), ptr); });
#endif
    } else {
      throw std::runtime_error('unsupported device in GlooCache::createBuffer');
    }
  }
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight_size[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  auto real_pad = (olen - ilen + kw - 1) / 2;
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaShortTensor(THCudaShortTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Short).unsafeTensorFromTH((void*)tensor, true);
}