
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15>
internal::ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) {
  return internal::ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12,
      v13, v14, v15);
}
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4,
          typename T5>
AssertionResult AssertPred5Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  const char* e5,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4,
                                  const T5& v5) {
  if (pred(v1, v2, v3, v4, v5)) return AssertionSuccess();
    }
    
    // DeathTest is a class that hides much of the complexity of the
// GTEST_DEATH_TEST_ macro.  It is abstract; its static Create method
// returns a concrete class that depends on the prevailing death test
// style, as defined by the --gtest_death_test_style and/or
// --gtest_internal_run_death_test flags.
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    template <typename T1, typename T2>
struct AssertTypeEq;
    
    $for i [[
$range j 1..i
$range k 2..i
template <$for j, [[typename T$j]]>
struct Types$i {
  typedef T1 Head;
  typedef Types$(i-1)<$for k, [[T$k]]> Tail;
};
    
    #include 'sample1.h'
    
      // Adds an element to the end of the queue.  A copy of the element is
  // created using the copy constructor, and then stored in the queue.
  // Changes made to the element in the queue doesn't affect the source
  // object, and vice versa.
  void Enqueue(const E& element) {
    QueueNode<E>* new_node = new QueueNode<E>(element);
    }
    
        void NDMask::CopyFrom(const NDMask& source)
    {
        if (source.Shape() != Shape())
            InvalidArgument('NDMask::CopyFrom: The source mask's shape '%S' must be same as this NDMask's shape '%S'.', source.Shape().AsString().c_str(), Shape().AsString().c_str());
    }
    
    namespace CNTK
{
    const std::wstring versionKey = L'version';
    const std::wstring typeKey = L'type';
    const std::wstring uidKey = L'uid';
    const std::wstring kindKey = L'kind';
    const std::wstring dataTypeKey = L'data_type';
    const std::wstring dynamicAxisKey = L'dynamic_axis';
    const std::wstring isSparseKey = L'is_sparse';
    const std::wstring nameKey = L'name';
    const std::wstring needsGradientKey = L'needs_gradient';
    const std::wstring shapeKey = L'shape';
    const std::wstring valueKey = L'value';
    const std::wstring opKey = L'op';
    const std::wstring attributesKey = L'attributes';
    const std::wstring inputsKey = L'inputs';
    const std::wstring rootKey = L'root';
    const std::wstring functionsKey = L'primitive_functions';
    const std::wstring sampleCountKey = L'sample_count';
    const std::wstring minibatchCountKey = L'minibatchCount'; // TODO: Python-style spelling
    const std::wstring sweepCountKey = L'sweepCount';
    const std::wstring unitKey = L'unit';
    const std::wstring refMBSizeKey = L'ref_mb_size';
    const std::wstring epochSizeKey = L'epoch_size';
    const std::wstring scheduleKey = L'schedule';
    const std::wstring learningRateScheduleKey = L'learnig_rate_schedule';
    const std::wstring smoothedGradientsKey = L'smoothed_gradients';
    const std::wstring noiseInjectionSeedKey = L'noise_injection_seed';
    const std::wstring masterParameterUpdatedKey = L'master_parameter_updated';
    const std::wstring smoothedCountKey = L'smoothed_count';
    const std::wstring stateKey = L'state';
    const std::wstring rngSeedKey = L'rng_seed';
    const std::wstring rngOffsetKey = L'rng_offset';
    const std::wstring blockFunctionCompositeKey = L'block_function_composite';
    const std::wstring blockFunctionOpNameKey = L'block_function_op_name';
    const std::wstring blockFunctionCompositeArgumentsMapKeysKey = L'block_function_composite_arguments_map_keys';
    const std::wstring blockFunctionCompositeArgumentsMapValuesKey = L'block_function_composite_arguments_map_values';
    const std::wstring internalWorkerStateKey = L'internal_worker_state';
    const std::wstring externalWorkerStateKey = L'external_worker_state';
    const std::wstring userDefinedStateKey = L'user_defined_state';
    const std::wstring udfModuleNameKey = L'module';
    const std::wstring udfFactoryMethodNameKey = L'deserialize_method';
    const std::wstring nativeUDFKey = L'native';
    }
    
            static bool IsUDF(const Dictionary& dict);
    
                auto sequenceValueVarSubshape = currentSequenceDataShape.SubShape(0, fullyDefinedSampleShape.Rank());
            if (sequenceValueVarSubshape != fullyDefinedSampleShape)
            {
                for (size_t k = 0; k < fullyDefinedSampleShape.Rank(); ++k)
                {
                    if (fullyDefinedSampleShape[k] == NDShape::FreeDimension)
                        fullyDefinedSampleShape[k] = sequenceValueVarSubshape[k];
                    else if (fullyDefinedSampleShape[k] != sequenceValueVarSubshape[k])
                        InvalidArgument('Value::Create: The shape '%S' of sequence #%zu is not compatible with the sample shape '%S'.', currentSequenceData->Shape().AsString().c_str(), i, sampleShape.AsString().c_str());
                }
            }
    
    
    {            return { m_packedData->GetMatrix<ElementType>(), m_packedDataLayout };
        }
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
    
    {    bool IsRandomizationDisabled() const
    {
        return randomizationrange == randomizeDisable;
    }
};
    
    
    {    ~ScopeTimer()
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Stop();
            double time = m_aggregateTimer.ElapsedSeconds();
            fprintf(stderr, m_message.c_str(), time);
        }
    }
};
    
        // ComputationNode derived classes are guaranteed to have a MBLayout
    if (isFinalValidationPass && !HasMBLayout())
        InvalidArgument('%ls: Input [%s] must operate on minibatches.', NodeDescription().c_str(), string(shapeB).c_str());
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    double ObjectGeneralInfo60B::lateral_dist(const std::uint8_t* bytes,
                                          int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 3);
    }
    
    int ObjectQualityInfo60C::meas_state(const std::uint8_t* bytes,
                                     int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(2, 3);
    }
    
    #include 'modules/planning/common/speed_limit.h'
    
    #include 'modules/canbus/vehicle/gem/protocol/accel_rpt_68.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_1_70.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_2_71.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_3_72.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'
#include 'modules/canbus/vehicle/gem/protocol/date_time_rpt_83.h'
#include 'modules/canbus/vehicle/gem/protocol/global_rpt_6a.h'
#include 'modules/canbus/vehicle/gem/protocol/headlight_rpt_77.h'
#include 'modules/canbus/vehicle/gem/protocol/horn_rpt_79.h'
#include 'modules/canbus/vehicle/gem/protocol/lat_lon_heading_rpt_82.h'
#include 'modules/canbus/vehicle/gem/protocol/parking_brake_status_rpt_80.h'
#include 'modules/canbus/vehicle/gem/protocol/shift_rpt_66.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_1_73.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_2_74.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_3_75.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_rpt_1_6e.h'
#include 'modules/canbus/vehicle/gem/protocol/turn_rpt_64.h'
#include 'modules/canbus/vehicle/gem/protocol/vehicle_speed_rpt_6f.h'
#include 'modules/canbus/vehicle/gem/protocol/wheel_speed_rpt_7a.h'
#include 'modules/canbus/vehicle/gem/protocol/wiper_rpt_91.h'
#include 'modules/canbus/vehicle/gem/protocol/yaw_rate_rpt_81.h'
    
      Byte t2(bytes + 2);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    using ::apollo::drivers::canbus::Byte;
    
    // config detail: {'name': 'manual_input', 'enum': {0:
// 'MANUAL_INPUT_HEADLIGHTS_OFF', 1: 'MANUAL_INPUT_LOW_BEAMS', 2:
// 'MANUAL_INPUT_HIGH_BEAMS'}, 'precision': 1.0, 'len': 8, 'is_signed_var':
// False, 'offset': 0.0, 'physical_range': '[0|2]', 'bit': 7, 'type': 'enum',
// 'order': 'motorola', 'physical_unit': ''}
Headlight_rpt_77::Manual_inputType Headlightrpt77::manual_input(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
        /** 
     * Called once per frame. time a value between 0 and 1.
    
    NS_CC_BEGIN;
    
    
    {    return false;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipX* reverse() const override;
    virtual FlipX* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX() :_flipX(false) {}
    virtual ~FlipX() {}
    
        /** 
     * initializes the action
     * @param duration in seconds
     * @param dstAngleX in degreesCW
     * @param dstAngleY in degreesCW
     */
    bool initWithDuration(float duration, float dstAngleX, float dstAngleY);
    /**
     * initializes the action
     * @param duration in seconds
     */
    bool initWithDuration(float duration, const Vec3& dstAngle3D);