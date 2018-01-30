
        
          void Compute(OpKernelContext* context) override LOCKS_EXCLUDED(mu_) {
    mutex_lock l(mu_);
    if (resource_ == nullptr) {
      ResourceMgr* mgr = context->resource_manager();
      OP_REQUIRES_OK(context, cinfo_.Init(mgr, def()));
    }
    }
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
    
      // Converts binary example labels from 0.0 or 1.0 to -1.0 or 1.0 respectively
  // as expected by smooth hinge loss.
  Status ConvertLabel(float* const example_label) const final {
    if (*example_label == 0.0) {
      *example_label = -1;
      return Status::OK();
    }
    if (*example_label == 1.0) {
      return Status::OK();
    }
    return errors::InvalidArgument(
        'Only labels of 0.0 or 1.0 are supported right now. '
        'Found example with label: ',
        *example_label);
  }
    
      // Polls the CUDA platform for the event's current status.
  Event::Status PollForStatus();
    
    Status RecordWriter::Close() {
#if !defined(IS_SLIM_BUILD)
  if (IsZlibCompressed(options_)) {
    Status s = dest_->Close();
    delete dest_;
    dest_ = nullptr;
    return s;
  }
#endif  // IS_SLIM_BUILD
  return Status::OK();
}
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
    // See docs in ../ops/io_ops.cc.
    
      // Compute the number of unichars in the label.
  GenericVector<UNICHAR_ID> encoding;
  if (!unicharset.encode_string(label, true, &encoding, NULL, NULL)) {
    tprintf('Not outputting illegal unichar %s\n', label);
    return;
  }
    
    void FullPageBlock(int width, int height, BLOCK_LIST *blocks) {
  BLOCK_IT block_it(blocks);
  BLOCK* block = new BLOCK('', TRUE, 0, 0, 0, 0, width, height);
  block_it.add_to_end(block);
}

    
    // A CostFunc that takes the variance of step into account in the cost.
inT64 DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == NULL || prev == this) {
    UpdateIfBetter(0, 1, NULL, 0, 0, 0);
    return 0;
  }
    }
    
    // Because it involves 2𝜃 , Eq 2 has 2 solutions 90 degrees apart, but which
// is the min and which is the max? From Eq1:
// E/N = Var(xi)sin²𝜃  - 2Covar(xi, yi)sin𝜃 cos𝜃  + Var(yi)cos²𝜃
// and 90 degrees away, using sin/cos equivalences:
// E'/N = Var(xi)cos²𝜃  + 2Covar(xi, yi)sin𝜃 cos𝜃  + Var(yi)sin²𝜃
// The second error is smaller (making it the minimum) iff
// E'/N < E/N ie:
// (Var(xi) - Var(yi))(cos²𝜃 - sin²𝜃) < -4Covar(xi, yi)sin𝜃 cos𝜃
// Using double angles:
// (Var(xi) - Var(yi))cos2𝜃  < -2Covar(xi, yi)sin2𝜃  (InEq 1)
// But atan2(2Covar(xi, yi), Var(xi) - Var(yi)) picks 2𝜃  such that:
// sgn(cos2𝜃) = sgn(Var(xi) - Var(yi)) and sgn(sin2𝜃) = sgn(Covar(xi, yi))
// so InEq1 can *never* be true, making the atan2 result *always* the min!
// In the degenerate case, where Covar(xi, yi) = 0 AND Var(xi) = Var(yi),
// the 2 solutions have equal error and the inequality is still false.
// Therefore the solution really is as trivial as Eq 3.
    
      // Calculate y-shift
  int bln_yshift = 0, bottom_shift = 0, top_shift = 0;
  if (bottom < min_bottom - tolerance) {
    bottom_shift = bottom - min_bottom;
  } else if (bottom > max_bottom + tolerance) {
    bottom_shift = bottom - max_bottom;
  }
  if (top < min_top - tolerance) {
    top_shift = top - min_top;
  } else if (top > max_top + tolerance) {
    top_shift = top - max_top;
  }
  if ((top_shift >= 0 && bottom_shift > 0) ||
      (top_shift < 0 && bottom_shift < 0)) {
    bln_yshift = (top_shift + bottom_shift) / 2;
  }
  *yshift = bln_yshift * yscale;
    
    // Refreshes the words in the block_list by using blobs in the
// new_blobs list.
// Block list must have word segmentation in it.
// It consumes the blobs provided in the new_blobs list. The blobs leftover in
// the new_blobs list after the call weren't matched to any blobs of the words
// in block list.
// The output not_found_blobs is a list of blobs from the original segmentation
// in the block_list for which no corresponding new blobs were found.
void RefreshWordBlobsFromNewBlobs(BLOCK_LIST* block_list,
                                  C_BLOB_LIST* new_blobs,
                                  C_BLOB_LIST* not_found_blobs);
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    
    {
    {
    {    /// return the value of an iterator
    reference value() const
    {
        auto it = --this->base();
        return it.operator * ();
    }
};
}
}

    
    namespace nlohmann
{
namespace detail
{
///////////////////////////
// JSON type enumeration //
///////////////////////////
    }
    }
    
    Unit FileToVector(const std::string &Path, size_t MaxSize = 0,
                  bool ExitOnError = true);
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir) {
  auto E = GetEpoch(Dir);
  if (Epoch)
    if (E && *Epoch >= E) return;
    }
    
      bool InFuzzingThread() const { return IsMyThread; }
  size_t GetCurrentUnitInFuzzingThead(const uint8_t **Data) const;
  void TryDetectingAMemoryLeak(const uint8_t *Data, size_t Size,
                               bool DuringInitialCorpusExecution);