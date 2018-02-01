
        
        #endif  // ATOM_APP_ATOM_MAIN_DELEGATE_H_

    
    namespace mate {
class Arguments;
}
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/net/atom_network_delegate.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
     protected:
  explicit Event(v8::Isolate* isolate);
  ~Event() override;
    
    namespace {
    }
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    #ifndef ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
    
    // relauncher implements main browser application relaunches across platforms.
// When a browser wants to relaunch itself, it can't simply fork off a new
// process and exec a new browser from within. That leaves open a window
// during which two browser applications might be running concurrently. If
// that happens, each will wind up with a distinct Dock icon, which is
// especially bad if the user expected the Dock icon to be persistent by
// choosing Keep in Dock from the icon's contextual menu.
//
// relauncher approaches this problem by introducing an intermediate
// process (the 'relauncher') in between the original browser ('parent') and
// replacement browser ('relaunched'). The helper executable is used for the
// relauncher process; because it's an LSUIElement, it doesn't get a Dock
// icon and isn't visible as a running application at all. The parent will
// start a relauncher process, giving it the 'writer' side of a pipe that it
// retains the 'reader' end of. When the relauncher starts up, it will
// establish a kqueue to wait for the parent to exit, and will then write to
// the pipe. The parent, upon reading from the pipe, is free to exit. When the
// relauncher is notified via its kqueue that the parent has exited, it
// proceeds, launching the relaunched process. The handshake to synchronize
// the parent with the relauncher is necessary to avoid races: the relauncher
// needs to be sure that it's monitoring the parent and not some other process
// in light of PID reuse, so the parent must remain alive long enough for the
// relauncher to set up its kqueue.
    
    void MapFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_map_$name$_codec);\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
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
    
      virtual inline const char* type() const { return 'Convolution'; }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
      virtual inline const char* type() const { return 'Embed'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include <vector>
    
    // A CostFunc that takes the variance of step into account in the cost.
inT64 DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == NULL || prev == this) {
    UpdateIfBetter(0, 1, NULL, 0, 0, 0);
    return 0;
  }
    }
    
    
    {  // We shouldn't try calculations if the characters are very short (for example
  // for punctuation).
  if (min_height > kBlnXHeight / 8 && height > 0) {
    float result = height * kBlnXHeight * yscale / min_height;
    *max_xht = result + kFinalPixelTolerance;
    result = height * kBlnXHeight * yscale / max_height;
    *min_xht = result - kFinalPixelTolerance;
  }
}
    
      STRING ToString() const;
    
    class ROW:public ELIST_LINK
{
  friend void tweak_row_baseline(ROW *, double, double);
  public:
    ROW() {
    }                            //empty constructor
    ROW(                    //constructor
        inT32 spline_size,  //no of segments
        inT32 *xstarts,     //segment boundaries
        double *coeffs,     //coefficients //ascender size
        float x_height,
        float ascenders,
        float descenders,   //descender size
        inT16 kern,         //char gap
        inT16 space);       //word gap
    ROW(               //constructor
        TO_ROW *row,   //textord row
        inT16 kern,    //char gap
        inT16 space);  //word gap
    }
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
      // construct column matrix from GHistIndexMatrix
  inline void Init(const GHistIndexMatrix& gmat,
                   const FastHistParam& param) {
    this->dtype = static_cast<DataType>(param.colmat_dtype);
    /* if dtype is smaller than uint32_t, multiple bin_id's will be stored in each
       slot of internal buffer. */
    packing_factor_ = sizeof(uint32_t) / static_cast<size_t>(this->dtype);
    }
    
    // make column page from subset of rowbatchs
void SimpleDMatrix::MakeColPage(const RowBatch& batch,
                                size_t buffer_begin,
                                const std::vector<bool>& enabled,
                                SparsePage* pcol) {
  const int nthread = std::min(omp_get_max_threads(), std::max(omp_get_num_procs() / 2 - 2, 1));
  pcol->Clear();
  common::ParallelGroupBuilder<SparseBatch::Entry>
      builder(&pcol->offset, &pcol->data);
  builder.InitBudget(info().num_col, nthread);
  bst_omp_uint ndata = static_cast<bst_uint>(batch.size);
  #pragma omp parallel for schedule(static) num_threads(nthread)
  for (bst_omp_uint i = 0; i < ndata; ++i) {
    int tid = omp_get_thread_num();
    RowBatch::Inst inst = batch[i];
    for (bst_uint j = 0; j < inst.length; ++j) {
      const SparseBatch::Entry &e = inst[j];
      if (enabled[e.index]) {
        builder.AddBudget(e.index, tid);
      }
    }
  }
  builder.InitStorage();
  #pragma omp parallel for schedule(static) num_threads(nthread)
  for (bst_omp_uint i = 0; i < ndata; ++i) {
    int tid = omp_get_thread_num();
    RowBatch::Inst inst = batch[i];
    for (bst_uint j = 0; j < inst.length; ++j) {
      const SparseBatch::Entry &e = inst[j];
      builder.Push(
          e.index,
          SparseBatch::Entry(buffered_rowset_[i + buffer_begin], e.fvalue),
          tid);
    }
  }
  CHECK_EQ(pcol->Size(), info().num_col);
  // sort columns
  bst_omp_uint ncol = static_cast<bst_omp_uint>(pcol->Size());
  #pragma omp parallel for schedule(dynamic, 1) num_threads(nthread)
  for (bst_omp_uint i = 0; i < ncol; ++i) {
    if (pcol->offset[i] < pcol->offset[i + 1]) {
      std::sort(dmlc::BeginPtr(pcol->data) + pcol->offset[i],
                dmlc::BeginPtr(pcol->data) + pcol->offset[i + 1],
                SparseBatch::Entry::CmpValue);
    }
  }
}
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const std::vector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   std::vector<bst_gpair> *out_gpair) override {
    out_gpair->resize(preds.size());
    for (size_t i = 0; i < preds.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (info.labels[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds[i]));
      // this is the gradient
      bst_float grad = (p - info.labels[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair->at(i) = bst_gpair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(std::vector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = *io_preds;
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    XXH32_sizeofState() is used to know how much space must be allocated for the xxHash 32-bits state.
Note that the state must be aligned to access 'long long' fields. Memory must be allocated and referenced by a pointer.
This pointer must then be provided as 'state' into XXH32_resetState(), which initializes the state.
    
        // When we find the element, insert the element and mark found
    if (elem == pivot) {                // Found it!
      found = true;
      if (insert_after == true) {       // Skip one more, if inserting after it
        it.Push();
      }
      it.InsertElement(value);
    } else {
      it.Push();
    }
    
      virtual bool Valid() const override { return (current_ != nullptr); }
    
      m_jSliceB = env->NewGlobalRef(SliceJni::construct0(env));
  if(m_jSliceB == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    
    
    {class DirectComparatorJniCallback : public BaseComparatorJniCallback {
 public:
      DirectComparatorJniCallback(
        JNIEnv* env, jobject jComparator,
        const ComparatorJniCallbackOptions* copt);
      ~DirectComparatorJniCallback();
};
}  // namespace rocksdb