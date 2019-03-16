
        
        /**
 * \brief The class sets caffe's mode before doing forward/backward
 * \tparam xpu The device that the op will be executed on.
 */
class CaffeMode {
 public:
  template<typename xpu> static void SetMode();
};
    
    
    {    // one-liner channel-wise normalization
    switch (data.shape_[0]) {
      case 4:
        if (meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[3] = ((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (!meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else {
          outimg_[3] = ((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        }
      case 3:
        if (meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[2] = ((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (!meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else {
          outimg_[2] = ((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        }
      case 2:
        if (meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[1] = ((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (!meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else {
          outimg_[1] = ((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        }
      case 1:
        if (meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[0] = ((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (!meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else {
          outimg_[0] = ((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        }
        break;
      default:
        LOG(FATAL) << 'Expected image channels range 1-4, got ' << data.shape_[0];
    }
  }
    
      virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    InitParams(kwargs);
    // use the kwarg to init batch loader
    loader_->Init(kwargs);
    iter.Init([this](DataBatch **dptr) {
        if (!loader_->Next()) return false;
        const TBlobBatch& batch = loader_->Value();
        if (*dptr == nullptr) {
          // allocate databatch
          *dptr = new DataBatch();
          (*dptr)->num_batch_padd = batch.num_batch_padd;
          (*dptr)->data.resize(batch.data.size());
          (*dptr)->index.resize(batch.batch_size);
          for (size_t i = 0; i < batch.data.size(); ++i) {
            auto dtype = param_.dtype
                             ? param_.dtype.value()
                             : batch.data[i].type_flag_;
            (*dptr)->data.at(i) = NDArray(batch.data[i].shape_,
                                          Context::CPU(), false,
                                          dtype);
          }
        }
        CHECK(batch.data.size() == (*dptr)->data.size());
        // copy data over
        for (size_t i = 0; i < batch.data.size(); ++i) {
          CHECK_EQ((*dptr)->data.at(i).shape(), batch.data[i].shape_);
          MSHADOW_TYPE_SWITCH(batch.data[i].type_flag_, DType, {
              mshadow::Copy(((*dptr)->data)[i].data().FlatTo2D<cpu, DType>(),
                        batch.data[i].FlatTo2D<cpu, DType>());
          });
          (*dptr)->num_batch_padd = batch.num_batch_padd;
        }
        if (batch.inst_index) {
          std::copy(batch.inst_index,
                    batch.inst_index + batch.batch_size,
                    (*dptr)->index.begin());
        }
       return true;
      },
      [this]() { loader_->BeforeFirst(); });
  }
    
      virtual ~GradientCompression() {}
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(out.size(0), out.size(2), out.size(3), 2);
    Tensor<gpu, 3, DType> loc = in_data[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                                .get_with_shape<gpu, 4, DType>(grid_shape, s);
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorForward(s->dnn_handle_,
                                                    st_desc_,
                                                    loc.dptr_,
                                                    grid.dptr_));
    }
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    void deleteLinkedList(ListNode* head){
    }
    
    
    {    return head;
}
    
    int main() {
    }
    
            vector<int> res;
        if(root == NULL)
            return res;
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    }
    
    
    {    return 0;
}
    
    int main() {
    }