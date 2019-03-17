
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
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
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
     protected:
  ~NwObjDestroyFunction() override;
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
    /*!
@brief Fills a Blob with coefficients for bilinear interpolation.
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    		static const unsigned int ROWS = 4;
		static const unsigned int COLUMNS = 4;
		static const unsigned int PIXELS = ROWS * COLUMNS;
    
    			float fDeltaL = a_frgbaSourcePixel.fA * fLuma1 - a_fDecodedAlpha * fLuma2;
			float fDeltaCr = a_frgbaSourcePixel.fA * fChromaR1 - a_fDecodedAlpha * fChromaR2;
			float fDeltaCb = a_frgbaSourcePixel.fA * fChromaB1 - a_fDecodedAlpha * fChromaB2;
    
    						// pre-compute decoded pixels for each selector
						ColorFloatRGBA afrgbaSelectors[SELECTORS];
						assert(SELECTORS == 4);
						afrgbaSelectors[0] = (frgbaColor + s_aafCwTable[uiCW][0]).ClampRGB();
						afrgbaSelectors[1] = (frgbaColor + s_aafCwTable[uiCW][1]).ClampRGB();
						afrgbaSelectors[2] = (frgbaColor + s_aafCwTable[uiCW][2]).ClampRGB();
						afrgbaSelectors[3] = (frgbaColor + s_aafCwTable[uiCW][3]).ClampRGB();
    
      typedef enum  AF_Blue_Stringset_
  {
    AF_BLUE_STRINGSET_ADLM = 0,
    AF_BLUE_STRINGSET_ARAB = 5,
    AF_BLUE_STRINGSET_ARMN = 9,
    AF_BLUE_STRINGSET_AVST = 16,
    AF_BLUE_STRINGSET_BAMU = 19,
    AF_BLUE_STRINGSET_BENG = 22,
    AF_BLUE_STRINGSET_BUHD = 27,
    AF_BLUE_STRINGSET_CAKM = 32,
    AF_BLUE_STRINGSET_CANS = 36,
    AF_BLUE_STRINGSET_CARI = 43,
    AF_BLUE_STRINGSET_CHER = 46,
    AF_BLUE_STRINGSET_COPT = 53,
    AF_BLUE_STRINGSET_CPRT = 58,
    AF_BLUE_STRINGSET_CYRL = 63,
    AF_BLUE_STRINGSET_DEVA = 69,
    AF_BLUE_STRINGSET_DSRT = 75,
    AF_BLUE_STRINGSET_ETHI = 80,
    AF_BLUE_STRINGSET_GEOR = 83,
    AF_BLUE_STRINGSET_GEOK = 90,
    AF_BLUE_STRINGSET_GLAG = 97,
    AF_BLUE_STRINGSET_GOTH = 102,
    AF_BLUE_STRINGSET_GREK = 105,
    AF_BLUE_STRINGSET_GUJR = 112,
    AF_BLUE_STRINGSET_GURU = 118,
    AF_BLUE_STRINGSET_HEBR = 124,
    AF_BLUE_STRINGSET_KALI = 128,
    AF_BLUE_STRINGSET_KHMR = 134,
    AF_BLUE_STRINGSET_KHMS = 140,
    AF_BLUE_STRINGSET_KNDA = 143,
    AF_BLUE_STRINGSET_LAO = 146,
    AF_BLUE_STRINGSET_LATN = 152,
    AF_BLUE_STRINGSET_LATB = 159,
    AF_BLUE_STRINGSET_LATP = 166,
    AF_BLUE_STRINGSET_LISU = 173,
    AF_BLUE_STRINGSET_MLYM = 176,
    AF_BLUE_STRINGSET_MYMR = 179,
    AF_BLUE_STRINGSET_NKOO = 184,
    AF_BLUE_STRINGSET_NONE = 189,
    AF_BLUE_STRINGSET_OLCK = 190,
    AF_BLUE_STRINGSET_ORKH = 193,
    AF_BLUE_STRINGSET_OSGE = 196,
    AF_BLUE_STRINGSET_OSMA = 204,
    AF_BLUE_STRINGSET_SAUR = 207,
    AF_BLUE_STRINGSET_SHAW = 210,
    AF_BLUE_STRINGSET_SINH = 216,
    AF_BLUE_STRINGSET_SUND = 220,
    AF_BLUE_STRINGSET_TAML = 224,
    AF_BLUE_STRINGSET_TAVT = 227,
    AF_BLUE_STRINGSET_TELU = 230,
    AF_BLUE_STRINGSET_TFNG = 233,
    AF_BLUE_STRINGSET_THAI = 236,
    AF_BLUE_STRINGSET_VAII = 244,
    af_blue_2_1 = 247,
#ifdef AF_CONFIG_OPTION_CJK
    AF_BLUE_STRINGSET_HANI = af_blue_2_1 + 0,
    af_blue_2_1_1 = af_blue_2_1 + 2,
#ifdef AF_CONFIG_OPTION_CJK_BLUE_HANI_VERT
    af_blue_2_1_2 = af_blue_2_1_1 + 2,
#else
    af_blue_2_1_2 = af_blue_2_1_1 + 0,
#endif /* AF_CONFIG_OPTION_CJK_BLUE_HANI_VERT */
    af_blue_2_2 = af_blue_2_1_2 + 1,
