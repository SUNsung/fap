
        
        
    {}  // namespace tensorflow

    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/framework/types.pb.h'
#include 'tensorflow/core/lib/core/status.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace stream_executor

    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      bool IsFirstLine = true;
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
    std::string Demangle::getNodeTreeAsString(NodePointer Root) {
  DemanglerPrinter Printer;
  printNode(Printer, Root, 0);
  return std::move(Printer).str();
}
    
      uint32_t n = initial_n;
  int delta = 0;
  int bias = initial_bias;
    
    void AutolinkExtractJobAction::anchor() {}
    
      // Constructs a Message from a C-string.
  explicit Message(const char* str) : ss_(new ::std::stringstream) {
    *ss_ << str;
  }
    
    
    
    namespace testing {
    }
    
      // Returns true iff the test part non-fatally failed.
  bool nonfatally_failed() const { return type_ == kNonFatalFailure; }
    
    // Ternary predicate assertion macros.
#define EXPECT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_FATAL_FAILURE_)
    
      // Returns true iff the path is ''.
  bool IsEmpty() const { return pathname_.empty(); }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
class ValueArray45 {
 public:
  ValueArray45(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
      T42 v42, T43 v43, T44 v44, T45 v45) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
      v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
      v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
      v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23),
      v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29),
      v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35),
      v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40), v41_(v41),
      v42_(v42), v43_(v43), v44_(v44), v45_(v45) {}
    }
    
      template <GTEST_6_TYPENAMES_(U)>
  tuple& operator=(const GTEST_6_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    
    {  // Returns the smallest prime number greater than p; or returns -1
  // if the next prime is beyond the capacity of the table.
  virtual int GetNextPrime(int p) const = 0;
};
    
    std::string show(SrcLoc);
    
    
    {  static void
  StringInsert(std::vector<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.push_back(value);
  }
  static void
  StringInsert(boost::container::flat_set<std::string>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string, stdltistr>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.insert(value);
  }
  static void StringInsert(std::map<std::string, std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(std::map<std::string, std::string,
                           stdltistr> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(hphp_string_imap<std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                     const std::string& iniStr,
                                     std::string& with_includes);
};
    
    #ifndef incl_HPHP_OUTPUT_FILE_H_
#define incl_HPHP_OUTPUT_FILE_H_