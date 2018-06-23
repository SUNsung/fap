
        
        // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    #define ASSERT_HOST_MSG(x, ...)                                                \
  if (!(x)) {                                                                  \
    tprintf(__VA_ARGS__);                                                      \
    ASSERT_FAILED.error(#x, ABORT, 'in file %s, line %d', __FILE__, __LINE__); \
  }
    
    
/**----------------------------------------------------------------------------
        Global Data Definitions and Declarations
----------------------------------------------------------------------------**/
    
    #include 'dawg.h'
#include 'object_cache.h'
#include 'strngs.h'
#include 'tessdatamanager.h'
    
    void Timer::RequestInit() {
  memset(&s_counters, 0, sizeof(s_counters));
}
    
    public:
  explicit Timer(Type type, const char *name = nullptr, ReportType r = Log);
  ~Timer();
    
    #else // USE_GCC_FAST_TLS
    
    namespace HPHP { namespace jit {
    }
    }
    
    #endif
    
    #define HFTRACE(LEVEL, ...)                         \
  if (Trace::moduleEnabled(Trace::hfsort, LEVEL)) { \
    Trace::traceRelease(__VA_ARGS__);               \
  }
    
    /*
 * Lock around accesses to s_tmp_files.
 */
std::mutex s_tmp_files_lock;
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
    /**
 * A Synchronizable object that has multiple conditional variables. The benefit
 * is, notify() can choose to wake up a thread that is more favorable (e.g.,
 * one with stack/heap mapped on huge pages, or one that is recently active).
 */
struct SynchronizableMulti {
  explicit SynchronizableMulti(int size);
  virtual ~SynchronizableMulti() {}
    }
    
    // Get a huge page from NUMA node `node`, and return the mapped address
// specified by `addr` or nullptr on failure.  If `addr` is nullptr, the system
// will choose a proper address.  If the address range [addr, addr+1G) already
// contains address in the process address space, nullptr is returned and the
// mapping won't be changed.  If `node` is -1, any NUMA node is OK.
void* mmap_1g(void* addr = nullptr, int node = -1);
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    #include <math.h>
    
    
    {}  // namespace guetzli

    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
      // Fills in out[] array with the 8-bit pixel view of this component cropped
  // to the specified window. The window's upper-left corner, (xmin, ymin) must
  // be within the image, but the window may extend past the image. In that
  // case the edge pixels are duplicated.
  void ToPixels(int xmin, int ymin, int xsize, int ysize,
                uint8_t* out, int stride) const;
    
      DBWrapper* db_wrapper     = ObjectWrap::Unwrap<DBWrapper>(args.This());
  Handle<Array> sub_batches = Handle<Array>::Cast(args[0]);
  Local<Object> sub_batch;
  rocksdb::WriteBatch batch;
  bool well_formed;
    
    
// The class for unit-testing
class StringAppendOperatorTest : public testing::Test {
 public:
  StringAppendOperatorTest() {
    DestroyDB(kDbName, Options());    // Start each test with a fresh DB
  }
    }
    
      jlong addr_compaction_filter = env->CallLongMethod(m_jcallback_obj,
      m_jcreate_compaction_filter_methodid,
      static_cast<jboolean>(context.is_full_compaction),
      static_cast<jboolean>(context.is_manual_compaction));
    
    ComparatorJniCallback::~ComparatorJniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }