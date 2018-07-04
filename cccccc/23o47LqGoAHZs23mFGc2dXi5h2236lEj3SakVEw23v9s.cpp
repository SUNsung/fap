
        
        int main(int /*argc*/, char** /*argv*/)
{
    InitDevice();
    return 0;
}

    
            std::vector<std::vector<Point> > white_contours, black_contours;
        std::vector<Vec4i> white_hierarchy, black_hierarchy;
        findContours(black_comp, black_contours, black_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
        findContours(white_comp, white_contours, white_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
    
                static __device__ __forceinline__ int atomicMin(int* address, int val)
            {
                return ::atomicMin(address, val);
            }
            static __device__ __forceinline__ float atomicMin(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 120
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(::fminf(val, __int_as_float(assumed))));
                } while (assumed != old);
                return __int_as_float(old);
            #else
                (void) address;
                (void) val;
                return 0.0f;
            #endif
            }
            static __device__ __forceinline__ double atomicMin(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(::fmin(val, __longlong_as_double(assumed))));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    
    CV_EXPORTS_W void max(InputArray src1, Scalar src2, OutputArray dst);
    
    #ifndef GL_EXT_timer_query
    typedef int64_t GLint64EXT;
    typedef uint64_t GLuint64EXT;
#endif
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    /* ////////////////////////////////////////////////////////////////////
//
//  CvMat helper tables
//
// */
    
      gflags::SetUsageMessage('This script converts the MNIST dataset to\n'
        'the lmdb/leveldb format used by Caffe to load data.\n'
        'Usage:\n'
        '    convert_mnist_data [FLAGS] input_image_file input_label_file '
        'output_db_file\n'
        'The MNIST dataset could be downloaded at\n'
        '    http://yann.lecun.com/exdb/mnist/\n'
        'You should gunzip them after downloading,'
        'or directly use data/mnist/get_mnist.sh\n');
  gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_DECONV_LAYER_HPP_

    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      // Gets the (immutable) vector of TestInfos in this TestCase.
  const std::vector<TestInfo*>& test_info_list() const {
    return test_info_list_;
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
    
    
template <typename T1, typename T2, typename T3>
class CartesianProductGenerator3
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3> ParamType;
    }
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    $range i 1..n-1
$for i [[
$range j 1..i
$range k i+1..n
template <$for j, [[typename T$j]]>
struct Types<$for j, [[T$j]]$for k[[, internal::None]]> {
  typedef internal::Types$i<$for j, [[T$j]]> type;
};
    
    
    {
    {    return this->get_service().async_accept(this->get_implementation(), peer,
        &peer_endpoint, BOOST_ASIO_MOVE_CAST(AcceptHandler)(handler));
  }
};
    
      /// Peek at the incoming data on the stream. Returns the number of bytes read,
  /// or 0 if an error occurred.
  template <typename MutableBufferSequence>
  std::size_t peek(const MutableBufferSequence& buffers,
      boost::system::error_code& ec);
    
    namespace boost {
namespace asio {
    }
    }
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
        // The value associated with the context.
    Value* value_;
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterLoadModelFromBuffer
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterLoadModelFromBuffer
    (JNIEnv *jenv, jclass jcls, jlong jhandle, jbyteArray jbytes) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  jbyte* buffer = jenv->GetByteArrayElements(jbytes, 0);
  int ret = XGBoosterLoadModelFromBuffer(
      handle, buffer, jenv->GetArrayLength(jbytes));
  jenv->ReleaseByteArrayElements(jbytes, buffer, 0);
  return ret;
}
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    {        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsJointSpring:setAnchr1');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1'', nullptr);
            return 0;
        }
        cobj->setAnchr1(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsJointSpring:setAnchr1',argc, 1);
    return 0;
    
    #include 'Box2D/Box2D.h'
#include 'cocos2d.h'
    
        void DrawTitle(const char *string);
	virtual void Step(Settings* settings);
	virtual void Keyboard(unsigned char key) { B2_NOT_USED(key); }
	virtual void KeyboardUp(unsigned char key) { B2_NOT_USED(key); }
	void ShiftMouseDown(const b2Vec2& p);
	virtual bool MouseDown(const b2Vec2& p);
	virtual void MouseUp(const b2Vec2& p);
	void MouseMove(const b2Vec2& p);
	void LaunchBomb();
	void LaunchBomb(const b2Vec2& position, const b2Vec2& velocity);
	
	void SpawnBomb(const b2Vec2& worldPt);
	void CompleteBombSpawn(const b2Vec2& p);
    
    std::vector<std::vector<float> > RGBToYUV(const std::vector<float>& rgb) {
  std::vector<std::vector<float> > yuv(3, std::vector<float>(rgb.size() / 3));
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    const float r = rgb[p + 0];
    const float g = rgb[p + 1];
    const float b = rgb[p + 2];
    yuv[0][i] = RGBToY(r, g, b);
    yuv[1][i] = RGBToU(r, g, b);
    yuv[2][i] = RGBToV(r, g, b);
  }
  return yuv;
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    namespace guetzli {
    }
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);
    
      table = lut;
  table_bits = kJpegHuffmanRootTableBits;
  table_size = 1 << table_bits;
  total_size = table_size;
    
    #include <stdint.h>
#include <vector>
    
        int unit;
    double value;
    
    void Node::removeChild(Node * child)
{
    YGNodeRemoveChild(m_node, child->m_node);
}
    
     public: // Tree hierarchy mutators
    
    NBIND_CLASS(Size)
{
    construct<>();
    construct<double, double>();
}
    
    
#ifdef LOG_TAG
# define ALOGV(...) ::facebook::alog::logv(LOG_TAG, __VA_ARGS__)
# define ALOGD(...) ::facebook::alog::logd(LOG_TAG, __VA_ARGS__)
# define ALOGI(...) ::facebook::alog::logi(LOG_TAG, __VA_ARGS__)
# define ALOGW(...) ::facebook::alog::logw(LOG_TAG, __VA_ARGS__)
# define ALOGE(...) ::facebook::alog::loge(LOG_TAG, __VA_ARGS__)
# define ALOGF(...) ::facebook::alog::logf(LOG_TAG, __VA_ARGS__)
#endif
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }
    
      T *get() const {
    return (T*)pthread_getspecific(m_key);
  }