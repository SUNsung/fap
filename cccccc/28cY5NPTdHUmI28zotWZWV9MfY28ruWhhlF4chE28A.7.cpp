
        
          void PrintStats() {
    for (size_t i = 0; i < Inputs.size(); i++) {
      const auto &II = *Inputs[i];
      Printf('  [%zd %s]\tsz: %zd\truns: %zd\tsucc: %zd\n', i,
             Sha1ToString(II.Sha1).c_str(), II.U.size(),
             II.NumExecutedMutations, II.NumSuccessfullMutations);
    }
  }
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <dlfcn.h>
    
    #ifndef LLVM_FUZZER_IO_H
#define LLVM_FUZZER_IO_H
    
      // Remove all features that we already know from all other inputs.
  for (size_t i = NumFilesInFirstCorpus; i < Files.size(); i++) {
    auto &Cur = Files[i].Features;
    std::vector<uint32_t> Tmp;
    std::set_difference(Cur.begin(), Cur.end(), AllFeatures.begin(),
                        AllFeatures.end(), std::inserter(Tmp, Tmp.begin()));
    Cur.swap(Tmp);
  }
    
    #include <istream>
#include <set>
    
      size_t AddWordFromDictionary(Dictionary &D, uint8_t *Data, size_t Size,
                               size_t MaxSize);
  size_t MutateImpl(uint8_t *Data, size_t Size, size_t MaxSize,
                    const std::vector<Mutator> &Mutators);