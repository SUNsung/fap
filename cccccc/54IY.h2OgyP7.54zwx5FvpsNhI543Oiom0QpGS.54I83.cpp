
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20>
internal::ValueArray20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20> Values(T1 v1, T2 v2, T3 v3, T4 v4,
    T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13,
    T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20) {
  return internal::ValueArray20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20>(v1, v2, v3, v4, v5, v6, v7,
      v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
}
    
    // ADD_FAILURE unconditionally adds a failure to the current test.
// SUCCEED generates a success - it doesn't automatically make the
// current test successful, as a test is only successful when it has
// no failure.
//
// EXPECT_* verifies that a certain condition is satisfied.  If not,
// it behaves like ADD_FAILURE.  In particular:
//
//   EXPECT_TRUE  verifies that a Boolean condition is true.
//   EXPECT_FALSE verifies that a Boolean condition is false.
//
// FAIL and ASSERT_* are similar to ADD_FAILURE and EXPECT_*, except
// that they will also abort the current function on failure.  People
// usually want the fail-fast behavior of FAIL and ASSERT_*, but those
// writing data-driven tests often find themselves using ADD_FAILURE
// and EXPECT_* more.
    
      void depart() {
    if (link_.depart()) delete value_;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
struct Types31 {
  typedef T1 Head;
  typedef Types30<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31> Tail;
};
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    
    {  class EuroText : public QuickTest {
  };
  
  TEST_F(EuroText, FastOCR) {
    OCRTester(TESTING_DIR '/eurotext.tif',
              TESTING_DIR '/eurotext.txt',
              TESSDATA_DIR '_fast', 'script/Latin');
  }
  
}  // namespace

    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
      n = snprintf(b2, sizeof(b2),
               '  /Width %d\n'
               '  /Height %d\n'
               '  /BitsPerComponent %d\n'
               '  /Filter %s\n'
               '  /DecodeParms\n'
               '  <<\n'
               '    /Predictor %d\n'
               '    /Colors %d\n'
               '%s'
               '    /Columns %d\n'
               '    /BitsPerComponent %d\n'
               '  >>\n'
               '>>\n'
               'stream\n',
               cid->w, cid->h, cid->bps, filter, predictor, cid->spp,
               group4, cid->w, cid->bps);
  if (n >= sizeof(b2)) {
    l_CIDataDestroy(&cid);
    return false;
  }
    
    
    {  int32_t local_cost_;    // Cost of this point on its own.
  int32_t total_cost_;    // Sum of all costs in best path to here.
                        // During cost calculations local_cost is excluded.
  int32_t total_steps_;   // Number of steps in best path to here.
  const DPPoint* best_prev_;  // Pointer to prev point in best path from here.
  // Information for computing the variance part of the cost.
  int32_t n_;             // Number of steps in best path to here for variance.
  int32_t sig_x_;         // Sum of step sizes for computing variance.
  int64_t sig_xsq_;       // Sum of squares of steps for computing variance.
};
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    void ROW::print(          //print
                FILE *fp  //file to print on
               ) {
  tprintf('Kerning= %d\n', kerning);
  tprintf('Spacing= %d\n', spacing);
  bound_box.print();
  tprintf('Xheight= %f\n', xheight);
  tprintf('Ascrise= %f\n', ascrise);
  tprintf('Descdrop= %f\n', descdrop);
  tprintf('has_drop_cap= %d\n', has_drop_cap_);
  tprintf('lmargin= %d, rmargin= %d\n', lmargin_, rmargin_);
}
    
    /**
 * Possible types for a POLY_BLOCK or ColPartition.
 * Must be kept in sync with kPBColors in polyblk.cpp and PTIs*Type functions
 * below, as well as kPolyBlockNames in publictypes.cpp.
 * Used extensively by ColPartition, and POLY_BLOCK.
*/
enum PolyBlockType {
  PT_UNKNOWN,        // Type is not yet known. Keep as the first element.
  PT_FLOWING_TEXT,   // Text that lives inside a column.
  PT_HEADING_TEXT,   // Text that spans more than one column.
  PT_PULLOUT_TEXT,   // Text that is in a cross-column pull-out region.
  PT_EQUATION,       // Partition belonging to an equation region.
  PT_INLINE_EQUATION,  // Partition has inline equation.
  PT_TABLE,          // Partition belonging to a table region.
  PT_VERTICAL_TEXT,  // Text-line runs vertically.
  PT_CAPTION_TEXT,   // Text that belongs to an image.
  PT_FLOWING_IMAGE,  // Image that lives inside a column.
  PT_HEADING_IMAGE,  // Image that spans more than one column.
  PT_PULLOUT_IMAGE,  // Image that is in a cross-column pull-out region.
  PT_HORZ_LINE,      // Horizontal Line.
  PT_VERT_LINE,      // Vertical Line.
  PT_NOISE,          // Lies outside of any column.
  PT_COUNT
};
    
    
    {
    {            // nodeToDelete is a child
            if (child == nodeToDelete)
            {
                // this used to call DetatchInputs(), but it's better for MEL to retain other inputs
                node->SetInput(i, nullptr);
                break;
            }
        }
    }
    
    BOOST_FIXTURE_TEST_CASE(MatrixSparseTimesSparse, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    Matrix<float> mAsparse(mAdense.DeepClone());
    mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    }
    
    
        // for every single bn node, the statistics is the average of mean and variance for several times in forward prop
        // the forward prop is from the feature to the current bn node
        for (int iter = 0; iter < iters; iter++)
        {
            // during the bn stat, dataRead must be ensured
            bool wasDataRead = DataReaderHelpers::GetMinibatchIntoNetwork<ElemType>(*dataReader, m_net,
                nullptr, useDistributedMBReading, useParallelTrain, inputMatrices, actualMBSize, m_mpi);
    }
    
    // ---------------------------------------------------------------------------
// TextLocation -- holds a pointer into a source file
// ---------------------------------------------------------------------------
    
    // EqualInsensitive - check to see if two nodes are equal up to the length of the first string (must be at least half as long as actual node name)
// string1 - [in,out] string to compare, if comparision is equal insensitive but not sensitive, will replace with sensitive version
// string2 - second string to compare
// alternate - alternate naming of the string
// return - true if strings are equal insensitive and modifies string1 to sensitive version if different
bool EqualInsensitive(std::string& string1, const char* string2, const char* alternate = NULL);
    
    template <class _T>
class const_array_ref
{
    const _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
    #ifndef STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_
#define STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_
    
    TEST(Issue200, Test) {
  // Get rid of any state from an old run.
  std::string dbpath = test::TmpDir() + '/leveldb_issue200_test';
  DestroyDB(dbpath, Options());
    }
    
    static int NextLength(int length) {
  if (length < 10) {
    length += 1;
  } else if (length < 100) {
    length += 10;
  } else if (length < 1000) {
    length += 100;
  } else {
    length += 1000;
  }
  return length;
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
    
    const double Histogram::kBucketLimit[kNumBuckets] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 25, 30, 35, 40, 45,
  50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200, 250, 300, 350, 400, 450,
  500, 600, 700, 800, 900, 1000, 1200, 1400, 1600, 1800, 2000, 2500, 3000,
  3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000, 12000, 14000,
  16000, 18000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 60000,
  70000, 80000, 90000, 100000, 120000, 140000, 160000, 180000, 200000,
  250000, 300000, 350000, 400000, 450000, 500000, 600000, 700000, 800000,
  900000, 1000000, 1200000, 1400000, 1600000, 1800000, 2000000, 2500000,
  3000000, 3500000, 4000000, 4500000, 5000000, 6000000, 7000000, 8000000,
  9000000, 10000000, 12000000, 14000000, 16000000, 18000000, 20000000,
  25000000, 30000000, 35000000, 40000000, 45000000, 50000000, 60000000,
  70000000, 80000000, 90000000, 100000000, 120000000, 140000000, 160000000,
  180000000, 200000000, 250000000, 300000000, 350000000, 400000000,
  450000000, 500000000, 600000000, 700000000, 800000000, 900000000,
  1000000000, 1200000000, 1400000000, 1600000000, 1800000000, 2000000000,
  2500000000.0, 3000000000.0, 3500000000.0, 4000000000.0, 4500000000.0,
  5000000000.0, 6000000000.0, 7000000000.0, 8000000000.0, 9000000000.0,
  1e200,
};
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    // convolve with size*size kernel
std::vector<float> Convolve2D(const std::vector<float>& image, int w, int h,
                              const double* kernel, int size) {
  auto result = image;
  int size2 = size / 2;
  for (size_t i = 0; i < image.size(); i++) {
    int x = i % w;
    int y = i / w;
    // Avoid non-normalized results at boundary by skipping edges.
    if (x < size2 || x + size - size2 - 1 >= w
        || y < size2 || y + size - size2 - 1 >= h) {
      continue;
    }
    float v = 0;
    for (int j = 0; j < size * size; j++) {
      int x2 = x + j % size - size2;
      int y2 = y + j / size - size2;
      v += static_cast<float>(kernel[j]) * image[y2 * w + x2];
    }
    result[i] = v;
  }
  return result;
}
    
        if (n == 1) {
      depth[tree[0].index_right_or_value_] = 1;      // Only one element.
      break;
    }
    
    // Entropy encoding (Huffman) utilities.
    
    #include 'guetzli/jpeg_data.h'
    
    
    {}  // namespace guetzli

    
    #include 'guetzli/jpeg_data.h'
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    struct HuffmanCodeTable {
  uint8_t depth[256];
  int code[256];
};
    
    
    {}  // namespace guetzli
    
    void AbstractAuthResolver::setUserDefinedCred(std::string user,
                                              std::string password)
{
  userDefinedUser_ = std::move(user);
  userDefinedPassword_ = std::move(password);
}
    
    
    {} // namespace aria2
    
    protected:
  virtual bool executeInternal() CXX11_OVERRIDE;
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }