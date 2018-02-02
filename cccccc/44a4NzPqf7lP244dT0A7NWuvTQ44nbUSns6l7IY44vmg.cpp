
        
          // ...Code to store on disk or send over a network goes here...
    
    //go generator is used to generate GRPC code for serialization system, such as flatbuffers
#include <memory>
#include <vector>
    
    int main(int argc, const char *argv[]) {
  RunServer();
  return 0;
}

    
    inline flatbuffers::Offset<Type> CreateType(
    flatbuffers::FlatBufferBuilder &_fbb,
    BaseType base_type = None,
    BaseType element = None,
    int32_t index = -1) {
  TypeBuilder builder_(_fbb);
  builder_.add_index(index);
  builder_.add_element(element);
  builder_.add_base_type(base_type);
  return builder_.Finish();
}
    
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, false, nullptr);
}
    
    namespace grpc {
    }
    
      flatbuffers::grpc::MessageBuilder fbb;
  {
    grpc::ClientContext context;
    // Build a request with the name set.
    auto monster_offset = CreateMonster(fbb, 0, 0, 0, fbb.CreateString('Fred'));
    fbb.Finish(monster_offset);
    auto request = fbb.ReleaseMessage<Monster>();
    flatbuffers::grpc::Message<Stat> response;
    }
    
      static std::string FullNamespace(const char *separator, const Namespace &ns);
    
    
    {    GenerateFn generate;
    const char *generator_opt_short;
    const char *generator_opt_long;
    const char *lang_name;
    bool schema_only;
    GenerateFn generateGRPC;
    flatbuffers::IDLOptions::Language lang;
    const char *generator_help;
    MakeRuleFn make_rule;
  };
    
    // 'smart' pointer for use with resizing vectors: turns a pointer inside
// a vector into a relative offset, such that it is not affected by resizes.
template<typename T, typename U> class pointer_inside_vector {
 public:
  pointer_inside_vector(T *ptr, std::vector<U> &vec)
      : offset_(reinterpret_cast<uint8_t *>(ptr) -
                reinterpret_cast<uint8_t *>(flatbuffers::vector_data(vec))),
        vec_(vec) {}
    }
    
      // Use the `CreateWeapon` shortcut to create Weapons with all fields set.
  auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
  auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);
    
    // Platform specific functions:
bool IsFile(const std::string &Path);
    
      if (LocationLen + DirLen + FileLen != FileName.size()) {
    Printf('DirName() failed for \'%s\', invalid path.\n', FileName.c_str());
    exit(1);
  }
    
      bool InFuzzingThread() const { return IsMyThread; }
  size_t GetCurrentUnitInFuzzingThead(const uint8_t **Data) const;
  void TryDetectingAMemoryLeak(const uint8_t *Data, size_t Size,
                               bool DuringInitialCorpusExecution);
    
    void Fuzzer::MinimizeCrashLoop(const Unit &U) {
  if (U.size() <= 2) return;
  while (!TimedOut() && TotalNumberOfRuns < Options.MaxNumberOfRuns) {
    MD.StartMutationSequence();
    memcpy(CurrentUnitData, U.data(), U.size());
    for (int i = 0; i < Options.MutateDepth; i++) {
      size_t NewSize = MD.Mutate(CurrentUnitData, U.size(), MaxMutationLen);
      assert(NewSize > 0 && NewSize <= MaxMutationLen);
      RunOne(CurrentUnitData, NewSize);
      TryDetectingAMemoryLeak(CurrentUnitData, NewSize,
                              /*DuringInitialCorpusExecution*/ false);
    }
  }
}
    
      size_t AddWordFromDictionary(Dictionary &D, uint8_t *Data, size_t Size,
                               size_t MaxSize);
  size_t MutateImpl(uint8_t *Data, size_t Size, size_t MaxSize,
                    const std::vector<Mutator> &Mutators);
    
    #ifndef LLVM_FUZZER_SHA1_H
#define LLVM_FUZZER_SHA1_H
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_switch(uint64_t Val, uint64_t *Cases) {
  // Updates the value profile based on the relative position of Val and Cases.
  // We want to handle one random case at every call (handling all is slow).
  // Since none of the arguments contain any random bits we use a thread-local
  // counter to choose the random case to handle.
  static thread_local size_t Counter;
  Counter++;
  uint64_t N = Cases[0];
  uint64_t *Vals = Cases + 2;
  char *PC = (char*)__builtin_return_address(0);
  // We need a random number < N using Counter as a seed. But w/o DIV.
  // * find a power of two >= N
  // * mask Counter with this power of two.
  // * maybe subtract N.
  size_t Nlog = sizeof(long) * 8 - __builtin_clzl((long)N);
  size_t PowerOfTwoGeN = 1U << Nlog;
  assert(PowerOfTwoGeN >= N);
  size_t Idx = Counter & (PowerOfTwoGeN - 1);
  if (Idx >= N)
    Idx -= N;
  assert(Idx < N);
  uint64_t TwoIn32 = 1ULL << 32;
  if ((Val | Vals[Idx]) < TwoIn32)
    fuzzer::TPC.HandleCmp(PC + Idx, static_cast<uint32_t>(Val),
                          static_cast<uint32_t>(Vals[Idx]));
  else
    fuzzer::TPC.HandleCmp(PC + Idx, Val, Vals[Idx]);
}
    
    int TraceState::TryToAddDesiredData(const uint8_t *PresentData,
                                    const uint8_t *DesiredData,
                                    size_t DataSize) {
  if (NumMutations >= kMaxMutations || !WantToHandleOneMoreMutation()) return 0;
  ScopedDoingMyOwnMemmem scoped_doing_my_own_memmem;
  const uint8_t *UnitData;
  auto UnitSize = F->GetCurrentUnitInFuzzingThead(&UnitData);
  int Res = 0;
  const uint8_t *Beg = UnitData;
  const uint8_t *End = Beg + UnitSize;
  for (const uint8_t *Cur = Beg; Cur < End; Cur++) {
    Cur = (uint8_t *)SearchMemory(Cur, End - Cur, PresentData, DataSize);
    if (!Cur)
      break;
    size_t Pos = Cur - Beg;
    assert(Pos < UnitSize);
    AddMutation(Pos, DataSize, DesiredData);
    Res++;
  }
  return Res;
}