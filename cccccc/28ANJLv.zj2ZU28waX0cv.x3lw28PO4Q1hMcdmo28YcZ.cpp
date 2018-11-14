
        
        Base::~Base() {
}
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethodSync(render_frame_host(), id, type, method, *arguments, response);
  return true;
}
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenIsMonitorStartedFunction);
  };
    
    void SourceGeneratorBase::WriteGeneratedCodeAttributes(io::Printer* printer) {
  printer->Print('[global::System.Diagnostics.DebuggerNonUserCodeAttribute]\n');
}
    
    class EnumFieldGenerator : public SingleFieldGenerator {
  friend FieldGenerator* FieldGenerator::Make(const FieldDescriptor* field,
                                              const Options& options);
    }
    
    #include <emmintrin.h>
#include <smmintrin.h>
#include <cstdint>
#include 'dotproductsse.h'
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
      /**
   * Returns the bounding rectangle of the current object at the given level.
   * See comment on coordinate system above.
   * Returns false if there is no such object at the current position.
   * The returned bounding box is guaranteed to match the size and position
   * of the image returned by GetBinaryImage, but may clip foreground pixels
   * from a grey image. The padding argument to GetImage can be used to expand
   * the image to include more foreground pixels. See GetImage below.
   */
  bool BoundingBox(PageIteratorLevel level,
                   int* left, int* top, int* right, int* bottom) const;
  bool BoundingBox(PageIteratorLevel level, const int padding,
                   int* left, int* top, int* right, int* bottom) const;
  /**
   * Returns the bounding rectangle of the object in a coordinate system of the
   * working image rectangle having its origin at (rect_left_, rect_top_) with
   * respect to the original image and is scaled by a factor scale_.
   */
  bool BoundingBoxInternal(PageIteratorLevel level,
                           int* left, int* top, int* right, int* bottom) const;
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    
// Write all (changed_) parameters to a config file.
void ParamsEditor::WriteParams(char *filename,
                               bool changes_only) {
  FILE *fp;                      // input file
  char msg_str[255];
                                 // if file exists
  if ((fp = fopen (filename, 'rb')) != nullptr) {
    fclose(fp);
    sprintf (msg_str, 'Overwrite file ' '%s' '? (Y/N)', filename);
    int a = sv_window_->ShowYesNoDialog(msg_str);
    if (a == 'n') {
      return;
    }  // don't write
  }
    }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Iterator traits for selecting an iterator type as
  *                an integral constant expression.
  */
    
    
    
    template <class BidiIterator, class Allocator>
