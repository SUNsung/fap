
        
          /// Look up the implementation function for the given method.
  Optional<Entry> getEntry(SILModule &M, SILDeclRef method) const;
    
      // Ok, now we know that we have some sort of 'real' name. Set the outAddr.
  addrOut = uintptr_t(syminfo.symbolAddress);
    
    const CaptureDescriptor *
TypeRefBuilder::getCaptureDescriptor(uint64_t RemoteAddress) {
  for (auto Info : ReflectionInfos) {
    for (auto &CD : Info.Capture.Metadata) {
      auto OtherAddr = (reinterpret_cast<uint64_t>(&CD) -
                        Info.LocalStartAddress + Info.RemoteStartAddress);
      if (OtherAddr == RemoteAddress)
        return &CD;
    }
  }
    }
    
    
    {  /// This class provides a non-trivial .cxx_destruct method, but
  /// its .cxx_construct is trivial.  For backwards compatibility,
  /// when setting this flag, HasCXXStructors must be set as well.
  HasCXXDestructorOnly = 0x00100
};
inline ObjCClassFlags &operator|=(ObjCClassFlags &lhs, ObjCClassFlags rhs) {
  lhs = ObjCClassFlags(uint32_t(lhs) | uint32_t(rhs));
  return lhs;
}
inline ObjCClassFlags operator|(ObjCClassFlags lhs, ObjCClassFlags rhs) {
  return (lhs |= rhs);
}
    
    public:
  static constexpr bool offsetCanBeInline(unsigned offset) {
    return offset <= _SwiftKeyPathComponentHeader_MaximumOffsetPayload;
  }
    
    
    {
    {} // end namespace Mangle
} // end namespace swift