
        
        		// Shifting the edge inward by b2_toiSlop should
		// not cause the plane to pass the centroid.
		if ((d.x < 0.0f)||(d.y < 0.0f)){
			noError = false;
			error = 6;
		}
    
      Compression level can be specified in parameter level. At the moment,
  only level 1 and level 2 are supported.
  Level 1 is the fastest compression and generally useful for short data.
  Level 2 is slightly slower but it gives better compression ratio.
    
    #ifdef FIXED_POINT
/*#  define KISS_FFT_COS(phase)  TRIG_UPSCALE*floor(MIN(32767,MAX(-32767,.5+32768 * cos (phase))))
#  define KISS_FFT_SIN(phase)  TRIG_UPSCALE*floor(MIN(32767,MAX(-32767,.5+32768 * sin (phase))))*/
#  define KISS_FFT_COS(phase)  floor(.5+TWID_MAX*cos (phase))
#  define KISS_FFT_SIN(phase)  floor(.5+TWID_MAX*sin (phase))
#  define HALF_OF(x) ((x)>>1)
#elif defined(USE_SIMD)
#  define KISS_FFT_COS(phase) _mm_set1_ps( cos(phase) )
#  define KISS_FFT_SIN(phase) _mm_set1_ps( sin(phase) )
#  define HALF_OF(x) ((x)*_mm_set1_ps(.5f))
#else
#  define KISS_FFT_COS(phase) (kiss_fft_scalar) cos(phase)
#  define KISS_FFT_SIN(phase) (kiss_fft_scalar) sin(phase)
#  define HALF_OF(x) ((x)*.5f)
#endif
    
    #define SHR16(a, shift) SHR16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHR16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHR16: inputs are not short: %d >> %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a>>shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHR16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
#define SHL16(a, shift) SHL16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHL16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHL16: inputs are not short: %d %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a<<shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHL16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    
    {  int ret = x;
  return ret;
}
    
    BaseMapMatrix::BaseMapMatrix() {}
    
        auto it_lower = std::lower_bound(
        speed_limit_.speed_limit_points().begin(),
        speed_limit_.speed_limit_points().end(), s,
        [](const std::pair<double, double>& point, const double curr_s) {
          return point.first < curr_s;
        });
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
   -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0, -1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0, -1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0, -1,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    #include 'modules/planning/math/smoothing_spline/spline_1d_seg.h'
    
    GemMessageManager::GemMessageManager() {
  // Control Messages
  AddSendProtocolData<Accelcmd67, true>();
  AddSendProtocolData<Brakecmd6b, true>();
  AddSendProtocolData<Globalcmd69, true>();
  AddSendProtocolData<Headlightcmd76, true>();
  AddSendProtocolData<Horncmd78, true>();
  AddSendProtocolData<Shiftcmd65, true>();
  AddSendProtocolData<Steeringcmd6d, true>();
  AddSendProtocolData<Turncmd63, true>();
  AddSendProtocolData<Wipercmd90, true>();
    }
    
    void Brakemotorrpt170::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_motor_current(
      motor_current(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_shaft_position(
      shaft_position(bytes, length));
}
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
    #include 'gtest/gtest.h'
    
    // config detail: {'name': 'override_status', 'enum': {0:
// 'OVERRIDE_STATUS_NOT_OVERRIDDEN', 1: 'OVERRIDE_STATUS_OVERRIDDEN'},
// 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0,
// 'physical_range': '[0|1]', 'bit': 1, 'type': 'enum', 'order': 'motorola',
// 'physical_unit': ''}
Global_rpt_6a::Override_statusType Globalrpt6a::override_status(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(1, 1);
    }
    
    // config detail: {'name': 'latitude_seconds', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 23,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'sec'}
int Latlonheadingrpt82::latitude_seconds(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }