
        
        namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
    #ifndef CPU_ONLY
template <typename Dtype>
void sgd_update_gpu(int N, Dtype* g, Dtype* h, Dtype momentum,
    Dtype local_rate);
#endif
    
    
    {
    {    LOG(INFO) << 'Iteration ' << iter_ << ', loss = ' << smoothed_loss_;
  }
  if (param_.test_interval() && iter_ % param_.test_interval() == 0) {
    TestAll();
  }
  LOG(INFO) << 'Optimization Done.';
}
    
      virtual inline const char* type() const { return 'Pooling'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int MinTopBlobs() const { return 1; }
  // MAX POOL layers can output an extra top blob for the mask;
  // others can only output the pooled inputs.
  virtual inline int MaxTopBlobs() const {
    return (this->layer_param_.pooling_param().pool() ==
            PoolingParameter_PoolMethod_MAX) ? 2 : 1;
  }
    
    /* Boolean */
#define GLU_FALSE                          0
#define GLU_TRUE                           1
    
      PSOutputFunc outputFunc;
  void *outputStream;
  PSFileType fileType;		// file / pipe / stdout
  GBool manualCtrl;
  int seqPage;			// current sequential page number
  void (*underlayCbk)(PSOutputDev *psOut, void *data);
  void *underlayCbkData;
  void (*overlayCbk)(PSOutputDev *psOut, void *data);
  void *overlayCbkData;
    
      // Get the next object from the input stream.
  Object *getObj(Object *obj, Guchar *fileKey = NULL,
		 CryptAlgorithm encAlgorithm = cryptRC4, int keyLength = 0,
		 int objNum = 0, int objGen = 0);
  
  Object *getObj(Object *obj, Guchar *fileKey,
     CryptAlgorithm encAlgorithm, int keyLength,
     int objNum, int objGen, std::set<int> *fetchOriginatorNums);
    
    void PopplerCache::put(PopplerCacheKey *key, PopplerCacheItem *item)
{
  int movingStartIndex = lastValidCacheIndex + 1;
  if (lastValidCacheIndex == cacheSize - 1) {
    delete keys[lastValidCacheIndex];
    delete items[lastValidCacheIndex];
    movingStartIndex = cacheSize - 1;
  } else {
    lastValidCacheIndex++;
  }
  for (int i = movingStartIndex; i > 0; i--) {
    keys[i] = keys[i - 1];
    items[i] = items[i - 1];
  }
  keys[0] = key;
  items[0] = item;
}
    
    
    {  if (!(core = (WinPDFCore *)doc->getGUIData()) ||
      !(password = core->getPassword())) {
    return NULL;
  }
  return new StandardAuthData(password, password->copy());
#else
  return NULL;
#endif
}
    
      // Attempt to authorize the document, using the supplied
  // authorization data (which may be NULL).  Returns true if
  // successful (i.e., if at least the right to open the document was
  // granted).
  virtual GBool authorize(void *authData) = 0;
    
      newsound->kind = kind;
  if (fileName) {
    newsound->fileName = fileName->copy();
  }
  newsound->samplingRate = samplingRate;
  newsound->channels = channels;
  newsound->bitsPerSample = bitsPerSample;
  newsound->encoding = encoding;
    
      ~SplashOutFontFileID() {}
    
    #ifndef SPLASHOUTPUTDEV_H
#define SPLASHOUTPUTDEV_H
    
    #if MXNET_USE_CUDA
/*!
 * \brief Storage manager with a memory pool on gpu. Memory chunks are reused based on exact size
 * match.
 */
class GPUPooledStorageManager final : public StorageManager {
 public:
  /*!
   * \brief Default constructor.
   *
   * \param initial_context context used by this Storage Manager
   */
  explicit GPUPooledStorageManager(Context initial_context) :
    initial_context_(initial_context) {
    reserve_ = dmlc::GetEnv('MXNET_GPU_MEM_POOL_RESERVE', 5);
    page_size_ = dmlc::GetEnv('MXNET_GPU_MEM_POOL_PAGE_SIZE', 4096);
    large_alloc_round_size_ = dmlc::GetEnv('MXNET_GPU_MEM_LARGE_ALLOC_ROUND_SIZE', 2 * 1024 * 1024);
    if (large_alloc_round_size_ <= 0) {
      LOG(FATAL) << 'MXNET_GPU_MEM_LARGE_ALLOC_ROUND_SIZE cannot be set to a value <= 0, found: '
                 << large_alloc_round_size_;
    }
    if (page_size_ < NDEV) {
      LOG(FATAL) << 'MXNET_GPU_MEM_POOL_PAGE_SIZE cannot be set to a value smaller than ' << NDEV \
                 << '. Got ' << page_size_ << '.';
    }
  }
  /*!
   * \brief Default destructor.
   */
  ~GPUPooledStorageManager() {
    ReleaseAll();
  }
    }
    
      bool InferShape(mxnet::ShapeVector *in_shape,
                  mxnet::ShapeVector *out_shape,
                  mxnet::ShapeVector *aux_shape) const override {
    using namespace mshadow;
    if (!param_.no_bias) {
      CHECK_EQ(in_shape->size(), 4U) << 'Input:[data, offset, weight, bias]';
    } else {
      CHECK_EQ(in_shape->size(), 3U) << 'Input:[data, offset, weight]';
    }
    out_shape->resize(1, mxnet::TShape());
    const mxnet::TShape &dshp = (*in_shape)[conv::kData];
    const mxnet::TShape &oshp = (*in_shape)[conv::kOffset];
    if (mxnet::op::shape_is_none(dshp)) return false;
    if (param_.kernel.ndim() == 2) {
      // 2d conv
      CHECK_EQ(dshp.ndim(), 4U) \
        << 'Input data should be 4D in batch-num_filter-y-x';
      CHECK_EQ(oshp.ndim(), 4U) \
        << 'Input offset should be 4D in batch-num_filter-y-x';
      Shape<4> dshape = ConvertLayout(dshp.get<4>(), param_.layout.value(), kNCHW);
      Shape<4> offsetshape = ConvertLayout(oshp.get<4>(), param_.layout.value(), kNCHW);
      Shape<4> wshape = Shape4(param_.num_filter / param_.num_group, dshape[1] / param_.num_group,
        param_.kernel[0], param_.kernel[1]);
      wshape = ConvertLayout(wshape, kNCHW, param_.layout.value());
      wshape[0] *= param_.num_group;
      SHAPE_ASSIGN_CHECK(*in_shape, conv::kWeight, wshape);
      if (!param_.no_bias) {
        SHAPE_ASSIGN_CHECK(*in_shape, conv::kBias, Shape1(param_.num_filter));
      }
    }
    }
    
        nt = gateN + t * N * H;
    dart = dar + t * N * H;
    #pragma omp parallel for num_threads(omp_threads)
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < H; ++j) {
        int id = i * H + j;
        if (mode == 1) {
          dart[id] = dht1[id] * (1 - nt[id] * nt[id]);
        } else {
          dart[id] = nt[id] > 0.0f ? static_cast<float>(dht1[id]) : 0.0f;
        }
        dht1[id] = 0;
      }
    }
    if (req_params != kNullOp) {
      alpha = 1.0;
      beta = 1.0;
      // dht1 = dart * wh    [N, H] = [N, H] * [H, H]
      Tensor<cpu, 2, DType> d_dht1(dht1, Shape2(N, H));
      Tensor<cpu, 2, DType> d_dart(dart, Shape2(N, H));
      linalg_gemm(d_dart, wh, d_dht1, alpha, beta, false, false);
    }
    
    #if DMLC_USE_CXX11
class DeformablePSROIPoolingProp : public OperatorProperty {
 public:
  std::vector<std::string> ListArguments() const override {
    if (param_.no_trans) {
      return{ 'data', 'rois' };
    } else {
      return{ 'data', 'rois', 'trans' };
    }
  }
    }
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    #include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/type_traits.h>
#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';
    
    
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

    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}
