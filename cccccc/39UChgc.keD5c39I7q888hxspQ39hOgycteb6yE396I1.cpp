
        
        void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    inline
static void DBSynchronize(kyotocabinet::TreeDB* db_)
{
  // Synchronize will flush writes to disk
  if (!db_->synchronize()) {
    fprintf(stderr, 'synchronize error: %s\n', db_->error().name());
  }
}
    
    #include 'intsimdmatrix.h'
#include <memory>
#include 'genericvector.h'
#include 'include_gunit.h'
#include 'intsimdmatrixavx2.h'
#include 'intsimdmatrixsse.h'
#include 'simddetect.h'
#include 'tprintf.h'
    
    TESS_API char* TESS_CALL TessResultIteratorGetUTF8Text(const TessResultIterator* handle, TessPageIteratorLevel level)
{
    return handle->GetUTF8Text(level);
}
    
    bool CodepointToUtf16be(int code, char utf16[kMaxBytesPerCodepoint]) {
  if ((code > 0xD7FF && code < 0xE000) || code > 0x10FFFF) {
    tprintf('Dropping invalid codepoint %d\n', code);
    return false;
  }
  if (code < 0x10000) {
    snprintf(utf16, kMaxBytesPerCodepoint, '%04X', code);
  } else {
    int a = code - 0x010000;
    int high_surrogate = (0x03FF & (a >> 10)) + 0xD800;
    int low_surrogate = (0x03FF & a) + 0xDC00;
    snprintf(utf16, kMaxBytesPerCodepoint,
             '%04X%04X', high_surrogate, low_surrogate);
  }
  return true;
}
    
    
    {  return true;
}
    
    static void PrintLangsList(tesseract::TessBaseAPI* api) {
  GenericVector<STRING> languages;
  api->GetAvailableLanguagesAsVector(&languages);
  printf('List of available languages (%d):\n', languages.size());
  for (int index = 0; index < languages.size(); ++index) {
    STRING& string = languages[index];
    printf('%s\n', string.string());
  }
  api->End();
}
    
    // Helper chooses the best combination of words, transferring good ones from
