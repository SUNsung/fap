
        
        namespace c10d {
namespace test {
    }
    }
    
      You can read more about representing batches of lists and maps here:
  https://our.intern.facebook.com/intern/dex/caffe2/sparse-operations/
)DOC';
    
    ```
    
    )DOC')
    .Input(0, 'X', '*(type: Tensor`<float>`)* Input tensor.')
    .Output(0, 'Y', '*(type: Tensor`<float>`)* Output tensor.');
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
    class TESS_API PageIterator {
 public:
  /**
   * page_res and tesseract come directly from the BaseAPI.
   * The rectangle parameters are copied indirectly from the Thresholder,
   * via the BaseAPI. They represent the coordinates of some rectangle in an
   * original image (in top-left-origin coordinates) and therefore the top-left
   * needs to be added to any output boxes in order to specify coordinates
   * in the original image. See TessBaseAPI::SetRectangle.
   * The scale and scaled_yres are in case the Thresholder scaled the image
   * rectangle prior to thresholding. Any coordinates in tesseract's image
   * must be divided by scale before adding (rect_left, rect_top).
   * The scaled_yres indicates the effective resolution of the binary image
   * that tesseract has been given by the Thresholder.
   * After the constructor, Begin has already been called.
   */
  PageIterator(PAGE_RES* page_res, Tesseract* tesseract,
               int scale, int scaled_yres,
               int rect_left, int rect_top,
               int rect_width, int rect_height);
  virtual ~PageIterator();
    }
    
    
    {}  // namespace tesseract.

    
    // Creates a box file string from a unichar string, TBOX and page number.
void MakeBoxFileStr(const char* unichar_str, const TBOX& box, int page_num,
                    STRING* box_str);
    
    
    {  TBOX bbox_;
  int length_;
  GenericVector<TBOX> boxes_;
};
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit() = default;
    }
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
      const STRING& document_name() const {
    SVAutoLock lock(&general_mutex_);
    return document_name_;
  }
  int NumPages() const {
    SVAutoLock lock(&general_mutex_);
    return total_pages_;
  }
  int64_t memory_used() const {
    SVAutoLock lock(&general_mutex_);
    return memory_used_;
  }
  // If the given index is not currently loaded, loads it using a separate
  // thread. Note: there are 4 cases:
  // Document uncached: IsCached() returns false, total_pages_ < 0.
  // Required page is available: IsPageAvailable returns true. In this case,
  // total_pages_ > 0 and
  // pages_offset_ <= index%total_pages_ <= pages_offset_+pages_.size()
  // Pages are loaded, but the required one is not.
  // The requested page is being loaded by LoadPageInBackground. In this case,
  // index == pages_offset_. Once the loading starts, the pages lock is held
  // until it completes, at which point IsPageAvailable will unblock and return
  // true.
  void LoadPageInBackground(int index);
  // Returns a pointer to the page with the given index, modulo the total
  // number of pages. Blocks until the background load is completed.
  const ImageData* GetPage(int index);
  // Returns true if the requested page is available, and provides a pointer,
  // which may be nullptr if the document is empty. May block, even though it
  // doesn't guarantee to return true.
  bool IsPageAvailable(int index, ImageData** page);
  // Takes ownership of the given page index. The page is made nullptr in *this.
  ImageData* TakePage(int index) {
    SVAutoLock lock(&pages_mutex_);
    ImageData* page = pages_[index];
    pages_[index] = nullptr;
    return page;
  }
  // Returns true if the document is currently loaded or in the process of
  // loading.
  bool IsCached() const { return NumPages() >= 0; }
  // Removes all pages from memory and frees the memory, but does not forget
  // the document metadata. Returns the memory saved.
  int64_t UnCache();
  // Shuffles all the pages in the document.
  void Shuffle();
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    
    {}  // namespace grpc

    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    #endif  // !GRPC_CUSTOM_DEFAULT_THREAD_POOL

    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
    //////////////////////////////////////////////////////////////////////
    
    #endif

    
    // This method must return a char* which is owned by the IniSettingMap
// to avoid issues with the lifetime of the char*
const char* Config::Get(const IniSettingMap &ini, const Hdf& config,
                        const std::string& name /* = '' */,
                        const char *defValue /* = nullptr */,
                        const bool prepend_hhvm /* = true */) {
  auto ini_name = IniName(name, prepend_hhvm);
  Hdf hdf = name != '' ? config[name] : config;
  auto value = ini_iterate(ini, ini_name);
  if (value.isString()) {
    // See generic Get##METHOD below for why we are doing this
    // Note that value is a string, so value.toString() is not
    // a temporary.
    const char* ini_ret = value.toString().data();
    const char* hdf_ret = hdf.configGet(ini_ret);
    if (hdf_ret != ini_ret) {
      ini_ret = hdf_ret;
      IniSetting::SetSystem(ini_name, ini_ret);
    }
    return ini_ret;
  }
  return hdf.configGet(defValue);
}
    
    namespace HPHP {
    }
    
    #endif // incl_HPHP_OUTPUT_FILE_H_

    
    #include 'hphp/runtime/base/perf-warning.h'
    
      char *end = nullptr;
  long nFD = strtol(sFD, &end, 10);
  if ((sFD == end) || (*end != '\0')) {
    raise_warning('php://fd/ stream must be specified in the form '
                  'php://fd/<orig fd>');
    return nullptr;
  }
  long dtablesize = getdtablesize();
  if ((nFD < 0) || (nFD >= dtablesize)) {
    raise_warning('The file descriptors must be non-negative numbers '
                  'smaller than %ld', dtablesize);
    return nullptr;
  }
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
    
      Byte t1(bytes + 2);
  int32_t t = t1.get_byte(6, 2);
    
    double ObjectGeneralInfo60B::longitude_dist(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }
    
    #include 'modules/planning/lattice/trajectory_generation/trajectory_combiner.h'
    
    Eigen::MatrixXd SplineSegKernel::ThirdOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateThirdOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'third_order', &term_matrix);
  return (kernel_third_order_derivative_.block(0, 0, num_params, num_params))
      .cwiseProduct(term_matrix);
}
    
    #include 'modules/routing/graph/node_with_range.h'
    
    Accelrpt68::Accelrpt68() {}
const int32_t Accelrpt68::ID = 0x68;
    
    
    {    for (auto i = lists.begin(); i != lists.end(); i++)
    {
        int ret = (int) (long) swRbtree_find(tree, *i);
        ASSERT_EQ(ret, 0);
    }
}

    
            void addWrite() {
            if (m_write) return;
            m_write = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Write, 0);
            connect(m_write, SIGNAL(activated(int)), this, SLOT(write()));
        }
    
        inline bool is_closed()
    {
        return closed;
    }
    
                atomic<bool> &_flag = *flag;
            async_event *event;
            _accept: event = queue.pop();
            if (event)
            {
                if (unlikely(event->handler == nullptr))
                {
                    event->error = SW_ERROR_AIO_BAD_REQUEST;
                    event->ret = -1;
                    goto _error;
                }
                else if (unlikely(event->canceled))
                {
                    event->error = SW_ERROR_AIO_BAD_REQUEST;
                    event->ret = -1;
                    goto _error;
                }
                else
                {
                    event->handler(event);
                }
    }
    
    
    {
    {        ASSERT_LT(swTimer_get_absolute_msec() - start, 5);
    });
}
    
    TEST(hashmap, string)
{
    swHashMap *hm = swHashMap_new(16, NULL);
    swHashMap_add(hm, (char *) SW_STRL('hello'), (void *) 199);
    swHashMap_add(hm, (char *) SW_STRL('swoole22'), (void *) 8877);
    swHashMap_add(hm, (char *) SW_STRL('hello2'), (void *) 200);
    swHashMap_add(hm, (char *) SW_STRL('willdel'), (void *) 888);
    swHashMap_add(hm, (char *) SW_STRL('willupadte'), (void *) 9999);
    swHashMap_add(hm, (char *) SW_STRL('hello3'), (void *) 78978);
    }
    
    static inline void coro_test_wait(int *complete_num, int total_num)
{
    SwooleG.main_reactor->once = true;
    }