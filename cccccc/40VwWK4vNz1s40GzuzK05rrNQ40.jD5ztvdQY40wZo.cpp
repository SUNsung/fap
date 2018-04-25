
        
        #include <chrono>
    
    #include 'hphp/runtime/vm/jit/vasm-unit.h'
    
      Variant ret = mpzToGMPObject(gmpReturn);
    
    namespace irgen {
    }
    
    /*
 * Emit a function prologue from rec.
 *
 * Precondition: calling thread owns both code and metadata locks
 */
TCA emitFuncPrologueOptInternal(ProfTransRec* rec);
    
    
    {/////////////////////////////////////////////////////////////////////////////
}
#endif

    
    // Reads the Start of Frame (SOF) marker segment and fills in *jpg with the
// parsed data.
bool ProcessSOF(const uint8_t* data, const size_t len,
                JpegReadMode mode, size_t* pos, JPEGData* jpg) {
  if (jpg->width != 0) {
    fprintf(stderr, 'Duplicate SOF marker.\n');
    jpg->error = JPEG_DUPLICATE_SOF;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(8);
  size_t marker_len = ReadUint16(data, pos);
  int precision = ReadUint8(data, pos);
  int height = ReadUint16(data, pos);
  int width = ReadUint16(data, pos);
  int num_components = ReadUint8(data, pos);
  VERIFY_INPUT(precision, 8, 8, PRECISION);
  VERIFY_INPUT(height, 1, 65535, HEIGHT);
  VERIFY_INPUT(width, 1, 65535, WIDTH);
  VERIFY_INPUT(num_components, 1, kMaxComponents, NUMCOMP);
  VERIFY_LEN(3 * num_components);
  jpg->height = height;
  jpg->width = width;
  jpg->components.resize(num_components);
    }
    
    OutputImageComponent::OutputImageComponent(int w, int h)
    : width_(w), height_(h) {
  Reset(1, 1);
}
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    namespace guetzli {
    }
    
    #include <stdint.h>
#include <string.h>
#include <vector>
    
    namespace guetzli {
    }
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    #include 'debug_hud.h'
#include 'imgui.h'
    
    struct VERTEX_CONSTANT_BUFFER
{
    float        mvp[4][4];
};
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
     private:
  std::shared_ptr<Logger> info_log_;
  const unique_ptr<SequentialFileReader> file_;
  Reporter* const reporter_;
  bool const checksum_;
  char* const backing_store_;
  Slice buffer_;
  bool eof_;   // Last Read() indicated EOF by returning < kBlockSize
  bool read_error_;   // Error occurred while reading from file
    
      const ImmutableMemTableOptions* GetImmutableMemTableOptions() const {
    return &moptions_;
  }
    
    
    {  int operator()(const char* a, const DecodedType b) const {
    if (Decode(a) < b) {
      return -1;
    } else if (Decode(a) > b) {
      return +1;
    } else {
      return 0;
    }
  }
};
    
    void TestKillRandom(std::string kill_point, int odds,
                    const std::string& srcfile, int srcline) {
  for (auto& p : rocksdb_kill_prefix_blacklist) {
    if (kill_point.substr(0, p.length()) == p) {
      return;
    }
  }
    }