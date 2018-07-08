// Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
    
    {  int result = 0;
  RenderThread::Get()->Send(new ShellViewHostMsg_AllocateId(
      routing_id,
      &result));
  return scope.Escape(v8::Integer::New(isolate, result));
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    NwShellOpenExternalFunction::~NwShellOpenExternalFunction() {
}
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    // Maximum number of level-0 files.  We stop writes at this point.
static const int kL0_StopWritesTrigger = 12;
    
    // A Comparator object provides a total order across slices that are
// used as keys in an sstable or a database.  A Comparator implementation
// must be thread-safe since leveldb may invoke its methods concurrently
// from multiple threads.
class Comparator {
 public:
  virtual ~Comparator();
    }
    
        // generate random samples
    std::vector<double> u(5);
    cv::randn(u, 0, 200);
    
    void BareModelEstimator::computeReprojError( const CvMat*, const CvMat*,
                                             const CvMat*, CvMat* )
{
}
    
    #include 'opencv2/core.hpp'
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL FFT dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL FFT dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    /* [-255..255].^2 */
const ushort g_8x16uSqrTab[] =
{
    65025, 64516, 64009, 63504, 63001, 62500, 62001, 61504, 61009, 60516, 60025, 59536,
    59049, 58564, 58081, 57600, 57121, 56644, 56169, 55696, 55225, 54756, 54289, 53824,
    53361, 52900, 52441, 51984, 51529, 51076, 50625, 50176, 49729, 49284, 48841, 48400,
    47961, 47524, 47089, 46656, 46225, 45796, 45369, 44944, 44521, 44100, 43681, 43264,
    42849, 42436, 42025, 41616, 41209, 40804, 40401, 40000, 39601, 39204, 38809, 38416,
    38025, 37636, 37249, 36864, 36481, 36100, 35721, 35344, 34969, 34596, 34225, 33856,
    33489, 33124, 32761, 32400, 32041, 31684, 31329, 30976, 30625, 30276, 29929, 29584,
    29241, 28900, 28561, 28224, 27889, 27556, 27225, 26896, 26569, 26244, 25921, 25600,
    25281, 24964, 24649, 24336, 24025, 23716, 23409, 23104, 22801, 22500, 22201, 21904,
    21609, 21316, 21025, 20736, 20449, 20164, 19881, 19600, 19321, 19044, 18769, 18496,
    18225, 17956, 17689, 17424, 17161, 16900, 16641, 16384, 16129, 15876, 15625, 15376,
    15129, 14884, 14641, 14400, 14161, 13924, 13689, 13456, 13225, 12996, 12769, 12544,
    12321, 12100, 11881, 11664, 11449, 11236, 11025, 10816, 10609, 10404, 10201, 10000,
     9801,  9604,  9409,  9216,  9025,  8836,  8649,  8464,  8281,  8100,  7921,  7744,
     7569,  7396,  7225,  7056,  6889,  6724,  6561,  6400,  6241,  6084,  5929,  5776,
     5625,  5476,  5329,  5184,  5041,  4900,  4761,  4624,  4489,  4356,  4225,  4096,
     3969,  3844,  3721,  3600,  3481,  3364,  3249,  3136,  3025,  2916,  2809,  2704,
     2601,  2500,  2401,  2304,  2209,  2116,  2025,  1936,  1849,  1764,  1681,  1600,
     1521,  1444,  1369,  1296,  1225,  1156,  1089,  1024,   961,   900,   841,   784,
      729,   676,   625,   576,   529,   484,   441,   400,   361,   324,   289,   256,
      225,   196,   169,   144,   121,   100,    81,    64,    49,    36,    25,    16,
        9,     4,     1,     0,     1,     4,     9,    16,    25,    36,    49,    64,
       81,   100,   121,   144,   169,   196,   225,   256,   289,   324,   361,   400,
      441,   484,   529,   576,   625,   676,   729,   784,   841,   900,   961,  1024,
     1089,  1156,  1225,  1296,  1369,  1444,  1521,  1600,  1681,  1764,  1849,  1936,
     2025,  2116,  2209,  2304,  2401,  2500,  2601,  2704,  2809,  2916,  3025,  3136,
     3249,  3364,  3481,  3600,  3721,  3844,  3969,  4096,  4225,  4356,  4489,  4624,
     4761,  4900,  5041,  5184,  5329,  5476,  5625,  5776,  5929,  6084,  6241,  6400,
     6561,  6724,  6889,  7056,  7225,  7396,  7569,  7744,  7921,  8100,  8281,  8464,
     8649,  8836,  9025,  9216,  9409,  9604,  9801, 10000, 10201, 10404, 10609, 10816,
    11025, 11236, 11449, 11664, 11881, 12100, 12321, 12544, 12769, 12996, 13225, 13456,
    13689, 13924, 14161, 14400, 14641, 14884, 15129, 15376, 15625, 15876, 16129, 16384,
    16641, 16900, 17161, 17424, 17689, 17956, 18225, 18496, 18769, 19044, 19321, 19600,
    19881, 20164, 20449, 20736, 21025, 21316, 21609, 21904, 22201, 22500, 22801, 23104,
    23409, 23716, 24025, 24336, 24649, 24964, 25281, 25600, 25921, 26244, 26569, 26896,
    27225, 27556, 27889, 28224, 28561, 28900, 29241, 29584, 29929, 30276, 30625, 30976,
    31329, 31684, 32041, 32400, 32761, 33124, 33489, 33856, 34225, 34596, 34969, 35344,
    35721, 36100, 36481, 36864, 37249, 37636, 38025, 38416, 38809, 39204, 39601, 40000,
    40401, 40804, 41209, 41616, 42025, 42436, 42849, 43264, 43681, 44100, 44521, 44944,
    45369, 45796, 46225, 46656, 47089, 47524, 47961, 48400, 48841, 49284, 49729, 50176,
    50625, 51076, 51529, 51984, 52441, 52900, 53361, 53824, 54289, 54756, 55225, 55696,
    56169, 56644, 57121, 57600, 58081, 58564, 59049, 59536, 60025, 60516, 61009, 61504,
    62001, 62500, 63001, 63504, 64009, 64516, 65025
};
    
    namespace leveldb {
    }
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
    #if 0
static void DumpInternalIter(Iterator* iter) {
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey k;
    if (!ParseInternalKey(iter->key(), &k)) {
      fprintf(stderr, 'Corrupt '%s'\n', EscapeString(iter->key()).c_str());
    } else {
      fprintf(stderr, '@ '%s'\n', k.DebugString().c_str());
    }
  }
}
#endif
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      const char* data_;
  size_t size_;
  uint32_t restart_offset_;     // Offset in data_ of restart array
  bool owned_;                  // Block owns data_[]
    
      /// Get the timer's expiry time relative to now.
  /**
   * This function may be used to obtain the timer's current expiry time.
   * Whether the timer has expired or not does not affect this value.
   */
  duration expires_from_now() const
  {
    return this->service.expires_from_now(this->implementation);
  }
    
    namespace boost {
    }
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
    #include <boost/asio/detail/config.hpp>
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    #define BOOST_ASIO_DEFINE_HANDLER_PTR(op) \
  struct ptr \
  { \
    Handler* h; \
    void* v; \
    op* p; \
    ~ptr() \
    { \
      reset(); \
    } \
    void reset() \
    { \
      if (p) \
      { \
        p->~op(); \
        p = 0; \
      } \
      if (v) \
      { \
        boost_asio_handler_alloc_helpers::deallocate(v, sizeof(op), *h); \
        v = 0; \
      } \
    } \
  } \
  /**/
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
      // Fills in out[] array with the 8-bit pixel view of this component cropped
  // to the specified window. The window's upper-left corner, (xmin, ymin) must
  // be within the image, but the window may extend past the image. In that
  // case the edge pixels are duplicated.
  void ToPixels(int xmin, int ymin, int xsize, int ysize,
                uint8_t* out, int stride) const;