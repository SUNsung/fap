
        
            struct Margin {
        Margin() : left(0), right(0), top(0), bottom(0) {}
        Margin(size_t left_, size_t right_, size_t top_, size_t bottom_)
            : left(left_), right(right_), top(top_), bottom(bottom_) {}
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s16 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #ifdef CAROTENE_NEON
    
    inline uint8x8_t vqtbl1_u8 (uint8x16_t a, uint8x8_t b)
{
#ifdef __aarch64__
    // AArch64 supports this natively
    return ::vqtbl1_u8(a, b);
#else
    union { uint8x16_t v; uint8x8x2_t w; } u = { a };
    return vtbl2_u8(u.w, b);
#endif
}
    
            int16x8_t tcurr = vmovq_n_s16(0x0);
        int16x8_t tnext = vmovq_n_s16(0x0);
        int16x8_t t0, t2;
        uint8x8_t xx0 = vmov_n_u8(0x0);
        uint8x8_t xx1 = vmov_n_u8(0x0);
        uint8x8_t xx2 = vmov_n_u8(0x0);
        ptrdiff_t x = 0;
        const ptrdiff_t bcols = y + 2 < rows ? cols : (cols - 8);
        for( ; x <= bcols; x += 8 )
        {
            internal::prefetch(v0 + x);
            internal::prefetch(v1 + x);
            internal::prefetch(v2 + x);
    }
    
      // A simple array of pointers to the best assigned column division at
  // each grid y coordinate. This pointer is passed in from the caller, so do
  // NOT destroy it in the class.
  ColPartitionSet** best_columns_;
    
    
    {  for (std::map<int, ParamContent*>::iterator iter = vcMap.begin();
                                          iter != vcMap.end();
                                          ++iter) {
    ParamContent* cur = iter->second;
    if (!changes_only || cur->HasChanged()) {
      fprintf(fp, '%-25s   %-12s   # %s\n',
              cur->GetName(), cur->GetValue().string(), cur->GetDescription());
    }
  }
  fclose(fp);
}
#endif // GRAPHICS_DISABLED

    
    // The parameters editor enables the user to edit all the parameters used within
// tesseract. It can be invoked on its own, but is supposed to be invoked by
// the program editor.
class ParamsEditor : public SVEventHandler {
 public:
  // Integrate the parameters editor as popupmenu into the existing scrollview
  // window (usually the pg editor). If sv == null, create a new empty
  // empty window and attach the parameter editor to that window (ugly).
  explicit ParamsEditor(tesseract::Tesseract*, ScrollView* sv = nullptr);
    }
    
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
    
    namespace tesseract {
    }
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    #include <mxnet/operator.h>
#include <dmlc/type_traits.h>
    
        // Caffe seems to understand phase inside an 'include {}' block
    if (!param_.prototxt.has_phase()) {
      if (param_.prototxt.include().size()) {
        if (param_.prototxt.include(0).has_phase()) {
          param_.prototxt.set_phase(param_.prototxt.include(0).phase());
        }
      }
    }
    
    
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Prototxt' << value <<' more than a layer';
    caffe::LayerParameter *layer_param = new caffe::LayerParameter(net_param.layer(0));
    this->Get(head) = (*layer_param);
  }
    
    namespace mxnet {
namespace exec {
    }
    }
    
      /*! \brief internal next function, inlined for fater processing. */
  inline bool Next_(void) {
    if (!base_->Next()) return false;
    const DataInst &src = base_->Value();
    this->SetOutImg(src);
    out_.data.resize(2);
    out_.data[0] = outimg_;
    out_.data[1] = src.data[1];
    out_.index = src.index;
    out_.extra_data = src.extra_data;
    return true;
  }
  /*!
   * \brief Set the output image, after augmentation and normalization.
   * \param src The source image.
   */
  inline void SetOutImg(const DataInst &src) {
    using namespace mshadow::expr;  // NOLINT(*)
    }
    
      /*!
  * \brief Issues quantize operation to be scheduled by the engine
  * Compresses `from` into `to` and accumulates the quantization error
  * into 'residual', using the quantization of type `type_`
  * \param from the ndarray containing original data to be quantized
  * \param to the target ndarray which contains quantized data
  * \param residual the ndarray which accumulates quantization error
  * \param priority Priority of the action.
  */
  void Quantize(const mxnet::NDArray &from, mxnet::NDArray *to,
                mxnet::NDArray *residual, const int priority);
    
    
    {  Stream<xpu> *stream = ctx.get_stream<xpu>();
  Tensor<xpu, 2, DType> out = out_data[0].get<xpu, 2, DType>(stream);
  std::vector<Tensor<xpu, 2, DType> > ts_arr(in_data.size());
  std::transform(in_data.begin(), in_data.end(), ts_arr.begin(),
                 [&stream](TBlob blob) -> Tensor<xpu, 2, DType> {
                   return blob.get<xpu, 2, DType>(stream);
                 });
  khatri_rao(out, ts_arr);
}
    
      ~CuDNNLocalResponseNormOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroyLRNDescriptor(lrn_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(shape_desc_));
    }
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
    CHECK_EQ(out_data.size(), 3U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
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
      if (param_.sampler_type == st::kBilinear) {
        int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                     static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
        CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                          sampler_,
                                                          dtype_,
                                                          4,
                                                          dim));
      }
    }
  }
    
    using LineNumber = uint32_t;
