
        
        
    {
    {    private:
        Number m_p;
        Number m_q;
    };
}

    
            if (e->PreviousExecutionState == ApplicationExecutionState::Terminated)
        {
            // TODO: Restore the saved session state only when appropriate, scheduling the
            // final launch steps after the restore is complete
        }
    
        static std::vector<uint32_t> DigitGroupingStringToGroupingVector(std::wstring_view groupingString);
    std::wstring GroupDigits(std::wstring_view delimiter, std::vector<uint32_t> const& grouping, std::wstring_view displayString, bool isNumNegative = false);
    
        PNUMBER Number::ToPNUMBER() const
    {
        PNUMBER ret = _createnum(static_cast<uint32_t>(this->Mantissa().size()) + 1);
        ret->sign = this->Sign();
        ret->exp = this->Exp();
        ret->cdigit = static_cast<int32_t>(this->Mantissa().size());
    }
    
    //////////////////////////////////////////////////
//
// InitialOneTimeOnlyNumberSetup
//
//////////////////////////////////////////////////
void CCalcEngine::InitialOneTimeOnlySetup(CalculationManager::IResourceProvider& resourceProvider)
{
    LoadEngineStrings(resourceProvider);
    }
    
            std::wstring value;
    
    
    {    AutomationProperties::SetName(m_host, announcement->Announcement);
    AutomationPeer ^ peer = FrameworkElementAutomationPeer::FromElement(m_host);
    if (peer != nullptr)
    {
        peer->RaiseAutomationEvent(AutomationEvents::LiveRegionChanged);
    }
}

    
      void Unref() {
    bool do_delete = false;
    {
      MutexLock lock(&mutex_);
      --refs_;
      assert(refs_ >= 0);
      if (refs_ <= 0) {
        do_delete = true;
      }
    }
    }
    
    /*
 * Class:     org_rocksdb_CompactionOptionsFIFO
 * Method:    maxTableFilesSize
 * Signature: (J)J
 */
jlong Java_org_rocksdb_CompactionOptionsFIFO_maxTableFilesSize(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsFIFO*>(jhandle);
  return static_cast<jlong>(opt->max_table_files_size);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setCompressionSizePercent
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setCompressionSizePercent(
    JNIEnv*, jobject, jlong jhandle,
    jint jcompression_size_percent) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->compression_size_percent =
      static_cast<unsigned int>(jcompression_size_percent);
}
    
    /*
 * Class:     org_rocksdb_Env
 * Method:    getThreadList
 * Signature: (J)[Lorg/rocksdb/ThreadStatus;
 */
jobjectArray Java_org_rocksdb_Env_getThreadList(
    JNIEnv* env, jobject, jlong jhandle) {
  auto* rocks_env = reinterpret_cast<rocksdb::Env*>(jhandle);
  std::vector<rocksdb::ThreadStatus> thread_status;
  rocksdb::Status s = rocks_env->GetThreadList(&thread_status);
  if (!s.ok()) {
    // error, throw exception
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
    return nullptr;
  }
    }
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setAllowBlockingFlush
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setAllowBlockingFlush(
    JNIEnv*, jobject, jlong jhandle, jboolean jallow_blocking_flush) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
}
    
      jbyte* end_key = new jbyte[jend_key_len];
  env->GetByteArrayRegion(jend_key, jend_key_off, jend_key_len, end_key);
  if (env->ExceptionCheck()) {
    // exception thrown: ArrayIndexOutOfBoundsException
    delete[] begin_key;
    delete[] end_key;
    return false;
  }
  rocksdb::Slice end_key_slice(reinterpret_cast<char*>(end_key), jend_key_len);
    
    
    {    Vec3 _center;
    Vec3 _eye;
    Vec3 _up;
};
    
    void ActionManager::removeAllActions()
{
    for (tHashElement *element = _targets; element != nullptr; )
    {
        auto target = element->target;
        element = (tHashElement*)element->hh.next;
        removeAllActionsFromTarget(target);
    }
}
    
    #include '2d/CCAction.h'
#include 'base/CCVector.h'
#include 'base/CCRef.h'
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCTILEDGRID_ACTION_H__
#define __ACTION_CCTILEDGRID_ACTION_H__
    
        /** Return the TMXObjectGroup for the specific group. 
     * 
     * @return Return the TMXObjectGroup for the specific group.
     */
    TMXObjectGroup* getObjectGroup(const std::string& groupName) const;
    
    
    {private:
    static std::unordered_map<std::string, FontAtlas *> _atlasMap;
};
    
    class Texture2D;
class FontCharMap : public Font
{  
public:
    static FontCharMap * create(const std::string& charMapFile, int itemWidth, int itemHeight, int startCharMap);
    static FontCharMap * create(Texture2D* texture, int itemWidth, int itemHeight, int startCharMap);
    static FontCharMap * create(const std::string& plistFile);
    
    virtual int* getHorizontalKerningForTextUTF32(const std::u32string& text, int &outNumLetters) const override;
    virtual FontAtlas *createFontAtlas() override;
    
protected:    
    FontCharMap(Texture2D* texture,int itemWidth, int itemHeight, int startCharMap)
        :_texture(texture)
        ,_mapStartChar(startCharMap)
        ,_itemWidth(itemWidth)
        ,_itemHeight(itemHeight)
    {}
    /**
     * @js NA
     * @lua NA
     */
    virtual ~FontCharMap();
    
private:
    Texture2D* _texture;
    int _mapStartChar;
    int _itemWidth;
    int _itemHeight;
    }