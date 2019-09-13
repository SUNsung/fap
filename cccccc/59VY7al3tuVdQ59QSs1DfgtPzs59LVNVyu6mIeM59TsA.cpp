
        
        
    {  return exports;
}
    
    
    {}  // namespace
    
    #include 'shell/browser/api/atom_api_browser_window.h'
    
    namespace electron {
    }
    
    namespace electron {
    }
    
    #ifdef __INTEL_COMPILER // ICC built-in swap for LE hosts
    #if defined (__i386__) || defined(__x86_64__)
        #undef  READ64
        #define READ64(c) _bswap64 (*(const Int64*)(c))
    #endif
#endif
    
    #include <ImfFloatAttribute.h>
    
    #include <ImfFloatVectorAttribute.h>
    
    
inline
Header::Iterator::Iterator (): _i()
{
    // empty
}
    
    void
hufDecode
    (const Int64 * 	hcode,	// i : encoding table
     const HufDec * 	hdecod,	// i : decoding table
     const char* 	in,	// i : compressed input buffer
     int		ni,	// i : input size (in bits)
     int		rlc,	// i : run-length code
     int		no,	// i : expected output size (in bytes)
     unsigned short*	out)	//  o: uncompressed output buffer
{
    Int64 c = 0;
    int lc = 0;
    unsigned short * outb = out;
    unsigned short * oe = out + no;
    const char * ie = in + (ni + 7) / 8; // input byte size
    }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    	    while (modp (xStart, toSlice.xSampling) != 0)
		++xStart;
    
    
    
      for (int idx = 0; idx < m_simple_tags_count; ++idx) {
    m_simple_tags[idx].ShallowCopy(displays[idx]);
  }
    
      // Returns ContentEncryption represented by |idx|. Returns NULL if |idx|
  // is out of bounds.
  const ContentEncryption* GetEncryptionByIndex(unsigned long idx) const;
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
    /***** residue backends *********************************************/
    
    #define toBARK(n)   (13.1f*atan(.00074f*(n))+2.24f*atan((n)*(n)*1.85e-8f)+1e-4f*(n))
#define fromBARK(z) (102.f*(z)-2.f*pow(z,2.f)+.4f*pow(z,3.f)+pow(1.46f,z)-1.f)
#define toMEL(n)    (log(1.f+(n)*.001f)*1442.695f)
#define fromMEL(m)  (1000.f*exp((m)/1442.695f)-1000.f)
    
    #if CONFIG_MULTITHREAD && defined(_WIN32)
#include <windows.h>
#include <stdlib.h>
/* Declare a per-compilation-unit state variable to track the progress
 * of calling func() only once. This must be at global scope because
 * local initializers are not thread-safe in MSVC prior to Visual
 * Studio 2015.
 *
 * As a static, once_state will be zero-initialized as program start.
 */
static LONG once_state;
static void once(void (*func)(void))
{
    /* Try to advance once_state from its initial value of 0 to 1.
     * Only one thread can succeed in doing so.
     */
    if (InterlockedCompareExchange(&once_state, 1, 0) == 0) {
        /* We're the winning thread, having set once_state to 1.
         * Call our function. */
        func();
        /* Now advance once_state to 2, unblocking any other threads. */
        InterlockedIncrement(&once_state);
        return;
    }
    }
    
    #define MULADDC_STOP                                    \
            'str    r2, %0                      \n\t'   \
            'str    r1, %1                      \n\t'   \
            'str    r0, %2                      \n\t'   \
         : '=m' (c),  '=m' (d), '=m' (s)        \
         : 'm' (s), 'm' (d), 'm' (c), 'm' (b)   \
         : 'r0', 'r1', 'r2', 'r3', 'r4', 'r5',  \
           'r6', 'r7', 'cc'                     \
         );
    
    int main()
{
    // create a JSON value
    const json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
    class DistanceApproachIPOPTInterfaceTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    FLAGS_planner_open_space_config_filename =
        '/apollo/modules/planning/testdata/conf/'
        'open_space_standard_parking_lot.pb.txt';
    CHECK(apollo::cyber::common::GetProtoFromFile(
        FLAGS_planner_open_space_config_filename, &planner_open_space_config_))
        << 'Failed to load open space config file '
        << FLAGS_planner_open_space_config_filename;
    }
    }
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace lane_follow {
    }
    }
    }
    }
    
    
    {
    {    ++nr_transformed_obj;
  }
  return nr_transformed_obj > 0;
}
    
    
    {
    {
    {
    {}  // namespace valet_parking
}  // namespace scenario
}  // namespace planning
}  // namespace apollo

    
        // 1. horizontal control check
    if ((mode == Chassis::COMPLETE_AUTO_DRIVE ||
         mode == Chassis::AUTO_STEER_ONLY) &&
        !CheckResponse(CHECK_RESPONSE_STEER_UNIT_FLAG, false)) {
      ++horizontal_ctrl_fail;
      if (horizontal_ctrl_fail >= kMaxFailAttempt) {
        emergency_mode = true;
        set_chassis_error_code(Chassis::MANUAL_INTERVENTION);
      }
    } else {
      horizontal_ctrl_fail = 0;
    }
    
    namespace apollo {
namespace drivers {
namespace video {
    }
    }
    }
    
    
    {
    {}  // namespace prediction
}  // namespace apollo

    
    bool ChannelManager::IsMessageTypeMatching(const std::string& lhs,
                                           const std::string& rhs) {
  if (lhs == rhs) {
    return true;
  }
  if (exempted_msg_types_.count(lhs) > 0) {
    return true;
  }
  if (exempted_msg_types_.count(rhs) > 0) {
    return true;
  }
  return false;
}
    
      /**
   * @brief Wait or cleanup a process, usually a child process.
   *
   * This will wait for a process to cleanup. Use this after requesting a
   * graceful shutdown.
   *
   * @return true if the process was cleaned, otherwise false.
   */
  bool cleanup() const;
    
    #include <vector>
    
      ~Carver();
    
    bool Pack::checkVersion() const {
  return checkVersion(version_);
}
    
    #include <osquery/filesystem/filesystem.h>
    
    JSON getExamplePacksConfig();
JSON getUnrestrictedPack();
JSON getRestrictedPack();
JSON getPackWithDiscovery();
JSON getPackWithValidDiscovery();
JSON getPackWithFakeVersion();