using ColNumber  = uint32_t;
using LineRange  = std::tuple<LineNumber,LineNumber>;
    
    void Assembler::andi(const Reg64& ra, const Reg64& rs, Immed imm) {
  assert(imm.fits(HPHP::sz::word) && 'Immediate is too big');
  EmitDForm(28, rn(rs), rn(ra), imm.w());
}
    
    void fillMap(BaseMap* map, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    map->set(*ar->getKey(i).asTypedValue(),
             *ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    void Config::ParseIniFile(const std::string &filename, IniSettingMap &ini,
                          const bool constants_only /* = false */,
                          const bool is_system /* = true */ ) {
    std::ifstream ifs(filename);
    std::string str((std::istreambuf_iterator<char>(ifs)),
                    std::istreambuf_iterator<char>());
    std::string with_includes;
    Config::ReplaceIncludesWithIni(filename, str, with_includes);
    Config::SetParsedIni(ini, with_includes, filename, constants_only,
                         is_system);
}
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
        if (!slash && !semi) {
      raise_warning('rfc2397: invalid meta data');
      return nullptr;
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
      auto make_from = [] (const Variant& f) -> req::ptr<File> {
    auto res = dyn_cast_or_null<PlainFile>(f);
    if (!res || res->isClosed()) return nullptr;
    return req::make<PlainFile>(dup(res->fd()), true, s_php);
  };
    
    //--------------------------------------------------------------------------------
//
//  matches()
//
//--------------------------------------------------------------------------------
UBool RegexMatcher::matches(UErrorCode &status) {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    if (U_FAILURE(fDeferredStatus)) {
        status = fDeferredStatus;
        return FALSE;
    }
    }
    
    SelectFormat::SelectFormat(const SelectFormat& other) : Format(other),
                                                        msgPattern(other.msgPattern) {
}
    
    #endif

    
            // Get current display time.
        int32_t hour = cal.get(UCAL_HOUR_OF_DAY, status);
        int32_t minute = 0;
        if (fHasMinute) {
            minute = cal.get(UCAL_MINUTE, status);
        }
        int32_t second = 0;
        if (fHasSecond) {
            second = cal.get(UCAL_SECOND, status);
        }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    #include 'unicode/utypes.h'
    
        QObject::connect(&example, SIGNAL(finished()), &app, SLOT(quit()));
    QTimer::singleShot(0, &example, SLOT(run()));
    
    
    {        cache_list.erase(iter->second);
        cache_map.erase(iter);
    }
    
        inline void producer_remove(Coroutine *co)
    {
        producer_queue.remove(co);
    }
    
        tmp = (swFdInfo *) swHashMap_find_int(ht, 36 * 3);
    ASSERT_EQ((void* )tmp, nullptr);
    
            for (int i = 0; i < 100; ++i)
        {
            std::string addr3 = Coroutine::gethostbyname('ipv6.sjtu.edu.cn', AF_INET);
            std::string addr4 = Coroutine::gethostbyname('ipv6.sjtu.edu.cn', AF_INET6);
    }
    
    TEST(coroutine_socket, connect_refused)
{
    coro_test([](void *arg)
    {
        Socket sock(SW_SOCK_TCP);
        bool retval = sock.connect('127.0.0.1', 9801, 0.5);
        ASSERT_EQ(retval, false);
        ASSERT_EQ(sock.errCode, ECONNREFUSED);
    });
}
    
            pid_t pid = fork();
        ASSERT_NE(pid, -1);
    
        ZEND_PARSE_PARAMETERS_START(1,2)
        Z_PARAM_RESOURCE(result)
        Z_PARAM_OPTIONAL
        Z_PARAM_LONG(result_type)
    ZEND_PARSE_PARAMETERS_END_EX(RETURN_FALSE);