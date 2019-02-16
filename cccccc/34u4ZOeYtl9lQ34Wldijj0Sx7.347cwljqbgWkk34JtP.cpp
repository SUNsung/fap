
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
      // Get the camel-case words in the name and type name.
  auto nameWords = camel_case::getWords(name);
  auto typeWords = camel_case::getWords(typeName.Name);
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    void AutolinkExtractJobAction::anchor() {}
    
    namespace caffe2 {
    }
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    )DOC')
    .Arg(
        'values',
        '*(type depends on dtype, Required=True)* The value of the elements to go in the *output* tensor.',
        true /* required */)
    .Arg(
        'dtype',
        'The data type for the elements of the output tensor. Strictly must be one of the types from DataType enum in TensorProto.')
    .Arg(
        'shape',
        '*(type: [int])* Desired shape of the *output* tensor.')
    .Arg(
        'extra_shape',
        '*(type: [int])* The additional dimensions appended at the end of the *shape* indicated by the input blob. Cannot set the *extra_shape* argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '*(type: bool; default: False)* set to *True* to use the *input* as shape. First, input must be in CPU context.')
    .Input(
        0,
        'input',
        '(Optional) 1D tensor specifying the shape of the output. Must be used with *input_as_shape=True*')
    .Output(
        0,
        'output',
        'Output tensor with desired dimension filled with specified data. If the shape argument is set, this is the shape specified, and if the *input* exists and *input_as_shape=True*, it is the shape specified by the *input* tensor.')
    .TensorInferenceFunction(FillerTensorInference<>);
    
    OPERATOR_SCHEMA(Col2Im).NumInputs(2).NumOutputs(1);
    
    TEST(AutoCompactTest, ReadAll) {
  DoReads(kCount);
}
    
    
    {  Corrupt(kTableFile, 100, 1);
  RepairDB();
  Reopen();
  Check(95, 99);
}
    
    // If true, do not destroy the existing database.  If you set this
// flag and also specify a benchmark that wants a fresh database, that
// benchmark will fail.
static bool FLAGS_use_existing_db = false;
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    static std::string MakeFileName(const std::string& dbname, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return dbname + buf;
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type);
    
      typedef SkipList<const char*, KeyComparator> Table;
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    public:
  DHTTokenTracker();
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      virtual void process() CXX11_OVERRIDE;
    
    protected:
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    SplitCols* SplitCols::create(float duration, unsigned int cols)
{
    SplitCols *action = new (std::nothrow) SplitCols();
    }
    
    bool ActionTween::initWithDuration(float duration, const std::string& key, float from, float to)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _key    = key;
        _to       = to;
        _from     = from;
        return true;
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
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__
    
    
    {};
    
    
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