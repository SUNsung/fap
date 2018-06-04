
        
            double Hs2[20];
    Hs2[0]=0; Hs2[1]=s[0]*s[0]; Hs2[2]=s[0]; Hs2[3]=0; Hs2[4]=s[2]; Hs2[5]=2*s[1]*s[2]; Hs2[6]=3*s[1]*s[1];
    Hs2[7]=0; Hs2[8]=0; Hs2[9]=0; Hs2[10]=1; Hs2[11]=s[2]*s[2]; Hs2[12]=0; Hs2[13]=0;
    Hs2[14]=2*s[1]; Hs2[15]=0; Hs2[16]=s[0]*s[2]; Hs2[17]=2*s[0]*s[1]; Hs2[18]=0; Hs2[19]=0;
    
            if(quantile_sum - low_sum > out_of_bells_fraction*total_sum)
        {
            if(max_segment_length < x - start_x)
            {
                max_segment_length = x - start_x;
                max_start_x = start_x;
                max_end_x = x;
            }
    }
    
                        for (int testPointIndex = 0; testPointIndex < usedPointsCount && isGeneralPosition; testPointIndex++)
                    {
                        if (testPointIndex == startPointIndex || testPointIndex == endPointIndex)
                        {
                            continue;
                        }
    }
    
    //! @cond IGNORED
    
    CV_EXPORTS_W void divide(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
    // Tests that a unicharset that contains double-letter ligatures (eg ff) has
// no null char in the encoding at all.
TEST_F(UnicharcompressTest, DoesLigaturesWithDoubles) {
  LOG(INFO) << 'Testing por with ligatures';
  LoadUnicharset('por.unicharset');
  ExpectCorrect('por');
  // Check that any unichar-id that is encoded with multiple codes has the
  // correct encoded_nulll_char_ in between.
  for (int u = 0; u <= unicharset_.size(); ++u) {
    RecodedCharID code;
    int len = compressed_.EncodeUnichar(u, &code);
    if (len > 1) {
      // The should not be any null char in the code.
      for (int i = 0; i < len; ++i) {
        EXPECT_NE(encoded_null_char_, code(i));
      }
    }
  }
}
    
    // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    
    {  // Take all of the runs of minor direction words and insert them
  // in reverse order.
  int minor_direction, major_direction, major_step, start, end;
  if (paragraph_is_ltr) {
    start = 0;
    end = word_dirs.size();
    major_step = 1;
    major_direction = DIR_LEFT_TO_RIGHT;
    minor_direction = DIR_RIGHT_TO_LEFT;
  } else {
    start = word_dirs.size() - 1;
    end = -1;
    major_step = -1;
    major_direction = DIR_RIGHT_TO_LEFT;
    minor_direction = DIR_LEFT_TO_RIGHT;
    // Special rule: if there are neutral words at the right most side
    //   of a line adjacent to a left-to-right word in the middle of the
    //   line, we interpret the end of the line as a single LTR sequence.
    if (word_dirs[start] == DIR_NEUTRAL) {
      int neutral_end = start;
      while (neutral_end > 0 && word_dirs[neutral_end] == DIR_NEUTRAL) {
        neutral_end--;
      }
      if (neutral_end >= 0 && word_dirs[neutral_end] == DIR_LEFT_TO_RIGHT) {
        // LTR followed by neutrals.
        // Scan for the beginning of the minor left-to-right run.
        int left = neutral_end;
        for (int i = left; i >= 0 && word_dirs[i] != DIR_RIGHT_TO_LEFT; i--) {
          if (word_dirs[i] == DIR_LEFT_TO_RIGHT) left = i;
        }
        reading_order->push_back(kMinorRunStart);
        for (int i = left; i < word_dirs.size(); i++) {
          reading_order->push_back(i);
          if (word_dirs[i] == DIR_MIX) reading_order->push_back(kComplexWord);
        }
        reading_order->push_back(kMinorRunEnd);
        start = left - 1;
      }
    }
  }
  for (int i = start; i != end;) {
    if (word_dirs[i] == minor_direction) {
      int j = i;
      while (j != end && word_dirs[j] != major_direction)
        j += major_step;
      if (j == end) j -= major_step;
      while (j != i && word_dirs[j] != minor_direction)
        j -= major_step;
      //  [j..i] is a minor direction run.
      reading_order->push_back(kMinorRunStart);
      for (int k = j; k != i; k -= major_step) {
        reading_order->push_back(k);
      }
      reading_order->push_back(i);
      reading_order->push_back(kMinorRunEnd);
      i = j + major_step;
    } else {
      reading_order->push_back(i);
      if (word_dirs[i] == DIR_MIX) reading_order->push_back(kComplexWord);
      i += major_step;
    }
  }
}
    
      // Draws the data in a new window.
  void Display() const;
    
    
namespace tesseract {
    }
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    #define THDPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPDoubleStorageClass)
#define THDPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPFloatStorageClass)
#define THDPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPHalfStorageClass)
#define THDPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPLongStorageClass)
#define THDPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPIntStorageClass)
#define THDPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPShortStorageClass)
#define THDPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPCharStorageClass)
#define THDPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPByteStorageClass)
    
    void THP_encodeInt64Buffer(uint8_t* dst, const int64_t* src, THPByteOrder order, size_t len)
{
  memcpy(dst, src, sizeof(int64_t) * len);
  if (order != THP_nativeByteOrder()) {
    for (size_t i = 0; i < len; i++) {
      swapBytes<sizeof(int64_t)>(dst);
      dst += sizeof(int64_t);
    }
  }
}
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    
    {  // Get all comments (leading, leading_detached, trailing) and print them as a
  // docstring. Any leading space of a line will be removed, but the line
  // wrapping will not be changed.
  void PrintAllComments(std::vector<grpc::string> comments,
                        grpc_generator::Printer* out);
};
    
    
    {  return 0;
}

    
      Result Mark() const;
    
    grpc::string SummarizeMethod(const grpc::protobuf::MethodDescriptor* method) {
  grpc::string result = method->name();
  result.append('\n');
  return result;
}
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      DB *db;
  Options options;
  options.create_if_missing = true;
  ASSERT_OK(DB::Open(options, dbpath, &db));
    
      void Build() {
    std::vector<Slice> key_slices;
    for (size_t i = 0; i < keys_.size(); i++) {
      key_slices.push_back(Slice(keys_[i]));
    }
    filter_.clear();
    policy_->CreateFilter(&key_slices[0], static_cast<int>(key_slices.size()),
                          &filter_);
    keys_.clear();
    if (kVerbose >= 2) DumpFilter();
  }
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    namespace leveldb {
namespace {
    }
    }
    
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
    
    
    {}  // namespace
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    // Entropy encoding (Huffman) utilities.
    
    #include 'guetzli/output_image.h'
    
    #ifndef GUETZLI_JPEG_DATA_READER_H_
#define GUETZLI_JPEG_DATA_READER_H_
    
    struct JpegHistogram {
  static const int kSize = kJpegHuffmanAlphabetSize + 1;
    }
    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }