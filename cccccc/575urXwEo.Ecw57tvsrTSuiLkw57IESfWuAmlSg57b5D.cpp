
        
        
    {    if (tmp.handle_data().is_set()) {
      input_handle_shapes_and_types[i].reset(
          new std::vector<std::pair<TensorShapeProto, DataType>>);
      auto& v = *input_handle_shapes_and_types[i];
      for (const auto& x : tmp.handle_data().shape_and_type()) {
        v.emplace_back(x.shape(), x.dtype());
      }
    }
  }
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL.
void DelayedNumpyDecref(void* data, size_t len, void* obj) {
  mutex_lock ml(*DelayedDecrefLock());
  DecrefCache()->push_back(obj);
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class RecordReader;
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
      Entry* entry = nullptr;
  {
    mutex_lock lock{mutex_};
    entry = &cache_[config.ordinal];
    // Release the map lock; the address of 'entry' is stable because
    // std::map guarantees reference stability.
  }
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8, typename Generator9,
    typename Generator10>
internal::CartesianProductHolder10<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8, Generator9,
    Generator10> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8, const Generator9& g9,
        const Generator10& g10) {
  return internal::CartesianProductHolder10<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8, Generator9,
      Generator10>(
      g1, g2, g3, g4, g5, g6, g7, g8, g9, g10);
}
# endif  // GTEST_HAS_COMBINE
    
    template <typename T>
class UniversalTersePrinter {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T>
class UniversalTersePrinter<T&> {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T, size_t N>
class UniversalTersePrinter<T[N]> {
 public:
  static void Print(const T (&value)[N], ::std::ostream* os) {
    UniversalPrinter<T[N]>::Print(value, os);
  }
};
template <>
class UniversalTersePrinter<const char*> {
 public:
  static void Print(const char* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(string(str), os);
    }
  }
};
template <>
class UniversalTersePrinter<char*> {
 public:
  static void Print(char* str, ::std::ostream* os) {
    UniversalTersePrinter<const char*>::Print(str, os);
  }
};
    
      // Returns true iff the test part passed.
  bool passed() const { return type_ == kSuccess; }
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_)};
    return ValuesIn(array);
  }
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    $range i 2..n
    
      // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    
    { private:
  // vector: node_id -> elements
  std::vector<Elem> elem_of_each_node_;
};
    
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
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const HostDeviceVector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds.Size());
    const std::vector<bst_float>& preds_h = preds.HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    const std::vector<bst_float>& labels_h = info.labels_.HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (labels_h[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - labels_h[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    void SimpleCSRSource::LoadBinary(dmlc::Stream* fi) {
  int tmagic;
  CHECK(fi->Read(&tmagic, sizeof(tmagic)) == sizeof(tmagic)) << 'invalid input file format';
  CHECK_EQ(tmagic, kMagic) << 'invalid format, magic number mismatch';
  info.LoadBinary(fi);
  fi->Read(&page_.offset.HostVector());
  fi->Read(&page_.data.HostVector());
}
    
      ~SharedState() {}
    
      // Do some reads and writes to key 'x'
  read_options.snapshot = db->GetSnapshot();
  s = txn->Get(read_options, 'x', &value);
  txn->Put('x', 'x');
    
      // initialize BlockBasedTableOptions
  auto cache = NewLRUCache(1 * 1024 * 1024 * 1024);
  BlockBasedTableOptions bbt_opts;
  bbt_opts.block_size = 32 * 1024;
  bbt_opts.block_cache = cache;
    
    // Abstract handle to particular state of a DB.
// A Snapshot is an immutable object and can therefore be safely
// accessed from multiple threads without any external synchronization.
//
// To Create a Snapshot, call DB::GetSnapshot().
// To Destroy a Snapshot, call DB::ReleaseSnapshot(snapshot).
class Snapshot {
 public:
  // returns Snapshot's sequence number
  virtual SequenceNumber GetSequenceNumber() const = 0;
    }
    
    
    {}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
    namespace rocksdb {
namespace lua {
class LuaStateWrapper {
 public:
  explicit LuaStateWrapper(const std::string& lua_script) {
    lua_state_ = luaL_newstate();
    Init(lua_script, {});
  }
  LuaStateWrapper(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    lua_state_ = luaL_newstate();
    Init(lua_script, libraries);
  }
  lua_State* GetLuaState() const { return lua_state_; }
  ~LuaStateWrapper() { lua_close(lua_state_); }
    }
    }
    }
    
    #pragma once