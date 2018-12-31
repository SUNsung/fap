
        
        class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_invalid)
{
    static const std::string CASES[] = {
        ' 1nwldj5',
        '\x7f''1axkwrx',
        '\x80''1eym55h',
        'an84characterslonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1569pvx',
        'pzry9x0s0muk',
        '1pzry9x0s0muk',
        'x1b4n0q5v',
        'li1dgmt3',
        'de1lg7wt\xff',
        'A1G7SGD8',
        '10a06t8',
        '1qzzfhee',
        'a12UEL5L',
        'A12uEL5L',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(ret.first.empty());
    }
}
    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
        std::string strJson1(json1);
    BOOST_CHECK(v.read(strJson1));
    
    /** Decode a Bech32 string. Returns (hrp, data). Empty hrp means failure. */
std::pair<std::string, std::vector<uint8_t>> Decode(const std::string& str);
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Base class for a SIMD function to multiply a matrix by a vector, with sources
// of 8-bit signed integer, and result in a double, after appropriate scaling.
// Assumes a specific method of multiplication that can be applied to any size
// and number of SIMD registers as follows:
// int32_t results are computed with num_outputs_per_register_ in each of
// max_output_registers_ result registers, repeatedly until it would make too
// many results, then the number of registers is halved, and so-on down to a
// single result register. The last calculation only outputs the required number
// of results instead of writing beyond the bounds. Eg: matrix has 75 outputs,
//  num_outputs_per_register_ = 4, and max_output_registers_ = 8,
// Step 1: 8x4=32 results are computed,
// Step 2: 8x4=32 again, total 64,
// Step 3: 2x4=8 (since 8x4 is too many, so is 4x4), total 72,
// Step 4: 1x3, total 75.
// Each step above is computed using a PartialFunc, which runs over the input
// vector once. The input is read one registerful of num_inputs_per_register_
// at a time (presumably 4x num_outputs_per_register_ since they are int8_t)
// so the inputs MUST BE PADDED to a multiple of num_inputs_per_register_.
// Since it is slow (on Intel at least) to horizontally add in a register,
// provision is made to process num_inputs_per_group_ inputs at a time, with
// the group being replicated num_input_groups_ times and multiplied by a
// num_inputs_per_group_ by num_input_groups_ rectangle of the weights matrix.
// This is most convenient if num_inputs_per_group_ is 4, and the product
// sign-extends and sums 8x8=16 bit results to 32 bits, adding 4 adjacent
// results in the process, but it doesn't have to be implemented that way.
// The weights are re-ordered by Init() to be used sequentially by the above
// algorithm, followed by the biases, so they can be added at the end.
// The base class computes the base C++ implementation.
// NOTE that, although the subclasses execute on different SIMD hardware, no
// virtual methods are needed, as the constructor sets up everything that
// is required to allow the base class implementation to do all the work.
class IntSimdMatrix {
 public:
  // Constructor should set the data members to indicate the sizes.
  // NOTE: Base constructor public only for test purposes.
  IntSimdMatrix()
      : num_outputs_per_register_(1),
        max_output_registers_(1),
        num_inputs_per_register_(1),
        num_inputs_per_group_(1),
        num_input_groups_(1) {}
    }
    
      // Check the density for a seed candidate (part) using its math density and
  // italic density, returns true if the check passed.
  bool CheckSeedDensity(const float math_density_high,
                        const float math_density_low,
                        const ColPartition* part) const;
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }