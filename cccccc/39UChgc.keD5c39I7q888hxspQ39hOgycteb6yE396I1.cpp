
        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
      // WindowListObserver:
  void OnWindowAllClosed() override;
    
    
    {}  // namespace atom

    
    namespace atom {
    }
    
      base::WeakPtrFactory<URLRequestAboutJob> weak_ptr_factory_;
    
    // relauncher implements main browser application relaunches across platforms.
// When a browser wants to relaunch itself, it can't simply fork off a new
// process and exec a new browser from within. That leaves open a window
// during which two browser applications might be running concurrently. If
// that happens, each will wind up with a distinct Dock icon, which is
// especially bad if the user expected the Dock icon to be persistent by
// choosing Keep in Dock from the icon's contextual menu.
//
// relauncher approaches this problem by introducing an intermediate
// process (the 'relauncher') in between the original browser ('parent') and
// replacement browser ('relaunched'). The helper executable is used for the
// relauncher process; because it's an LSUIElement, it doesn't get a Dock
// icon and isn't visible as a running application at all. The parent will
// start a relauncher process, giving it the 'writer' side of a pipe that it
// retains the 'reader' end of. When the relauncher starts up, it will
// establish a kqueue to wait for the parent to exit, and will then write to
// the pipe. The parent, upon reading from the pipe, is free to exit. When the
// relauncher is notified via its kqueue that the parent has exited, it
// proceeds, launching the relaunched process. The handshake to synchronize
// the parent with the relauncher is necessary to avoid races: the relauncher
// needs to be sure that it's monitoring the parent and not some other process
// in light of PID reuse, so the parent must remain alive long enough for the
// relauncher to set up its kqueue.
    
    
    {}  // namespace relauncher

    
      button_drag_utils::SetDragImage(
      GURL(), files[0].LossyDisplayName(), icon.AsImageSkia(), nullptr,
      *views::Widget::GetTopLevelWidgetForNativeView(view), &data);
    
        //2-line buffer
    std::vector<s32> _buf(4*(cn * (size.width + 2) + 32 / sizeof(s32)));
    s32* lanea = internal::alignPtr(&_buf[cn], 32);
    s32* laneA = internal::alignPtr(lanea + cn * (size.width + 2), 32);
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vst1.32 {d12-d13}, [%[dst1]]                            \n\t'
            'vst1.32 {d14-d15}, [%[dst2]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC1(f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
    
    {        for (; i < size.width; i++)
            result += (src[i] != 0)?1:0;
        if (result < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    }
    return result;
#else
    (void)_size;
    (void)srcBase;
    (void)srcStride;
    
    
    {            vec128 v_src = vld1q(src + js);
            vec128 v_dst = vrev64q(v_src);
            v_dst = vcombine(vget_high(v_dst), vget_low(v_dst));
            vst1q(dst + jd - step_base, v_dst);
        }
        for (; js < roiw_tail; js += step_tail, jd -= step_tail)
        {
            vec64 v_src = vld1(src + js);
            vst1(dst + jd - step_tail, vrev64(v_src));
        }
    
            uint8x8_t el8shr0 = vld1_u8(src + j);
        uint8x8_t el8shr1 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 8));
        uint8x8_t el8shr2 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 16));
        uint8x8_t el8shr3 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 24));
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_common.h
 * \brief Common functions for caffeOp and caffeLoss symbols
 * \author Haoran Wang
