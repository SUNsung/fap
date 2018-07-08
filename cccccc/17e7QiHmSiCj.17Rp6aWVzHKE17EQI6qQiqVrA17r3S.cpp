
        
        TEST(PartialRunMgrFindOrCreate, NewCreate) {
  // Test that PartialRunMgr creates a new CancellationManager for new steps.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  // FindOrCreate on a new step should return a new cancellation_manager.
  int new_step_id = 2;
  CancellationManager* new_cancellation_manager;
  partial_run_mgr.FindOrCreate(new_step_id, &new_cancellation_manager);
  EXPECT_NE(cancellation_manager, new_cancellation_manager);
}
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::pmul(internal::psub(one, y), y);
  }
};
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    Status MatMulGradCommon(const string& opname, const string& attr_adj_x,
                        const string& attr_adj_y, const AttrSlice& attrs,
                        FunctionDef* g) {
  DataType T;
  TF_RETURN_IF_ERROR(GetNodeAttr(attrs, 'T', &T));
  if (T == DT_COMPLEX64 || T == DT_COMPLEX128) {
    return errors::Unimplemented(
        'MatMul gradient for complex is not supported yet.');
  }
  bool ta;
  bool tb;
  TF_RETURN_IF_ERROR(GetNodeAttr(attrs, attr_adj_x, &ta));
  TF_RETURN_IF_ERROR(GetNodeAttr(attrs, attr_adj_y, &tb));
  if (!ta && !tb) {
    return MatMulGradHelper(g, opname, attr_adj_x, attr_adj_y, 'dz', false, 'y',
                            true, 'x', true, 'dz', false);
  }
  if (!ta && tb) {
    return MatMulGradHelper(g, opname, attr_adj_x, attr_adj_y, 'dz', false, 'y',
                            false, 'dz', true, 'x', false);
  }
  if (ta && !tb) {
    return MatMulGradHelper(g, opname, attr_adj_x, attr_adj_y, 'y', false, 'dz',
                            true, 'x', false, 'dz', false);
  }
  CHECK(ta && tb);
  return MatMulGradHelper(g, opname, attr_adj_x, attr_adj_y, 'y', true, 'dz',
                          true, 'dz', true, 'x', true);
}
    
    
    {    server_data->thread_pool.reset(
        new thread::ThreadPool(Env::Default(), 'test_server', 1));
    server_data->thread_pool->Schedule(
        [server_data, server_start_delay_micros]() {
          Env::Default()->SleepForMicroseconds(server_start_delay_micros);
          server_data->server->RunServer(server_data->port);
        });
  }
    
    inline ZlibCompressionOptions ZlibCompressionOptions::GZIP() {
  ZlibCompressionOptions options = ZlibCompressionOptions();
  options.window_bits = options.window_bits + 16;
  return options;
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class Tesseract;
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
    #include 'publictypes.h'
#include 'elst.h'
#include 'strngs.h'
    
    namespace tesseract {
    }
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
      // Sets up a Clusterer for mftraining on a single shape_id.
  // Call FreeClusterer on the return value after use.
  CLUSTERER* SetupForClustering(const ShapeTable& shape_table,
                                const FEATURE_DEFS_STRUCT& feature_defs,
                                int shape_id, int* num_samples);
    
    // Trainer class for LSTM networks. Most of the effort is in creating the
// ideal target outputs from the transcription. A box file is used if it is
// available, otherwise estimates of the char widths from the unicharset are
// used to guide a DP search for the best fit to the transcription.
class LSTMTrainer : public LSTMRecognizer {
 public:
  LSTMTrainer();
  // Callbacks may be null, in which case defaults are used.
  LSTMTrainer(FileReader file_reader, FileWriter file_writer,
              CheckPointReader checkpoint_reader,
              CheckPointWriter checkpoint_writer,
              const char* model_base, const char* checkpoint_name,
              int debug_interval, int64_t max_memory);
  virtual ~LSTMTrainer();
    }
    
    // Sets up the network for training. Initializes weights using weights of
// scale `range` picked according to the random number generator `randomizer`.
int WeightMatrix::InitWeightsFloat(int no, int ni, bool use_adam,
                                   float weight_range, TRand* randomizer) {
  int_mode_ = false;
  wf_.Resize(no, ni, 0.0);
  if (randomizer != nullptr) {
    for (int i = 0; i < no; ++i) {
      for (int j = 0; j < ni; ++j) {
        wf_[i][j] = randomizer->SignedRand(weight_range);
      }
    }
  }
  use_adam_ = use_adam;
  InitBackward();
  return ni * no;
}
    
    
DMatrix* DMatrix::Load(const std::string& uri,
                       bool silent,
                       bool load_row_split,
                       const std::string& file_format) {
  std::string fname, cache_file;
  size_t dlm_pos = uri.find('#');
  if (dlm_pos != std::string::npos) {
    cache_file = uri.substr(dlm_pos + 1, uri.length());
    fname = uri.substr(0, dlm_pos);
    CHECK_EQ(cache_file.find('#'), std::string::npos)
        << 'Only one `#` is allowed in file path for cache file specification.';
    if (load_row_split) {
      std::ostringstream os;
      std::vector<std::string> cache_shards = common::Split(cache_file, ':');
      for (size_t i = 0; i < cache_shards.size(); ++i) {
        size_t pos = cache_shards[i].rfind('.');
        if (pos == std::string::npos) {
          os << cache_shards[i]
             << '.r' << rabit::GetRank()
             << '-' <<  rabit::GetWorldSize();
        } else {
          os << cache_shards[i].substr(0, pos)
             << '.r' << rabit::GetRank()
             << '-' <<  rabit::GetWorldSize()
             << cache_shards[i].substr(pos, cache_shards[i].length());
        }
        if (i + 1 != cache_shards.size()) {
          os << ':';
        }
      }
      cache_file = os.str();
    }
  } else {
    fname = uri;
  }
  int partid = 0, npart = 1;
  if (load_row_split) {
    partid = rabit::GetRank();
    npart = rabit::GetWorldSize();
  } else {
    // test option to load in part
    npart = dmlc::GetEnv('XGBOOST_TEST_NPART', 1);
  }
    }
    
    bool SparsePageSource::Next() {
  // doing clock rotation over shards.
  if (page_ != nullptr) {
    size_t n = prefetchers_.size();
    prefetchers_[(clock_ptr_ + n - 1) % n]->Recycle(&page_);
  }
  if (prefetchers_[clock_ptr_]->Next(&page_)) {
    page_->base_rowid = base_rowid_;
    base_rowid_ += page_->Size();
    // advance clock
    clock_ptr_ = (clock_ptr_ + 1) % prefetchers_.size();
    return true;
  } else {
    return false;
  }
}
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    
    {
    {}  // namespace common
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
    
    
namespace xgboost {
    }