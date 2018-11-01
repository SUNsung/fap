
        
        #endif // BITCOIN_QT_TRANSACTIONDESCDIALOG_H

    
    static SECP256K1_INLINE void secp256k1_ge_storage_cmov(secp256k1_ge_storage *r, const secp256k1_ge_storage *a, int flag) {
    secp256k1_fe_storage_cmov(&r->x, &a->x, flag);
    secp256k1_fe_storage_cmov(&r->y, &a->y, flag);
}
    
    #include 'univalue.h'
    
    // Multiply-included file, no traditional include guard.
#include <string>
    
    
namespace nwapi {
    }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
          // strip off data uri header if raw is set
      if (!(data.raw.get() && *(data.raw))) {
        if (data.type == TYPE_PNG && base::StartsWith(content, kPNGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kPNGDataUriPrefix));
        } else if (data.type == TYPE_JPEG && base::StartsWith(content, kJPEGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kJPEGDataUriPrefix));
        } else {
          error_ = base::StringPrintf('Invalid data URI. Only \'%s\' or \'%s\' is accepted.', kPNGDataUriPrefix, kJPEGDataUriPrefix);
          return false;
        }
      }
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    
    {
} // namespace extensions

    
    
    {}  // namespace tesseract.
    
    int os_detect_blobs(const GenericVector<int>* allowed_scripts,
                    BLOBNBOX_CLIST* blob_list,
                    OSResults* osr,
                    tesseract::Tesseract* tess);
    
    /**
 * Returns the bounding rectangle of the current object at the given level in
 * coordinates of the original image.
 * See comment on coordinate system above.
 * Returns false if there is no such object at the current position.
 */
bool PageIterator::BoundingBox(PageIteratorLevel level,
                               int* left, int* top,
                               int* right, int* bottom) const {
  return BoundingBox(level, 0, left, top, right, bottom);
}
    
    
/**********************************************************************
 * join_words
 *
 * The opposite of split_word():
 *  join word2 (including any recognized data / seam array / etc)
 *  onto the right of word and then delete word2.
 *  Also, if orig_bb is provided, stitch it back into word.
 **********************************************************************/
void Tesseract::join_words(WERD_RES *word,
                           WERD_RES *word2,
                           BlamerBundle *orig_bb) const {
  TBOX prev_box = word->chopped_word->blobs.back()->bounding_box();
  TBOX blob_box = word2->chopped_word->blobs[0]->bounding_box();
  // Tack the word2 outputs onto the end of the word outputs.
  word->chopped_word->blobs += word2->chopped_word->blobs;
  word->rebuild_word->blobs += word2->rebuild_word->blobs;
  word2->chopped_word->blobs.clear();
  word2->rebuild_word->blobs.clear();
  TPOINT split_pt;
  split_pt.x = (prev_box.right() + blob_box.left()) / 2;
  split_pt.y = (prev_box.top() + prev_box.bottom() +
                blob_box.top() + blob_box.bottom()) / 4;
  // Move the word2 seams onto the end of the word1 seam_array.
  // Since the seam list is one element short, an empty seam marking the
  // end of the last blob in the first word is needed first.
  word->seam_array.push_back(new SEAM(0.0f, split_pt));
  word->seam_array += word2->seam_array;
  word2->seam_array.truncate(0);
  // Fix widths and gaps.
  word->blob_widths += word2->blob_widths;
  word->blob_gaps += word2->blob_gaps;
  // Fix the ratings matrix.
  int rat1 = word->ratings->dimension();
  int rat2 = word2->ratings->dimension();
  word->ratings->AttachOnCorner(word2->ratings);
  ASSERT_HOST(word->ratings->dimension() == rat1 + rat2);
  word->best_state += word2->best_state;
  // Append the word choices.
  *word->raw_choice += *word2->raw_choice;
    }
    
        template <typename ElementType>
    void LearnerMomentumSGD::Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, 
                                    const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const
    {
        GET_WRITABLE_MATRICES;
        /*
        Let
            u_t = \beta_1 u_{t-1} + \bar{\beta_1}  g_t 
        With our scaling, the correct momentum update rule should be: 
        \begin{itemize}
        \item For classic momentum SGD, $\bar{\beta_1} = 1$
        \item For unit gain momentum SGD, $\bar{\beta_1} = 1 - \beta_1$
        \end{itemize}
        The model update at time step $t$  is
        \begin{align}
        w_{t+1} &= w_{t} - \eta u_{t} \\
        &= w_{t} - \bar{\beta_1} \sum_{j=1}^t \beta_1^{t - j} \sum_{x_i \in B_j} \frac{\eta}{M}\nabla_{w_{t}} l(w_{t}, x_i)\\
        &= w_0 -  \sum_{k=0}^{T}[j(T) - j(k) + 1]\frac{\eta  \bar{\beta_1} \beta_1^{j(T) - j(k)} }{M}  \nabla_{w} l(w_{j(k)}, x_k)   \\
        &= w_0 -  \sum_{k=0}^{T}(\lfloor \frac{T - k}{M} \rfloor + 1)\frac{\eta  \bar{\beta_1} \beta_1^{j(T) - j(k)} }{M}  \nabla_{w} l(w_{j(k)}, x_k)       \\
        &= w_0 -  \sum_{k=0}^{T}(\lfloor \frac{T - k}{M} \rfloor + 1)\beta_1^{\lfloor \frac{T - k}{M} \rfloor}  \left[\frac{\eta  \bar{\beta_1} }{M}  \nabla_{w} l(w_{j(k)}, x_k) \right]
        \end{align}
        As a result, for variable size minibatches we can see the momentum can be expressed as: 
        \begin{align}
            u_t &=  \sum_{k=1}^{T}\frac{1}{|B_{j(k)}|} \bar{\beta_1} \left[\prod_{l=1}^{j(T) - j(k)}(\beta_1^{\frac{|B_{j(K)}|}{M}})\right]  \nabla_{w} l(w_{j(k)}, x_k)
        \end{align}
        Therefore,  we can adjust the momentum $\beta_1$ designed for minibatch size $M$ adapting to the encountered individual minibatch $B_j$ as the following:
        \begin{align}
            \beta_j &=  \beta_1 ^{\frac{|B_j|}{M}}
        \end{align}
        *Note that the \beta_1 should not be scaled according to the minibatch size for the unit gain factor*.
        */
        const auto learningRate = ElementType(LearningRate(trainingSampleCount));
        const auto momentum = ElementType(MomentumValueForMB(trainingSampleCount));
        const auto unitGainFactor = UnitGainFactor<ElementType>(trainingSampleCount);
        parameterMatrix->MomentumSGDUpdate(*gradientMatrix, *smoothedGradientMatrix,
                                           learningRate, momentum, unitGainFactor);
    }
    
            LearnerFSAdaGrad(const std::vector<Parameter>& parameters,
                         const LearningRateSchedule& learningRateSchedule,
                         const MomentumSchedule& momentumSchedule,
                         bool unitGain,
                         const MomentumSchedule& varianceMomentumSchedule,
                         AdditionalLearningOptions additionalOptions);
    
    
    {            return { m_packedData->GetMatrix<ElementType>(), m_packedDataLayout };
        }
    
    //SupportsDistributedMBRead - Tells if the reader supports distributed minibatch reading for parallel training