class match_results
{ 
private:
#ifndef BOOST_NO_STD_ALLOCATOR
   typedef          std::vector<sub_match<BidiIterator>, Allocator> vector_type;
#else
   typedef          std::vector<sub_match<BidiIterator> >           vector_type;
#endif
public: 
   typedef          sub_match<BidiIterator>                         value_type;
#if  !defined(BOOST_NO_STD_ALLOCATOR) && !(defined(BOOST_MSVC) && defined(_STLPORT_VERSION))
   typedef typename Allocator::const_reference                              const_reference;
#else
   typedef          const value_type&                                       const_reference;
#endif
   typedef          const_reference                                         reference;
   typedef typename vector_type::const_iterator                             const_iterator;
   typedef          const_iterator                                          iterator;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<
                                    BidiIterator>::difference_type          difference_type;
   typedef typename Allocator::size_type                                    size_type;
   typedef          Allocator                                               allocator_type;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<
                                    BidiIterator>::value_type               char_type;
   typedef          std::basic_string<char_type>                            string_type;
   typedef          BOOST_REGEX_DETAIL_NS::named_subexpressions                         named_sub_type;
    }
    
    namespace boost{
namespace BOOST_REGEX_DETAIL_NS{
    }
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_assertion(bool r)
{
   saved_assertion<BidiIterator>* pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
   pstate = pmp->pstate;
   position = pmp->position;
   bool result = (r == pmp->positive);
   m_recursive_result = pmp->positive ? r : !r;
   boost::BOOST_REGEX_DETAIL_NS::inplace_destroy(pmp++);
   m_backup_state = pmp;
   m_unwound_lookahead = true;
   return !result; // return false if the assertion was matched to stop search.
}
    
    #ifndef BOOST_REGEX_FWD_HPP
#include <boost/regex_fwd.hpp>
#endif
#ifndef BOOST_REGEX_TRAITS_HPP
#include <boost/regex/regex_traits.hpp>
#endif
#ifndef BOOST_REGEX_RAW_BUFFER_HPP
#include <boost/regex/v4/error_type.hpp>
#endif
#ifndef BOOST_REGEX_V4_MATCH_FLAGS
#include <boost/regex/v4/match_flags.hpp>
#endif
#ifndef BOOST_REGEX_RAW_BUFFER_HPP
#include <boost/regex/v4/regex_raw_buffer.hpp>
#endif
#ifndef BOOST_RE_PAT_EXCEPT_HPP
#include <boost/regex/pattern_except.hpp>
#endif
    
       match_results<BidirectionalIterator> what;  // current match
   BidirectionalIterator                base;  // start of sequence
   BidirectionalIterator                end;   // end of sequence
   const regex_type                     re;   // the expression
   match_flag_type                      flags; // flags for matching
    
    template <class OutputIterator, class Iterator, class traits, class charT>
inline OutputIterator regex_merge(OutputIterator out,
                         Iterator first,
                         Iterator last,
                         const basic_regex<charT, traits>& e, 
                         const std::basic_string<charT>& fmt,
                         match_flag_type flags = match_default)
{
   return regex_merge(out, first, last, e, fmt.c_str(), flags);
}
    
    template <class charT, class traits>
inline regex_token_iterator<const charT*, charT, traits> make_regex_token_iterator(const charT* p, const basic_regex<charT, traits>& e, int submatch = 0, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, submatch, m);
}
template <class charT, class traits, class ST, class SA>
inline regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_token_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, int submatch = 0, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, submatch, m);
}
template <class charT, class traits, std::size_t N>
inline regex_token_iterator<const charT*, charT, traits> make_regex_token_iterator(const charT* p, const basic_regex<charT, traits>& e, const int (&submatch)[N], regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, submatch, m);
}
template <class charT, class traits, class ST, class SA, std::size_t N>
inline regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_token_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, const int (&submatch)[N], regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, submatch, m);
}
template <class charT, class traits>
inline regex_token_iterator<const charT*, charT, traits> make_regex_token_iterator(const charT* p, const basic_regex<charT, traits>& e, const std::vector<int>& submatch, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, submatch, m);
}
template <class charT, class traits, class ST, class SA>
inline regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_token_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, const std::vector<int>& submatch, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_token_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, submatch, m);
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
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    // This function will create a Huffman tree.
//
// The catch here is that the tree cannot be arbitrarily deep.
// Brotli specifies a maximum depth of 15 bits for 'code trees'
// and 7 bits for 'code length code trees.'
//
// count_limit is the value that is to be faked as the minimum value
// and this minimum value is raised until the tree matches the
// maximum length requirement.
//
// This algorithm is not of excellent performance for very long data blocks,
// especially when population counts are longer than 2**tree_limit, but
// we are not planning to use this with extremely long blocks.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth) {
  // For block sizes below 64 kB, we never need to do a second iteration
  // of this loop. Probably all of our block sizes will be smaller than
  // that, so this loop is mostly of academic interest. If we actually
  // would need this, we would be better off with the Katajainen algorithm.
  for (uint32_t count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    for (size_t i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = std::max<uint32_t>(data[i], count_limit);
        tree[n++] = HuffmanTree(count, -1, static_cast<int16_t>(i));
      }
    }
    }
    }
    
    size_t FindNextMarker(const uint8_t* data, const size_t len, size_t pos) {
  // kIsValidMarker[i] == 1 means (0xc0 + i) is a valid marker.
  static const uint8_t kIsValidMarker[] = {
    1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  };
  size_t num_skipped = 0;
  while (pos + 1 < len &&
         (data[pos] != 0xff || data[pos + 1] < 0xc0 ||
          !kIsValidMarker[data[pos + 1] - 0xc0])) {
    ++pos;
    ++num_skipped;
  }
  return num_skipped;
}
    
    #include <stddef.h>
#include <stdint.h>
    
    struct HuffmanCodeTable {
  uint8_t depth[256];
  int code[256];
};