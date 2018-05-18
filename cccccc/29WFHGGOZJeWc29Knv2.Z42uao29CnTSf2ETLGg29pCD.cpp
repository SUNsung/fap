
        
        void freeifaddrs(struct ifaddrs* addrs) {
	struct ifaddrs* last = NULL;
	struct ifaddrs* cursor = addrs;
	while (cursor) {
		delete[] cursor->ifa_name;
		delete cursor->ifa_addr;
		delete cursor->ifa_netmask;
		last = cursor;
		cursor = cursor->ifa_next;
		delete last;
	}
}

    
    	// sync from persistent state into memory and then
	// run the 'main_after_fs_sync' function
	/* clang-format off */
	EM_ASM(
		FS.mkdir('/userfs');
		FS.mount(IDBFS, {}, '/userfs');
		FS.syncfs(true, function(err) {
			ccall('main_after_fs_sync', null, ['string'], [err ? err.message : ''])
		});
	);
	/* clang-format on */
    
        if ((m_in_buf_left < 2) || (m_pIn_buf_ofs[0] == 0xFF) || (m_pIn_buf_ofs[1] == 0xFF))
    {
      uint c1 = get_octet();
      uint c2 = get_octet();
      m_bit_buf |= (c1 << 8) | c2;
    }
    else
    {
      m_bit_buf |= ((uint)m_pIn_buf_ofs[0] << 8) | m_pIn_buf_ofs[1];
      m_in_buf_left -= 2;
      m_pIn_buf_ofs += 2;
    }
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p4_lfe,&_huff_book__44p4_lfe,
   &_resbook_44p_l4,&_resbook_44p_l4}
};
static const vorbis_residue_template _res_44p51_5[]={
  {2,0,15,  &_residue_44p_hi,
   &_huff_book__44p5_short,&_huff_book__44p5_short,
   &_resbook_44p_5,&_resbook_44p_5},
    
    static const static_bookblock _resbook_44u_n1={
  {
    {0},
    {0,0,&_44un1__p1_0},
    {0,0,&_44un1__p2_0},
    {0,0,&_44un1__p3_0},
    {0,0,&_44un1__p4_0},
    {0,0,&_44un1__p5_0},
    {&_44un1__p6_0,&_44un1__p6_1},
    {&_44un1__p7_0,&_44un1__p7_1,&_44un1__p7_2}
   }
};
static const static_bookblock _resbook_44u_0={
  {
    {0},
    {0,0,&_44u0__p1_0},
    {0,0,&_44u0__p2_0},
    {0,0,&_44u0__p3_0},
    {0,0,&_44u0__p4_0},
    {0,0,&_44u0__p5_0},
    {&_44u0__p6_0,&_44u0__p6_1},
    {&_44u0__p7_0,&_44u0__p7_1,&_44u0__p7_2}
   }
};
static const static_bookblock _resbook_44u_1={
  {
    {0},
    {0,0,&_44u1__p1_0},
    {0,0,&_44u1__p2_0},
    {0,0,&_44u1__p3_0},
    {0,0,&_44u1__p4_0},
    {0,0,&_44u1__p5_0},
    {&_44u1__p6_0,&_44u1__p6_1},
    {&_44u1__p7_0,&_44u1__p7_1,&_44u1__p7_2}
   }
};
static const static_bookblock _resbook_44u_2={
  {
    {0},
    {0,0,&_44u2__p1_0},
    {0,0,&_44u2__p2_0},
    {0,0,&_44u2__p3_0},
    {0,0,&_44u2__p4_0},
    {0,0,&_44u2__p5_0},
    {&_44u2__p6_0,&_44u2__p6_1},
    {&_44u2__p7_0,&_44u2__p7_1,&_44u2__p7_2}
   }
};
static const static_bookblock _resbook_44u_3={
  {
    {0},
    {0,0,&_44u3__p1_0},
    {0,0,&_44u3__p2_0},
    {0,0,&_44u3__p3_0},
    {0,0,&_44u3__p4_0},
    {0,0,&_44u3__p5_0},
    {&_44u3__p6_0,&_44u3__p6_1},
    {&_44u3__p7_0,&_44u3__p7_1,&_44u3__p7_2}
   }
};
static const static_bookblock _resbook_44u_4={
  {
    {0},
    {0,0,&_44u4__p1_0},
    {0,0,&_44u4__p2_0},
    {0,0,&_44u4__p3_0},
    {0,0,&_44u4__p4_0},
    {0,0,&_44u4__p5_0},
    {&_44u4__p6_0,&_44u4__p6_1},
    {&_44u4__p7_0,&_44u4__p7_1,&_44u4__p7_2}
   }
};
static const static_bookblock _resbook_44u_5={
  {
    {0},
    {0,0,&_44u5__p1_0},
    {0,0,&_44u5__p2_0},
    {0,0,&_44u5__p3_0},
    {0,0,&_44u5__p4_0},
    {0,0,&_44u5__p5_0},
    {0,0,&_44u5__p6_0},
    {&_44u5__p7_0,&_44u5__p7_1},
    {&_44u5__p8_0,&_44u5__p8_1},
    {&_44u5__p9_0,&_44u5__p9_1,&_44u5__p9_2}
   }
};
static const static_bookblock _resbook_44u_6={
  {
    {0},
    {0,0,&_44u6__p1_0},
    {0,0,&_44u6__p2_0},
    {0,0,&_44u6__p3_0},
    {0,0,&_44u6__p4_0},
    {0,0,&_44u6__p5_0},
    {0,0,&_44u6__p6_0},
    {&_44u6__p7_0,&_44u6__p7_1},
    {&_44u6__p8_0,&_44u6__p8_1},
    {&_44u6__p9_0,&_44u6__p9_1,&_44u6__p9_2}
   }
};
static const static_bookblock _resbook_44u_7={
  {
    {0},
    {0,0,&_44u7__p1_0},
    {0,0,&_44u7__p2_0},
    {0,0,&_44u7__p3_0},
    {0,0,&_44u7__p4_0},
    {0,0,&_44u7__p5_0},
    {0,0,&_44u7__p6_0},
    {&_44u7__p7_0,&_44u7__p7_1},
    {&_44u7__p8_0,&_44u7__p8_1},
    {&_44u7__p9_0,&_44u7__p9_1,&_44u7__p9_2}
   }
};
static const static_bookblock _resbook_44u_8={
  {
    {0},
    {0,0,&_44u8_p1_0},
    {0,0,&_44u8_p2_0},
    {0,0,&_44u8_p3_0},
    {0,0,&_44u8_p4_0},
    {&_44u8_p5_0,&_44u8_p5_1},
    {&_44u8_p6_0,&_44u8_p6_1},
    {&_44u8_p7_0,&_44u8_p7_1},
    {&_44u8_p8_0,&_44u8_p8_1},
    {&_44u8_p9_0,&_44u8_p9_1,&_44u8_p9_2}
   }
};
static const static_bookblock _resbook_44u_9={
  {
    {0},
    {0,0,&_44u9_p1_0},
    {0,0,&_44u9_p2_0},
    {0,0,&_44u9_p3_0},
    {0,0,&_44u9_p4_0},
    {&_44u9_p5_0,&_44u9_p5_1},
    {&_44u9_p6_0,&_44u9_p6_1},
    {&_44u9_p7_0,&_44u9_p7_1},
    {&_44u9_p8_0,&_44u9_p8_1},
    {&_44u9_p9_0,&_44u9_p9_1,&_44u9_p9_2}
   }
};
    
    /* Segher was off (too high) by ~ .3 decibel.  Center the conversion correctly. */
static inline float todB(const float *x){
  union {
    ogg_uint32_t i;
    float f;
  } ix;
  ix.f = *x;
  ix.i = ix.i&0x7fffffff;
  return (float)(ix.i * 7.17711438e-7f -764.6161886f);
}
    
            __inline long int float2int(float value)
        {
                return _mm_cvtss_si32(_mm_load_ss(&value));
        }
#elif (defined(_MSC_VER) && _MSC_VER >= 1400) && defined (_M_IX86)
        #include <math.h>
    
    #undef MULT16_32_Q15
static inline int MULT16_32_Q15(int a, int b)
{
    int c;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (c): 'i' (15));
    return c;
}
    
        tolua_beginmodule(tolua_S,'SimpleAudioEngine');
        tolua_function(tolua_S,'preloadMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic);
        tolua_function(tolua_S,'stopMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic);
        tolua_function(tolua_S,'stopAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopAllEffects);
        tolua_function(tolua_S,'getMusicVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getBackgroundMusicVolume);
        tolua_function(tolua_S,'resumeMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeBackgroundMusic);
        tolua_function(tolua_S,'setMusicVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume);
        tolua_function(tolua_S,'preloadEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadEffect);
        tolua_function(tolua_S,'isMusicPlaying',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying);
        tolua_function(tolua_S,'getEffectsVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getEffectsVolume);
        tolua_function(tolua_S,'willPlayMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic);
        tolua_function(tolua_S,'pauseEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseEffect);
        tolua_function(tolua_S,'playEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect);
        tolua_function(tolua_S,'rewindMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic);
        tolua_function(tolua_S,'playMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic);
        tolua_function(tolua_S,'resumeAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects);
        tolua_function(tolua_S,'setEffectsVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume);
        tolua_function(tolua_S,'stopEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect);
        tolua_function(tolua_S,'pauseMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic);
        tolua_function(tolua_S,'pauseAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects);
        tolua_function(tolua_S,'unloadEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect);
        tolua_function(tolua_S,'resumeEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeEffect);
        tolua_function(tolua_S,'destroyInstance', lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end);
        tolua_function(tolua_S,'getInstance', lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(CocosDenshion::SimpleAudioEngine).name();
    g_luaType[typeName] = 'cc.SimpleAudioEngine';
    g_typeCast['SimpleAudioEngine'] = 'cc.SimpleAudioEngine';
    return 1;
}
TOLUA_API int register_all_cocos2dx_cocosdenshion(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,'cc',0);
	tolua_beginmodule(tolua_S,'cc');
    
    
    
    		// Define attachment
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 3.0f);
			m_attachment = m_world->CreateBody(&bd);
    }
    
    #ifndef CANTILEVER_H
#define CANTILEVER_H
    
    
    {
    {} // namespace test
} // namespace folly

    
    FOLLY_ALWAYS_INLINE int __builtin_popcount(unsigned int x) {
  return int(__popcnt(x));
}
    
    
    {    resetTracking();
    EXPECT_TRUE(s.emplace(std::move(k4)).second);
    // move convert + move expected for successful emplace with wrong type
    EXPECT_EQ(Tracked<0>::counts.dist(Counts{0, 1, 0, 1}), 0);
  }
    
    /**
 * Test SSL server accept timeout with cache path
 */
TEST(AsyncSSLSocketTest, SSLServerCacheCloseTest) {
  // Start listening on a local port
  WriteCallbackBase writeCallback;
  ReadCallback readCallback(&writeCallback);
  HandshakeCallback handshakeCallback(
      &readCallback, HandshakeCallback::EXPECT_ERROR);
  SSLServerAsyncCacheAcceptCallback acceptCallback(&handshakeCallback);
  TestSSLAsyncCacheServer server(&acceptCallback, 500);
    }
    
      F14BasicSet& operator=(F14BasicSet&&) = default;
    
      // Returns an index of random unit from the corpus to mutate.
  // Hypothesis: units added to the corpus last are more likely to be
  // interesting. This function gives more weight to the more recent units.
  size_t ChooseUnitIdxToMutate(Random &Rand) {
    size_t Idx = static_cast<size_t>(CorpusDistribution(Rand.Get_mt19937()));
    assert(Idx < Inputs.size());
    return Idx;
  }
    
      bool HasPositionHint() const { return PositionHint != std::numeric_limits<size_t>::max(); }
  size_t GetPositionHint() const {
    assert(HasPositionHint());
    return PositionHint;
  }
  void IncUseCount() { UseCount++; }
  void IncSuccessCount() { SuccessCount++; }
  size_t GetUseCount() const { return UseCount; }
  size_t GetSuccessCount() const {return SuccessCount; }
    
    void CopyFileToErr(const std::string &Path);
    
    
    {  // Execute the inner process untill it passes.
  // Every inner process should execute at least one input.
  std::string BaseCmd = CloneArgsWithoutX(Args, 'keep-all-flags');
  for (size_t i = 1; i <= AllFiles.size(); i++) {
    Printf('MERGE-OUTER: attempt %zd\n', i);
    auto ExitCode =
        ExecuteCommand(BaseCmd + ' -merge_control_file=' + CFPath);
    if (!ExitCode) {
      Printf('MERGE-OUTER: succesfull in %zd attempt(s)\n', i);
      break;
    }
  }
  // Read the control file and do the merge.
  Merger M;
  std::ifstream IF(CFPath);
  M.ParseOrExit(IF, true);
  IF.close();
  std::vector<std::string> NewFiles;
  size_t NumNewFeatures = M.Merge(&NewFiles);
  Printf('MERGE-OUTER: %zd new files with %zd new features added\n',
         NewFiles.size(), NumNewFeatures);
  for (auto &F: NewFiles)
    WriteToOutputCorpus(FileToVector(F));
  // We are done, delete the control file.
  RemoveFile(CFPath);
}
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    #define HASH_LENGTH 20
#define BLOCK_LENGTH 64
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp8(uint64_t Arg1, uint64_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp4(uint32_t Arg1, uint32_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp2(uint16_t Arg1, uint16_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp1(uint8_t Arg1, uint8_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
    
      void AddValueForMemcmp(void *caller_pc, const void *s1, const void *s2,
                         size_t n);
  void AddValueForStrcmp(void *caller_pc, const char *s1, const char *s2,
                         size_t n);
    
    bool ParseDictionaryFile(const std::string &Text, std::vector<Unit> *Units) {
  if (Text.empty()) {
    Printf('ParseDictionaryFile: file does not exist or is empty\n');
    return false;
  }
  std::istringstream ISS(Text);
  Units->clear();
  Unit U;
  int LineNo = 0;
  std::string S;
  while (std::getline(ISS, S, '\n')) {
    LineNo++;
    size_t Pos = 0;
    while (Pos < S.size() && isspace(S[Pos])) Pos++;  // Skip spaces.
    if (Pos == S.size()) continue;  // Empty line.
    if (S[Pos] == '#') continue;  // Comment line.
    if (ParseOneDictionaryEntry(S, &U)) {
      Units->push_back(U);
    } else {
      Printf('ParseDictionaryFile: error in line %d\n\t\t%s\n', LineNo,
             S.c_str());
      return false;
    }
  }
  return true;
}