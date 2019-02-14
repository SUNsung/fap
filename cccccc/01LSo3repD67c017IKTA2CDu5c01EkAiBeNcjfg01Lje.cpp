 private:
  /*! \brief indexes into top_ */
  enum { DATA = 0, LABEL, NR_SUPPORTED_TOP_ITEMS };
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
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
    
    /*!
 * \brief a list of (label, example) pairs, examples can have various shape
 */
template<typename DType = real_t>
class InstVector {
 public:
  /*! \brief return the number of (label, example) pairs */
  inline size_t Size(void) const {
    return index_.size();
  }
  // get index
  inline unsigned Index(unsigned i) const {
    return index_[i];
  }
  // instance
  /* \brief get the i-th (label, example) pair */
  inline DataInst operator[](size_t i) const {
    DataInst inst;
    inst.index = index_[i];
    // ImageRecordIter depends on data vector
    // here having size 2. If you want to
    // change this assumption here, change it
    // in there as well (InitBatch section)!
    inst.data.push_back(TBlob(data_[i]));
    inst.data.push_back(TBlob(label_[i]));
    return inst;
  }
  /* \brief get the last (label, example) pair */
  inline DataInst Back() const {
    return (*this)[Size() - 1];
  }
  inline void Clear(void) {
    index_.clear();
    data_.Clear();
    label_.Clear();
  }
  /*
   * \brief push a (label, example) pair
   * only reserved the space, while the data is not copied
   */
  inline void Push(unsigned index,
                   mshadow::Shape<3> dshape,
                   mshadow::Shape<1> lshape) {
    index_.push_back(index);
    data_.Push(dshape);
    label_.Push(lshape);
  }
  /*! \return the data content */
  inline const TensorVector<3, DType>& data() const {
    return data_;
  }
  /*! \return the label content */
  inline const TensorVector<1, real_t>& label() const {
    return label_;
  }
    }
    
    /*!
 * \file iter_libsvm.cc
 * \brief define a LibSVM Reader to read in arrays
 */
#include <mxnet/io.h>
#include <dmlc/base.h>
#include <dmlc/logging.h>
#include <dmlc/parameter.h>
#include <dmlc/data.h>
#include './iter_sparse_prefetcher.h'
#include './iter_sparse_batchloader.h'
    
    
    {  // creat mean image.
  inline void CreateMeanImg(void) {
    if (param_.verbose) {
      LOG(INFO) << 'Cannot find ' << param_.mean_img
                << ': create mean image, this will take some time...';
    }
    double start = dmlc::GetTime();
    size_t imcnt = 1;  // NOLINT(*)
    CHECK(this->Next_()) << 'input iterator failed.';
    meanimg_.Resize(outimg_.shape_);
    mshadow::Copy(meanimg_, outimg_);
    while (this->Next_()) {
      meanimg_ += outimg_;
      imcnt += 1;
      double elapsed = dmlc::GetTime() - start;
      if (imcnt % 10000L == 0 && param_.verbose) {
        LOG(INFO) << imcnt << ' images processed, ' << elapsed << ' sec elapsed';
      }
    }
    meanimg_ *= (1.0f / imcnt);
    // save as mxnet python compatible format.
    TBlob tmp = meanimg_;
    {
      std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(param_.mean_img.c_str(), 'w'));
      NDArray::Save(fo.get(),
                    {NDArray(tmp, 0)},
                    {'mean_img'});
    }
    if (param_.verbose) {
      LOG(INFO) << 'Save mean image to ' << param_.mean_img << '..';
    }
    meanfile_ready_ = true;
    this->BeforeFirst();
  }
};
    
    
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
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
      req::ptr<Directory> opendir(const String& path) override;
    
    constexpr int64_t kDefaultPerfWarningRate = 100;
    
    #include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/vm/globals-array.h'