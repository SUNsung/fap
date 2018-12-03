
        
        namespace atom {
    }
    
    namespace api {
    }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_IN_APP_PURCHASE_H_

    
     protected:
  RenderProcessPreferences(
      v8::Isolate* isolate,
      const atom::RenderProcessPreferences::Predicate& predicate);
  ~RenderProcessPreferences() override;
    
    void Event::SetSenderAndMessage(content::RenderFrameHost* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
      void InitWith(v8::Isolate* isolate, v8::Local<v8::Object> wrapper) override {
    WrappableBase::InitWith(isolate, wrapper);
    if (!weak_map_) {
      weak_map_ = new atom::KeyWeakMap<int32_t>;
    }
    weak_map_->Set(isolate, weak_map_id_, wrapper);
  }
    
      if (!BrowserThread::PostTask(BrowserThread::UI, FROM_HERE, task)) {
    // Without a UI thread to post the exit task to, there aren't many
    // options.  Raise the signal again.  The default handler will pick it up
    // and cause an ungraceful exit.
    RAW_LOG(WARNING, 'No UI thread, exiting ungracefully.');
    kill(getpid(), signal);
    }
    
    namespace atom {
    }
    
    public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
    
    {
    {        // Register the memory buffer.
        SML->registerMemoryBuffer(info.name, std::move(bitstream));
        foundModules.push_back(info.name);
      }
    } else {
      llvm::dbgs() << 'Unable to load module';
      if (!info.name.empty())
        llvm::dbgs() << ' '' << info.name << '\'';
      llvm::dbgs() << '.\n';
    }
    
    void CacheImpl::removeAll() {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
    
    {  return false;
}

    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    
    {} // namespace nwapi

    
    #include <map>
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
    
    {    private:
      DISALLOW_COPY_AND_ASSIGN(NwScreenGetScreensFunction);      
  };
    
    namespace CAROTENE_NS {
    }
    
    #include 'common.hpp'
    
                    if( d & 1 )
                {
                    s32 vt = v - threshold, count = 0;
    }
    
    #ifndef __ANDROID__
    typedef typename VecTraits<T, 3>::vec128 vec128;
#endif
    typedef typename VecTraits<T, 3>::vec64 vec64;
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
      // A light version of SplitCPHor: instead of really doing the part split, we
  // simply compute the union bounding box of each split part.
  void SplitCPHorLite(ColPartition* part, GenericVector<TBOX>* splitted_boxes);
    
    /**********************************************************************
 * recog_word
 *
 * Convert the word to tess form and pass it to the tess segmenter.
 * Convert the output back to editor form.
 **********************************************************************/
namespace tesseract {
void Tesseract::recog_word(WERD_RES *word) {
  if (wordrec_skip_no_truth_words && (word->blamer_bundle == nullptr ||
      word->blamer_bundle->incorrect_result_reason() == IRR_NO_TRUTH)) {
    if (classify_debug_level) tprintf('No truth for word - skipping\n');
    word->tess_failed = true;
    return;
  }
  ASSERT_HOST(!word->chopped_word->blobs.empty());
  recog_word_recursive(word);
  word->SetupBoxWord();
  if (word->best_choice->length() != word->box_word->length()) {
    tprintf('recog_word ASSERT FAIL String:\'%s\'; '
            'Strlen=%d; #Blobs=%d\n',
            word->best_choice->debug_string().string(),
            word->best_choice->length(), word->box_word->length());
  }
  ASSERT_HOST(word->best_choice->length() == word->box_word->length());
  // Check that the ratings matrix size matches the sum of all the
  // segmentation states.
  if (!word->StatesAllValid()) {
    tprintf('Not all words have valid states relative to ratings matrix!!');
    word->DebugWordChoices(true, nullptr);
    ASSERT_HOST(word->StatesAllValid());
  }
  if (tessedit_override_permuter) {
    /* Override the permuter type if a straight dictionary check disagrees. */
    uint8_t perm_type = word->best_choice->permuter();
    if ((perm_type != SYSTEM_DAWG_PERM) &&
        (perm_type != FREQ_DAWG_PERM) && (perm_type != USER_DAWG_PERM)) {
      uint8_t real_dict_perm_type = dict_word(*word->best_choice);
      if (((real_dict_perm_type == SYSTEM_DAWG_PERM) ||
           (real_dict_perm_type == FREQ_DAWG_PERM) ||
           (real_dict_perm_type == USER_DAWG_PERM)) &&
          (alpha_count(word->best_choice->unichar_string().string(),
                       word->best_choice->unichar_lengths().string()) > 0)) {
        word->best_choice->set_permuter(real_dict_perm_type);  // use dict perm
      }
    }
    if (tessedit_rejection_debug &&
        perm_type != word->best_choice->permuter()) {
      tprintf('Permuter Type Flipped from %d to %d\n',
              perm_type, word->best_choice->permuter());
    }
  }
  // Factored out from control.cpp
  ASSERT_HOST((word->best_choice == nullptr) == (word->raw_choice == nullptr));
  if (word->best_choice == nullptr || word->best_choice->length() == 0 ||
      static_cast<int>(strspn(word->best_choice->unichar_string().string(),
                              ' ')) == word->best_choice->length()) {
    word->tess_failed = true;
    word->reject_map.initialise(word->box_word->length());
    word->reject_map.rej_word_tess_failure();
  } else {
    word->tess_failed = false;
  }
}
    }
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    // This and other putatively are the same, so call the (permanent) callback
// for each blob index where the bounding boxes match.
// The callback is deleted on completion.
void BoxWord::ProcessMatchedBlobs(const TWERD& other,
                                  TessCallback1<int>* cb) const {
  for (int i = 0; i < length_ && i < other.NumBlobs(); ++i) {
    TBOX blob_box = other.blobs[i]->bounding_box();
    if (blob_box == boxes_[i])
      cb->Run(i);
  }
  delete cb;
}
    
    namespace tesseract {
    }
    
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
    
    PointArray* PointArray::create(ssize_t capacity)
{
    PointArray* pointArray = new (std::nothrow) PointArray();
    if (pointArray && pointArray->initWithCapacity(capacity))
    {
        pointArray->autorelease();
        return pointArray;
    }
    }
    
    
    {    delete ret;
    return nullptr;
}
    
    /** 
@brief Waves3D action.
@details This action is used for take effect on the target node as 3D waves.
        You can control the effect by these parameters:
        duration, grid size, waves count, amplitude.
*/
class CC_DLL Waves3D : public Grid3DAction
{
public:
    /**
    @brief Create an action with duration, grid size, waves and amplitude.
    @param duration Specify the duration of the Waves3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Waves3D action.
    @param amplitude Specify the amplitude of the Waves3D action.
    @return If the creation success, return a pointer of Waves3D action; otherwise, return nil.
    */
    static Waves3D* create(float duration, const Size& gridSize, unsigned int waves, float amplitude);
    }
    
    void ActionInstant::update(float /*time*/)
{
    _done = true;
}
    
    
    {// end of actions group
/// @}
    
        //
    // Overrides
    //
    virtual SkewTo* clone() const override;
    virtual SkewTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    SkewTo();
    virtual ~SkewTo() {}
    /**
     * @param t In seconds.
     */
    bool initWithDuration(float t, float sx, float sy);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(ProgressFromTo);
};
    
    CC_CONSTRUCTOR_ACCESS:
    FadeOutDownTiles() {}
    virtual ~FadeOutDownTiles() {}
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    
    {// end of sprite_nodes group
/// @}
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    Rect AutoPolygon::getRealRect(const Rect& rect)
{
    Rect realRect = rect;
    //check rect to see if its zero
    if(realRect.equals(Rect::ZERO))
    {
        //if the instance doesn't have width and height, then the whole operation is kaput
        CCASSERT(_height && _width, 'Please specify a width and height for this instance before using its functions');
        realRect = Rect(0,0, _width, _height);
    }
    else{
        //rect is specified, so convert to real rect
        realRect = CC_RECT_POINTS_TO_PIXELS(rect);
    }
    return realRect;
}