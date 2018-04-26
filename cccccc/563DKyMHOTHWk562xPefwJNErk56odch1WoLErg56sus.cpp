
        
          /**
   * Extract the OCR results, costs (penalty points for uncertainty),
   * and the bounding boxes of the characters.
   */
  TESS_LOCAL static int TesseractExtractResult(char** text,
                                    int** lengths,
                                    float** costs,
                                    int** x0,
                                    int** y0,
                                    int** x1,
                                    int** y1,
                                    PAGE_RES* page_res);
    
    
    {}  // namespace tesseract.
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
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
    
    
    {  ASSERT_HOST(word->raw_choice != nullptr);
}
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    int64_t SlowTimer::getTime() const {
  return m_timer.getMicroSeconds() / 1000;
}
    
    #include <string>
#include <atomic>
#include <set>
#include <deque>
    
      /*
   * Create a block intended to be used temporarily, as part of modifying
   * existing code.
   *
   * Although not necessary for correctness, the block may be freed with
   * freeScratchBlock when finished.
   */
  Vlabel makeScratchBlock();
    
    #ifdef HAVE_NUMA
    
    //////////////////////////////////////////////////////////////////////
    
    using std::vector;
    
    /*
 * Emit a function prologue from rec.
 *
 * Precondition: calling thread owns both code and metadata locks
 */
TCA emitFuncPrologueOptInternal(ProfTransRec* rec);
    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
    template<> AT_API Half convert(float f) {
  Half t;
  TH_float2halfbits(&f,&t.x);
  return t;
}
template<> AT_API float convert(Half f) {
  float t;
  TH_halfbits2float(&f.x,&t);
  return t;
}
    
    auto ${Storage}::retain() -> ${Storage}& {
  ${THStorage}_retain(${state,} storage);
  return *this;
}
    
    const char * ${Tensor}::typeString() {
  return '${Type}';
}
void * ${Tensor}::unsafeGetTH(bool retain) {
  if (retain)
      ${THTensor}_retain(${state,} tensor);
  return tensor;
}
    
    
    {
    {}
}

    
    #define THDPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPDoubleStorageClass)
#define THDPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPFloatStorageClass)
#define THDPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPHalfStorageClass)
#define THDPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPLongStorageClass)
#define THDPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPIntStorageClass)
#define THDPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPShortStorageClass)
#define THDPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPCharStorageClass)
#define THDPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPByteStorageClass)
    
      if (!db_wrapper->status_.ok()) {
    return scope.Close(Boolean::New(db_wrapper->status_.ok()));
  }
    
      uint32_t GetRestartPoint(uint32_t index) {
    assert(index < num_restarts_);
    return DecodeFixed32(data_ + restarts_ + index * sizeof(uint32_t));
  }
    
      // returns true if the reader has encountered an eof condition.
  bool IsEOF() {
    return eof_;
  }
    
    
// Directory object represents collection of files and implements
// filesystem operations that can be executed on directories.
class LibradosDirectory : public Directory {
  librados::IoCtx * _io_ctx;
  std::string _fid;
public:
  explicit LibradosDirectory(librados::IoCtx * io_ctx, std::string fid):
    _io_ctx(io_ctx), _fid(fid) {}
    }
    
    SyncPoint:: ~SyncPoint() {
  delete impl_;
}
    
    #pragma once