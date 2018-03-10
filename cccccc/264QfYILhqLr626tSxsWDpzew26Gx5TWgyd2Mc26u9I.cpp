
        
        namespace nw {
    }
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #endif  // CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_

    
    DEFINE_string(backend, 'lmdb', 'The backend for storing the result');
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  int count_;
  int num_concats_;
  int concat_input_size_;
  int concat_axis_;
};
    
    #include <vector>
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    #include <vector>
    
        // version that calls dls 3 times, to avoid Cayley singularity
    for (int i = 0; i < 3; ++i)
    {
        // Make a random rotation
        cv::Mat pp = R_[i] * ( p - cv::repeat(mn, 1, p.cols) );
    }
    
    struct CV_EXPORTS IntrinsicParams
{
    Vec2d f;
    Vec2d c;
    Vec4d k;
    double alpha;
    std::vector<uchar> isEstimate;
    }
    
    void CV_ModelEstimator2_Test::fill_array( int test_case_idx, int i, int j, Mat& arr )
{
    if( i != INPUT )
    {
        cvtest::ArrayTest::fill_array( test_case_idx, i, j, arr );
        return;
    }
    }
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
    // Include automatically generated configuration file if running autoconf.
#ifdef HAVE_CONFIG_H
#include 'config_auto.h'
#endif
    
    
    {  int retry_leading = 0;
  int retry_trailing = 0;
  bool is_good = false;
  WERD_RES *revised = TrySuperscriptSplits(
      num_chopped_leading, leading_certainty, sp_leading,
      num_chopped_trailing, trailing_certainty, sp_trailing,
      word, &is_good, &retry_leading, &retry_trailing);
  if (is_good) {
    word->ConsumeWordResults(revised);
  } else if (retry_leading || retry_trailing) {
    int retry_chopped_leading =
        LeadingUnicharsToChopped(revised, retry_leading);
    int retry_chopped_trailing =
        TrailingUnicharsToChopped(revised, retry_trailing);
    WERD_RES *revised2 = TrySuperscriptSplits(
        retry_chopped_leading, leading_certainty, sp_leading,
        retry_chopped_trailing, trailing_certainty, sp_trailing,
        revised, &is_good, &retry_leading, &retry_trailing);
    if (is_good) {
      word->ConsumeWordResults(revised2);
    }
    delete revised2;
  }
  delete revised;
  return is_good;
}
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == NULL) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (inT16) x, (inT16) (ysize - y - height),
                         (inT16) (x + width), (inT16) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    // APPROXIMATIONS of the fractions of the character cell taken by
// the descenders, ascenders, and x-height.
const double CCStruct::kDescenderFraction = 0.25;
const double CCStruct::kXHeightFraction = 0.5;
const double CCStruct::kAscenderFraction = 0.25;
const double CCStruct::kXHeightCapRatio = CCStruct::kXHeightFraction /
    (CCStruct::kXHeightFraction + CCStruct::kAscenderFraction);
    
    
    {  tmp = xcoord * vec.x () - ycoord * vec.y ();
  ycoord = ycoord * vec.x () + xcoord * vec.y ();
  xcoord = tmp;
}
    
    // Transforms the given coords one step back to source space, without
// using to any block rotation or predecessor.
void DENORM::LocalDenormTransform(const TPOINT& pt, TPOINT* original) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  LocalDenormTransform(src_pt, &float_result);
  original->x = IntCastRounded(float_result.x());
  original->y = IntCastRounded(float_result.y());
}
void DENORM::LocalDenormTransform(const FCOORD& pt, FCOORD* original) const {
  FCOORD rotated(pt.x() - final_xshift_, pt.y() - final_yshift_);
  if (x_map_ != NULL && y_map_ != NULL) {
    int x = x_map_->binary_search(rotated.x());
    original->set_x(x + x_origin_);
    int y = y_map_->binary_search(rotated.y());
    original->set_y(y + y_origin_);
  } else {
    if (rotation_ != NULL) {
      FCOORD inverse_rotation(rotation_->x(), -rotation_->y());
      rotated.rotate(inverse_rotation);
    }
    original->set_x(rotated.x() / x_scale_ + x_origin_);
    float y_scale = y_scale_;
    original->set_y(rotated.y() / y_scale + y_origin_);
  }
}
    
      // Returns the bounding box including the desired combination of upper and
  // lower noise/diacritic elements.
  TBOX restricted_bounding_box(bool upper_dots, bool lower_dots) const;
    
    ELISTIZEH(PARA)
    
    
/**********************************************************************
 * ROW::ROW
 *
 * Constructor to build a ROW. Only the stats stuff are given here.
 * The words are added directly.
 **********************************************************************/