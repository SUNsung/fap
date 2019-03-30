
        
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
   * @brief Sets the loss associated with a top blob at a given index.
   */
  inline void set_loss(const int top_index, const Dtype value) {
    if (loss_.size() <= top_index) {
      loss_.resize(top_index + 1, Dtype(0));
    }
    loss_[top_index] = value;
  }
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    			if(mip == 0)
			{
				pImageData = a_pafSourceRGBA;
			}
			else
			{
				pMipImage = new float[mipWidth*mipHeight*4];
				if(FilterTwoPass(a_pafSourceRGBA, a_uiSourceWidth, a_uiSourceHeight, pMipImage, mipWidth, mipHeight, a_uiMipFilterFlags, Etc::FilterLanczos3) )
				{
					pImageData = pMipImage;
				}
			}
    
    	// ################################################################################
	// Block4x4EncodingBits_A8
	// Encoding bits for the A portion of RGBA8
	// ################################################################################
    
    /* Split signal in two decimated bands using first-order allpass filters */
void silk_ana_filt_bank_1(
    const opus_int16            *in,                /* I    Input signal [N]                                            */
    opus_int32                  *S,                 /* I/O  State vector [2]                                            */
    opus_int16                  *outL,              /* O    Low band [N/2]                                              */
    opus_int16                  *outH,              /* O    High band [N/2]                                             */
    const opus_int32            N                   /* I    Number of input samples                                     */
);
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
      void getBuckets(std::vector<std::shared_ptr<DHTBucket>>& buckets) const;
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;
    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    #include <memory>