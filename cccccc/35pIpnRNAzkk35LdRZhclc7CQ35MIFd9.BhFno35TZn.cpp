
        
        
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
      void Save(dmlc::Stream* fo) const {
    CHECK_EQ(param.num_trees, static_cast<int>(trees.size()));
    fo->Write(&param, sizeof(param));
    for (const auto & tree : trees) {
      tree->Save(fo);
    }
    if (tree_info.size() != 0) {
      fo->Write(dmlc::BeginPtr(tree_info), sizeof(int) * tree_info.size());
    }
  }
    
    // functions related to booster
void _BoosterFinalizer(SEXP ext) {
  if (R_ExternalPtrAddr(ext) == NULL) return;
  CHECK_CALL(XGBoosterFree(R_ExternalPtrAddr(ext)));
  R_ClearExternalPtr(ext);
}
    
    // Should GradStats be in this header, rather than param.h?
struct GradStats;
    
        /** Creates an action with a Cardinal Spline array of points and tension.
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var t,var table)
     * In lua: local create(local t, local table)
     * @endcode
     */
    static CardinalSplineTo* create(float duration, PointArray* points, float tension);
    /**
     * @js NA
     * @lua NA
     */
    virtual ~CardinalSplineTo();
    /**
     * @js ctor
     * @lua NA
     */
    CardinalSplineTo();
    
        EaseRateAction *easeRateAction = new (std::nothrow) EaseRateAction();
    if (easeRateAction && easeRateAction->initWithAction(action, rate))
    {
        easeRateAction->autorelease();
        return easeRateAction;
    }
    
    /** @class Blink
 * @brief Blinks a Node object by modifying it's visible attribute.
*/
class CC_DLL Blink : public ActionInterval
{
public:
    /** 
     * Creates the action.
     * @param duration Duration time, in seconds.
     * @param blinks Blink times.
     * @return An autoreleased Blink object.
     */
    static Blink* create(float duration, int blinks);
    }
    
        /** Resumes the target. All queued actions will be resumed.
     *
     * @param target    A certain target.
     */
    virtual void resumeTarget(Node *target);
    
    /** Pauses all running actions, returning a list of targets whose actions were paused.
     *
     * @return  A list of targets whose actions were paused.
     */
    virtual Vector<Node*> pauseAllRunningActions();
    
    /** Resume a set of targets (convenience function to reverse a pauseAllRunningActions call).
     *
     * @param targetsToResume   A set of targets need to be resumed.
     */
    virtual void resumeTargets(const Vector<Node*>& targetsToResume);
    
    /** Main loop of ActionManager.
     * @param dt    In seconds.
     */
    virtual void update(float dt);
    
protected:
    // declared in ActionManager.m
    
    float FadeOutDownTiles::testFunc(const Size& pos, float time)
{
    Vec2 n = Vec2((float)_gridSize.width, (float)_gridSize.height) * (1.0f - time);
    return powf(n.y / (pos.height > 0.0f ? pos.height : 0.1f), 6);
}
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    
    {
    {  bool IsShuttingDown() {
    // This is a best-effort facility, so memory_order_relaxed is sufficient.
    return shutting_down_ && shutting_down_->load(std::memory_order_relaxed);
  }
};
}  // namespace rocksdb

    
    Status PosixRandomRWFile::Write(uint64_t offset, const Slice& data) {
  const char* src = data.data();
  size_t left = data.size();
  while (left != 0) {
    ssize_t done = pwrite(fd_, src, left, offset);
    if (done < 0) {
      // error while writing to file
      if (errno == EINTR) {
        // write was interrupted, try again.
        continue;
      }
      return IOError(
          'While write random read/write file at offset ' + ToString(offset),
          filename_, errno);
    }
    }
    }
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // Read a key OUTSIDE this transaction. Does not affect txn.
  s = db->Get(read_options, 'abc', &value);
    
    struct DumpOptions {
  // Database that will be dumped
  std::string db_path;
  // File location that will contain dump output
  std::string dump_location;
  // Don't include db information header in the dump
  bool anonymous = false;
};
    
      virtual bool IsRateLimited(OpType op_type) {
    if ((mode_ == RateLimiter::Mode::kWritesOnly &&
         op_type == RateLimiter::OpType::kRead) ||
        (mode_ == RateLimiter::Mode::kReadsOnly &&
         op_type == RateLimiter::OpType::kWrite)) {
      return false;
    }
    return true;
  }
    
      float BlockErrorLimit() const override;
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #include <assert.h>
#include <string.h>
    
    // Represents a parsed jpeg file.
struct JPEGData {
  JPEGData() : width(0),
               height(0),
               version(0),
               max_h_samp_factor(1),
               max_v_samp_factor(1),
               MCU_rows(0),
               MCU_cols(0),
               restart_interval(0),
               original_jpg(NULL),
               original_jpg_size(0),
               error(JPEG_OK) {}
    }
    
    struct HuffmanCodeTable {
  uint8_t depth[256];
  int code[256];
};