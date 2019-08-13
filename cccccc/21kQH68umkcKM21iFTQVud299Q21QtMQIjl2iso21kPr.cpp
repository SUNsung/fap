
        
          // Set trust values for certificate.
  // |trust_bits| should be a bit field of TRUST* values from NSSCertDatabase.
  // Returns true on success or false on failure.
  bool SetCertTrust(CERTCertificate* cert,
                    net::CertType type,
                    net::NSSCertDatabase::TrustBits trust_bits);
    
    JavascriptEnvironment::~JavascriptEnvironment() = default;
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('createArchive', &Archive::Create);
  dict.SetMethod('initAsarSupport', &InitAsarSupport);
}
    
    bool CertificateManagerModel::ImportCACerts(
    const net::ScopedCERTCertificateList& certificates,
    net::NSSCertDatabase::TrustBits trust_bits,
    net::NSSCertDatabase::ImportCertFailureList* not_imported) {
  return cert_db_->ImportCACerts(certificates, trust_bits, not_imported);
}
    
      template <typename T>
  bool GetNext(T* out) {
    if (next_ >= info_->Length()) {
      insufficient_arguments_ = true;
      return false;
    }
    v8::Local<v8::Value> val = (*info_)[next_];
    bool success = ConvertFromV8(isolate_, val, out);
    if (success)
      next_++;
    return success;
  }
    
    // Like Dictionary, but stores object in persistent handle so you can keep it
// safely on heap.
class PersistentDictionary : public Dictionary {
 public:
  PersistentDictionary();
  PersistentDictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
  PersistentDictionary(const PersistentDictionary& other);
  ~PersistentDictionary() override;
    }
    
      static Promise Create(v8::Isolate* isolate);
  static Promise Create();
    
    // A v8::Persistent handle to a V8 value which destroys and clears the
// underlying handle on destruction.
template <typename T>
class ScopedPersistent {
 public:
  ScopedPersistent() : isolate_(v8::Isolate::GetCurrent()) {}
    }
    
     private:
  friend struct internal::Destroyable;
    
    #include 'base/bind.h'
#include 'base/debug/leak_annotations.h'
#include 'base/logging.h'
#include 'content/public/browser/browser_thread.h'
#include 'shell/browser/ui/views/global_menu_bar_x11.h'
    
        typedef decltype(check<C>(0)) type;
    
        cvSVD( (CvMat*)&F, &W, &U, &V, CV_SVD_U_T + CV_SVD_V_T );
    W.data.db[8] = 0.;
    cvGEMM( &U, &W, 1, 0, 0, &W, CV_GEMM_A_T );
    cvMatMul( &W, &V, &F );
    
            if (inputs_arr.depth() == CV_16S)
        {
            forward_fallback(inputs_arr, outputs_arr, internals_arr);
            return;
        }
    
        size_t srcTotal = total(srcShape);
    size_t dstTotal = total(dstShape);
    CV_Assert(dstTotal != 0);
    
    
// Default command line args
vector<String> img_names;
bool preview = false;
bool try_cuda = false;
double work_megapix = 0.6;
double seam_megapix = 0.1;
double compose_megapix = -1;
float conf_thresh = 1.f;
#ifdef HAVE_OPENCV_XFEATURES2D
string features_type = 'surf';
#else
string features_type = 'orb';
#endif
string matcher_type = 'homography';
string estimator_type = 'homography';
string ba_cost_func = 'ray';
string ba_refine_mask = 'xxxxx';
bool do_wave_correct = true;
WaveCorrectKind wave_correct = detail::WAVE_CORRECT_HORIZ;
bool save_graph = false;
std::string save_graph_to;
string warp_type = 'spherical';
int expos_comp_type = ExposureCompensator::GAIN_BLOCKS;
int expos_comp_nr_feeds = 1;
int expos_comp_nr_filtering = 2;
int expos_comp_block_size = 32;
float match_conf = 0.3f;
string seam_find_type = 'gc_color';
int blend_type = Blender::MULTI_BAND;
int timelapse_type = Timelapser::AS_IS;
float blend_strength = 5;
string result_name = 'result.jpg';
bool timelapse = false;
int range_width = -1;
    
            vector<uchar> inliers;
        Mat aff_est = estimateAffinePartial2D(fpts, tpts, inliers, method);
    
        try
    {
        lograt(&prat, RATIONAL_PRECISION);
    }
    catch (uint32_t error)
    {
        destroyrat(prat);
        throw(error);
    }
    
            bool IsZero() const;
    
                bool IsEnUsDigit(const wchar_t digit) const
            {
                if (digit >= L'0' && digit <= L'9')
                {
                    return true;
                }
                return false;
            }
    
    //
// App.xaml.cpp
// Implementation of the App class.
//
    
    int CHistoryCollector::AddCommand(_In_ const std::shared_ptr<IExpressionCommand>& spCommand)
{
    if (m_spCommands == nullptr)
    {
        m_spCommands = std::make_shared<CalculatorVector<std::shared_ptr<IExpressionCommand>>>();
    }
    }
    
    namespace CalcEngine
{
    Number::Number() noexcept
        : Number(1, 0, { 0 })
    {
    }
    }
    
    TEST(Tree, DumpJson) {
  auto tree = ConstructTree();
  FeatureMap fmap;
  auto str = tree.DumpModel(fmap, true, 'json');
  size_t n_leaves = 0;
  size_t iter = 0;
  while ((iter = str.find('leaf', iter + 1)) != std::string::npos) {
    n_leaves++;
  }
  ASSERT_EQ(n_leaves, 4);
    }
    
    
    {
    {}  // namespace common
}  // namespace xgboost
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
      /**
  * \brief Column sampler constructor.
  * \note This constructor synchronizes the RNG seed across processes.
  */
  ColumnSampler() {
    uint32_t seed = common::GlobalRandom()();
    rabit::Broadcast(&seed, sizeof(seed), 0);
    rng_.seed(seed);
  }
    
      /**
   * @brief Returns the process's ID
   *
   * Returns the associated process' process ID (on POSIX, pid() and
   * nativeHandle() do not differ).
   *
   * NOTE: In most situations, this should ideally not be used on Windows when
   * dealing with tracking process lifetimes.
   */
  int pid() const;
    
    #pragma once
    
        files_to_carve_dir_ = working_dir_ / 'files_to_carve';
    fs::create_directories(files_to_carve_dir_);
    
    void Schedule::remove(const std::string& pack, const std::string& source) {
  auto new_end = std::remove_if(
      packs_.begin(), packs_.end(), [pack, source](const PackRef& p) {
        if (p->getName() == pack &&
            (p->getSource() == source || source == '')) {
          Config::get().removeFiles(source + FLAGS_pack_delimiter +
                                    p->getName());
          return true;
        }
        return false;
      });
  packs_.erase(new_end, packs_.end());
}
    
    boost::filesystem::path const& getTestConfigDirectory();
    
    
    {} // namespace osquery

    
    Expected<std::string, DatabaseError> RocksdbDatabase::getString(
    const std::string& domain, const std::string& key) {
  auto result = getRawBytes(domain, key);
  if (result) {
    std::string result_str = result.take();
    if (BOOST_UNLIKELY(validateInt32StorageBuffer(result_str))) {
      auto type_error = createError(RocksdbError::UnexpectedValueType)
                        << 'Fetching string as integer';
      LOG(ERROR) << type_error.getMessage().c_str();
      assert(false);
      return createError(DatabaseError::KeyNotFound, std::move(type_error));
    }
    return result_str;
  }
  return result.takeError();
}