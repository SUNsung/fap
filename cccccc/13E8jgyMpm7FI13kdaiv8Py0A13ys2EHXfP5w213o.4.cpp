
        
        #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    struct Options;
    
    // C++ Implementation of the LSTM class from lstm.py.
class LSTM : public Network {
 public:
  // Enum for the different weights in LSTM, to reduce some of the I/O and
  // setup code to loops. The elements of the enum correspond to elements of an
  // array of WeightMatrix or a corresponding array of NetworkIO.
  enum WeightType {
    CI,   // Cell Inputs.
    GI,   // Gate at the input.
    GF1,  // Forget gate at the memory (1-d or looking back 1 timestep).
    GO,   // Gate at the output.
    GFS,  // Forget gate at the memory, looking back in the other dimension.
    }
    }
    
    class TESS_API PageIterator {
 public:
  /**
   * page_res and tesseract come directly from the BaseAPI.
   * The rectangle parameters are copied indirectly from the Thresholder,
   * via the BaseAPI. They represent the coordinates of some rectangle in an
   * original image (in top-left-origin coordinates) and therefore the top-left
   * needs to be added to any output boxes in order to specify coordinates
   * in the original image. See TessBaseAPI::SetRectangle.
   * The scale and scaled_yres are in case the Thresholder scaled the image
   * rectangle prior to thresholding. Any coordinates in tesseract's image
   * must be divided by scale before adding (rect_left, rect_top).
   * The scaled_yres indicates the effective resolution of the binary image
   * that tesseract has been given by the Thresholder.
   * After the constructor, Begin has already been called.
   */
  PageIterator(PAGE_RES* page_res, Tesseract* tesseract,
               int scale, int scaled_yres,
               int rect_left, int rect_top,
               int rect_width, int rect_height);
  virtual ~PageIterator();
    }
    
    namespace tesseract {
    }
    
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
    
    const char *kUTF8LineSeparator = '\u2028';  // '\xe2\x80\xa8';
const char *kUTF8ParagraphSeparator = '\u2029';  // '\xe2\x80\xa9';
const char *kLRM = '\u200E';  // Left-to-Right Mark
const char *kRLM = '\u200F';  // Right-to-Left Mark
const char *kRLE = '\u202A';  // Right-to-Left Embedding
const char *kPDF = '\u202C';  // Pop Directional Formatting
    
      // Generates debug output relating to the canonical distance between the
  // two given UTF8 grapheme strings.
  void DebugCanonical(const char* unichar_str1, const char* unichar_str2);
  #ifndef GRAPHICS_DISABLED
  // Debugging for cloud/canonical features.
  // Displays a Features window containing:
  // If unichar_str2 is in the unicharset, and canonical_font is non-negative,
  // displays the canonical features of the char/font combination in red.
  // If unichar_str1 is in the unicharset, and cloud_font is non-negative,
  // displays the cloud feature of the char/font combination in green.
  // The canonical features are drawn first to show which ones have no
  // matches in the cloud features.
  // Until the features window is destroyed, each click in the features window
  // will display the samples that have that feature in a separate window.
  void DisplaySamples(const char* unichar_str1, int cloud_font,
                      const char* unichar_str2, int canonical_font);
  #endif  // GRAPHICS_DISABLED
    
    
    {}  // namespace tesseract.
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
// Asserts that the call matches what we have.
void WeightMatrix::MatrixDotVector(const double* u, double* v) const {
  ASSERT_HOST(!int_mode_);
  MatrixDotVectorInternal(wf_, true, false, u, v);
}
    
    // Computes and returns the noise_density IntGrid, at the same gridsize as
// this by summing the number of small elements in a 3x3 neighbourhood of
// each grid cell. good_grid is filled with blobs that are considered most
// likely good text, and this is filled with small and medium blobs that are
// more likely non-text.
// The photo_map is used to bias the decision towards non-text, rather than
// supplying definite decision.
IntGrid* CCNonTextDetect::ComputeNoiseDensity(bool debug, Pix* photo_map,
                                              BlobGrid* good_grid) {
  IntGrid* noise_counts = CountCellElements();
  IntGrid* noise_density = noise_counts->NeighbourhoodSum();
  IntGrid* good_counts = good_grid->CountCellElements();
  // Now increase noise density in photo areas, to bias the decision and
  // minimize hallucinated text on image, but trim the noise_density where
  // there are good blobs and the original count is low in non-photo areas,
  // indicating that most of the result came from neighbouring cells.
  int height = pixGetHeight(photo_map);
  int photo_offset = IntCastRounded(max_noise_count_ * kPhotoOffsetFraction);
  for (int y = 0; y < gridheight(); ++y) {
    for (int x = 0; x < gridwidth(); ++x) {
      int noise = noise_density->GridCellValue(x, y);
      if (max_noise_count_ < noise + photo_offset &&
          noise <= max_noise_count_) {
        // Test for photo.
        int left = x * gridsize();
        int right = left + gridsize();
        int bottom = height - y * gridsize();
        int top = bottom - gridsize();
        if (ImageFind::BoundsWithinRect(photo_map, &left, &top, &right,
                                        &bottom)) {
          noise_density->SetGridCell(x, y, noise + photo_offset);
        }
      }
      if (debug && noise > max_noise_count_ &&
          good_counts->GridCellValue(x, y) > 0) {
        tprintf('At %d, %d, noise = %d, good=%d, orig=%d, thr=%d\n',
                x * gridsize(), y * gridsize(),
                noise_density->GridCellValue(x, y),
                good_counts->GridCellValue(x, y),
                noise_counts->GridCellValue(x, y), max_noise_count_);
      }
      if (noise > max_noise_count_ &&
          good_counts->GridCellValue(x, y) > 0 &&
          noise_counts->GridCellValue(x, y) * kOriginalNoiseMultiple <=
              max_noise_count_) {
        noise_density->SetGridCell(x, y, 0);
      }
    }
  }
  delete noise_counts;
  delete good_counts;
  return noise_density;
}
    
    #include 'blobgrid.h'
