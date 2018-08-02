    // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
      virtual ~leveldb_comparator_t() {
    (*destructor_)(state_);
  }
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst)
      const = 0;
    
      // Expects the appropriate results from the compressed_  unicharset_.
  void ExpectCorrect(const string& lang) {
    // Count the number of times each code is used in each element of
    // RecodedCharID.
    RecodedCharID zeros;
    for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) zeros.Set(i, 0);
    int code_range = compressed_.code_range();
    std::vector<RecodedCharID> times_seen(code_range, zeros);
    for (int u = 0; u <= unicharset_.size(); ++u) {
      if (u != UNICHAR_SPACE && u != null_char_ &&
          (u == unicharset_.size() || (unicharset_.has_special_codes() &&
                                       u < SPECIAL_UNICHAR_CODES_COUNT))) {
        continue;  // Not used so not encoded.
      }
      RecodedCharID code;
      int len = compressed_.EncodeUnichar(u, &code);
      // Check round-trip encoding.
      int unichar_id;
      GenericVector<UNICHAR_ID> normed_ids;
      if (u == null_char_ || u == unicharset_.size()) {
        unichar_id = null_char_;
      } else {
        unichar_id = u;
      }
      EXPECT_EQ(unichar_id, compressed_.DecodeUnichar(code));
      // Check that the codes are valid.
      for (int i = 0; i < len; ++i) {
        int code_val = code(i);
        EXPECT_GE(code_val, 0);
        EXPECT_LT(code_val, code_range);
        times_seen[code_val].Set(i, times_seen[code_val](i) + 1);
      }
    }
    // Check that each code is used in at least one position.
    for (int c = 0; c < code_range; ++c) {
      int num_used = 0;
      for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) {
        if (times_seen[c](i) != 0) ++num_used;
      }
      EXPECT_GE(num_used, 1) << 'c=' << c << '/' << code_range;
    }
    // Check that GetNextCodes/GetFinalCodes lists match the times_seen,
    // and create valid codes.
    RecodedCharID code;
    CheckCodeExtensions(code, times_seen);
    // Finally, we achieved all that using a codebook < 10% of the size of
    // the original unicharset, for CK or Indic, and 20% with J, but just
    // no bigger for all others.
    if (IsCJKLang(lang) || IsIndicLang(lang)) {
      EXPECT_LT(code_range, unicharset_.size() / (lang == 'jpn' ? 5 : 10));
    } else {
      EXPECT_LE(code_range, unicharset_.size() + 1);
    }
    LOG(INFO) << 'Compressed unicharset of ' << unicharset_.size() << ' to '
              << code_range;
  }
  // Checks for extensions of the current code that either finish a code, or
  // extend it and checks those extensions recursively.
  void CheckCodeExtensions(const RecodedCharID& code,
                           const std::vector<RecodedCharID>& times_seen) {
    RecodedCharID extended = code;
    int length = code.length();
    const GenericVector<int>* final_codes = compressed_.GetFinalCodes(code);
    if (final_codes != nullptr) {
      for (int i = 0; i < final_codes->size(); ++i) {
        int ending = (*final_codes)[i];
        EXPECT_GT(times_seen[ending](length), 0);
        extended.Set(length, ending);
        int unichar_id = compressed_.DecodeUnichar(extended);
        EXPECT_NE(INVALID_UNICHAR_ID, unichar_id);
      }
    }
    const GenericVector<int>* next_codes = compressed_.GetNextCodes(code);
    if (next_codes != nullptr) {
      for (int i = 0; i < next_codes->size(); ++i) {
        int extension = (*next_codes)[i];
        EXPECT_GT(times_seen[extension](length), 0);
        extended.Set(length, extension);
        CheckCodeExtensions(extended, times_seen);
      }
    }
  }
    
    #ifndef TESSERACT_LSTM_LSTM_H_
#define TESSERACT_LSTM_LSTM_H_
    
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
    
    // Returns an empty string if the input contains an invalid unicode.
std::string UNICHAR::UTF32ToUTF8(const std::vector<char32>& str32) {
  std::string utf8_str;
  for (char32 ch : str32) {
    UNICHAR uni_ch(ch);
    int step;
    if (uni_ch.utf8_len() > 0 && (step = utf8_step(uni_ch.utf8())) > 0) {
      utf8_str.append(uni_ch.utf8(), step);
    } else {
      return '';
    }
  }
  return utf8_str;
}
    
    #include 'unicodes.h'
