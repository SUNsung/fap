
        
        /** Change ',' to '.' everywhere in buffer.
 *
 * We had a sophisticated way, but it did not work in WinCE.
 * @see https://github.com/open-source-parsers/jsoncpp/pull/9
 */
static inline void fixNumericLocale(char* begin, char* end) {
  while (begin < end) {
    if (*begin == ',') {
      *begin = '.';
    }
    ++begin;
  }
}
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    #include <string>
    
    
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
      std::string class_access_level();
  const Options* options();
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    #include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/java/java_extension.h>
    
    namespace google {
namespace protobuf {
  class FieldDescriptor;         // descriptor.h
  class Descriptor;              // descriptor.h
  class ServiceDescriptor;       // descriptor.h
  namespace compiler {
    namespace java {
      class MessageGenerator;    // message.h
      class ExtensionGenerator;  // extension.h
      class ServiceGenerator;    // service.h
      class Context;             // context.h
    }
  }
}
    }
    
    ImmutableLazyMessageFieldGenerator::
ImmutableLazyMessageFieldGenerator(
    const FieldDescriptor* descriptor,
    int messageBitIndex,
    int builderBitIndex,
    Context* context)
    : ImmutableMessageFieldGenerator(
          descriptor, messageBitIndex, builderBitIndex, context) {
}
    
      char label_i;
  char label_j;
  char* pixels = new char[2 * rows * cols];
  std::string value;
    
      void Transform(const Datum& datum, Dtype* transformed_data);
  // Tranformation parameters
  TransformationParameter param_;
    
    #endif  // CAFFE_CONCAT_LAYER_HPP_

    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {  assert(msg.isEmpty());
  try {
    double arg6 = unpackFloat(msg);
    assert(false);
  } catch (exception &e) {}
  std::cout << 'OK' << std::endl;
  return 0;
}

    
    void * CUDAGenerator::unsafeGetTH() {
  return (void *) generator;
}
    
    inline void store_scalar(void* data, at::ScalarType scalarType, PyObject* obj) {
  switch (scalarType) {
    case at::kByte: *(uint8_t*)data = (uint8_t)THPUtils_unpackLong(obj); break;
    case at::kChar: *(char*)data = (char)THPUtils_unpackLong(obj); break;
    case at::kShort: *(int16_t*)data = (int16_t)THPUtils_unpackLong(obj); break;
    case at::kInt: *(int32_t*)data = (int32_t)THPUtils_unpackLong(obj); break;
    case at::kLong: *(int64_t*)data = THPUtils_unpackLong(obj); break;
    case at::kHalf:
      *(at::Half*)data = at::convert<at::Half, double>(THPUtils_unpackDouble(obj));
      break;
    case at::kFloat: *(float*)data = (float)THPUtils_unpackDouble(obj); break;
    case at::kDouble: *(double*)data = THPUtils_unpackDouble(obj); break;
    default: throw std::runtime_error('invalid type');
  }
}
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight_size[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  auto real_pad = (olen - ilen + kw - 1) / 2;
    
    template <typename C>
struct compare_less : detail::cmp_pred<C, ordering::lt, 0> {
  using detail::cmp_pred<C, ordering::lt, 0>::cmp_pred;
};
    
    /**
 * Wrapper around AsyncIO that allows you to schedule more requests than
 * the AsyncIO's object capacity.  Other requests are queued and processed
 * in a FIFO order.
 */
class AsyncIOQueue {
 public:
  /**
   * Create a queue, using the given AsyncIO object.
   * The AsyncIO object may not be used by anything else until the
   * queue is destroyed.
   */
  explicit AsyncIOQueue(AsyncIO* asyncIO);
  ~AsyncIOQueue();
    }
    
    
    {std::string AsyncFileWriter::getNumDiscardedMsg(size_t numDiscarded) {
  // We may want to make this customizable in the future (e.g., to allow it to
  // conform to the LogFormatter style being used).
  // For now just return a simple fixed message.
  return folly::to<std::string>(
      numDiscarded,
      ' log messages discarded: logging faster than we can write\n');
}
} // namespace folly

    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
    
    {private:
  DictionaryEntry DE[kMaxDictSize];
  size_t Size = 0;
};
    
    
    {
    {    std::string ArtifactPath = 'minimized-from-' + Hash(U);
    Cmd += ' -minimize_crash_internal_step=1 -exact_artifact_path=' +
        ArtifactPath;
    Printf('CRASH_MIN: executing: %s\n', Cmd.c_str());
    ExitCode = ExecuteCommand(Cmd);
    if (ExitCode == 0) {
      if (Flags.exact_artifact_path) {
        CurrentFilePath = Flags.exact_artifact_path;
        WriteToFile(U, CurrentFilePath);
      }
      Printf('CRASH_MIN: failed to minimize beyond %s (%d bytes), exiting\n',
             CurrentFilePath.c_str(), U.size());
      return 0;
    }
    CurrentFilePath = ArtifactPath;
    Printf('\n\n\n\n\n\n*********************************\n');
  }
  return 0;
}
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir) {
  auto E = GetEpoch(Dir);
  if (Epoch)
    if (E && *Epoch >= E) return;
    }
    
    
    {    size_t BlockCoverage;
    size_t CallerCalleeCoverage;
    // Precalculated number of bits in CounterBitmap.
    size_t CounterBitmapBits;
    std::vector<uint8_t> CounterBitmap;
    ValueBitMap VPMap;
  };
    
    #if defined(__has_include)
