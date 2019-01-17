
        
        namespace nwapi {
    }
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
}
    
      // Map point from document to screen.
  gfx::Point screen_point(x, y);
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnDeallocateObject(id);
  return true;
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodSyncFunction);
};
    
    bool b2Triangle::IsInside(float32 _x, float32 _y){
	if (_x < x[0] && _x < x[1] && _x < x[2]) return false;
	if (_x > x[0] && _x > x[1] && _x > x[2]) return false;
	if (_y < y[0] && _y < y[1] && _y < y[2]) return false;
	if (_y > y[0] && _y > y[1] && _y > y[2]) return false;
		
		float32 vx2 = _x-x[0]; float32 vy2 = _y-y[0];
		float32 vx1 = x[1]-x[0]; float32 vy1 = y[1]-y[0];
		float32 vx0 = x[2]-x[0]; float32 vy0 = y[2]-y[0];
		
		float32 dot00 = vx0*vx0+vy0*vy0;
		float32 dot01 = vx0*vx1+vy0*vy1;
		float32 dot02 = vx0*vx2+vy0*vy2;
		float32 dot11 = vx1*vx1+vy1*vy1;
		float32 dot12 = vx1*vx2+vy1*vy2;
		float32 invDenom = 1.0f / (dot00*dot11 - dot01*dot01);
		float32 u = (dot11*dot02 - dot01*dot12)*invDenom;
		float32 v = (dot00*dot12 - dot01*dot02)*invDenom;
		
		return ((u>=0)&&(v>=0)&&(u+v<=1));    
}
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    	// ----------------------------------------------------------------------------------------------------
	// try version 1 of the degenerate search
	// degenerate encodings use basecolor movement and a subset of the selectors to find useful encodings
	// each subsequent version of the degenerate search uses more basecolor movement and is less likely to
	//		be successfull
	//
	void Block4x4Encoding_ETC1::TryDegenerates1(void)
	{
    }
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /* Compute Normalized Line Spectral Frequencies (NLSFs) from whitening filter coefficients      */
/* If not all roots are found, the a_Q16 coefficients are bandwidth expanded until convergence. */
void silk_A2NLSF(
    opus_int16                  *NLSF,              /* O    Normalized Line Spectral Frequencies in Q15 (0..2^15-1) [d] */
    opus_int32                  *a_Q16,             /* I/O  Monic whitening filter coefficients in Q16 [d]              */
    const opus_int              d                   /* I    Filter order (must be even)                                 */
);
    
    Speed* Speed::create(ActionInterval* action, float speed)
{
    Speed *ret = new (std::nothrow) Speed();
    if (ret && ret->initWithAction(action, speed))
    {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
         * For example:
     * - 0 Means that the action just started.
     * - 0.5 Means that the action is in the middle.
     * - 1 Means that the action is over.
     *
     * @param time A value between 0 and 1.
     */
    virtual void update(float time);
    /** Return certain target.
     *
     * @return A certain target.
     */
    Node* getTarget() const { return _target; }
    /** The action will modify the target properties. 
     *
     * @param target A certain target.
     */
    void setTarget(Node *target) { _target = target; }
    /** Return a original Target. 
     *
     * @return A original Target.
     */
    Node* getOriginalTarget() const { return _originalTarget; }
    /** 
     * Set the original target, since target can be nil.
     * Is the target that were used to run the action. Unless you are doing something complex, like ActionManager, you should NOT call this method.
     * The target is 'assigned', it is not 'retained'.
     * @since v0.8.2
     *
     * @param originalTarget Is 'assigned', it is not 'retained'.
     */
    void setOriginalTarget(Node *originalTarget) { _originalTarget = originalTarget; }
    /** Returns a tag that is used to identify the action easily. 
     *
     * @return A tag.
     */
    int getTag() const { return _tag; }
    /** Changes the tag that is used to identify the action easily. 
     *
     * @param tag Used to identify the action easily.
     */
    void setTag(int tag) { _tag = tag; }
    /** Returns a flag field that is used to group the actions easily.
     *
     * @return A tag.
     */
    unsigned int getFlags() const { return _flags; }
    /** Changes the flag field that is used to group the actions easily.
     *
     * @param flags Used to group the actions easily.
     */
    void setFlags(unsigned int flags) { _flags = flags; }
    
        float x = _eye.x - _center.x;
    float y = _eye.y - _center.y;
    float z = _eye.z - _center.z;
    
    void AccelAmplitude::update(float time)
{
    ((AccelAmplitude*)(_other))->setAmplitudeRate(powf(time, _rate));
    _other->update(time);
}
    
    bool __CCCallFuncND::initWithTarget(Ref* selectorTarget, SEL_CallFuncND selector, void* d)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _data = d;
        _callFuncND = selector;
        return true;
    }
    
    return false;
}
    
    // FIXME: Passing 'const O *' instead of 'const O&' because HASH_FIND_IT requires the address of a pointer
// and, it is not possible to get the address of a reference
ssize_t ActionManager::getNumberOfRunningActionsInTarget(const Node *target) const
{
    tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        return element->actions ? element->actions->num : 0;
    }
    }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
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
    
    PolygonInfo::PolygonInfo(const PolygonInfo& other)
: triangles()
, _isVertsOwner(true)
, _rect()
{
    _filename = other._filename;
    _isVertsOwner = true;
    _rect = other._rect;
    triangles.verts = new (std::nothrow) V3F_C4B_T2F[other.triangles.vertCount];
    triangles.indices = new (std::nothrow) unsigned short[other.triangles.indexCount];
    CCASSERT(triangles.verts && triangles.indices, 'not enough memory');
    triangles.vertCount = other.triangles.vertCount;
    triangles.indexCount = other.triangles.indexCount;
    memcpy(triangles.verts, other.triangles.verts, other.triangles.vertCount * sizeof(other.triangles.verts[0]));
    memcpy(triangles.indices, other.triangles.indices, other.triangles.indexCount * sizeof(other.triangles.indices[0]));
};