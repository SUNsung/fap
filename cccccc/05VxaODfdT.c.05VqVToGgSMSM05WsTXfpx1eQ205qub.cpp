
        
        #include 'absl/base/thread_annotations.h'
#include 'absl/types/optional.h'
#include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/cusolver_context.h'
#include 'tensorflow/compiler/xla/service/gpu/gpu_executable.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/stream_executor/blas.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // This file contains thunks which call into cudnn to run the various flavors of
// batch normalization: BatchNormInference, BatchNormTraining, and
// BatchNormGrad, known to cudnn as BatchNormForwardInference,
// BatchNormForwardTraining, and BatchNormBackward.
//
// As an alternative to using these thunks, XLA can decompose batchnorm HLOs
// into smaller components using the BatchNormRewriter pass.  This can result in
// faster code because those individual components can fuse into their
// inputs/outputs, but it may also be slower if cudnn's batchnorm implementation
// outperforms the code XLA generates for these components.
//
// Currently these thunks require that their inputs are F32s.
//
// Note that these thunks do not take full advantage of the cudnn batchnorm
// functions.  For example, cudnn lets you bias and/or scale the input/output,
// but these thunks don't currently support that.
    
    #include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/stream_executor/stream_executor.h'
    
      Status block_status = stream.BlockHostUntilDone();
  if (!block_status.ok()) {
    return InternalError('Failed to complete data transfer on stream %p: %s',
                         &stream, block_status.error_message());
  }
    
    #include <string>
    
      Status Initialize(const GpuExecutable& executable,
                    se::StreamExecutor* executor) override;
  Status ExecuteOnStream(const ExecuteParams& params) override;
    
    Status TanGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
    {{'cosx'}, 'Cos', {'x'}},
    {{'secx'}, 'Reciprocal', {'cosx'}},
    {{'secx2'}, 'Square', {'secx'}},
    {{'dx'}, 'Mul', {'dy', 'secx2'}}
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Tan', TanGrad);
    
    
    {  HloDCE dce;
  TF_ASSERT_OK_AND_ASSIGN(bool result, RunHloPass(&dce, module.get()));
  EXPECT_TRUE(result);
}
    
      void Compile(XlaOpKernelContext* ctx) override {
    const TensorShape logits_shape = ctx->InputShape(0);
    OP_REQUIRES(ctx, TensorShapeUtils::IsVectorOrHigher(logits_shape),
                errors::InvalidArgument('logits must have >= 1 dimension, got ',
                                        logits_shape.DebugString()));
    }
    
    /// <summary>
/// Invoked when Navigation to a certain page fails
/// </summary>
/// <param name='sender'>The Frame which failed navigation</param>
/// <param name='e'>Details about the navigation failure</param>
void App::OnNavigationFailed(Platform::Object ^ sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^ e)
{
    throw ref new FailureException('Failed to load Page ' + e->SourcePageType.Name);
}

    
            if (ullOperand <= UINT32_MAX)
        {
            *pulResult = (uint32_t)ullOperand;
            hr = S_OK;
        }
    
    void CHistoryCollector::SetDecimalSymbol(wchar_t decimalSymbol)
{
    m_decimalSymbol = decimalSymbol;
}
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
            bool IsNegative()
        {
            return m_isNegative;
        }
        void IsNegative(bool isNegative)
        {
            m_isNegative = isNegative;
        }
    
    #include 'pch.h'
