
        
        
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    NS_ASSUME_NONNULL_END

    
      void addOccurrence(const IndexSymbol &indexOccur) {
    sorted = false;
    }
    
    #include 'swift/Syntax/Rewriter.h'
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
      /// Creates a copy of a \c MemoryBuffer and adds it to the \c SourceManager,
  /// taking ownership of the copy.
  unsigned addMemBufferCopy(llvm::MemoryBuffer *Buffer);
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #include <google/protobuf/descriptor.h>
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
            const std::vector<Point>* quads[4] = {&black_contours[black_order[0].first], &black_contours[black_order[1].first],
                                         &white_contours[white_order[0].first], &white_contours[white_order[1].first]};
        std::vector<Point2f> quads_approx[4];
        Point2f quad_corners[4];
        for(int k = 0; k < 4; k++)
        {
            std::vector<Point2f> temp;
            for(size_t j = 0; j < quads[k]->size(); j++) temp.push_back((*quads[k])[j]);
            approxPolyDP(Mat(temp), quads_approx[k], 0.5, true);
    }
    
    CV_EXPORTS_W void subtract(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    
        // Extension: 3.1
    extern void (CODEGEN_FUNCPTR *DrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
    extern void (CODEGEN_FUNCPTR *DrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei instancecount);
    extern void (CODEGEN_FUNCPTR *TexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
    extern void (CODEGEN_FUNCPTR *PrimitiveRestartIndex)(GLuint index);
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    namespace cv { namespace ocl { namespace runtime {
    }
    }
    }
    
    /* End of file. */

    
    using caffe::Datum;
using boost::scoped_ptr;
using std::string;
namespace db = caffe::db;
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    /**
 * @brief Abstract base class that factors out the BLAS code common to
 *        ConvolutionLayer and DeconvolutionLayer.
 */
template <typename Dtype>
class BaseConvolutionLayer : public Layer<Dtype> {
 public:
  explicit BaseConvolutionLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
      STRING lword_text;   // the UTF-8 text of the leftmost werd
  STRING rword_text;   // the UTF-8 text of the rightmost werd
    
    #include 'allheaders.h'
    
    namespace tesseract {
    }
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
    /**----------------------------------------------------------------------------
          Public Function Prototypes
----------------------------------------------------------------------------**/
void *Emalloc(int Size);
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
      // Daemon is requesting a synchronization of readable queue space.
  case OSQUERY_IOCTL_BUF_SYNC:
    // The queue buffer cannot be synchronized if it has not been allocated.
    if (osquery.buffer == NULL) {
      err = -EINVAL;
      goto error_exit;
    }
    
    #include <gtest/gtest.h>
    
      // Hold the process and process state externally.
  // Normally the WatcherRunner's entry point will persist these and use them
  // as input to the next testable method to compare changes.
  auto test_process = PlatformProcess::getCurrentProcess();
  PerformanceState state;
  // The inputs are sane.
  EXPECT_TRUE(runner.isWatcherHealthy(*test_process, state));
  // Calling the method again should internally detect no change, this means
  // the state is still normal.
  EXPECT_TRUE(runner.isWatcherHealthy(*test_process, state));
    
    Status WmiResultItem::GetLong(const std::string& name, long& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_I4) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = value.lVal;
  VariantClear(&value);
  return Status(0);
}
    
    struct FSEventsEventContext : public EventContext {
 public:
  ConstFSEventStreamRef fsevent_stream{nullptr};
  FSEventStreamEventFlags fsevent_flags{0};
  FSEventStreamEventId transaction_id{0};
    }
    
    #include 'db/_wrapper.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
    
    #include <memory>
#include <string>
#include <vector>
#include <algorithm>
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    
    {} // namespace rocksdb

    
        if (!s.ok() || DIR_ID_VALUE != fid) {
      s = Status::IOError(name, strerror(-ENOENT));
      break;
    }
    
      std::atomic<FlushStateEnum> flush_state_;
    
    #pragma once
    
    class MergingIterator;
    
      if(m_jSliceA != nullptr) {
    env->DeleteGlobalRef(m_jSliceA);
  }
    
    #include <jni.h>
#include <memory>
#include <string>
#include 'rocksjni/jnicallback.h'
#include 'rocksdb/comparator.h'
#include 'rocksdb/slice.h'
#include 'port/port.h'
    
    bool IsZero(double n);
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    auto Sqr = [](const double dat) { return dat * dat; };
auto Sqrt = [](const double dat) {
  // Avoid NaN due to imprecision in the calculations
  if (dat < 0.0) return 0.0;
  return std::sqrt(dat);
};