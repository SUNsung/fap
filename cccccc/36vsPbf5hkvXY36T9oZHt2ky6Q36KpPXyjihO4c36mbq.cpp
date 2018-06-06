
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #ifndef TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
#define TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
    
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
    
    std::ostream& operator<<(std::ostream& out,
                         const VersionedComputationHandle& versioned_handle) {
  out << versioned_handle.ToString();
  return out;
}
    
    /*
 * Deprecated in favor of EncodeAudioOpV2.
 */
class EncodeAudioOp : public OpKernel {
 public:
  explicit EncodeAudioOp(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context, context->GetAttr('file_format', &file_format_));
    file_format_ = str_util::Lowercase(file_format_);
    OP_REQUIRES(context, file_format_ == 'wav',
                errors::InvalidArgument('file_format arg must be \'wav\'.'));
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    namespace grpc {
namespace testing {
    }
    }
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
      static double Now();
    
    #include 'src/proto/grpc/testing/metrics.grpc.pb.h'
#include 'src/proto/grpc/testing/metrics.pb.h'
    
    
    {
    {}  // namespace testing
}  // namespace grpc

    
    #include <initializer_list>
#include <string>
#include <vector>
    
    
    {
    {        // same node. no copy needed
        if (pFromNode == pToNode)
            LogicError('CopyNode: You are copying the node to the same network with same node name.');
        else
            pFromNode->CopyTo(pToNode, toName, flags); // blast it over the existing node
    }
    return pToNode;
}
    
    // ResolveIncludeStatements - this function takes a config string, and looks for all lines of the
//     form 'include=configPaths', where 'configPaths' is a '+' separated list of paths to config files.
//     If it encounters one of these lines, it reads the config files listed in 'configPaths' (in the specified order),
//     and includes the body of each file in the string which is eventually returned by this function.  If the included
//     config file includes other config files, this function will recursively include those files as well.
// configString - the config string within which to look for 'include' statements
// resolvedConfigFiles - the paths to all the config files that have already been resolved.  This vector is used to prevent include loops,
//     and to prevent files from being included multiple times.
// returns: The config string, with all the 'include' statements replaced with the bodies of the specified config files.
std::string ConfigParser::ResolveIncludeStatements(const std::string& configString, std::vector<std::string>& resolvedConfigFiles)
{
    std::vector<std::string> lines = msra::strfun::split(configString, '\n');
    std::string includeKeyword = 'include=';
    std::size_t includeKeywordSize = includeKeyword.size();
    std::string newConfigString;
    for (std::string line : lines)
    {
        if (line.compare(0, includeKeywordSize, includeKeyword) == 0)
        {
            std::string filePaths = line.substr(includeKeywordSize, line.size() - includeKeywordSize);
            if (filePaths.find(openBraceVar) != std::string::npos)
            {
                RuntimeError('Variable usage (eg, \'$varName$\') not supported in \'include\' statements. Explicit path to config file must be provided');
            }
    }
    }
    }
    
    
    {}  // namespace leveldb

    
    void BlockHandle::EncodeTo(std::string* dst) const {
  // Sanity check that all fields have been set
  assert(offset_ != ~static_cast<uint64_t>(0));
  assert(size_ != ~static_cast<uint64_t>(0));
  PutVarint64(dst, offset_);
  PutVarint64(dst, size_);
}
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    namespace leveldb {
    }
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_H_

    
    
    {    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint cid = sorted_index_set[i];
      size_t dst_begin = page->offset[i];
      size_t src_begin = disk_offset_[cid];
      size_t num = disk_offset_[cid + 1] - disk_offset_[cid];
      for (size_t j = 0; j < num; ++j) {
        page->data[dst_begin + j] = SparseBatch::Entry(
            index_.data[src_begin + j] + min_index_, value_.data[src_begin + j]);
      }
    }
    return true;
  }
    
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
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
      EXPECT_CALL(transport, writeChain(_, BufMatches(buf.get()), _));
    
      app.printf('%s', 'test');
  EXPECT_EQ(head.length(), 4);
  EXPECT_EQ(0, memcmp(head.data(), 'test\0', 5));
    
    int customDeleterCount = 0;
int destructorCount = 0;
struct OwnershipTestClass {
  explicit OwnershipTestClass(int v = 0) : val(v) { }
  ~OwnershipTestClass() {
    ++destructorCount;
  }
  int val;
};
    
      creating_thread_.store(std::this_thread::get_id(), std::memory_order_release);
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    #include <folly/portability/Windows.h>
    
      constexpr auto v4 =
      folly::constexpr_sub_overflow_clamped(int64_t(23), kInt64Min);
  EXPECT_EQ(kInt64Max, v4);
    
      BlockingQueueAddResult add(T item) override {
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queue_.write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queue_.blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    namespace folly {
  using std::goodMallocSize;
  using std::jemallocMinInPlaceExpandable;
  using std::usingJEMalloc;
  using std::smartRealloc;
  using std::checkedMalloc;
  using std::checkedCalloc;
  using std::checkedRealloc;
}
    
    
    {
    {} // namespace futures
} // namespace folly

    
    #if FOLLY_USE_SYMBOLIZER
  // Don't use glog's DumpStackTraceAndExit; rely on our signal handler.
  google::InstallFailureFunction(abort);
    
      // Create an AsyncFileWriter that refers to a pipe whose read end is closed
  std::array<int, 2> fds;
  auto rc = pipe(fds.data());
  folly::checkUnixError(rc, 'failed to create pipe');
#ifndef _WIN32
  signal(SIGPIPE, SIG_IGN);
#endif
  ::close(fds[0]);
    
      if (!FLAGS_crash) {
    return 0;
  }