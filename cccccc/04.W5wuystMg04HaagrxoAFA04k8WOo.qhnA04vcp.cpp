
        
        int CertificateManagerModel::ImportUserCert(const std::string& data) {
  return cert_db_->ImportUserCert(data);
}
    
    
    {}  // namespace mate
    
      // Helper class for linux specific messages.  LinuxWatcher is ref counted
  // because it posts messages between threads.
  class LinuxWatcher;
  scoped_refptr<LinuxWatcher> watcher_;
  int sock_;
  bool listen_on_ready_ = false;
#endif
    
    // Checks the visibility of the enumerated window and signals once a visible
// window has been found.
BOOL CALLBACK BrowserWindowEnumeration(HWND window, LPARAM param) {
  bool* result = reinterpret_cast<bool*>(param);
  *result = ::IsWindowVisible(window) != 0;
  // Stops enumeration if a visible window has been found.
  return !*result;
}
    
          // colon indicates that the argument starts with a URI scheme
      if (c == ':') {
        // it could also be a Windows filesystem path
        if (p == arg + 1)
          break;
    }
    
      Blob<Dtype>* blob_data = new Blob<Dtype>();
  hdf5_load_nd_dataset(file_id, HDF5_DATA_DATASET_NAME, 0, 4,
                       blob_data, reshape);
  this->CheckBlobEqual(*(this->blob_data_), *blob_data);
    
    template <typename Dtype>
void ClipLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (propagate_down[0]) {
    const Dtype* bottom_data = bottom[0]->cpu_data();
    const Dtype* top_diff = top[0]->cpu_diff();
    Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
    const int count = bottom[0]->count();
    }
    }
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  const int num_output = this->layer_param_.inner_product_param().num_output();
  bias_term_ = this->layer_param_.inner_product_param().bias_term();
  transpose_ = this->layer_param_.inner_product_param().transpose();
  N_ = num_output;
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  // Dimensions starting from 'axis' are 'flattened' into a single
  // length K_ vector. For example, if bottom[0]'s shape is (N, C, H, W),
  // and axis == 1, N inner products with dimension CHW are performed.
  K_ = bottom[0]->count(axis);
  // Check if we need to set up the weights
  if (this->blobs_.size() > 0) {
    LOG(INFO) << 'Skipping parameter initialization';
  } else {
    if (bias_term_) {
      this->blobs_.resize(2);
    } else {
      this->blobs_.resize(1);
    }
    // Initialize the weights
    vector<int> weight_shape(2);
    if (transpose_) {
      weight_shape[0] = K_;
      weight_shape[1] = N_;
    } else {
      weight_shape[0] = N_;
      weight_shape[1] = K_;
    }
    this->blobs_[0].reset(new Blob<Dtype>(weight_shape));
    // fill the weights
    shared_ptr<Filler<Dtype> > weight_filler(GetFiller<Dtype>(
        this->layer_param_.inner_product_param().weight_filler()));
    weight_filler->Fill(this->blobs_[0].get());
    // If necessary, initialize and fill the bias term
    if (bias_term_) {
      vector<int> bias_shape(1, N_);
      this->blobs_[1].reset(new Blob<Dtype>(bias_shape));
      shared_ptr<Filler<Dtype> > bias_filler(GetFiller<Dtype>(
          this->layer_param_.inner_product_param().bias_filler()));
      bias_filler->Fill(this->blobs_[1].get());
    }
  }  // parameter initialization
  this->param_propagate_down_.resize(this->blobs_.size(), true);
}
    
    namespace caffe {
    }
    
    template <typename Dtype>
void Net<Dtype>::CopyTrainedLayersFromBinaryProto(
    const string& trained_filename) {
  NetParameter param;
  ReadNetParamsFromBinaryFileOrDie(trained_filename, &param);
  CopyTrainedLayersFrom(param);
}
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
            ConfigArray sSizes = config('streamSizes', '');
        m_streamSizes = sSizes;
        sSizes = config('lookupTableOrderSizes', ''); // this allows having a multiple streams of inputs with
        // different lookuptable order sizes. the older one lookupTableOrder is still kept to have backward
        // support.
        m_lookupTabelOrderSizes = sSizes;
    
            // this section is for back compat only, skip over
        if (fstream.TryGetMarker(FileMarker::fileMarkerBeginSection, L'BNodesReqMultiSeqHandling'))
        {
            fprintf(stderr, 'WARNING: Ignoring defunct 'BNodesReqMultiSeqHandling' section in input file.\n');
            fstream >> num;
            for (size_t i = 0; i < num; i++)
                fstream >> nodeName; // dummy
            fstream.GetMarker(FileMarker::fileMarkerEndSection, L'ENodesReqMultiSeqHandling');
        }
    
            combinedEvalOrder = SortByGlobalEvalOrder(combinedEvalOrder);
        set<ComputationNodeBasePtr> completedSEQNodes;
        for (auto& node : combinedEvalOrder)
        {
            if (node->IsPartOfLoop())
            {
                shared_ptr<SEQTraversalFlowControlNode> recInfo = FindInRecurrentLoops(m_allSEQNodes, node);
                assert(recInfo != nullptr);
                if (completedSEQNodes.insert(recInfo).second)
                    node = recInfo;
                else
                    node = nullptr;
            }
    }
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    
    {
    {
    {
    {BOOST_AUTO_TEST_SUITE_END()
}}}}

    
    
    {    // After values of accumulators have been aggregated across nodes, we have to update evaluation results for
    // evaluation nodes that accumulate results.
    UpdateEpochEvaluationForAccumulatedResult<ElemType>(epochEvalErrors, evaluationNodes, localEpochEvalErrors,
                                                        containsAccumulatedResult);
}