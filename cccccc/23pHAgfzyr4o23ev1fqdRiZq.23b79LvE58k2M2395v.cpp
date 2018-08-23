
        
        // Send the current buffered polygon (if any) and clear it.
void ScrollView::SendPolygon() {
  if (!points_->empty) {
    points_->empty = true;  // Allows us to use SendMsg.
    int length = points_->xcoords.size();
    // length == 1 corresponds to 2 SetCursors in a row and only the
    // last setCursor has any effect.
    if (length == 2) {
      // An isolated line!
      SendMsg('drawLine(%d,%d,%d,%d)',
              points_->xcoords[0], points_->ycoords[0],
              points_->xcoords[1], points_->ycoords[1]);
    } else if (length > 2) {
      // A polyline.
      SendMsg('createPolyline(%d)', length);
      char coordpair[kMaxIntPairSize];
      std::string decimal_coords;
      for (int i = 0; i < length; ++i) {
        snprintf(coordpair, kMaxIntPairSize, '%d,%d,',
                 points_->xcoords[i], points_->ycoords[i]);
        decimal_coords += coordpair;
      }
      decimal_coords += '\n';
      SendRawMessage(decimal_coords.c_str());
      SendMsg('drawPolyline()');
    }
    points_->xcoords.clear();
    points_->ycoords.clear();
  }
}
    
    // Helper to delete all the deletable blobs on the list. Owned blobs are
// extracted from the list, but not deleted, leaving them owned by the owner().
static void ReleaseAllBlobsAndDeleteUnused(BLOBNBOX_LIST* blobs) {
  for (BLOBNBOX_IT blob_it(blobs); !blob_it.empty(); blob_it.forward()) {
    BLOBNBOX* blob = blob_it.extract();
    if (blob->owner() == nullptr) {
      delete blob->cblob();
      delete blob;
    }
  }
}
    
      /**
   * Page/ResultIterators may be copied! This makes it possible to iterate over
   * all the objects at a lower level, while maintaining an iterator to
   * objects at a higher level. These constructors DO NOT CALL Begin, so
   * iterations will continue from the location of src.
   */
  PageIterator(const PageIterator& src);
  const PageIterator& operator=(const PageIterator& src);
    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
      if (argv0 != nullptr && *argv0 != '\0') {
    /* Use tessdata prefix from the command line. */
    datadir = argv0;
  } else if (tessdata_prefix) {
    /* Use tessdata prefix from the environment. */
    datadir = tessdata_prefix;
#if defined(_WIN32)
  } else if (datadir == nullptr || _access(datadir.string(), 0) != 0) {
    /* Look for tessdata in directory of executable. */
    char drive[_MAX_DRIVE];
    char dir[_MAX_DIR];
    char path[_MAX_PATH];
    DWORD length = GetModuleFileName(nullptr, path, sizeof(path));
    if (length > 0 && length < sizeof(path)) {
      errno_t result = _splitpath_s(path, drive, sizeof(drive),
                                    dir, sizeof(dir), nullptr, 0, nullptr, 0);
      if (result == ERANGE) {
        tprintf('Error: Path too long: %s\n', path);
      }
    }
    }
    
      // Iterator functions designed for use with a simple for loop:
  // for (it.Begin(); !it.AtEnd(); it.Next()) {
  //   const TrainingSample& sample = it.GetSample();
  //   int class_id = it.GetCompactClassID();
  //   ...
  // }
  void Begin();
  bool AtEnd() const;
  const TrainingSample& GetSample() const;
  TrainingSample* MutableSample() const;
  // Returns the total index (from the original set of samples) of the current
  // sample.
  int GlobalSampleIndex() const;
  // Returns the index of the current sample in compact charset space, so
  // in a 2-class problem between x and y, the returned indices will all be
  // 0 or 1, and have nothing to do with the unichar_ids.
  // If the charset_map_ is nullptr, then this is equal to GetSparseClassID().
  int GetCompactClassID() const;
  // Returns the index of the current sample in sparse charset space, so
  // in a 2-class problem between x and y, the returned indices will all be
  // x or y, where x and y may be unichar_ids (no shape_table_) or shape_ids
  // with a shape_table_.
  int GetSparseClassID() const;
  // Moves on to the next indexable sample. If the end is reached, leaves
  // the state such that AtEnd() is true.
  void Next();
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(bool training, TFile* fp) const;
  // Reads from the given file. Returns false in case of error.
  bool DeSerialize(bool training, TFile* fp);
  // As DeSerialize, but reads an old (float) format WeightMatrix for
  // backward compatibility.
  bool DeSerializeOld(bool training, TFile* fp);
    
            ComputationNodeBasePtr toNode = CopyNode(fromNet, fromNodeName,
                                                 toNodeName,
                                                 CopyNodeFlags::copyNodeValue);
    
        // dense for comparison
    mC.Resize(dim1, dim1);
    mC.SetValue(0.0f);
    Matrix<float>::MultiplyAndAdd(mAdense, transposeA, mAdense, transposeB, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mA2dense, transposeB, beta, mC);
    
                auto runMeanParameterPtr = node->Input(3);
            auto runStdParameterPtr  = node->Input(4);
    
    #include <memory> // for shared_ptr
    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
     private:
    // used for synchronisation in compare method
    std::unique_ptr<port::Mutex> mtx_compare;
    // used for synchronisation in findShortestSeparator method
    std::unique_ptr<port::Mutex> mtx_findShortestSeparator;
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jCompareMethodId;
    jmethodID m_jFindShortestSeparatorMethodId;
    jmethodID m_jFindShortSuccessorMethodId;
    
      std::mutex              mutex_;
  std::condition_variable cv_;
  // sync points that have been passed through
  std::unordered_set<std::string> cleared_points_;
  std::atomic<bool> enabled_;
  int num_callbacks_running_ = 0;
    
    std::string StatisticsImpl::ToString() const {
  MutexLock lock(&aggregate_lock_);
  std::string res;
  res.reserve(20000);
  for (const auto& t : TickersNameMap) {
    if (t.first < TICKER_ENUM_MAX || enable_internal_stats_) {
      char buffer[kTmpStrBufferSize];
      snprintf(buffer, kTmpStrBufferSize, '%s COUNT : %' PRIu64 '\n',
               t.second.c_str(), getTickerCountLocked(t.first));
      res.append(buffer);
    }
  }
  for (const auto& h : HistogramsNameMap) {
    if (h.first < HISTOGRAM_ENUM_MAX || enable_internal_stats_) {
      char buffer[kTmpStrBufferSize];
      HistogramData hData;
      getHistogramImplLocked(h.first)->Data(&hData);
      // don't handle failures - buffer should always be big enough and arguments
      // should be provided correctly
      int ret = snprintf(
          buffer, kTmpStrBufferSize,
          '%s P50 : %f P95 : %f P99 : %f P100 : %f COUNT : %' PRIu64 ' SUM : %'
          PRIu64 '\n', h.second.c_str(), hData.median, hData.percentile95,
          hData.percentile99, hData.max, hData.count, hData.sum);
      if (ret < 0 || ret >= kTmpStrBufferSize) {
        assert(false);
        continue;
      }
      res.append(buffer);
    }
  }
  res.shrink_to_fit();
  return res;
}
    
    void AbstractBtMessage::setBtMessageFactory(BtMessageFactory* factory)
{
  messageFactory_ = factory;
}
    
    class AbstractDiskWriter : public DiskWriter {
private:
  std::string filename_;
    }
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
    /**
 * Symbolicates a stack trace into a given vector
 *
 * @param symbols The vector to receive the output. The vector is cleared and
 * enough room to keep the frames are reserved.
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT void getStackTraceSymbols(std::vector<StackTraceElement>& symbols,
                                   const std::vector<InstructionPointer>& trace);
    
      inline MonitorLock(const MonitorLock&) = delete;
  inline MonitorLock& operator=(const MonitorLock&) = delete;
    
    
// jmethod_traits //////////////////////////////////////////////////////////////////////////////////
    
     public:
    
      std::string asFormattedString() const {
    std::stringstream str;
    str << 'Function ' << m_functionName << ' in file ' << m_fileName << ':' << m_lineNumber;
    return str.str();
  }