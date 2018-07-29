- (void)appendAction:(ObjectBehaviorAction)action;
- (void)enumerate:(void (^)(ObjectBehaviorAction))block;
- (void)reset;
- (void)dump;
@end
    
    /// Index the given source file and store the results to \p indexStorePath.
///
/// \param primarySourceFile The source file to index.
///
/// \param indexUnitToken A unique identifier for this translation unit in the
/// form of a file path.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(SourceFile *primarySourceFile, StringRef indexUnitToken,
                    StringRef indexStorePath, bool indexSystemModules,
                    bool isDebugCompilation, StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
    
    public:
  static Header *create(MarkupContext &MC, unsigned Level,
                        ArrayRef<MarkupASTNode *> Children);
    
    SymbolInfo getSymbolInfoForDecl(const Decl *D);
SymbolSubKind getSubKindForAccessor(AccessorKind AK);
bool isLocalSymbol(const Decl *D);
    
      virtual bool recordHash(StringRef hash, bool isKnown) = 0;
  virtual bool startDependency(StringRef name, StringRef path, bool isClangModule,
                               bool isSystem, StringRef hash) = 0;
  virtual bool finishDependency(bool isClangModule) = 0;
  virtual Action startSourceEntity(const IndexSymbol &symbol) = 0;
  virtual bool finishSourceEntity(SymbolInfo symInfo, SymbolRoleSet roles) = 0;
    
      bool isRoot() const { return Index == RootIdx; }
    
      /** \brief Add a semantic error message.
   * \param value JSON Value location associated with the error
   * \param message The error message.
   * \return \c true if the error was successfully added, \c false if the
   * Value offset exceeds the document size.
   */
  bool pushError(const Value& value, const std::string& message);
    
    bool Value::isInt64() const {
#if defined(JSON_HAS_INT64)
  switch (type_) {
  case intValue:
    return true;
  case uintValue:
    return value_.uint_ <= UInt64(maxInt64);
  case realValue:
    // Note that maxInt64 (= 2^63 - 1) is not exactly representable as a
    // double, so double(maxInt64) will be rounded up to 2^63. Therefore we
    // require the value to be strictly less than the limit.
    return value_.real_ >= double(minInt64) &&
           value_.real_ < double(maxInt64) && IsIntegral(value_.real_);
  default:
    break;
  }
#endif // JSON_HAS_INT64
  return false;
}
    
    // This file defines a C++ DescriptorDatabase, which wraps a Python Database
// and delegate all its operations to Python methods.
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
      void GenerateBuilder(io::Printer* printer);
  void GenerateIsInitialized(io::Printer* printer);
  void GenerateDescriptorMethods(io::Printer* printer);
  void GenerateInitializers(io::Printer* printer);
  void GenerateEqualsAndHashCode(io::Printer* printer);
  void GenerateParser(io::Printer* printer);
  void GenerateParsingConstructor(io::Printer* printer);
  void GenerateAnyMethods(io::Printer* printer);
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, true);
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #ifndef GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
#define GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    grpc::string DescribeMethod(const grpc::protobuf::MethodDescriptor* method) {
  std::stringstream result;
  result << '  rpc ' << method->name()
         << (method->client_streaming() ? '(stream ' : '(')
         << method->input_type()->full_name() << ') returns '
         << (method->server_streaming() ? '(stream ' : '(')
         << method->output_type()->full_name() << ') {}\n';
  if (method->options().deprecated()) {
    result << ' DEPRECATED';
  }
  return result.str();
}
    
    int PowerIphone::get_power_percent_left() {
	if (UpdatePowerInfo()) {
		return percent_left;
	} else {
		return -1;
	}
}
    
    WebSocketClient::WebSocketClient() {
    }
    
    #include 'core/error_list.h'
