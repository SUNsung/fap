
        
        // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    // Reads all boxes from the given filename.
// Reads a specific target_page number if >= 0, or all pages otherwise.
// Skips blanks if skip_blanks is true.
// The UTF-8 label of the box is put in texts, and the full box definition as
// a string is put in box_texts, with the corresponding page number in pages.
// Each of the output vectors is optional (may be nullptr).
// Returns false if no boxes are found.
bool ReadAllBoxes(int target_page, bool skip_blanks, const STRING& filename,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
      // Sets the report string to a combined human and machine-readable report
  // string of the error rates.
  // Returns false if there is no data, leaving report unchanged, unless
  // even_if_empty is true.
  static bool ReportString(bool even_if_empty, const Counts& counts,
                           STRING* report);
    
    #ifndef NDEBUG
#define DEBUG_ONLY(...) __VA_ARGS__
#define DEBUG_ONLY_CODE(expr) do { expr; } while (0)
#else
#define DEBUG_ONLY(...)
#define DEBUG_ONLY_CODE(expr) ((void)(0))
#endif
    
        scoped_ptr_t<txn_t> txn;
    scoped_ptr_t<real_superblock_t> superblock;
    acquire_superblock_for_write(1,
                                 write_durability_t::SOFT,
                                 &token,
                                 &txn,
                                 &superblock,
                                 &dummy_interruptor);
    
    class store_t;
class btree_slice_t;
class cache_conn_t;
class cache_t;
class internal_disk_backed_queue_t;
class io_backender_t;
class real_superblock_t;
class sindex_superblock_t;
class superblock_t;
class txn_t;
class cache_balancer_t;
struct rdb_modification_report_t;
    
    // This namespace MUST NOT BE NESTED IN ::testing, or the name look-up
// magic needed for implementing UniversalPrinter won't work.
namespace testing_internal {
    }
    
    // Macros that test for HRESULT failure and success, these are only useful
// on Windows, and rely on Windows SDK macros and APIs to compile.
//
//    * {ASSERT|EXPECT}_HRESULT_{SUCCEEDED|FAILED}(expr)
//
// When expr unexpectedly fails or succeeds, Google Test prints the
// expected result and the actual result with both a human-readable
// string representation of the error, if available, as well as the
// hex result code.
# define EXPECT_HRESULT_SUCCEEDED(expr) \
    EXPECT_PRED_FORMAT1(::testing::internal::IsHRESULTSuccess, (expr))
    
    // This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline void CopyArray(const T(&from)[N], U(*to)[N]) {
  internal::CopyArray(from, N, *to);
}
    
    namespace testing {
namespace internal {
    }
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36>
struct Types36 {
  typedef T1 Head;
  typedef Types35<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36> Tail;
};
    
    #endif

    
    #define GPR_GLOBAL_CONFIG_DEFINE_BOOL(name, default_value, help)         \
  static char g_env_str_##name[] = #name;                                \
  static ::grpc_core::GlobalConfigEnvBool g_env_##name(g_env_str_##name, \
                                                       default_value);   \
  bool gpr_global_config_get_##name() { return g_env_##name.Get(); }     \
  void gpr_global_config_set_##name(bool value) { g_env_##name.Set(value); }
    
    namespace {
    }
    
    
    {}  // namespace grpc_impl

    
    
    { private:
  std::unique_ptr<SubProcess> server_;
};
    
      bool SetUpServer(
      ::grpc::Service* service1, ::grpc::Service* service2,
      AsyncGenericService* generic_service,
      experimental::CallbackGenericService* callback_generic_service,
      int max_message_size = 0) {
    int port = grpc_pick_unused_port_or_die();
    server_address_ << 'localhost:' << port;
    }
    
      Status ResponseStream(ServerContext* context, const EchoRequest* request,
                        ServerWriter<EchoResponse>* writer) override {
    EchoResponse response;
    vector<grpc::string> tokens = split(request->message());
    for (const grpc::string& token : tokens) {
      response.set_message(token);
      writer->Write(response);
    }
    return Status::OK;
  }
    
    
    {    CompareType(method_desc->input_type()->full_name());
    CompareType(method_desc->output_type()->full_name());
  }
    
      send_request_.set_message('hello client streaming');
  std::unique_ptr<ClientAsyncWriter<EchoRequest>> cli_stream(
      stub_->AsyncRequestStream(&cli_ctx_, &recv_response_, cq_.get(), tag(1)));
    
      jint ret = (jint) XGDMatrixCreateFromCSCEx((size_t const *)indptr, (unsigned int const *)indices, (float const *)data, nindptr, nelem, jrow, &result);
  setHandle(jenv, jout, result);
  //release
  jenv->ReleaseLongArrayElements(jindptr, indptr, 0);
  jenv->ReleaseIntArrayElements(jindices, indices, 0);
  jenv->ReleaseFloatArrayElements(jdata, data, 0);
    
      // ------ From cpu quantile histogram -------.
  // percentage threshold for treating a feature as sparse
  // e.g. 0.2 indicates a feature with fewer than 20% nonzeros is considered sparse
  double sparse_threshold;
  // use feature grouping? (default yes)
  int enable_feature_grouping;
  // when grouping features, how many 'conflicts' to allow.
  // conflict is when an instance has nonzero values for two or more features
  // default is 0, meaning features should be strictly complementary
  double max_conflict_rate;
  // when grouping features, how much effort to expend to prevent singleton groups
  // we'll try to insert each feature into existing groups before creating a new group
  // for that feature; to save time, only up to (max_search_group) of existing groups
  // will be considered. If set to zero, ALL existing groups will be examined
  unsigned max_search_group;
    
    #include 'sparse_page_source.h'
    
    
    {
    {#ifndef XGBOOST_USE_CUDA
  EXPECT_EQ(GPUSet::AllVisible(), GPUSet::Empty());
#endif
}
}  // namespace xgboost

    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
      // Sorted column access
  EXPECT_EQ(dmat->GetColDensity(0), 1);
  EXPECT_EQ(dmat->GetColDensity(1), 0.5);
  ASSERT_TRUE(dmat->SingleColBlock());
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    // beta version: NDCG lambda rank
class LambdaRankObjNDCG : public LambdaRankObj {
 protected:
  void GetLambdaWeight(const std::vector<ListEntry> &sorted_list,
                       std::vector<LambdaPair> *io_pairs) override {
    std::vector<LambdaPair> &pairs = *io_pairs;
    float IDCG;  // NOLINT
    {
      std::vector<bst_float> labels(sorted_list.size());
      for (size_t i = 0; i < sorted_list.size(); ++i) {
        labels[i] = sorted_list[i].label;
      }
      std::sort(labels.begin(), labels.end(), std::greater<bst_float>());
      IDCG = CalcDCG(labels);
    }
    if (IDCG == 0.0) {
      for (auto & pair : pairs) {
        pair.weight = 0.0f;
      }
    } else {
      IDCG = 1.0f / IDCG;
      for (auto & pair : pairs) {
        unsigned pos_idx = pair.pos_index;
        unsigned neg_idx = pair.neg_index;
        float pos_loginv = 1.0f / std::log2(pos_idx + 2.0f);
        float neg_loginv = 1.0f / std::log2(neg_idx + 2.0f);
        auto pos_label = static_cast<int>(sorted_list[pos_idx].label);
        auto neg_label = static_cast<int>(sorted_list[neg_idx].label);
        bst_float original =
            ((1 << pos_label) - 1) * pos_loginv + ((1 << neg_label) - 1) * neg_loginv;
        float changed  =
            ((1 << neg_label) - 1) * pos_loginv + ((1 << pos_label) - 1) * neg_loginv;
        bst_float delta = (original - changed) * IDCG;
        if (delta < 0.0f) delta = - delta;
        pair.weight *= delta;
      }
    }
  }
  inline static bst_float CalcDCG(const std::vector<bst_float> &labels) {
    double sumdcg = 0.0;
    for (size_t i = 0; i < labels.size(); ++i) {
      const auto rel = static_cast<unsigned>(labels[i]);
      if (rel != 0) {
        sumdcg += ((1 << rel) - 1) / std::log2(static_cast<bst_float>(i + 2));
      }
    }
    return static_cast<bst_float>(sumdcg);
  }
};
    
    namespace aria2 {
    }
    
      virtual void startup() CXX11_OVERRIDE;
    
    #endif // D_DHT_ROUTING_TABLE_H

    
    
    {} // namespace aria2
    
    public:
  DHTTokenTracker();
    
        std::vector<AddrEntry>::iterator find(const std::string& addr);
    
      // Updating with different content will reconfigure.
  get().update({{'data', '{\'options\':{}}'}});
  EXPECT_EQ(placebo->configures, 2U);
  get().update({{'data', '{\'options\':{}}'}});
  EXPECT_EQ(placebo->configures, 2U);
    
    // Get an example generate config with one static source name to JSON content.
