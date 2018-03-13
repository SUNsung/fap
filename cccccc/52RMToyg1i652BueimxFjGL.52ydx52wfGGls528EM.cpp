
        
          public:
    ObjCMethod(SILDeclRef method, SILType searchType, bool startAtSuper)
      : method(method), searchTypeAndSuper(searchType, startAtSuper)
    {}
    
    SILDeclRef getMethod() const { return method; }
    SILType getSearchType() const { return searchTypeAndSuper.getPointer(); }
    bool shouldStartAtSuper() const { return searchTypeAndSuper.getInt(); }
    
    /// FIXME: Thunk down to a Swift function value?
    llvm::Value *getExplosionValue(IRGenFunction &IGF) const {
      llvm_unreachable('thunking unapplied objc method to swift function '
                       'not yet implemented');
    }
    
    /// Determine the kind of message that should be sent to this
    /// method.
    ObjCMessageKind getMessageKind() const {
      // Determine the kind of message send to perform.
      if (!getSearchType()) return ObjCMessageKind::Normal;
    }
    
    class SILBasicBlock;
class SILInstruction;
class SILModule;
class SILValue;
class DeadEndBlocks;
    
      const swift::markup::Document *getDocument() const { return Doc; }
    
    /// Create a canonicalized substitution list from subs.
/// subs is the substitution list to be canonicalized.
/// canSubs is an out-parameter, which is used to store the results in case
/// the list of substitutions was not canonical.
/// The function returns a list of canonicalized substitutions.
/// If the substitution list subs was canonical already, it will be returned and
/// canSubs out-parameter will be empty.
/// If something had to be canonicalized, then the canSubs out-parameter will be
/// populated and the returned SubstitutionList would refer to canSubs storage.
SubstitutionList
getCanonicalSubstitutionList(SubstitutionList subs,
                             SmallVectorImpl<Substitution> &canSubs);
    
      /** \brief Add a semantic error message with extra context.
   * \param value JSON Value location associated with the error
   * \param message The error message.
   * \param extra Additional JSON Value location to contextualize the error
   * \return \c true if the error was successfully added, \c false if either
   * Value offset exceeds the document size.
   */
  bool pushError(const Value& value, const std::string& message, const Value& extra);
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    
    {  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
  ASSERT_TRUE(message.ParseFromString(message.SerializeAsString()));
  EXPECT_FALSE(message.any_value().Is<protobuf_unittest::TestAny>());
  EXPECT_TRUE(message.any_value().Is<google::protobuf::Any>());
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    void RepeatedMessageFieldGenerator::WriteToString(io::Printer* printer) {
  variables_['field_name'] = GetFieldName(descriptor_);
  printer->Print(
    variables_,
    'PrintField(\'$field_name$\', $name$_, writer);\n');
}
    
      fix_in_buffer();
    
    #endif

    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
    
    {  &_huff_book_line_2048x27_0sub0,
  &_huff_book_line_2048x27_1sub0,
  &_huff_book_line_2048x27_1sub1,
  &_huff_book_line_2048x27_2sub0,
  &_huff_book_line_2048x27_2sub1,
  &_huff_book_line_2048x27_3sub1,
  &_huff_book_line_2048x27_3sub2,
  &_huff_book_line_2048x27_3sub3,
  &_huff_book_line_2048x27_4sub1,
  &_huff_book_line_2048x27_4sub2,
  &_huff_book_line_2048x27_4sub3,
};
    
    #include 'vorbis/codec.h'
#include 'backends.h'
#include 'books/coupled/res_books_stereo.h'
    
      {2,0,30,  &_residue_44p_hi,
   &_huff_book__44p9_long,&_huff_book__44p9_long,
   &_resbook_44p_9,&_resbook_44p_9},
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
    #undef MULT16_32_Q15_ADD
static inline int MULT16_32_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    # if !defined(__OPTIMIZE__)
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(_mm_loadl_epi64((__m128i *)(x))))
# else
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(*(__m128i *)(x)))
# endif
    
    /// Get a list of keys for a given domain.
Status scanDatabaseKeys(const std::string& domain,
                        std::vector<std::string>& keys,
                        size_t max = 0);
    
      /**
   * @brief End all EventPublisher run loops and deregister.
   *
   * End is NOT the same as deregistration. End will call deregister on all
   * publishers then either join or detach their run loop threads.
   * See EventFactory::deregisterEventPublisher for actions taken during
   * deregistration.
   *
   * @param join if true, threads will be joined
   */
  static void end(bool join = false);
    
    /**
 * @brief Helper struct for managing extenion metadata.
 *
 * This structure should match the members of Thrift's InternalExtensionInfo.
 */
