
        
        // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
    void PageIterator::RestartParagraph() {
  if (it_->block() == nullptr) return; // At end of the document.
  PAGE_RES_IT para(page_res_);
  PAGE_RES_IT next_para(para);
  next_para.forward_paragraph();
  while (next_para.cmp(*it_) <= 0) {
    para = next_para;
    next_para.forward_paragraph();
  }
  *it_ = para;
  BeginWord(0);
}
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
    void BoxWord::CopyFrom(const BoxWord& src) {
  bbox_ = src.bbox_;
  length_ = src.length_;
  boxes_.clear();
  boxes_.reserve(length_);
  for (int i = 0; i < length_; ++i)
    boxes_.push_back(src.boxes_[i]);
}
    
      void CopyFrom(const BoxWord& src);
    
    
    {    return ret;
}
    
    
    {        return true;
    }
    
    /** @class Place
* @brief Places the node in a certain position.
*/
class CC_DLL Place : public ActionInstant
{
public:
    }
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual DelayTime* reverse() const override;
    virtual DelayTime* clone() const override;
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
        /**
    @brief Get the amplitude rate of the effect.
    @return Return the amplitude rate of the effect.
    */
    float getAmplitudeRate() const { return _amplitudeRate; }
    /**
    @brief Set the amplitude rate of the effect.
    @param amplitudeRate The value of amplitude rate will be set.
    */
    void setAmplitudeRate(float amplitudeRate) { _amplitudeRate = amplitudeRate; }
    
            float delayPerUnit = animationDict['delayPerUnit'].asFloat();
        Animation *animation = Animation::create(array, delayPerUnit, loops.getType() != Value::Type::NONE ? loops.asInt() : 1);
    
    // AtlasNode - CocosNodeTexture protocol
    
    const static float PRECISION = 10.0f;
    
    
    {private:
    void releaseVertsAndIndices();
};
    
      {
    auto ka = getKeepAliveToken(exec);
    EXPECT_TRUE(ka);
    EXPECT_EQ(&exec, ka.get());
    EXPECT_EQ(1, exec.refCount);
    }
    
      constexpr Err(Type type) : type_(type) {}
    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    namespace folly {
    }
    
      ts = to<struct timespec>(10h);
  EXPECT_EQ(36000, ts.tv_sec);
  EXPECT_EQ(0, ts.tv_nsec);