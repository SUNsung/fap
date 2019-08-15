
        
                    MatShape s = shape(newRows, inpMat.total() / newRows);
            UMat oneMat = UMat::ones(s[1], 1, CV_32F);
            UMat meanMat = UMat(s[0], 1, CV_32F);
            UMat devMat  = UMat(s[0], 1, CV_32F);
            UMat tmpMat  = UMat(s[0], s[1], CV_32F);
            float alpha = 1.0f / s[1];
    
        // Now we use the rolling sum from the previous iteration from accumulator and replicate it into carry_over
    // And sum everything up into the accumulator
    //
    const __m512i carry_over  = _mm512_permutex2var_epi64(accumulator, _mm512_set_epi64(7,7,7,7,7,7,7,7), accumulator);
    accumulator = _mm512_add_epi64(_mm512_add_epi64(s2, s3), _mm512_add_epi64(carry_over, s1));
    
    #define CV_IMPL_ADD(impl)                                                   \
    if(cv::useCollection())                                                 \
    {                                                                       \
        cv::addImpl(impl, CV_Func);                                         \
    }
#else
#define CV_IMPL_ADD(impl)
#endif
    
        vector<MSERParams>::iterator itMSER = pMSER.begin();
    Ptr<Feature2D> b;
    String label;
    // Descriptor loop
    vector<String>::iterator itDesc;
    Mat result(img.rows, img.cols, CV_8UC3);
    for (itDesc = typeDesc.begin(); itDesc != typeDesc.end(); ++itDesc)
    {
        vector<KeyPoint> keyImg1;
        if (*itDesc == 'MSER')
        {
            if (img.type() == CV_8UC3)
            {
                b = MSER::create(itMSER->delta, itMSER->minArea, itMSER->maxArea, itMSER->maxVariation, itMSER->minDiversity, itMSER->maxEvolution,
                                 itMSER->areaThreshold, itMSER->minMargin, itMSER->edgeBlurSize);
                label = Legende(*itMSER);
                ++itMSER;
            }
            else
            {
                b = MSER::create(itMSER->delta, itMSER->minArea, itMSER->maxArea, itMSER->maxVariation, itMSER->minDiversity);
                b.dynamicCast<MSER>()->setPass2Only(itMSER->pass2Only);
                label = Legende(*itMSER);
                ++itMSER;
            }
        }
    }
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                          views::MenuAnchorPosition::kTopRight,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.quit', UNKNOWN)
 private:
  void Callback();
};
    
      namespace {
    }
    
    #include 'extensions/browser/extension_function.h'
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
    template <typename T> class PointerVector;
struct ShapeRating;
class ShapeTable;
class TrainingSample;
class TrainingSampleSet;
struct UnicharRating;
    
    TEST(RecoveryTest, LogFileReuse) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  for (int i = 0; i < 2; i++) {
    ASSERT_OK(Put('foo', 'bar'));
    if (i == 0) {
      // Compact to ensure current log is empty
      CompactMemTable();
    }
    Close();
    ASSERT_EQ(1, NumLogs());
    uint64_t number = FirstLogFile();
    if (i == 0) {
      ASSERT_EQ(0, FileSize(LogName(number)));
    } else {
      ASSERT_LT(0, FileSize(LogName(number)));
    }
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
  }
}
    
    
    {  static void Append(WriteBatch* dst, const WriteBatch* src);
};
    
    
    {  Status result = metaindex_handle_.DecodeFrom(input);
  if (result.ok()) {
    result = index_handle_.DecodeFrom(input);
  }
  if (result.ok()) {
    // We skip over any leftover data (just padding for now) in 'input'
    const char* end = magic_ptr + 8;
    *input = Slice(end, input->data() + input->size() - end);
  }
  return result;
}
    
    class Comparator;
class Iterator;
    
    struct ReadOptions;
    
    
    {
    {
    {
    {    LOG(CONSOLE) << '======== Monitor: ' << label << ' ========';
    for (auto &kv : statistics_map) {
      if (kv.second.count == 0) {
        LOG(WARNING) <<
            'Timer for ' << kv.first << ' did not get stopped properly.';
        continue;
      }
      LOG(CONSOLE) << kv.first << ': ' << kv.second.timer.ElapsedSeconds()
                   << 's, ' << kv.second.count << ' calls @ '
                   << std::chrono::duration_cast<std::chrono::microseconds>(
                          kv.second.timer.elapsed / kv.second.count)
                          .count()
                   << 'us';
    }
    self_timer.Stop();
  }
  void Init(std::string label) { this->label = label; }
  void Start(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      statistics_map[name].timer.Start();
    }
  }
  void Stop(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Stop();
      stats.count++;
    }
  }
  void StartCuda(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Start();
#if defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
      stats.nvtx_id = nvtxRangeStartA(name.c_str());
#endif  // defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
    }
  }
  void StopCuda(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Stop();
      stats.count++;
#if defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
      nvtxRangeEnd(stats.nvtx_id);
#endif  // defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
    }
  }
};
}  // namespace common
}  // namespace xgboost

    
    SEXP XGBoosterCreate_R(SEXP dmats) {
  SEXP ret;
  R_API_BEGIN();
  int len = length(dmats);
  std::vector<void*> dvec;
  for (int i = 0; i < len; ++i) {
    dvec.push_back(R_ExternalPtrAddr(VECTOR_ELT(dmats, i)));
  }
  BoosterHandle handle;
  CHECK_CALL(XGBoosterCreate(BeginPtr(dvec), dvec.size(), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _BoosterFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    namespace xgboost {
TEST(GPUSet, Basic) {
  GPUSet devices = GPUSet::Empty();
  ASSERT_TRUE(devices.IsEmpty());
    }
    }
    
    DMLC_REGISTER_PARAMETER(MyLogisticParam);
    
     public:
  /** 
   * \brief Column sampler constructor.
   * \note This constructor manually sets the rng seed
   */
  explicit ColumnSampler(uint32_t seed) {
    rng_.seed(seed);
  }