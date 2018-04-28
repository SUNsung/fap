
        
        typedef NS_ENUM(NSInteger, ObjectBehaviorAction) {
    ObjectBehaviorActionRetain,
    ObjectBehaviorActionCopy,
    ObjectBehaviorActionMutableCopy
};
    
      unsigned getCodeCompletionBufferID() const {
    return CodeCompletionBufferID;
  }
    
    public:
  /// The replacement type.
  Type getReplacement() const { return Replacement; }
  
  /// The protocol conformances for the replacement. These appear in the same
  /// order as Archetype->getConformsTo() for the substituted archetype.
  const ArrayRef<ProtocolConformanceRef> getConformances() const {
    return Conformance;
  }
  
  Substitution() {}
  
  Substitution(Type Replacement, ArrayRef<ProtocolConformanceRef> Conformance);
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
      void OCRTester(const char* imgname, const char* groundtruth, const char* tessdatadir, const char* lang) {
    //log.info() << tessdatadir << ' for language: ' << lang << std::endl;
    char *outText;
    std::locale loc('C'); // You can also use '' for the default system locale
    std::ifstream file(groundtruth);
    file.imbue(loc); // Use it for file input
    std::string gtText((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    ASSERT_FALSE(api->Init(tessdatadir, lang)) << 'Could not initialize tesseract.';
    Pix *image = pixRead(imgname);
    ASSERT_TRUE(image != nullptr) << 'Failed to read test image.';
    api->SetImage(image);
    outText = api->GetUTF8Text();
    EXPECT_EQ(gtText,outText) << 'Phototest.tif OCR does not match ground truth for ' << ::testing::PrintToString(lang);
    api->End();
    delete [] outText;
    pixDestroy(&image);
  }
    
    /** Find lines from the image making the BLOCK_LIST. */
BLOCK_LIST* TessBaseAPI::FindLinesCreateBlockList() {
  FindLines();
  BLOCK_LIST* result = block_list_;
  block_list_ = nullptr;
  return result;
}
    
      protected:
    /**
     * Called by concrete classes.
     *
     * outputbase is the name of the output file excluding
     * extension. For example, '/path/to/chocolate-chip-cookie-recipe'
     *
     * extension indicates the file extension to be used for output
     * files. For example 'pdf' will produce a .pdf file, and 'hocr'
     * will produce .hocr files.
     */
    TessResultRenderer(const char *outputbase,
                       const char* extension);
    
     protected:
  // Function to compute part of a matrix.vector multiplication. The weights
  // are in a very specific order (see above) in w, which is multiplied by
  // u of length num_in, to produce output v after scaling the integer results
  // by the corresponding member of scales.
  // The amount of w and scales consumed is fixed and not available to the
  // caller. The number of outputs written to v will be at most num_out.
  typedef void (*PartialFunc)(const int8_t* w, const double* scales,
                              const int8_t* u, int num_in, int num_out,
                              double* v);
    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
      // After identify the math blocks, we do one more scanning on all text
  // partitions, and check if any of them is the satellite of:
  // math blocks: here a p is the satellite of q if:
  // 1. q is the nearest vertical neighbor of p, and
  // 2. y_gap(p, q) is less than a threshold, and
  // 3. x_overlap(p, q) is over a threshold.
  // Note that p can be the satellites of two blocks: its top neighbor and
  // bottom neighbor.
  void ProcessMathBlockSatelliteParts();
    
    #include          <string.h>
#include          <ctype.h>
#include          'params.h'
#include          'float2int.h'
#include          'tesseractclass.h'
    
    using namespace std;
using namespace thd;
using namespace thd::rpc;
    
    using namespace std;
    
    template<> AT_API Half convert(int64_t f) {
  return convert<Half,double>(static_cast<double>(f));
}
template<> AT_API int64_t convert(Half f) {
  return static_cast<int64_t>(convert<double,Half>(f));
}
    
    int64_t size(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.sizes()[dim];
}
    
    ${Storage}::${Storage}(Context* context, std::size_t size, std::unique_ptr<Allocator> allocator)
  : storage(nullptr),
    context(context) {
  auto ctx = new detail::AllocatorRetainable(std::move(allocator));
  storage = ${THStorage}_newWithAllocator(${state,} size, &wrapped_allocator, ctx);
  ctx->release();
  ${THStorage}_clearFlag(${state,} storage, TH_STORAGE_RESIZABLE);
}
    
    
    {  private:
    QueueWorker::Request _request;
  };
    
        std::shared_ptr<GlooCache::algorithm_type> algo;
    if (device == DeviceType::CPU) {
      algo = std::make_shared<::gloo::BroadcastOneToAll<T>>(
        context,
        std::initializer_list<T*>{reinterpret_cast<T*>(input_buffer.get())},
        count,
        src_rank);
#ifdef WITH_CUDA
    } else if (device == DeviceType::CUDA) {
      auto stream = THCState_getCurrentStream(THDGetCudaState());
    }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaDoubleTensor(THCudaDoubleTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Double).unsafeTensorFromTH((void*)tensor, true);
}
    
    
    
    
    
    
    
    
    {    delete[] glVertices;
}