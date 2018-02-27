
        
          if (flags.bit (CHECK_DAWGS) &&
    (word->best_choice->permuter () != SYSTEM_DAWG_PERM) &&
    (word->best_choice->permuter () != FREQ_DAWG_PERM) &&
    (word->best_choice->permuter () != USER_DAWG_PERM) &&
    (word->best_choice->permuter () != NUMBER_PERM)) {
    if (tessedit_adaption_debug) tprintf('word not in dawgs\n');
    return FALSE;
  }
    
    // Blamer-related information to determine the source of errors.
struct BlamerBundle {
  static const char *IncorrectReasonName(IncorrectResultReason irr);
  BlamerBundle() : truth_has_char_boxes_(false),
      incorrect_result_reason_(IRR_CORRECT),
      lattice_data_(NULL) { ClearResults(); }
  BlamerBundle(const BlamerBundle &other) {
    this->CopyTruth(other);
    this->CopyResults(other);
  }
  ~BlamerBundle() { delete[] lattice_data_; }
    }
    
    
    {}  // namespace tesseract.

    
    // Fills in the x-height range accepted by the given unichar_id, given its
// bounding box in the usual baseline-normalized coordinates, with some
// initial crude x-height estimate (such as word size) and this denoting the
// transformation that was used.
void DENORM::XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                          const TBOX& bbox,
                          float* min_xht, float* max_xht, float* yshift) const {
  // Default return -- accept anything.
  *yshift = 0.0f;
  *min_xht = 0.0f;
  *max_xht = MAX_FLOAT32;
    }
    
    
    {  private:
    float xcoord;                //2 floating coords
    float ycoord;
};
    
    namespace jit {
    }
    
    Vreg Vunit::makeConst(Vconst vconst) {
  auto it = constToReg.find(vconst);
  if (it != constToReg.end()) return it->second;
    }
    
      mpz_clear(gmpDataA);
  mpz_clear(gmpDataB);
  mpz_clear(gmpReturn);
    
      /**
   * Set the URLChecker function which determines which paths this server is
   * allowed to server.
   *
   * Defaults to SatelliteServerInfo::checkURL()
   */
  void setUrlChecker(const URLChecker& checker) {
    m_urlChecker = checker;
  }
    
    namespace HPHP {
    }
    
    void ThriftBuffer::read(Array &data) {
  String sdata;
  read(sdata);
  data = unserialize_with_no_notice(sdata).toArray();
}
    
    #include <limits.h>  /* for PIPE_BUF */
    
    
    {  return make_map_array(
    s_name,   String(pw.pw_name,   CopyString),
    s_passwd, String(pw.pw_passwd, CopyString),
    s_uid,    (int)pw.pw_uid,
    s_gid,    (int)pw.pw_gid,
    s_gecos,  String(pw.pw_gecos,  CopyString),
    s_dir,    String(pw.pw_dir,    CopyString),
    s_shell,  String(pw.pw_shell,  CopyString)
  );
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {
    {
    {                // add to the desired node group
                m_net->AddToNodeGroup(groupTag, cnNode);
            }
        }
    }
    
    namespace Microsoft { namespace MSR { namespace BS {
    }
    }
    }
    
        // FileParse - parse at the file level, can be overridden for 'section of file' behavior
    // stringParse - file concatentated as a single string
    void FileParse(const std::string& stringParse)
    {
        ConfigParameters sections(stringParse);
        bool loadOrEditFound = false;
    }
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    #include 'guetzli/entropy_encode.h'
    
    #include <math.h>
    
    // kIDCTMatrix[8*x+u] = alpha(u)*cos((2*x+1)*u*M_PI/16)*sqrt(2), with fixed 13
// bit precision, where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
// Some coefficients are off by +-1 to mimick libjpeg's behaviour.
static const int kIDCTMatrix[kDCTBlockSize] = {
  8192,  11363,  10703,   9633,   8192,   6437,   4433,   2260,
  8192,   9633,   4433,  -2259,  -8192, -11362, -10704,  -6436,
  8192,   6437,  -4433, -11362,  -8192,   2261,  10704,   9633,
  8192,   2260, -10703,  -6436,   8192,   9633,  -4433, -11363,
  8192,  -2260, -10703,   6436,   8192,  -9633,  -4433,  11363,
  8192,  -6437,  -4433,  11362,  -8192,  -2261,  10704,  -9633,
  8192,  -9633,   4433,   2259,  -8192,  11362, -10704,   6436,
  8192, -11363,  10703,  -9633,   8192,  -6437,   4433,  -2260,
};
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    
    { private:
  const int width_;
  const int height_;
  std::vector<OutputImageComponent> components_;
};
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
      assert(animal->name()->str() == 'Dog');
  assert(animal->sound()->str() == 'Bark');
  (void)animal; // To silence 'Unused Variable' warnings.
    
    
#endif  // GRPC_monster_5ftest__INCLUDED

    
     private:
  void ParseFile(flatbuffers::Parser &parser, const std::string &filename,
                 const std::string &contents,
                 std::vector<const char *> &include_directories) const;
    
      // Converts a binary buffer to text using one of the schemas in the registry,
  // use the file_identifier to indicate which.
  // If DetachedBuffer::data() is null then parsing failed.
  DetachedBuffer TextToFlatBuffer(const char *text,
                                  const char *file_identifier) {
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(file_identifier, &parser)) return DetachedBuffer();
    // Parse the text.
    if (!parser.Parse(text)) {
      lasterror_ = parser.error_;
      return DetachedBuffer();
    }
    // We have a valid FlatBuffer. Detach it from the builder and return.
    return parser.builder_.ReleaseBufferPointer();
  }
    
      // Use the `CreateWeapon` shortcut to create Weapons with all fields set.
  auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
  auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);
    
      flatbuffers::FlatCompiler::InitParams params;
  params.generators = generators;
  params.num_generators = sizeof(generators) / sizeof(generators[0]);
  params.warn_fn = Warn;
  params.error_fn = Error;
    
    // Create a struct with a builder and the struct's arguments.
static void GenStructBuilder(const StructDef &struct_def,
                             std::string *code_ptr) {
  BeginBuilderArgs(struct_def, code_ptr);
  StructBuilderArgs(struct_def, '', code_ptr);
  EndBuilderArgs(code_ptr);
    }