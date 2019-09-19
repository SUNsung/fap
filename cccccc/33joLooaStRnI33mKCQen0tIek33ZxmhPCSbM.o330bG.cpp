
        
          // TODO(erg): Mozilla's implementation has a workaround for GDBus
  // cancellation here. However, it's marked as fixed. If there's weird
  // problems with cancelation, look at how they fixed their issues.
    
    LRESULT CALLBACK PowerMonitor::WndProc(HWND hwnd,
                                       UINT message,
                                       WPARAM wparam,
                                       LPARAM lparam) {
  if (message == WM_WTSSESSION_CHANGE) {
    if (wparam == WTS_SESSION_LOCK) {
      Emit('lock-screen');
    } else if (wparam == WTS_SESSION_UNLOCK) {
      Emit('unlock-screen');
    }
  }
  return ::DefWindowProc(hwnd, message, wparam, lparam);
}
    
    void View::AddChildViewAt(mate::Handle<View> child, size_t index) {
  if (index > child_views_.size())
    return;
  child_views_.emplace(child_views_.begin() + index,     // index
                       isolate(), child->GetWrapper());  // v8::Global(args...)
  view()->AddChildViewAt(child->view(), index);
}
#endif
    
    namespace api {
    }
    
      void visitInitExistentialAddrInst(InitExistentialAddrInst *IEAI) {
    SGM.useConformancesFromType(IEAI->getFormalConcreteType());
    SGM.useConformancesFromObjectiveCType(IEAI->getFormalConcreteType());
    for (auto conformance : IEAI->getConformances())
      SGM.useConformance(conformance);
  }
    
    /// SILProfiler - Maps AST nodes to profile counters.
class SILProfiler : public SILAllocated<SILProfiler> {
private:
  SILModule &M;
    }
    
    TEST(ClusteredBitVector, AppendEmptyAfterAdd) {
  ClusteredBitVector vec;
  vec.add(31, 2133572605);
    }
    
    SWIFT_CC(swift) SWIFT_RUNTIME_STDLIB_API
uint64_t swift_float80ToString(char *Buffer, size_t BufferLength,
                               long double Value, bool Debug) {
#if SWIFT_DTOA_FLOAT80_SUPPORT
  return swift_format_float80(Value, Buffer, BufferLength);
#else
  // Use this when 'long double' is not true Float80
  return swift_floatingPointToString<long double>(Buffer, BufferLength, Value,
                                                  '%0.*Lg', Debug);
#endif
    }
    
    class GenericRequirementFlags {
  uint32_t Value;
  
  explicit constexpr GenericRequirementFlags(uint32_t Value)
    : Value(Value) {}
public:
  constexpr GenericRequirementFlags(GenericRequirementKind kind,
                                    bool hasKeyArgument,
                                    bool hasExtraArgument)
    : GenericRequirementFlags(GenericRequirementFlags(0)
                         .withKind(kind)
                         .withKeyArgument(hasKeyArgument)
                         .withExtraArgument(hasExtraArgument))
  {}
  
  constexpr bool hasKeyArgument() const {
    return (Value & 0x80u) != 0;
  }
    }