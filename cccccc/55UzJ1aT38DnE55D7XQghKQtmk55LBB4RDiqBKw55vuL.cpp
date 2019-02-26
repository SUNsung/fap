
        
          caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
    #define INSTANTIATE_LAYER_GPU_BACKWARD(classname) \
  template void classname<float>::Backward_gpu( \
      const std::vector<Blob<float>*>& top, \
      const std::vector<bool>& propagate_down, \
      const std::vector<Blob<float>*>& bottom); \
  template void classname<double>::Backward_gpu( \
      const std::vector<Blob<double>*>& top, \
      const std::vector<bool>& propagate_down, \
      const std::vector<Blob<double>*>& bottom)
    
      void Transform(const Datum& datum, Dtype* transformed_data);
  // Tranformation parameters
  TransformationParameter param_;
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace caffe
    
    
  /// @brief Not implemented -- AccuracyLayer cannot be used as a loss.
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    for (int i = 0; i < propagate_down.size(); ++i) {
      if (propagate_down[i]) { NOT_IMPLEMENTED; }
    }
  }
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void InternalThreadEntry();
  virtual void load_batch(Batch<Dtype>* batch) = 0;
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    /**
 * @brief Computes the contrastive loss @f$
 *          E = \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *              \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$. This can be
 *          used to train siamese networks.
 *
 * @param bottom input Blob vector (length 3)
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ a \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ b \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times 1 \times 1 \times 1) @f$
 *      the binary similarity @f$ s \in [0, 1]@f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
 *      the computed contrastive loss: @f$ E =
 *          \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *          \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$.
 * This can be used to train siamese networks.
 */
template <typename Dtype>
class ContrastiveLossLayer : public LossLayer<Dtype> {
 public:
  explicit ContrastiveLossLayer(const LayerParameter& param)
      : LossLayer<Dtype>(param), diff_() {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    
    {} // namespace
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 3; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 3));
      input_blob_names.push_back(I(inputIdx * 3 + 2));
      output_blob_names.push_back(GI(inputIdx * 3 + 1));
    }
    input_blob_names.push_back(GO(3));
    
    #endif // CAFFE2_OPERATORS_FREE_OP_H_

    
    Each feature has fixed lengths which are passed as lengths argument and a
