namespace mate {
class Arguments;
}
    
    #ifndef ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_
#define ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_
    
      // Cached from the net::URLRequest, in case it goes NULL on us.
  int render_process_host_id_;
  int render_frame_id_;
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    namespace accelerator_util {
    }
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
      int super_y_bottom =
      kBlnBaselineOffset + kBlnXHeight * superscript_min_y_bottom;
  int sub_y_top =
      kBlnBaselineOffset + kBlnXHeight * subscript_max_y_top;
    
    
    {    ICOORD pt;
    int halfwidth;
  };
  // Type holds the distance of each point from the fitted line and the point
  // itself. Use of double allows integer distances from ICOORDs to be stored
  // exactly, and also the floating point results from ConstrainedFit.
  typedef KDPairInc<double, ICOORD> DistPointPair;
    
    DENORM::~DENORM() {
  Clear();
}
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
    // Tests a pair of classifiers, debugging errors of the new against the old.
// See errorcounter.h for description of arguments.
// Iterates over the samples, calling the classifiers in normal/silent mode.
// If the new_classifier makes a boosting_mode error that the old_classifier
// does not, it will then call the new_classifier again with a debug flag
// and a keep_this argument to find out what is going on.
void ErrorCounter::DebugNewErrors(
    ShapeClassifier* new_classifier, ShapeClassifier* old_classifier,
    CountTypes boosting_mode,
    const FontInfoTable& fontinfo_table,
    const GenericVector<Pix*>& page_images, SampleIterator* it) {
  int fontsize = it->sample_set()->NumFonts();
  ErrorCounter old_counter(old_classifier->GetUnicharset(), fontsize);
  ErrorCounter new_counter(new_classifier->GetUnicharset(), fontsize);
  GenericVector<UnicharRating> results;
    }
    
      // Accumulates counts for junk. Counts only whether the junk was correctly
  // rejected or not.
  bool AccumulateJunk(bool debug, const GenericVector<UnicharRating>& results,
                      TrainingSample* sample);
    
    // Moves on to the next indexable sample. If the end is reached, leaves
// the state such that AtEnd() is true.
void SampleIterator::Next() {
  if (shape_table_ != NULL) {
    // Next sample in this class/font combination.
    ++sample_index_;
    if (sample_index_ < num_samples_)
      return;
    // Next font in this class in this shape.
    sample_index_ = 0;
    do {
      ++shape_font_index_;
      if (shape_font_index_ >= num_shape_fonts_) {
        // Next unichar in this shape.
        shape_font_index_ = 0;
        ++shape_char_index_;
        if (shape_char_index_ >= num_shape_chars_) {
          // Find the next shape that is mapped in the charset_map_.
          shape_char_index_ = 0;
          do {
            ++shape_index_;
          } while (shape_index_ < num_shapes_ &&
                   charset_map_ != NULL &&
                   charset_map_->SparseToCompact(shape_index_) < 0);
          if (shape_index_ >= num_shapes_)
            return;  // The end.
          num_shape_chars_ = shape_table_->GetShape(shape_index_).size();
        }
      }
      const UnicharAndFonts* shape_entry = GetShapeEntry();
      num_shape_fonts_ = shape_entry->font_ids.size();
      int char_id = shape_entry->unichar_id;
      int font_id = shape_entry->font_ids[shape_font_index_];
      num_samples_ = sample_set_->NumClassSamples(font_id, char_id, randomize_);
    } while (num_samples_ == 0);
  } else {
    // We are just iterating over the samples.
    ++shape_index_;
  }
}
    
      // stdio FILE stream class.
  class jpeg_decoder_file_stream : public jpeg_decoder_stream
  {
    jpeg_decoder_file_stream(const jpeg_decoder_file_stream &);
    jpeg_decoder_file_stream &operator =(const jpeg_decoder_file_stream &);
    }
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
    static const vorbis_residue_template _res_16u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__16u0__single,&_huff_book__16u0__single,
   &_resbook_16u_0,&_resbook_16u_0},
};
static const vorbis_residue_template _res_16u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__short,&_huff_book__16u1__short,
   &_resbook_16u_1,&_resbook_16u_1},
    }
    
    /// Internal startExtension implementation using a UNIX domain socket path.
Status startExtension(const std::string& manager_path,
                      const std::string& name,
                      const std::string& version,
                      const std::string& min_sdk_version,
                      const std::string& sdk_version);
    
    /**
 * @brief Helper logging macro for table-generated verbose log lines.
 *
 * Since logging in tables does not always mean a critical warning or error
 * but more likely a parsing or expected edge-case, we provide a TLOG.
 *
 * The tool user can set within config or via the CLI what level of logging
 * to tolerate. It's the table developer's job to assume consistency in logging.
 */
#define TLOG VLOG(1)
    
    CLI_FLAG(string,
         config_path,
         (fs::path(OSQUERY_HOME) / 'osquery.conf').make_preferred().string(),
         'Path to JSON config file');
    
      /**
   * Submit a delayed op to the AsyncIO queue; this allows you to postpone
   * creation of the Op (which may require allocating memory, etc) until
   * the AsyncIO object has room.
   */
  typedef std::function<AsyncIOOp*()> OpFactory;
  void submit(OpFactory op);
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
        // clear() empties the vector, but the allocated capacity remains so we can
    // just reuse it without having to re-allocate in most cases.
    ioQueue->clear();
    
      folly::File file_;
  folly::Synchronized<Data, std::mutex> data_;
  /**
   * messageReady_ is signaled by writer threads whenever they add a new
   * message to the current queue.
   */
  std::condition_variable messageReady_;
  /**
   * ioCV_ is signaled by the I/O thread each time it increments
   * the ioThreadCounter (once each time around its loop).
   */
  std::condition_variable ioCV_;
    
    
    {} // namespace folly

    
    namespace {
    }
    
    LogHandlerConfig::LogHandlerConfig(Optional<StringPiece> t)
    : type{t.hasValue() ? Optional<string>{t->str()} : Optional<string>{}} {}
    
    #pragma once
#include <deque>
#include <string>
    
      void ReopenWithColumnFamilies(const std::vector<std::string>& cfs,
                                const Options& options) {
    ASSERT_OK(TryReopenWithColumnFamilies(cfs, options));
  }
    
      TransactionOptions txn_options;
  WriteOptions write_options;
  size_t index = 0;
  Transaction* txn0 = db->BeginTransaction(write_options, txn_options);
  auto istr0 = std::to_string(index);
  auto s = txn0->SetName('xid' + istr0);
  ASSERT_OK(s);
  s = txn0->Put(Slice('key' + istr0), Slice('bar0' + istr0));
  ASSERT_OK(s);
  s = txn0->Prepare();
    
    Slice MemTableRep::UserKey(const char* key) const {
  Slice slice = GetLengthPrefixedSlice(key);
  return Slice(slice.data(), slice.size() - 8);
}