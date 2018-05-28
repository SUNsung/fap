
        
        #include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/resource_mgr.h'
#include 'tensorflow/core/framework/tensor_shape.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/core/platform/thread_annotations.h'
#include 'tensorflow/core/platform/types.h'
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::psub(one, internal::pmul(y, y));
  }
};
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
    
    {
    {    SetReaderFactory([this, compression_type, env]() {
      return new TFRecordReader(name(), compression_type, env);
    });
  }
};
    
        NodeDef* add_node2 = graph_def.add_node();
    add_node2->set_name('add_node2');
    add_node2->set_op('Add');
    add_node2->add_input('const_node1');
    add_node2->add_input('const_node2');
    add_node2->set_device('//device:GPU:1');
    
      // Conversion of a TensorSlice to other formats
  void AsProto(TensorSliceProto* proto) const;
  string DebugString() const;
    
    Status RealGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      FDH::Const('zero', 0.f),
      {{'dx'}, 'Complex', {'dy', 'zero'}},
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Real', RealGrad);
    
      ASSERT_FALSE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch2, kGrpcUrl1, true)}));
  ASSERT_TRUE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch2, kGrpcUrl1, false)}));
    
     private:
  std::atomic_bool stop_requested_;
  std::atomic_bool stopped_;
    
    void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
            // Version: 1.2
        UNSIGNED_BYTE_3_3_2              = 0x8032,
        UNSIGNED_SHORT_4_4_4_4           = 0x8033,
        UNSIGNED_SHORT_5_5_5_1           = 0x8034,
        UNSIGNED_INT_8_8_8_8             = 0x8035,
        UNSIGNED_INT_10_10_10_2          = 0x8036,
        TEXTURE_BINDING_3D               = 0x806A,
        PACK_SKIP_IMAGES                 = 0x806B,
        PACK_IMAGE_HEIGHT                = 0x806C,
        UNPACK_SKIP_IMAGES               = 0x806D,
        UNPACK_IMAGE_HEIGHT              = 0x806E,
        TEXTURE_3D                       = 0x806F,
        PROXY_TEXTURE_3D                 = 0x8070,
        TEXTURE_DEPTH                    = 0x8071,
        TEXTURE_WRAP_R                   = 0x8072,
        MAX_3D_TEXTURE_SIZE              = 0x8073,
        UNSIGNED_BYTE_2_3_3_REV          = 0x8362,
        UNSIGNED_SHORT_5_6_5             = 0x8363,
        UNSIGNED_SHORT_5_6_5_REV         = 0x8364,
        UNSIGNED_SHORT_4_4_4_4_REV       = 0x8365,
        UNSIGNED_SHORT_1_5_5_5_REV       = 0x8366,
        UNSIGNED_INT_8_8_8_8_REV         = 0x8367,
        UNSIGNED_INT_2_10_10_10_REV      = 0x8368,
        BGR                              = 0x80E0,
        BGRA                             = 0x80E1,
        MAX_ELEMENTS_VERTICES            = 0x80E8,
        MAX_ELEMENTS_INDICES             = 0x80E9,
        CLAMP_TO_EDGE                    = 0x812F,
        TEXTURE_MIN_LOD                  = 0x813A,
        TEXTURE_MAX_LOD                  = 0x813B,
        TEXTURE_BASE_LEVEL               = 0x813C,
        TEXTURE_MAX_LEVEL                = 0x813D,
        SMOOTH_POINT_SIZE_RANGE          = 0x0B12,
        SMOOTH_POINT_SIZE_GRANULARITY    = 0x0B13,
        SMOOTH_LINE_WIDTH_RANGE          = 0x0B22,
        SMOOTH_LINE_WIDTH_GRANULARITY    = 0x0B23,
        ALIASED_LINE_WIDTH_RANGE         = 0x846E,
    
    // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    // Prints the given value using the << operator if it has one;
// otherwise prints the bytes in it.  This is what
// UniversalPrinter<T>::Print() does when PrintTo() is not specialized
// or overloaded for type T.
//
// A user can override this behavior for a class type Foo by defining
// an overload of PrintTo() in the namespace where Foo is defined.  We
// give the user this option as sometimes defining a << operator for
// Foo is not desirable (e.g. the coding style may prevent doing it,
// or there is already a << operator but it doesn't do what the user
// wants).
template <typename T>
void PrintTo(const T& value, ::std::ostream* os) {
  // DefaultPrintTo() is overloaded.  The type of its first two
  // arguments determine which version will be picked.  If T is an
  // STL-style container, the version for container will be called; if
  // T is a pointer, the pointer version will be called; otherwise the
  // generic version will be called.
  //
  // Note that we check for container types here, prior to we check
  // for protocol message types in our operator<<.  The rationale is:
  //
  // For protocol messages, we want to give people a chance to
  // override Google Mock's format by defining a PrintTo() or
  // operator<<.  For STL containers, other formats can be
  // incompatible with Google Mock's format for the container
  // elements; therefore we check for container types here to ensure
  // that our format is used.
  //
  // The second argument of DefaultPrintTo() is needed to bypass a bug
  // in Symbian's C++ compiler that prevents it from picking the right
  // overload between:
  //
  //   PrintTo(const T& x, ...);
  //   PrintTo(T* x, ...);
  DefaultPrintTo(IsContainerTest<T>(0), is_pointer<T>(), value, os);
}
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2>
AssertionResult AssertPred2Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2) {
  if (pred(v1, v2)) return AssertionSuccess();
    }
    
    #include <stdlib.h>
