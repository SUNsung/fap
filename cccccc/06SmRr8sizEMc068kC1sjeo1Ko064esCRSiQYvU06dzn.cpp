
        
        
    {}  // namespace tesseract.

    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    
    {  TBOX bbox_;
  int length_;
  GenericVector<TBOX> boxes_;
};
    
      // Returns definite 1-1 ambigs for the given unichar id.
  inline const UnicharIdVector *OneToOneDefiniteAmbigs(
      UNICHAR_ID unichar_id) const {
    if (one_to_one_definite_ambigs_.empty()) return nullptr;
    return one_to_one_definite_ambigs_[unichar_id];
  }
    
    namespace grpc {
namespace {
    }
    }
    
    #endif  // GRPC_INTERNAL_CPP_THREAD_POOL_INTERFACE_H

    
    system_clock::time_point Timespec2Timepoint(gpr_timespec t) {
  if (gpr_time_cmp(t, gpr_inf_future(t.clock_type)) == 0) {
    return system_clock::time_point::max();
  }
  t = gpr_convert_clock_type(t, GPR_CLOCK_REALTIME);
  system_clock::time_point tp;
  tp += duration_cast<system_clock::time_point::duration>(seconds(t.tv_sec));
  tp +=
      duration_cast<system_clock::time_point::duration>(nanoseconds(t.tv_nsec));
  return tp;
}
    
    
    {    Rational Sinh(Rational const& rat);
    Rational Cosh(Rational const& rat);
    Rational Tanh(Rational const& rat);
    Rational ASinh(Rational const& rat);
    Rational ACosh(Rational const& rat);
    Rational ATanh(Rational const& rat);
}

    
    Rational RationalMath::Fact(Rational const& rat)
{
    PRAT prat = rat.ToPRAT();
    }
    
    // Some commands are not affecting the state machine state of the calc flow. But these are more of
// some gui mode kind of settings (eg Inv button, or Deg,Rad , Back etc.). This list is getting bigger & bigger
// so we abstract this as a separate routine. Note: There is another side to this. Some commands are not
// gui mode setting to begin with, but once it is discovered it is invalid and we want to behave as though it
// was never inout, we need to revert the state changes made as a result of this test
bool IsGuiSettingOpCode(OpCode opCode)
{
    if (IsOpInRange(opCode, IDM_HEX, IDM_BIN) || IsOpInRange(opCode, IDM_QWORD, IDM_BYTE) || IsOpInRange(opCode, IDM_DEG, IDM_GRAD))
    {
        return true;
    }
    }
    
    
    {    return grouping;
}
    
    {
    asinrat(pa, radix, precision);
    ascalerat(pa, angletype, precision);
}
    
        template <>
    /*static*/ NDArrayViewPtr NDArrayView::RandomNormal<int8_t>(const NDShape& shape, double mean, double stdDev, unsigned long seed, const DeviceDescriptor& device)
    {
        return NDArrayView::_RandomNormal<int8_t, char>(shape, mean, stdDev, seed, device);
    }
    
        template <typename ElementType>
    void Value::CopyVariableValueToVector(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences)
    {
        if (outputVariable.Shape()[0] != outputVariable.Shape().TotalSize())
            InvalidArgument('For sparse data, the outputVariable's leading axis dimensionality (%zu) must equal the total size (%zu) of the Variable '%S'.',
                            outputVariable.Shape()[0], outputVariable.Shape().TotalSize(), outputVariable.AsString().c_str());
    }
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;