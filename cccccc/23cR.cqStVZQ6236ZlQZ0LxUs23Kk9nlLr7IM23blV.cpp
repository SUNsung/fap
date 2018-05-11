
        
        typedef FixedWord<27> Word; // 28 bytes.
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  RETURN_TYPE NAME##Def FUNC_SIG {                                             \
    Printf('ERROR: Function \'%s\' not defined.\n', #NAME);                    \
    exit(1);                                                                   \
  }                                                                            \
  RETURN_TYPE NAME FUNC_SIG __attribute__((weak, alias(#NAME 'Def')));
    }
    
    void RemoveFile(const std::string &Path);
    
      // Get the first directory entry.
  WIN32_FIND_DATAA FindInfo;
  HANDLE FindHandle(FindFirstFileA(Path.c_str(), &FindInfo));
  if (FindHandle == INVALID_HANDLE_VALUE)
  {
    Printf('No file found in: %s.\n', Dir.c_str());
    return;
  }
    
    struct Merger {
  std::vector<MergeFileInfo> Files;
  size_t NumFilesInFirstCorpus = 0;
  size_t FirstNotProcessedFile = 0;
  std::string LastFailure;
    }
    
      Random &Rand;
  const FuzzingOptions &Options;
    
      // We don't want to create too many trace-based mutations as it is both
  // expensive and useless. So after some number of mutations is collected,
  // start rejecting some of them. The more there are mutations the more we
  // reject.
  bool WantToHandleOneMoreMutation() {
    const size_t FirstN = 64;
    // Gladly handle first N mutations.
    if (NumMutations <= FirstN) return true;
    size_t Diff = NumMutations - FirstN;
    size_t DiffLog = sizeof(long) * 8 - __builtin_clzl((long)Diff);
    assert(DiffLog > 0 && DiffLog < 64);
    bool WantThisOne = MD.GetRand()(1 << DiffLog) == 0;  // 1 out of DiffLog.
    return WantThisOne;
  }
    
    void PrintHexArray(const uint8_t *Data, size_t Size,
                   const char *PrintAfter) {
  for (size_t i = 0; i < Size; i++)
    Printf('0x%x,', (unsigned)Data[i]);
  Printf('%s', PrintAfter);
}