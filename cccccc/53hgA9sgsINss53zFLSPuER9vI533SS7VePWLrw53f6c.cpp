
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    template <typename Device, typename T>
struct Reverse<Device, T, 0> {
  void operator()(const Device& d, typename TTypes<T, 0>::ConstTensor input,
                  const Eigen::array<bool, 0>& reverse_dims,
                  typename TTypes<T, 0>::Tensor output) {
    // Reversing a scalar is copying it.
    output.device(d) = input;
  }
};
    
      // Create work vector
  gtl::InlinedVector<int64, 32> scratch_holder(t_size);
    
    // The current impl actually ignores the axis argument.
// Only determine the index of the maximum value in the last dimension.
TfLiteStatus Eval(TfLiteContext* context, TfLiteNode* node, bool is_arg_max) {
  const TfLiteTensor* input = GetInput(context, node, kInputTensor);
  const TfLiteTensor* axis = GetInput(context, node, kAxis);
  TfLiteTensor* output = GetOutput(context, node, kOutputTensor);
    }
    
    namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    
    {  // Run constant folding operations on the given module. Returns whether the
  // module was changed (constant expressions folded).
  StatusOr<bool> Run(HloModule* module) override;
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::pmul(internal::psub(one, y), y);
  }
};
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    
    {}  // namespace
    
    #include <string>
#include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_shape.h'
#include 'tensorflow/core/framework/tensor_slice.pb.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#include 'tensorflow/core/lib/gtl/inlined_vector.h'
#include 'tensorflow/core/platform/logging.h'
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    void HHVM_FUNCTION(xhprof_frame_begin, const String& name) {
  Profiler *prof = ThreadInfo::s_threadInfo->m_profiler;
  if (prof) {
    s_profiler_factory->cacheString(name);
    prof->beginFrame(name.data());
  }
}
    
    
    {
    {} }

    
    Timer::~Timer() {
  if (!m_name.empty()) {
    report();
  }
}
    
    /*
 * Timing execution of block of codes.
 */
struct Timer {
  enum Type {
    WallTime,
    SystemCPU,
    UserCPU,
    TotalCPU,
  };
  enum ReportType {
    Log,
    Stderr,
    Trace,
  };
  enum Who {
    Self = RUSAGE_SELF,
    Children = RUSAGE_CHILDREN,
#ifdef RUSAGE_THREAD
    Thread = RUSAGE_THREAD,
#endif
  };
    }
    
      /**
   * Create a task. This returns a task handle, or null object
   * if there are no worker threads.
   */
  static Resource TaskStart(
    const String& url, const Array& headers,
    const String& remote_host,
    const String& post_data = null_string,
    const Array& files = null_array,
    int timeoutSeconds = -1,
    PageletServerTaskEvent *event = nullptr
  );
    
    struct Vframe {
  Vframe(const Func* func, int parent, int cost, uint64_t entry_weight)
    : func(func)
    , parent(parent)
    , entry_weight(entry_weight)
    , inclusive_cost(cost)
    , exclusive_cost(cost)
  {}
    }
    
    struct Block;