separate tensor will be produced for each feature.
i.e. DATA.dim(1) = len(lengths) = NumOuptuts.
    
    		const char * GetEncodingModeName(void);
    
    
    {		for (unsigned int uiPixel = 0; uiPixel < PIXELS; uiPixel++)
		{
			m_fError += CalcPixelError(m_afrgbaDecodedColors[uiPixel], m_afDecodedAlphas[uiPixel],
										m_pafrgbaSource[uiPixel]);
		}
		
	}
    
    					ptry->m_iRed = iRed;
					ptry->m_iGreen = iGreen;
					ptry->m_iBlue = iBlue;
					ptry->m_fError = FLT_MAX;
					ColorFloatRGBA frgbaColor = ColorFloatRGBA::ConvertFromRGB5((unsigned char)iRed, (unsigned char)iGreen, (unsigned char)iBlue);
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #define MULT16_32_QX(a, b, Q) MULT16_32_QX_(a, b, Q, __FILE__, __LINE__)
static OPUS_INLINE int MULT16_32_QX_(int a, opus_int64 b, int Q, char *file, int line)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_INT(b))
   {
      fprintf (stderr, 'MULT16_32_Q%d: inputs are not short+int: %d %d in %s: line %d\n', Q, (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   if (ABS32(b)>=((opus_val32)(1)<<(15+Q)))
   {
      fprintf (stderr, 'MULT16_32_Q%d: second operand too large: %d %d in %s: line %d\n', Q, (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = (((opus_int64)a)*(opus_int64)b) >> Q;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'MULT16_32_Q%d: output is not int: %d*%d=%d in %s: line %d\n', Q, (int)a, (int)b,(int)res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   if (Q==15)
      celt_mips+=3;
   else
      celt_mips+=4;
   return res;
}
    
    /** 16x32 multiplication, followed by a 16-bit shift right and 32-bit add.
    Results fits in 32 bits */
#define MAC16_32_Q16(c,a,b) ADD32((c),ADD32(MULT16_16((a),SHR((b),16)), SHR(MULT16_16SU((a),((b)&0x0000ffff)),16)))
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    // Set mode before forward
    caffe::CaffeMode::SetMode<xpu>();
    using ::caffe::Blob;
    using std::vector;
    using namespace mshadow;
    using namespace mshadow::expr;
    for (uint32_t i = 0; i < req.size(); ++i)
      CHECK_EQ(req[i], kWriteTo);
    int expected_num_data = param_.num_weight + param_.num_data;
    CHECK_EQ(in_data.size(), expected_num_data);
    CHECK_EQ(out_data.size(), param_.num_out);
    }
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeOpProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}
    
    
    {    while (base_->Next()) {
      const DataInst& d = base_->Value();
      out_.inst_index[top] = d.index;
      if (data_.size() == 0) {
        this->InitData(d);
      }
      for (size_t i = 0; i < d.data.size(); ++i) {
        CHECK_EQ(unit_size_[i], d.data[i].Size());
        MSHADOW_TYPE_SWITCH(data_[i].type_flag_, DType, {
            mshadow::Copy(
              data_[i].get<cpu, 1, DType>().Slice(top * unit_size_[i],
                                                  (top + 1) * unit_size_[i]),
              d.data[i].get_with_shape<cpu, 1, DType>(mshadow::Shape1(unit_size_[i])));
          });
      }
      if (++top >= param_.batch_size) {
        return true;
      }
    }
    if (top != 0) {
      if (param_.round_batch != 0) {
        num_overflow_ = 0;
        base_->BeforeFirst();
        for (; top < param_.batch_size; ++top, ++num_overflow_) {
          CHECK(base_->Next()) << 'number of input must be bigger than batch size';
          const DataInst& d = base_->Value();
          out_.inst_index[top] = d.index;
          // copy data
          for (size_t i = 0; i < d.data.size(); ++i) {
            CHECK_EQ(unit_size_[i], d.data[i].Size());
            MSHADOW_TYPE_SWITCH(data_[i].type_flag_, DType, {
                mshadow::Copy(
                  data_[i].get<cpu, 1, DType>().Slice(top * unit_size_[i],
                                                      (top + 1) * unit_size_[i]),
                  d.data[i].get_with_shape<cpu, 1, DType>(mshadow::Shape1(unit_size_[i])));
              });
          }
        }
        out_.num_batch_padd = num_overflow_;
      } else {
        out_.num_batch_padd = param_.batch_size - top;
      }
      return true;
    }
    return false;
  }
  virtual const TBlobBatch &Value(void) const {
    return out_;
  }
    
    When `label_libsvm` is set to ``NULL``, both data and label are read from the file specified
by `data_libsvm`. In this case, the data is stored in `csr` storage type, while the label is a 1D
dense array.
    
    #endif /* #if !UCONFIG_NO_TRANSLITERATION */
    
    class NumberFormat;
    
    SimpleTimeZone::SimpleTimeZone(int32_t rawOffsetGMT, const UnicodeString& ID,
    int8_t savingsStartMonth, int8_t savingsStartDay,
    int8_t savingsStartDayOfWeek, int32_t savingsStartTime,
    int8_t savingsEndMonth, int8_t savingsEndDay,
    int8_t savingsEndDayOfWeek, int32_t savingsEndTime,
    int32_t savingsDST, UErrorCode& status)
:   BasicTimeZone(ID)
{
    clearTransitionRules();
    construct(rawOffsetGMT,
              savingsStartMonth, savingsStartDay, savingsStartDayOfWeek,
              savingsStartTime, WALL_TIME,
              savingsEndMonth, savingsEndDay, savingsEndDayOfWeek,
              savingsEndTime, WALL_TIME,
              savingsDST, status);
}
    
    #ifndef __SMALLINTFORMATTER_H__
#define __SMALLINTFORMATTER_H__
    
    #include 'unicode/udat.h'
    
        int32_t length = fFlagAndLength;
    if (length > getCapacity() && reallocate(length, 0) == NULL) {
        setToBogus();
        return;
    }
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
 * and return the pointer.
 */
UnicodeReplacer* StringMatcher::toReplacer() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeReplacer *nonconst_base = static_cast<UnicodeReplacer *>(nonconst_this);
  
  return nonconst_base;
}
    
    /**
 * UnicodeReplacer API
 */
int32_t StringReplacer::replace(Replaceable& text,
                                int32_t start,
                                int32_t limit,
                                int32_t& cursor) {
    int32_t outLen;
    int32_t newStart = 0;
    }