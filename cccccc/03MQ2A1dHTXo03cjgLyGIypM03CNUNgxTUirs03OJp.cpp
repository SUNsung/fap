Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
namespace functor {
    }
    }
    
    
    {}  // namespace subgraph
    
      Status WriteRecord(StringPiece slice);
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    std::ostream& operator<<(std::ostream& out,
                         const VersionedComputationHandle& versioned_handle) {
  out << versioned_handle.ToString();
  return out;
}
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    bool HloReachabilityMap::IsConnected(const HloInstruction* a,
                                     const HloInstruction* b) const {
  return IsReachable(a, b) || IsReachable(b, a);
}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
      std::string filename;
  if (new_manifest->GetString(switches::kmInjectJSDocStart, &filename))
    create_params.nw_inject_js_doc_start = filename;
  if (new_manifest->GetString(switches::kmInjectJSDocEnd, &filename))
    create_params.nw_inject_js_doc_end = filename;
  if (new_manifest->GetString(switches::kmInjectCSS, &filename))
    create_params.nw_inject_css_fn = filename;
    
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
    
    void Menu::Destroy() {
  gtk_widget_destroy(menu_);
  g_object_unref(G_OBJECT(menu_));
}
    
    #include 'content/nw/src/api/menu/menu.h'
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    // Returns a new x-height maximally compatible with the result in word_res.
// See comment above for overall algorithm.
float Tesseract::ComputeCompatibleXheight(WERD_RES *word_res,
                                          float* baseline_shift) {
  STATS top_stats(0, MAX_UINT8);
  STATS shift_stats(-MAX_UINT8, MAX_UINT8);
  int bottom_shift = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  do {
    top_stats.clear();
    shift_stats.clear();
    for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
      TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
      UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
      if (unicharset.get_isalpha(class_id) ||
          unicharset.get_isdigit(class_id)) {
        int top = blob->bounding_box().top() + bottom_shift;
        // Clip the top to the limit of normalized feature space.
        if (top >= INT_FEAT_RANGE)
          top = INT_FEAT_RANGE - 1;
        int bottom = blob->bounding_box().bottom() + bottom_shift;
        int min_bottom, max_bottom, min_top, max_top;
        unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                  &min_top, &max_top);
        // Chars with a wild top range would mess up the result so ignore them.
        if (max_top - min_top > kMaxCharTopRange)
          continue;
        int misfit_dist = MAX((min_top - x_ht_acceptance_tolerance) - top,
                            top - (max_top + x_ht_acceptance_tolerance));
        int height = top - kBlnBaselineOffset;
        if (debug_x_ht_level >= 2) {
          tprintf('Class %s: height=%d, bottom=%d,%d top=%d,%d, actual=%d,%d: ',
                  unicharset.id_to_unichar(class_id),
                  height, min_bottom, max_bottom, min_top, max_top,
                  bottom, top);
        }
        // Use only chars that fit in the expected bottom range, and where
        // the range of tops is sensibly near the xheight.
        if (min_bottom <= bottom + x_ht_acceptance_tolerance &&
            bottom - x_ht_acceptance_tolerance <= max_bottom &&
            min_top > kBlnBaselineOffset &&
            max_top - kBlnBaselineOffset >= kBlnXHeight &&
            misfit_dist > 0) {
          // Compute the x-height position using proportionality between the
          // actual height and expected height.
          int min_xht = DivRounded(height * kBlnXHeight,
                                   max_top - kBlnBaselineOffset);
          int max_xht = DivRounded(height * kBlnXHeight,
                                   min_top - kBlnBaselineOffset);
          if (debug_x_ht_level >= 2) {
            tprintf(' xht range min=%d, max=%d\n', min_xht, max_xht);
          }
          // The range of expected heights gets a vote equal to the distance
          // of the actual top from the expected top.
          for (int y = min_xht; y <= max_xht; ++y)
            top_stats.add(y, misfit_dist);
        } else if ((min_bottom > bottom + x_ht_acceptance_tolerance ||
                    bottom - x_ht_acceptance_tolerance > max_bottom) &&
                   bottom_shift == 0) {
          // Get the range of required bottom shift.
          int min_shift = min_bottom - bottom;
          int max_shift = max_bottom - bottom;
          if (debug_x_ht_level >= 2) {
            tprintf(' bottom shift min=%d, max=%d\n', min_shift, max_shift);
          }
          // The range of expected shifts gets a vote equal to the min distance
          // of the actual bottom from the expected bottom, spread over the
          // range of its acceptance.
          int misfit_weight = abs(min_shift);
          if (max_shift > min_shift)
            misfit_weight /= max_shift - min_shift;
          for (int y = min_shift; y <= max_shift; ++y)
            shift_stats.add(y, misfit_weight);
        } else {
          if (bottom_shift == 0) {
            // Things with bottoms that are already ok need to say so, on the
            // 1st iteration only.
            shift_stats.add(0, kBlnBaselineOffset);
          }
          if (debug_x_ht_level >= 2) {
            tprintf(' already OK\n');
          }
        }
      }
    }
    if (shift_stats.get_total() > top_stats.get_total()) {
      bottom_shift = IntCastRounded(shift_stats.median());
      if (debug_x_ht_level >= 2) {
        tprintf('Applying bottom shift=%d\n', bottom_shift);
      }
    }
  } while (bottom_shift != 0 &&
           top_stats.get_total() < shift_stats.get_total());
  // Baseline shift is opposite sign to the bottom shift.
  *baseline_shift = -bottom_shift / word_res->denorm.y_scale();
  if (debug_x_ht_level >= 2) {
    tprintf('baseline shift=%g\n', *baseline_shift);
  }
  if (top_stats.get_total() == 0)
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
  // The new xheight is just the median vote, which is then scaled out
  // of BLN space back to pixel space to get the x-height in pixel space.
  float new_xht = top_stats.median();
  if (debug_x_ht_level >= 2) {
    tprintf('Median xht=%f\n', new_xht);
    tprintf('Mode20:A: New x-height = %f (norm), %f (orig)\n',
            new_xht, new_xht / word_res->denorm.y_scale());
  }
  // The xheight must change by at least x_ht_min_change to be used.
  if (fabs(new_xht - kBlnXHeight) >= x_ht_min_change)
    return new_xht / word_res->denorm.y_scale();
  else
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
}
    
      *is_good = good_prefix && good_suffix;
  if (!*is_good && !*retry_rebuild_leading && !*retry_rebuild_trailing) {
    // None of it is any good. Quit now.
    delete core;
    delete prefix;
    delete suffix;
    return NULL;
  }
  recog_word_recursive(core);
    
    // The number of points to consider at each end.
