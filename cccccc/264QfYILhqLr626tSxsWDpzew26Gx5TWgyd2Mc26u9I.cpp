
        
        static const vorbis_residue_template _res_44s_2[]={
  {2,0,16,  &_residue_44_mid,
   &_huff_book__44c2_s_short,&_huff_book__44c2_s_short,
   &_resbook_44s_2,&_resbook_44s_2},
    }
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u3__long,&_huff_book__44u3__long,
   &_resbook_44u_3,&_resbook_44u_3}
};
static const vorbis_residue_template _res_44u_4[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u4__short,&_huff_book__44u4__short,
   &_resbook_44u_4,&_resbook_44u_4},
    
    static const static_bookblock _resbook_8u_0={
  {
    {0},
    {0,0,&_8u0__p1_0},
    {0,0,&_8u0__p2_0},
    {0,0,&_8u0__p3_0},
    {0,0,&_8u0__p4_0},
    {0,0,&_8u0__p5_0},
    {&_8u0__p6_0,&_8u0__p6_1},
    {&_8u0__p7_0,&_8u0__p7_1,&_8u0__p7_2}
   }
};
static const static_bookblock _resbook_8u_1={
  {
    {0},
    {0,0,&_8u1__p1_0},
    {0,0,&_8u1__p2_0},
    {0,0,&_8u1__p3_0},
    {0,0,&_8u1__p4_0},
    {0,0,&_8u1__p5_0},
    {0,0,&_8u1__p6_0},
    {&_8u1__p7_0,&_8u1__p7_1},
    {&_8u1__p8_0,&_8u1__p8_1},
    {&_8u1__p9_0,&_8u1__p9_1,&_8u1__p9_2}
   }
};
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #include 'guetzli/output_image.h'
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    #ifndef GUETZLI_JPEG_DATA_WRITER_H_
#define GUETZLI_JPEG_DATA_WRITER_H_
    
      void ToLinearRGB(int xmin, int ymin, int xsize, int ysize,
                   std::vector<std::vector<float> >* rgb) const;
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    class memory_resource {
 public:
  virtual ~memory_resource() = default;
  virtual void* allocate(
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
  virtual void deallocate(
      void* p,
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
};
    
      /**
   * If POLLABLE, call instead of wait after the file descriptor returned
   * by pollFd() became readable.  The returned range is valid until the next
   * call to pollCompleted().
   */
  Range<Op**> pollCompleted();
    
    
    {  return p;
}
    
      void onIoError(const std::exception& ex);
  std::string getNumDiscardedMsg(size_t numDiscarded);
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    #include <folly/experimental/logging/LogHandlerFactory.h>
    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
    bool LogCategoryConfig::operator==(const LogCategoryConfig& other) const {
  return level == other.level &&
      inheritParentLevel == other.inheritParentLevel &&
      handlers == other.handlers;
}
    
    bool LogConfig::operator==(const LogConfig& other) const {
  return handlerConfigs_ == other.handlerConfigs_ &&
      categoryConfigs_ == other.categoryConfigs_;
}
    
    int MinimizeCrashInput(const std::vector<std::string> &Args) {
  if (Inputs->size() != 1) {
    Printf('ERROR: -minimize_crash should be given one input file\n');
    exit(1);
  }
  std::string InputFilePath = Inputs->at(0);
  std::string BaseCmd =
      CloneArgsWithoutX(Args, 'minimize_crash', 'exact_artifact_path');
  auto InputPos = BaseCmd.find(' ' + InputFilePath + ' ');
  assert(InputPos != std::string::npos);
  BaseCmd.erase(InputPos, InputFilePath.size() + 1);
  if (Flags.runs <= 0 && Flags.max_total_time == 0) {
    Printf('INFO: you need to specify -runs=N or '
           '-max_total_time=N with -minimize_crash=1\n'
           'INFO: defaulting to -max_total_time=600\n');
    BaseCmd += ' -max_total_time=600';
  }
  // BaseCmd += ' >  /dev/null 2>&1 ';
    }
    
    #include 'FuzzerExtFunctions.def'
    
    // Returns 'Dir/FileName' or equivalent for the current OS.
std::string DirPlusFile(const std::string &DirPath,
                        const std::string &FileName);
    
    FILE* OpenFile(int Fd, const char* Mode) {
  return fdopen(Fd, Mode);
}
    
      // Parse STARTED and DONE lines.
  size_t ExpectedStartMarker = 0;
  const size_t kInvalidStartMarker = -1;
  size_t LastSeenStartMarker = kInvalidStartMarker;
  while (std::getline(IS, Line, '\n')) {
    std::istringstream ISS1(Line);
    std::string Marker;
    size_t N;
    ISS1 >> Marker;
    ISS1 >> N;
    if (Marker == 'STARTED') {
      // STARTED FILE_ID FILE_SIZE
      if (ExpectedStartMarker != N)
        return false;
      ISS1 >> Files[ExpectedStartMarker].Size;
      LastSeenStartMarker = ExpectedStartMarker;
      assert(ExpectedStartMarker < Files.size());
      ExpectedStartMarker++;
    } else if (Marker == 'DONE') {
      // DONE FILE_SIZE COV1 COV2 COV3 ...
      size_t CurrentFileIdx = N;
      if (CurrentFileIdx != LastSeenStartMarker)
        return false;
      LastSeenStartMarker = kInvalidStartMarker;
      if (ParseCoverage) {
        auto &V = Files[CurrentFileIdx].Features;
        V.clear();
        while (ISS1 >> std::hex >> N)
          V.push_back(N);
        std::sort(V.begin(), V.end());
      }
    } else {
      return false;
    }
  }
  if (LastSeenStartMarker != kInvalidStartMarker)
    LastFailure = Files[LastSeenStartMarker].Name;
    
    namespace fuzzer {
    }
    
    void __sanitizer_weak_hook_strncmp(void *caller_pc, const char *s1,
                                   const char *s2, size_t n, int result) {
  fuzzer::TPC.AddValueForStrcmp(caller_pc, s1, s2, n);
  if (!RecordingMemcmp) return;
  if (result == 0) return;  // No reason to mutate.
  size_t Len1 = fuzzer::InternalStrnlen(s1, n);
  size_t Len2 = fuzzer::InternalStrnlen(s2, n);
  n = std::min(n, Len1);
  n = std::min(n, Len2);
  if (n <= 1) return;  // Not interesting.
  TS->TraceMemcmpCallback(n, reinterpret_cast<const uint8_t *>(s1),
                          reinterpret_cast<const uint8_t *>(s2));
}
    
    void PrintASCII(const Unit &U, const char *PrintAfter) {
  PrintASCII(U.data(), U.size(), PrintAfter);
}