struct ExtensionInfo {
  std::string name;
  std::string version;
  std::string min_sdk_version;
  std::string sdk_version;
};
    
    /*
 * @brief Replace gflags' `DEFINE_type` macros to track osquery flags.
 *
 * Do not use this macro within the codebase directly! Use the subsequent macros
 * that abstract the tail of boolean arguments into meaningful statements.
 *
 * @param type(t) The `_type` symbol portion of the gflags define.
 * @param name(n) The name symbol passed to gflags' `DEFINE_type`.
 * @param value(v) The default value, use a C++ literal.
 * @param desc(d) A string literal used for help display.
 * @param shell(s) Boolean, true if this is only supported in osqueryi.
 * @param extension(e) Boolean, true if this is only supported in an extension.
 * @param cli(c) Boolean, true if this can only be set on the CLI (or flagfile).
 *   This helps documentation since flags can also be set within configuration
 *   as 'options'.
 * @param hidden(h) Boolean, true if this is hidden from help displays.
 */
#define OSQUERY_FLAG(t, n, v, d, s, e, c, h)                                   \
  DEFINE_##t(n, v, d);                                                         \
  namespace flags {                                                            \
  const int flag_##n = Flag::create(#n, {d, s, e, c, h});                      \
  }
    
    
    {// Remove registry-helper macros from the SDK.
#undef REGISTER
#define REGISTER 'Do not REGISTER in the osquery SDK'
#undef REGISTER_INTERNAL
#define REGISTER_INTERNAL 'Do not REGISTER_INTERNAL in the osquery SDK'
#undef CREATE_REGISTRY
#define CREATE_REGISTRY 'Do not CREATE_REGISTRY in the osquery SDK'
#undef CREATE_LAZY_REGISTRY
#define CREATE_LAZY_REGISTRY 'Do not CREATE_LAZY_REGISTRY in the osquery SDK'
}

    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    #include <osquery/config.h>
#include <osquery/dispatcher.h>
    
    namespace osquery {
    }
    
    // Apply the 'fancy upsample' filter used by libjpeg.
std::vector<float> Blur(const std::vector<float>& img,
                        const int width, const int height) {
  std::vector<float> img_out(width * height);
  for (int y0 = 0; y0 < height; y0 += 2) {
    for (int x0 = 0; x0 < width; x0 += 2) {
      for (int iy = 0; iy < 2 && y0 + iy < height; ++iy) {
        for (int ix = 0; ix < 2 && x0 + ix < width; ++ix) {
          int dy = 4 * iy - 2;
          int dx = 4 * ix - 2;
          int x1 = std::min(width - 1, std::max(0, x0 + dx));
          int y1 = std::min(height - 1, std::max(0, y0 + dy));
          img_out[(y0 + iy) * width + x0 + ix] =
              (9.0f * img[y0 * width + x0] +
               3.0f * img[y0 * width + x1] +
               3.0f * img[y1 * width + x0] +
               1.0f * img[y1 * width + x1]) / 16.0f;
        }
      }
    }
  }
  return img_out;
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    #include 'guetzli/jpeg_data.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
      int iquant[3 * kDCTBlockSize];
  int idx = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < kDCTBlockSize; ++j) {
      int v = quant[idx];
      jpg->quant[i].values[j] = v;
      iquant[idx++] = ((1 << kIQuantBits) + 1) / v;
    }
  }
    
    
    {  return total_size;
}
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
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
    
    // Generates client API for the service
void GenerateService(const grpc_generator::Service *service, grpc_generator::Printer* printer,
                     std::map<grpc::string, grpc::string> vars) {
	vars['Service'] = exportName(service->name());
	// Client Interface
	printer->Print(vars, '// Client API for $Service$ service\n');
	printer->Print(vars, 'type $Service$Client interface{\n');
	printer->Indent();
	for (int i = 0; i < service->method_count(); i++) {
		GenerateClientMethodSignature(service->method(i).get(), printer, vars);
		printer->Print('\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    }
    
    ::grpc::Status MonsterStorage::Service::Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    inline void IterateFlatBuffer(const uint8_t *buffer,
                              const TypeTable *type_table,
                              IterationVisitor *callback) {
  IterateObject(GetRoot<uint8_t>(buffer), type_table, callback);
}
    
      // Get access to the root:
  auto monster = GetMonster(builder.GetBufferPointer());
    
    #include 'flatbuffers/idl.h'
#include 'flatbuffers/util.h'
    
    static void Error(const flatbuffers::FlatCompiler *flatc,
                  const std::string &err, bool usage, bool show_exe_name) {
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('error: %s\n', err.c_str());
  if (usage) { printf('%s', flatc->GetUsageString(g_program_name).c_str()); }
  exit(1);
}