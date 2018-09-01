
        
        // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
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
    
    #include <cstdint>
#include <vector>
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
     private:
  // The unique ID of this VC object.
  int my_id_;
  // Whether the parameter was changed_ and thus needs to be rewritten.
  bool changed_;
  // The actual ParamType of this VC object.
  ParamType param_type_;
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    #include <osquery/config.h>
#include <osquery/registry_factory.h>
    
    #include <string>
#include <vector>
    
      // Retrieve a basic events parser.
  auto plugin = Config::get().getParser('events');
  EXPECT_TRUE(plugin != nullptr);
  const auto& data = plugin->getData();
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json': 
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    class ExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('example_text', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple(
            'example_integer', INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }
    
    void Waves3D::update(float time)
{
    int i, j;
    for (i = 0; i < _gridSize.width + 1; ++i)
    {
        for (j = 0; j < _gridSize.height + 1; ++j)
        {
            Vec3 v = getOriginalVertex(Vec2(i ,j));
            v.z += (sinf((float)M_PI * time * _waves * 2 + (v.y+v.x) * 0.01f) * _amplitude * _amplitudeRate);
            //CCLOG('v.z offset is %f\n', (sinf((float)M_PI * time * _waves * 2 + (v.y+v.x) * .01f) * _amplitude * _amplitudeRate));
            setVertex(Vec2(i, j), v);
        }
    }
}
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
    Animation* Animation::create(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops /* = 1 */)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithAnimationFrames(arrayOfAnimationFrameNames, delayPerUnit, loops);
    animation->autorelease();
    return animation;
}
    
        /** Purges the cache. It releases all the Animation objects and the shared instance.
		@js NA
     */
    static void destroyInstance();
    
    void AtlasNode::setBlendFunc(const BlendFunc &blendFunc)
{
    _blendFunc = blendFunc;
}
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
bool ImGui_ImplAllegro5_ProcessEvent(ALLEGRO_EVENT *ev)
{
    ImGuiIO& io = ImGui::GetIO();
    }
    
    void ImGui_ImplFreeGLUT_SpecialUpFunc(int key, int x, int y)
{
    //printf('key_up_func %d\n', key);
    ImGuiIO& io = ImGui::GetIO();
    if (key + 256 < IM_ARRAYSIZE(io.KeysDown))
        io.KeysDown[key + 256] = false;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    void CleanupRenderTarget()
{
    WaitForLastSubmittedFrame();
    }
    
    #include 'imgui.h'
#include 'imgui_impl_dx10.h'
    
    void ImGui_ImplDX11_NewFrame()
{
    if (!g_pFontSampler)
        ImGui_ImplDX11_CreateDeviceObjects();
}

    
    #include 'common.h'
    
    
    {} // namespace aria2

    
    void DHTRoutingTable::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
    #include 'common.h'
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;