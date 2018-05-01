
        
        namespace atom {
    }
    
    namespace atom {
    }
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // The map of accelerators that have been successfully registered as global
  // shortcuts and their observer.
  typedef std::map<ui::Accelerator, Observer*> AcceleratorMap;
  AcceleratorMap accelerator_map_;
    
    #include <windows.h>
    
    
    {} // namespace swift
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    
    {
    {}
}
#endif

    
      // The following strings are guaranteed to live at least as long as the
  // current indexing action.
  StringRef name;
  StringRef USR; // USR may be safely compared by pointer.
  StringRef group;
    
      // Updates the probability distribution for the units in the corpus.
  // Must be called whenever the corpus or unit weights are changed.
  void UpdateCorpusDistribution() {
    size_t N = Inputs.size();
    Intervals.resize(N + 1);
    Weights.resize(N);
    std::iota(Intervals.begin(), Intervals.end(), 0);
    if (CountingFeatures)
      for (size_t i = 0; i < N; i++)
        Weights[i] = Inputs[i]->NumFeatures * (i + 1);
    else
      std::iota(Weights.begin(), Weights.end(), 1);
    CorpusDistribution = std::piecewise_constant_distribution<double>(
        Intervals.begin(), Intervals.end(), Weights.begin());
  }
  std::piecewise_constant_distribution<double> CorpusDistribution;
    
    namespace fuzzer {
// A simple POD sized array of bytes.
template <size_t kMaxSize> class FixedWord {
public:
  FixedWord() {}
  FixedWord(const uint8_t *B, uint8_t S) { Set(B, S); }
    }
    }
    
    size_t MutationDispatcher::Mutate_ChangeBinaryInteger(uint8_t *Data,
                                                      size_t Size,
                                                      size_t MaxSize) {
  if (Size > MaxSize) return 0;
  switch (Rand(4)) {
    case 3: return ChangeBinaryInteger<uint64_t>(Data, Size, Rand);
    case 2: return ChangeBinaryInteger<uint32_t>(Data, Size, Rand);
    case 1: return ChangeBinaryInteger<uint16_t>(Data, Size, Rand);
    case 0: return ChangeBinaryInteger<uint8_t>(Data, Size, Rand);
    default: assert(0);
  }
  return 0;
}
    
    namespace fuzzer {
    }
    
    std::string CloneArgsWithoutX(const std::vector<std::string> &Args,
                              const char *X1, const char *X2);