// new_words to best_words. To win, a new word must have (better rating and
// certainty) or (better permuter status and rating within rating ratio and
// certainty within certainty margin) than current best.
// All the new_words are consumed (moved to best_words or deleted.)
// The return value is the number of new_words used minus the number of
// best_words that remain in the output.
static int SelectBestWords(double rating_ratio,
                           double certainty_margin,
                           bool debug,
                           PointerVector<WERD_RES>* new_words,
                           PointerVector<WERD_RES>* best_words) {
  // Process the smallest groups of words that have an overlapping word
  // boundary at the end.
  GenericVector<WERD_RES*> out_words;
  // Index into each word vector (best, new).
  int b = 0, n = 0;
  int num_best = 0, num_new = 0;
  while (b < best_words->size() || n < new_words->size()) {
    // Start of the current run in each.
    int start_b = b, start_n = n;
    while (b < best_words->size() || n < new_words->size()) {
      int b_right = -INT32_MAX;
      int next_b_left = INT32_MAX;
      WordGap(*best_words, b, &b_right, &next_b_left);
      int n_right = -INT32_MAX;
      int next_n_left = INT32_MAX;
      WordGap(*new_words, n, &n_right, &next_n_left);
      if (MAX(b_right, n_right) < MIN(next_b_left, next_n_left)) {
        // The word breaks overlap. [start_b,b] and [start_n, n] match.
        break;
      }
      // Keep searching for the matching word break.
      if ((b_right < n_right && b < best_words->size()) ||
          n == new_words->size())
        ++b;
      else
        ++n;
    }
    // Rating of the current run in each.
    float b_rating = 0.0f, n_rating = 0.0f;
    // Certainty of the current run in each.
    float b_certainty = 0.0f, n_certainty = 0.0f;
    // True if any word is missing its best choice.
    bool b_bad = false, n_bad = false;
    // True if all words have a valid permuter.
    bool b_valid_permuter = true, n_valid_permuter = true;
    int end_b = b < best_words->size() ? b + 1 : b;
    int end_n = n < new_words->size() ? n + 1 : n;
    EvaluateWordSpan(*best_words, start_b, end_b, &b_rating, &b_certainty,
                     &b_bad, &b_valid_permuter);
    EvaluateWordSpan(*new_words, start_n, end_n, &n_rating, &n_certainty,
                     &n_bad, &n_valid_permuter);
    bool new_better = false;
    if (!n_bad && (b_bad || (n_certainty > b_certainty &&
                             n_rating < b_rating) ||
                            (!b_valid_permuter && n_valid_permuter &&
                             n_rating < b_rating * rating_ratio &&
                             n_certainty > b_certainty - certainty_margin))) {
      // New is better.
      for (int i = start_n; i < end_n; ++i) {
        out_words.push_back((*new_words)[i]);
        (*new_words)[i] = nullptr;
        ++num_new;
      }
      new_better = true;
    } else if (!b_bad) {
      // Current best is better.
      for (int i = start_b; i < end_b; ++i) {
        out_words.push_back((*best_words)[i]);
        (*best_words)[i] = nullptr;
        ++num_best;
      }
    }
    if (debug) {
      tprintf('%d new words %s than %d old words: r: %g v %g c: %g v %g'
              ' valid dict: %d v %d\n',
              end_n - start_n, new_better ? 'better' : 'worse',
              end_b - start_b, n_rating, b_rating,
              n_certainty, b_certainty, n_valid_permuter, b_valid_permuter);
    }
    // Move on to the next group.
    b = end_b;
    n = end_n;
  }
  // Transfer from out_words to best_words.
  best_words->clear();
  for (int i = 0; i < out_words.size(); ++i)
    best_words->push_back(out_words[i]);
  return num_new - num_best;
}
    
      if (word->unlv_crunch_mode == CR_NONE) {
    delete_mode = 0;
    return CR_NONE;
  }
    
    #include 'test/cpp/qps/report.h'
    
    
    {  void ReadLong(long* l) {
    size_t start = current_;
    while (current_ != db_.size() && db_[current_] != ',' && db_[current_] != '}') {
      current_++;
    }
    // It will throw an exception if fails.
    *l = std::stol(db_.substr(start, current_ - start));
  }
    
    #endif  // GRPC_TEST_CPP_METRICS_SERVER_H

    
    class SubProcess {
 public:
  SubProcess(const std::vector<std::string>& args);
  ~SubProcess();
    }
    
    
    {	// only requesting changes here, if successful, canvas is resized in
	// _browser_resize_callback or _fullscreen_change_callback
	EMSCRIPTEN_RESULT result;
	if (p_enable) {
		if (window_maximized) {
			// soft fs during real fs can cause issues
			set_window_maximized(false);
			window_maximized = true;
		}
		EmscriptenFullscreenStrategy strategy;
		strategy.scaleMode = EMSCRIPTEN_FULLSCREEN_SCALE_STRETCH;
		strategy.canvasResolutionScaleMode = EMSCRIPTEN_FULLSCREEN_CANVAS_SCALE_STDDEF;
		strategy.filteringMode = EMSCRIPTEN_FULLSCREEN_FILTERING_DEFAULT;
		strategy.canvasResizedCallback = NULL;
		emscripten_request_fullscreen_strategy(NULL, false, &strategy);
	} else {
		result = emscripten_exit_fullscreen();
		if (result != EMSCRIPTEN_RESULT_SUCCESS) {
			ERR_PRINTS('Failed to exit fullscreen: Code ' + itos(result));
		}
	}
}
    
    struct oc_mode_rd{
  ogg_int16_t rate;
  ogg_int16_t rmse;
};
    
    #ifdef _MSC_VER
/* MS Visual Studio doesn't have C99 inline keyword. */
#define inline __inline
#endif
    
    /*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
      if (data_channel->getRank() == 1 || data_channel->getRank() == 2) {
    ASSERT_THROWS(
      std::logic_error,
      data_channel->allGather(raw_tensors, *int_tensor, group)
    )
    }
    
    int64_t ${Tensor}::dim() const {
  if(isScalar())
    return 0;
  int64_t d = ${THTensor_nDimension};
  // See Note [Empty versus 0-dim tensors]
  if (d != 0)
    return d;
  return kEmptySizes.size();
}
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight.sizes()[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  int real_pad = (olen - ilen + kw - 1) / 2;
    
    #define THCPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPDoubleStorageClass)
#define THCPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPFloatStorageClass)
#define THCPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPHalfStorageClass)
#define THCPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPLongStorageClass)
#define THCPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPIntStorageClass)
#define THCPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPShortStorageClass)
#define THCPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPCharStorageClass)
#define THCPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPByteStorageClass)
    
    #undef THPTensor_
#undef THPTensor_stateless_
#undef THPTensor
#undef THPTensorStr
#undef THPTensorBaseStr
#undef THPTensorClass
    
      // Get the hash value for the kernel's .text memory segment
  auto f2 = osquery::readFile(kKernelTextHashPath, content);
  if (f2.ok()) {
    boost::trim(content);
    text_segment_hash = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelTextHashPath;
    return results;
  }
    
    /**
 * @brief A small tracking wrapper for options, binary flags.
 *
 * The osquery-specific gflags-like options define macro `FLAG` uses a Flag
 * instance to track the options data.
 */
class Flag : private boost::noncopyable {
 public:
  /*
   * @brief Create a new flag.
   *
   * @param name The 'name' or the options switch data.
   * @param flag Flag information filled in using the helper macro.
   *
   * @return A mostly needless flag instance.
   */
  static int create(const std::string& name, const FlagDetail& flag);
    }
    
    /**
 * @brief Create an osquery extension 'module', if an expression is true.
 *
 * This is a helper testing wrapper around CREATE_MODULE and DECLARE_MODULE.
 * It allows unit and integration tests to generate global construction code
 * that depends on data/variables available during global construction.
 *
 * And example use includes checking if a process environment variable is
 * defined. If defined the module is declared.
 */
#define CREATE_MODULE_IF(expr, name, version, min_sdk_version)                 \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      if ((expr)) {                                                            \
        Registry::get().declareModule(                                         \
            name, version, min_sdk_version, OSQUERY_SDK_VERSION);              \
      }                                                                        \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    /**
 * @brief Converts struct tm to a size_t
 *
 * @param tm_time the time/date to convert to UNIX epoch time
 *
 * @return an int representing the UNIX epoch time of the struct tm
 */
