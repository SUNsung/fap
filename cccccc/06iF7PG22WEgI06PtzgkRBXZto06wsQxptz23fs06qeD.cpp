
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #include 'content/nw/src/api/base/base.h'
    
    base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
      ui::KeyboardCode keyval = ui::VKEY_UNKNOWN;
    
     protected:
  ~NwAppGetArgvSyncFunction() override;
    
    #include 'intsimdmatrix.h'
#include 'genericvector.h'      // for GenericVector
#include 'intsimdmatrixavx2.h'  // for IntSimdMatrixAVX2
#include 'intsimdmatrixsse.h'   // for IntSimdMatrixSSE
#include 'matrix.h'             // for GENERIC_2D_ARRAY
#include 'simddetect.h'         // for SIMDDetect
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    class TESS_API PageIterator {
 public:
  /**
   * page_res and tesseract come directly from the BaseAPI.
   * The rectangle parameters are copied indirectly from the Thresholder,
   * via the BaseAPI. They represent the coordinates of some rectangle in an
   * original image (in top-left-origin coordinates) and therefore the top-left
   * needs to be added to any output boxes in order to specify coordinates
   * in the original image. See TessBaseAPI::SetRectangle.
   * The scale and scaled_yres are in case the Thresholder scaled the image
   * rectangle prior to thresholding. Any coordinates in tesseract's image
   * must be divided by scale before adding (rect_left, rect_top).
   * The scaled_yres indicates the effective resolution of the binary image
   * that tesseract has been given by the Thresholder.
   * After the constructor, Begin has already been called.
   */
  PageIterator(PAGE_RES* page_res, Tesseract* tesseract,
               int scale, int scaled_yres,
               int rect_left, int rect_top,
               int rect_width, int rect_height);
  virtual ~PageIterator();
    }
    
    template <typename T> class GenericVector;
    
    
  fp = fopen (filename, 'wb');  // can we write to it?
  if (fp == nullptr) {
    sv_window_->AddMessage(
        'Can't write to file '
        '%s'
        '',
        filename);
    return;
  }
    
    // A rather hackish helper structure which can take any kind of parameter input
// (defined by ParamType) and do a couple of common operations on them, like
// comparisond or getting its value. It is used in the context of the
// ParamsEditor as a bridge from the internal tesseract parameters to the
// ones displayed by the ScrollView server.
class ParamContent : public ELIST_LINK {
 public:
  // Compare two VC objects by their name.
  static int Compare(const void* v1, const void* v2);
    }
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }