
        
        using namespace OPENEXR_IMF_INTERNAL_NAMESPACE;
    
    #include <ImfFramesPerSecond.h>
#include 'ImathFun.h'
    
        OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, magic);
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, version);
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    
void
Header::setType(const string& type)
{
    if (isSupportedType(type) == false)
    {
        throw IEX_NAMESPACE::ArgExc (type + 'is not a supported image type.' +
                           'The following are supported: ' +
                           SCANLINEIMAGE + ', ' +
                           TILEDIMAGE + ', ' +
                           DEEPSCANLINE + ' or ' +
                           DEEPTILE + '.');
    }
    }
    
    
void	
InputFile::Data::deleteCachedBuffer()
{
    //
    // Delete the cached frame buffer, and all memory
    // allocated for the slices in the cached frameBuffer.
    //
    }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
      DVLOG(1) << 'remote::AllocateObject(routing_id=' << routing_id << ', object_id=' << object_id << ')';
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    #endif

    
    ELISTIZE(PARA)
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
      // Free up any currently unused dawgs.
  void DeleteUnusedDawgs() {
    dawgs_.DeleteUnusedObjects();
  }
    
    bool OrbitCamera::initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    if ( ActionInterval::initWithDuration(t) )
    {
        _radius = radius;
        _deltaRadius = deltaRadius;
        _angleZ = angleZ;
        _deltaAngleZ = deltaAngleZ;
        _angleX = angleX;
        _deltaAngleX = deltaAngleX;
    }
    }
    
    #ifndef __CCCAMERA_ACTION_H__
#define __CCCAMERA_ACTION_H__
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, waves, amplitude, horizontal, vertical))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
    NS_CC_BEGIN
    
    static bool sendComponentEventToJS(Component* node, int action)
{
    auto scriptEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    
    if (scriptEngine->isCalledFromScript())
    {
        scriptEngine->setCalledFromScript(false);
    }
    else
    {
        BasicScriptData data(node,(void*)&action);
        ScriptEvent scriptEvent(kComponentEvent,(void*)&data);
        if (scriptEngine->sendEvent(&scriptEvent))
            return true;
    }
    
    return false;
}
    
     * It adds support for the TMX tiled map format used by http://www.mapeditor.org.
 * It supports isometric, hexagonal and orthogonal tiles.
 * It also supports object groups, objects, and properties.
    
    /// @cond DO_NOT_SHOW