struct SSATmp;
    
    
    {  switch (op.arg1) {
  case 0:
    return success();
  case 1:
    return topT(env, 0).subtypeOf(BNum) ? success() : false;
  case 2:
    if (topT(env, 0).subtypeOf(BNum) &&
        topT(env, 1).subtypeOf(BNum)) {
      return success();
    }
    break;
  }
  return false;
}
    
    
    {  return match<bool>(
    dst,
    [&] (DeadIter) {
      match<void>(
        src,
        [] (DeadIter) {},
        [] (const LiveIter&) {
          always_assert(false && 'merging dead iter with live iter');
        }
      );
      return false;
    },
    [&] (LiveIter& diter) {
      return match<bool>(
        src,
        [&] (DeadIter) {
          always_assert(false && 'merging live iter with dead iter');
          return false;
        },
        [&] (const LiveIter& siter) {
          auto key = join(diter.types.key, siter.types.key);
          auto value = join(diter.types.value, siter.types.value);
          auto const count = mergeCounts(diter.types.count, siter.types.count);
          auto const throws1 =
            diter.types.mayThrowOnInit || siter.types.mayThrowOnInit;
          auto const throws2 =
            diter.types.mayThrowOnNext || siter.types.mayThrowOnNext;
          auto const baseLocal = (diter.baseLocal != siter.baseLocal)
            ? NoLocalId
            : diter.baseLocal;
          auto const keyLocal = (diter.keyLocal != siter.keyLocal)
            ? NoLocalId
            : diter.keyLocal;
          auto const initBlock = (diter.initBlock != siter.initBlock)
            ? NoBlockId
            : diter.initBlock;
          auto const changed =
            !equivalently_refined(key, diter.types.key) ||
            !equivalently_refined(value, diter.types.value) ||
            count != diter.types.count ||
            throws1 != diter.types.mayThrowOnInit ||
            throws2 != diter.types.mayThrowOnNext ||
            keyLocal != diter.keyLocal ||
            baseLocal != diter.baseLocal ||
            initBlock != diter.initBlock;
          diter.types =
            IterTypes {
              std::move(key),
              std::move(value),
              count,
              throws1,
              throws2
            };
          diter.baseLocal = baseLocal;
          diter.keyLocal = keyLocal;
          diter.initBlock = initBlock;
          return changed;
        }
      );
    }
  );
}
    
    #include 'hphp/hhbbc/eval-cell.h'
#include 'hphp/hhbbc/type-system.h'
    
      /**
   * Skip the top frame of the stack. Used to jump over internal frames.
   */
  BacktraceArgs& skipTop(bool skipTop = true) {
    m_skipTop = skipTop;
    return *this;
  }
    
    #include 'hphp/runtime/base/req-list.h'
#include 'hphp/runtime/base/request-event-handler.h'
#include 'hphp/runtime/base/request-local.h'
#include 'hphp/runtime/base/req-ptr.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-resource.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/runtime/base/type-variant.h'
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num,
                         int* histo_indexes, uint8_t* depth) {
  memset(depth, 0, *num * JpegHistogram::kSize);
  size_t costs[kMaxComponents];
  for (size_t i = 0; i < *num; ++i) {
    histo_indexes[i] = i;
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    CreateHuffmanTree(histo[i].counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0],
                      &depth[i * JpegHistogram::kSize]);
    costs[i] = (HistogramHeaderCost(histo[i]) +
                HistogramEntropyCost(histo[i],
                                     &depth[i * JpegHistogram::kSize]));
  }
  const size_t orig_num = *num;
  while (*num > 1) {
    size_t last = *num - 1;
    size_t second_last = *num - 2;
    JpegHistogram combined(histo[last]);
    combined.AddHistogram(histo[second_last]);
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    uint8_t depth_combined[JpegHistogram::kSize] = { 0 };
    CreateHuffmanTree(combined.counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0], depth_combined);
    size_t cost_combined = (HistogramHeaderCost(combined) +
                            HistogramEntropyCost(combined, depth_combined));
    if (cost_combined < costs[last] + costs[second_last]) {
      histo[second_last] = combined;
      histo[last] = JpegHistogram();
      costs[second_last] = cost_combined;
      memcpy(&depth[second_last * JpegHistogram::kSize], depth_combined,
             sizeof(depth_combined));
      for (size_t i = 0; i < orig_num; ++i) {
        if (histo_indexes[i] == last) {
          histo_indexes[i] = second_last;
        }
      }
      --(*num);
    } else {
      break;
    }
  }
  size_t total_cost = 0;
  for (size_t i = 0; i < *num; ++i) {
    total_cost += costs[i];
  }
  return (total_cost + 7) / 8;
}
    
    void OutputImage::ToLinearRGB(int xmin, int ymin, int xsize, int ysize,
                              std::vector<std::vector<float> >* rgb) const {
  const double* lut = Srgb8ToLinearTable();
  std::vector<uint8_t> rgb_pixels = ToSRGB(xmin, ymin, xsize, ysize);
  for (int p = 0; p < xsize * ysize; ++p) {
    for (int i = 0; i < 3; ++i) {
      (*rgb)[i][p] = static_cast<float>(lut[rgb_pixels[3 * p + i]]);
    }
  }
}
    
    
    {}  // namespace guetzli

    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
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
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    #include 'guetzli/jpeg_data.h'
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};