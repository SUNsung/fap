
        
        			if(mip == 0)
			{
				pImageData = a_pafSourceRGBA;
			}
			else
			{
				pMipImage = new float[mipWidth*mipHeight*4];
				if(FilterTwoPass(a_pafSourceRGBA, a_uiSourceWidth, a_uiSourceHeight, pMipImage, mipWidth, mipHeight, a_uiMipFilterFlags, Etc::FilterLanczos3) )
				{
					pImageData = pMipImage;
				}
			}
    
    	private:
    
    		Block4x4		*m_pblockParent;
		ColorFloatRGBA	*m_pafrgbaSource;
    
    		typedef struct
		{
			unsigned originGreen1 : 1;
			unsigned originRed : 6;
			unsigned detect1 : 1;
			//
			unsigned originBlue1 : 1;
			unsigned originGreen2 : 6;
			unsigned detect2 : 1;
			//
			unsigned originBlue3 : 2;
			unsigned detect4 : 1;
			unsigned originBlue2 : 2;
			unsigned detect3 : 3;
			//
			unsigned horizRed2 : 1;
			unsigned diff : 1;
			unsigned horizRed1 : 5;
			unsigned originBlue4 : 1;
			//
			unsigned horizBlue1: 1;
			unsigned horizGreen : 7;
			//
			unsigned vertRed1 : 3;
			unsigned horizBlue2 : 5;
			//
			unsigned vertGreen1 : 5;
			unsigned vertRed2 : 3;
			//
			unsigned vertBlue : 6;
			unsigned vertGreen2 : 2;
		} Planar;
    
    #include 'afhints.h'
    
    #define MIN16(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 16-bit value.   */
#define MAX16(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 16-bit value.   */
#define MIN32(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 32-bit value.   */
#define MAX32(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 32-bit value.   */
#define IMIN(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum int value.   */
#define IMAX(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum int value.   */
#define UADD32(a,b) ((a)+(b))
#define USUB32(a,b) ((a)-(b))
    
    /*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv5e(opus_val16 a, opus_val32 b)
{
  int res;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(b),'r'(a)
  );
  return res;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv5e(a, b))
    
    /* Step up function, converts reflection coefficients to prediction coefficients */
void silk_k2a_Q16(
    opus_int32                  *A_Q24,             /* O    Prediction coefficients [order] Q24                         */
    const opus_int32            *rc_Q16,            /* I    Reflection coefficients [order] Q16                         */
    const opus_int32            order               /* I    Prediction order                                            */
);
    
    
    {} // namespace aria2
    
    TEST(EsdCanClientTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::ESD_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    using apollo::drivers::canbus::Byte;
    
    #include 'modules/localization/msf/local_map/base_map/base_map_matrix.h'
    
    
    {  MatrixXd bd_golden(10, 1);
  bd_golden << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
  EXPECT_EQ(bd, bd_golden);
}
    
    void Spline1dSeg::SetSplineFunc(const PolynomialXd& spline_func) {
  spline_func_ = spline_func;
  derivative_ = PolynomialXd::DerivedFrom(spline_func_);
  second_order_derivative_ = PolynomialXd::DerivedFrom(derivative_);
  third_order_derivative_ = PolynomialXd::DerivedFrom(second_order_derivative_);
}
    
    void Brakemotorrpt170::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_motor_current(
      motor_current(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_shaft_position(
      shaft_position(bytes, length));
}
    
    // config detail: {'name': 'commanded_value', 'enum': {0:
// 'COMMANDED_VALUE_HEADLIGHTS_OFF', 1: 'COMMANDED_VALUE_LOW_BEAMS', 2:
// 'COMMANDED_VALUE_HIGH_BEAMS'}, 'precision': 1.0, 'len': 8, 'is_signed_var':
// False, 'offset': 0.0, 'physical_range': '[0|2]', 'bit': 15, 'type': 'enum',
// 'order': 'motorola', 'physical_unit': ''}
Headlight_rpt_77::Commanded_valueType Headlightrpt77::commanded_value(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }