
        
        class SubstitutionMap::Storage final
  : public llvm::FoldingSetNode,
    llvm::TrailingObjects<Storage, Type, ProtocolConformanceRef>
{
  friend TrailingObjects;
    }
    
    void
SyntaxASTMap::recordSyntaxMapping(RC<syntax::SyntaxData> FromNode,
                                  ASTNode ToNode) {
  if (FromNode->getKind() == SyntaxKind::Unknown) {
    return;
  }
    }
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
    
    {    triple.setOSName(osx.str());
  }
  Target = std::move(triple);
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
      // FIXME: Map over source ranges in the diagnostic.
  auto emitDiag = [&ctx, this](clang::FullSourceLoc clangNoteLoc,
                      clang::DiagnosticsEngine::Level clangDiagLevel,
                      StringRef message) {
    decltype(diag::error_from_clang) diagKind;
    switch (clangDiagLevel) {
    case clang::DiagnosticsEngine::Ignored:
      return;
    case clang::DiagnosticsEngine::Note:
      diagKind = diag::note_from_clang;
      break;
    case clang::DiagnosticsEngine::Remark:
      // FIXME: We don't handle remarks yet.
      return;
    case clang::DiagnosticsEngine::Warning:
      diagKind = diag::warning_from_clang;
      break;
    case clang::DiagnosticsEngine::Error:
    case clang::DiagnosticsEngine::Fatal:
      // FIXME: What happens after a fatal error in the importer?
      diagKind = diag::error_from_clang;
      break;
    }
    }
    
    
    {}  // namespace remote
    
    
    {}  // namespace nwapi

    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  gtk_widget_set_tooltip_text(menu_item_, tooltip.c_str());
}
    
     protected:
  ~NwClipboardGetListSyncFunction() override;
    
    NwObjCallObjectMethodFunction::~NwObjCallObjectMethodFunction() {
}
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
    void PointArray::replaceControlPoint(const Vec2& controlPoint, ssize_t index)
{
    _controlPoints.at(index) = controlPoint;
}
    
    NS_CC_END

    
    
    {    return false;
}
    
    void Hide::update(float time)
{
    ActionInstant::update(time);
    _target->setVisible(false);
}
    
    
    {    return false;
}
    
        int count = 0;
    auto limit = element->actions->num;
    for(int i = 0; i < limit; ++i)
    {
        auto action = static_cast<Action*>(element->actions->arr[i]);
        if(action->getTag() == tag)
            ++count;
    }
    
    // implementation of ProgressTo
    
     ActionTween is an action that lets you update any property of an object.
 For example, if you want to modify the 'width' property of a target from 200 to 300 in 2 seconds, then:
    
    
    
    
    {    _animations.erase(name);
}
    
      WRITE_CHECK(fp, header, 8);
  // write save date
  uint64_t ntime = hton64(Time().getTimeFromEpoch());
  WRITE_CHECK(fp, &ntime, sizeof(ntime));
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    #include <memory>
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port) const
{
  return generateToken(infoHash, ipaddr, port, secret_[0]);
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    // Same as FFT8, but all inputs are real.
// TODO(szabadka): Since this does not need to be in-place, maybe there is a
// faster FFT than this one, which is derived from DJB's in-place complex FFT.
void RealFFT8(const double* in, Complex* out) {
  double t1, t2, t3, t5, t6, t7, t8;
  t8 = in[6];
  t5 = in[2] - t8;
  t8 += in[2];
  out[2].real = t8;
  out[6].imag = -t5;
  out[4].imag = t5;
  t8 = in[4];
  t3 = in[0] - t8;
  t8 += in[0];
  out[0].real = t8;
  out[4].real = t3;
  out[6].real = t3;
  t7 = in[5];
  t3 = in[1] - t7;
  t7 += in[1];
  out[1].real = t7;
  t8 = in[7];
  t5 = in[3] - t8;
  t8 += in[3];
  out[3].real = t8;
  t2 = -t5;
  t6 = t3 - t5;
  t8 = kSqrtHalf;
  t6 *= t8;
  out[5].real = out[4].real - t6;
  t1 = t3 + t5;
  t1 *= t8;
  out[5].imag = out[4].imag - t1;
  t6 += out[4].real;
  out[4].real = t6;
  t1 += out[4].imag;
  out[4].imag = t1;
  t5 = t2 - t3;
  t5 *= t8;
  out[7].imag = out[6].imag - t5;
  t2 += t3;
  t2 *= t8;
  out[7].real = out[6].real - t2;
  t2 += out[6].real;
  out[6].real = t2;
  t5 += out[6].imag;
  out[6].imag = t5;
  t5 = out[2].real;
  t1 = out[0].real - t5;
  t7 = out[3].real;
  t5 += out[0].real;
  t3 = out[1].real - t7;
  t7 += out[1].real;
  t8 = t5 + t7;
  out[0].real = t8;
  t5 -= t7;
  out[1].real = t5;
  out[2].imag = t3;
  out[3].imag = -t3;
  out[3].real = t1;
  out[2].real = t1;
  out[0].imag = 0;
  out[1].imag = 0;
    }
    
    #include 'guetzli/stats.h'
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    // Returns non-zero if and only if x has a zero byte, i.e. one of
// x & 0xff, x & 0xff00, ..., x & 0xff00000000000000 is zero.
inline uint64_t HasZeroByte(uint64_t x) {
  return (x - 0x0101010101010101ULL) & ~x & 0x8080808080808080ULL;
}
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }