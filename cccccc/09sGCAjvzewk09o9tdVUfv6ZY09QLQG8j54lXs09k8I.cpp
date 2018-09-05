
        
        
    {
    { private:
  /*! \brief corresponding DLTensor of this TBlob */
  DLTensor dltensor_;
};
}  // namespace mxnet
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.cc
 * \brief Implementations of SetDataGradToBlob given various device/dimension
 * \author Haoran Wang
*/
#include 'caffe_blob.h'
namespace mxnet {
namespace op {
namespace caffe {
    }
    }
    }
    
    #include './exec_pass.h'
    
    void StopGrid::startWithTarget(Node *target)
{
    ActionInstant::startWithTarget(target);
    cacheTargetAsGridNode();
    GridBase *grid = _gridNodeTarget->getGrid();
    if (grid && grid->isActive())
    {
        grid->setActive(false);
    }
}
    
        /**
    @brief Initializes the action with center position, number of twirls, amplitude, a grid size and duration.
    @param duration Specify the duration of the Twirl action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param position Specify the center position of the twirl action.
    @param twirls Specify the twirls count of the Twirl action.
    @param amplitude Specify the amplitude of the Twirl action.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, const Vec2& position, unsigned int twirls, float amplitude);
    
    /** @class BezierBy
 * @brief An action that moves the target with a cubic Bezier curve by a certain distance.
 */
class CC_DLL BezierBy : public ActionInterval
{
public:
    /** Creates the action with a duration and a bezier configuration.
     * @param t Duration time, in seconds.
     * @param c Bezier config.
     * @return An autoreleased BezierBy object.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * in js: var create(var t,var table)
     * in lua: local create(local t, local table)
     * @endcode
     */
    static BezierBy* create(float t, const ccBezierConfig& c);
    }
    
        tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        if (ccArrayContainsObject(element->actions, element->currentAction) && (! element->currentActionSalvaged))
        {
            element->currentAction->retain();
            element->currentActionSalvaged = true;
        }
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    protected:
    float _to;
    float _from;
    
     @since v0.99.2
 */
class CC_DLL ActionTween : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the creation success, return a pointer of ActionTween; otherwise, return nil.
     */
    static ActionTween* create(float duration, const std::string& key, float from, float to);
    }
    
    
    {    // update duration
    _totalDelayUnits++;
}
    
        bool init(void);