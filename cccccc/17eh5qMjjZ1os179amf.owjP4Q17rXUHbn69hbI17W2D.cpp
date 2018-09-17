
        
         protected:
  // content::ContentClient:
  std::string GetProduct() const override;
  std::string GetUserAgent() const override;
  base::string16 GetLocalizedString(int message_id) const override;
  void AddAdditionalSchemes(Schemes* schemes) override;
  void AddPepperPlugins(
      std::vector<content::PepperPluginInfo>* plugins) override;
  void AddContentDecryptionModules(
      std::vector<content::CdmInfo>* cdms,
      std::vector<media::CdmHostFilePath>* cdm_host_file_paths) override;
    
    #include 'base/stl_util.h'
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include <set>
#include <string>
    
    DownloadItem::DownloadItem(v8::Isolate* isolate,
                           download::DownloadItem* download_item)
    : download_item_(download_item) {
  download_item_->AddObserver(this);
  Init(isolate);
  AttachAsUserData(download_item);
}
    
    #include 'atom/browser/api/trackable_object.h'
#include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'ui/base/accelerators/accelerator.h'
    
    #if defined(OS_MACOSX)
// static
mate::Handle<InAppPurchase> InAppPurchase::Create(v8::Isolate* isolate) {
  return mate::CreateHandle(isolate, new InAppPurchase(isolate));
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(LabelButton);
};
    
    void NwCurrentWindowInternalCapturePageInternalFunction::CopyFromBackingStoreComplete(
    const SkBitmap& bitmap) {
  if (!bitmap.drawsNothing()) {
    OnCaptureSuccess(bitmap);
    return;
  }
  OnCaptureFailure(FAILURE_REASON_UNKNOWN);
}
    
    
namespace nwapi {
    }
    
    #include 'content/nw/src/api/menu/menu.h'
    
    class NwObjDestroyFunction : public NWSyncExtensionFunction {
 public:
  NwObjDestroyFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
      int num_spatial_axes_;
  int bottom_dim_;
  int top_dim_;
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    namespace caffe {
    }
    
    #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
    /**
 * Returns the bounding rectangle of the current object at the given level in
 * the coordinates of the working image that is pix_binary().
 * See comment on coordinate system above.
 * Returns false if there is no such object at the current position.
 */
bool PageIterator::BoundingBoxInternal(PageIteratorLevel level,
                                       int* left, int* top,
                                       int* right, int* bottom) const {
  if (Empty(level))
    return false;
  TBOX box;
  PARA *para = nullptr;
  switch (level) {
    case RIL_BLOCK:
      box = it_->block()->block->restricted_bounding_box(include_upper_dots_,
                                                         include_lower_dots_);
      break;
    case RIL_PARA:
      para = it_->row()->row->para();
      // explicit fall-through.
    case RIL_TEXTLINE:
      box = it_->row()->row->restricted_bounding_box(include_upper_dots_,
                                                     include_lower_dots_);
      break;
    case RIL_WORD:
      box = it_->word()->word->restricted_bounding_box(include_upper_dots_,
                                                       include_lower_dots_);
      break;
    case RIL_SYMBOL:
      if (cblob_it_ == nullptr)
        box = it_->word()->box_word->BlobBox(blob_index_);
      else
        box = cblob_it_->data()->bounding_box();
  }
  if (level == RIL_PARA) {
    PageIterator other = *this;
    other.Begin();
    do {
      if (other.it_->block() &&
          other.it_->block()->block == it_->block()->block &&
          other.it_->row() && other.it_->row()->row &&
          other.it_->row()->row->para() == para) {
        box = box.bounding_union(other.it_->row()->row->bounding_box());
      }
    } while (other.Next(RIL_TEXTLINE));
  }
  if (level != RIL_SYMBOL || cblob_it_ != nullptr)
    box.rotate(it_->block()->block->re_rotation());
  // Now we have a box in tesseract coordinates relative to the image rectangle,
  // we have to convert the coords to a top-down system.
  const int pix_height = pixGetHeight(tesseract_->pix_binary());
  const int pix_width = pixGetWidth(tesseract_->pix_binary());
  *left = ClipToRange(static_cast<int>(box.left()), 0, pix_width);
  *top = ClipToRange(pix_height - box.top(), 0, pix_height);
  *right = ClipToRange(static_cast<int>(box.right()), *left, pix_width);
  *bottom = ClipToRange(pix_height - box.bottom(), *top, pix_height);
  return true;
}
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    
    {  while ((n > 0) && reqd_len < full_length) {
    reqd_len += strcspn(next_word, '_') + 1;
    next_word += reqd_len;
    n--;
  }
  strncpy(t, s, reqd_len);
  t[reqd_len] = '\0';            // ensure null terminal
}
    
    /**
 * @name tess_segment_pass_n
 *
 * Segment a word using the pass_n conditions of the tess segmenter.
 * @param pass_n pass number
 * @param word word to do
 */
    
    std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new CronetChannelCredentialsImpl(engine));
}
    
    AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    namespace grpc {
    }
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
      for (auto& t : workers) t.join();
    
    using Peephole = ConcatPeephole;
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    #include <memory>
    
      /**
   * Fill up vector with summary information.
   */
  virtual void debuggerInfo(InfoVec& /*info*/) {}
    
    #endif

    
        void NDArrayView::SetValue(float16 value)
    {
        if (IsSparse())
            LogicError('NDArrayView::SetValue: Setting a NDArrayView contents to a scalar is only allowed for objects with dense storage format.');
    }
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
    public:
    CrossProcessMutex(const std::string& name)
        : m_handle(NULL),
          m_name('Global\\' + name)
    {
    }
    
    void DataReader::CopyMBLayoutTo(MBLayoutPtr pMBLayout)
{
    // BUGBUG: This copies all data reader's layout info on top of each other, keeping only the last one; likely not what was intended.
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->CopyMBLayoutTo(pMBLayout);
}
    
            if (isFinalValidationPass)
        {
            if (!Input(0)->GetSampleLayout().IsElementwiseCompatibleWith(Input(1)->GetSampleLayout()) || !Input(0)->GetSampleLayout().IsElementwiseCompatibleWith(Input(2)->GetSampleLayout()))
                InvalidArgument('PerDimMeanVarNormalizationNode: All inputs should have same sample layout.');
        }
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }