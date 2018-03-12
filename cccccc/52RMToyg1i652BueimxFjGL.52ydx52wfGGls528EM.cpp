
        
          bool operator<(const FixedWord<kMaxSize> &w) const {
    if (Size != w.Size)
      return Size < w.Size;
    return memcmp(Data, w.Data, Size) < 0;
  }
    
    int FuzzerDriver(int *argc, char ***argv, UserCallback Callback) {
  using namespace fuzzer;
  assert(argc && argv && 'Argument pointers cannot be nullptr');
  EF = new ExternalFunctions();
  if (EF->LLVMFuzzerInitialize)
    EF->LLVMFuzzerInitialize(argc, argv);
  const std::vector<std::string> Args(*argv, *argv + *argc);
  assert(!Args.empty());
  ProgName = new std::string(Args[0]);
  ParseFlags(Args);
  if (Flags.help) {
    PrintHelp();
    return 0;
  }
    }
    
    namespace fuzzer {
    }
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
      // Remove all features that we already know from all other inputs.
  for (size_t i = NumFilesInFirstCorpus; i < Files.size(); i++) {
    auto &Cur = Files[i].Features;
    std::vector<uint32_t> Tmp;
    std::set_difference(Cur.begin(), Cur.end(), AllFeatures.begin(),
                        AllFeatures.end(), std::inserter(Tmp, Tmp.begin()));
    Cur.swap(Tmp);
  }
    
    #ifndef LLVM_FUZZER_MERGE_H
#define LLVM_FUZZER_MERGE_H
    
    void MutationDispatcher::AddWordToAutoDictionary(DictionaryEntry DE) {
  static const size_t kMaxAutoDictSize = 1 << 14;
  if (TempAutoDictionary.size() >= kMaxAutoDictSize) return;
  TempAutoDictionary.push_back(DE);
}
    
      /// Mutates data by adding a word from the TORC.
  size_t Mutate_AddWordFromTORC(uint8_t *Data, size_t Size, size_t MaxSize);
    
    
    {	a=s->state[0];
	b=s->state[1];
	c=s->state[2];
	d=s->state[3];
	e=s->state[4];
	for (i=0; i<80; i++) {
		if (i>=16) {
			t = s->buffer[(i+13)&15] ^ s->buffer[(i+8)&15] ^ s->buffer[(i+2)&15] ^ s->buffer[i&15];
			s->buffer[i&15] = sha1_rol32(t,1);
		}
		if (i<20) {
			t = (d ^ (b & (c ^ d))) + SHA1_K0;
		} else if (i<40) {
			t = (b ^ c ^ d) + SHA1_K20;
		} else if (i<60) {
			t = ((b & c) | (d & (b | c))) + SHA1_K40;
		} else {
			t = (b ^ c ^ d) + SHA1_K60;
		}
		t+=sha1_rol32(a,5) + e + s->buffer[i&15];
		e=d;
		d=c;
		c=sha1_rol32(b,30);
		b=a;
		a=t;
	}
	s->state[0] += a;
	s->state[1] += b;
	s->state[2] += c;
	s->state[3] += d;
	s->state[4] += e;
}
    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;
    
          if (sigaction(SIGINT, &IgnoreSignalAction, &OldSigIntAction) == -1) {
        Printf('Failed to ignore SIGINT\n');
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
      if (sigaction(SIGQUIT, &IgnoreSignalAction, &OldSigQuitAction) == -1) {
        Printf('Failed to ignore SIGQUIT\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }