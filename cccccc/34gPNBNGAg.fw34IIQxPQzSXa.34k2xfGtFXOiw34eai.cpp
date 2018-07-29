
        
        /// Attempt to get a doc comment from the declaration, or other inherited
/// sources, like from base classes or protocols.
Optional<DocComment *> getCascadingDocComment(swift::markup::MarkupContext &MC,
                                             const Decl *D);
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    #ifndef SWIFT_INDEX_INDEXDATACONSUMER_H
#define SWIFT_INDEX_INDEXDATACONSUMER_H
    
      ResultPlanBuilder(SILGenFunction &SGF, SILLocation loc,
                    const CalleeTypeInfo &calleeTypeInfo)
      : SGF(SGF), loc(loc), calleeTypeInfo(calleeTypeInfo),
        // We reverse the order so we can pop values off the back.
        allResults(reversed(calleeTypeInfo.substFnType->getResults())) {}
    
    
    {
    {
    {  unsigned getNumFixitsApplied() const {
    return NumFixitsApplied;
  }
};
} // end namespace migrator
} // end namespace swift
    
        do {
      if (this == I)
        return true;
    }
    
    namespace swift {
  class Expr;
  class SourceLoc;
  struct ASTNode;
    }
    
    CharReaderBuilder::CharReaderBuilder()
{
  setDefaults(&settings_);
}
CharReaderBuilder::~CharReaderBuilder()
{}
CharReader* CharReaderBuilder::newCharReader() const
{
  bool collectComments = settings_['collectComments'].asBool();
  OurFeatures features = OurFeatures::all();
  features.allowComments_ = settings_['allowComments'].asBool();
  features.strictRoot_ = settings_['strictRoot'].asBool();
  features.allowDroppedNullPlaceholders_ = settings_['allowDroppedNullPlaceholders'].asBool();
  features.allowNumericKeys_ = settings_['allowNumericKeys'].asBool();
  features.allowSingleQuotes_ = settings_['allowSingleQuotes'].asBool();
  features.stackLimit_ = settings_['stackLimit'].asInt();
  features.failIfExtra_ = settings_['failIfExtra'].asBool();
  features.rejectDupKeys_ = settings_['rejectDupKeys'].asBool();
  features.allowSpecialFloats_ = settings_['allowSpecialFloats'].asBool();
  return new OurCharReader(collectComments, features);
}
static void getValidReaderKeys(std::set<std::string>* valid_keys)
{
  valid_keys->clear();
  valid_keys->insert('collectComments');
  valid_keys->insert('allowComments');
  valid_keys->insert('strictRoot');
  valid_keys->insert('allowDroppedNullPlaceholders');
  valid_keys->insert('allowNumericKeys');
  valid_keys->insert('allowSingleQuotes');
  valid_keys->insert('stackLimit');
  valid_keys->insert('failIfExtra');
  valid_keys->insert('rejectDupKeys');
  valid_keys->insert('allowSpecialFloats');
}
bool CharReaderBuilder::validate(Json::Value* invalid) const
{
  Json::Value my_invalid;
  if (!invalid) invalid = &my_invalid;  // so we do not need to test for NULL
  Json::Value& inv = *invalid;
  std::set<std::string> valid_keys;
  getValidReaderKeys(&valid_keys);
  Value::Members keys = settings_.getMemberNames();
  size_t n = keys.size();
  for (size_t i = 0; i < n; ++i) {
    std::string const& key = keys[i];
    if (valid_keys.find(key) == valid_keys.end()) {
      inv[key] = settings_[key];
    }
  }
  return 0u == inv.size();
}
Value& CharReaderBuilder::operator[](std::string key)
{
  return settings_[key];
}
// static
void CharReaderBuilder::strictMode(Json::Value* settings)
{
//! [CharReaderBuilderStrictMode]
  (*settings)['allowComments'] = false;
  (*settings)['strictRoot'] = true;
  (*settings)['allowDroppedNullPlaceholders'] = false;
  (*settings)['allowNumericKeys'] = false;
  (*settings)['allowSingleQuotes'] = false;
  (*settings)['stackLimit'] = 1000;
  (*settings)['failIfExtra'] = true;
  (*settings)['rejectDupKeys'] = true;
  (*settings)['allowSpecialFloats'] = false;
//! [CharReaderBuilderStrictMode]
}
// static
void CharReaderBuilder::setDefaults(Json::Value* settings)
{
//! [CharReaderBuilderDefaults]
  (*settings)['collectComments'] = true;
  (*settings)['allowComments'] = true;
  (*settings)['strictRoot'] = false;
  (*settings)['allowDroppedNullPlaceholders'] = false;
  (*settings)['allowNumericKeys'] = false;
  (*settings)['allowSingleQuotes'] = false;
  (*settings)['stackLimit'] = 1000;
  (*settings)['failIfExtra'] = false;
  (*settings)['rejectDupKeys'] = false;
  (*settings)['allowSpecialFloats'] = false;
//! [CharReaderBuilderDefaults]
}
    
    
    {}  // namespace google

    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
      // Output code which initializes the static variables generated by
  // GenerateStaticVariables(). Returns an estimate of bytecode size.
  virtual int GenerateStaticVariableInitializers(io::Printer* printer) = 0;
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    
    {    const ParamGeneratorInterface<ParamType>* const base_;
    // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
    // current[i]_ is the actual traversing iterator.
    const typename ParamGenerator<T1>::iterator begin1_;
    const typename ParamGenerator<T1>::iterator end1_;
    typename ParamGenerator<T1>::iterator current1_;
    const typename ParamGenerator<T2>::iterator begin2_;
    const typename ParamGenerator<T2>::iterator end2_;
    typename ParamGenerator<T2>::iterator current2_;
    const typename ParamGenerator<T3>::iterator begin3_;
    const typename ParamGenerator<T3>::iterator end3_;
    typename ParamGenerator<T3>::iterator current3_;
    const typename ParamGenerator<T4>::iterator begin4_;
    const typename ParamGenerator<T4>::iterator end4_;
    typename ParamGenerator<T4>::iterator current4_;
    const typename ParamGenerator<T5>::iterator begin5_;
    const typename ParamGenerator<T5>::iterator end5_;
    typename ParamGenerator<T5>::iterator current5_;
    ParamType current_value_;
  };  // class CartesianProductGenerator5::Iterator
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    
    {
]]
}  // namespace gtest_internal
    
    
    {	if (_is_multiplayer) {
		emit_signal('connection_failed');
	} else {
		emit_signal('connection_error');
	}
}
    
    	if (playback.is_valid())
		return playback->get_texture();
    
    /// This class is required to implement custom collision behaviour in the broadphase
struct GodotFilterCallback : public btOverlapFilterCallback {
	static bool test_collision_filters(uint32_t body0_collision_layer, uint32_t body0_collision_mask, uint32_t body1_collision_layer, uint32_t body1_collision_mask);
    }
    
    // Decode a scan in a progressively encoded image.
void jpeg_decoder::decode_scan(pDecode_block_func decode_block_func)
{
  int mcu_row, mcu_col, mcu_block;
  int block_x_mcu[JPGD_MAX_COMPONENTS], m_block_y_mcu[JPGD_MAX_COMPONENTS];
    }
    
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
    
    #if (defined(__GNUC__) && defined(__STDC__) && __STDC__ && __STDC_VERSION__ >= 199901L)
        /* supported by gcc in C99 mode, but not by all other compilers */
        #warning 'Don't have the functions lrint() and lrintf ().'
        #warning 'Replacing these functions with a standard C cast.'
#endif /* __STDC_VERSION__ >= 199901L */
        #include <math.h>
        #define float2int(flt) ((int)(floor(.5+flt)))
#endif
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv4(opus_int32 a, opus_int16 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#silk_SMULWB\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(a), 'r'(b<<16)
  );
  return rd_hi;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv4(a, b))
    
    const StaticString s_add('add');
const StaticString s_addall('addall');
const StaticString s_append('append');
const StaticString s_clear('clear');
const StaticString s_remove('remove');
const StaticString s_removeall('removeall');
const StaticString s_removekey('removekey');
const StaticString s_set('set');
const StaticString s_setall('setall');
    
      // parse the heap once to create a PtrMap for pointer filtering. Create
  // one node for every parsed block, including NativeData and AsyncFuncFrame
  // blocks. Only include free blocks if requested.
  tl_heap->forEachHeapObject([&](HeapObject* h, size_t alloc_size) {
    if (h->kind() != HeaderKind::Free || include_free) {
      blocks.insert(h, alloc_size); // adds interval [h, h+alloc_size[
    }
  });
  blocks.prepare();
    
    void IniSetting::Unbind(const std::string& name) {
  assertx(!name.empty());
  s_user_callbacks->erase(name);
}
    
    #endif  // MXNET_RCPP_EXECUTOR_H_

    
    using nnvm::NodeAttrs;
    
    int MXSymbolListAttrShallow(SymbolHandle symbol,
                            mx_uint *out_size,
                            const char*** out) {
  nnvm::Symbol *s = static_cast<nnvm::Symbol*>(symbol);
  MXAPIThreadLocalEntry *ret = MXAPIThreadLocalStore::Get();
  API_BEGIN();
  std::unordered_map<std::string, std::string> attr =
      s->ListAttrs(static_cast<nnvm::Symbol::ListAttrOption>(1));  // NOLINT(*)
    }
    
    
    {}  // namespace mxnet
#endif  // MXNET_IMPERATIVE_CACHED_OP_H_

    
    #include <nnvm/symbolic.h>
#include <nnvm/graph.h>
#include <nnvm/node.h>
    
      void SetNewMem(const std::vector<const mkldnn::memory *> &in_data,
                 const mkldnn::memory &output) {
    CHECK_EQ(in_data.size(), data.size());
    for (size_t i = 0; i < data.size(); i++) {
      if (this->data[i] == nullptr) {
        this->data[i] = std::shared_ptr<mkldnn::memory>(new mkldnn::memory(
                in_data[i]->get_primitive_desc(), in_data[i]->get_data_handle()));
        this->data_mem.push_back(*this->data[i]);
      } else {
        this->data[i]->set_data_handle(in_data[i]->get_data_handle());
      }
    }
    if (this->out == nullptr)
      this->out = std::shared_ptr<mkldnn::memory>(new mkldnn::memory(
              fwd_pd.dst_primitive_desc(), output.get_data_handle()));
    else
      this->out->set_data_handle(output.get_data_handle());
    }
    
    template<typename AttrType, bool (*is_none)(const AttrType&),
         bool (*assign)(AttrType*, const AttrType&), bool reverse_infer,
         std::string (*attr_string)(const AttrType&),
         int n_in = -1, int n_out = -1>
inline bool ElemwiseAttr(const nnvm::NodeAttrs& attrs,
                         std::vector<AttrType> *in_attrs,
                         std::vector<AttrType> *out_attrs,
                         const AttrType& none) {
  AttrType dattr = none;
  size_t in_size = in_attrs->size();
  size_t out_size = out_attrs->size();
  if (n_in != -1)
    in_size = static_cast<size_t>(n_in);
  if (n_out != -1)
    out_size = static_cast<size_t>(n_out);
    }
    
    namespace boost {
namespace asio {
    }
    }
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    
    {} // namespace boost
    
    #ifndef BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
#define BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    #include <stddef.h>
#include <stdint.h>
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
      void ToLinearRGB(int xmin, int ymin, int xsize, int ysize,
                   std::vector<std::vector<float> >* rgb) const;
    
    #endif  // GUETZLI_PREPROCESS_DOWNSAMPLE_H_
