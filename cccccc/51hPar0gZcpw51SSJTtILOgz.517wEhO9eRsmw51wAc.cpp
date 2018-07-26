
        
        
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
      void setHashbangBufferID(unsigned BufferID) {
    assert(HashbangBufferID == 0U && 'Hashbang buffer ID already set');
    HashbangBufferID = BufferID;
  }
    
    /// A shorthand to clearly indicate that a value is a reference counted and
/// heap-allocated.
template <typename Inner>
using RC = llvm::IntrusiveRefCntPtr<Inner>;
    
    // On Cygwin, std::once_flag can not be used because it is larger than the
// platform word.
typedef uintptr_t swift_once_t;
#else
    
    #include 'Private.h'
#include 'swift/Runtime/Once.h'
#include 'swift/Runtime/Debug.h'
#include <type_traits>
    
    
    {
    {
    {  unsigned getNumFixitsApplied() const {
    return NumFixitsApplied;
  }
};
} // end namespace migrator
} // end namespace swift
    
    PyObject* NewFileServicesByName(const FileDescriptor* descriptor);
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
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
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39>
internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28,
    T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36,
    T37 v37, T38 v38, T39 v39) {
  return internal::ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39>(v1,
      v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17,
      v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31,
      v32, v33, v34, v35, v36, v37, v38, v39);
}
    
     private:
  Type type_;
    
    
// Helper function for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
template <typename Pred,
          typename T1>
AssertionResult AssertPred1Helper(const char* pred_text,
                                  const char* e1,
                                  Pred pred,
                                  const T1& v1) {
  if (pred(v1)) return AssertionSuccess();
    }
    
    
    {  template <class Tuple>
  static GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(6, Tuple))
  ConstField(const Tuple& t) { return t.f6_; }
};
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38>
struct Templates38 {
  typedef TemplateSel<T1> Head;
  typedef Templates37<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> Tail;
};
    
    
    {}  // namespace

    
    // A geometric model of paragraph indentation and alignment.
//
// Measurements are in pixels. The meaning of the integer arguments changes
// depending upon the value of justification.  Distances less than or equal
// to tolerance apart we take as 'equivalent' for the purpose of model
// matching, and in the examples below, we assume tolerance is zero.
//
// justification = LEFT:
//   margin       the 'ignored' margin to the left block edge.
//   first_indent indent from the left margin to a typical first text line.
//   body_indent  indent from the left margin of a typical body text line.
//
// justification = RIGHT:
//   margin       the 'ignored' margin to the right block edge.
//   first_indent indent from the right margin to a typical first text line.
//   body_indent  indent from the right margin of a typical body text line.
//
// justification = CENTER:
//   margin       ignored
//   first_indent ignored
//   body_indent  ignored
//
//  ====== Extended example, assuming each letter is ten pixels wide: =======
//
// +--------------------------------+
// |      Awesome                   | ParagraphModel(CENTER, 0, 0, 0)
// |   Centered Title               |
// | Paragraph Detection            |
// |      OCR TEAM                  |
// |  10 November 2010              |
// |                                |
// |  Look here, I have a paragraph.| ParagraphModel(LEFT, 0, 20, 0)
// |This paragraph starts at the top|
// |of the page and takes 3 lines.  |
// |  Here I have a second paragraph| ParagraphModel(LEFT, 0, 20, 0)
// |which indicates that the first  |
// |paragraph is not a continuation |
// |from a previous page, as it is  |
// |indented just like this second  |
// |paragraph.                      |
// |   Here is a block quote. It    | ParagraphModel(LEFT, 30, 0, 0)
// |   looks like the prior text    |
// |   but it  is indented  more    |
// |   and is fully justified.      |
// |  So how does one deal with     | ParagraphModel(LEFT, 0, 20, 0)
// |centered text, block quotes,    |
// |normal paragraphs, and lists    |
// |like what follows?              |
// |1. Make a plan.                 | ParagraphModel(LEFT, 0, 0, 30)
// |2. Use a heuristic, for example,| ParagraphModel(LEFT, 0, 0, 30)
// |   looking for lines where the  |
// |   first word of the next line  |
// |   would fit on the previous    |
// |   line.                        |
// |8. Try to implement the plan in | ParagraphModel(LEFT, 0, 0, 30)
// |   Python and try it out.       |
// |4. Determine how to fix the     | ParagraphModel(LEFT, 0, 0, 30)
// |   mistakes.                    |
// |5. Repeat.                      | ParagraphModel(LEFT, 0, 0, 30)
// |  For extra painful penalty work| ParagraphModel(LEFT, 0, 20, 0)
// |you can try to identify source  |
// |code.  Ouch!                    |
// +--------------------------------+
class ParagraphModel {
 public:
  ParagraphModel(tesseract::ParagraphJustification justification,
                 int margin,
                 int first_indent,
                 int body_indent,
                 int tolerance)
      : justification_(justification),
        margin_(margin),
        first_indent_(first_indent),
        body_indent_(body_indent),
        tolerance_(tolerance) {
    // Make one of {first_indent, body_indent} is 0.
    int added_margin = first_indent;
    if (body_indent < added_margin)
      added_margin = body_indent;
    margin_ += added_margin;
    first_indent_ -= added_margin;
    body_indent_ -= added_margin;
  }
    }
    
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
    
      // Returns a list of regions (boxes) which should be cleared in the original
  // image so as to perform shiro-rekha splitting. Pix is assumed to carry one
  // (or less) word only. Xheight measure could be the global estimate, the row
  // estimate, or unspecified. If unspecified, over splitting may occur, since a
  // conservative estimate of stroke width along with an associated multiplier
  // is used in its place. It is advisable to have a specified xheight when
  // splitting for classification/training.
  void SplitWordShiroRekha(SplitStrategy split_strategy,
                           Pix* pix,
                           int xheight,
                           int word_left,
                           int word_top,
                           Boxa* regions_to_clear);
    
    
    {}  // namespace tesseract.
    
    
    {} // namespace folly

    
    template <typename T, template <typename> class Atom = std::atomic>
class HazptrLockFreeLIFO {
  struct Node;
    }
    
      ~HazptrWideCAS() {
    delete node_.load(std::memory_order_relaxed);
  }
    
    Future<Unit> sleep(Duration dur, Timekeeper* tk) {
  std::shared_ptr<Timekeeper> tks;
  if (LIKELY(!tk)) {
    tks = folly::detail::getTimekeeperSingleton();
    tk = tks.get();
  }
    }
    
    
    {    return (origAllocated != *counter);
  }();
    
    int dup2(int fhs, int fhd) {
  return _dup2(fhs, fhd);
}
    
    
    {
}
    
    #include 'wakeuplock.h'
#include 'assert/__assert.h'
#include 'xlogger/xlogger.h'
    
    #include <string>
#include <set>
#include <map>
    
    jvalue JNU_CallMethodByName(JNIEnv* _env, jobject obj, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, jclass clazz, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, const char* _class_name, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByMethodInfo(JNIEnv* _env, JniMethodInfo _method_info, ...);
jvalue JNU_GetStaticField(JNIEnv* _env, jclass clazz, const char* _name, const char* sig);
jvalue JNU_GetField(JNIEnv* _env, jobject obj, const char* _name, const char* sig);
    
    #include <jni.h>
    
    #include <jni.h>