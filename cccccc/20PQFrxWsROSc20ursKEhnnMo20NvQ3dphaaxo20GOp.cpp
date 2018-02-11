
        
        
    {
    {    if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Decl *>()) {
      SemanticNode.get<Decl *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else {
      llvm_unreachable('ASTNode has pointer to unknown thing!');
    }
    llvm::errs() << '\n=====================================================\n';
  }
}

    
      /// Keep emitting subsequent diagnostics after a fatal error.
  bool ShowDiagnosticsAfterFatalError = false;
    
    Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
    
    {}  // anonymous namespace
    
    
    {}  // namespace leveldb
    
    
    {      counter++;
      if (empty) {
        empty = false;
        t.meta.smallest.DecodeFrom(key);
      }
      t.meta.largest.DecodeFrom(key);
      if (parsed.sequence > t.max_sequence) {
        t.max_sequence = parsed.sequence;
      }
    }
    if (!iter->status().ok()) {
      status = iter->status();
    }
    delete iter;
    Log(options_.info_log, 'Table #%llu: %d entries %s',
        (unsigned long long) t.meta.number,
        counter,
        status.ToString().c_str());
    
      for (size_t i = 0; i < compact_pointers_.size(); i++) {
    PutVarint32(dst, kCompactPointer);
    PutVarint32(dst, compact_pointers_[i].first);  // level
    PutLengthPrefixedSlice(dst, compact_pointers_[i].second.Encode());
  }
    
    namespace leveldb {
    }
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    WriteBatch::Handler::~Handler() { }
    
      Benchmark()
  : db_(NULL),
    num_(FLAGS_num),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    bytes_(0),
    rand_(301) {
    std::vector<std::string> files;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    Env::Default()->GetChildren(test_dir.c_str(), &files);
    if (!FLAGS_use_existing_db) {
      for (int i = 0; i < files.size(); i++) {
        if (Slice(files[i]).starts_with('dbbench_polyDB')) {
          std::string file_name(test_dir);
          file_name += '/';
          file_name += files[i];
          Env::Default()->DeleteFile(file_name.c_str());
        }
      }
    }
  }
    
    
    {}  // namespace leveldb
    
    #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/db.hpp'
#include 'caffe/util/format.hpp'
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CONCAT_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    #if GTEST_OS_SYMBIAN
  // Streams a value (either a pointer or not) to this object.
  template <typename T>
  inline Message& operator <<(const T& value) {
    StreamHelper(typename internal::is_pointer<T>::type(), value);
    return *this;
  }
#else
  // Streams a non-pointer value to this object.
  template <typename T>
  inline Message& operator <<(const T& val) {
    // Some libraries overload << for STL containers.  These
    // overloads are defined in the global namespace instead of ::std.
    //
    // C++'s symbol lookup rule (i.e. Koenig lookup) says that these
    // overloads are visible in either the std namespace or the global
    // namespace, but not other namespaces, including the testing
    // namespace which Google Test's Message class is in.
    //
    // To allow STL containers (and other types that has a << operator
    // defined in the global namespace) to be used in Google Test
    // assertions, testing::Message must access the custom << operator
    // from the global namespace.  With this using declaration,
    // overloads of << defined in the global namespace and those
    // visible via Koenig lookup are both exposed in this function.
    using ::operator <<;
    *ss_ << val;
    return *this;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13>
internal::ValueArray13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12,
    T13> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13) {
  return internal::ValueArray13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
}
    
    // Then, use the TEST_P macro to define as many parameterized tests
// for this fixture as you want. The _P suffix is for 'parameterized'
// or 'pattern', whichever you prefer to think.
    
    // A macro for testing Google Test assertions or code that's expected to
// generate Google Test non-fatal failures.  It asserts that the given
// statement will cause exactly one non-fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_NONFATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// 'statement' is allowed to reference local variables and members of
// the current object.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  If we do that, the code won't compile when the user gives
// EXPECT_NONFATAL_FAILURE() a statement that contains a macro that
// expands to code containing an unprotected comma.  The
// AcceptsMacroThatExpandsToUnprotectedComma test in gtest_unittest.cc
// catches that.
//
// For the same reason, we have to write
//   if (::testing::internal::AlwaysTrue()) { statement; }
// instead of
//   GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
// to avoid an MSVC warning on unreachable code.
#define EXPECT_NONFATAL_FAILURE(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Gets the message associated with the test part.
  const char* message() const { return message_.c_str(); }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the variable used to remember the names of
