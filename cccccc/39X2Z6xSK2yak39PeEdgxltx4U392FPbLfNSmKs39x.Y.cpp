
        
         private:
  CertificateManagerModel(net::NSSCertDatabase* nss_cert_database,
                          bool is_user_db_available);
    
      // TODO(codebytere): Write tests for these methods once we
  // are running tests on a Mojave machine
  std::string GetMediaAccessStatus(const std::string& media_type,
                                   mate::Arguments* args);
  v8::Local<v8::Promise> AskForMediaAccess(v8::Isolate* isolate,
                                           const std::string& media_type);
    
     private:
  v8::Isolate* isolate() const { return isolate_; }
    
    
    {  return args[0];
}
    
      // Notify another process, if available. Otherwise sets ourselves as the
  // singleton instance. Returns PROCESS_NONE if we became the singleton
  // instance. Callers are guaranteed to either have notified an existing
  // process or have grabbed the singleton (unless the profile is locked by an
  // unreachable process).
  // TODO(brettw): Make the implementation of this method non-platform-specific
  // by making Linux re-use the Windows implementation.
  NotifyResult NotifyOtherProcessOrCreate();
  void StartListeningOnSocket();
  void OnBrowserReady();
    
    data:
 [8. 2. 1. 1. 7. 8. 1.]
indices:
 [3 5 6]
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
      int num_words;
  TBOX lword_box;     // in normalized (horiz text rows) space
  TBOX rword_box;     // in normalized (horiz text rows) space
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    namespace tesseract {
class TrainingSample;
}
    
      // Visual debugger classifies the given sample, displays the results and
  // solicits user input to display other classifications. Returns when
  // the user has finished with debugging the sample.
  // Probably doesn't need to be overridden if the subclass provides
  // DisplayClassifyAs.
  virtual void DebugDisplay(const TrainingSample& sample, Pix* page_pix,
                            UNICHAR_ID unichar_id);
    
    // Classifies the given [training] sample, writing to results.
// See ShapeClassifier for a full description.
int TessClassifier::UnicharClassifySample(
    const TrainingSample& sample, Pix* page_pix, int debug,
    UNICHAR_ID keep_this, GenericVector<UnicharRating>* results) {
  const int old_matcher_level = classify_->matcher_debug_level;
  const int old_matcher_flags = classify_->matcher_debug_flags;
  const int old_classify_level = classify_->classify_debug_level;
  if (debug) {
    // Explicitly set values of various control parameters to generate debug
    // output if required, restoring the old values after classifying.
    classify_->matcher_debug_level.set_value(2);
    classify_->matcher_debug_flags.set_value(25);
    classify_->classify_debug_level.set_value(3);
  }
  classify_->CharNormTrainingSample(pruner_only_, keep_this, sample, results);
  if (debug) {
    classify_->matcher_debug_level.set_value(old_matcher_level);
    classify_->matcher_debug_flags.set_value(old_matcher_flags);
    classify_->classify_debug_level.set_value(old_classify_level);
  }
  return results->size();
}
    
    using json = nlohmann::json;
    
    #ifdef USE_VALGRIND
#include <valgrind/valgrind.h>
#endif
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
        cache.set('test1', val1);
    ASSERT_EQ(cache.get('test1').get(), val1.get());
    val1.reset();
    ASSERT_EQ(dtor_num, 0);
    
    auth_switch_request_packet::auth_switch_request_packet(const char *data) : server_packet(data)
{
    swMysqlPacketDump(header.length, header.number, data, 'Protocol::AuthSwitchRequest');
    // 4 header
    data += SW_MYSQL_PACKET_HEADER_SIZE;
    // 1 type
    data += 1;
    // string[NUL] auth_method_name
    auth_method_name = std::string(data);
    data += (auth_method_name.length() + 1);
    // string[NUL] auth_method_data
    strcpy(auth_method_data, data);
    swTraceLog(SW_TRACE_MYSQL_CLIENT, 'auth switch plugin name=%s', auth_method_name.c_str());
}
    
    #endif // OPENPOSE_CORE_RECTANGLE_HPP

    
        const auto HAND_NUMBER_PARTS = 21u;
    #define HAND_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  0,5,  5,6,  6,7,  7,8,  0,9,  9,10,  10,11,  11,12,  0,13,  13,14,  14,15,  15,16,  0,17,  17,18,  18,19,  19,20
    #define HAND_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> HAND_PAIRS_RENDER {HAND_PAIRS_RENDER_GPU};
    #define HAND_COLORS_RENDER_GPU \
        100.f,  100.f,  100.f, \
        100.f,    0.f,    0.f, \
        150.f,    0.f,    0.f, \
        200.f,    0.f,    0.f, \
        255.f,    0.f,    0.f, \
        100.f,  100.f,    0.f, \
        150.f,  150.f,    0.f, \
        200.f,  200.f,    0.f, \
        255.f,  255.f,    0.f, \
          0.f,  100.f,   50.f, \
          0.f,  150.f,   75.f, \
          0.f,  200.f,  100.f, \
          0.f,  255.f,  125.f, \
          0.f,   50.f,  100.f, \
          0.f,   75.f,  150.f, \
          0.f,  100.f,  200.f, \
          0.f,  125.f,  255.f, \
        100.f,    0.f,  100.f, \
        150.f,    0.f,  150.f, \
        200.f,    0.f,  200.f, \
        255.f,    0.f,  255.f
    const std::vector<float> HAND_COLORS_RENDER{HAND_COLORS_RENDER_GPU};
    const std::vector<float> HAND_SCALES_RENDER{HAND_SCALES_RENDER_GPU};
    
            cv::Mat mImagePrevious;
        std::vector<cv::Mat> mPyramidImagesPrevious;
        std::unordered_map<int, PersonTrackerEntry> mPersonEntries;
        Array<long long> mLastPoseIds;
    
        template<typename T>
    Point<T> Point<T>::operator+(const Point<T>& point) const
    {
        try
        {
            return Point<T>{T(x + point.x), T(y + point.y)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Point<T>{};
        }
    }
    
        template<typename T>
    Rectangle<T>& Rectangle<T>::operator/=(const T value)
    {
        try
        {
            x /= value;
            y /= value;
            width /= value;
            height /= value;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }