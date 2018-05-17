
        
        
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
    typedef NS_ENUM(NSInteger, ObjectBehaviorAction) {
    ObjectBehaviorActionRetain,
    ObjectBehaviorActionCopy,
    ObjectBehaviorActionMutableCopy
};
    
      void finish() override {
    for (auto &pair : TrackerByGroup) {
      StringRef groupName = pair.first();
      SymbolTracker &tracker = *pair.second;
      bool cont = onFinish(groupName, tracker);
      if (!cont)
        break;
    }
  }
    
      ArrayRef<const MarkupASTNode *> getChildren() const {
    return {};
  }
    
    using namespace swift;
    
    #include 'llvm/ADT/IntrusiveRefCntPtr.h'
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
    // Each function below returns a Mapping, or a Sequence of descriptors.
// They all return a new reference.
    
    
    {
    {}  // namespace
}  // namespace protobuf
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
      void Generate(io::Printer* printer);
    
    class ReflectionClassGenerator : public SourceGeneratorBase {
 public:
  ReflectionClassGenerator(const FileDescriptor* file, const Options* options);
  ~ReflectionClassGenerator();
    }
    
    void RepeatedEnumFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {  
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_repeated_$name$_codec);\n');
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      // Builder addRepeatedField(Field value)
  WriteFieldDocComment(printer, descriptor_);
  PrintNestedBuilderFunction(printer,
    '$deprecation$public Builder add$capitalized_name$($type$ value)',
    
    
    {}
    
    struct IRGS;
    
    #if defined(HAVE_UTIMES)
# include <sys/time.h>
#elif defined(HAVE_UTIME)
# if defined(HAVE_SYS_UTIME_H)
#  include <sys/utime.h>
# elif defined(HAVE_UTIME_H)
#  include <utime.h>
# endif
#endif
    
      Instr imm = Assembler::ImmPCRelAddress(target - this);
    
      typedef std::function<void(pid_t)> LostChildHandler;
  static void SetLostChildHandler(const LostChildHandler& handler);
    
    
    {  while (!got_sigint && !worker.Done()) {
    gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_REALTIME),
                                 gpr_time_from_seconds(5, GPR_TIMESPAN)));
  }
}
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    namespace {
    }
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    #include 'test/cpp/qps/usage_timer.h'
    
    double Node::getComputedWidth(void) const
{
    return YGNodeLayoutGetWidth(m_node);
}
    
        method(getComputedWidth);
    method(getComputedHeight);
    
    
    {} // namespace facebook

    
    #define FROM_HERE facebook::ProgramLocation(__FUNCTION__, __FILE__, __LINE__)
    
      void PrintFeatureSet() {
    for (size_t i = 0; i < kFeatureSetSize; i++) {
      if(size_t Sz = GetFeature(i))
        Printf('[%zd: id %zd sz%zd] ', i, SmallestElementPerFeature[i], Sz);
    }
    Printf('\n\t');
    for (size_t i = 0; i < Inputs.size(); i++)
      if (size_t N = Inputs[i]->NumFeatures)
        Printf(' %zd=>%zd ', i, N);
    Printf('\n');
  }
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  __attribute__((weak)) RETURN_TYPE NAME FUNC_SIG
    }
    
    std::string Base64(const Unit &U) {
  static const char Table[] = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
                              'abcdefghijklmnopqrstuvwxyz'
                              '0123456789+/';
  std::string Res;
  size_t i;
  for (i = 0; i + 2 < U.size(); i += 3) {
    uint32_t x = (U[i] << 16) + (U[i + 1] << 8) + U[i + 2];
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += Table[(x >> 6) & 63];
    Res += Table[x & 63];
  }
  if (i + 1 == U.size()) {
    uint32_t x = (U[i] << 16);
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += '==';
  } else if (i + 2 == U.size()) {
    uint32_t x = (U[i] << 16) + (U[i + 1] << 8);
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += Table[(x >> 6) & 63];
    Res += '=';
  }
  return Res;
}