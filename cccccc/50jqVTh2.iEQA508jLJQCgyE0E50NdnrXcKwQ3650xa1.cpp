
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace swig
}  // namespace tensorflow
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include <functional>
#include <map>
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
     private:
  display::Screen* screen_;
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    namespace base {
class TaskRunner;
}
    
      base::WeakPtrFactory<URLRequestAboutJob> weak_ptr_factory_;
    
    
    {
    {
    {
    {          std::transform(
            begin(inputs) + start, begin(inputs) + stop,
            retMem + start,
            func
          );
        }
      } catch (const std::runtime_error& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
      /**
   * Master Get Methods to get values associated with an ini or hdf setting.
   * These methods just get the value. They do not bind to a variable for
   * enabling ini_get()
   */
  static bool GetBool(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '',
                      const bool defValue = false,
                      const bool prepend_hhvm = true);
  static const char *Get(const IniSettingMap &ini, const Hdf& config,
                         const std::string& name = '',
                         const char *defValue = nullptr,
                         const bool prepend_hhvm = true);
  static std::string GetString(const IniSettingMap &ini, const Hdf& config,
                               const std::string& name = '',
                               const std::string defValue = '',
                               const bool prepend_hhvm = true);
  static char GetByte(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '', const char defValue = 0,
                      const bool prepend_hhvm = true);
  static unsigned char GetUByte(const IniSettingMap &ini, const Hdf& config,
                                const std::string& name = '',
                                const unsigned char defValue = 0,
                                const bool prepend_hhvm = true);
  static int16_t GetInt16(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int16_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint16_t GetUInt16(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint16_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int32_t GetInt32(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int32_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint32_t GetUInt32(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint32_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int64_t GetInt64(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int64_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint64_t GetUInt64(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint64_t defValue = 0,
                            const bool prepend_hhvm = true);
  static double GetDouble(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const double defValue = 0,
                          const bool prepend_hhvm = true);
  static std::vector<uint32_t>
  GetUInt32Vector(const IniSettingMap& ini, const Hdf& config,
                  const std::string& name = '',
                  const std::vector<uint32_t>& def = std::vector<uint32_t>{},
                  const bool prepend_hhvm = true);
  static std::vector<std::string>
  GetStrVector(const IniSettingMap& ini, const Hdf& config,
               const std::string& name = '',
               const std::vector<std::string>& def = std::vector<std::string>{},
               const bool prepend_hhvm = true);
  static std::unordered_map<std::string, int>
  GetIntMap(const IniSettingMap& ini, const Hdf& config,
            const std::string& name = '',
            const std::unordered_map<std::string, int>& defValue =
              std::unordered_map<std::string, int>{},
            const bool prepend_hhvm = true);
  static ConfigMap GetMap(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMap& defValue = ConfigMap(),
                          const bool prepend_hhvm = true);
  static ConfigMapC GetMapC(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMapC& defValue = ConfigMapC(),
                          const bool prepend_hhvm = true);
  static ConfigSet GetSet(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigSet& defValue = ConfigSet(),
                          const bool prepend_hhvm = true);
  static ConfigSetC GetSetC(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigSetC& defValue = ConfigSetC(),
                            const bool prepend_hhvm = true);
  static ConfigIMap GetIMap(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigIMap& defValue = ConfigIMap(),
                            const bool prepend_hhvm = true);
  static ConfigFlatSet GetFlatSet(const IniSettingMap& ini, const Hdf& config,
                                  const std::string& name = '',
                                  const ConfigFlatSet& defValue
                                    = ConfigFlatSet(),
                                  const bool prepend_hhvm = true);
    
      typedef std::pair<const char*, std::string> InfoEntry;
  typedef std::vector<InfoEntry> InfoVec;
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
      explicit OutputFile(const String& filename);
  virtual ~OutputFile();
    
    
    {}

    
    void logAHMSubMapWarning(folly::StringPiece mapName);
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
      MyFilter filter;
    
      ////////////////////////////////////////////////////////
  //
  // 'Repeatable Read' (Snapshot Isolation) Example
  //   -- Using a single Snapshot
  //
  ////////////////////////////////////////////////////////
    
    #pragma once
    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
    
    bool Speed::initWithAction(ActionInterval *action, float speed)
{
    CCASSERT(action != nullptr, 'action must not be NULL');
    if (action == nullptr)
    {
        log('Speed::initWithAction error: action is nullptr!');
        return false;
    }
    
    action->retain();
    _innerAction = action;
    _speed = speed;
    return true;
}
    
        /** Called every frame with it's delta time, dt in seconds. DON'T override unless you know what you are doing. 
     *
     * @param dt In seconds.
     */
    virtual void step(float dt);
    
        // convert to 'diffs' to 'reverse absolute'
    
    Waves3D* Waves3D::clone() const
{
    // no copy constructor
    return Waves3D::create(_duration, _gridSize, _waves, _amplitude);
}
    
    void Hide::update(float time)
{
    ActionInstant::update(time);
    _target->setVisible(false);
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipY* reverse() const override;
    virtual FlipY* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipY() :_flipY(false) {}
    virtual ~FlipY() {}
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
    PageTurn3D *PageTurn3D::clone() const
{
    // no copy constructor
    return PageTurn3D::create(_duration, _gridSize);
}
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {
    {
    {            if (_shakeZ)
            {
                coords.bl.z += ( rand() % (_randrange*2) ) - _randrange;
                coords.br.z += ( rand() % (_randrange*2) ) - _randrange;
                coords.tl.z += ( rand() % (_randrange*2) ) - _randrange;
                coords.tr.z += ( rand() % (_randrange*2) ) - _randrange;
            }
                        
            setTile(Vec2(i, j), coords);
        }
    }
}
    
    Animation::~Animation(void)
{
    CCLOGINFO('deallocing Animation: %p', this);
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__
    
    
    {    /**
     * Create an polygoninfo from the data of another Polygoninfo
     * @param other     another PolygonInfo to be copied
     * @return duplicate of the other PolygonInfo
     */
    PolygonInfo(const PolygonInfo& other);
    //  end of creators group
    /// @}
    
    /**
     * Copy the member of the other PolygonInfo
     * @param other     another PolygonInfo to be copied
     */
    PolygonInfo& operator= (const PolygonInfo &other);
    ~PolygonInfo();
    
    /**
     * set the data to be a pointer to a quad
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad object
     */
    void setQuad(V3F_C4B_T2F_Quad *quad);