
        
        std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status) {
  if (!PyList_Check(input_constant_tensor_values)) {
    TF_SetStatus(out_status, TF_INVALID_ARGUMENT, 'Invalid python value');
    return std::vector<string>();
  }
    }
    
    // Get the python wrappers for a list of ops in a OpList.
// `op_list_buf` should be a pointer to a buffer containing
// the binary encoded OpList proto, and `op_list_len` should be the
// length of that buffer.
string GetPythonWrappers(const char* op_list_buf, size_t op_list_len);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      void Compute(OpKernelContext* context) override {
    // Output a scalar string.
    Tensor* output_tensor = nullptr;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, TensorShape(), &output_tensor));
    auto output = output_tensor->scalar<string>();
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace tensorflow

    
      // Attempt to get the next record at 'current_offset()'. Populates status
  // with OK on success, OUT_OF_RANGE for end of file, DATA_LOSS for some
  // kinds of truncated reads, or another code for other errors
  // (e.g., filesystem errors).
  void GetNext(TF_Status* status);
    
    void AtomContentClient::AddAdditionalSchemes(Schemes* schemes) {
  schemes->standard_schemes.push_back('chrome-extension');
    }
    
    // static
void UvTaskRunner::OnTimeout(uv_timer_t* timer) {
  UvTaskRunner* self = static_cast<UvTaskRunner*>(timer->data);
  if (!ContainsKey(self->tasks_, timer))
    return;
    }
    
    #include 'atom/browser/api/atom_api_web_contents.h'
#include 'atom/browser/browser.h'
#include 'atom/browser/native_browser_view.h'
#include 'atom/common/color_util.h'
#include 'atom/common/native_mate_converters/gfx_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'atom/common/node_includes.h'
#include 'atom/common/options_switches.h'
#include 'native_mate/constructor.h'
#include 'native_mate/dictionary.h'
#include 'ui/gfx/geometry/rect.h'
    
    #endif  // ATOM_BROWSER_API_ATOM_API_BUTTON_H_

    
        // Downloadable Content Information
    dict.Set('isDownloadable', val.downloadable);
    
    #include 'atom/common/api/constructor.h'
