
        
        void BrowserView::Init(v8::Isolate* isolate,
                       v8::Local<v8::Object> wrapper,
                       const mate::Dictionary& options) {
  mate::Dictionary web_preferences = mate::Dictionary::CreateEmpty(isolate);
  options.Get(options::kWebPreferences, &web_preferences);
  web_preferences.Set('isBrowserView', true);
  mate::Handle<class WebContents> web_contents =
      WebContents::Create(isolate, web_preferences);
    }
    
    namespace api {
    }
    
    class Menu : public mate::TrackableObject<Menu>,
             public AtomMenuModel::Delegate,
             public AtomMenuModel::Observer {
 public:
  static mate::WrappableBase* New(mate::Arguments* args);
    }
    
    #include 'atom/browser/api/atom_api_net.h'
#include 'atom/browser/api/atom_api_url_request.h'
#include 'atom/common/node_includes.h'
#include 'native_mate/dictionary.h'
    
    #include 'atom/browser/render_process_preferences.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_common_screen, Initialize)

    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Event);
};
    
    /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    #ifndef BITCOIN_REVERSELOCK_H
#define BITCOIN_REVERSELOCK_H
    
    #include <script/script.h>
    
        /* RFC6979 3.2.d. */
    secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
    secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
    secp256k1_hmac_sha256_write(&hmac, zero, 1);
    secp256k1_hmac_sha256_write(&hmac, key, keylen);
    secp256k1_hmac_sha256_finalize(&hmac, rng->k);
    secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
    secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
    secp256k1_hmac_sha256_finalize(&hmac, rng->v);
    
        secp256k1_context_set_error_callback(tctx, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(tctx, counting_illegal_callback_fn, &ecount);
    CHECK(secp256k1_ec_pubkey_create(tctx, &point, s_one) == 1);
    
    BOOST_AUTO_TEST_SUITE_END()

    
    const std::string& UniValue::get_str() const
{
    if (typ != VSTR)
        throw std::runtime_error('JSON value is not a string as expected');
    return getValStr();
}
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    class ObjectManager;
    
    NwAppClearAppCacheFunction::NwAppClearAppCacheFunction() {
}
    
        bool ReadImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::vector<unsigned char> encoded_image;
      SkBitmap bitmap = clipboard_->ReadImage(ui::CLIPBOARD_TYPE_COPY_PASTE);
    }
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenIsMonitorStartedFunction);
  };
    
    A common use case is with the DeconvolutionLayer acting as upsampling.
You can upsample a feature map with shape of (B, C, H, W) by any integer factor
using the following proto.
\code
layer {
  name: 'upsample', type: 'Deconvolution'
  bottom: '{{bottom_name}}' top: '{{top_name}}'
  convolution_param {
    kernel_size: {{2 * factor - factor % 2}} stride: {{factor}}
    num_output: {{C}} group: {{C}}
    pad: {{ceil((factor - 1) / 2.)}}
    weight_filler: { type: 'bilinear' } bias_term: false
  }
  param { lr_mult: 0 decay_mult: 0 }
}
\endcode
Please use this by replacing `{{}}` with your values. By specifying
`num_output: {{C}} group: {{C}}`, it behaves as
channel-wise convolution. The filter shape of this deconvolution layer will be
(C, 1, K, K) where K is `kernel_size`, and this filler will set a (K, K)
interpolation kernel for every channel of the filter identically. The resulting
shape of the top feature map will be (B, C, factor * H, factor * W).
Note that the learning rate and the
weight decay are set to 0 in order to keep coefficient values of bilinear
interpolation unchanged during training. If you apply this to an image, this
operation is equivalent to the following call in Python with Scikit.Image.
\code{.py}
out = skimage.transform.rescale(img, factor, mode='constant', cval=0)
\endcode
 */
