
        
        #include <unordered_map>
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {}  // namespace tensorflow

    
    #ifndef PyObject_HEAD
struct _object;
typedef _object PyObject;
#endif
    
    // Creates a numpy array in 'ret' and copies the content of tensor 't'
// into 'ret'.
Status ConvertTensorToNdarray(const Tensor& t, PyObject** ret);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Computes real-to-complex FFT in forward direction.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<float> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<double> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        struct Size2D {
        Size2D() : width(0), height(0) {}
        Size2D(size_t width_, size_t height_) : width(width_), height(height_) {}
    }
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
        f32 alpha, beta, gamma;
    float32x4_t valpha, vbeta, vgamma;
    wAdd(f32 _alpha, f32 _beta, f32 _gamma):
        alpha(_alpha), beta(_beta), gamma(_gamma)
    {
        valpha = vdupq_n_f32(_alpha);
        vbeta = vdupq_n_f32(_beta);
        vgamma = vdupq_n_f32(_gamma + 0.5);
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
    namespace CAROTENE_NS {
    }
    
                for(; j < (ptrdiff_t)size.width - 16 - 3; j += 16, ptr += 16)
            {
                internal::prefetch(ptr);
                internal::prefetch(ptr + pixel[0]);
                internal::prefetch(ptr + pixel[2]);
    }
    
                if(x) {
                tcurr = tnext;
            }
            tnext = vsubq_s16(vreinterpretq_s16_u16(vaddl_u8(x0, x2)),
                              vreinterpretq_s16_u16(vshll_n_u8(x1, 2)));
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    bool Status::operator==(const Status& x) const {
  return error_code_ == x.error_code_ &&
      error_message_ == x.error_message_;
}
    
    #include 'google/protobuf/compiler/plugin.h'
    
    
    {
    {    cout << 'Is this a mobile, home, or work phone? ';
    string type;
    getline(cin, type);
    if (type == 'mobile') {
      phone_number->set_type(tutorial::Person::MOBILE);
    } else if (type == 'home') {
      phone_number->set_type(tutorial::Person::HOME);
    } else if (type == 'work') {
      phone_number->set_type(tutorial::Person::WORK);
    } else {
      cout << 'Unknown phone type.  Using default.' << endl;
    }
  }
  *person->mutable_last_updated() = TimeUtil::SecondsToTimestamp(time(NULL));
}
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    
    {}  // namespace tesseract.
    
            friend Rational operator+(Rational lhs, Rational const& rhs);
        friend Rational operator-(Rational lhs, Rational const& rhs);
        friend Rational operator*(Rational lhs, Rational const& rhs);
        friend Rational operator/(Rational lhs, Rational const& rhs);
        friend Rational operator%(Rational lhs, Rational const& rhs);
    
        Rational Sin(Rational const& rat, ANGLE_TYPE angletype);
    Rational Cos(Rational const& rat, ANGLE_TYPE angletype);
    Rational Tan(Rational const& rat, ANGLE_TYPE angletype);
    Rational ASin(Rational const& rat, ANGLE_TYPE angletype);
    Rational ACos(Rational const& rat, ANGLE_TYPE angletype);
    Rational ATan(Rational const& rat, ANGLE_TYPE angletype);
    
    class CCalcEngine
{
public:
    CCalcEngine(
        bool fPrecedence,
        bool fIntegerMode,
        CalculationManager::IResourceProvider* const pResourceProvider,
        __in_opt ICalcDisplay* pCalcDisplay,
        __in_opt std::shared_ptr<IHistoryDisplay> pHistoryDisplay);
    void ProcessCommand(OpCode wID);
    void DisplayError(uint32_t nError);
    std::unique_ptr<CalcEngine::Rational> PersistedMemObject();
    void PersistedMemObject(CalcEngine::Rational const& memObject);
    bool FInErrorState()
    {
        return m_bError;
    }
    bool FInRecordingState()
    {
        return m_bRecord;
    }
    void SettingsChanged();
    bool IsCurrentTooBigForTrig();
    int GetCurrentRadix();
    std::wstring GetCurrentResultForRadix(uint32_t radix, int32_t precision);
    void ChangePrecision(int32_t precision)
    {
        m_precision = precision;
        ChangeConstants(m_radix, precision);
    }
    std::wstring GroupDigitsPerRadix(std::wstring_view numberString, uint32_t radix);
    std::wstring GetStringForDisplay(CalcEngine::Rational const& rat, uint32_t radix);
    void UpdateMaxIntDigits();
    wchar_t DecimalSeparator() const;
    }
    
            std::wstring value;
    
    
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
        /**
     * Get maximum significant digits. 0 means no minimum.
     */
    int32_t getMin() const {
        return fMin;
    }
    
    void
SimpleTimeZone::initTransitionRules(UErrorCode& status) {
    if (U_FAILURE(status)) {
        return;
    }
    if (transitionRulesInitialized) {
        return;
    }
    deleteTransitionRules();
    UnicodeString tzid;
    getID(tzid);
    }
    
        static const int32_t gDigitCount[] = {
        1,1,1,1,1,1,1,1,
        1,1,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4};
    
    /**
 * Parse an integer using fNumberFormat up to maxDigits.
 */
void SimpleDateFormat::parseInt(const UnicodeString& text,
                                Formattable& number,
                                int32_t maxDigits,
                                ParsePosition& pos,
                                UBool allowNegative,
                                NumberFormat *fmt) const {
    UnicodeString oldPrefix;
    DecimalFormat* df = NULL;
    if (!allowNegative && (df = dynamic_cast<DecimalFormat*>(fmt)) != NULL) {
        df->getNegativePrefix(oldPrefix);
        df->setNegativePrefix(UnicodeString(TRUE, SUPPRESS_NEGATIVE_PREFIX, -1));
    }
    int32_t oldPos = pos.getIndex();
    fmt->parse(text, number, pos);
    if (df != NULL) {
        df->setNegativePrefix(oldPrefix);
    }
    }
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const UnicodeString &keyword);