
        
          virtual bool Next(void) {
    if (out_ != nullptr) {
      recycle_queue_.push(out_); out_ = nullptr;
    }
    // do recycle
    if (recycle_queue_.size() == param_.prefetch_buffer) {
      DataBatch *old_batch =  recycle_queue_.front();
      // can be more efficient on engine
      for (NDArray& arr : old_batch->data) {
        arr.WaitToWrite();
      }
      recycle_queue_.pop();
      iter.Recycle(&old_batch);
    }
    return iter.Next(&out_);
  }
  virtual const DataBatch &Value(void) const {
    return *out_;
  }
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
    template<typename xpu>
void NDArrayOp<xpu>::Forward(const OpContext &ctx,
                   const std::vector<TBlob> &in_data,
                   const std::vector<OpReqType> &req,
                   const std::vector<TBlob> &out_data,
                   const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }
    
    int64_t VMTOC::getValue(int64_t index, bool qword) {
  HPHP::Address addr = reinterpret_cast<HPHP::Address>(
      static_cast<intptr_t>(index) + getPtrVector());
  int64_t ret_val = 0;
  int max_elem = qword ? 8 : 4;
  for (int i = max_elem-1; i >= 0; i--) {
    ret_val = addr[i] + (ret_val << 8);
  }
  return ret_val;
}
    
      void EmitXFXForm(const uint8_t op,
                   const RegNumber rs,
                   const SpecialReg spr,
                   const uint16_t xo,
                   const uint8_t rsv = 0) {
    }
    
      // The HHIRLICM runtime option is all capitals, so separation
  // cannot be determined. Special case it.
  boost::replace_first(out, 'hhirlicm', 'hhir_licm');
  // The HHVM ini option becomes the standard PHP option.
  boost::replace_first(out,
                       'hhvm.server.upload.max_file_uploads',
                       'max_file_uploads');
  // Make sure IPv6 or IPv4 are handled correctly
  boost::replace_first(out, '_i_pv', '_ipv');
  boost::replace_first(out, '.i_pv', '.ipv');
  // urls are special too. Let's not have 'ur_ls'
  boost::replace_first(out, '_ur_ls', '_urls');
  boost::replace_first(out, '.ur_ls', '.urls');
  // No use of Eval in our ini strings
  boost::replace_first(out, '.eval.', '.');
  boost::replace_first(out, '.my_sql.', '.mysql.');
  boost::replace_first(out, '.enable_hip_hop_syntax', '.force_hh');
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    ///////////////////////////////////////////////////////////////////////////////