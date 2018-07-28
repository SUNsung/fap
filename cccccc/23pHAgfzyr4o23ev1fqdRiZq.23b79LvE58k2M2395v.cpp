
        
                const float max_dist = 10.0f;
        if(black_order[0].second > max_dist || black_order[1].second > max_dist ||
           white_order[0].second > max_dist || white_order[1].second > max_dist)
        {
            continue; // there will be no improvement in this corner position
        }
    
    template<typename Op>
folly::Optional<Type> key_type_or_fixup(ISS& env, Op op) {
  auto fixup = [&] (Type ty, bool isProp) -> folly::Optional<Type> {
    if (auto const val = tv(ty)) {
      if (isStringType(val->m_type)) {
        op.mkey.mcode = isProp ? MPT : MET;
        op.mkey.litstr = val->m_data.pstr;
        reduce(env, op);
        return folly::none;
      }
      if (!isProp && val->m_type == KindOfInt64) {
        op.mkey.mcode = MEI;
        op.mkey.int64 = val->m_data.num;
        reduce(env, op);
        return folly::none;
      }
    }
    return std::move(ty);
  };
  switch (op.mkey.mcode) {
    case MEC: case MPC:
      return fixup(topC(env, op.mkey.idx), op.mkey.mcode == MPC);
    case MEL: case MPL:
      return fixup(locAsCell(env, op.mkey.local), op.mkey.mcode == MPL);
    case MW:
      return TBottom;
    case MEI:
      return ival(op.mkey.int64);
    case MET: case MPT: case MQT:
      return sval(op.mkey.litstr);
  }
  not_reached();
}
    
      /**
   * StreamContext settings for this connection
   */
  void setStreamContextOptions(const Array &opts) {
    m_stream_context_options = opts;
  }
  /**
   * require SLS/TLS
   * (default) CURLUSESSL_NONE, CURLUSESSL_TRY, CURLUSESSL_CONTROL,
   *           CURLUSESSL_ALL
   */
    
    /*!
 * \brief Check whether the value is simple parameter
 * \param val The value to check.
 */
inline bool isSimple(const Rcpp::RObject& val) {
  switch (TYPEOF(val)) {
    case STRSXP:
    case INTSXP:
    case REALSXP:
    case LGLSXP: return true;
    default: return false;
  }
}
    
    void ArrayDataIter::Convert(const Rcpp::NumericVector& src,
                            const std::vector<size_t>& order,
                            size_t batch_size,
                            std::vector<NDArray> *out) {
  Rcpp::RObject dim = src.attr('dim');
  Rcpp::Dimension rshape(dim);
  size_t ndim = rshape.size();
  std::vector<mx_float> temp(src.size()), batch;
  std::copy(src.begin(), src.end(), temp.begin());
  out->clear();
  out->reserve(rshape[ndim - 1] / batch_size + 1);
  size_t line_size = 1;
  for (size_t i = 0; i < rshape.size() - 1; ++i) {
    line_size *= rshape[i];
  }
  rshape[ndim - 1] = batch_size;
  batch.resize(batch_size * line_size, 0.0f);
    }
    
    
    { private:
  // make constructor private
  explicit NDArrayFunction(OpHandle handle, std::string name);
  /*! \brief internal functioon handle. */
  OpHandle handle_;
  // name of the function
  std::string name_;
  // keyword arguments.
  std::string key_var_num_args_;
  // name of arguments
  std::vector<std::string> arg_names_;
  // check
  std::vector<bool> arg_nd_array_;
  // ther formals of arguments
  Rcpp::List formals_;
};
    
    /*!
 * \brief All the possible information needed by Operator.Forward and Backward
 *  This is the superset of RunContext.
 *  We use this data structure to bookkeep everything needed by Forward and Backward.
 * \sa Resource
 */
struct OpContext {
  /*! \brief whether there is a backward phase to compute gradients. */
  bool need_grad;
  /*! \brief whether it is training phase */
  bool is_train;
  /*! \brief RunContext related resources */
  RunContext run_ctx;
  /*! \brief the callback when operation completes, used by asynchronize ops */
  engine::CallbackOnComplete async_on_complete;
  /*! \brief Resources requested by the operator */
  std::vector<Resource> requested;
  /*!
   * \brief get mshadow stream from Context
   * \return the mshadow stream
   * \tparam xpu the device type of the stream
   */
  template<typename xpu>
  inline mshadow::Stream<xpu>* get_stream() const {
    return run_ctx.get_stream<xpu>();
  }
};
    
    
    {  if (map_key_var_args.count(op) != 0) {
    *key_var_num_args = map_key_var_args[op].c_str();
  } else {
    *key_var_num_args = ret->ret_str.c_str();
  }
  return NNGetOpInfo(
      creator, name, description,
      num_args, arg_names, arg_type_infos,
      arg_descriptions, return_type);
}
    
    nnvm::NodeEntry AggregateGradient(std::vector<nnvm::NodeEntry>&& v);
    
    void ElementwiseSumDnsCsrDnsImpl(mshadow::Stream<cpu>* s,
                                 const Resource& rsc,
                                 const std::vector<NDArray>& nds,
                                 NDArray* out) {
  using namespace mxnet::op;
  using namespace mxnet::op::mxnet_op;
  const TBlob& out_data = out->data();
  MSHADOW_TYPE_SWITCH(out->dtype(), DType, {  // data type
    Kernel<Sum, cpu>::Launch(
      s, out_data.Size(), out_data.dptr<DType>(), kWriteTo, nds[0].data().dptr<DType>(),
      nds[2].data().dptr<DType>());
    const TBlob& csr_data = nds[1].data();
    const TBlob& csr_indices = nds[1].aux_data(csr::kIdx);
    const TBlob& csr_indptr = nds[1].aux_data(csr::kIndPtr);
    const nnvm::dim_t num_rows = nds[1].shape()[0];
    const nnvm::dim_t num_cols = nds[1].shape()[1];
    MSHADOW_IDX_TYPE_SWITCH(csr_indices.type_flag_, IType, {  // indices type
      MSHADOW_IDX_TYPE_SWITCH(csr_indptr.type_flag_, CType, {  // indptr type
        if (nds[1].storage_initialized()) {
          Kernel<ElemwiseDnsCsrDnsKernel<kWriteTo, mshadow_op::plus>, cpu>::Launch(
            s, num_rows, out_data.dptr<DType>(), out_data.dptr<DType>(),
            csr_data.dptr<DType>(), csr_indices.dptr<IType>(),
            csr_indptr.dptr<CType>(), num_rows, num_cols);
        }
      });
    });
  });
}
    
    bool ElementWiseSumForwardInferStorageType(const nnvm::NodeAttrs& attrs,
                                           const int dev_mask,
                                           DispatchMode* dispatch_mode,
                                           std::vector<int> *in_attrs,
                                           std::vector<int> *out_attrs) {
  CHECK(!in_attrs->empty());
  CHECK_EQ(out_attrs->size(), 1U);
  bool ret = ElemwiseStorageAttr<false, true, false>(attrs, dev_mask, dispatch_mode,
                                                     in_attrs, out_attrs);
#if MXNET_USE_MKLDNN == 1
  // We should always use FComputeEx.
  if (dev_mask == mshadow::cpu::kDevMask
      && common::ContainsOnlyStorage(*in_attrs, kDefaultStorage)
      && out_attrs->at(0) == kDefaultStorage) {
    *dispatch_mode = DispatchMode::kFComputeEx;
  }
#endif
  return ret;
}