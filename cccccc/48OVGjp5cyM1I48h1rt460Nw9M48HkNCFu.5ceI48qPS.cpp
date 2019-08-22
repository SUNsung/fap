
        
            if (isa<ProtocolDecl>(decl))
      return;
    
    // Crash due to a weak retain count overflow.
// FIXME: can't pass the object's address from InlineRefCounts without hacks
void swift::swift_abortWeakRetainOverflow() {
  swift::fatalError(FatalErrorFlags::ReportBacktrace,
                    'Fatal error: Object's weak reference was retained too many times');
}
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    
    {}  // namespace
    
    static const int kIconWidth = 16;
static const int kIconHeight = 16;
    
    bool NwAppGetArgvSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
    }
    
    NwClipboardSetListSyncFunction::NwClipboardSetListSyncFunction() {
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
    
    {  CHECK_EQ(data.shape_[1], wmat.shape_[1])
    << 'Incomplete weight tensor detected: weight.data().shape[1] != prod(data.data().shape[1:]).'
       ' This is not supported by FCForward. If weight is in row_sparse format,'
       ' please make sure all row ids are present.';
  // Legacy approach shown here for comparison:
  //   out = dot(data, wmat.T());
  linalg_gemm(data, wmat, out, false, true, s);
  if (!param.no_bias) {
    Tensor<xpu, 1, DType> bias = in_data[fullc::kBias].get_with_shape<xpu, 1, DType>(
      Shape1(wmat.shape_[0]), s);
    CHECK_EQ(bias.shape_[0], wmat.shape_[0])
      << 'Incomplete bias tensor detected: bias.data().shape[1] != weight.data().shape[0].'
         ' This is not supported by FCForward. If bias is in row_sparse format, please'
         ' make sure all row ids are present.';
    out += repmat(bias, data.size(0));
  }
}
    
                const char *type = getenv('MXNET_GPU_MEM_POOL_TYPE');
            const bool default_pool = (type == nullptr);
            if (default_pool) type = 'Naive';
            std::string strategy = type;
    
    then we have::
    
    template <typename DType>
void VanillaRNNBackwardSingleLayer(DType* ws,
                                   DType* tmp_buf,
                                   const int D,
                                   const int T,
                                   const int N,
                                   const int I,
                                   const int H,
                                   const Tensor<cpu, 2, DType> &x,
                                   const Tensor<cpu, 2, DType> &hx,
                                   DType* wx_ptr,
                                   DType* wh_ptr,
                                   DType* y_ptr,
                                   DType* dy_ptr,
                                   DType* dhy_ptr,
                                   DType* gateN,
                                   DType* dx,
                                   DType* dhx,
                                   DType* dwx,
                                   DType* dwh,
                                   DType* dbx,
                                   DType* dbh,
                                   int req_data,
                                   int req_params,
                                   int req_state,
                                   int mode) {
  DType* dyt;
  DType* ht1;  // [N, D, H]
  DType* dart;
  DType* nt;
  DType* dar = ws;  // [T, N, H]
  DType* dht1 = dar + T * N * H;  // [D, N, H]
  DType* hx_ = dht1 + D * N * H;  // [N, D, H]
    }
    
        Tensor<xpu, 4, DType> grad_out = out_grad[deformablepsroipool::kOut].get<xpu, 4, DType>(s);
    Tensor<xpu, 4, DType> data = in_data[deformablepsroipool::kData].get<xpu, 4, DType>(s);
    Tensor<xpu, 2, DType> bbox = in_data[deformablepsroipool::kBox].get<xpu, 2, DType>(s);
    Tensor<xpu, 4, DType> top_count = out_data[deformablepsroipool::kTopCount]
                                        .get<xpu, 4, DType>(s);
    Tensor<xpu, 4, DType> grad_in = in_grad[deformablepsroipool::kData].get<xpu, 4, DType>(s);
    Tensor<xpu, 2, DType> grad_roi = in_grad[deformablepsroipool::kBox].get<xpu, 2, DType>(s);
    Tensor<xpu, 4, DType> grad_trans;
    Tensor<xpu, 4, DType> trans;
    if (!param_.no_trans) {
      CHECK_EQ(in_grad.size(), 3);
      trans = in_data[deformablepsroipool::kTrans].get<xpu, 4, DType>(s);
      grad_trans = in_grad[deformablepsroipool::kTrans].get<xpu, 4, DType>(s);
    }
    
    namespace index_array_enum {
enum IndexArrayOpInputs {kIn};
enum IndexArrayOpOutputs {kOut};
enum IndexArrayOpResource {kTempSpace};
}  // namespace index_array_enum
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
        if (loc_ + batch_size_ <= param_.num_examples) {
      batch_data_.dptr_ = top_[DATA]->mutable_cpu_data();
      batch_label_.dptr_ = top_[LABEL]->mutable_cpu_data();
    }
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    extern size_t getMachineShard(const std::string& hostname = '',
                              bool force = false);
    
      rj::Document doc;
  if (doc.Parse(request.at('log').c_str()).HasParseError()) {
    return;
  }
    
      /** @brief Virtual method which should implement custom logging.
   *
   *  LoggerPlugin::logString should be implemented by a subclass of
   *  LoggerPlugin which needs to log a string in a custom way.
   *
   *  @return an instance of osquery::Status which indicates the success or
   *  failure of the operation.
   */
  virtual Status logString(const std::string& s) = 0;
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
      /// The plugin may publish route info (other than registry type and name).
  virtual PluginResponse routeInfo() const {
    return PluginResponse();
  }
    
      /// Given a query, return the list of scanned tables.
  virtual Status getQueryTables(const std::string& query,
                                std::vector<std::string>& tables) const = 0;
    
    GTEST_TEST(InMemoryDatabaseTest, test_keys_search) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_1', 1).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_2', 2).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_3', 3).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_1', 4).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_2', 5).isError());
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
    
    {    update_db = (!dr.added.empty() || !dr.removed.empty());
  } else {
    dr.added = std::move(current_qd);
    target_gd = &dr.added;
  }