#include 'LiveRegionHost.h'
    
    int main() {
  volatile int x = 0;
  emscripten_sleep(1);
  int jmpval = setjmp(buf);
  if (!jmpval) {
    x++;                  // should be properly restored once longjmp jumps back
    first();              // when executed, setjmp returns 1
    printf('skipped\n');  // does not print
  } else if (jmpval == 1) {  // when first() jumps back, setjmp returns 1
    printf('result: %d %d\n', x, jmpval);  // prints
    x++;
    emscripten_sleep(1);
    second();                 // when executed, setjmp returns -1
    emscripten_sleep(1);
  } else if (jmpval == -1) {  // when second() jumps back, setjmp returns -1
    printf('result: %d %d\n', x, jmpval);  // prints
  }
  emscripten_sleep(1);
  finish(x);
}

    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
      // get length
  dict->dictLookup('Length', &obj, fetchOriginatorNums);
  if (obj.isInt()) {
    length = (Guint)obj.getInt();
    obj.free();
  } else {
    error(getPos(), 'Bad 'Length' attribute in stream');
    obj.free();
    length = 0;
  }
    
      // Returns true if the operations performed since the last call to
  // clearStats() are all gray.
  GBool isGray() { return gray; }
    
    //------------------------------------------------------------------------
// ProfileData
//------------------------------------------------------------------------
    
    class GooString;
class Object;
class Stream;
    
      T3FontCache *			// Type 3 font cache
    t3FontCache[splashOutT3FontCacheSize];
  int nT3Fonts;			// number of valid entries in t3FontCache
  T3GlyphStack *t3GlyphStack;	// Type 3 glyph context stack
    
      virtual std::string toString() const CXX11_OVERRIDE;
    
      std::unique_ptr<DHTBucketTreeNode> root_;
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
    class DHTTokenUpdateCommand : public TimeBasedCommand {
private:
  DHTTokenTracker* tokenTracker_;
    }
    
            /**
         * Copy constructor.
         * It performs `fast copy`: For performance purpose, copying a Point<T> or Point<T> or cv::Mat just copies the
         * reference, it still shares the same internal data.
         * Modifying the copied element will modify the original one.
         * Use clone() for a slower but real copy, similarly to cv::Mat and Point<T>.
         * @param point Point to be copied.
         */
        Point<T>(const Point<T>& point);
    
    #if CL_HPP_TARGET_OPENCL_VERSION >= 200
    /*! \brief setArg overload taking a shared_ptr type
     */
    template<typename T, class D>
    cl_int setArg(cl_uint index, const cl::pointer<T, D> &argPtr)
    {
        return detail::errHandler(
            ::clSetKernelArgSVMPointer(object_, index, argPtr.get()),
            __SET_KERNEL_ARGS_ERR);
    }
    
    
    {    template Rectangle<char> recenter(const Rectangle<char>& rectangle, const char newWidth, const char newHeight);
    template Rectangle<signed char> recenter(const Rectangle<signed char>& rectangle, const signed char newWidth, const signed char newHeight);
    template Rectangle<short> recenter(const Rectangle<short>& rectangle, const short newWidth, const short newHeight);
    template Rectangle<int> recenter(const Rectangle<int>& rectangle, const int newWidth, const int newHeight);
    template Rectangle<long> recenter(const Rectangle<long>& rectangle, const long newWidth, const long newHeight);
    template Rectangle<long long> recenter(const Rectangle<long long>& rectangle, const long long newWidth, const long long newHeight);
    template Rectangle<unsigned char> recenter(const Rectangle<unsigned char>& rectangle, const unsigned char newWidth, const unsigned char newHeight);
    template Rectangle<unsigned short> recenter(const Rectangle<unsigned short>& rectangle, const unsigned short newWidth, const unsigned short newHeight);
    template Rectangle<unsigned int> recenter(const Rectangle<unsigned int>& rectangle, const unsigned int newWidth, const unsigned int newHeight);
    template Rectangle<unsigned long> recenter(const Rectangle<unsigned long>& rectangle, const unsigned long newWidth, const unsigned long newHeight);
    template Rectangle<unsigned long long> recenter(const Rectangle<unsigned long long>& rectangle, const unsigned long long newWidth, const unsigned long long newHeight);
    template Rectangle<float> recenter(const Rectangle<float>& rectangle, const float newWidth, const float newHeight);
    template Rectangle<double> recenter(const Rectangle<double>& rectangle, const double newWidth, const double newHeight);
    template Rectangle<long double> recenter(const Rectangle<long double>& rectangle, const long double newWidth, const long double newHeight);
}