#include 'scrollview.h'
    
    int64_t gettime_diff_us(const timespec& start, const timespec& end) {
  int64_t dsec = end.tv_sec - start.tv_sec;
  int64_t dnsec = end.tv_nsec - start.tv_nsec;
  return dsec * 1000000 + dnsec / 1000;
}
    
    namespace HPHP { namespace jit {
    }
    }
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
    bool builtin_defined(ISS& env, const bc::FCallBuiltin& op) {
  if (!options.HardConstProp || op.arg1 != 2) return false;
  if (auto const v = tv(topT(env, 1))) {
    if (isStringType(v->m_type) &&
        !env.index.lookup_constant(env.ctx, v->m_data.pstr)) {
      env.collect.cnsMap[v->m_data.pstr].m_type = kDynamicConstant;
    }
  }
  return false;
}
    
    template<class Fun>
Type bitwise_impl(Type t1, Type t2, Fun op) {
  if (auto t = eval_const(t1, t2, op))          return *t;
  if (t1.subtypeOf(BStr) && t2.subtypeOf(BStr)) return TStr;
  if (!t1.couldBe(BStr) || !t2.couldBe(BStr))   return TInt;
  return TInitCell;
}
    
      bool autoloadClass(const String& className, bool forceSplStack = false);
  bool autoloadClassPHP5Impl(const String& className, bool forceSplStack);
    
    void collectImpl(HeapImpl& heap, const char* phase, GCBits& mark_version) {
  VMRegAnchor _;
  if (t_eager_gc && RuntimeOption::EvalFilterGCPoints) {
    t_eager_gc = false;
    auto pc = vmpc();
    if (t_surprise_filter.test(pc)) {
      if (RuntimeOption::EvalGCForAPC) {
        if (!APCGCManager::getInstance().excessedGCTriggerBar()) {
          return;
        }
      } else {
        return;
      }
    }
    t_surprise_filter.insert(pc);
    TRACE(2, 'eager gc %s at %p\n', phase, pc);
    phase = 'eager';
  } else {
    TRACE(2, 'normal gc %s at %p\n', phase, vmpc());
  }
  if (t_gc_num == 0) {
    t_enable_samples = StructuredLog::coinflip(RuntimeOption::EvalGCSampleRate);
  }
  t_pre_stats = tl_heap->getStatsCopy(); // don't check or trigger OOM
  mark_version = (mark_version == MaxMark) ? MinMark :
                 GCBits(uint8_t(mark_version) + 1);
  Collector collector(
    heap,
    RuntimeOption::EvalGCForAPC ? &APCGCManager::getInstance() : nullptr,
    mark_version
  );
  if (RuntimeOption::EvalGCForAPC) {
    collector.collect<true>();
  } else {
    collector.collect<false>();
  }
  if (Trace::moduleEnabledRelease(Trace::gc, 1)) {
    traceCollection(collector);
  }
  if (t_enable_samples) {
    logCollection(phase, collector);
  }
  ++t_gc_num;
}
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    // Parses a string for a string flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseStringFlag(const char* str, const char* flag, std::string* value);
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
    namespace benchmark {
namespace internal {
    }
    }
    
    #else
inline bool Regex::Init(const std::string& spec, std::string* error) {
  int ec = regcomp(&re_, spec.c_str(), REG_EXTENDED | REG_NOSUB);
  if (ec != 0) {
    if (error) {
      size_t needed = regerror(ec, &re_, nullptr, 0);
      char* errbuf = new char[needed];
      regerror(ec, &re_, errbuf, needed);
    }
    }
    }
    
    #include <iostream>
#include <tuple>
#include <vector>
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }
    
      // Only add label if it is same for all runs
  std::string report_label = reports[0].report_label;
  for (std::size_t i = 1; i < reports.size(); i++) {
    if (reports[i].report_label != report_label) {
      report_label = '';
      break;
    }
  }