#include <assert.h>
    
    namespace testing {
    }
    
    // Wraps ParamGeneratorInterface<T> and provides general generator syntax
// compatible with the STL Container concept.
// This class implements copy initialization semantics and the contained
// ParamGeneratorInterface<T> instance is shared among all copies
// of the original object. This is possible because that instance is immutable.
template<typename T>
class ParamGenerator {
 public:
  typedef ParamIterator<T> iterator;
    }
    
    template <>
class tuple<> {
 public:
  tuple() {}
  tuple(const tuple& /* t */)  {}
  tuple& operator=(const tuple& /* t */) { return *this; }
};
    
    ]]
    
    #include <algorithm>
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    	PathRemoveFileSpec(exeDir);
    
      std::string write_data;
  for (size_t i = 0; i < kWriteSize; ++i) {
    write_data.append(1, static_cast<char>(i));
  }
    
      // create second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key2(i), 'value for range 2 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    // Test for issue 200: when iterator switches direction from backward
// to forward, the current key can be yielded unexpectedly if a new
// mutation has been added just before the current key.
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    #include <string.h>
#include 'util/coding.h'
#include 'util/hash.h'
    
    
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
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
      // Finish building the block and return a slice that refers to the
  // block contents.  The returned slice will remain valid for the
  // lifetime of this builder or until Reset() is called.
  Slice Finish();
    
    #include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/filesystem.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
    
    /**
 * @brief Helper logging macro for table-generated verbose log lines.
 *
 * Since logging in tables does not always mean a critical warning or error
 * but more likely a parsing or expected edge-case, we provide a TLOG.
 *
 * The tool user can set within config or via the CLI what level of logging
 * to tolerate. It's the table developer's job to assume consistency in logging.
 */
#define TLOG VLOG(1)
    
    /**
 * @brief Mimic the REGISTER macro, extensions should use this helper.
 *
 * The SDK does not provide a REGISTER macro for modules or extensions.
 * Tools built with the osquery SDK should use REGISTER_EXTERNAL to add to
 * their own 'external' registry. This registry will broadcast to the osquery
 * extension manager (core) in an extension.
 *
 * osquery 'modules' should not construct their plugin registrations in
 * global scope (global construction time). Instead they should use the
 * module call-in well defined symbol, declare their SDK constraints, then
 * use the REGISTER_MODULE call within `initModule`.
 */
#define REGISTER_EXTERNAL(t, r, n)                                             \
  namespace registries {                                                       \
  const ::osquery::registries::PI<t> k##ExtensionRegistryItem##t(r, n, false); \
  }
    
    /**
 * @brief A utility class which is used to express the state of operations.
 *
 * @code{.cpp}
 *   osquery::Status foobar() {
 *     auto na = doSomeWork();
 *     if (na->itWorked()) {
 *       return osquery::Status(0, 'OK');
 *     } else {
 *       return osquery::Status(1, na->getErrorString());
 *     }
 *   }
 * @endcode
 */
class Status {
 public:
  /**
   * @brief Default constructor
   *
   * Note that the default constructor initialized an osquery::Status instance
   * to a state such that a successful operation is indicated.
   */
  explicit Status(int c = 0) : code_(c), message_('OK') {}
    }
    
    
    {  // Cleanup allocations.
  free(buffer);
  return result.str();
}
    
      auto process = PlatformProcess::getCurrentProcess();
  EXPECT_NE(nullptr, process.get());
    
    Status EphemeralDatabasePlugin::scan(const std::string& domain,
                                     std::vector<std::string>& results,
                                     const std::string& prefix,
                                     size_t max) const {
  if (db_.count(domain) == 0) {
    return Status(0);
  }
    }
    
    #if DMLC_ENABLE_STD_THREAD
#include '../src/data/sparse_page_source.cc'
#include '../src/data/sparse_page_dmatrix.cc'
#include '../src/data/sparse_page_writer.cc'
#endif
    
    TEST(Metric, AUCPR) {
  xgboost::Metric *metric = xgboost::Metric::Create('aucpr');
  ASSERT_STREQ(metric->Name(), 'aucpr');
  EXPECT_NEAR(GetMetricEval(metric, {0, 0, 1, 1}, {0, 0, 1, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric, {0.1f, 0.9f, 0.1f, 0.9f}, {0, 0, 1, 1}),
              0.5f, 0.001f);
  EXPECT_NEAR(
      GetMetricEval(metric,
                    {0.4f, 0.2f, 0.9f, 0.1f, 0.2f, 0.4f, 0.1f, 0.1f, 0.2f, 0.1f},
                    {0, 0, 0, 0, 0, 1, 0, 0, 1, 1}),
      0.2908445f, 0.001f);
  EXPECT_NEAR(GetMetricEval(
                  metric, {0.87f, 0.31f, 0.40f, 0.42f, 0.25f, 0.66f, 0.95f,
                           0.09f, 0.10f, 0.97f, 0.76f, 0.69f, 0.15f, 0.20f,
                           0.30f, 0.14f, 0.07f, 0.58f, 0.61f, 0.08f},
                  {0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1}),
              0.2769199f, 0.001f);
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 0}, {0, 0}));
}