// the defined tests in the given test case.
# define GTEST_TYPED_TEST_CASE_P_STATE_(TestCaseName) \
  gtest_typed_test_case_p_state_##TestCaseName##_
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ', '
                            << e5 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4
                            << '\n' << e5 << ' evaluates to ' << v5;
}
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
      // Given directory = 'dir', relative_path = 'test.xml',
  // returns 'dir/test.xml'.
  // On Windows, uses \ as the separator rather than /.
  static FilePath ConcatPaths(const FilePath& directory,
                              const FilePath& relative_path);
    
    
    {
    {    // Next, recurses (at compile time) with the tail of the type list.
    return TypeParameterizedTest<Fixture, TestSel, typename Types::Tail>
        ::Register(prefix, case_name, test_names, index + 1);
  }
};
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    // Forward declarations of ValuesIn(), which is implemented in
// include/gtest/gtest-param-test.h.
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end);
    
    template <typename T1>
struct Types1 {
  typedef T1 Head;
  typedef Types0 Tail;
};
    
      // If we are given the --check_for_leaks command line flag, installs the
  // leak checker.
  if (check_for_leaks) {
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    }
    
    // Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}
    
            // begin decimating matrices
        size_t rv = 0;
        for (const auto& it : MB)
        {
            const wstring& name = it.first;
            const auto& input = it.second;
            auto& mat = MB.GetInputMatrix<ElemType>(name);
            size_t numRows = mat.GetNumRows();
            size_t numCols = mat.GetNumCols();
            int deviceId   = mat.GetDeviceId();
    }
    
    
    {
    {            // get the average mean and variance across all the workers
            for (auto& parameter : learnParamsValues)
            {
                (*parameter) /= (ElemType)m_mpi->NumNodesInUse();
            }
        }
    }
    
    #define _CRT_NONSTDC_NO_DEPRECATE // make VS accept POSIX functions without _
    
    template void GetFileConfigNames<ConfigParameters>(const ConfigParameters&, std::vector<std::wstring>& features, std::vector<std::wstring>& labels);
template void GetFileConfigNames<ScriptableObjects::IConfigRecord>(const ScriptableObjects::IConfigRecord&, std::vector<std::wstring>& features, std::vector<std::wstring>& labels);
    
    #include 'test/cpp/qps/report.h'
    
    std::shared_ptr<Channel> CreateTestChannel(
    const grpc::string& server, const grpc::string& override_hostname,
    bool enable_ssl, bool use_prod_roots,
    const std::shared_ptr<CallCredentials>& creds,
    const ChannelArguments& args);
    
    
    {
    {      // Send a simple response after a small delay that would ensure the client
      // deadline is exceeded.
      gpr_log(GPR_INFO, 'Got request %d', n);
      testing::EchoResponse response;
      response.set_message('foobar');
      // A bit of sleep to make sure the deadline elapses.
      gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_MONOTONIC),
                                   gpr_time_from_millis(50, GPR_TIMESPAN)));
      {
        std::lock_guard<std::mutex> lock(mu);
        if (shutting_down) {
          gpr_log(GPR_INFO,
                  'shut down while processing call, not calling Finish()');
          // Continue flushing the CQ.
          continue;
        }
        gpr_log(GPR_INFO, 'Finishing request %d', n);
        responder.Finish(response, grpc::Status::OK, (void*)2);
        if (!cq->Next(&tag, &ok)) {
          break;
        }
        EXPECT_EQ((void*)2, tag);
      }
    }
  });
    
    #include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>
#include <grpc/support/log.h>
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    
    {    // Act upon its status.
    if (status.ok()) {
      return reply.message();
    } else {
      std::cout << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
      public:
    jpeg_decoder_mem_stream() : m_pSrc_data(NULL), m_ofs(0), m_size(0) { }
    jpeg_decoder_mem_stream(const uint8 *pSrc_data, uint size) : m_pSrc_data(pSrc_data), m_ofs(0), m_size(size) { }
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u1__long,&_huff_book__44u1__long,
   &_resbook_44u_1,&_resbook_44u_1}
};
static const vorbis_residue_template _res_44u_2[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u2__short,&_huff_book__44u2__short,
   &_resbook_44u_2,&_resbook_44u_2},
    
    typedef int vorbis_fpu_control;
    
    /* NOTE - c is not incremented as per n2l */
