
        
        CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
        Mat black_comp, white_comp;
    for(int i = 0; i < ncorners; i++)
    {
        int channels = 0;
        Rect roi(cvRound(corners[i].x - region_size.width), cvRound(corners[i].y - region_size.height),
            region_size.width*2 + 1, region_size.height*2 + 1);
        Mat img_roi = img(roi);
        calcHist(&img_roi, 1, &channels, Mat(), hist, 1, &nbins, &_ranges);
    }
    
            vector<Point2f> corners_art, corners_fcb;
        for(size_t i = 0; i < brdsNum; ++i)
        {
            for(;;)
            {
                boards[i] = cbg(bg, camMat, distCoeffs, sqSile, corners_art);
                if(findChessboardCorners(boards[i], cornersSize, corners_fcb))
                    break;
            }
    }
    
            // undistort
        cv::undistortPoints(distorted,
            normalizedUndistorted,
            m_cameraMatrix,
            distortionCoeff);
    
        mutable std::vector<Point3f> corners3d;
private:
    void generateEdge(const Point3f& p1, const Point3f& p2, std::vector<Point3f>& out) const;
    Mat generateChessBoard(const Mat& bg, const Mat& camMat, const Mat& distCoeffs,
        const Point3f& zero, const Point3f& pb1, const Point3f& pb2,
        float sqWidth, float sqHeight, const std::vector<Point3f>& whole, std::vector<Point2f>& corners) const;
    void generateBasis(Point3f& pb1, Point3f& pb2) const;
    
    /* ///////////////////// chess_corner_test ///////////////////////// */
void CV_ChessboardDetectorBadArgTest::run( int /*start_from */)
{
    Mat bg(800, 600, CV_8U, Scalar(0));
    Mat_<float> camMat(3, 3);
    camMat << 300.f, 0.f, bg.cols/2.f, 0, 300.f, bg.rows/2.f, 0.f, 0.f, 1.f;
    Mat_<float> distCoeffs(1, 5);
    distCoeffs << 1.2f, 0.2f, 0.f, 0.f, 0.f;
    }
    
    TEST(Calib3d_DecomposeProjectionMatrix, accuracy)
{
    CV_DecomposeProjectionMatrixTest test;
    test.safe_run();
}

    
    namespace HPHP {
    }
    
    int64_t TimeStamp::Get(bool &error, int hou, int min, int sec, int mon, int day,
                   int yea, bool gmt) {
  auto dt = req::make<DateTime>(Current());
  if (gmt) {
    dt->setTimezone(req::make<TimeZone>('UTC'));
  }
  dt->set(hou, min, sec, mon, day, yea);
  return dt->toTimeStamp(error);
}
    
    Variant HHVM_FUNCTION(xhprof_sample_disable) {
  return s_profiler_factory->stop();
}
    
      int64_t getTime() const;
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}

    
      /* see if we encountered an error */
  if (err <= -2) {
    OnigUChar err_str[ONIG_MAX_ERROR_MESSAGE_LEN];
    onig_error_code_to_str(err_str, err);
    raise_warning('mbregex search failure in mbsplit(): %s', err_str);
    return false;
  }
    
    #ifndef incl_HPHP_SWEEPABLE_H_
#define incl_HPHP_SWEEPABLE_H_
    
    template <class F, bool inc>
void PackedArray::IterateV(const ArrayData* arr, F fn) {
  assert(checkInvariants(arr));
  auto elm = packedData(arr);
  if (inc) arr->incRefCount();
  SCOPE_EXIT { if (inc) decRefArr(const_cast<ArrayData*>(arr)); };
  for (auto i = arr->m_size; i--; elm++) {
    if (ArrayData::call_helper(fn, *elm)) break;
  }
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
      /**
   * Sub-class handles a request by implementing this function. This is called
   * when the server determines this request should not be processed (e.g., due
   * to timeout).
   */
  virtual void abortRequest(Transport* transport) = 0;
    
    ///////////////////////////////////////////////////////////////////////////////
    
      /// Perform a blocking wait on the timer.
  /**
   * This function is used to wait for the timer to expire. This function
   * blocks and does not return until the timer has expired.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void wait()
  {
    boost::system::error_code ec;
    this->service.wait(this->implementation, ec);
    boost::asio::detail::throw_error(ec, 'wait');
  }
    
      /// Start an asynchronous fill.
  template <typename ReadHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(ReadHandler,
      void (boost::system::error_code, std::size_t))
  async_fill(BOOST_ASIO_MOVE_ARG(ReadHandler) handler);
    
    
    {
    {} // namespace asio
} // namespace boost
    
    
    {private:
  CompletionCondition completion_condition_;
};
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    
    {} // namespace boost_asio_handler_invoke_helpers
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
void DBWrapper::Init(Handle<Object> exports) {
  Local<FunctionTemplate> tpl = FunctionTemplate::New(New);
  tpl->SetClassName(String::NewSymbol('DBWrapper'));
  tpl->InstanceTemplate()->SetInternalFieldCount(8);
  tpl->PrototypeTemplate()->Set(String::NewSymbol('open'),
      FunctionTemplate::New(Open)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('get'),
      FunctionTemplate::New(Get)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('put'),
      FunctionTemplate::New(Put)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('delete'),
      FunctionTemplate::New(Delete)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('dump'),
      FunctionTemplate::New(Dump)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('createColumnFamily'),
      FunctionTemplate::New(CreateColumnFamily)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('writeBatch'),
      FunctionTemplate::New(WriteBatch)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('compactRange'),
      FunctionTemplate::New(CompactRange)->GetFunction());
    }
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
      /// If list is empty, return false and leave *result unchanged.
  /// Else, remove the first/last elem, store it in *result, and return true
  bool PopLeft(const std::string& key, std::string* result);  // First
  bool PopRight(const std::string& key, std::string* result); // Last
    
      if (left == right) {
    // In one of the two following cases:
    // (1) left is the first one of block_ids
    // (2) there is a gap of blocks between block of `left` and `left-1`.
    // we can further distinguish the case of key in the block or key not
    // existing, by comparing the target key and the key of the previous
    // block to the left of the block found.
    if (block_ids[left] > 0 &&
        (left == left_bound || block_ids[left - 1] != block_ids[left] - 1) &&
        CompareBlockKey(block_ids[left] - 1, target) > 0) {
      current_ = restarts_;
      return false;
    }
    }
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };