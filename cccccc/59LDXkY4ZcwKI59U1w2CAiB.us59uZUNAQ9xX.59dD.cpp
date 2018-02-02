
        
        OCL_PERF_TEST_P(StereoBMFixture, StereoBM, ::testing::Combine(OCL_PERF_ENUM(32, 64, 128), OCL_PERF_ENUM(11,21) ) )
{
    const int n_disp = get<0>(GetParam()), winSize = get<1>(GetParam());
    UMat left, right, disp;
    }
    
    using namespace std;
using namespace cv;
using namespace perf;
using std::tr1::make_tuple;
using std::tr1::get;
    
        struct C_Caller
    {
        CvMat* objPts;
        CvMat* imgPts;
        CvMat* npoints;
        Size imageSize;
        CvMat *cameraMatrix;
        CvMat *distCoeffs;
        CvMat *rvecs;
        CvMat *tvecs;
        int flags;
    }
    
        drawCorners = true;
    Mat cvdrawCornImg(img.size(), CV_8UC2);
    drawCorImg = cvdrawCornImg;
    was_found = true;
    errors += run_test_case( CV_StsUnsupportedFormat, '2 channel image' );
    
            const char* imgname = cvReadString((CvFileNode*)cvGetSeqElem(board_list->data.seq,idx*4), 'dummy.txt');
        int is_chessboard = cvReadInt((CvFileNode*)cvGetSeqElem(board_list->data.seq,idx*4+1), 0);
        pattern_size.width = cvReadInt((CvFileNode*)cvGetSeqElem(board_list->data.seq,idx*4 + 2), -1);
        pattern_size.height = cvReadInt((CvFileNode*)cvGetSeqElem(board_list->data.seq,idx*4 + 3), -1);
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    extern JSClass  *jsb_cocostudio_ComExtensionData_class;
extern JSObject *jsb_cocostudio_ComExtensionData_prototype;
    
    
    
    
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    {			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 2.0f);
			m_attachment->CreateFixture(&shape, 2.0f);
		}
    
    		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position = body1->GetPosition();
		bd.angle = body1->GetAngle();
    
    
    {
    {			m_bullet->SetLinearVelocity(b2Vec2(0.0f, -50.0f));
		}
	}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    
    {}  // namespace
    
      // Snapshot should still be the same. Should ignore a4 and v4.
  first = true;
  for (it->Seek(k1); it->Valid(); it->Next()) {
    res = it->value().ToString();
    if (first) {
      ASSERT_EQ(res, 'v1,v2,v3');
      first = false;
    } else {
      ASSERT_EQ(res, 'a1,a2,a3');
    }
  }
    
      // If we actually found the index
  if (curIndex == index && !it.Done()) {
    Slice elem;
    it.GetCurrent(&elem);
    if (result != NULL) {
      *result = elem.ToString();
    }
    }
    
    void BlockIter::SeekToLast() {
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  SeekToRestartPoint(num_restarts_ - 1);
  while (ParseNextKey() && NextEntryOffset() < restarts_) {
    // Keep skipping
  }
}
    
    
    {  // Bitmap used to record the bytes that we read, use atomic to protect
  // against multiple threads updating the same bit
  std::atomic<uint32_t>* bitmap_;
  // (1 << bytes_per_bit_pow_) is bytes_per_bit. Use power of 2 to optimize
  // muliplication and division
  uint8_t bytes_per_bit_pow_;
  // Pointer to DB Statistics object, Since this bitmap may outlive the DB
  // this pointer maybe invalid, but the DB will update it to a valid pointer
  // by using SetStatistics() before calling Mark()
  std::atomic<Statistics*> statistics_;
  uint32_t rnd_;
};
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }