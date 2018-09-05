
        
        namespace parallel {
    }
    
    #endif

    
    //////////////////////////////////////////////////////////////////////
    
    PlainDirectory::PlainDirectory(const String& path) {
  m_dir = ::opendir(path.data());
}
    
    inline void* ExecutionContext::operator new(size_t /*s*/, void* p) {
  return p;
}
    
    //////////////////////////////////////////////////////////////////////
    
    template <class Action>
bool runRelative(std::string suffix, String cmd,
                 const char* currentDir, Action action) {
  suffix = '/' + suffix;
  auto cwd = resolve_include(
    cmd,
    currentDir,
    [] (const String& f, void*) { return access(f.data(), R_OK) == 0; },
    nullptr
  );
  if (cwd.isNull()) return false;
  do {
    cwd = f_dirname(cwd);
    auto const f = String::attach(
      StringData::Make(cwd.data(), suffix.data())
    );
    if (action(f)) return true;
  } while (!cwd.empty() && !cwd.equal(s_slash));
  return false;
}
    
      // insert new ones
  while ((e = readdir(dsrc))) {
    string fdest = dest + e->d_name;
    if (access(fdest.c_str(), F_OK) < 0) {
      Logger::Info('sync: updating %s', fdest.c_str());
      if (keepSrc) {
        ssystem((string('cp -R ') + src + e->d_name + ' ' + dest).c_str());
      } else {
        rename((src + e->d_name).c_str(), (dest + e->d_name).c_str());
      }
    }
  }
    
    /** @class Follow
 * @brief Follow is an action that 'follows' a node.
 * Eg:
 * @code
 * layer->runAction(Follow::create(hero));
 * @endcode
 * Instead of using Camera as a 'follower', use this action instead.
 * @since v0.99.2
 */
class CC_DLL Follow : public Action
{
public:
    /**
     * Creates the action with a set boundary or with no boundary.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
    */
    
    static Follow* create(Node *followedNode, const Rect& rect = Rect::ZERO);
    
    /**
     * Creates the action with a set boundary or with no boundary with offsets.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
     * @param xOffset The horizontal offset from the center of the screen from which the
     *               node  is to be followed.It can be positive,negative or zero.If
     *               set to zero the node will be horizontally centered followed.
     *  @param yOffset The vertical offset from the center of the screen from which the
     *                 node is to be followed.It can be positive,negative or zero.
     *                 If set to zero the node will be vertically centered followed.
     *   If both xOffset and yOffset are set to zero,then the node will be horizontally and vertically centered followed.
     */
    }
    
    
    {    delete action;
    return nullptr;
}
    
    bool ProgressTo::initWithDuration(float duration, float percent)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _to = percent;
    }
    }
    
    
NS_CC_END

    
     Another example: ScaleTo action could be rewritten using PropertyAction:
    
    AnimationFrame::~AnimationFrame()
{    
    CCLOGINFO( 'deallocing AnimationFrame: %p', this);
    }
    
            animation = Animation::create(frames, delay, 1);
    
    void AtlasNode::updateOpacityModifyRGB()
{
    _isOpacityModifyRGB = _textureAtlas->getTexture()->hasPremultipliedAlpha();
}
    
    
    {};
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    namespace guetzli {
    }
    
    #include <stdint.h>