*/
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    
    {    // one-liner channel-wise normalization
    switch (data.shape_[0]) {
      case 4:
        if (meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[3] = ((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (!meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else {
          outimg_[3] = ((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        }
      case 3:
        if (meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[2] = ((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (!meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else {
          outimg_[2] = ((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        }
      case 2:
        if (meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[1] = ((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (!meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else {
          outimg_[1] = ((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        }
      case 1:
        if (meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[0] = ((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (!meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else {
          outimg_[0] = ((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        }
        break;
      default:
        LOG(FATAL) << 'Expected image channels range 1-4, got ' << data.shape_[0];
    }
  }
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
    )code' ADD_FILELINE)
.set_attr<FCompute>('FCompute<cpu>', DivSqrtDimForward_<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_contrib_div_sqrt_dim'});
    
    DMLC_REGISTER_PARAMETER(NDArrayOpParam);
    
    
    {    bool Number::IsZero() const
    {
        return all_of(m_mantissa.begin(), m_mantissa.end(), [](auto&& i) { return i == 0; });
    }
}

    
    //////////////////////////////////////////////////
//
// CCalcEngine::CCalcEngine
//
//////////////////////////////////////////////////
CCalcEngine::CCalcEngine(
    bool fPrecedence,
    bool fIntegerMode,
    CalculationManager::IResourceProvider* const pResourceProvider,
    __in_opt ICalcDisplay* pCalcDisplay,
    __in_opt shared_ptr<IHistoryDisplay> pHistoryDisplay)
    : m_fPrecedence(fPrecedence)
    , m_fIntegerMode(fIntegerMode)
    , m_pCalcDisplay(pCalcDisplay)
    , m_resourceProvider(pResourceProvider)
    , m_nOpCode(0)
    , m_nPrevOpCode(0)
    , m_bChangeOp(false)
    , m_bRecord(false)
    , m_bSetCalcState(false)
    , m_input(DEFAULT_DEC_SEPARATOR)
    , m_nFE(FMT_FLOAT)
    , m_memoryValue{ make_unique<Rational>() }
    , m_holdVal{}
    , m_currentVal{}
    , m_lastVal{}
    , m_parenVals{}
    , m_precedenceVals{}
    , m_bError(false)
    , m_bInv(false)
    , m_bNoPrevEqu(true)
    , m_radix(DEFAULT_RADIX)
    , m_precision(DEFAULT_PRECISION)
    , m_cIntDigitsSav(DEFAULT_MAX_DIGITS)
    , m_decGrouping()
    , m_numberString(DEFAULT_NUMBER_STR)
    , m_nTempCom(0)
    , m_openParenCount(0)
    , m_nOp()
    , m_nPrecOp()
    , m_precedenceOpCount(0)
    , m_nLastCom(0)
    , m_angletype(ANGLE_DEG)
    , m_numwidth(QWORD_WIDTH)
    , m_HistoryCollector(pCalcDisplay, pHistoryDisplay, DEFAULT_DEC_SEPARATOR)
    , m_groupSeparator(DEFAULT_GRP_SEPARATOR)
{
    InitChopNumbers();
    }
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
    void CUnaryCommand::SetCommand(int command)
{
    m_command->Clear();
    m_command->Append(command);
}
    
            void Clear();
        bool TryToggleSign(bool isIntegerMode, std::wstring_view maxNumStr);
        bool TryAddDigit(unsigned int value, uint32_t radix, bool isIntegerMode, std::wstring_view maxNumStr, int32_t wordBitWidth, int maxDigits);
        bool TryAddDecimalPt();
        bool HasDecimalPt();
        bool TryBeginExponent();
        void Backspace();
        void SetDecimalSymbol(wchar_t decSymbol);
        std::wstring ToString(uint32_t radix);
        Rational ToRational(uint32_t radix, int32_t precision);
    
        void ProgressWriter::WriteTestSummary(const ValuePtr& accumulatedMetric)
    {
        m_test->WriteSummary(
            nullptr, accumulatedMetric,
            [this](size_t samples, size_t updates, size_t summaries, double /*aggregateLoss*/, double aggregateMetric,
                uint64_t elapsedMs)
            {
                OnWriteTestSummary(samples, updates, summaries, aggregateMetric, elapsedMs);
            });
    }
    
        ParameterInitializer HeNormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::HeNormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
    
    {private:
    long long m_start;
    long long m_end;
};
    
            size_t wordsInEachSample = Input(1)->GetSampleMatrixNumRows() / Input(0)->GetAsMatrixNumCols() /*note: can never be 0*/;
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
      /*!
   * \brief add an element to a sketch
   * \param x The element added to the sketch
   * \param w The weight of the element.
   */
  inline void Push(DType x, RType w = 1) {
    if (w == static_cast<RType>(0)) return;
    if (inqueue.qtail == inqueue.queue.size()) {
      // jump from lazy one value to limit_size * 2
      if (inqueue.queue.size() == 1) {
        inqueue.queue.resize(limit_size * 2);
      } else {
        temp.Reserve(limit_size * 2);
        inqueue.MakeSummary(&temp);
        // cleanup queue
        inqueue.qtail = 0;
        this->PushTemp();
      }
    }
    inqueue.Push(x, w);
  }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost

    
    class LambdaRankObjMAP : public LambdaRankObj {
 protected:
  struct MAPStats {
    /*! \brief the accumulated precision */
    float ap_acc;
    /*!
     * \brief the accumulated precision,
     *   assuming a positive instance is missing
     */
    float ap_acc_miss;
    /*!
     * \brief the accumulated precision,
     * assuming that one more positive instance is inserted ahead
     */
    float ap_acc_add;
    /* \brief the accumulated positive instance count */
    float hits;
    MAPStats() = default;
    MAPStats(float ap_acc, float ap_acc_miss, float ap_acc_add, float hits)
        : ap_acc(ap_acc), ap_acc_miss(ap_acc_miss), ap_acc_add(ap_acc_add), hits(hits) {}
  };
  /*!
   * \brief Obtain the delta MAP if trying to switch the positions of instances in index1 or index2
   *        in sorted triples
   * \param sorted_list the list containing entry information
   * \param index1,index2 the instances switched
   * \param map_stats a vector containing the accumulated precisions for each position in a list
   */
  inline bst_float GetLambdaMAP(const std::vector<ListEntry> &sorted_list,
                                int index1, int index2,
                                std::vector<MAPStats> *p_map_stats) {
    std::vector<MAPStats> &map_stats = *p_map_stats;
    if (index1 == index2 || map_stats[map_stats.size() - 1].hits == 0) {
      return 0.0f;
    }
    if (index1 > index2) std::swap(index1, index2);
    bst_float original = map_stats[index2].ap_acc;
    if (index1 != 0) original -= map_stats[index1 - 1].ap_acc;
    bst_float changed = 0;
    bst_float label1 = sorted_list[index1].label > 0.0f ? 1.0f : 0.0f;
    bst_float label2 = sorted_list[index2].label > 0.0f ? 1.0f : 0.0f;
    if (label1 == label2) {
      return 0.0;
    } else if (label1 < label2) {
      changed += map_stats[index2 - 1].ap_acc_add - map_stats[index1].ap_acc_add;
      changed += (map_stats[index1].hits + 1.0f) / (index1 + 1);
    } else {
      changed += map_stats[index2 - 1].ap_acc_miss - map_stats[index1].ap_acc_miss;
      changed += map_stats[index2].hits / (index2 + 1);
    }
    bst_float ans = (changed - original) / (map_stats[map_stats.size() - 1].hits);
    if (ans < 0) ans = -ans;
    return ans;
  }
  /*
   * \brief obtain preprocessing results for calculating delta MAP
   * \param sorted_list the list containing entry information
   * \param map_stats a vector containing the accumulated precisions for each position in a list
   */
  inline void GetMAPStats(const std::vector<ListEntry> &sorted_list,
                          std::vector<MAPStats> *p_map_acc) {
    std::vector<MAPStats> &map_acc = *p_map_acc;
    map_acc.resize(sorted_list.size());
    bst_float hit = 0, acc1 = 0, acc2 = 0, acc3 = 0;
    for (size_t i = 1; i <= sorted_list.size(); ++i) {
      if (sorted_list[i - 1].label > 0.0f) {
        hit++;
        acc1 += hit / i;
        acc2 += (hit - 1) / i;
        acc3 += (hit + 1) / i;
      }
      map_acc[i - 1] = MAPStats(acc1, acc2, acc3, hit);
    }
  }
  void GetLambdaWeight(const std::vector<ListEntry> &sorted_list,
                       std::vector<LambdaPair> *io_pairs) override {
    std::vector<LambdaPair> &pairs = *io_pairs;
    std::vector<MAPStats> map_stats;
    GetMAPStats(sorted_list, &map_stats);
    for (auto & pair : pairs) {
      pair.weight *=
          GetLambdaMAP(sorted_list, pair.pos_index,
                       pair.neg_index, &map_stats);
    }
  }
};
    
    void SimpleCSRSource::Clear() {
  page_.Clear();
  this->info.Clear();
}