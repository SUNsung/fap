
        
            void NDMask::MarkSectionAs(const std::vector<size_t>& sectionOffset, const NDShape& sectionShape, MaskKind maskKind)
    {
        // TODO: Implement batching of masking operation for masks residing on GPUs to avoid making
        // GPU invocations for each MaskSection call.
    }
    
        ProgressWriter::~ProgressWriter()
    {
    }
    
            // before version 1, there was no distributed state per se. Instead, the external state
        // contained a dictionary of worker-specific external states.
        if (version == 0)
        {
            auto key = externalState.Contains(localWorkerId) ? localWorkerId : mainWorkerId;
            return externalState[key].Value<Dictionary>();
        }
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
        ParameterInitializer RandomInitializerWithRank(const ParameterInitializer& initializer, int outputRank, int filterRank)
    {
        ParameterInitializer newInitializerWithRanks = initializer;
    }
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
    
    {        for (int t = iNumPos - 1; t > 0; t--)
        {
            lastlbl = (size_t) backtrace(lastlbl, t);
            decodedpath(lastlbl, t - 1) = 1;
        }
    };
    
    template <class ElemType>
class EyeLikeNode : public ComputationNode<ElemType>, public NumInputs<1>
{
    typedef ComputationNode<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'EyeLikeOp'; }
public:
    DeclareConstructorFromConfigWithNumInputs(EyeLikeNode);
    EyeLikeNode(DEVICEID_TYPE deviceId, const wstring& name)
        : EyeLikeNode(deviceId, name, false)
    {
    }
    }
    
      static Data& getMutableData6() { return data6_; }
    
    namespace aria2 {
    }
    
    
    {  void serialize(const std::string& filename);
};
    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    DHTTokenTracker::DHTTokenTracker()
{
  util::generateRandomData(secret_[0], SECRET_SIZE);
  memcpy(secret_[1], secret_[0], SECRET_SIZE);
}
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    Action::Action()
:_originalTarget(nullptr)
,_target(nullptr)
,_tag(Action::INVALID_TAG)
,_flags(0)
{
#if CC_ENABLE_SCRIPT_BINDING
    ScriptEngineProtocol* engine = ScriptEngineManager::getInstance()->getScriptEngine();
    _scriptType = engine != nullptr ? engine->getScriptType() : kScriptTypeNone;
#endif
}
    
    /** @class FiniteTimeAction
 * @brief
 * Base class actions that do have a finite time duration.
 * Possible actions:
 * - An action with a duration of 0 seconds.
 * - An action with a duration of 35.5 seconds.
 * Infinite time actions are valid.
 */
class CC_DLL FiniteTimeAction : public Action
{
public:
    /** Get duration in seconds of the action. 
     *
     * @return The duration in seconds of the action.
     */
    float getDuration() const { return _duration; }
    /** Set duration in seconds of the action. 
     *
     * @param duration In seconds of the action.
     */
    void setDuration(float duration) { _duration = duration; }
    }
    
    
    {    /** Reverse the current control point array inline, without generating a new one.
     * @js NA
     */
    void reverseInline();
    /**
     * @js NA
     * @lua NA
     */
    virtual PointArray* clone() const;
    /**
     * @js NA
     */
    const std::vector<Vec2>& getControlPoints() const;
    /**
     * @js NA
     */
    void setControlPoints(std::vector<Vec2> controlPoints);
private:
    /** Array that contains the control points. */
    std::vector<Vec2> _controlPoints;
};
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    /**
 * @class ActionFloat
 * @brief Action used to animate any value in range [from,to] over specified time interval
 */
class CC_DLL ActionFloat : public ActionInterval
{
public:
    /**
     *  Callback function used to report back result
     */
    typedef std::function<void(float value)> ActionFloatCallback;
    }
    
    
    {                    Action *action = _currentTarget->currentAction;
                    // Make currentAction nil to prevent removeAction from salvaging it.
                    _currentTarget->currentAction = nullptr;
                    removeAction(action);
                }
    
    // implementation of FadeOutUpTiles
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    http://www.cocos2d-x.org
    
    
/**
 * AutoPolygon is a helper Object
 * AutoPolygon's purpose is to process an image into 2d polygon mesh in runtime
 * It has functions for each step in the process, from tracing all the points, to triangulation
 * the result can be then passed to Sprite::create() to create a Polygon Sprite
 */
class CC_DLL AutoPolygon
{
public:
    /**
     * create an AutoPolygon and initialize it with an image file
     * the image must be a 32bit PNG for current version 3.7
     * @param   filename    a path to image file, e.g., 'scene1/monster.png'.
     * @return  an AutoPolygon object;
     */
    AutoPolygon(const std::string &filename);
    
    /**
     * Destructor of AutoPolygon.
     */
    ~AutoPolygon();
    
    /**
     * trace all the points along the outline of the image, 
     * @warning must create AutoPolygon with filename to use this function
     * @param   rect    a texture rect for specify an area of the image
     * @param   threshold   the value when alpha is greater than this value will be counted as opaque, default to 0.0
     * @return  a vector of vec2 of all the points found in clockwise order
     * @code
     * auto ap = AutoPolygon('grossini.png');
     * auto rect = Rect(100, 100, 200, 200);
     * std::vector<Vec2> points = ap.trace(rect);//default threshold is 0.0
     * @endcode
     */
     std::vector<Vec2> trace(const cocos2d::Rect& rect, float threshold = 0.0f);
    
