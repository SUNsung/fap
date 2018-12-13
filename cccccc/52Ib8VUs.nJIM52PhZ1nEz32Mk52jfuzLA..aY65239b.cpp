
        
        void AutoUpdater::OnUpdateDownloaded(const std::string& release_notes,
                                     const std::string& release_name,
                                     const base::Time& release_date,
                                     const std::string& url) {
  Emit('update-downloaded', release_notes, release_name, release_date, url,
       // Keep compatibility with old APIs.
       base::Bind(&AutoUpdater::QuitAndInstall, base::Unretained(this)));
}
    
    namespace atom {
    }
    
    
    {}  // namespace atom
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto* download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result =
      web_contents_->SavePage(full_path, saved_main_directory_path, save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    
    {}  // namespace atom

    
    void AutoUpdater::SetFeedURL(mate::Arguments* args) {}
    
      // There is a new update which has been downloaded.
  virtual void OnUpdateDownloaded(const std::string& release_notes,
                                  const std::string& release_name,
                                  const base::Time& release_date,
                                  const std::string& update_url) {}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
      // Debugger function that renders the blobs in part_grid_ over the input
  // image.
  void PaintSpecialTexts(const STRING& outfile) const;
    
    
    {}  // namespace tesseract.
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    template<>
void SetDataGradToBlob<mshadow::gpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_gpu_diff(data_ptr);
}
    
    // Declare Memory Type for Caffe blob
enum caffeMemoryTypes {Data, Grad, Non};
    
    
    { private:
  mutable CaffeOpParam param_;
  mutable ::caffe::Layer<float> *caffeOp_;
};  // class CaffeOpSymbol
#endif
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(h, w, c == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(top+h+bot, left+w+right, c == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::copyMakeBorder(buf, dst, top, bot, left, right, type, cv::Scalar(value));
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}

    
    #include './exec_pass.h'
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
    /*!
 * \brief tblob batch
 *
 * data are stored in tblob before going into NDArray
 */
struct TBlobBatch {
 public:
  /*! \brief unique id for instance, can be NULL, sometimes is useful */
  unsigned *inst_index;
  /*! \brief number of instance */
  mshadow::index_t batch_size;
  /*! \brief number of padding elements in this batch,
       this is used to indicate the last elements in the batch are only padded up to match the batch, and should be discarded */
  mshadow::index_t num_batch_padd;
  /*! \brief content of dense data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief constructor */
  TBlobBatch(void) {
    inst_index = NULL;
    batch_size = 0; num_batch_padd = 0;
  }
  /*! \brief destructor */
  ~TBlobBatch() {
    delete[] inst_index;
  }
};  // struct TBlobBatch
    
      virtual void BeforeFirst(void) {
    if (param_.round_batch == 0 || num_overflow_ == 0) {
      // otherise, we already called before first
      base_->BeforeFirst();
    } else {
      num_overflow_ = 0;
    }
    head_ = 1;
  }
    
        template <>
    /*static*/ NDArrayViewPtr NDArrayView::RandomNormal<int8_t>(const NDShape& shape, double mean, double stdDev, unsigned long seed, const DeviceDescriptor& device)
    {
        return NDArrayView::_RandomNormal<int8_t, char>(shape, mean, stdDev, seed, device);
    }
    
            static bool IsUDF(const Dictionary& dict);
    
        template <typename ElementType>
    /*static*/ ValuePtr Value::CreateBatch(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        //TODO: avoid data copy.
        std::vector<std::vector<size_t>> input(batchData.size());
        for (size_t i = 0; i < batchData.size(); i++)
        {
            input[i] = {batchData[i]};
        }
        // Pass the empty seqStartFlags means all sequences have the start flag with true.
        return Create<ElementType>(dimension, input, {}, device, readOnly);
    }
    
        void Start();
    void Stop();
    void Restart();
    
    #include <memory>
#include <deque>
#include <set>
#include <string>
    
        virtual void UpdateFunctionMBSize() override
    {
        Base::UpdateFunctionMBSize();
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */