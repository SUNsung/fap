
        
        
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    
    {} // namespace caffe2

    
    ```
    
    
    {} // namespace caffe2
    
    namespace caffe2 {
    }
    
    OPERATOR_SCHEMA(GivenTensorDoubleFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(
        FillerTensorInference<TensorProto_DataType_DOUBLE>);
    
    #endif

    
    namespace tesseract {
    }
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Getter for the value.
STRING ParamContent::GetValue() const {
  STRING result;
  if (param_type_ == VT_INTEGER) {
    result.add_str_int('', *iIt);
  } else if (param_type_ == VT_BOOLEAN) {
    result.add_str_int('', *bIt);
  } else if (param_type_ == VT_DOUBLE) {
    result.add_str_double('', *dIt);
  } else if (param_type_ == VT_STRING) {
    if (((STRING) * (sIt)).string() != nullptr) {
      result = sIt->string();
    } else {
      result = 'Null';
    }
  }
  return result;
}
    
      // Write all (changed_) parameters to a config file.
  void WriteParams(char* filename, bool changes_only);
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    template DataReader::DataReader(const ConfigParameters&);
template DataReader::DataReader(const ScriptableObjects::IConfigRecord&);
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
      virtual void PredictInstance(const SparsePage::Inst& inst,
                               std::vector<bst_float>* out_preds,
                               const gbm::GBTreeModel& model,
                               unsigned ntree_limit = 0,
                               unsigned root_index = 0) = 0;
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    SEXP XGBoosterPredict_R(SEXP handle, SEXP dmat, SEXP option_mask, SEXP ntree_limit) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGBoosterPredict(R_ExternalPtrAddr(handle),
                            R_ExternalPtrAddr(dmat),
                            asInteger(option_mask),
                            asInteger(ntree_limit),
                            &olen, &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {  inline void SetPrune(const WQSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType begin = src.data[0].rmax;
    const RType range = src.data[src.size - 1].rmin - src.data[0].rmax;
    const size_t n = maxsize - 1;
    data[0] = src.data[0];
    this->size = 1;
    // lastidx is used to avoid duplicated records
    size_t i = 1, lastidx = 0;
    for (size_t k = 1; k < n; ++k) {
      RType dx2 =  2 * ((k * range) / n + begin);
      // find first i such that  d < (rmax[i+1] + rmin[i+1]) / 2
      while (i < src.size - 1
             && dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
      CHECK(i != src.size - 1);
      if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
        if (i != lastidx) {
          data[size++] = src.data[i]; lastidx = i;
        }
      } else {
        if (i + 1 != lastidx) {
          data[size++] = src.data[i + 1]; lastidx = i + 1;
        }
      }
    }
    if (lastidx != src.size - 1) {
      data[size++] = src.data[src.size - 1];
    }
  }
  /*!
   * \brief set current summary to be merged summary of sa and sb
   * \param sa first input summary to be merged
   * \param sb second input summary to be merged
   */
  inline void SetCombine(const WQSummary &sa,
                         const WQSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0);
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    // extended rmin value
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      // duplicated value entry
      if (a->value == b->value) {
        *dst = Entry(a->rmin + b->rmin,
                     a->rmax + b->rmax,
                     a->wmin + b->wmin, a->value);
        aprev_rmin = a->RMinNext();
        bprev_rmin = b->RMinNext();
        ++dst; ++a; ++b;
      } else if (a->value < b->value) {
        *dst = Entry(a->rmin + bprev_rmin,
                     a->rmax + b->RMaxPrev(),
                     a->wmin, a->value);
        aprev_rmin = a->RMinNext();
        ++dst; ++a;
      } else {
        *dst = Entry(b->rmin + aprev_rmin,
                     b->rmax + a->RMaxPrev(),
                     b->wmin, b->value);
        bprev_rmin = b->RMinNext();
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType brmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(a->rmin + bprev_rmin, a->rmax + brmax, a->wmin, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType armax = (a_end - 1)->rmax;
      do {
        *dst = Entry(b->rmin + aprev_rmin, b->rmax + armax, b->wmin, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    this->size = dst - data;
    const RType tol = 10;
    RType err_mingap, err_maxgap, err_wgap;
    this->FixError(&err_mingap, &err_maxgap, &err_wgap);
    if (err_mingap > tol || err_maxgap > tol || err_wgap > tol) {
      LOG(INFO) << 'mingap=' << err_mingap
                << ', maxgap=' << err_maxgap
                << ', wgap=' << err_wgap;
    }
    CHECK(size <= sa.size + sb.size) << 'bug in combine';
  }
  // helper function to print the current content of sketch
  inline void Print() const {
    for (size_t i = 0; i < this->size; ++i) {
      LOG(CONSOLE) << '[' << i << '] rmin=' << data[i].rmin
                   << ', rmax=' << data[i].rmax
                   << ', wmin=' << data[i].wmin
                   << ', v=' << data[i].value;
    }
  }
  // try to fix rounding error
  // and re-establish invariance
  inline void FixError(RType *err_mingap,
                       RType *err_maxgap,
                       RType *err_wgap) const {
    *err_mingap = 0;
    *err_maxgap = 0;
    *err_wgap = 0;
    RType prev_rmin = 0, prev_rmax = 0;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin < prev_rmin) {
        data[i].rmin = prev_rmin;
        *err_mingap = std::max(*err_mingap, prev_rmin - data[i].rmin);
      } else {
        prev_rmin = data[i].rmin;
      }
      if (data[i].rmax < prev_rmax) {
        data[i].rmax = prev_rmax;
        *err_maxgap = std::max(*err_maxgap, prev_rmax - data[i].rmax);
      }
      RType rmin_next = data[i].RMinNext();
      if (data[i].rmax < rmin_next) {
        data[i].rmax = rmin_next;
        *err_wgap = std::max(*err_wgap, data[i].rmax - rmin_next);
      }
      prev_rmax = data[i].rmax;
    }
  }
  // check consistency of the summary
  inline bool Check(const char *msg) const {
    const float tol = 10.0f;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin + data[i].wmin > data[i].rmax + tol ||
          data[i].rmin < -1e-6f || data[i].rmax < -1e-6f) {
        LOG(INFO) << '---------- WQSummary::Check did not pass ----------';
        this->Print();
        return false;
      }
    }
    return true;
  }
};
    
    TEST(Span, DlfConstructors) {
  // Dynamic extent
  {
    Span<int> s;
    ASSERT_EQ(s.size(), 0);
    ASSERT_EQ(s.data(), nullptr);
    }
    }