    /**
     * reduce the amount of points so its faster for GPU to process and draw
     * based on Ramer-Douglas-Peucker algorithm
     * @param   points  a vector of Vec2 points as input
     * @param   rect    a texture rect for specify an area of the image to avoid over reduction
     * @param   epsilon the perpendicular distance where points smaller than this value will be discarded
     * @return  a vector of Vec2 of the remaining points in clockwise order
     * @code
     * auto ap = AutoPolygon();
     * std::vector<Vec2> reduced = ap.reduce(inputPoints, rect);//default epsilon is 2
     * @endcode
     */
    std::vector<Vec2> reduce(const std::vector<Vec2>& points, const Rect& rect, float epsilon = 2.0f);
    
    /**
     * expand the points along their edge, useful after you reduce the points that cuts into the sprite
     * using ClipperLib
     * @param   points  a vector of Vec2 points as input
     * @param   rect    a texture rect for specify an area of the image, the expanded points will be clamped in this rect, ultimately resulting in a quad if the expansion is too great
     * @param   epsilon the distance which the edges will expand
     * @return  a vector of Vec2 as the result of the expansion
     * @code
     * auto ap = AutoPolygon();
     * std::vector<Vec2> expanded = ap.expand(inputPoints, rect, 2.0);
     * @endcode
     */
    std::vector<Vec2> expand(const std::vector<Vec2>& points, const Rect& rect, float epsilon);
    
    /**
     * Triangulate the input points into triangles for rendering
     * using poly2tri
     * @warning points must be closed loop, cannot have 2 points sharing the same position and cannot intersect itself
     * @param   points  a vector of vec2 points as input
     * @return  a Triangles object with points and indices
     * @code
     * auto ap = AutoPolygon();
     * TrianglesCommand::Triangles myPolygons = ap.triangulate(myPoints);
     * @endcode
     */
    TrianglesCommand::Triangles triangulate(const std::vector<Vec2>& points);
    
    /**
     * calculate the UV coordinates for each points based on a texture rect
     * @warning This method requires the AutoPolygon object to know the texture file dimension
     * @param   rect    a texture rect to specify where to map the UV
     * @param   verts   a pointer to the verts array, served both as input and output verts
     * @param   count   the count for the verts array
     * @code
     * auto ap = AutoPolygon('grossini.png');
     * TrianglesCommand::Triangles myPolygons = ap.triangulate(myPoints);
     * ap.calculateUV(rect, myPolygons.verts, 20);
     * @endcode
     */
    void calculateUV(const Rect& rect, V3F_C4B_T2F* verts, ssize_t count);
    
    /**
     * a helper function, packing trace, reduce, expand, triangulate and calculate uv in one function
     * @param   rect    texture rect, use Rect::ZERO for the size of the texture, default is Rect::ZERO
     * @param   epsilon the value used to reduce and expand, default to 2.0
     * @param   threshold   the value where bigger than the threshold will be counted as opaque, used in trace
     * @return  a PolygonInfo, to use with sprite
     * @code
     * auto ap = AutoPolygon('grossini.png');
     * PolygonInfo myInfo = ap.generateTriangles();//use all default values
     * auto sp1 = Sprite::create(myInfo);
     * polygonInfo myInfo2 = ap.generateTriangles(Rect::ZERO, 5.0, 0.1);//ap can be reused to generate another set of PolygonInfo with different settings
     * auto sp2 = Sprite::create(myInfo2);
     * @endcode
     */
    PolygonInfo generateTriangles(const Rect& rect = Rect::ZERO, float epsilon = 2.0f, float threshold = 0.05f);
    
    /**
     * a helper function, packing autoPolygon creation, trace, reduce, expand, triangulate and calculate uv in one function
     * @warning if you want to repetitively generate polygons, consider create an AutoPolygon object, and use generateTriangles function, as it only reads the file once
     * @param   filename     A path to image file, e.g., 'scene1/monster.png'.
     * @param   rect    texture rect, use Rect::ZERO for the size of the texture, default is Rect::ZERO
     * @param   epsilon the value used to reduce and expand, default to 2.0
     * @param   threshold   the value where bigger than the threshold will be counted as opaque, used in trace
     * @return  a PolygonInfo, to use with sprite
     * @code
     * auto sp = Sprite::create(AutoPolygon::generatePolygon('grossini.png'));
     * @endcode
     */
    static PolygonInfo generatePolygon(const std::string& filename, const Rect& rect = Rect::ZERO, float epsilon = 2.0f, float threshold = 0.05f);
protected:
    Vec2 findFirstNoneTransparentPixel(const Rect& rect, float threshold);
    std::vector<cocos2d::Vec2> marchSquare(const Rect& rect, const Vec2& first, float threshold);
    unsigned int getSquareValue(unsigned int x, unsigned int y, const Rect& rect, float threshold);
    }