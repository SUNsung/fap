
        
        
    {}  // namespace atom

    
    namespace api {
    }
    
    class AtomBrowserContext;
    
    class AtomJavaScriptDialogManager : public content::JavaScriptDialogManager {
 public:
  explicit AtomJavaScriptDialogManager(api::WebContents* api_web_contents);
  ~AtomJavaScriptDialogManager() override;
    }
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    #if !defined(OS_MACOSX) || defined(MAS_BUILD)
std::string AutoUpdater::GetFeedURL() {
  return '';
}
    
    bool AboutProtocolHandler::IsSafeRedirectTarget(const GURL& location) const {
  return false;
}
    
    #endif  // ATOM_BROWSER_NET_ABOUT_PROTOCOL_HANDLER_H_

    
    class AsarProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  explicit AsarProtocolHandler(
      const scoped_refptr<base::TaskRunner>& file_task_runner);
  ~AsarProtocolHandler() override;
    }
    
    #include <string>
    
    #include 'ui/views/view.h'
    
    TegraCvtColor_Invoker(rgb2gray, rgb2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(bgr2gray, bgr2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2gray, rgbx2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                            dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(bgrx2gray, bgrx2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                            dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
#define TEGRA_CVTBGRTOGRAY(src_data, src_step, dst_data, dst_step, width, height, depth, scn, swapBlue) \
( \
    depth == CV_8U && CAROTENE_NS::isSupportedConfiguration() ? \
        scn == 3 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_bgr2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        scn == 4 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_bgrx2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    
    {        vs1 = vmla_f32(vget_low(vgamma), vs1, vget_low(valpha));
        vs1 = vmla_f32(vs1, vs2, vget_low(vbeta));
        v_dst = vcvt_s32_f32(vs1);
    }
    
    #define  VROW_LINE(type, n) const type * src##n = internal::getRowPtr(src##n##Base, src##n##Stride, i);
#define  PREF_LINE(type, n) internal::prefetch(src##n + sj);
#define VLD1Q_LINE(type, n) v_dst.val[n] = vld1q_##type(src##n + sj);
#define  PRLD_LINE(type, n) internal::prefetch(src##n + sj); v_dst.val[n] = vld1q_##type(src##n + sj);
#define  VLD1_LINE(type, n) v_dst.val[n] = vld1_##type(src##n + sj);
#define   SLD_LINE(type, n) dst[dj + n] = src##n[sj];
    
    f64 dotProduct(const Size2D &_size,
               const u8 * src0Base, ptrdiff_t src0Stride,
               const u8 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    namespace {
    }
    
    namespace CAROTENE_NS {
    }
    
        for (ptrdiff_t y = 0; y < height; ++y)
    {
        const u8 * srow0 = y == 0 && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::max<ptrdiff_t>(y - 1, 0));
        const u8 * srow1 = internal::getRowPtr(srcBase, srcStride, y);
        const u8 * srow2 = y + 1 == height && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::min(y + 1, height - 1));
        u8 * drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    #include <gtest/gtest.h>
    
    // TODO(thomasvl): Should probably add some unittests for all the special cases
// of name mangling (class name, field name, enum names).  Rather than doing
// this with an ObjC test in the objectivec directory, we should be able to
// use src/google/protobuf/compiler/importer* (like other tests) to support a
// virtual file system to feed in protos, once we have the Descriptor tree, the
// tests could use the helper methods for generating names and validate the
// right things are happening.
    
    void MapLiteTestUtil::ExpectMapFieldsSetInitialized(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsSetInitialized<unittest::MapEnumLite,
                                                 unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    bool Status::operator==(const Status& x) const {
  return error_code_ == x.error_code_ &&
      error_message_ == x.error_message_;
}
    
    using google::protobuf::io::FileOutputStream;
using google::protobuf::io::GzipOutputStream;
    
    namespace {
    }
    
     private:
  static bool IsMessageSet(const Descriptor *descriptor) {
    if (descriptor != nullptr
        && descriptor->options().message_set_wire_format()) {
      return true;
    }
    return false;
  }
    
    
  bool ReadProtoFromTextContent(const std::string& text,
                                ::google::protobuf::Message* proto) const {
    bool success = google::protobuf::TextFormat::ParseFromString(text, proto);
    return success;
  }
    
    namespace mxnet {
namespace engine {
    }
    }
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
    
    {  Stream<xpu> *stream = ctx.get_stream<xpu>();
  Tensor<xpu, 2, DType> out = out_data[0].get<xpu, 2, DType>(stream);
  std::vector<Tensor<xpu, 2, DType> > ts_arr(in_data.size());
  std::transform(in_data.begin(), in_data.end(), ts_arr.begin(),
                 [&stream](TBlob blob) -> Tensor<xpu, 2, DType> {
                   return blob.get<xpu, 2, DType>(stream);
                 });
  khatri_rao(out, ts_arr);
}
    
     private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    #if CUDNN_MAJOR >= 5
    format_ = CUDNN_TENSOR_NCHW;
    #endif
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
      CUDNN_CALL(cudnnCreateSpatialTransformerDescriptor(&st_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&in_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&out_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(in_desc_,
                                            format_,
                                            dtype_,
                                            data.size(0),
                                            data.size(1),
                                            data.size(2),
                                            data.size(3)));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(out_desc_,
                                            format_,
                                            dtype_,
                                            out.size(0),
                                            out.size(1),
                                            out.size(2),
                                            out.size(3)));
      int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                   static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
      CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                        sampler_,
                                                        dtype_,
                                                        4,
                                                        dim));
    }
  }
    
    template<>
Operator *CreateOp<cpu>(NDArrayOpParam param) {
  return new NDArrayOp<cpu>(param);
}
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
    
    {    ~CrossProcessMutex()
    {
        if (m_fd != -1)
        {
            Release();
        }
    }
};
    
    
    {    ~ScopeTimer()
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Stop();
            double time = m_aggregateTimer.ElapsedSeconds();
            fprintf(stderr, m_message.c_str(), time);
        }
    }
};
    
        virtual void CopyTo(ComputationNodeBasePtr nodeP, const std::wstring& newName, const CopyNodeFlags flags) const override
    {
        Base::CopyTo(nodeP, newName, flags);
        if (flags & CopyNodeFlags::copyNodeValue)
        {
            auto node = dynamic_pointer_cast<ClassificationErrorNode<ElemType>>(nodeP);
            node->m_maxIndexes0->SetValue(*m_maxIndexes0);
            node->m_maxIndexes1->SetValue(*m_maxIndexes1);
            node->m_maxValues->SetValue(*m_maxValues);
        }
    }
    // request matrices needed to do node function value evaluation
    virtual void RequestMatricesBeforeForwardProp(MatrixPool& matrixPool)
    {
        Base::RequestMatricesBeforeForwardProp(matrixPool);
        RequestMatrixFromPool(m_maxIndexes0, matrixPool);
        RequestMatrixFromPool(m_maxIndexes1, matrixPool);
        RequestMatrixFromPool(m_maxValues, matrixPool);
    }
    
    
    {}
    
      /**
   * Fill up vector with summary information.
   */
  virtual void debuggerInfo(InfoVec& /*info*/) {}
    
    PlainDirectory::PlainDirectory(int fd) {
  m_dir = ::fdopendir(fd);
}
    
    namespace HPHP {
    }