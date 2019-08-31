
        
            KeyChord::KeyChord(Settings::KeyModifiers const& modifiers, int32_t vkey) :
        _modifiers{ modifiers },
        _vkey{ vkey }
    {
    }
    
    #ifndef INCLUDED_IMF_FLOATVECTOR_ATTRIBUTE_H
#define INCLUDED_IMF_FLOATVECTOR_ATTRIBUTE_H
    
    Rational
guessExactFps (double fps)
{
    return guessExactFps (Rational (fps));
}
    
    class GenericInputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericInputFile() {}
    }
    
        IMF_EXPORT
    void			sanityCheck (bool isTiled = false,
        			             bool isMultipartFile = false) const;
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
    void
InputPart::readPixels (int scanLine)
{
    file->readPixels(scanLine);
}
    
            IMF_EXPORT
        const char *        fileName () const;
        IMF_EXPORT
        const Header &      header () const;
        IMF_EXPORT
        int                 version () const;
        IMF_EXPORT
        void                setFrameBuffer (const FrameBuffer &frameBuffer);
        IMF_EXPORT
        const FrameBuffer & frameBuffer () const;
        IMF_EXPORT
        bool                isComplete () const;
        IMF_EXPORT
        bool                isOptimizationEnabled () const;
        IMF_EXPORT
        void                readPixels (int scanLine1, int scanLine2);
        IMF_EXPORT
        void                readPixels (int scanLine);
        IMF_EXPORT
        void                rawPixelData (int firstScanLine,
                                          const char *&pixelData,
                                          int &pixelDataSize);
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    #include 'ImfIO.h'
#include 'IlmThreadMutex.h'
#include 'ImfNamespace.h'
    
    void QmlUtils::addNewValueToDynamicChart(QtCharts::QXYSeries *series,
                                         double value) {
  using namespace QtCharts;
    }
    
    
    {  emit operationNameChanged();
  emit connectionNameChanged();
  emit dbIndexChanged();
  emit keyPatternChanged();
  emit operationProgressChanged();
  emit openDialog(m_operation->getTypeName());
}

    
    namespace BulkOperations {
    }
    
      bool isMetadataValid() const override;
    
    class QmlUtils;
class Events;
class ConnectionsManager;
class Updater;
class KeyFactory;
class TabViewModel;
class QPython;
namespace ValueEditor {
class TabsModel;
}
namespace ValueEditor {
class ExternalFormattersManager;
class EmbeddedFormattersManager;
}  // namespace ValueEditor
namespace BulkOperations {
class Manager;
}
namespace Console {
class AutocompleteModel;
}
    
          int have = (ZLIB_CHUNK_SIZE - strm.avail_out);
    
     public:
  enum Roles { name = Qt::UserRole + 1, version, description, cmd };
    
    QHash<QString, std::function<void()>>
ConnectionsTree::TreeItem::eventHandlers() {
  QHash<QString, std::function<void()>> events;
  events['cancel'] = [this]() { cancelCurrentOperation(); };
  return events;
}
    
      void closeDbKeys(QSharedPointer<RedisClient::Connection> connection,
                   int dbIndex,
                   const QRegExp& filter = QRegExp('*', Qt::CaseSensitive,
                                                   QRegExp::Wildcard));
    
    std::string Action::description() const
{
    return StringUtils::format('<Action | Tag = %d', _tag);
}
    
        /**
    @brief Get the amplitude of ripple effect.
    @return The amplitude of ripple effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude of ripple effect.
    @param fAmplitude The amplitude of ripple effect.
    */
    void setAmplitude(float fAmplitude) { _amplitude = fAmplitude; }
    
    void CallFunc::execute()
{
    if (_callFunc)
    {
        (_selectorTarget->*_callFunc)();
    } 
    else if( _function )
    {
        _function();
    }
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
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    void ClippingRectangleNode::onAfterVisitScissor()
{
    if (_clippingEnabled)
    {
        glDisable(GL_SCISSOR_TEST);
    }
}
    
    /**
@brief Clipping Rectangle Node.
@details A node that clipped with specified rectangle.
 The region of ClippingRectangleNode doesn't support any transform except scale.
@js NA
*/
class CC_DLL ClippingRectangleNode : public Node
{    
public:
    /**
    @brief Create node with specified clipping region.
    @param clippingRegion Specify the clipping rectangle.
    @return If the creation success, return a pointer of ClippingRectangleNode; otherwise return nil.
    */
    static ClippingRectangleNode* create(const Rect& clippingRegion);
    /**
    @brief Create a clipping rectangle node.
    @return If the creation success, return a pointer of ClippingRectangleNode; otherwise return nil.
    */
    static ClippingRectangleNode* create();
    
    /**
    @brief Get the clipping rectangle.
    @return The clipping rectangle.
    */
    const Rect& getClippingRegion() const {
        return _clippingRegion;
    }
    /**
    @brief Set the clipping rectangle.
    @param clippingRegion Specify the clipping rectangle.
    */
    void setClippingRegion(const Rect& clippingRegion);
    
    /**
    @brief Get whether the clipping is enabled or not.
    @return Whether the clipping is enabled or not. Default is true.
    */
    bool isClippingEnabled() const {
        return _clippingEnabled;
    }
    }