std::map<std::string, std::string> getTestConfigMap(const std::string& file);
    
    Expected<std::string, DatabaseError> Database::getStringOr(
    const std::string& domain,
    const std::string& key,
    const std::string& default_value) {
  auto result = getString(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    template <typename StorageType>
class InMemoryStorage final {
 public:
  void put(const std::string& key, const StorageType value);
  Expected<StorageType, DatabaseError> get(const std::string& key) const;
  std::vector<std::string> getKeys(const std::string& prefix = '') const;
    }
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putInt32(
    const std::string& domain, const std::string& key, const int32_t value) {
  int32_t tmp_value = htonl(value);
  uint16_t tag = htons(kIntTag);
  std::string buffer;
  buffer.reserve(sizeof(int32_t) + sizeof(int8_t));
  buffer.append(reinterpret_cast<const char*>(&tmp_value), 4);
  buffer.append(reinterpret_cast<const char*>(&tag), 2);
  return putString(domain, key, buffer);
}
    
      ExpectedSuccess<DatabaseError> destroyDB() override;
  ExpectedSuccess<DatabaseError> open() override;
    
    
    {
    {    // Set the flag info from the internal info kept by Gflags, except for
    // the stored description. Gflag keeps an 'unknown' value if the flag
    // was declared without a definition.
    flags[flag.name] = {flag.type,
                        instance().flags_.at(flag.name).description,
                        flag.default_value,
                        flag.current_value,
                        instance().flags_.at(flag.name)};
  }
  for (const auto& flag : instance().custom_) {
    flags[flag.first] = {'string', '', '', flag.second, {}};
  }
  return flags;
}
    
      /// Use the SQL implementation to parse a query string and return details
  /// (name, type) about the columns.
  virtual Status getQueryColumns(const std::string& query,
                                 TableColumns& columns) const = 0;