
        
          // Run shape inference.
  tensorflow::shape_inference::InferenceContext c(
      graph_def_version, &node, op_reg_data->op_def, input_shapes,
      input_tensors, input_tensor_as_shapes_protos,
      input_handle_shapes_and_types);
  TF_RETURN_IF_ERROR(c.construction_status());
    
      // Format the Op's descriptions so that it can be a Python docstring.
  void AddDocStringDescription();
    
    void CostAnalyzer::GatherCosts() {
  CostGraphDef cost_graph_measured;
  PredictCosts(&measure_estimator_, &cost_graph_measured,
               &total_time_measured_);
  VLOG(1) << 'Graph size: ' << item_->graph.node_size();
  VLOG(1) << 'cost_graph_measured size: ' << cost_graph_measured.node_size();
    }
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow

    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
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
    
    #include <cstdint>  // for int16_t
    
      // The ColPartitions in part_grid_ maybe over-segmented, particularly in the
  // block equation regions. So we like to identify these partitions and merge
  // them before we do the searching.
  void MergePartsByLocation();
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
     private:
  // Gets the up to the first 3 prefixes from s (split by _).
  // For example, tesseract_foo_bar will be split into tesseract,foo and bar.
  void GetPrefixes(const char* s, STRING* level_one,
                   STRING* level_two, STRING* level_three);
    
      /// Threshold the rectangle, taking everything except the src_pix
  /// from the class, using thresholds/hi_values to the output pix.
  /// NOTE that num_channels is the size of the thresholds and hi_values
  // arrays and also the bytes per pixel in src_pix.
  void ThresholdRectToPix(Pix* src_pix, int num_channels,
                          const int* thresholds, const int* hi_values,
                          Pix** pix) const;
    
    template <typename T>
