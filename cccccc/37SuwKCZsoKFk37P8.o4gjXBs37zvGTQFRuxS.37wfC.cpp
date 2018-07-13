Value ValueIteratorBase::key() const {
  const Value::CZString czstring = (*current_).first;
  if (czstring.data()) {
    if (czstring.isStaticString())
      return Value(StaticString(czstring.data()));
    return Value(czstring.data(), czstring.data() + czstring.length());
  }
  return Value(czstring.index());
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__

    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    void RepeatedPrimitiveFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_repeated_$name$_codec);\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    #include <d3d11.h>
#pragma comment (lib, 'd3d11.lib')
    
        cv::Mat M2_1 = M2(cv::Range(0,27), cv::Range(0,27));
    cv::Mat M2_2 = M2(cv::Range(0,27), cv::Range(27,120));
    cv::Mat M2_3 = M2(cv::Range(27,120), cv::Range(27,120));
    cv::Mat M2_4 = M2(cv::Range(27,120), cv::Range(0,27));
    M2.release();
    
    namespace cv {
    }
    
    
    {
    {        double startWeight = cvtest::randReal(rng);
        CV_Assert(arr.type() == CV_64FC2);
        arr.at<Point2d>(modifiedPointIndex) = startWeight * arr.at<Point2d>(startPointIndex) + (1.0 - startWeight) * arr.at<Point2d>(endPointIndex);
    }
}
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL FFT dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL FFT dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    #endif // __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__

    
      /**
   * Returns the bounding rectangle of the current object at the given level.
   * See comment on coordinate system above.
   * Returns false if there is no such object at the current position.
   * The returned bounding box is guaranteed to match the size and position
   * of the image returned by GetBinaryImage, but may clip foreground pixels
   * from a grey image. The padding argument to GetImage can be used to expand
   * the image to include more foreground pixels. See GetImage below.
   */
  bool BoundingBox(PageIteratorLevel level,
                   int* left, int* top, int* right, int* bottom) const;
  bool BoundingBox(PageIteratorLevel level, const int padding,
                   int* left, int* top, int* right, int* bottom) const;
  /**
   * Returns the bounding rectangle of the object in a coordinate system of the
   * working image rectangle having its origin at (rect_left_, rect_top_) with
   * respect to the original image and is scaled by a factor scale_.
   */
  bool BoundingBoxInternal(PageIteratorLevel level,
                           int* left, int* top, int* right, int* bottom) const;
    
      /// Pix vs raw, which to use? Pix is the preferred input for efficiency,
  /// since raw buffers are copied.
  /// SetImage for Pix clones its input, so the source pix may be pixDestroyed
  /// immediately after, but may not go away until after the Thresholder has
  /// finished with it.
  void SetImage(const Pix* pix);
    
      // Runs a hierarchical agglomerative clustering to merge shapes in the given
  // shape_table, while satisfying the given constraints:
  // * End with at least min_shapes left in shape_table,
  // * No shape shall have more than max_shape_unichars in it,
  // * Don't merge shapes where the distance between them exceeds max_dist.
  void ClusterShapes(int min_shapes, int max_shape_unichars,
                     float max_dist, ShapeTable* shape_table);
    
    class BLOB_CHOICE_IT;
struct Pix;
class ROW_RES;
class ScrollView;
class TBOX;
class WERD_RES;
    
      // Given that error_rate is either a new min or max, updates the best/worst
  // error rates, and record of progress.
  STRING UpdateErrorGraph(int iteration, double error_rate,
                          const GenericVector<char>& model_data,
                          TestCallback tester);
    
    // Convenience instantiation of GENERIC_2D_ARRAY<double> with additional
