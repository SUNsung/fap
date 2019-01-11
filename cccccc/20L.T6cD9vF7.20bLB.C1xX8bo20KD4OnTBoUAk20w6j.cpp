
        
        class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
    // Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::StringParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_STRING;
  sIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::IntParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_INTEGER;
  iIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::BoolParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_BOOLEAN;
  bIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::DoubleParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_DOUBLE;
  dIt = it;
  vcMap[my_id_] = this;
}
    
    #ifndef GRAPHICS_DISABLED
    
    // Returns the box file name corresponding to the given image_filename.
STRING BoxFileName(const STRING& image_filename);
    
    // Clip output boxes to input blob boxes for bounds that are within this
// tolerance. Otherwise, the blob may be chopped and we have to just use
// the word bounding box.
const int kBoxClipTolerance = 2;
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
      // Constrained fit with a supplied direction vector. Finds the best line_pt,
  // that is one of the supplied points having the median cross product with
  // direction, ignoring points that have a cross product outside of the range
  // [min_dist, max_dist]. Returns the resulting error metric using the same
  // reduced set of points.
  // *Makes use of floating point arithmetic*
  double ConstrainedFit(const FCOORD& direction,
                        double min_dist, double max_dist,
                        bool debug, ICOORD* line_pt);
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    #include <xgboost/logging.h>
#include <cctype>
#include <cstdio>
#include <string>
#include './io.h'
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD
    
    // Should GradStats be in this header, rather than param.h?
struct GradStats;
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
    std::string genGuid() {
  return boost::uuids::to_string(boost::uuids::random_generator()());
};
    
    Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
          // Assemble an intermediate property tree for simplified parsing.
      pt::ptree single_pack;
      stripConfigComments(content);
      try {
        std::stringstream json_stream;
        json_stream << content;
        pt::read_json(json_stream, single_pack);
      } catch (const pt::json_parser::json_parser_error& /* e */) {
        LOG(WARNING) << 'Cannot read multi-pack JSON: ' << path;
        continue;
      }
    
                // We scale z here to avoid the animation being
            // too much bigger than the screen due to perspective transform
    
    
    {protected:
    std::string       _key;
    float            _from, _to;
    float            _delta;
};
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);