#include 'websocket_multiplayer.h'
#include 'websocket_peer.h'
    
    FT_END_HEADER
    
            d[0] = clamp(y + m_crr[cr]);
        d[1] = clamp(y + ((m_crg[cr] + m_cbg[cb]) >> 16));
        d[2] = clamp(y + m_cbb[cb]);
        d[3] = 255;
    
    #endif /* OPUS_HAVE_RTCD */
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
      We can insert an explicit MOVD or MOVQ using _mm_cvtsi32_si128() or
  _mm_loadl_epi64(), which should have the same semantics as an m32 or m64
  reference in the PMOVSXWD instruction itself, but gcc is not smart enough to
  optimize this out when optimizations ARE enabled.
    
    #if defined(OPUS_X86_MAY_HAVE_SSE4_1)
#include 'x86/SigProc_FIX_sse.h'
#endif
    
    #endif // BOOST_ASIO_BUFFERED_STREAM_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {  // The offset to the end of the unread data.
  size_type end_offset_;
  
  // The data in the buffer.
  std::vector<byte_type> buffer_;
};
    
    namespace boost {
namespace date_time {
    }
    }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP

    
    // Calls to asio_handler_invoke must be made from a namespace that does not
// contain overloads of this function. The boost_asio_handler_invoke_helpers
// namespace is defined here for that purpose.
namespace boost_asio_handler_invoke_helpers {
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterFree
 * Signature: (J)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterFree
  (JNIEnv *jenv, jclass jcls, jlong jhandle) {
    BoosterHandle handle = (BoosterHandle) jhandle;
    return XGBoosterFree(handle);
}
    
    
    {    return label_order_cache_;
  }
  /*! \brief clear all the information */
  void Clear();
  /*!
   * \brief Load the Meta info from binary stream.
   * \param fi The input stream
   */
  void LoadBinary(dmlc::Stream* fi);
  /*!
   * \brief Save the Meta info to binary stream
   * \param fo The output stream.
   */
  void SaveBinary(dmlc::Stream* fo) const;
  /*!
   * \brief Set information in the meta info.
   * \param key The key of the information.
   * \param dptr The data pointer of the source array.
   * \param dtype The type of the source data.
   * \param num Number of elements in the source array.
   */
  void SetInfo(const char* key, const void* dptr, DataType dtype, size_t num);
    
    
    {  const std::vector<size_t> expected_offset{
    0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60
  };
  const std::vector<xgboost::Entry> expected_data{
    {1, 1}, {2, 1}, {3, 0}, {4, 0.2}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.1}, {5, 1},
    {1, 0}, {2, 1}, {3, 0}, {4, 0.4}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.3}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.2}, {5, 0},
    {1, 1}, {2, 0}, {3, 1}, {4, 0.4}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.1}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.2}, {5, 0},
    {1, 0}, {2, 0}, {3, 1}, {4, 0.1}, {5, 1},
    {1, 1}, {2, 1}, {3, 0}, {4, 0.3}, {5, 0},
    {1, 1}, {2, 0}, {3, 0}, {4, 0.4}, {5, 1},
    {1, 0}, {2, 1}, {3, 1}, {4, 0.5}, {5, 0}
  };
  dmlc::DataIter<xgboost::SparsePage>* iter = dmat->RowIterator();
  iter->BeforeFirst();
  CHECK(iter->Next());
  const xgboost::SparsePage& batch = iter->Value();
  CHECK_EQ(batch.base_rowid, 0);
  CHECK(batch.offset == expected_offset);
  CHECK(batch.data == expected_data);
  CHECK(!iter->Next());
}

    
    TEST(Metric, RMSE) {
  xgboost::Metric * metric = xgboost::Metric::Create('rmse');
  ASSERT_STREQ(metric->Name(), 'rmse');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6403f, 0.001f);
}
    
    #endif  // XGBOOST_OBJECTIVE_REGRESSION_LOSS_H_

    
    
    {
    {    std::ostringstream oss;
    std::copy(line.begin() + options_index,
              line.end(),
              std::ostream_iterator<std::string>(oss, ' '));
    r['options'] = oss.str();
    results.push_back(r);
  }
}
    
    #ifdef WIN32
  pid = (int)::GetCurrentProcessId();
