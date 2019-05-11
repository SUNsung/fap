
        
        OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    #if DMLC_ENABLE_STD_THREAD
namespace xgboost {
namespace data {
    }
    }
    
    namespace xgboost {
namespace obj {
    }
    }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost

    
    void SimpleCSRSource::SaveBinary(dmlc::Stream* fo) const {
  int tmagic = kMagic;
  fo->Write(&tmagic, sizeof(tmagic));
  info.SaveBinary(fo);
  fo->Write(page_.offset.HostVector());
  fo->Write(page_.data.HostVector());
}