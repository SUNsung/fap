
        
            GraphemeClusterBreakProperty GCBForC1 =
        getGraphemeClusterBreakProperty(C[1]);
    if (isExtendedGraphemeClusterBoundary(GCBForC0, GCBForC1) &&
        !graphemeBreakOverride(C[0], C[1]))
      return S.slice(0, C1Offset);
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      void forceColors() {
    ForceColors = true;
  }
    
    
    {} // end namespace swift
    
      static ResultPlanPtr computeResultPlan(SILGenFunction &SGF,
                                         const CalleeTypeInfo &calleeTypeInfo,
                                         SILLocation loc,
                                         SGFContext evalContext);
    
    namespace swift {
  class Expr;
  class SourceLoc;
  struct ASTNode;
    }
    
        cv::Ptr<cv::StereoBM> sm = cv::StereoBM::create(state->numberOfDisparities,
                                                       state->SADWindowSize);
    sm->setPreFilterType(state->preFilterType);
    sm->setPreFilterSize(state->preFilterSize);
    sm->setPreFilterCap(state->preFilterCap);
    sm->setBlockSize(state->SADWindowSize);
    sm->setNumDisparities(state->numberOfDisparities > 0 ? state->numberOfDisparities : 64);
    sm->setTextureThreshold(state->textureThreshold);
    sm->setUniquenessRatio(state->uniquenessRatio);
    sm->setSpeckleRange(state->speckleRange);
    sm->setSpeckleWindowSize(state->speckleWindowSize);
    sm->setDisp12MaxDiff(state->disp12MaxDiff);
    
    inline void findCurvesCross(const std::vector<float>& /*curve1*/, const std::vector<float>& /*curve2*/, Point2f& /*cross_point*/)
{
}
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
                nppSafeCall( func(src.ptr<npp_t>(), static_cast<int>(src.step),
                dst.ptr<npp_t>(), static_cast<int>(dst.step), sz,
                (flipCode == 0 ? NPP_HORIZONTAL_AXIS : (flipCode > 0 ? NPP_VERTICAL_AXIS : NPP_BOTH_AXIS))) );
    
    
    {  delete tensor;
  delete tensor2;
  cout << 'OK' << endl;
  return 0;
}

    
    #include <utility>
#include <vector>
    
    void THDTensor_(_resize4d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2, int64_t size3) {
  int64_t sizes[] = {size0, size1, size2, size3};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/utils.cpp'
#include <THC/THCGenerateAllTypes.h>
    
      CAFFE_ENFORCE_EQ(bboxes_in.ndim(), 2);
  CAFFE_ENFORCE_EQ(bboxes_in.dim32(0), N);
  CAFFE_ENFORCE_GE(bboxes_in.dim32(1), 4);
    
    // customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
     protected:
  struct HistEntry {
    typename HistMaker<TStats>::HistUnit hist;
    unsigned istart;
    /*!
     * \brief add a histogram to data,
     * do linear scan, start from istart
     */
    inline void Add(bst_float fv,
                    const std::vector<GradientPair> &gpair,
                    const MetaInfo &info,
                    const bst_uint ridx) {
      while (istart < hist.size && !(fv < hist.cut[istart])) ++istart;
      CHECK_NE(istart, hist.size);
      hist.data[istart].Add(gpair, info, ridx);
    }
    /*!
     * \brief add a histogram to data,
     * do linear scan, start from istart
     */
    inline void Add(bst_float fv,
                    GradientPair gstats) {
      if (fv < hist.cut[istart]) {
        hist.data[istart].Add(gstats);
      } else {
        while (istart < hist.size && !(fv < hist.cut[istart])) ++istart;
        if (istart != hist.size) {
          hist.data[istart].Add(gstats);
        } else {
          LOG(INFO) << 'fv=' << fv << ', hist.size=' << hist.size;
          for (size_t i = 0; i < hist.size; ++i) {
            LOG(INFO) << 'hist[' << i << ']=' << hist.cut[i];
          }
          LOG(FATAL) << 'fv=' << fv << ', hist.last=' << hist.cut[hist.size - 1];
        }
      }
    }
  };
  // sketch type used for this
  using WXQSketch = common::WXQuantileSketch<bst_float, bst_float>;
  // initialize the work set of tree
  void InitWorkSet(DMatrix *p_fmat,
                   const RegTree &tree,
                   std::vector<bst_uint> *p_fset) override {
    if (p_fmat != cache_dmatrix_) {
      feat_helper_.InitByCol(p_fmat, tree);
      cache_dmatrix_ = p_fmat;
    }
    feat_helper_.SyncInfo();
    feat_helper_.SampleCol(this->param_.colsample_bytree, p_fset);
  }
  // code to create histogram
  void CreateHist(const std::vector<GradientPair> &gpair,
                  DMatrix *p_fmat,
                  const std::vector<bst_uint> &fset,
                  const RegTree &tree) override {
    const MetaInfo &info = p_fmat->Info();
    // fill in reverse map
    feat2workindex_.resize(tree.param.num_feature);
    std::fill(feat2workindex_.begin(), feat2workindex_.end(), -1);
    for (size_t i = 0; i < fset.size(); ++i) {
      feat2workindex_[fset[i]] = static_cast<int>(i);
    }
    // start to work
    this->wspace_.Init(this->param_, 1);
    // if it is C++11, use lazy evaluation for Allreduce,
    // to gain speedup in recovery
#if __cplusplus >= 201103L
    auto lazy_get_hist = [&]()
#endif
    {
      thread_hist_.resize(omp_get_max_threads());
      // start accumulating statistics
      auto iter = p_fmat->ColIterator();
      iter->BeforeFirst();
      while (iter->Next()) {
        auto batch = iter->Value();
        // start enumeration
        const auto nsize = static_cast<bst_omp_uint>(fset.size());
        #pragma omp parallel for schedule(dynamic, 1)
        for (bst_omp_uint i = 0; i < nsize; ++i) {
          int fid = fset[i];
          int offset = feat2workindex_[fid];
          if (offset >= 0) {
            this->UpdateHistCol(gpair, batch[fid], info, tree,
                                fset, offset,
                                &thread_hist_[omp_get_thread_num()]);
          }
        }
      }
      // update node statistics.
      this->GetNodeStats(gpair, *p_fmat, tree,
                         &thread_stats_, &node_stats_);
      for (size_t i = 0; i < this->qexpand_.size(); ++i) {
        const int nid = this->qexpand_[i];
        const int wid = this->node2workindex_[nid];
        this->wspace_.hset[0][fset.size() + wid * (fset.size()+1)]
            .data[0] = node_stats_[nid];
      }
    };
    // sync the histogram
    // if it is C++11, use lazy evaluation for Allreduce
#if __cplusplus >= 201103L
    this->histred_.Allreduce(dmlc::BeginPtr(this->wspace_.hset[0].data),
                            this->wspace_.hset[0].data.size(), lazy_get_hist);
#else
    this->histred_.Allreduce(dmlc::BeginPtr(this->wspace_.hset[0].data),
                            this->wspace_.hset[0].data.size());
#endif
  }
  void ResetPositionAfterSplit(DMatrix *p_fmat,
                               const RegTree &tree) override {
    this->GetSplitSet(this->qexpand_, tree, &fsplit_set_);
  }
  void ResetPosAndPropose(const std::vector<GradientPair> &gpair,
                          DMatrix *p_fmat,
                          const std::vector<bst_uint> &fset,
                          const RegTree &tree) override {
    const MetaInfo &info = p_fmat->Info();
    // fill in reverse map
    feat2workindex_.resize(tree.param.num_feature);
    std::fill(feat2workindex_.begin(), feat2workindex_.end(), -1);
    work_set_.clear();
    for (auto fidx : fset) {
      if (feat_helper_.Type(fidx) == 2) {
        feat2workindex_[fidx] = static_cast<int>(work_set_.size());
        work_set_.push_back(fidx);
      } else {
        feat2workindex_[fidx] = -2;
      }
    }
    const size_t work_set_size = work_set_.size();
    }
    
    // Decodes one 8x8 block of DCT coefficients from the bit stream.
bool DecodeDCTBlock(const HuffmanTableEntry* dc_huff,
                    const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* last_dc_coeff,
                    coeff_t* coeffs) {
  int s;
  int r;
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    s = ReadSymbol(dc_huff, br);
    if (s >= kJpegDCAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for DC coefficient.\n', s);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    if (s > 0) {
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
    }
    s += *last_dc_coeff;
    const int dc_coeff = SignedLeftshift(s, Al);
    coeffs[0] = dc_coeff;
    if (dc_coeff != coeffs[0]) {
      fprintf(stderr, 'Invalid DC coefficient %d\n', dc_coeff);
      jpg->error = JPEG_NON_REPRESENTABLE_DC_COEFF;
      return false;
    }
    *last_dc_coeff = s;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  if (*eobrun > 0) {
    --(*eobrun);
    return true;
  }
  for (int k = Ss; k <= Se; k++) {
    s = ReadSymbol(ac_huff, br);
    if (s >= kJpegHuffmanAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
              s, k);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    r = s >> 4;
    s &= 15;
    if (s > 0) {
      k += r;
      if (k > Se) {
        fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                k, Ss, Se);
        jpg->error = JPEG_OUT_OF_BAND_COEFF;
        return false;
      }
      if (s + Al >= kJpegDCAlphabetSize) {
        fprintf(stderr, 'Out of range AC coefficient value: s=%d Al=%d k=%d\n',
                s, Al, k);
        jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
        return false;
      }
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
      coeffs[kJPEGNaturalOrder[k]] = SignedLeftshift(s, Al);
    } else if (r == 15) {
      k += 15;
    } else {
      *eobrun = 1 << r;
      if (r > 0) {
        if (!eobrun_allowed) {
          fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
          jpg->error = JPEG_EOB_RUN_TOO_LONG;
          return false;
        }
        *eobrun += br->ReadBits(r);
      }
      break;
    }
  }
  --(*eobrun);
  return true;
}
    
    
    {}  // namespace guetzli
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    
    {}  // namespace guetzli
    
    enum JpegReadMode {
  JPEG_READ_HEADER,   // only basic headers
  JPEG_READ_TABLES,   // headers and tables (quant, Huffman, ...)
  JPEG_READ_ALL,      // everything
};
    
    
    {
    {} // namespace exception_tracer
} // namespace folly

    
    #pragma once
    
      /**
   * Called by `Singleton<T>.shouldEagerInit()` to ensure the instance
   * is built when `doEagerInit[Via]` is called; see those methods
   * for more info.
   */
  void addEagerInitSingleton(detail::SingletonHolderBase* entry);
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    inline void hazptr_domain::cleanup() {
  hazptr_obj* h = nullptr;
  hazptr_obj* t = nullptr;
  for (hazptr_tls_globals_& tls : PrivList::accessAllThreads()) {
    tls.priv.collect(h, t);
  }
  if (h) {
    DCHECK(t);
    pushRetired(h, t, 0);
  }
  bulkReclaim();
}
    
      ControlBlock* allocateControlBlock();
  void freeControlBlock(ControlBlock* b);
    
    struct SettingMetadata;
    
      {
    auto meta = folly::settings::getSettingsMeta('follytest_some_flag');
    EXPECT_TRUE(meta.hasValue());
    const auto& md = meta.value();
    EXPECT_EQ(md.project, 'follytest');
    EXPECT_EQ(md.name, 'some_flag');
    EXPECT_EQ(md.typeStr, 'std::string');
    EXPECT_EQ(md.typeId, typeid(std::string));
  }
    
    extern const std::string NIL;
    
    class AbstractAuthResolver : public AuthResolver {
public:
  AbstractAuthResolver();
    }
    
      virtual ~AbstractBtMessage();
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    namespace aria2 {
    }
    
    #include 'Notifier.h'
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    void Benchmark::AddRange(std::vector<int>* dst, int lo, int hi, int mult) {
  CHECK_GE(lo, 0);
  CHECK_GE(hi, lo);
  CHECK_GE(mult, 2);
    }
    
    typedef void(AbortHandlerT)();
    
    // Macros for declaring flags.
#define DECLARE_bool(name) extern bool FLAG(name)
#define DECLARE_int32(name) extern int32_t FLAG(name)
#define DECLARE_int64(name) extern int64_t FLAG(name)
#define DECLARE_double(name) extern double FLAG(name)
#define DECLARE_string(name) extern std::string FLAG(name)
    
    namespace benchmark {
    }
    
    #if defined(BENCHMARK_OS_MACOSX)
#include <mach/mach_time.h>
#endif
// For MSVC, we want to use '_asm rdtsc' when possible (since it works
// with even ancient MSVC compilers), and when not possible the
// __rdtsc intrinsic, declared in <intrin.h>.  Unfortunately, in some
// environments, <windows.h> and <intrin.h> have conflicting
// declarations of some other intrinsics, breaking compilation.
// Therefore, we simply declare __rdtsc ourselves. See also
// http://connect.microsoft.com/VisualStudio/feedback/details/262047
#if defined(COMPILER_MSVC) && !defined(_M_IX86)
extern 'C' uint64_t __rdtsc();
#pragma intrinsic(__rdtsc)
#endif
    
    
    {}  // end namespace
    
    #include <iostream>
#include <ostream>
    
    #include 'sleep.h'