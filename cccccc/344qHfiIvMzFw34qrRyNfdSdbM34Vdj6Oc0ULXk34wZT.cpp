
        
        
#include 'base/basictypes.h'
    
      std::string key;
  std::string modifiers;
  option.GetString('key',&key);
  option.GetString('modifiers',&modifiers);
    
    #include 'base/base64.h'
#include 'base/logging.h'
#include 'base/strings/stringprintf.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_clipboard.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'ui/base/clipboard/clipboard.h'
#include 'ui/base/clipboard/scoped_clipboard_writer.h'
#include 'ui/gfx/codec/jpeg_codec.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'third_party/skia/include/core/SkBitmap.h'
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
     protected:
  ~NwObjCreateFunction() override;
    
    #endif //NW_SRC_API_NW_SCREEN_API_H_

    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
     protected:
  /**
   * Sets up the internal data for iterating the blobs of a new word, then
   * moves the iterator to the given offset.
   */
  TESS_LOCAL void BeginWord(int offset);
    
    
/**********************************************************************
 * ROW::plot
 *
 * Draw the ROW in the given colour.
 **********************************************************************/
    
    
    {}  // namespace tesseract.

    
    /**
 * The text lines are read in the given sequence.
 *
 * In English, the order is top-to-bottom.
 * In Chinese, vertical text lines are read right-to-left.  Mongolian is
 * written in vertical columns top to bottom like Chinese, but the lines
 * order left-to right.
 *
 * Note that only some combinations make sense.  For example,
 * WRITING_DIRECTION_LEFT_TO_RIGHT implies TEXTLINE_ORDER_TOP_TO_BOTTOM
*/
enum TextlineOrder {
  TEXTLINE_ORDER_LEFT_TO_RIGHT = 0,
  TEXTLINE_ORDER_RIGHT_TO_LEFT = 1,
  TEXTLINE_ORDER_TOP_TO_BOTTOM = 2,
};
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #include <inttypes.h>
    
    namespace {
    }
    
      virtual ~AbstractAuthResolver();
    
    namespace aria2 {
    }
    
    void AbstractOptionHandler::setEraseAfterParse(bool f)
{
  updateFlags(FLAG_ERASE_AFTER_PARSE, f);
}
    
    #include 'FileAllocationIterator.h'
    
      /**
   * Returns announce URL.
   */
  std::string getAnnounce() const;
    
      AnnounceEvent event;
  std::deque<std::string> urls;
    
      TLSVersion getMinTLSVersion() const { return minTLSVer_; }
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
      std::string const& fname = FLAGS_benchmark_out;
  if (fname.empty() && file_reporter) {
    Err << 'A custom file reporter was provided but '
           '--benchmark_out=<file> was not specified.'
        << std::endl;
    std::exit(1);
  }
  if (!fname.empty()) {
    output_file.open(fname);
    if (!output_file.is_open()) {
      Err << 'invalid file name: '' << fname << std::endl;
      std::exit(1);
    }
    if (!file_reporter) {
      default_file_reporter = internal::CreateReporter(
          FLAGS_benchmark_out_format, ConsoleReporter::OO_None);
      file_reporter = default_file_reporter.get();
    }
    file_reporter->SetOutputStream(&output_file);
    file_reporter->SetErrorStream(&output_file);
  }
    
    // Parses a string for an Int32 flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseInt32Flag(const char* str, const char* flag, int32_t* value);
    
    
    {  double coef;
  double rms;
  BigO complexity;
};
    
    void JSONReporter::ReportRuns(std::vector<Run> const& reports) {
  if (reports.empty()) {
    return;
  }
  std::string indent(4, ' ');
  std::ostream& out = GetOutputStream();
  if (!first_report_) {
    out << ',\n';
  }
  first_report_ = false;
    }
    
    #include 'benchmark/benchmark.h'