bool DataReader::SupportsDistributedMBRead() const
{
    bool supportsDistributedMBRead = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        auto currReaderIter = m_dataReaders.find(m_ioNames[i]);
        assert(currReaderIter != m_dataReaders.end());
    }
    }
    
    using namespace std;
    
    const static set<wstring> nodeGroupNames{ L'feature', L'label', L'criterion', L'evaluation', L'output' };
    
        virtual void CopyTo(ComputationNodeBasePtr nodeP, const std::wstring& newName, const CopyNodeFlags flags) const override
    {
        Base::CopyTo(nodeP, newName, flags);
        if (flags & CopyNodeFlags::copyNodeValue)
        {
            auto node = dynamic_pointer_cast<DiagTimesNode<ElemType>>(nodeP);
            node->m_innerproduct->SetValue(*m_innerproduct);
            node->m_rightGradient->SetValue(*m_rightGradient);
        }
    }
    // request matrices that are needed for gradient computation
    virtual void RequestMatricesBeforeBackprop(MatrixPool& matrixPool)
    {
        Base::RequestMatricesBeforeBackprop(matrixPool);
        RequestMatrixFromPool(m_innerproduct, matrixPool);
        RequestMatrixFromPool(m_rightGradient, matrixPool);
    }
    
    
    {  std::unique_ptr<RateLimiter> low_pri_rate_limiter_;
};
    
      Status Append(const Slice& data) override { 
    AlignedBuffer buf;
    Status status;
    Slice dataToAppend(data); 
    if (data.size() > 0) {
      auto offset = file_->GetFileSize(); // size including prefix
      // Encrypt in cloned buffer
      buf.Alignment(GetRequiredBufferAlignment());
      buf.AllocateNewBuffer(data.size());
      memmove(buf.BufferStart(), data.data(), data.size());
      status = stream_->Encrypt(offset, buf.BufferStart(), data.size());
      if (!status.ok()) {
        return status;
      }
      dataToAppend = Slice(buf.BufferStart(), data.size());
    }
    status = file_->Append(dataToAppend); 
    if (!status.ok()) {
      return status;
    }
    return status;
  }
    
    #include <atomic>
#include <map>
#include <string>
#include <vector>
#include 'rocksdb/env.h'
#include 'rocksdb/status.h'
#include 'port/port.h'
#include 'util/mutexlock.h'
    
    
    {  // Add new data and corrupt it
  ASSERT_OK(writable_file->Append(kCorrupted));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size() + kCorrupted.size());
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kCorrupted), 0);
  // Corrupted
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_NE(result.compare(kCorrupted), 0);
}
    
      ////////////////////////////////////////////////////////
  //
  // 'Repeatable Read' (Snapshot Isolation) Example
  //   -- Using a single Snapshot
  //
  ////////////////////////////////////////////////////////
    
    #endif // BOOST_ATOMIC_FENCES_HPP_INCLUDED_
