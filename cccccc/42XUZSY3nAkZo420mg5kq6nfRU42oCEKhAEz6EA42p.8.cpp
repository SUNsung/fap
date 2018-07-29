
        
        namespace leveldb {
    }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
    namespace leveldb {
    }
    
    
    {}  // namespace leveldb

    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    bool PowerIphone::UpdatePowerInfo() {
	return false;
}
    
    #include 'core/error_list.h'
#include 'websocket_multiplayer.h'
#include 'websocket_peer.h'
    
    #endif /* HAVE_ARM_NE10 */
    
    #undef MULT32_32_Q31
static inline int MULT32_32_Q31(int a, int b)
{
    int r;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (r): 'i' (31));
    return r;
}
    
    #define silk_SUB16(a, b)                    ((a) - (b))
#define silk_SUB32(a, b)                    ((a) - (b))
#define silk_SUB64(a, b)                    ((a) - (b))
    
      virtual bool is_void() {
    return false;
  }
    
        float pred_x1 = pred_ctr_x - 0.5 * (pred_w - 1.0);
    float pred_y1 = pred_ctr_y - 0.5 * (pred_h - 1.0);
    float pred_x2 = pred_ctr_x + 0.5 * (pred_w - 1.0);
    float pred_y2 = pred_ctr_y + 0.5 * (pred_h - 1.0);
    
        Stream<xpu> *s = ctx.get_stream<xpu>();
    
      // assign array to head gradient
  for (size_t i = num_forward_inputs_; i < idx.input_nodes().size(); ++i) {
    uint32_t nid = idx.input_nodes().at(i);
    uint32_t oid = head_grad_map_.at(idx[nid].source);
    uint32_t eid = idx.entry_id(idx.outputs()[oid]);
    NDArrayStorageType stype = (NDArrayStorageType) vstorage_type[eid];
    CHECK_NE(vshape[eid].ndim(), 0U);
    CHECK_NE(vdtype[eid], -1);
    auto data_eid = idx.entry_id(nid, 0);
    // initialize based on storage_type
    if (stype != kDefaultStorage) {
      data_entry_[data_eid] = NDArray(stype, vshape[eid], data_context[eid], true, vdtype[eid]);
    } else {
      data_entry_[data_eid] = NDArray(vshape[eid], data_context[eid], false, vdtype[eid]);
    }
    if (log_verbose_) {
      LOG(INFO) << '\tinit head_grad entry\t' << data_eid << '\tas '
                << common::stype_string(stype);
    }
  }
  // get maximum bytes in each pool
  for (size_t i = 0; i < vshape.size(); ++i) {
    if (!data_entry_[i].is_none()) continue;
    size_t bytes = vshape[i].Size() * mshadow::mshadow_sizeof(vdtype[i]);
    int storage_id = vstorage[i];
    // skip pool allocation for kBadStorageID, kExternalStorageID and kDynamicStorageID
    if (storage_id < 0) continue;
    size_t sid = static_cast<size_t>(storage_id);
    if (sid >= pool_info.size()) {
      pool_info.resize(sid + 1, PoolEntry{Context::CPU(), size_t(0), kUndefinedStorage});
    }
    PoolEntry& info = pool_info[sid];
    if (info.bytes == 0) {
      info = PoolEntry{data_context[i], bytes, data_storage_type[i]};
    } else {
      info.bytes = std::max(info.bytes, bytes);
    }
  }
  // construct the re-use pool, if needed
  std::multimap<size_t, NDArray> free_pool;
  if (shared_pool != nullptr) {
    for (const NDArray& nd : *shared_pool) {
      size_t bytes = nd.shape().Size() * mshadow::mshadow_sizeof(nd.dtype());
      free_pool.insert(std::make_pair(bytes, nd));
    }
  }
  // remake the data pool
  data_pool_.clear();
  data_pool_.resize(pool_info.size());
    
    NNVM_REGISTER_OP(_backward_Concat)
.set_num_outputs([](const NodeAttrs& attrs) {
  const ConcatParam& params = nnvm::get<ConcatParam>(attrs.parsed);
  return params.num_args;
})
.set_attr_parser(ParamParser<ConcatParam>)
#if MXNET_USE_MKLDNN == 1
.set_attr<FResourceRequest>('FResourceRequest', [](const NodeAttrs& n) {
  return std::vector<ResourceRequest>{ResourceRequest::kTempSpace};
})
#endif
.set_attr<nnvm::TIsBackward>('TIsBackward', true)
.set_attr<FInferStorageType>('FInferStorageType', BackwardConcatStorageType)
#if MXNET_USE_MKLDNN == 1
.set_attr<FComputeEx>('FComputeEx<cpu>', ConcatGradComputeExCPU)
#endif
.set_attr<FCompute>('FCompute<cpu>', ConcatGradCompute<cpu>);
    
    void MKLDNNConcatForward(const nnvm::NodeAttrs& attrs, const OpContext &ctx,
                         const std::vector<NDArray> &in_data,
                         const std::vector<OpReqType> &req,
                         const std::vector<NDArray> &out_data) {
  TmpMemMgr::Get()->Init(ctx.requested[concat_enum::kTempSpace]);
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_in_data = param.num_args;
  int concat_dim = param.dim;
  std::vector<mkldnn::memory::primitive_desc> data_md;
  std::vector<const mkldnn::memory *> data_mem;
  data_md.reserve(num_in_data);
  data_mem.reserve(num_in_data);
  for (int i = 0; i < num_in_data; i++) {
    const mkldnn::memory *tmp_mem = in_data[i].GetMKLDNNData();
    mkldnn::memory::primitive_desc tmp_pd = tmp_mem->get_primitive_desc();
    data_md.push_back(tmp_pd);
    data_mem.push_back(tmp_mem);
  }
  MKLDNNConcatFwd &fwd = GetConcatForward(concat_dim, in_data, data_md);
  mxnet::mkldnn_output_t out_mem = CreateMKLDNNMem(out_data[concat_enum::kOut],
                                                   fwd.fwd_pd.dst_primitive_desc(),
                                                   req[concat_enum::kOut]);
  fwd.SetNewMem(data_mem, *out_mem.second);
  MKLDNNStream::Get()->RegisterPrim(fwd.GetFwd());
  CommitOutput(out_data[concat_enum::kOut], out_mem);
  MKLDNNStream::Get()->Submit();
}
    
    
    {  common::ParallelSort(uniq_row_idx->begin(), uniq_row_idx->end(), nthreads);
  auto it = std::unique(uniq_row_idx->begin(), uniq_row_idx->end());
  uniq_row_idx->resize(it - uniq_row_idx->begin());
}
    
    The storage type of ``add_n`` output depends on storage types of inputs
    
    static inline bool BilinearSampleOpStorageType(const nnvm::NodeAttrs &attrs,
                                               const int dev_mask,
                                               DispatchMode *dispatch_mode,
                                               std::vector<int> *in_attrs,
                                               std::vector<int> *out_attrs) {
  CHECK_EQ(in_attrs->size(), 1);
  CHECK_EQ(out_attrs->size(), 1);
  *dispatch_mode = DispatchMode::kFCompute;
  for (int& v : *in_attrs) {
    if (v == - 1) v = kDefaultStorage;
  }
  for (size_t i = 0; i < out_attrs->size(); i++) {
    (*out_attrs)[i] = kDefaultStorage;
  }
  return true;
}