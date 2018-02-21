
        
        IPC_MESSAGE_ROUTED4(ShellViewHostMsg_Call_Object_Method,
                    int /* object id */,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope handle_scope(isolate);
    }
    
    namespace nwapi {
    }
    
    namespace blink {
class WebFrame;
class WebURLRequest;
class WebView;
}
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    
    {  *icon = item->icon_;
  return true;
}
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
    void MenuItem::SetIconIsTemplate(bool isTemplate) {
}
    
    namespace nw {
    }
    
    using namespace extensions::nwapi::nw__app;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
          if (bitmap.isNull()) {
        return true;
      }
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
    
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
    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef __UNIX__
#include          <assert.h>
#endif
#include          <ctype.h>
#include          <string.h>
#include          'tessbox.h'
#include          'tessvars.h'
#include          'memry.h'
#include          'reject.h'
#include          'control.h'
#include          'stopper.h'
#include          'tesseractclass.h'
    
    // Fits a line to the points, ignoring the skip_first initial points and the
// skip_last final points, returning the fitted line as a pair of points,
// and the upper quartile error.
double DetLineFit::Fit(int skip_first, int skip_last,
                       ICOORD* pt1, ICOORD* pt2) {
  // Do something sensible with no points.
  if (pts_.empty()) {
    pt1->set_x(0);
    pt1->set_y(0);
    *pt2 = *pt1;
    return 0.0;
  }
  // Count the points and find the first and last kNumEndPoints.
  int pt_count = pts_.size();
  ICOORD* starts[kNumEndPoints];
  if (skip_first >= pt_count) skip_first = pt_count - 1;
  int start_count = 0;
  int end_i = MIN(skip_first + kNumEndPoints, pt_count);
  for (int i = skip_first; i < end_i; ++i) {
    starts[start_count++] = &pts_[i].pt;
  }
  ICOORD* ends[kNumEndPoints];
  if (skip_last >= pt_count) skip_last = pt_count - 1;
  int end_count = 0;
  end_i = MAX(0, pt_count - kNumEndPoints - skip_last);
  for (int i = pt_count - 1 - skip_last; i >= end_i; --i) {
    ends[end_count++] = &pts_[i].pt;
  }
  // 1 or 2 points need special treatment.
  if (pt_count <= 2) {
    *pt1 = *starts[0];
    if (pt_count > 1)
      *pt2 = *ends[0];
    else
      *pt2 = *pt1;
    return 0.0;
  }
  // Although with between 2 and 2*kNumEndPoints-1 points, there will be
  // overlap in the starts, ends sets, this is OK and taken care of by the
  // if (*start != *end) test below, which also tests for equal input points.
  double best_uq = -1.0;
  // Iterate each pair of points and find the best fitting line.
  for (int i = 0; i < start_count; ++i) {
    ICOORD* start = starts[i];
    for (int j = 0; j < end_count; ++j) {
      ICOORD* end = ends[j];
      if (*start != *end) {
        ComputeDistances(*start, *end);
        // Compute the upper quartile error from the line.
        double dist = EvaluateLineFit();
        if (dist < best_uq || best_uq < 0.0) {
          best_uq = dist;
          *pt1 = *start;
          *pt2 = *end;
        }
      }
    }
  }
  // Finally compute the square root to return the true distance.
  return best_uq > 0.0 ? sqrt(best_uq) : best_uq;
}
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
    
/**********************************************************************
 * LLSQ::pearson
 *
 * Return the pearson product moment correlation coefficient.
 **********************************************************************/
    
    // Transforms the given coords one step forward to normalized space, without
// using any block rotation or predecessor.
void DENORM::LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  LocalNormTransform(src_pt, &float_result);
  transformed->x = IntCastRounded(float_result.x());
  transformed->y = IntCastRounded(float_result.y());
}
void DENORM::LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const {
  FCOORD translated(pt.x() - x_origin_, pt.y() - y_origin_);
  if (x_map_ != NULL && y_map_ != NULL) {
    int x = ClipToRange(IntCastRounded(translated.x()), 0, x_map_->size()-1);
    translated.set_x((*x_map_)[x]);
    int y = ClipToRange(IntCastRounded(translated.y()), 0, y_map_->size()-1);
    translated.set_y((*y_map_)[y]);
  } else {
    translated.set_x(translated.x() * x_scale_);
    translated.set_y(translated.y() * y_scale_);
    if (rotation_ != NULL)
      translated.rotate(*rotation_);
  }
  transformed->set_x(translated.x() + final_xshift_);
  transformed->set_y(translated.y() + final_yshift_);
}
    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != NULL)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
    
    {  m_total_bytes_read -= m_in_buf_left;
}
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p3_lfe,&_huff_book__44p3_lfe,
   &_resbook_44p_l3,&_resbook_44p_l3}
};
static const vorbis_residue_template _res_44p51_4[]={
  {2,0,15,  &_residue_44p,
   &_huff_book__44p4_short,&_huff_book__44p4_short,
   &_resbook_44p_4,&_resbook_44p_4},
    
    
    {  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__44u5__long,&_huff_book__44u5__long,
   &_resbook_44u_5,&_resbook_44u_5}
};
    
    
#if !defined(FFT_ARM_H)
#define FFT_ARM_H
    
    #undef MULT16_32_P16
static inline int MULT16_32_P16(int a, int b)
{
    int c;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR_R.W %0,$ac1, %1' : '=r' (c): 'i' (16));
    return c;
}
    
    
    {    /* Convert to Qres domain */
    lshift = 61 - b_headrm - Qres;
    if( lshift <= 0 ) {
        return silk_LSHIFT_SAT32(result, -lshift);
    } else {
        if( lshift < 32){
            return silk_RSHIFT(result, lshift);
        }else{
            /* Avoid undefined result */
            return 0;
        }
    }
}