
        
          // Initiate a GetStatusAsync to the remote task named by 'task', and
  // update the cache with all the DeviceAttributes reported.
  Status RefreshDeviceStatus(const string& device_name);
    
    #endif  // GOOGLE_CUDA

    
    TfLiteRegistration* Register_ARG_MIN() {
  static TfLiteRegistration r = {nullptr, nullptr, arg_min_max::Prepare,
                                 arg_min_max::ArgMinEval};
  return &r;
}
    
      std::vector<T> GetOutput() { return ExtractVector<T>(output_); }
  std::vector<int> GetOutputShape() { return GetTensorShape(output_); }
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
    namespace atom {
    }
    
      // Returns whether shortcut handling is currently suspended.
  bool IsShortcutHandlingSuspended() const;
    
    std::string TtsPlatformImpl::error() {
  return error_;
}
    
    // File name of the Pepper Flash plugin on different platforms.
const base::FilePath::CharType kPepperFlashPluginFilename[] =
#if defined(OS_MACOSX)
    FPL('PepperFlashPlayer.plugin');
#elif defined(OS_WIN)
    FPL('pepflashplayer.dll');
#else  // OS_LINUX, etc.
    FPL('libpepflashplayer.so');
#endif
    
    // A handful of resource-like constants related to the Chrome application.
    
    #endif  // ATOM_COMMON_COLOR_UTIL_H_

    
    void StyledStreamWriter::writeArrayValue(const Value& value) {
  unsigned size = value.size();
  if (size == 0)
    pushValue('[]');
  else {
    bool isArrayMultiLine = isMultineArray(value);
    if (isArrayMultiLine) {
      writeWithIndent('[');
      indent();
      bool hasChildValue = !childValues_.empty();
      unsigned index = 0;
      for (;;) {
        const Value& childValue = value[index];
        writeCommentBeforeValue(childValue);
        if (hasChildValue)
          writeWithIndent(childValues_[index]);
        else {
          if (!indented_) writeIndent();
          indented_ = true;
          writeValue(childValue);
          indented_ = false;
        }
        if (++index == size) {
          writeCommentAfterValueOnSameLine(childValue);
          break;
        }
        *document_ << ',';
        writeCommentAfterValueOnSameLine(childValue);
      }
      unindent();
      writeWithIndent(']');
    } else // output on a single line
    {
      assert(childValues_.size() == size);
      *document_ << '[ ';
      for (unsigned index = 0; index < size; ++index) {
        if (index > 0)
          *document_ << ', ';
        *document_ << childValues_[index];
      }
      *document_ << ' ]';
    }
  }
}
    
    
    {
    {
    {}  // namespace cpp
}  // namespace compiler
}  // namespace protobuf
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    #include <string>
    
    #include <gtest/gtest.h>
    
            if(black_contours.size() < 5 || white_contours.size() < 5) continue;
    
        // Extension: 1.4
    extern void (CODEGEN_FUNCPTR *BlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
    extern void (CODEGEN_FUNCPTR *MultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
    extern void (CODEGEN_FUNCPTR *MultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei drawcount);
    extern void (CODEGEN_FUNCPTR *PointParameterf)(GLenum pname, GLfloat param);
    extern void (CODEGEN_FUNCPTR *PointParameterfv)(GLenum pname, const GLfloat *params);
    extern void (CODEGEN_FUNCPTR *PointParameteri)(GLenum pname, GLint param);
    extern void (CODEGEN_FUNCPTR *PointParameteriv)(GLenum pname, const GLint *params);
    
    #include '../../precomp.hpp'
    
    // Values() allows generating tests from explicitly specified list of
// parameters.
//
// Synopsis:
// Values(T v1, T v2, ..., T vN)
//   - returns a generator producing sequences with elements v1, v2, ..., vN.
//
// For example, this instantiates tests from test case BarTest each
// with values 'one', 'two', and 'three':
//
// INSTANTIATE_TEST_CASE_P(NumSequence, BarTest, Values('one', 'two', 'three'));
//
// This instantiates tests from test case BazTest each with values 1, 2, 3.5.
// The exact type of values will depend on the type of parameter in BazTest.
//
// INSTANTIATE_TEST_CASE_P(FloatingNumbers, BazTest, Values(1, 2, 3.5));
//
// Currently, Values() supports from 1 to $n parameters.
//
$range i 1..n
$for i [[
$range j 1..i
    
    // This header implements a family of generic predicate assertion
// macros:
//
//   ASSERT_PRED_FORMAT1(pred_format, v1)
//   ASSERT_PRED_FORMAT2(pred_format, v1, v2)
//   ...
//
// where pred_format is a function or functor that takes n (in the
// case of ASSERT_PRED_FORMATn) values and their source expression
// text, and returns a testing::AssertionResult.  See the definition
// of ASSERT_EQ in gtest.h for an example.
//
// If you don't care about formatting, you can use the more
// restrictive version:
//
//   ASSERT_PRED1(pred, v1)
//   ASSERT_PRED2(pred, v1, v2)
//   ...
//
// where pred is an n-ary function or functor that returns bool,
// and the values v1, v2, ..., must support the << operator for
// streaming to std::ostream.
//
// We also define the EXPECT_* variations.
//
// For now we only support predicates whose arity is at most 5.
// Please email googletestframework@googlegroups.com if you need
// support for higher arities.
    
      // Given directory = 'dir', base_name = 'test', number = 0,
  // extension = 'xml', returns 'dir/test.xml'. If number is greater
  // than zero (e.g., 12), returns 'dir/test_12.xml'.
  // On Windows platform, uses \ as the separator rather than /.
  static FilePath MakeFileName(const FilePath& directory,
                               const FilePath& base_name,
                               int number,
                               const char* extension);
    
    template <$for j, [[typename T$j]]>
class CartesianProductGenerator$i
    : public ParamGeneratorInterface< ::std::tr1::tuple<$for j, [[T$j]]> > {
 public:
  typedef ::std::tr1::tuple<$for j, [[T$j]]> ParamType;
    }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// TestMetaFactoryBase is a base class for meta-factories that create
// test factories for passing into MakeAndRegisterTestInfo function.
template <class ParamType>
class TestMetaFactoryBase {
 public:
  virtual ~TestMetaFactoryBase() {}
    }
    
    template <$for i, [[typename T$i = void]]>
class tuple;
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n < is_prime_size_; n++) {
      if (is_prime_[n]) return n;
    }
    }
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    // Returns true if the given blob overlaps more than max_overlaps blobs
// in the current grid.
bool CCNonTextDetect::BlobOverlapsTooMuch(BLOBNBOX* blob, int max_overlaps) {
  // Search the grid to see what intersects it.
  // Setup a Rectangle search for overlapping this blob.
  BlobGridSearch rsearch(this);
  const TBOX& box = blob->bounding_box();
  rsearch.StartRectSearch(box);
  rsearch.SetUniqueMode(true);
  BLOBNBOX* neighbour;
  int overlap_count = 0;
  while (overlap_count <= max_overlaps &&
         (neighbour = rsearch.NextRectSearch()) != nullptr) {
    if (box.major_overlap(neighbour->bounding_box())) {
      ++overlap_count;
      if (overlap_count > max_overlaps)
        return true;
    }
  }
  return false;
}
    
      // Creates and returns a Pix with the same resolution as the original
  // in which 1 (black) pixels represent likely non text (photo, line drawing)
  // areas of the page, deleting from the blob_block the blobs that were
  // determined to be non-text.
  // The photo_map (binary image mask) is used to bias the decision towards
  // non-text, rather than supplying a definite decision.
  // The blob_block is the usual result of connected component analysis,
  // holding the detected blobs.
  // The returned Pix should be PixDestroyed after use.
  Pix* ComputeNonTextMask(bool debug, Pix* photo_map, TO_BLOCK* blob_block);
    
      // This method returns y-extents of the shiro-rekha computed from the input
  // word image.
  static void GetShiroRekhaYExtents(Pix* word_pix,
                                    int* shirorekha_top,
                                    int* shirorekha_bottom,
                                    int* shirorekha_ylevel);