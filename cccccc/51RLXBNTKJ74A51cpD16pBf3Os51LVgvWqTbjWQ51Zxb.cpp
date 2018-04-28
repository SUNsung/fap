
        
            D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    using namespace cv::ocl::runtime;
    
    #ifdef USE_GCC_FAST_TLS
    
      mpz_clear(gmpReturn);
    
      if (!ret || numa_num_nodes <= 1) return;
    
    #else // HAVE_NUMA undefined
namespace HPHP {
    }
    
      size_t numFrees()   const { return m_nfree; }
  size_t numAllocs()  const { return m_nalloc; }
  size_t bytesFree()  const { return m_bytesFree; }
  size_t blocksFree() const { return m_freeRanges.size(); }
    
    
static uint64_t RepeatBitsAcrossReg(unsigned reg_size,
                                    uint64_t value,
                                    unsigned width) {
  assert((width == 2) || (width == 4) || (width == 8) || (width == 16) ||
         (width == 32));
  assert((reg_size == kWRegSize) || (reg_size == kXRegSize));
  uint64_t result = value & ((1UL << width) - 1UL);
  for (unsigned i = width; i < reg_size; i *= 2) {
    result |= (result << i);
  }
  return result;
}
    
    void cgDefSP(IRLS& env, const IRInstruction* inst) {
  auto const sp = dstLoc(env, inst, 0).reg();
  auto& v = vmain(env);
    }