
        
          /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
    void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  cache_set_and_retain(static_cast<cache_t*>(Impl), Key, Value, Cost);
}
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    void PrefixMapKeyPrinter<unsigned char>::print(raw_ostream &out,
                                               ArrayRef<unsigned char> key) {
  out << '\'';
  for (auto byte : key) {
    if (byte < 16) out << '0';
    out.write_hex(byte);
  }
  out << '\'';
}

    
    
    
    bool Punycode::encodePunycode(const std::vector<uint32_t> &InputCodePoints,
                              std::string &OutPunycode) {
  OutPunycode.clear();
    }
    
    void JobAction::anchor() {}
    
      PyObjectStruct* get() const { return ptr_; }
    
    namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
    void ImmutableExtensionLiteGenerator::Generate(io::Printer* printer) {
  std::map<string, string> vars;
  const bool kUseImmutableNames = true;
  InitTemplateVars(descriptor_, scope_, kUseImmutableNames, name_resolver_,
                   &vars);
  printer->Print(vars,
      'public static final int $constant_name$ = $number$;\n');
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
      desired_output_for_decode = 'abcdefghIJ';
  expected = string('\x0A\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    class GeneratorResponseContext : public GeneratorContext {
 public:
  GeneratorResponseContext(
      const Version& compiler_version,
      CodeGeneratorResponse* response,
      const std::vector<const FileDescriptor*>& parsed_files)
      : compiler_version_(compiler_version),
        response_(response),
        parsed_files_(parsed_files) {}
  virtual ~GeneratorResponseContext() {}
    }
    
    class DynamicMessageTest : public ::testing::TestWithParam<bool> {
 protected:
  DescriptorPool pool_;
  DynamicMessageFactory factory_;
  const Descriptor* descriptor_;
  const Message* prototype_;
  const Descriptor* extensions_descriptor_;
  const Message* extensions_prototype_;
  const Descriptor* packed_descriptor_;
  const Message* packed_prototype_;
  const Descriptor* oneof_descriptor_;
  const Message* oneof_prototype_;
  const Descriptor* proto3_descriptor_;
  const Message* proto3_prototype_;
    }
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    
    {}  // namespace caffe
    
    template <typename Dtype>
class BasePrefetchingDataLayer :
    public BaseDataLayer<Dtype>, public InternalThread {
 public:
  explicit BasePrefetchingDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden.
  void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #endif  // CAFFE_BIAS_LAYER_HPP_

    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    //
// Follow
//
Follow::~Follow()
{
    CC_SAFE_RELEASE(_followedNode);
}
    
    EaseRateAction* EaseRateAction::create(ActionInterval* action, float rate)
{
    CCASSERT(action != nullptr, 'action cannot be nullptr!');
    }
    
    void Lens3D::update(float /*time*/)
{
    if (_dirty)
    {
        int i, j;
        
        for (i = 0; i < _gridSize.width + 1; ++i)
        {
            for (j = 0; j < _gridSize.height + 1; ++j)
            {
                Vec3 v = getOriginalVertex(Vec2(i, j));
                Vec2 vect = _position - Vec2(v.x, v.y);
                float r = vect.getLength();
                
                if (r < _radius)
                {
                    r = _radius - r;
                    float pre_log = r / _radius;
                    if ( pre_log == 0 ) 
                    {
                        pre_log = 0.001f;
                    }
    }
    }
    }
    }
    }
    
        if (ret && ret->init(isNeedCleanUp))
    {
        ret->autorelease();
    }
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    #endif /* __CCACTIONTWEEN_H__ */
    
        CCASSERT( !dict.empty(), 'CCAnimationCache: File could not be found');
    if (dict.empty()) {
        log('AnimationCache::addAnimationsWithFile error:%s not exist!', plist.c_str());
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
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }