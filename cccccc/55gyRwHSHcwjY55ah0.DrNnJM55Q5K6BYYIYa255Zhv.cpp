
        
        void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
      // Support dtype(bfloat16)
  if (PyDict_SetItemString(PyBfloat16_Type.tp_dict, 'dtype',
                           reinterpret_cast<PyObject*>(&NPyBfloat16_Descr)) <
      0) {
    return false;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
    class LLVM_LIBRARY_VISIBILITY GenericUnix : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const AutolinkExtractJobAction &job,
                                     const JobContext &context) const override;
    }
    
    extern 'C' {
  PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
    PyObject *module = PyModule_Create(&_module);
#else
    PyObject *module = Py_InitModule3(
        const_cast<char*>(kModuleName),
        NULL,
        const_cast<char*>(kModuleDocstring));
#endif
    if (module == NULL) {
      return INITFUNC_ERRORVAL;
    }
    }
    }
    
    bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    void FileGenerator::GenerateHeader(io::Printer *printer) {
  std::set<string> headers;
  // Generated files bundled with the library get minimal imports, everything
  // else gets the wrapper so everything is usable.
  if (is_bundled_proto_) {
    headers.insert('GPBRootObject.h');
    headers.insert('GPBMessage.h');
    headers.insert('GPBDescriptor.h');
  } else {
    headers.insert('GPBProtocolBuffers.h');
  }
  PrintFileRuntimePreamble(printer, headers);
    }
    
    
    {  input_for_decode =
      'longFieldNameIsLooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong1000';
  desired_output_for_decode =
      'long_field_name_is_looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong_1000';
  expected = string('\x04\xA5\xA4\xA2\xBF\x1F\x0E\x84\x0', 9);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
}
    
      char* temp_endptr;
  double result = strtod(text, &temp_endptr);
  if (original_endptr != NULL) *original_endptr = temp_endptr;
  if (*temp_endptr != '.') return result;
    
      static void clearData6();
    
      void onTimeout(const std::shared_ptr<DHTNode>& node);
    
    void DHTRoutingTable::setTaskFactory(DHTTaskFactory* taskFactory)
{
  taskFactory_ = taskFactory;
}
    
      Time serializedTime_;
    
    namespace aria2 {
    }
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    
    {  int ret = x;
  return ret;
}
    
    int ObjectExtendedInfo60D::object_id(const std::uint8_t* bytes,
                                     int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }
    
    class SpeedLimitTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    speed_limit_.Clear();
    for (int i = 0; i < 100; ++i) {
      std::pair<double, double> sp;
      sp.first = i * 1.0;
      sp.second = (i % 2 == 0) ? 5.0 : 10.0;
      speed_limit_.AppendSpeedLimit(sp.first, sp.second);
    }
  }
    }
    
    // config detail: {'name': 'commanded_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 23,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Accelrpt68::commanded_value(const std::uint8_t* bytes,
                                   int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
      /**
   * Returns a random uint32_t in [0, max) given a specific RNG.
   * If max == 0, returns 0.
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static uint32_t rand32(uint32_t max, RNG&& rng) {
    return rand32(0, max, rng);
  }
    
    #include <boost/regex/pending/unicode_iterator.hpp>
    
    /**
 * VirtualExecutor implements a light-weight view onto existing Executor.
 *
 * Multiple VirtualExecutors can be backed by a single Executor.
 *
 * VirtualExecutor's destructor blocks until all tasks scheduled through it are
 * complete. Executor's destructor also blocks until all VirtualExecutors
 * backed by it are released.
 */
class VirtualExecutor : public DefaultKeepAliveExecutor {
  auto wrapFunc(Func f) {
    class FuncAndKeepAlive {
     public:
      FuncAndKeepAlive(Func&& f, VirtualExecutor* executor)
          : keepAlive_(getKeepAliveToken(executor)), f_(std::move(f)) {}
    }
    }
    }
    
    /**
 * This functions is an extension point when FOLLY_HAVE_WEAK_SYMBOLS is true.
 * There is a default no-op implementation provided which can be overrided by
 * linking in a library which provides its own definition.
 *
 * @param codecType   The type of the codec for this counter.
 * @param codecName   The name of the codec for this counter. If the codecName
 *                    is empty it should be defaulted using the codecType.
 * @param level       Optionally the level used to construct the codec.
 * @param key         The key of the counter.
 * @param counterType The type of the counter.
 * @returns           A function to increment the counter for the given key and
 *                    type. It may be an empty folly::Function.
 */
folly::Function<void(double)> makeCompressionCounterHandler(
    folly::io::CodecType codecType,
    folly::StringPiece codecName,
    folly::Optional<int> level,
    CompressionCounterKey key,
    CompressionCounterType counterType);
    
      std::sort(cpus.begin(), cpus.end(), [&](size_t lhs, size_t rhs) -> bool {
    // sort first by equiv class of cache with highest index,
    // direction doesn't matter.  If different cpus have
    // different numbers of caches then this code might produce
    // a sub-optimal ordering, but it won't crash
    auto& lhsEquiv = equivClassesByCpu[lhs];
    auto& rhsEquiv = equivClassesByCpu[rhs];
    for (ssize_t i = ssize_t(std::min(lhsEquiv.size(), rhsEquiv.size())) - 1;
         i >= 0;
         --i) {
      auto idx = size_t(i);
      if (lhsEquiv[idx] != rhsEquiv[idx]) {
        return lhsEquiv[idx] < rhsEquiv[idx];
      }
    }
    }
    
    
    {  T* get() const {
    return p_;
  }
  T* operator->() const {
    return p_;
  }
  explicit operator bool() const {
    return p_ == nullptr ? false : true;
  }
  bool operator==(const counted_ptr<T, Atom>& p) const {
    return get() == p.get();
  }
};