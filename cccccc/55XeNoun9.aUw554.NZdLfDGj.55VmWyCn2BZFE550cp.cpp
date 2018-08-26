
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Comparisons on PyBfloat16s.
PyObject* PyBfloat16_RichCompare(PyObject* a, PyObject* b, int op) {
  bfloat16 x, y;
  if (!AsBfloat16(a, &x) || !AsBfloat16(b, &y)) return nullptr;
  bool result;
  switch (op) {
    case Py_LT:
      result = x < y;
      break;
    case Py_LE:
      result = x <= y;
      break;
    case Py_EQ:
      result = x == y;
      break;
    case Py_NE:
      result = x != y;
      break;
    case Py_GT:
      result = x > y;
      break;
    case Py_GE:
      result = x >= y;
      break;
    default:
      LOG(FATAL) << 'Invalid op type ' << op;
  }
  return PyBool_FromLong(result);
}
    
    // Converts the given numpy ndarray to a (safe) TF_Tensor. The returned
// TF_Tensor in `out_tensor` may have its own Python reference to `ndarray`s
// data. After `out_tensor` is destroyed, this reference must (eventually) be
// decremented via ClearDecrefCache().
//
// `out_tensor` must be non-null. Caller retains ownership of `ndarray`.
Status PyArrayToTF_Tensor(PyObject* ndarray, Safe_TF_TensorPtr* out_tensor);
    
    #include <Python.h>
    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
    class RandomAccessFile;
    
    
    {
    {}  // namespace swig
}  // namespace tensorflow

    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37>
class ValueArray37 {
 public:
  ValueArray37(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
      v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
      v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
      v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23),
      v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29),
      v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35),
      v36_(v36), v37_(v37) {}
    }
    
      template <GTEST_3_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_3_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    return *this;
  }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  int max_offset = n - 8;
  int offset = 0;
  // Accumulate a set of 4 32-bit sums in sum, by loading 8 pairs of 8-bit
  // values, extending to 16 bit, multiplying to make 32 bit results.
  __m128i sum = _mm_setzero_si128();
  if (offset <= max_offset) {
    offset = 8;
    __m128i packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u));
    __m128i packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v));
    sum = _mm_cvtepi8_epi16(packed1);
    packed2 = _mm_cvtepi8_epi16(packed2);
    // The magic _mm_add_epi16 is perfect here. It multiplies 8 pairs of 16 bit
    // ints to make 32 bit results, which are then horizontally added in pairs
    // to make 4 32 bit results that still fit in a 128 bit register.
    sum = _mm_madd_epi16(sum, packed2);
    while (offset <= max_offset) {
      packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u + offset));
      packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v + offset));
      offset += 8;
      packed1 = _mm_cvtepi8_epi16(packed1);
      packed2 = _mm_cvtepi8_epi16(packed2);
      packed1 = _mm_madd_epi16(packed1, packed2);
      sum = _mm_add_epi32(sum, packed1);
    }
  }
  // Sum the 4 packed 32 bit sums and extract the low result.
  sum = _mm_hadd_epi32(sum, sum);
  sum = _mm_hadd_epi32(sum, sum);
  int32_t result = _mm_cvtsi128_si32(sum);
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    // Number of outputs held in each register. 8 x 32 bit ints.
constexpr int kNumOutputsPerRegister = 8;
// Maximum number of registers that we will use.
constexpr int kMaxOutputRegisters = 8;
// Number of inputs in the inputs register.
constexpr int kNumInputsPerRegister = 32;
// Number of inputs in each weight group.
constexpr int kNumInputsPerGroup = 4;
// Number of groups of inputs to be broadcast.
constexpr int kNumInputGroups = kNumInputsPerRegister / kNumInputsPerGroup;
    
    // If true, then AVX has been detected.
bool SIMDDetect::avx_available_;
bool SIMDDetect::avx2_available_;
bool SIMDDetect::avx512F_available_;
bool SIMDDetect::avx512BW_available_;
// If true, then SSe4.1 has been detected.
bool SIMDDetect::sse_available_;
    
      if (crunch_include_numerals) {
    total_alpha_count += total_digit_count - isolated_digits;
  }
    
    int EquationDetect::CountAlignment(
    const GenericVector<int>& sorted_vec, const int val) const {
  if (sorted_vec.empty()) {
    return 0;
  }
  const int kDistTh = static_cast<int>(roundf(0.03 * resolution_));
  const int pos = sorted_vec.binary_search(val);
  int count = 0;
    }
    
    class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    // Setter for the value.
void ParamContent::SetValue(const char* val) {
// TODO (wanke) Test if the values actually are properly converted.
// (Quickly visible impacts?)
  changed_ = true;
  if (param_type_ == VT_INTEGER) {
    iIt->set_value(atoi(val));
  } else if (param_type_ == VT_BOOLEAN) {
    bIt->set_value(atoi(val));
  } else if (param_type_ == VT_DOUBLE) {
    dIt->set_value(strtod(val, nullptr));
  } else if (param_type_ == VT_STRING) {
    sIt->set_value(val);
  }
}
    
      // Constructors for the various ParamTypes.
  ParamContent() = default;
  explicit ParamContent(tesseract::StringParam* it);
  explicit ParamContent(tesseract::IntParam* it);
  explicit ParamContent(tesseract::BoolParam* it);
  explicit ParamContent(tesseract::DoubleParam* it);
    
    #include <folly/DiscriminatedPtr.h>
    
    TEST(Dynamic, StringPtrs) {
  dynamic str = '12.0';
  dynamic num = 12.0;
  dynamic nullStr = folly::parseJson('\'foo\\u0000bar\'');
    }
    
    int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  gflags::SetCommandLineOptionWithMode(
      'bm_max_iters', '1000000', gflags::SET_FLAG_IF_DEFAULT);
  gflags::SetCommandLineOptionWithMode(
      'bm_min_iters', '100000', gflags::SET_FLAG_IF_DEFAULT);
  gflags::SetCommandLineOptionWithMode(
      'bm_max_secs', '1', gflags::SET_FLAG_IF_DEFAULT);
    }
    
    #ifndef SKIP_RESERVE
void BENCHFUN(reserve)(int iters, int size) {
  auto const obj = randomObject<VECTOR::value_type>();
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(random(0U, 1U), obj);
    v.reserve(size);
  }
}
BENCHMARK_PARAM(BENCHFUN(reserve), 16)
BENCHMARK_PARAM(BENCHFUN(reserve), 128)
BENCHMARK_PARAM(BENCHFUN(reserve), 1024)
#endif
    
    TEST(File, SimpleStringPiece) {
  char buf = 'x';
  File f(StringPiece('/etc/hosts'));
  EXPECT_NE(-1, f.fd());
  EXPECT_EQ(1, ::read(f.fd(), &buf, 1));
  f.close();
  EXPECT_EQ(-1, f.fd());
}