#else
  pid = getpid();
#endif
    
    
    {  BSTR* pData = nullptr;
  SafeArrayAccessData(value.parray, (void**)&pData);
  ret.reserve(count);
  for (long i = 0; i < count; i++) {
    ret.push_back(bstrToString(pData[i]));
  }
  SafeArrayUnaccessData(value.parray);
  VariantClear(&value);
  return Status(0);
}
    
    Status KernelEventPublisher::setUp() {
  // A daemon should attempt to autoload kernel extensions.
  if (Initializer::isDaemon()) {
    loadKernelExtension();
  }
    }
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
    #include <algorithm>
#include <atomic>
#include <condition_variable>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>
    
    
    {} // namespace folly

    
      bool remove(const T& v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (!curr || curr->elem_ != v) {
      return false;
    }
    Node* curr_next = curr->next_.load();
    // Patch up the actual list...
    prev->store(curr_next, std::memory_order_release);
    // ...and only then null out the removed node.
    curr->next_.store(nullptr, std::memory_order_release);
    curr->retire();
    return true;
  }
    
    template <class T, QueueBehaviorIfFull kBehavior = QueueBehaviorIfFull::THROW>
class LifoSemMPMCQueue : public BlockingQueue<T> {
 public:
  // Note: The queue pre-allocates all memory for max_capacity
  explicit LifoSemMPMCQueue(size_t max_capacity) : queue_(max_capacity) {}
    }
    
    #include <folly/Executor.h>
#include <folly/MPMCQueue.h>
#include <folly/Range.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
#include <glog/logging.h>
    
    Init::Init(int* argc, char*** argv, bool removeFlags) {
  init(argc, argv, removeFlags);
}
    
      static size_t controlBlockSize(size_t n) {
    return offsetof(ControlBlockAndPromise, promises) + n * sizeof(BoolPromise);
  }
    
    #if defined(__APPLE__) || defined(_MSC_VER)
#define FOLLY_STATIC_CTOR_PRIORITY_MAX
#else
// 101 is the highest priority allowed by the init_priority attribute.
// This priority is already used by JEMalloc and other memory allocators so
// we will take the next one.
#define FOLLY_STATIC_CTOR_PRIORITY_MAX __attribute__((__init_priority__(102)))
#endif
    
    namespace folly {
namespace f14 {
namespace detail {
    }
    }
    }
    
    
    {  // Test shared_from_this() and weak_from_this() on object not owned by a
  // shared_ptr. Undefined in C++14 but well-defined in C++17. Also known to
  // work with libstdc++ >= 20150123. Feel free to add other standard library
  // versions where the behavior is known.
#if __cplusplus >= 201700L || __GLIBCXX__ >= 20150123L
  C stack_resident;
  ASSERT_THROW(stack_resident.shared_from_this(), std::bad_weak_ptr);
  ASSERT_TRUE(stack_resident.weak_from_this().expired());
#endif
}
    
     private:
  void BuildPredictedEnvironment(
      const std::vector<const Obstacle*>& obstacles,
      const double ego_vehicle_s,
      const double ego_vehicle_d,
      const std::vector<common::PathPoint>& discretized_reference_line);
    
      std::vector<Vec2d> new_points;
  for (int i = 0; i < n; ++i) {
    if (side[i] >= 0) {
      new_points.push_back((*points)[i]);
    }
    const int j = ((i == n - 1) ? 0 : (i + 1));
    if (side[i] * side[j] < 0) {
      const double ratio = prod[j] / (prod[j] - prod[i]);
      new_points.emplace_back(
          (*points)[i].x() * ratio + (*points)[j].x() * (1.0 - ratio),
          (*points)[i].y() * ratio + (*points)[j].y() * (1.0 - ratio));
    }
  }
    
    namespace apollo {
namespace planning {
    }
    }