# define n2ln(c,l1,l2,n) { \
                        c+=n; \
                        l1=l2=0; \
                        switch (n) { \
                        case 8: l2 =((unsigned long)(*(--(c))))    ; \
                        case 7: l2|=((unsigned long)(*(--(c))))<< 8; \
                        case 6: l2|=((unsigned long)(*(--(c))))<<16; \
                        case 5: l2|=((unsigned long)(*(--(c))))<<24; \
                        case 4: l1 =((unsigned long)(*(--(c))))    ; \
                        case 3: l1|=((unsigned long)(*(--(c))))<< 8; \
                        case 2: l1|=((unsigned long)(*(--(c))))<<16; \
                        case 1: l1|=((unsigned long)(*(--(c))))<<24; \
                                } \
                        }
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(s1);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e2);
			des_encrypt3(&data[0],key1,key2,key3);
			}
    }
    
    inline flatbuffers::TypeTable *SecondTableInATypeTable() {
  static flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static flatbuffers::TypeFunction type_refs[] = {
    NamespaceC::TableInCTypeTable
  };
  static const char *names[] = {
    'refer_to_c'
  };
  static flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}
    
    struct AttackerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sword_attack_damage(int32_t sword_attack_damage) {
    fbb_.AddElement<int32_t>(Attacker::VT_SWORD_ATTACK_DAMAGE, sword_attack_damage, 0);
  }
  explicit AttackerBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AttackerBuilder &operator=(const AttackerBuilder &);
  flatbuffers::Offset<Attacker> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Attacker>(end);
    return o;
  }
};
    
    class LogHelper {
  std::ostream* os_;
    }
    
    
    {  virtual grpc::string get_input_type_name() const = 0;
  virtual grpc::string get_output_type_name() const = 0;
  virtual bool NoStreaming() const = 0;
  virtual bool ClientStreaming() const = 0;
  virtual bool ServerStreaming() const = 0;
  virtual bool BidiStreaming() const = 0;
};
    
    // These are used as the upper 6 bits of a type field to indicate the actual
// type.
enum Type {
  TYPE_NULL = 0,
  TYPE_INT = 1,
  TYPE_UINT = 2,
  TYPE_FLOAT = 3,
  // Types above stored inline, types below store an offset.
  TYPE_KEY = 4,
  TYPE_STRING = 5,
  TYPE_INDIRECT_INT = 6,
  TYPE_INDIRECT_UINT = 7,
  TYPE_INDIRECT_FLOAT = 8,
  TYPE_MAP = 9,
  TYPE_VECTOR = 10,      // Untyped.
  TYPE_VECTOR_INT = 11,  // Typed any size (stores no type table).
  TYPE_VECTOR_UINT = 12,
  TYPE_VECTOR_FLOAT = 13,
  TYPE_VECTOR_KEY = 14,
  TYPE_VECTOR_STRING = 15,
  TYPE_VECTOR_INT2 = 16,  // Typed tuple (no type table, no size field).
  TYPE_VECTOR_UINT2 = 17,
  TYPE_VECTOR_FLOAT2 = 18,
  TYPE_VECTOR_INT3 = 19,  // Typed triple (no type table, no size field).
  TYPE_VECTOR_UINT3 = 20,
  TYPE_VECTOR_FLOAT3 = 21,
  TYPE_VECTOR_INT4 = 22,  // Typed quad (no type table, no size field).
  TYPE_VECTOR_UINT4 = 23,
  TYPE_VECTOR_FLOAT4 = 24,
  TYPE_BLOB = 25,
  TYPE_BOOL = 26,
  TYPE_VECTOR_BOOL =
      36,  // To Allow the same type of conversion of type to vector type
};
    
    inline NamedHashFunction<uint32_t>::HashFunction FindHashFunction32(
    const char *name) {
  std::size_t size = sizeof(kHashFunctions32) / sizeof(kHashFunctions32[0]);
  for (std::size_t i = 0; i < size; ++i) {
    if (std::strcmp(name, kHashFunctions32[i].name) == 0) {
      return kHashFunctions32[i].function;
    }
  }
  return nullptr;
}
    
      // Create a FlatBuffer's `vector` from the `std::vector`.
  std::vector<flatbuffers::Offset<Weapon>> weapons_vector;
  weapons_vector.push_back(sword);
  weapons_vector.push_back(axe);
  auto weapons = builder.CreateVector(weapons_vector);
    
    int main(int argc, char *argv[])
{
    lws_set_log_level(0, nullptr);
    }
    
    
    {
    {                    // Perform first batch of echo sending
                    if (sockets.size() == connections) {
                        startPoint = high_resolution_clock::now();
                        echo();
                    } else {
                        newConnection();
                    }
                }
                delete [] buf->base;
            });
    
    #endif // EXTENSIONS_UWS_H

    
        // duplicated code for now!
    template <class F>
    void forEachHttpSocket(const F &cb) {
        uS::Poll *iterator = httpSocketHead;
        iterators.push(iterator);
        while (iterator) {
            uS::Poll *lastIterator = iterator;
            cb((HttpSocket<isServer> *) iterator);
            iterator = iterators.top();
            if (lastIterator == iterator) {
                iterator = ((uS::Socket *) iterator)->next;
                iterators.top() = iterator;
            }
        }
        iterators.pop();
    }
    
        // returns INVALID_SOCKET on error
    uv_os_sock_t createSocket(int domain, int type, int protocol) {
        int flags = 0;
#if defined(SOCK_CLOEXEC) && defined(SOCK_NONBLOCK)
        flags = SOCK_CLOEXEC | SOCK_NONBLOCK;
#endif
    }
    
        void close() {
        loop->post([this]() {
            delete this;
        });
    }