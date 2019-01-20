
        
        class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
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
    
      /**
   * Returns the baseline of the current object at the given level.
   * The baseline is the line that passes through (x1, y1) and (x2, y2).
   * WARNING: with vertical text, baselines may be vertical!
   * Returns false if there is no baseline at the current position.
   */
  bool Baseline(PageIteratorLevel level,
                int* x1, int* y1, int* x2, int* y2) const;
    
    #include 'genericvector.h'
#include 'kdpair.h'
#include 'points.h'
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
        if (left_node_id >= elem_of_each_node_.size()) {
      elem_of_each_node_.resize(left_node_id + 1, Elem(nullptr, nullptr, -1));
    }
    if (right_node_id >= elem_of_each_node_.size()) {
      elem_of_each_node_.resize(right_node_id + 1, Elem(nullptr, nullptr, -1));
    }
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
    
    {  inline void SetPrune(const WQSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType begin = src.data[0].rmax;
    const RType range = src.data[src.size - 1].rmin - src.data[0].rmax;
    const size_t n = maxsize - 1;
    data[0] = src.data[0];
    this->size = 1;
    // lastidx is used to avoid duplicated records
    size_t i = 1, lastidx = 0;
    for (size_t k = 1; k < n; ++k) {
      RType dx2 =  2 * ((k * range) / n + begin);
      // find first i such that  d < (rmax[i+1] + rmin[i+1]) / 2
      while (i < src.size - 1
             && dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
      CHECK(i != src.size - 1);
      if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
        if (i != lastidx) {
          data[size++] = src.data[i]; lastidx = i;
        }
      } else {
        if (i + 1 != lastidx) {
          data[size++] = src.data[i + 1]; lastidx = i + 1;
        }
      }
    }
    if (lastidx != src.size - 1) {
      data[size++] = src.data[src.size - 1];
    }
  }
  /*!
   * \brief set current summary to be merged summary of sa and sb
   * \param sa first input summary to be merged
   * \param sb second input summary to be merged
   */
  inline void SetCombine(const WQSummary &sa,
                         const WQSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0);
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    // extended rmin value
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      // duplicated value entry
      if (a->value == b->value) {
        *dst = Entry(a->rmin + b->rmin,
                     a->rmax + b->rmax,
                     a->wmin + b->wmin, a->value);
        aprev_rmin = a->RMinNext();
        bprev_rmin = b->RMinNext();
        ++dst; ++a; ++b;
      } else if (a->value < b->value) {
        *dst = Entry(a->rmin + bprev_rmin,
                     a->rmax + b->RMaxPrev(),
                     a->wmin, a->value);
        aprev_rmin = a->RMinNext();
        ++dst; ++a;
      } else {
        *dst = Entry(b->rmin + aprev_rmin,
                     b->rmax + a->RMaxPrev(),
                     b->wmin, b->value);
        bprev_rmin = b->RMinNext();
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType brmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(a->rmin + bprev_rmin, a->rmax + brmax, a->wmin, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType armax = (a_end - 1)->rmax;
      do {
        *dst = Entry(b->rmin + aprev_rmin, b->rmax + armax, b->wmin, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    this->size = dst - data;
    const RType tol = 10;
    RType err_mingap, err_maxgap, err_wgap;
    this->FixError(&err_mingap, &err_maxgap, &err_wgap);
    if (err_mingap > tol || err_maxgap > tol || err_wgap > tol) {
      LOG(INFO) << 'mingap=' << err_mingap
                << ', maxgap=' << err_maxgap
                << ', wgap=' << err_wgap;
    }
    CHECK(size <= sa.size + sb.size) << 'bug in combine';
  }
  // helper function to print the current content of sketch
  inline void Print() const {
    for (size_t i = 0; i < this->size; ++i) {
      LOG(CONSOLE) << '[' << i << '] rmin=' << data[i].rmin
                   << ', rmax=' << data[i].rmax
                   << ', wmin=' << data[i].wmin
                   << ', v=' << data[i].value;
    }
  }
  // try to fix rounding error
  // and re-establish invariance
  inline void FixError(RType *err_mingap,
                       RType *err_maxgap,
                       RType *err_wgap) const {
    *err_mingap = 0;
    *err_maxgap = 0;
    *err_wgap = 0;
    RType prev_rmin = 0, prev_rmax = 0;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin < prev_rmin) {
        data[i].rmin = prev_rmin;
        *err_mingap = std::max(*err_mingap, prev_rmin - data[i].rmin);
      } else {
        prev_rmin = data[i].rmin;
      }
      if (data[i].rmax < prev_rmax) {
        data[i].rmax = prev_rmax;
        *err_maxgap = std::max(*err_maxgap, prev_rmax - data[i].rmax);
      }
      RType rmin_next = data[i].RMinNext();
      if (data[i].rmax < rmin_next) {
        data[i].rmax = rmin_next;
        *err_wgap = std::max(*err_wgap, data[i].rmax - rmin_next);
      }
      prev_rmax = data[i].rmax;
    }
  }
  // check consistency of the summary
  inline bool Check(const char *msg) const {
    const float tol = 10.0f;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin + data[i].wmin > data[i].rmax + tol ||
          data[i].rmin < -1e-6f || data[i].rmax < -1e-6f) {
        LOG(INFO) << '---------- WQSummary::Check did not pass ----------';
        this->Print();
        return false;
      }
    }
    return true;
  }
};
    
      // construct column matrix from GHistIndexMatrix
  inline void Init(const GHistIndexMatrix& gmat,
                double  sparse_threshold) {
    const auto nfeature = static_cast<bst_uint>(gmat.cut.row_ptr.size() - 1);
    const size_t nrow = gmat.row_ptr.size() - 1;
    }
    
    void Speed::startWithTarget(Node* target)
{
    if (target && _innerAction)
    {
        Action::startWithTarget(target);
        _innerAction->startWithTarget(target);
    }
    else
        log('Speed::startWithTarget error: target(%p) or _innerAction(%p) is nullptr!', target, _innerAction);
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Speed);
};
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    void CardinalSplineBy::updatePosition(const Vec2 &newPos)
{
    Vec2 p = newPos + _startPosition;
    _target->setPosition(p);
    _previousPosition = p;
}
    
    
    {        return true;
    }
    
     THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
    
        //
    // Overrides
    //
    virtual RepeatForever* clone() const override;
    virtual RepeatForever* reverse(void) const override;
    virtual void startWithTarget(Node* target) override;
    /**
     * @param dt In seconds.
     */
    virtual void step(float dt) override;
    virtual bool isDone(void) const override;
    