#else
    af_blue_2_2 = af_blue_2_1 + 0,
#endif /* AF_CONFIG_OPTION_CJK                */
    }
    
    #ifndef VPX_DSP_TXFM_COMMON_H_
#define VPX_DSP_TXFM_COMMON_H_
    
      if (Dir2 == dLeftToRight)
  {
    while (op2->Next->Pt.X <= Pt.X && 
      op2->Next->Pt.X >= op2->Pt.X && op2->Next->Pt.Y == Pt.Y)
        op2 = op2->Next;
    if (DiscardLeft && (op2->Pt.X != Pt.X)) op2 = op2->Next;
    op2b = DupOutPt(op2, !DiscardLeft);
    if (op2b->Pt != Pt)
    {
      op2 = op2b;
      op2->Pt = Pt;
      op2b = DupOutPt(op2, !DiscardLeft);
    };
  } else
  {
    while (op2->Next->Pt.X >= Pt.X && 
      op2->Next->Pt.X <= op2->Pt.X && op2->Next->Pt.Y == Pt.Y) 
        op2 = op2->Next;
    if (!DiscardLeft && (op2->Pt.X != Pt.X)) op2 = op2->Next;
    op2b = DupOutPt(op2, DiscardLeft);
    if (op2b->Pt != Pt)
    {
      op2 = op2b;
      op2->Pt = Pt;
      op2b = DupOutPt(op2, DiscardLeft);
    };
  };
    
    #define FASTLZ_VERSION_MAJOR     0
#define FASTLZ_VERSION_MINOR     0
#define FASTLZ_VERSION_REVISION  0
    
    #define MIN16(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 16-bit value.   */
#define MAX16(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 16-bit value.   */
#define MIN32(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 32-bit value.   */
#define MAX32(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 32-bit value.   */
#define IMIN(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum int value.   */
#define IMAX(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum int value.   */
#define UADD32(a,b) ((a)+(b))
#define USUB32(a,b) ((a)-(b))
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    SEXP XGBoosterBoostOneIter_R(SEXP handle, SEXP dtrain, SEXP grad, SEXP hess) {
  R_API_BEGIN();
  CHECK_EQ(length(grad), length(hess))
      << 'gradient and hess must have same length';
  int len = length(grad);
  std::vector<float> tgrad(len), thess(len);
  #pragma omp parallel for schedule(static)
  for (int j = 0; j < len; ++j) {
    tgrad[j] = REAL(grad)[j];
    thess[j] = REAL(hess)[j];
  }
  CHECK_CALL(XGBoosterBoostOneIter(R_ExternalPtrAddr(handle),
                                 R_ExternalPtrAddr(dtrain),
                                 BeginPtr(tgrad), BeginPtr(thess),
                                 len));
  R_API_END();
  return R_NilValue;
}
    
    namespace xgboost {
namespace common {
/*!
 * \brief experimental wsummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType>
struct WQSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief maximum weight */
    RType wmin;
    /*! \brief the value of data */
    DType value;
    // constructor
    XGBOOST_DEVICE Entry() {}  // NOLINT
    // constructor
    XGBOOST_DEVICE Entry(RType rmin, RType rmax, RType wmin, DType value)
        : rmin(rmin), rmax(rmax), wmin(wmin), value(value) {}
    /*!
     * \brief debug function,  check Valid
     * \param eps the tolerate level for violating the relation
     */
    inline void CheckValid(RType eps = 0) const {
      CHECK(rmin >= 0 && rmax >= 0 && wmin >= 0) << 'nonneg constraint';
      CHECK(rmax- rmin - wmin > -eps) <<  'relation constraint: min/max';
    }
    /*! \return rmin estimation for v strictly bigger than value */
    XGBOOST_DEVICE inline RType RMinNext() const {
      return rmin + wmin;
    }
    /*! \return rmax estimation for v strictly smaller than value */
    XGBOOST_DEVICE inline RType RMaxPrev() const {
      return rmax - wmin;
    }
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // entry in the queue
    struct QEntry {
      // value of the instance
      DType value;
      // weight of instance
      RType weight;
      // default constructor
      QEntry() = default;
      // constructor
      QEntry(DType value, RType weight)
          : value(value), weight(weight) {}
      // comparator on value
      inline bool operator<(const QEntry &b) const {
        return value < b.value;
      }
    };
    // the input queue
    std::vector<QEntry> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      if (qtail == 0 || queue[qtail - 1].value != x) {
        queue[qtail++] = QEntry(x, w);
      } else {
        queue[qtail - 1].weight += w;
      }
    }
    inline void MakeSummary(WQSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = 0;
      // start update sketch
      RType wsum = 0;
      // construct data with unique weights
      for (size_t i = 0; i < qtail;) {
        size_t j = i + 1;
        RType w = queue[i].weight;
        while (j < qtail && queue[j].value == queue[i].value) {
          w += queue[j].weight; ++j;
        }
        out->data[out->size++] = Entry(wsum, wsum + w, w, queue[i].value);
        wsum += w; i = j;
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  // constructor
  WQSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*!
   * \return the maximum error of the Summary
   */
  inline RType MaxError() const {
    RType res = data[0].rmax - data[0].rmin - data[0].wmin;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].RMaxPrev() - data[i - 1].RMinNext(), res);
      res = std::max(data[i].rmax - data[i].rmin - data[i].wmin, res);
    }
    return res;
  }
  /*!
   * \brief query qvalue, start from istart
   * \param qvalue the value we query for
   * \param istart starting position
   */
  inline Entry Query(DType qvalue, size_t &istart) const { // NOLINT(*)
    while (istart < size && qvalue > data[istart].value) {
      ++istart;
    }
    if (istart == size) {
      RType rmax = data[size - 1].rmax;
      return Entry(rmax, rmax, 0.0f, qvalue);
    }
    if (qvalue == data[istart].value) {
      return data[istart];
    } else {
      if (istart == 0) {
        return Entry(0.0f, 0.0f, 0.0f, qvalue);
      } else {
        return Entry(data[istart - 1].RMinNext(),
                     data[istart].RMaxPrev(),
                     0.0f, qvalue);
      }
    }
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const WQSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void MakeFromSorted(const Entry* entries, size_t n) {
    size = 0;
    for (size_t i = 0; i < n;) {
      size_t j = i + 1;
      // ignore repeated values
      for (; j < n && entries[j].value == entries[i].value; ++j) {}
      data[size++] = Entry(entries[i].rmin, entries[i].rmax, entries[i].wmin,
                           entries[i].value);
      i = j;
    }
  }
  /*!
   * \brief debug function, validate whether the summary
   *  run consistency check to check if it is a valid summary
   * \param eps the tolerate error level, used when RType is floating point and
   *        some inconsistency could occur due to rounding error
   */
  inline void CheckValid(RType eps) const {
    for (size_t i = 0; i < size; ++i) {
      data[i].CheckValid(eps);
      if (i != 0) {
        CHECK(data[i].rmin >= data[i - 1].rmin + data[i - 1].wmin) << 'rmin range constraint';
        CHECK(data[i].rmax >= data[i - 1].rmax + data[i].wmin) << 'rmax range constraint';
      }
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
    }
    }
    }
    
    namespace xgboost {
/*!
 * \brief interface of gradient boosting model.
 */
class GradientBooster {
 public:
  /*! \brief virtual destructor */
  virtual ~GradientBooster() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  virtual void Load(dmlc::Stream* fi) = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  virtual void Save(dmlc::Stream* fo) const = 0;
  /*!
   * \brief whether the model allow lazy checkpoint
   * return true if model is only updated in DoBoost
   * after all Allreduce calls
   */
  virtual bool AllowLazyCheckPoint() const {
    return false;
  }
  /*!
   * \brief perform update to the model(boosting)
   * \param p_fmat feature matrix that provide access to features
   * \param in_gpair address of the gradient pair statistics of the data
   * \param obj The objective function, optional, can be nullptr when use customized version
   * the booster may change content of gpair
   */
  virtual void DoBoost(DMatrix* p_fmat,
                       HostDeviceVector<GradientPair>* in_gpair,
                       ObjFunction* obj = nullptr) = 0;
    }
    }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
    XGBOOST_REGISTER_OBJECTIVE(PairwiseRankObj, 'rank:pairwise')
.describe('Pairwise rank objective.')
.set_body([]() { return new PairwiseRankObj(); });
    
    
    {
    {bool SimpleDMatrix::SingleColBlock() const { return true; }
}  // namespace data
}  // namespace xgboost

    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}