template <typename Dtype>
class BilinearFiller : public Filler<Dtype> {
 public:
  explicit BilinearFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK_EQ(blob->num_axes(), 4) << 'Blob must be 4 dim.';
    CHECK_EQ(blob->width(), blob->height()) << 'Filter must be square';
    Dtype* data = blob->mutable_cpu_data();
    int f = ceil(blob->width() / 2.);
    Dtype c = (blob->width() - 1) / (2. * f);
    for (int i = 0; i < blob->count(); ++i) {
      Dtype x = i % blob->width();
      Dtype y = (i / blob->width()) % blob->height();
      data[i] = (1 - fabs(x / f - c)) * (1 - fabs(y / f - c));
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      /**
   * @brief Adjust the shapes of top blobs and internal buffers to accommodate
   *        the shapes of the bottom blobs.
   *
   * @param bottom the input blobs, with the requested input shapes
   * @param top the top blobs, which should be reshaped as needed
   *
   * This method should reshape top blobs as needed according to the shapes
   * of the bottom (input) blobs, as well as reshaping any internal buffers
   * and making any other necessary adjustments so that the layer can
   * accommodate the bottom blobs.
   */
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) = 0;
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    
    {  Blob<Dtype> transformed_data_;
};
    
    /**
 * @brief Normalizes the input to have 0-mean and/or unit (1) variance across
 *        the batch.
 *
 * This layer computes Batch Normalization as described in [1]. For each channel
 * in the data (i.e. axis 1), it subtracts the mean and divides by the variance,
 * where both statistics are computed across both spatial dimensions and across
 * the different examples in the batch.
 *
 * By default, during training time, the network is computing global
 * mean/variance statistics via a running average, which is then used at test
 * time to allow deterministic outputs for each input. You can manually toggle
 * whether the network is accumulating or using the statistics via the
 * use_global_stats option. For reference, these statistics are kept in the
 * layer's three blobs: (0) mean, (1) variance, and (2) moving average factor.
 *
 * Note that the original paper also included a per-channel learned bias and
 * scaling factor. To implement this in Caffe, define a `ScaleLayer` configured
 * with `bias_term: true` after each `BatchNormLayer` to handle both the bias
 * and scaling factor.
 *
 * [1] S. Ioffe and C. Szegedy, 'Batch Normalization: Accelerating Deep Network
 *     Training by Reducing Internal Covariate Shift.' arXiv preprint
 *     arXiv:1502.03167 (2015).
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class BatchNormLayer : public Layer<Dtype> {
 public:
  explicit BatchNormLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    #include <vector>
    
    
    {    return nullptr;
}
    
    
    {    if (element->actions->num == 0)
    {
        if (_currentTarget == element)
        {
            _currentTargetSalvaged = true;
        }
        else
        {
            deleteHashElement(element);
        }
    }
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
    
    {    return false;
}
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
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
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    /** @class AnimationFrame
 *
 * A frame of the animation. It contains information like:
 * - sprite frame name.
 * - # of delay units.
 * - offset
 
 @since v2.0
 */
class CC_DLL AnimationFrame : public Ref, public Clonable
{
public:
    /** @struct DisplayedEventInfo
     * When the animation display,Dispatches the event of UserData.
     */
    struct DisplayedEventInfo
    {
        Node* target;
        const ValueMap* userInfo;
    };
    
    /**
     * Creates the animation frame with a spriteframe, number of delay units and a notification user info.
     *
     * @param spriteFrame The animation frame with a spriteframe.
     * @param delayUnits Number of delay units.
     * @param userInfo A notification user info.
     * @since 3.0
     */
    static AnimationFrame* create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    /** Return a SpriteFrameName to be used.
     *
     * @return a SpriteFrameName to be used.
     */
    SpriteFrame* getSpriteFrame() const { return _spriteFrame; };
    /** Set the SpriteFrame.
     *
     * @param frame A SpriteFrame will be used.
     */
    void setSpriteFrame(SpriteFrame* frame)
    {
        CC_SAFE_RETAIN(frame);
        CC_SAFE_RELEASE(_spriteFrame);
        _spriteFrame = frame;
    }
    }
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);