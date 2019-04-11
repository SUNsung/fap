
        
        #include 'Number.h'
    
    
    {    AutomationProperties::SetName(m_host, announcement->Announcement);
    AutomationPeer^ peer = FrameworkElementAutomationPeer::FromElement(m_host);
    if (peer != nullptr)
    {
        peer->RaiseAutomationEvent(AutomationEvents::LiveRegionChanged);
    }
}

    
            if (id.compare(L'sGrouping') == 0)
        {
            // The following groupings are the onces that CalcEngine supports.
            //   0;0             0x000          - no grouping
            //   3;0             0x003          - group every 3 digits
            //   3;2;0           0x023          - group 1st 3 and then every 2 digits
            //   4;0             0x004          - group every 4 digits
            //   5;3;2;0         0x235          - group 5, then 3, then every 2
            wstring numberGroupingString = localizationSettings.GetNumberGroupingStr();
            return numberGroupingString;
        }
    
        private:
        LocalizationService();
    
            void OnNetworkStatusChange(_In_ Platform::Object^ sender);
        static NetworkAccessBehavior ConvertCostInfoToBehavior(_In_ Windows::Networking::Connectivity::ConnectionCost^ connectionCost);
    
    using json = nlohmann::json;
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      // Attempt to read a key using the snapshot.  This will fail since
  // the previous write outside this txn conflicts with this read.
  read_options.snapshot = snapshot;
  s = txn->GetForUpdate(read_options, 'abc', &value);
  assert(s.IsBusy());
    
    
    {}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
      // Block current thread until condition variable is notified by a call to
  // Notify() or NotifyAll().  Wait() will be called with mutex locked.
  // Returns OK if notified.
  // Returns non-OK if TransactionDB should stop waiting and fail the operation.
  // May return OK spuriously even if not notified.
  virtual Status Wait(std::shared_ptr<TransactionDBMutex> mutex) = 0;
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    setMaxBackgroundOperations
 * Signature: (JI)V
 */
void Java_org_rocksdb_BackupableDBOptions_setMaxBackgroundOperations(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle,
    jint max_background_operations) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  bopt->max_background_operations = static_cast<int>(max_background_operations);
}
    
        void restore();
    void updateTransform();
    
        /** 
     * Initializes the action with a duration and an array of points.
     *
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     */
    bool initWithDuration(float duration, PointArray* points, float tension);
    /** It will update the target position and change the _previousPosition to newPos
     *
     * @param newPos The new position.
     */
    virtual void updatePosition(const Vec2 &newPos);
    /** Return a PointArray.
     *
     * @return A PointArray.
     */
    PointArray* getPoints() { return _points; }
    /**
     * @js NA
     * @lua NA
     */
    void setPoints(PointArray* points)
    {
        CC_SAFE_RETAIN(points);
        CC_SAFE_RELEASE(_points);
        _points = points;
    }
    
    ReuseGrid* ReuseGrid::clone() const
{
    return ReuseGrid::create(_times);
}
    
    
/** @class CallFunc
* @brief Calls a 'callback'.
*/
class CC_DLL CallFunc : public ActionInstant
{
public:
    /** Creates the action with the callback of type std::function<void()>.
     This is the preferred way to create the callback.
     * When this function bound in js or lua ,the input param will be changed.
     * In js: var create(var func, var this, var [data]) or var create(var func).
     * In lua:local create(local funcID).
     *
     * @param func  A callback function need to be executed.
     * @return  An autoreleased CallFunc object.
     */
    static CallFunc * create(const std::function<void()>& func);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
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
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
        /** Adds a frame with an image filename. Internally it will create a SpriteFrame and it will add it.
     * The frame will be added with one 'delay unit'.
     * Added to facilitate the migration from v0.8 to v0.9.
     * @param filename The path of SpriteFrame.
     */
    void addSpriteFrameWithFile(const std::string& filename);
    /**
     * @deprecated. Use addSpriteFrameWithFile() instead.
     @js NA
     */
    CC_DEPRECATED_ATTRIBUTE void addSpriteFrameWithFileName(const std::string& filename){ addSpriteFrameWithFile(filename);}
    
        /** Deletes a Animation from the cache.
     *
     * @param name The name of animation.
     */
    void removeAnimation(const std::string& name);
    /** @deprecated. Use removeAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE void removeAnimationByName(const std::string& name){ removeAnimation(name);}
    
        /** Width of each char. */
    int    _itemWidth;
    /** Height of each char. */
    int    _itemHeight;
    
    Color3B    _colorUnmodified;
    
    TextureAtlas* _textureAtlas;
    /** Protocol variables. */
    bool _isOpacityModifyRGB;
    BlendFunc _blendFunc;