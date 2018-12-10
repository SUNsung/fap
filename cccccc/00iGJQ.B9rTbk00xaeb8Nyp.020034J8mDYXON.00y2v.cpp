
        
        const Vec2& PointArray::getControlPointAtIndex(ssize_t index) const
{
    index = MIN(static_cast<ssize_t>(_controlPoints.size())-1, MAX(index, 0));
    return _controlPoints.at(index);
}
    
    /** @class Show
* @brief Show the node.
**/
class CC_DLL Show : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return  An autoreleased Show object.
     */
    static Show * create();
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    #include '2d/CCActionGrid3D.h'
    
    bool Animation::initWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    _delayPerUnit = delay;
    _loops = loops;
    }
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    
    {    switch (version) {
        case 1:
            parseVersion1(animations.asValueMap());
            break;
        case 2:
            parseVersion2(animations.asValueMap());
            break;
        default:
            CCASSERT(false, 'Invalid animation format');
    }
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
                    
            case 8:
            case 10:
            case 11:
                /* going DOWN with these cases:
                 8          10          11
                 +---+---+  +---+---+   +---+---+
                 |   |   |  |   | 2 |   | 1 | 2 |
                 +---+---+  +---+---+   +---+---+
                 |   | 8 |  |   | 8 |   |   | 8 |
                 +---+---+  +---+---+  	+---+---+
                 */
                stepx = 0;
                stepy = 1;
                break;