CC_CONSTRUCTOR_ACCESS:
    RepeatForever()
    : _innerAction(nullptr)
    {}
    virtual ~RepeatForever();
    
    #include '2d/CCActionManager.h'
#include '2d/CCNode.h'
#include '2d/CCAction.h'
#include 'base/CCScheduler.h'
#include 'base/ccMacros.h'
#include 'base/ccCArray.h'
#include 'base/uthash.h'
    
    /** @class ActionManager
 @brief ActionManager is a singleton that manages all the actions.
 Normally you won't need to use this singleton directly. 99% of the cases you will use the Node interface,
 which uses this singleton.
 But there are some cases where you might need to use this singleton.
 Examples:
    - When you want to run an action where the target is different from a Node. 
    - When you want to pause / resume the actions.
 
 @since v0.8
 */
class CC_DLL ActionManager : public Ref
{
public:
    /**
     * @js ctor
     */
    ActionManager();
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    void AnimationCache::addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist)
{
    auto anisItr = dictionary.find('animations');
    if (anisItr == dictionary.end() )
    {
        CCLOG('cocos2d: AnimationCache: No animations were found in provided dictionary.');
        return;
    }
    
    const Value& animations = anisItr->second;
    unsigned int version = 1;
    }
    
        /** Adds an animation from an NSDictionary.
     * Make sure that the frames were previously loaded in the SpriteFrameCache.
     * @param dictionary An NSDictionary.
     * @param plist The path of the relative file,it use to find the plist path for load SpriteFrames.
     * @since v1.1
	 @js NA
     */
    void addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist);
    
      bool AllDone() const {
    return num_done_ >= num_threads_;
  }
    
    
    {}  // namespace rocksdb

    
    
    {}  //  namespace rocksdb

    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
      // Read a key OUTSIDE this transaction. Does not affect txn.
  s = txn_db->Get(read_options, 'abc', &value);
    
      // the number of deletion entries before compaction. Deletion entries
  // can disappear after compaction because they expired
  uint64_t num_input_deletion_records;
  // number of deletion records that were found obsolete and discarded
  // because it is not possible to delete any more keys with this entry
  // (i.e. all possible deletions resulting from it have been completed)
  uint64_t num_expired_deletion_records;
    
    int main()
{
    // create a JSON value
    const json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }