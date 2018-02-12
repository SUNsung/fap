
        
        # if GTEST_HAS_COMBINE
// Combine() allows the user to combine two or more sequences to produce
// values of a Cartesian product of those sequences' elements.
//
// Synopsis:
// Combine(gen1, gen2, ..., genN)
//   - returns a generator producing sequences with elements coming from
//     the Cartesian product of elements from the sequences generated by
//     gen1, gen2, ..., genN. The sequence elements will have a type of
//     tuple<T1, T2, ..., TN> where T1, T2, ..., TN are the types
//     of elements from sequences produces by gen1, gen2, ..., genN.
//
// Combine can have up to $maxtuple arguments. This number is currently limited
// by the maximum number of elements in the tuple implementation used by Google
// Test.
//
// Example:
//
// This will instantiate tests in test case AnimalTest each one with
// the parameter values tuple('cat', BLACK), tuple('cat', WHITE),
// tuple('dog', BLACK), and tuple('dog', WHITE):
//
// enum Color { BLACK, GRAY, WHITE };
// class AnimalTest
//     : public testing::TestWithParam<tuple<const char*, Color> > {...};
//
// TEST_P(AnimalTest, AnimalLooksNice) {...}
//
// INSTANTIATE_TEST_CASE_P(AnimalVariations, AnimalTest,
//                         Combine(Values('cat', 'dog'),
//                                 Values(BLACK, WHITE)));
//
// This will instantiate tests in FlagDependentTest with all variations of two
// Boolean flags:
//
// class FlagDependentTest
//     : public testing::TestWithParam<tuple<bool, bool> > {
//   virtual void SetUp() {
//     // Assigns external_flag_1 and external_flag_2 values from the tuple.
//     tie(external_flag_1, external_flag_2) = GetParam();
//   }
// };
//
// TEST_P(FlagDependentTest, TestFeature1) {
//   // Test your code using external_flag_1 and external_flag_2 here.
// }
// INSTANTIATE_TEST_CASE_P(TwoBoolSequence, FlagDependentTest,
//                         Combine(Bool(), Bool()));
//
$range i 2..maxtuple
$for i [[
$range j 1..i
    
    #if GTEST_HAS_TYPED_TEST_P
    
    # define ASSERT_HRESULT_FAILED(expr) \
    ASSERT_PRED_FORMAT1(::testing::internal::IsHRESULTFailure, (expr))
    
    // Ternary predicate assertion macros.
#define EXPECT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_FATAL_FAILURE_)
    
    
    {}  // namespace
    
            std::map<wstring, shared_ptr<IStatefulNode>> EnumerateStatefulNode(ComputationNetwork& net,
                                                                           const std::vector<ComputationNodeBasePtr>& criterionNode,
                                                                           const std::vector<ComputationNodeBasePtr>& evaluationNode)
        {
            std::map<wstring, shared_ptr<IStatefulNode>> statefulNodes;
            for (auto& root : criterionNode)
                EnumerateStatefulNodesForRoot(net, root, statefulNodes);
            for (auto& root : evaluationNode)
                EnumerateStatefulNodesForRoot(net, root, statefulNodes);
            return statefulNodes;
        }
    
    
    {    cudaMemcpyAsync(cpuBuffer, gpuBuffer, numElements * elementSize, cudaMemcpyDeviceToHost, GetFetchStream()) || 'cudaMemcpyAsync failed';
}
    
    struct Expression
{
    wstring op; // operation, encoded as a string; 'symbol' for punctuation and keywords, otherwise used in constructors below ...TODO: use constexpr
    wstring id; // identifier;      op == 'id', 'new', 'array', and '.' (if macro then it also has args)
    wstring s;  // string literal;  op == 's'
    double d;   // numeric literal; op == 'd'
    bool b;     // boolean literal; op == 'b'
    typedef shared_ptr<struct Expression> ExpressionPtr;
    vector<ExpressionPtr> args;                                // position-dependent expression/function args
    map<wstring, pair<TextLocation, ExpressionPtr>> namedArgs; // named expression/function args; also dictionary members (loc is of the identifier)
    TextLocation location;                                     // where in the source code (for downstream error reporting)
    // constructors
    Expression(TextLocation location)
        : location(location), d(0.0), b(false)
    {
    }
    Expression(TextLocation location, wstring op)
        : location(location), d(0.0), b(false), op(op)
    {
    }
    Expression(TextLocation location, wstring op, double d, wstring s, bool b)
        : location(location), d(d), s(s), b(b), op(op)
    {
    }
    Expression(TextLocation location, wstring op, ExpressionPtr arg)
        : location(location), d(0.0), b(false), op(op)
    {
        args.push_back(arg);
    }
    Expression(TextLocation location, wstring op, ExpressionPtr arg1, ExpressionPtr arg2)
        : location(location), d(0.0), b(false), op(op)
    {
        args.push_back(arg1);
        args.push_back(arg2);
    }
    // diagnostics helper: print the content
    void DumpToStream(wstringstream & treeStream, int indent = 0);
};
typedef Expression::ExpressionPtr ExpressionPtr; // circumvent some circular definition problem
    
    
    {public:
    inline hardcoded_array() throw()
    {
    }
    inline hardcoded_array(size_t n) throw()
    {
        check_size(n);
    } // we can instantiate with a size parameter--just checks the size
    inline hardcoded_array(size_t n, const _T& val) throw()
    {
        check_size(n);
        for (size_t i = 0; i < n; i++)
            data[i] = val;
    }
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return _N;
    }
};

    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    std::vector<float> Sharpen(const std::vector<float>& image, int w, int h,
                           float sigma, float amount) {
  // This is only made for small sigma, e.g. 1.3.
  std::vector<double> kernel(5);
  for (size_t i = 0; i < kernel.size(); i++) {
    kernel[i] = Normal(1.0 * i - kernel.size() / 2, sigma);
  }
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
    
    
    {}  // namespace guetzli
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out);
    
      void ValidateFeatureSet() {
    if (!CountingFeatures) return;
    if (FeatureDebug)
      PrintFeatureSet();
    for (size_t Idx = 0; Idx < kFeatureSetSize; Idx++)
      if (GetFeature(Idx))
        Inputs[SmallestElementPerFeature[Idx]]->Tmp++;
    for (auto II: Inputs) {
      if (II->Tmp != II->NumFeatures)
        Printf('ZZZ %zd %zd\n', II->Tmp, II->NumFeatures);
      assert(II->Tmp == II->NumFeatures);
      II->Tmp = 0;
    }
  }
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  RETURN_TYPE NAME##Def FUNC_SIG {                                             \
    Printf('ERROR: Function \'%s\' not defined.\n', #NAME);                    \
    exit(1);                                                                   \
  }                                                                            \
  RETURN_TYPE NAME FUNC_SIG __attribute__((weak, alias(#NAME 'Def')));
    }
    
    void Fuzzer::CheckExitOnSrcPosOrItem() {
  if (!Options.ExitOnSrcPos.empty()) {
    static auto *PCsSet = new std::set<uintptr_t>;
    for (size_t i = 1, N = TPC.GetNumPCs(); i < N; i++) {
      uintptr_t PC = TPC.GetPC(i);
      if (!PC) continue;
      if (!PCsSet->insert(PC).second) continue;
      std::string Descr = DescribePC('%L', PC);
      if (Descr.find(Options.ExitOnSrcPos) != std::string::npos) {
        Printf('INFO: found line matching '%s', exiting.\n',
               Options.ExitOnSrcPos.c_str());
        _Exit(0);
      }
    }
  }
  if (!Options.ExitOnItem.empty()) {
    if (Corpus.HasUnit(Options.ExitOnItem)) {
      Printf('INFO: found item with checksum '%s', exiting.\n',
             Options.ExitOnItem.c_str());
      _Exit(0);
    }
  }
}
    
    struct MergeFileInfo {
  std::string Name;
  size_t Size = 0;
  std::vector<uint32_t> Features;
};
    
    #include 'FuzzerDefs.h'
#include <cstddef>
#include <stdint.h>
    
    static bool IsInterestingCoverageFile(std::string &File) {
  if (File.find('compiler-rt/lib/') != std::string::npos)
    return false; // sanitizer internal.
  if (File.find('/usr/lib/') != std::string::npos)
    return false;
  if (File.find('/usr/include/') != std::string::npos)
    return false;
  if (File == '<null>')
    return false;
  return true;
}
    
    int TraceState::TryToAddDesiredData(uint64_t PresentData, uint64_t DesiredData,
                                    size_t DataSize) {
  if (NumMutations >= kMaxMutations || !WantToHandleOneMoreMutation()) return 0;
  ScopedDoingMyOwnMemmem scoped_doing_my_own_memmem;
  const uint8_t *UnitData;
  auto UnitSize = F->GetCurrentUnitInFuzzingThead(&UnitData);
  int Res = 0;
  const uint8_t *Beg = UnitData;
  const uint8_t *End = Beg + UnitSize;
  for (const uint8_t *Cur = Beg; Cur < End; Cur++) {
    Cur = (uint8_t *)SearchMemory(Cur, End - Cur, &PresentData, DataSize);
    if (!Cur)
      break;
    size_t Pos = Cur - Beg;
    assert(Pos < UnitSize);
    AddMutation(Pos, DataSize, DesiredData);
    AddMutation(Pos, DataSize, DesiredData + 1);
    AddMutation(Pos, DataSize, DesiredData - 1);
    Res++;
  }
  return Res;
}