#include 'host.h'  // for nullptr
    
    // Prints the map features from the set in human-readable form.
void IntFeatureMap::DebugMapFeatures(
    const GenericVector<int>& map_features) const {
  for (int i = 0; i < map_features.size(); ++i) {
    INT_FEATURE_STRUCT f = InverseMapFeature(map_features[i]);
    f.print();
  }
}
    
      // Map to subset the actual charset space.
  const IndexMapBiDi* charset_map_;
  // Shape table to recombine character classes into shapes
  const ShapeTable* shape_table_;
  // The samples to iterate over.
  TrainingSampleSet* sample_set_;
  // Flag to control randomizing the sample features.
  bool randomize_;
  // Shape table owned by this used to iterate character classes.
  ShapeTable* owned_shape_table_;
    
    // Helper to expand a box in one of the 4 directions by the given pad,
// provided it does not expand into any cell with a zero noise density.
// If that is not possible, try expanding all round by a small constant.
static TBOX AttemptBoxExpansion(const TBOX& box, const IntGrid& noise_density,
                                int pad) {
  TBOX expanded_box(box);
  expanded_box.set_right(box.right() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_left(box.left() - pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_top(box.top() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_bottom(box.bottom() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.pad(kNoisePadding, kNoisePadding);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  return box;
}
    
    #endif

    
    void Timer::Dump() {
  if (!Trace::moduleEnabledRelease(Trace::jittime)) return;
  Trace::traceRelease('%s', Show().c_str());
}
    
    Vreg Vunit::makeConst(Vconst vconst) {
  auto it = constToReg.find(vconst);
  if (it != constToReg.end()) return it->second;
    }
    
    
public const char *
magic_buffer(struct magic_set *ms, const void *buf, size_t nb)
{
  if (ms == NULL)
    return NULL;
  if (file_reset(ms) == -1)
    return NULL;
  /*
   * The main work is done here!
   * We have the file name and/or the data buffer to be identified.
   */
  if (file_buffer(ms, NULL, NULL, buf, nb) == -1) {
    return NULL;
  }
  return file_getbuffer(ms);
}
    
    
    {
    {
    {}}}
    
      void setFrontier(Address addr) {
    assertx(m_base <= addr && addr <= (m_base + m_size));
    m_frontier = addr;
  }
    
    #include 'hphp/runtime/base/resource-data.h'
#include 'hphp/util/low-ptr.h'
    
      virtual bool setBlocking(bool mode);
  virtual bool setTimeout(uint64_t usecs);
    
    namespace HPHP { namespace Stream {
///////////////////////////////////////////////////////////////////////////////
struct Wrapper;
    }
    }
    
    #endif // __cocos2dx_builder_h__

    
    bool js_cocos2dx_studio_PositionFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_PositionFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_PositionFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_PositionFrame_getX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_PositionFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    void GLESDebugDraw::DrawTransform(const b2Transform& xf)
{
    b2Vec2 p1 = xf.p, p2;
    const float32 k_axisScale = 0.4f;
    p2 = p1 + k_axisScale * xf.q.GetXAxis();
    DrawSegment(p1, p2, b2Color(1,0,0));
    }
    
        virtual void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    
    struct ContactPoint
{
	b2Fixture* fixtureA;
	b2Fixture* fixtureB;
	b2Vec2 normal;
	b2Vec2 position;
	b2PointState state;
	float32 normalImpulse;
	float32 tangentImpulse;
	float32 separation;
};
    
    class BodyTypes : public Test
{
public:
	BodyTypes()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    }
    
    	Cantilever()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    
    			x += 20.0f;
			shape.Set(b2Vec2(x, 0.0f), b2Vec2(x + 40.0f, 0.0f));
			ground->CreateFixture(&fd);
    
    
    {
    {        break;
    }
}
    
    
    {  private:
    size_t count_;
    uint64_t time_span_;
    std::list<uint64_t> touch_times_;
};
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    
    {  private:
    void* m_this;
    std::map<const std::string, boost::any> m_variablemap;
};
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}