#if __has_include(<sanitizer / coverage_interface.h>)
#include <sanitizer/coverage_interface.h>
#endif
#if __has_include(<sanitizer / lsan_interface.h>)
#include <sanitizer/lsan_interface.h>
#endif
#endif
    
    
    {  // Execute the inner process untill it passes.
  // Every inner process should execute at least one input.
  std::string BaseCmd = CloneArgsWithoutX(Args, 'keep-all-flags');
  for (size_t i = 1; i <= AllFiles.size(); i++) {
    Printf('MERGE-OUTER: attempt %zd\n', i);
    auto ExitCode =
        ExecuteCommand(BaseCmd + ' -merge_control_file=' + CFPath);
    if (!ExitCode) {
      Printf('MERGE-OUTER: succesfull in %zd attempt(s)\n', i);
      break;
    }
  }
  // Read the control file and do the merge.
  Merger M;
  std::ifstream IF(CFPath);
  M.ParseOrExit(IF, true);
  IF.close();
  std::vector<std::string> NewFiles;
  size_t NumNewFeatures = M.Merge(&NewFiles);
  Printf('MERGE-OUTER: %zd new files with %zd new features added\n',
         NewFiles.size(), NumNewFeatures);
  for (auto &F: NewFiles)
    WriteToOutputCorpus(FileToVector(F));
  // We are done, delete the control file.
  RemoveFile(CFPath);
}
    
    void TracePC::PrintNewPCs() {
  if (DoPrintNewPCs) {
    if (!PrintedPCs)
      PrintedPCs = new std::set<uintptr_t>;
    for (size_t i = 1; i < GetNumPCs(); i++)
      if (PCs[i] && PrintedPCs->insert(PCs[i]).second)
        PrintPC('\tNEW_PC: %p %F %L\n', '\tNEW_PC: %p\n', PCs[i]);
  }
}
    
    int TraceState::TryToAddDesiredData(uint64_t PresentData, uint64_t DesiredData,
                                    size_t DataSize) {
  if (NumMutations >= kMaxMutations || !WantToHandleOneMoreMutation()) return 0;
  ScopedDoingMyOwnMemmem scoped_doing_my_own_memmem;
  const uint8_t *UnitData;
  auto UnitSize = F->GetCurrentUnitInFuzzingThead(&UnitData);
  int Res = 0;
  const uint8_t *Beg = UnitData;
  const uint8_t *End = Beg + UnitSize;
  for (const uint8_t *Cur = Beg; Cur < End; Cur++) {
    Cur = (uint8_t *)SearchMemory(Cur, End - Cur, &PresentData, DataSize);
    if (!Cur)
      break;
    size_t Pos = Cur - Beg;
    assert(Pos < UnitSize);
    AddMutation(Pos, DataSize, DesiredData);
    AddMutation(Pos, DataSize, DesiredData + 1);
    AddMutation(Pos, DataSize, DesiredData - 1);
    Res++;
  }
  return Res;
}