inline StringName __constant_get_enum_name(T param, const String &p_constant) {
	if (GetTypeInfo<T>::VARIANT_TYPE == Variant::NIL)
		ERR_PRINTS('Missing VARIANT_ENUM_CAST for constant's enum: ' + p_constant);
	return GetTypeInfo<T>::get_class_info().class_name;
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Iterator traits for selecting an iterator type as
  *                an integral constant expression.
  */
    
       const_reference suffix() const
   {
      if(m_is_singular)
         raise_logic_error();
      return (*this)[-2];
   }
   const_iterator begin() const
   {
      return (m_subs.size() > 2) ? (m_subs.begin() + 2) : m_subs.end();
   }
   const_iterator end() const
   {
      return m_subs.end();
   }
   // format:
   template <class OutputIterator, class Functor>
   OutputIterator format(OutputIterator out,
                         Functor fmt,
                         match_flag_type flags = format_default) const
   {
      if(m_is_singular)
         raise_logic_error();
      typedef typename BOOST_REGEX_DETAIL_NS::compute_functor_type<Functor, match_results<BidiIterator, Allocator>, OutputIterator>::type F;
      F func(fmt);
      return func(*this, out, flags);
   }
   template <class Functor>
   string_type format(Functor fmt, match_flag_type flags = format_default) const
   {
      if(m_is_singular)
         raise_logic_error();
      std::basic_string<char_type> result;
      BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<char_type> > i(result);
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {   enum restart_info
   {
      restart_any = 0,
      restart_word = 1,
      restart_line = 2,
      restart_buf = 3,
      restart_continue = 4,
      restart_lit = 5,
      restart_fixed_lit = 6, 
      restart_count = 7
   };
};
    
    typedef basic_regex<char, regex_traits<char> > regex;
#ifndef BOOST_NO_WREGEX
typedef basic_regex<wchar_t, regex_traits<wchar_t> > wregex;
#endif
    
    #ifdef IMGUI_VULKAN_DEBUG_REPORT
    // Remove the debug report callback
    auto vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkDestroyDebugReportCallbackEXT');
    vkDestroyDebugReportCallbackEXT(g_Instance, g_DebugReport, g_Allocator);
#endif // IMGUI_VULKAN_DEBUG_REPORT
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_Marmalade_Init(true);
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    // Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;
    
    // Include OpenGL header (without an OpenGL loader) requires a bit of fiddling
#if defined(_WIN32) && !defined(APIENTRY)
#define APIENTRY __stdcall                  // It is customary to use APIENTRY for OpenGL function pointer declarations on all platforms.  Additionally, the Windows OpenGL header needs APIENTRY.
#endif
#if defined(_WIN32) && !defined(WINGDIAPI)
#define WINGDIAPI __declspec(dllimport)     // Some Windows OpenGL headers need this
#endif
#if defined(__APPLE__)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
    
    DEFINE_bool(populate_cache, false, 'Populate cache before operations');
DEFINE_int32(insert_percent, 40,
             'Ratio of insert to total workload (expressed as a percentage)');
DEFINE_int32(lookup_percent, 50,
             'Ratio of lookup to total workload (expressed as a percentage)');
DEFINE_int32(erase_percent, 10,
             'Ratio of erase to total workload (expressed as a percentage)');
    
      uint64_t single_refill_amount =
      delayed_write_rate_ * kRefillInterval / kMicrosPerSecond;
  if (bytes_left_ + single_refill_amount >= num_bytes) {
    // Wait until a refill interval
    // Never trigger expire for less than one refill interval to avoid to get
    // time.
    bytes_left_ = bytes_left_ + single_refill_amount - num_bytes;
    last_refill_time_ = time_now + kRefillInterval;
    return kRefillInterval + sleep_debt;
  }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
        // Remove any kind of caching of data from the offset to offset+length
  // of this file. If the length is 0, then it refers to the end of file.
  // If the system is not caching the file contents, then this is a noop.
  // This call has no effect on dirty pages in the cache.
  virtual Status InvalidateCache(size_t offset, size_t length) override {
    return file_->InvalidateCache(offset + prefixLength_, length);
  }
    
    struct PosixMemoryMappedFileBuffer : public MemoryMappedFileBuffer {
  PosixMemoryMappedFileBuffer(void* _base, size_t _length)
      : MemoryMappedFileBuffer(_base, _length) {}
  virtual ~PosixMemoryMappedFileBuffer();
};
    
      // Transaction could not commit since the write outside of the txn conflicted
  // with the read!
  assert(s.IsBusy());
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
      // Must be called before any CompareBlock() calls can be called.
  virtual void StartBlockComparisons() = 0;
  // No more CompareBlock() calls can be called after this.
  virtual void FinishBlockComparisons() = 0;
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    
    {}  // namespace guetzli
    
    void Usage() {
  fprintf(stderr,
      'Guetzli JPEG compressor. Usage: \n'
      'guetzli [flags] input_filename output_filename\n'
      '\n'
      'Flags:\n'
      '  --verbose    - Print a verbose trace of all attempts to standard output.\n'
      '  --quality Q  - Visual quality to aim for, expressed as a JPEG quality value.\n'
      '                 Default value is %d.\n'
      '  --memlimit M - Memory limit in MB. Guetzli will fail if unable to stay under\n'
      '                 the limit. Default limit is %d MB.\n'
      '  --nomemlimit - Do not limit memory usage.\n', kDefaultJPEGQuality, kDefaultMemlimitMB);
  exit(1);
}
    
    #include 'guetzli/jpeg_data.h'
    
    #include <assert.h>
#include <string.h>
    
    #include <atomic>
    
    exception_wrapper::VTable const exception_wrapper::uninit_{
    &noop_<void, exception_wrapper const*, exception_wrapper*>,
    &noop_<void, exception_wrapper*, exception_wrapper*>,
    &noop_<void, exception_wrapper*>,
    &noop_<void, exception_wrapper const*>,
    &uninit_type_,
    &noop_<std::exception const*, exception_wrapper const*>,
    &noop_<exception_wrapper, exception_wrapper const*>};
    
    #include <string>
    
    
    {
    {    CountedDetail::template release_shared<T>(p, count);
  }
};