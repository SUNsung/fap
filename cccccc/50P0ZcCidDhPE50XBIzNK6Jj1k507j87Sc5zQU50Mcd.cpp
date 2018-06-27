
        
        // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
      // From the zlib manual (http://www.zlib.net/manual.html):
  // The mem_level parameter specifies how much memory should be allocated for
  // the internal compression state. mem_level=1 uses minimum memory but is slow
  // and reduces compression ratio; mem_level=9 uses maximum memory for optimal
  // speed. The default value is 8.
  int8 mem_level = 9;
    
    TEST(AccuracyUtilsTest, ReadGroundTruthFile) {
  string file_name = tensorflow::io::JoinPath(tensorflow::testing::TmpDir(),
                                              'ground_truth.txt');
  string file_data = 'a,10\nb,12\n';
  TF_ASSERT_OK(WriteStringToFile(Env::Default(), file_name, file_data));
    }
    
    class DebuggerClient {
protected:
  ASTContext &Ctx;
public:
  typedef SmallVectorImpl<LookupResultEntry> ResultVector;
    }
    
    
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

    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    
    {} // end namespace swift
    
      /// Enumerate the given Mem LSLocation.
  static void enumerateLSLocation(SILModule *M, SILValue Mem,
                                  std::vector<LSLocation> &LSLocationVault,
                                  LSLocationIndexMap &LocToBit,
                                  LSLocationBaseMap &BaseToLoc,
                                  TypeExpansionAnalysis *TE);
    
    void BuiltStyledStreamWriter::writeArrayValue(Value const& value) {
  unsigned size = value.size();
  if (size == 0)
    pushValue('[]');
  else {
    bool isMultiLine = (cs_ == CommentStyle::All) || isMultineArray(value);
    if (isMultiLine) {
      writeWithIndent('[');
      indent();
      bool hasChildValue = !childValues_.empty();
      unsigned index = 0;
      for (;;) {
        Value const& childValue = value[index];
        writeCommentBeforeValue(childValue);
        if (hasChildValue)
          writeWithIndent(childValues_[index]);
        else {
          if (!indented_) writeIndent();
          indented_ = true;
          writeValue(childValue);
          indented_ = false;
        }
        if (++index == size) {
          writeCommentAfterValueOnSameLine(childValue);
          break;
        }
        *sout_ << ',';
        writeCommentAfterValueOnSameLine(childValue);
      }
      unindent();
      writeWithIndent(']');
    } else // output on a single line
    {
      assert(childValues_.size() == size);
      *sout_ << '[';
      if (!indentation_.empty()) *sout_ << ' ';
      for (unsigned index = 0; index < size; ++index) {
        if (index > 0)
          *sout_ << ', ';
        *sout_ << childValues_[index];
      }
      if (!indentation_.empty()) *sout_ << ' ';
      *sout_ << ']';
    }
  }
}
    
    
    {
    {    return module;
#endif
  }
}
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
      virtual ExtensionGenerator* NewExtensionGenerator(
      const FieldDescriptor* descriptor) const;
    
    // If the type list contains only one type, you can write that type
// directly without Types<...>:
//   INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, int);
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
    // A helper class for creating scoped traces in user programs.
class GTEST_API_ ScopedTrace {
 public:
  // The c'tor pushes the given source file location and message onto
  // a trace stack maintained by Google Test.
  ScopedTrace(const char* file, int line, const Message& message);
    }
    
    
    {          current$(j)_ == typed_other->current$(j)_
]]);
    }
    
    // The compiler used in Symbian has a bug that prevents us from declaring the
// tuple template as a friend (it complains that tuple is redefined).  This
// hack bypasses the bug by declaring the members that should otherwise be
// private as public.
// Sun Studio versions < 12 also have the above bug.
#if defined(__SYMBIAN32__) || (defined(__SUNPRO_CC) && __SUNPRO_CC < 0x590)
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ public:
#else
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ \
    template <GTEST_$(n)_TYPENAMES_(U)> friend class tuple; \
   private:
#endif
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      // Return the sequence number for the start of this batch.
  static SequenceNumber Sequence(const WriteBatch* batch);
    
      // commenting out the line below causes the example to work correctly
  db->CompactRange(&least, &greatest);
    
    namespace leveldb {
    }
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
      size_t size() const { return size_; }
  Iterator* NewIterator(const Comparator* comparator);
    
    #include <vector>
    
    template <class T, QueueBehaviorIfFull kBehavior = QueueBehaviorIfFull::THROW>
class LifoSemMPMCQueue : public BlockingQueue<T> {
 public:
  // Note: The queue pre-allocates all memory for max_capacity
  explicit LifoSemMPMCQueue(size_t max_capacity) : queue_(max_capacity) {}
    }
    
    #pragma once
    
    #include <folly/logging/example/lib.h>
    
    #include <folly/logging/LogConfigParser.h>
#include <folly/logging/LogHandler.h>
#include <folly/logging/LogMessage.h>
#include <folly/logging/LoggerDB.h>
#include <folly/logging/test/TestLogHandler.h>
#include <folly/logging/test/XlogHeader1.h>
#include <folly/logging/test/XlogHeader2.h>
#include <folly/portability/Constexpr.h>
#include <folly/portability/GTest.h>
#include <folly/test/TestUtils.h>
    
      EXPECT_EQ(0.001, estimates.quantiles[0].first);
  EXPECT_EQ(0.01, estimates.quantiles[1].first);
  EXPECT_EQ(0.5, estimates.quantiles[2].first);
  EXPECT_EQ(0.99, estimates.quantiles[3].first);
  EXPECT_EQ(0.999, estimates.quantiles[4].first);
    
      ////
  //// The following methods are meant for the cases when communicate() is
  //// not suitable.  You should not need them when you call communicate(),
  //// and, in fact, it is INHERENTLY UNSAFE to use closeParentFd() or
  //// takeOwnershipOfPipes() from a communicate() callback.
  ////
    
    #include 'benchmark/benchmark.h'
    
    void ConsoleReporter::PrintHeader(const Run& run) {
  std::string str = FormatString('%-*s %13s %13s %10s', static_cast<int>(name_field_width_),
                                 'Benchmark', 'Time', 'CPU', 'Iterations');
  if(!run.counters.empty()) {
    if(output_options_ & OO_Tabular) {
      for(auto const& c : run.counters) {
        str += FormatString(' %10s', c.first.c_str());
      }
    } else {
      str += ' UserCounters...';
    }
  }
  str += '\n';
  std::string line = std::string(str.length(), '-');
  GetOutputStream() << line << '\n' << str << line << '\n';
}
    
      // State for barrier management
  int phase_number_ = 0;
  int entered_ = 0;  // Number of threads that have entered this barrier
    
    inline bool Regex::Init(const std::string& spec, std::string* error) {
#ifdef BENCHMARK_HAS_NO_EXCEPTIONS
  ((void)error); // suppress unused warning
#else
  try {
#endif
    re_ = std::regex(spec, std::regex_constants::extended);
    init_ = true;
#ifndef BENCHMARK_HAS_NO_EXCEPTIONS
  } catch (const std::regex_error& e) {
    if (error) {
      *error = e.what();
    }
  }
#endif
  return init_;
}