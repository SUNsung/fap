
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      virtual string Code();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      void Compute(OpKernelContext* context) override {
    // Output a scalar string.
    Tensor* output_tensor = nullptr;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, TensorShape(), &output_tensor));
    auto output = output_tensor->scalar<string>();
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    bool TfPyInt_Check(PyObject* object) { return PyInt_Check(object); }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
      // Returns the Python exception type corresponding to `code`. Init() must be
  // called before using this function. `code` should not be TF_OK.
  static PyObject* Lookup(TF_Code code);
    
    
    {
    {}  // namespace swig
}  // namespace tensorflow

    
    namespace cuda {
    }
    
    #include 'tensorflow/stream_executor/cuda/cuda_driver.h'
#include 'tensorflow/stream_executor/cuda/cuda_stream.h'
#include 'tensorflow/stream_executor/event.h'
#include 'tensorflow/stream_executor/lib/status.h'
    
    StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
      // If we have a preposition, we can chop off type information at the
  // beginning of the name.
  if (getPartOfSpeech(firstWord) == PartOfSpeech::Preposition &&
      newName.size() > firstWord.size()) {
    // If the preposition was 'by' and is followed by a gerund, also remove
    // 'by'.
    if (firstWord == 'By') {
      StringRef nextWord = camel_case::getFirstWord(
                             newName.substr(firstWord.size()));
      if (nextWord.endswith('ing')) {
        return toLowercaseWord(newName.substr(firstWord.size()), scratch);
      }
    }
    }
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    
    {    auto newNode = factory.createNode(node->getKind());
    newNode->addChild(newContext, factory);
    for (unsigned i = 1, n = node->getNumChildren(); i != n; ++i)
      newNode->addChild(node->getChild(i), factory);
    return newNode;
  }
      
  case Demangle::Node::Kind::Extension: {
    // Strip generic arguments from the extended type.
    if (node->getNumChildren() < 2)
      return node;
    
    auto newExtended = stripGenericArgsFromContextNode(node->getChild(1),
                                                       factory);
    if (newExtended == node->getChild(1)) return node;
    
    auto newNode = factory.createNode(Node::Kind::Extension);
    newNode->addChild(node->getChild(0), factory);
    newNode->addChild(newExtended, factory);
    if (node->getNumChildren() == 3)
      newNode->addChild(node->getChild(2), factory);
    return newNode;
  }
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
namespace nwapi {
    }
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
      std::string pac_url = params->pac_url.get() ? *params->pac_url : '';
  if (!pac_url.empty()) {
    if (pac_url == '<direct>')
      config = net::ProxyConfigWithAnnotation::CreateDirect();
    else if (pac_url == '<auto>')
      config = net::ProxyConfigWithAnnotation(net::ProxyConfig::CreateAutoDetect(), TRAFFIC_ANNOTATION_FOR_TESTS);
    else
      config = net::ProxyConfigWithAnnotation(net::ProxyConfig::CreateFromCustomPacURL(GURL(pac_url)), TRAFFIC_ANNOTATION_FOR_TESTS);
  } else {
    std::string proxy_config;
    net::ProxyConfig pc;
    EXTENSION_FUNCTION_VALIDATE(args_->GetString(0, &proxy_config));
    pc.proxy_rules().ParseFromString(proxy_config);
    config = net::ProxyConfigWithAnnotation(pc, TRAFFIC_ANNOTATION_FOR_TESTS);
  }
    
      protected:
    ~NwScreenStopMonitorFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.stopMonitor', UNKNOWN)
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    
    {}  // namespace
    
    namespace tesseract {
    }
    
    #ifndef PIN_JOINT_BULLET_H
#define PIN_JOINT_BULLET_H
    
    	ADD_PROPERTY(PropertyInfo(Variant::BOOL, 'refuse_new_connections'), 'set_refuse_new_connections', 'is_refusing_new_connections');
	ADD_PROPERTY(PropertyInfo(Variant::INT, 'transfer_mode', PROPERTY_HINT_ENUM, 'Unreliable,Unreliable Ordered,Reliable'), 'set_transfer_mode', 'get_transfer_mode');
    
    void Carver::start() {
  // If status_ is not Ok, the creation of our tmp FS failed
  if (!status_.ok()) {
    LOG(WARNING) << 'Carver has not been properly constructed';
    return;
  }
  for (const auto& p : carvePaths_) {
    // Ensure the file is a flat file on disk before carving
    PlatformFile pFile(p, PF_OPEN_EXISTING | PF_READ);
    if (!pFile.isValid() || isDirectory(p)) {
      VLOG(1) << 'File does not exist on disk or is subdirectory: ' << p;
      continue;
    }
    Status s = carve(p);
    if (!s.ok()) {
      VLOG(1) << 'Failed to carve file ' << p << ' ' << s.getMessage();
    }
  }
    }
    
      /**
   * @brief Get the performance stats for a specific query, by name
   *
   * @param name is the name of the query which you'd like to retrieve
   * @param predicate is a function which accepts a const reference to a
   * QueryPerformance struct. predicate will be called on name's related
   * QueryPerformance struct, if it exists.
   *
   * @code{.cpp}
   *   Config::get().getPerformanceStats(
   *     'my_awesome_query',
   *     [](const QueryPerformance& query) {
   *       // use 'query' here
   *     });
   * @endcode
   */
  void getPerformanceStats(
      const std::string& name,
      std::function<void(const QueryPerformance& query)> predicate) const;
    
    Status OptionsConfigParserPlugin::update(const std::string& source,
                                         const ParserConfig& config) {
  auto co = config.find('options');
  if (co == config.end()) {
    return Status();
  }
    }
    
    TEST_F(OptionsConfigParserPluginTests, test_unknown_option) {
  Config c;
  std::map<std::string, std::string> update;
    }