// operations to write a strided vector, so the transposed form of the input
// is memory-contiguous.
class TransposedArray : public GENERIC_2D_ARRAY<double> {
 public:
  // Copies the whole input transposed, converted to double, into *this.
  void Transpose(const GENERIC_2D_ARRAY<double>& input);
  // Writes a vector of data representing a timestep (gradients or sources).
  // The data is assumed to be of size1 in size (the strided dimension).
  void WriteStrided(int t, const float* data) {
    int size1 = dim1();
    for (int i = 0; i < size1; ++i) put(i, t, data[i]);
  }
  void WriteStrided(int t, const double* data) {
    int size1 = dim1();
    for (int i = 0; i < size1; ++i) put(i, t, data[i]);
  }
  // Prints the first and last num elements of the un-transposed array.
  void PrintUnTransposed(int num) {
    int num_features = dim1();
    int width = dim2();
    for (int y = 0; y < num_features; ++y) {
      for (int t = 0; t < width; ++t) {
        if (num == 0 || t < num || t + num >= width) {
          tprintf(' %g', (*this)(y, t));
        }
      }
      tprintf('\n');
    }
  }
};  // class TransposedArray
    
    #define THDPDoubleStorage_CData(obj)  (obj)->cdata
#define THDPFloatStorage_CData(obj)   (obj)->cdata
#define THDPLongStorage_CData(obj)    (obj)->cdata
#define THDPIntStorage_CData(obj)     (obj)->cdata
#define THDPShortStorage_CData(obj)   (obj)->cdata
#define THDPCharStorage_CData(obj)    (obj)->cdata
#define THDPByteStorage_CData(obj)    (obj)->cdata
    
    template <typename T, typename... Ts>
struct or_trait<T, Ts...>
  : std::conditional<T::value, T, or_trait<Ts...>>::type {};
    
    
void THP_encodeInt16Buffer(uint8_t* dst, const int16_t* src, THPByteOrder order, size_t len)
{
  memcpy(dst, src, sizeof(int16_t) * len);
  if (order != THP_nativeByteOrder()) {
    for (size_t i = 0; i < len; i++) {
      swapBytes<sizeof(int16_t)>(dst);
      dst += sizeof(int16_t);
    }
  }
}
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    extern JSClass  *jsb_cocos2d_Physics3DComponent_class;
extern JSObject *jsb_cocos2d_Physics3DComponent_prototype;
    
    
    
    
    
    	void Step(Settings* settings)
	{
		if (m_break)
		{
			Break();
			m_broke = true;
			m_break = false;
		}
    }
    
    class MockEnvTest : public testing::Test {
 public:
  MockEnv* env_;
  const EnvOptions soptions_;
    }
    
    #pragma once
#include <memory>
#include <stdint.h>
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      void UpdateOldestKeyTime();
    
      SCOPE_EXIT {
    // Clean up creator thread when complete, and also, in case of errors here,
    // so that subsequent attempts don't think this is still in the process of
    // being built.
    creating_thread_.store(std::thread::id(), std::memory_order_release);
  };
    
    #include <string>
    
    
    {} // namespace folly

    
    void init(int* argc, char*** argv, bool removeFlags) {
#if FOLLY_USE_SYMBOLIZER
  // Install the handler now, to trap errors received during startup.
  // The callbacks, if any, can be installed later
  folly::symbolizer::installFatalSignalHandler();
#elif !defined(_WIN32)
  google::InstallFailureSignalHandler();
#endif
    }
    
    // Configure folly to enable INFO+ messages, and everything else to
// enable WARNING+.
//
// Set the default log handler to log asynchronously by default.
FOLLY_INIT_LOGGING_CONFIG('.=WARNING,folly=INFO; default:async=true');
    
    	XLoggerInfo xlog_info;
	gettimeofday(&xlog_info.timeval, NULL);
	xlog_info.level = (TLogLevel)_level;
	xlog_info.line = (int)_line;
	xlog_info.pid = (int)_pid;
	xlog_info.tid = LONGTHREADID2INT(_tid);
	xlog_info.maintid = LONGTHREADID2INT(_maintid);
    
    #include 'dumpcrash_stack.h'
    
    #ifndef SERVICEBASE_H_
#define SERVICEBASE_H_
    
    int ScopeJEnv::Status() {
    return status_;
}

    
    #include <jni.h>