size_t toUnixTime(const struct tm* tm_time);
    
    #if DMLC_ENABLE_STD_THREAD
#include '../src/data/sparse_page_source.cc'
#include '../src/data/sparse_page_dmatrix.cc'
#include '../src/data/sparse_page_writer.cc'
#endif
    
      /**
   * Retrieve the result of this operation.  Returns >=0 on success,
   * -errno on failure (that is, using the Linux kernel error reporting
   * conventions).  Use checkKernelError (folly/Exception.h) on the result to
   * throw a std::system_error in case of error instead.
   *
   * It is an error to call this if the Op hasn't completed.
   */
  ssize_t result() const;
    
    struct HugePageSize : private boost::totally_ordered<HugePageSize> {
  explicit HugePageSize(size_t s) : size(s) {}
    }
    
    
    {  std::string path_;
  FileWriterFactory fileWriterFactory_;
};
    
    
    {} // namespace folly

    
        double width;
    double height;
    
    void Node::setFlexDirection(int flexDirection)
{
    YGNodeStyleSetFlexDirection(m_node, static_cast<YGFlexDirection>(flexDirection));
}
    
    #include <cstdarg>
#include <stdio.h>
    
    template<typename... ARGS>
inline void logf(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_FATAL, tag, msg, args...);
}
    
    namespace facebook {
namespace jni {
    }
    }