#include 'base/strings/utf_string_conversions.h'
#include 'native_mate/dictionary.h'
#include 'ui/views/controls/button/label_button.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_modified_;
}
    
    
    {  base::WaitableEvent done(base::WaitableEvent::ResetPolicy::AUTOMATIC,
                           base::WaitableEvent::InitialState::NOT_SIGNALED);
  content::BrowserThread::PostTask(
      content::BrowserThread::IO, FROM_HERE,
      base::Bind(&SetProxyConfigCallback, &done,
                 base::WrapRefCounted(context_getter), config));
  done.Wait();
  return true;
}
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.crashBrowser', UNKNOWN)
};
    
        bool WriteImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::string content = *(data.data);
    }
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
    
    class NwObjCallObjectMethodSyncFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {    int n_aux = this->ListAuxiliaryStates().size();
    aux_type->clear();
    for (int i = 0; i < n_aux; ++i ) aux_type->push_back(mshadow::default_type_flag);
    return true;
  }
  /*!
   * \brief Copy this OperatorProperty.
   * \return a pointer to the copied OperatorProperty
   */
  virtual OperatorProperty* Copy() const = 0;
  /*!
   * \brief Create a Operator on specific context
   */
  virtual Operator* CreateOperator(Context ctx) const = 0;
  /*!
   * \brief Create a Operator on specific context and input shape/type
   * \param ctx context of this operator
   * \param in_shape shape of the input ndarrays
   * \param in_type dtype of the input ndarrays
   * \return the created operator
   */
  virtual Operator* CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
    std::vector<int> out_type, aux_type;
    std::vector<TShape> out_shape, aux_shape;
    out_type.resize(this->ListOutputs().size());
    out_shape.resize(this->ListOutputs().size());
    aux_type.resize(this->ListAuxiliaryStates().size());
    aux_shape.resize(this->ListAuxiliaryStates().size());
    CHECK(InferType(in_type, &out_type, &aux_type));
    CHECK(InferShape(in_shape, &out_shape, &aux_shape));
    return CreateOperator(ctx);
  }
  /*!
   * \brief return the type string of the Operator
   *  subclasses override this function.
   * \return The type string.
   */
  virtual std::string TypeString() const = 0;
  //--------------------------------------------------------
  // All the below functions are optional to override.
  //--------------------------------------------------------
  /*!
   * \brief Declare additional resource required in forward pass.
   *  These additional resources will be presented in OpContext.requested
   *  in the same order of the returned Resource.
   * \param in_shape The input shape to the operator, corresponds to shapes of in_data.
   * \return Additional resource request
   */
  virtual std::vector<ResourceRequest> ForwardResource(
      const std::vector<TShape> &in_shape) const {
    return std::vector<ResourceRequest>();
  }
  /*!
   * \brief Declare additional resource required in backward pass.
   *  These additional resources will be presented in OpContext.requested
   *  in the same order of the returned Resource.
   * \param in_shape The input shape to the operator, corresponds to shapes of in_data.
   * \return Additional resource request
   */
  virtual std::vector<ResourceRequest> BackwardResource(
      const std::vector<TShape> &in_shape) const {
    return std::vector<ResourceRequest>();
  }
  /*!
   * \brief Declare the input requirement of Backward pass.
   *
   *  Only the returned list of variables will be used in Backward.
   *  This function is used for memory optimization.
   *  It is advised to override and only return what is actually needed.
   *  If this function is not overriden, all the variables will be valid in Backward.
   *
   * \code
   *  // The following code declares Backward need out_grad[0], in_data[0],in_data[1]
   *  vector<int> BackwardInputs(const vector<int> &out_grad,
   *                             const vector<int> &in_data,
   *                             const vector<int> &out_data) const {
   *    return {out_grad[0], in_data[0], in_data[1]};
   *  }
   * \endcode
   * \param out_grad gradient of outputs in backward pass.
   * \param in_data the input data in forward pass.
   * \param out_data the output data in forward pass.
   * \return an integer vector indicating the input requirments
   * \sa BackwardInputs
   */
  virtual std::vector<int> DeclareBackwardDependency(
      const std::vector<int> &out_grad,
      const std::vector<int> &in_data,
      const std::vector<int> &out_data) const {
    // By default requires to see all the things.
    // remember to override this function to get a better performance.
    std::vector<int> ret = out_grad;
    ret.insert(ret.end(), in_data.begin(), in_data.end());
    ret.insert(ret.end(), out_data.begin(), out_data.end());
    return ret;
  }
  /*!
   * \brief Get possible forward inplace options.
   *  This function enables optimization to reuse memory of inputs in output.
   *  Only override when necessary, by default in-place is disabled.
   *
   *  The reason for void* type in the out_data is to distinguish the order
   *  of mappings between the two, compiler will report error when
   *  in_data and out_data's order in the pair get reversed.
   *
   * \code
   *  // The following code says out_data[0] can share data with in_data[0]
   *  vector<pair<int, void*> > ForwardInplaceOption(const vector<int> &in_data,
   *                                                 const vector<void*> &out_data) const {
   *    return {{in_data[0], out_data[0]}};
   *  }
   * \endcode
   * \param in_data The input data in forward pass.
   * \param out_data The output data in forward pass.
   * \return list of pair of that maps input->output,
   *   indicating possible in place operations.
   */
  virtual std::vector<std::pair<int, void*> > ForwardInplaceOption(
      const std::vector<int> &in_data,
      const std::vector<void*> &out_data) const {
    return std::vector<std::pair<int, void*> >();
  }
  /*!
   * \brief Get possible backward inplace options.
   *  This function enables optimization to reuse memory of inputs in output.
   *  Only override when necessary, by default in-place is disabled.
   *
   *  The reason for void* type in the in_grad is to distinguish the order
   *  of mappings between the two, compiler will report error when
   *  in_data and out_data's order in the pair get reversed.
   *
   * \code
   *  // The following code says in_grad[0] can share data with in_data[0]
   *  vector<pair<int,int> > BackwardInplaceOption(
   *                 const std::vector<int> &out_grad,
   *                 const std::vector<int> &in_data,
   *                 const std::vector<int> &out_data,
   *                 const std::vector<int> &in_grad) const {
   *    return {in_data[0], in_grad[0]}};
   *  }
   * \endcode
   * \param in_data The input data in forward pass.
   * \param out_data The output data in forward pass.
   * \param in_grad Gradient of inputs in backward pass.
   * \param out_grad Gradient of outputs in backward pass.
   * \return list of pair of that maps input->output,
   *   indicating possible in place operations.
   */
  virtual std::vector<std::pair<int, void*> > BackwardInplaceOption(
      const std::vector<int> &out_grad,
      const std::vector<int> &in_data,
      const std::vector<int> &out_data,
      const std::vector<void*> &in_grad) const {
    return std::vector<std::pair<int, void*> >();
  }
  /*!
   * \brief Get Backward Input Dependency for generic types of data.
   *  Normally T can be pointer of Symbol::DataEntry, or NDArray.
   *  This function will select the result list of T according to DeclareBackwardDependency.
   *
   * \param in_data the input data in forward pass.
   * \param out_data the output data in forward pass.
   * \param out_grad gradient of outputs in backward pass.
   * \tparam T the generic type parameter.
   * \return vector of inputs the Backward Operation depends on.
   * \sa DeclareBackwardDependency
   */
  template<typename T>
  inline std::vector<T> BackwardInputs(const std::vector<T> &out_grad,
                                       const std::vector<T> &in_data,
                                       const std::vector<T> &out_data) const {
    int counter = 0;
    std::vector<int> out_grad_index(out_grad.size());
    std::vector<int> in_data_index(in_data.size());
    std::vector<int> out_data_index(out_data.size());
    for (size_t i = 0; i < out_grad_index.size(); ++i) {
      out_grad_index[i] = counter++;
    }
    for (size_t i = 0; i < in_data_index.size(); ++i) {
      in_data_index[i] = counter++;
    }
    for (size_t i = 0; i < out_data_index.size(); ++i) {
      out_data_index[i] = counter++;
    }
    std::vector<T> all_data;
    all_data.insert(all_data.end(), out_grad.begin(), out_grad.end());
    all_data.insert(all_data.end(), in_data.begin(), in_data.end());
    all_data.insert(all_data.end(), out_data.begin(), out_data.end());
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    // Set mode before forward
    caffe::CaffeMode::SetMode<xpu>();
    using ::caffe::Blob;
    using std::vector;
    using namespace mshadow;
    using namespace mshadow::expr;
    for (uint32_t i = 0; i < req.size(); ++i)
      CHECK_EQ(req[i], kWriteTo);
    }
    
    
    {
    {    // really delete
    if (to_delete_) {
      VersionedVarBlock *head = pending_write_->next;
      VersionedVarBlock::Delete(pending_write_);
      assert(head_ == head);
      VersionedVarBlock::Delete(head);
      return true;
    }
    // detach pending write
    old_pending_write = pending_write_;
    // search for chains to trigger
    end_of_read_chain = old_pending_write->next;
    // reset to 0 pending reads
    num_pending_reads_ = 0;
    while (end_of_read_chain != head_ &&
           end_of_read_chain->write == false) {
      ++num_pending_reads_;
      end_of_read_chain = end_of_read_chain->next;
    }
    if (end_of_read_chain == head_) {
      pending_write_ = nullptr;
    } else {
      // check if there is pending reads, if not trigger write
      assert(end_of_read_chain->write == true);
      pending_write_ = end_of_read_chain;
      if (num_pending_reads_ == 0) {
        // mark write as already activated in this var
        num_pending_reads_ = kWriteTriggered;
        trigger_write = end_of_read_chain->trigger;
      }
    }
  }
  // This is outside of lock scope
  // Be very carful, pending_write_ and num_pending_reads_
  // can change now, do not reply ont the two variables.
  // The linked list \in [old_pending_write, end_of_read_chain)
  // is already detached from this Var.
  // So it is safe to modify these
  VersionedVarBlock *cur_head = old_pending_write->next;
  VersionedVarBlock::Delete(old_pending_write);
  // dispatch all the events
  while (cur_head != end_of_read_chain) {
    if (cur_head->trigger->decr_wait() == 0) {
      dispatcher(cur_head->trigger);
    }
    auto prev = cur_head;
    cur_head = cur_head->next;
    assert(cur_head != nullptr);
    VersionedVarBlock::Delete(prev);
  }
  if (trigger_write != nullptr && trigger_write->decr_wait() == 0) {
    dispatcher(trigger_write);
  }
  return false;
}
    
    class DHTMessageCallback;
    
    
    {  const int clen = bittorrent::getCompactLength(family_);
  // nodes
  for (std::vector<std::shared_ptr<DHTNode>>::const_iterator i = nodes_.begin(),
                                                             eoi = nodes_.end();
       i != eoi; ++i) {
    const std::shared_ptr<DHTNode>& node = *i;
    // Write IP address + port in Compact IP-address/port info form.
    unsigned char compactPeer[COMPACT_LEN_IPV6];
    int compactlen = bittorrent::packcompact(compactPeer, node->getIPAddress(),
                                             node->getPort());
    if (compactlen != clen) {
      memset(compactPeer, 0, clen);
    }
    uint8_t clen1 = clen;
    // 1byte compact peer format length
    WRITE_CHECK(fp, &clen1, sizeof(clen1));
    // 7bytes reserved
    WRITE_CHECK(fp, zero, 7);
    // clen bytes compact peer
    WRITE_CHECK(fp, compactPeer, static_cast<size_t>(clen));
    // 24-clen bytes reserved
    WRITE_CHECK(fp, zero, static_cast<size_t>(24 - clen));
    // 20bytes: node ID
    WRITE_CHECK(fp, node->getID(), DHT_ID_LENGTH);
    // 4bytes reserved
    WRITE_CHECK(fp, zero, 4);
  }
  if (fp.close() == EOF) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  if (!File(filenameTemp).renameTo(filename)) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  A2_LOG_INFO('DHT routing table was saved successfully');
}
    
      void setNodes(const std::vector<std::shared_ptr<DHTNode>>& nodes);
    
    #endif // D_DHT_TASK_FACTORY_H

    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;