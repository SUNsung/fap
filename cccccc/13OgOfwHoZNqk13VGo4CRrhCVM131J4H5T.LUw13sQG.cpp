
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Caches pointers to numpy arrays which need to be dereferenced.
static std::vector<void*>* DecrefCache() {
  static std::vector<void*>* decref_cache = new std::vector<void*>;
  return decref_cache;
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/python/lib/core/py_exception_registry.h'
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_

    
      // -- Asynchronous memcopies.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__MEM.html#group__CUDA__MEM_1g56f30236c7c5247f8e061b59d3268362
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      if (LangOpts.Target.isTvOS()) {
    return (LangOpts.EnableAppExtensionRestrictions
            ? PlatformKind::tvOSApplicationExtension
            : PlatformKind::tvOS);
  }
    
    #include 'swift/ASTSectionImporter/ASTSectionImporter.h'
#include 'swift/Basic/Dwarf.h'
#include 'swift/Serialization/SerializedModuleLoader.h'
#include 'swift/Serialization/Validation.h'
#include 'llvm/Support/Debug.h'
#include 'llvm/Support/raw_ostream.h'
    
    //  This file implements a default caching implementation that never evicts
//  its entries.
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
    // WIN32 doesn't natively support <uuid/uuid.h>. Instead, we use Win32 APIs.
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <objbase.h>
#include <string>
#else
#include <uuid/uuid.h>
#endif
    
      static CFPointeeInfo forRecord(bool isConst, const clang::RecordDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = isConst;
    info.Decl = decl;
    return info;
  }
    
    ClangDiagnosticConsumer::ClangDiagnosticConsumer(
    ClangImporter::Implementation &impl,
    clang::DiagnosticOptions &clangDiagOptions,
    bool dumpToStderr)
  : TextDiagnosticPrinter(llvm::errs(), &clangDiagOptions),
    ImporterImpl(impl), DumpToStderr(dumpToStderr) {}
    
    
    {}  // namespace tesseract.
    
      // Recognize the first part of the word.
  recog_word_recursive(word);
  // Recognize the second part of the word.
  recog_word_recursive(word2);
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    namespace caffe2 {
std::vector<TensorShape> FCShapeInference(
    const OperatorDef& def,
    const vector<TensorShape>& in,
    bool pretransposed_weight) {
  vector<TensorShape> out(1);
  ArgumentHelper helper(def);
    }
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensors,
    MergeSingleScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with scalar features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 2 && n % 2 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1', '')
    .Input(1, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values')
    .Arg('feature_ids', 'feature ids');
    
    template <typename T, class Context>
class FlexibleTopKGradientOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
    // State shared by all concurrent executions of the same benchmark.
struct SharedState {
  port::Mutex mu;
  port::CondVar cv GUARDED_BY(mu);
  int total GUARDED_BY(mu);
    }
    
    
    {}  // namespace leveldb
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    
    {  // odd part
  const int C1 = table[0];
  const int C3 = table[2];
  const int C5 = table[4];
  const int C7 = table[6];
  in[1] = DESCALE(C1 * b0 + C3 * b1 + C5 * b2 + C7 * b3);
  in[3] = DESCALE(C3 * b0 - C7 * b1 - C1 * b2 - C5 * b3);
  in[5] = DESCALE(C5 * b0 - C1 * b1 + C7 * b2 + C3 * b3);
  in[7] = DESCALE(C7 * b0 - C5 * b1 + C3 * b2 - C1 * b3);
}
#undef DESCALE
#undef LOAD_CST
#undef LOAD
#undef MULT
#undef ADD
#undef SUB
#undef LSHIFT
#undef STORE16
#undef CORRECT_LSB
#undef kTan1
#undef kTan2
#undef kTan3m1
#undef k2Sqrt2
#undef BUTTERFLY
#undef COLUMN_DCT8
    
    constexpr int kDefaultMemlimitMB = 6000; // in MB
    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);