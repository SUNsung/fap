
        
            // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
      // Limit the number of bytes per line.
  static const int kBytesPerLine = 40;
  // Limit the number of lines per string part.
  static const int kLinesPerPart = 400;
  // Every block of bytes, start a new string literal, in order to avoid the
  // 64k length limit. Note that this value needs to be <64k.
  static const int kBytesPerPart = kBytesPerLine * kLinesPerPart;
  for (int i = 0; i < file_data.size(); i += kBytesPerLine) {
    if (i > 0) {
      if (i % kBytesPerPart == 0) {
        printer->Print(',\n');
      } else {
        printer->Print(' +\n');
      }
    }
    printer->Print('\'$data$\'',
      'data', CEscape(file_data.substr(i, kBytesPerLine)));
  }
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
    
  string error;
  bool succeeded = generator.GenerateAll(
      parsed_files, request.parameter(), &context, &error);
    
    // January 1, 1980 as a DOS date.
// see https://msdn.microsoft.com/en-us/library/9kkf9tah.aspx
static const uint16 kDosEpoch = 1 << 5 | 1;
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_

    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
internal::ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31) {
  return internal::ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24,
      v25, v26, v27, v28, v29, v30, v31);
}
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
      s.Set(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
    
struct	b3BroadphaseAabbCallback
{
	virtual ~b3BroadphaseAabbCallback() {}
	virtual bool	process(const b3BroadphaseProxy* proxy) = 0;
};
    
    /*struct b3BroadphasePair : public b3Int4
{
	explicit b3BroadphasePair(){}
	
};
*/
    
                lo0 = lo0*vLo;
            lo1 = lo1*vLo;
            z = _mm_shuffle_ps(hi0, hi1, 0x88);
            x = _mm_shuffle_ps(lo0, lo1, 0x88);
            y = _mm_shuffle_ps(lo0, lo1, 0xdd);
            z = z*vHi;
            x = x+y;
            x = x+z;
            stack_array[index+3] = x;
            max = _mm_max_ps( x, max );         // control the order here so that max is never NaN even if x is nan
    
    B3_FORCE_INLINE   long    b3Vector3::minDot( const b3Vector3 *array, long array_count, b3Scalar &dotOut ) const
{
#if defined (B3_USE_SSE) || defined (B3_USE_NEON)
    #if defined B3_USE_SSE
        const long scalar_cutoff = 10;
        long b3_mindot_large( const float *array, const float *vec, unsigned long array_count, float *dotOut );
    #elif defined B3_USE_NEON
        const long scalar_cutoff = 4;
        extern long (*b3_mindot_large)( const float *array, const float *vec, unsigned long array_count, float *dotOut );
    #else
        #error unhandled arch!
    #endif
    }
    
    };
///do not change those serialization structures, it requires an updated sBulletDNAstr/sBulletDNAstr64
struct b3ContactSolverInfoFloatData
{
	float		m_tau;
	float		m_damping;//global non-contact constraint damping, can be locally overridden by constraints during 'getInfo2'.
	float		m_friction;
	float		m_timeStep;
    
    
    {	if (m_halfRange >= 0.0f)
	{
		b3Scalar deviation = b3NormalizeAngle(angle - m_center);
		if (deviation < -m_halfRange)
		{
			m_solveLimit = true;
			m_correction = - (deviation + m_halfRange);
			m_sign = +1.0f;
		}
		else if (deviation > m_halfRange)
		{
			m_solveLimit = true;
			m_correction = m_halfRange - deviation;
			m_sign = -1.0f;
		}
	}
}
    
    This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose, 
including commercial applications, and to alter it and redistribute it freely, 
subject to the following restrictions:
    
    /*!
 * \brief Tag function as usable by device
 */
#if defined (__CUDA__) || defined(__NVCC__)
#define XGBOOST_DEVICE __host__ __device__
#else
#define XGBOOST_DEVICE
#endif
    
        Span<float> s (arr);
    Span<float, 4> first = s.first<4>();