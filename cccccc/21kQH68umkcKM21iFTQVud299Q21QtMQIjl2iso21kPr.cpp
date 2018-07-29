
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    #include 'content/nw/src/api/menu/menu.h'
    
    
    {  return RespondNow(NoArguments());
}
    
      class ClipboardWriter {
  public:
    ClipboardWriter() {
      scw_.reset(new ui::ScopedClipboardWriter(ui::CLIPBOARD_TYPE_COPY_PASTE));
    }
    }
    
    
    {
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenRegisterStreamFunction);
  };
} // extensions
    
    
    {  /* Copy the output layer to a std::vector */
  Blob<float>* output_layer = net_->output_blobs()[0];
  const float* begin = output_layer->cpu_data();
  const float* end = begin + output_layer->channels();
  return std::vector<float>(begin, end);
}
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    #endif  // CAFFE_CUDNN_TANH_LAYER_HPP_

    
    #include <vector>
    
    TEST_P(DerivedTest, DoesBlah) {
  // GetParam works just the same here as if you inherit from TestWithParam.
  EXPECT_TRUE(foo.Blah(GetParam()));
}
    
    // A helper class for implementing EXPECT_FATAL_FAILURE() and
// EXPECT_NONFATAL_FAILURE().  Its destructor verifies that the given
// TestPartResultArray contains exactly one failure that has the given
// type and contains the given substring.  If that's not the case, a
// non-fatal failure will be generated.
class GTEST_API_ SingleFailureChecker {
 public:
  // The constructor remembers the arguments.
  SingleFailureChecker(const TestPartResultArray* results,
                       TestPartResult::Type type,
                       const string& substr);
  ~SingleFailureChecker();
 private:
  const TestPartResultArray* const results_;
  const TestPartResult::Type type_;
  const string substr_;
    }
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ', '
                            << e5 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4
                            << '\n' << e5 << ' evaluates to ' << v5;
}
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(DeathTest);
};
    
    // GetTypeName<T>() returns a human-readable name of type T.
// NB: This function is also used in Google Mock, so don't move it inside of
// the typed-test-only section below.
template <typename T>
std::string GetTypeName() {
# if GTEST_HAS_RTTI
    }
    
    
    {}  // namespace

    
    /**
 * @brief CCUtil::main_setup - set location of tessdata and name of image
 *
 * @param argv0 - paths to the directory with language files and config files.
 * An actual value of argv0 is used if not nullptr, otherwise TESSDATA_PREFIX is
 * used if not nullptr, next try to use compiled in -DTESSDATA_PREFIX. If previous
 * is not successful - use current directory.
 * @param basename - name of image
 */
void CCUtil::main_setup(const char *argv0, const char *basename) {
  imagebasename = basename;      /**< name of image */
    }
    
    // The ColumnFinder class finds columns in the grid.
class ColumnFinder : public TabFind {
 public:
  // Gridsize is an estimate of the text size in the image. A suitable value
  // is in TO_BLOCK::line_size after find_components has been used to make
  // the blobs.
  // bleft and tright are the bounds of the image (rectangle) being processed.
  // vlines is a (possibly empty) list of TabVector and vertical_x and y are
  // the sum logical vertical vector produced by LineFinder::FindVerticalLines.
  // If cjk_script is true, then broken CJK characters are fixed during
  // layout analysis to assist in detecting horizontal vs vertically written
  // textlines.
  ColumnFinder(int gridsize, const ICOORD& bleft, const ICOORD& tright,
               int resolution, bool cjk_script, double aligned_gap_fraction,
               TabVector_LIST* vlines, TabVector_LIST* hlines,
               int vertical_x, int vertical_y);
  virtual ~ColumnFinder();
    }
    
    // Insert the given blocks at the front of the completed_blocks_ list so
// they can be kept in the correct reading order.
void WorkingPartSet::InsertCompletedBlocks(BLOCK_LIST* blocks,
                                           TO_BLOCK_LIST* to_blocks) {
  BLOCK_IT block_it(&completed_blocks_);
  block_it.add_list_before(blocks);
  TO_BLOCK_IT to_block_it(&to_blocks_);
  to_block_it.add_list_before(to_blocks);
}
    
    int PowerIphone::get_power_percent_left() {
	if (UpdatePowerInfo()) {
		return percent_left;
	} else {
		return -1;
	}
}
    
      m_max_mcus_per_row = (m_image_x_size + (m_max_mcu_x_size - 1)) / m_max_mcu_x_size;
  m_max_mcus_per_col = (m_image_y_size + (m_max_mcu_y_size - 1)) / m_max_mcu_y_size;
    
    #if (defined(__GNUC__) && defined(__STDC__) && __STDC__ && __STDC_VERSION__ >= 199901L)
        /* supported by gcc in C99 mode, but not by all other compilers */
        #warning 'Don't have the functions lrint() and lrintf ().'
        #warning 'Replacing these functions with a standard C cast.'
#endif /* __STDC_VERSION__ >= 199901L */
        #include <math.h>
        #define float2int(flt) ((int)(floor(.5+flt)))
#endif
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /* get number of leading zeros and fractional part (the bits right after the leading one */
static OPUS_INLINE void silk_CLZ_FRAC(
    opus_int32 in,            /* I  input                               */
    opus_int32 *lz,           /* O  number of leading zeros             */
    opus_int32 *frac_Q7       /* O  the 7 bits right after the leading one */
)
{
    opus_int32 lzeros = silk_CLZ32(in);
    }
    
      // Compares img with the baseline image and saves the resulting distance map
  // inside the object. The provided image must have the same dimensions as the
  // baseline image.
  virtual void Compare(const OutputImage& img) = 0;
    
    
    {
    {    // Apply the fancy upsampler on the subsampled block.
    for (int y = ymin; y <= ymax; ++y) {
      const int y0 = ((y & ~1) / 2 - block_y * 8 + 1) * kSubsampledEdgeSize;
      const int dy = ((y & 1) * 2 - 1) * kSubsampledEdgeSize;
      uint16_t* rowptr = &pixels_[y * width_];
      for (int x = xmin; x <= xmax; ++x) {
        const int x0 = (x & ~1) / 2 - block_x * 8 + 1;
        const int dx = (x & 1) * 2 - 1;
        const int ix = x0 + y0;
        rowptr[x] = (subsampled[ix] * 9 + subsampled[ix + dy] * 3 +
                     subsampled[ix + dx] * 3 + subsampled[ix + dx + dy]) >> 4;
      }
    }
  } else {
    printf('Sampling ratio not supported: factor_x = %d factor_y = %d\n',
           factor_x_, factor_y_);
    exit(1);
  }
}
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    #include 'guetzli/jpeg_data.h'
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);