const int kNumEndPoints = 3;
// The minimum number of points at which to switch to number of points
// for badly fitted lines.
// To ensure a sensible error metric, kMinPointsForErrorCount should be at
// least kMaxRealDistance / (1 - %ile) where %ile is the fractile used in
// ComputeUpperQuartileError.
const int kMinPointsForErrorCount = 16;
// The maximum real distance to use before switching to number of
// mis-fitted points, which will get square-rooted for true distance.
const int kMaxRealDistance = 2.0;
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return NULL;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : NULL;
      inT64 new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != NULL && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
      ParagraphModel()
      : justification_(tesseract::JUSTIFICATION_UNKNOWN),
         margin_(0),
         first_indent_(0),
         body_indent_(0),
         tolerance_(0) { }
    
    void ROW::plot(               //draw it
               ScrollView* window  //window to draw in
              ) {
  WERD *word;                    //current word
  WERD_IT it = &words;           //words of ROW
    }
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
      {2,0,30,  &_residue_44p,
   &_huff_book__44p2_long,&_huff_book__44p2_long,
   &_resbook_44p_2,&_resbook_44p_2},
    
     function: toplevel residue templates 8/11kHz
 last mod: $Id: residue_8.h 16962 2010-03-11 07:30:34Z xiphmont $
    
    #endif

    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    
    {    * lz = lzeros;
    * frac_Q7 = silk_ROR32(in, 24 - lzeros) & 0x7f;
}
    
    // Writes DHT and SOS marker segments to out and fills in DC/AC Huffman tables
// for each component of the image.
bool BuildAndEncodeHuffmanCodes(const JPEGData& jpg, JPEGOutput out,
                                std::vector<HuffmanCodeTable>* dc_huff_tables,
                                std::vector<HuffmanCodeTable>* ac_huff_tables) {
  const int ncomps = jpg.components.size();
  dc_huff_tables->resize(ncomps);
  ac_huff_tables->resize(ncomps);
    }
    
    void OutputImageComponent::Reset(int factor_x, int factor_y) {
  factor_x_ = factor_x;
  factor_y_ = factor_y;
  width_in_blocks_ = (width_ + 8 * factor_x_ - 1) / (8 * factor_x_);
  height_in_blocks_ = (height_ + 8 * factor_y_ - 1) / (8 * factor_y_);
  num_blocks_ = width_in_blocks_ * height_in_blocks_;
  coeffs_ = std::vector<coeff_t>(num_blocks_ * kDCTBlockSize);
  pixels_ = std::vector<uint16_t>(width_ * height_, 128 << 4);
  for (int i = 0; i < kDCTBlockSize; ++i) quant_[i] = 1;
}
    
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
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_FDCT_H_

    
    #include 'guetzli/output_image.h'
    
    namespace guetzli {
    }
    
    #include 'guetzli/jpeg_data.h'
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
      char delim_;         // The delimiter is inserted between elements
    
        // The previous changes should be on disk (L0)
    // The most recent changes should be in memory (MemTable)
    // Hence, this will test both Get() paths.
    std::string a, b, c;
    slists.Get('a', &a);
    slists.Get('b', &b);
    slists.Get('c', &c);
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
      virtual size_t GetSimCapacity() const override {
    return key_only_cache_->GetCapacity();
  }
  virtual size_t GetSimUsage() const override {
    return key_only_cache_->GetUsage();
  }
  virtual void SetSimCapacity(size_t capacity) override {
    key_only_cache_->SetCapacity(capacity);
  }
    
      virtual Status DropColumnFamily(ColumnFamilyHandle* column_family) override {
    return db_->DropColumnFamily(column_family);
  }
    
    void MergeIteratorBuilder::AddIterator(InternalIterator* iter) {
  if (!use_merging_iter && first_iter != nullptr) {
    merge_iter->AddIterator(first_iter);
    use_merging_iter = true;
    first_iter = nullptr;
  }
  if (use_merging_iter) {
    merge_iter->AddIterator(iter);
  } else {
    first_iter = iter;
  }
}