
        
        
    { private:
  const ShapeTree<BufferAllocation::Slice> infeed_slices_;
};
    
    #include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/core/lib/core/errors.h'
    
    #endif 

    
    #include 'ImfAttribute.h'
#include 'ImfNamespace.h'
    
        if (getVersion (version) != EXR_VERSION)
    {
        THROW (IEX_NAMESPACE::InputExc, 'Cannot read '
                              'version ' << getVersion (version) << ' '
                              'image files.  Current file format version '
                              'is ' << EXR_VERSION << '.');
    }
    
    
IMATH_NAMESPACE::V2f &	
Header::screenWindowCenter ()
{
    return static_cast <V2fAttribute &>
	((*this)['screenWindowCenter']).value();
}
    
    
int
hufCompress (const unsigned short raw[],
	     int nRaw,
	     char compressed[])
{
    if (nRaw == 0)
	return 0;
    }
    
    
    {            ifd->tFile->readTiles (0, ifd->tFile->numXTiles (0) - 1, j, j);
            ifd->cachedTileY = j;
        }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    // The Blank Application template is documented at https://go.microsoft.com/fwlink/?LinkId=402347&clcid=0x409
    
    
    {        return result;
    }
    
    
    {
    {        std::shared_ptr<UCM::IUnitConverterVMCallback> m_vmCallback;
        std::vector<std::tuple<std::wstring, UCM::Unit>> m_suggestedList;
        std::wstring m_curValue;
    };
}

    
        spHistoryItem->historyItemVector.spTokens = tokens;
    spHistoryItem->historyItemVector.spCommands = commands;
    
            // IVector<Object^>
          // Not implemented methods
        virtual void Append(Platform::Object^ /*item*/) = Windows::Foundation::Collections::IVector<Platform::Object^>::Append
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void Clear() = Windows::Foundation::Collections::IVector<Platform::Object ^>::Clear
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual unsigned int GetMany(
                unsigned int /*startIndex*/,
                Platform::WriteOnlyArray<Platform::Object ^> ^ /*items*/) = Windows::Foundation::Collections::IVector<Platform::Object ^>::GetMany
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual Windows::Foundation::Collections::IVectorView<Platform::Object ^> ^ GetView() = Windows::Foundation::Collections::IVector<
                Platform::Object ^>::GetView
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void InsertAt(unsigned int /*index*/, Platform::Object ^ /*item*/) = Windows::Foundation::Collections::IVector<Platform::Object ^>::InsertAt
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void RemoveAt(unsigned int /*index*/) = Windows::Foundation::Collections::IVector<Platform::Object ^>::RemoveAt
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void RemoveAtEnd() = Windows::Foundation::Collections::IVector<Platform::Object ^>::RemoveAtEnd
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void
            ReplaceAll(const Platform::Array<Platform::Object ^> ^ /*items*/) = Windows::Foundation::Collections::IVector<Platform::Object ^>::ReplaceAll
            {
                throw ref new Platform::NotImplementedException();
            }
            virtual void SetAt(unsigned int /*index*/, Platform::Object ^ /*item*/) = Windows::Foundation::Collections::IVector<Platform::Object ^>::SetAt
            {
                throw ref new Platform::NotImplementedException();
            }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetCategoryNameChangedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement,
        CalculatorActivityIds::CategoryNameChanged,
        AutomationNotificationKind::ActionCompleted,
        AutomationNotificationProcessing::ImportantMostRecent);
}
    
    #include <adapters/qt.h>
    
                    /* force into an fd */
                if (stream == NULL || FAILURE == php_stream_cast(stream, PHP_STREAM_CAST_RELEASE|PHP_STREAM_AS_FD, (void ** )&fd, REPORT_ERRORS))
                {
                    goto exit_fail;
                }
    
        string relativePath = string();
    size_t position = fullPath.find(apkprefix);
    if (0 == position) {
        // 'assets/' is at the beginning of the path and we don't want it
        relativePath += fullPath.substr(apkprefix.size());
    } else {
        relativePath = fullPath;
    }
    
    if (obbfile)
    {
        if (obbfile->getFileData(relativePath, buffer))
            return FileUtils::Status::OK;
    }
    
    extern const char * getApkPath();
extern std::string getPackageNameJNI();
extern int getObbAssetFileDescriptorJNI(const char* path, long* startOffset, long* size);
extern void conversionEncodingJNI(const char* src, int byteSize, const char* fromCharset, char* dst, const char* newCharset);
extern bool removeDirectoryJNI(const char* path);
    
    void RelativeLayoutManager::doLayout(LayoutProtocol *layout)
{
    
    _widgetChildren = this->getAllWidgets(layout);
    
    while (_unlayoutChildCount > 0)
    {
        for (auto& subWidget : _widgetChildren)
        {
            _widget = static_cast<Widget*>(subWidget);
            
            RelativeLayoutParameter* layoutParameter = dynamic_cast<RelativeLayoutParameter*>(_widget->getLayoutParameter());
            
            if (layoutParameter)
            {
                if (layoutParameter->_put)
                {
                    continue;
                }
                
               
                bool ret = this->calculateFinalPositionWithRelativeWidget(layout);
                if (!ret) {
                    continue;
                }
                
                this->calculateFinalPositionWithRelativeAlign();
            
            
                _widget->setPosition(Vec2(_finalPositionX, _finalPositionY));
                
                layoutParameter->_put = true;
            }
        }
        _unlayoutChildCount--;
    }
    }
    
    void SpritePolygonTest2::initSprites()
{
    auto s = Director::getInstance()->getWinSize();
    auto offset = Vec2(0.15*s.width,0);
    auto filename = s_pathGrossini;
    Rect head = Rect(30,25,25,25);
    
    //Sprite
    auto pinfo = AutoPolygon::generatePolygon(filename, head);
    _polygonSprite = Sprite::create(pinfo);
    _polygonSprite->setTag(101);
    addChild(_polygonSprite);
    _polygonSprite->setPosition(Vec2(s)/2 + offset);
    
    _normalSprite = Sprite::create(filename,head);
    _normalSprite->setTag(100);
    addChild(_normalSprite);
    _normalSprite->setPosition(Vec2(s)/2 - offset);
    }
    
    It is a good practice to use a Scene as the parent of all your nodes.
 
Scene will create a default camera for you.
*/
class CC_DLL Scene : public Node
{
public:
    /** Creates a new Scene object. 
     *
     * @return An autoreleased Scene object.
     */
    static Scene *create();
    }
    
    std::string SpriteRenderTextureBug::title() const
{
    return 'SpriteRenderTextureBug';
}
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
        TrafficStatistics(const TrafficStatistics&);
    TrafficStatistics& operator=(const TrafficStatistics&);
    
    #include 'mars/baseevent/active_logic.h'
#include 'mars/baseevent/baseprjevent.h'
#include 'mars/comm/singleton.h'
#include 'mars/comm/xlogger/xlogger.h'
#include 'mars/comm/thread/lock.h'
#include 'mars/comm/time_utils.h'
#include 'mars/comm/bootrun.h'
#include 'mars/comm/messagequeue/message_queue.h'
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    
enum {
    kGetADDRNotBegin,
    kGetADDRDoing,
    kGetADDRTimeout,
    kGetADDRSuc,
    kGetADDRFail,
};