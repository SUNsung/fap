
        
        #endif // BITCOIN_QT_MACDOCKICONHANDLER_H

    
    private:
    PlatformStyle(const QString &name, bool imagesOnButtons, bool colorizeIcons, bool useExtraSpacing);
    
        void setModel(WalletModel *model);
    void setAddress_SM(const QString &address);
    void setAddress_VM(const QString &address);
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    /** Generate blocks (mine) */
UniValue generateBlocks(std::shared_ptr<CReserveScript> coinbaseScript, int nGenerate, uint64_t nMaxTries, bool keepScript);
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    #ifndef SECP256K1_MODULE_RECOVERY_TESTS_H
#define SECP256K1_MODULE_RECOVERY_TESTS_H
    
    BOOST_AUTO_TEST_SUITE_END()

    
    static void CheckParseTorReplyMapping(std::string input, std::map<std::string,std::string> expected)
{
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(') + input + ')');
    auto ret = ParseTorReplyMapping(input);
    BOOST_CHECK_EQUAL(ret.size(), expected.size());
    auto r_it = ret.begin();
    auto e_it = expected.begin();
    while (r_it != ret.end() && e_it != expected.end()) {
        BOOST_CHECK_EQUAL(r_it->first, e_it->first);
        BOOST_CHECK_EQUAL(r_it->second, e_it->second);
        r_it++;
        e_it++;
    }
}
    
        bool getBool() const { return isTrue(); }
    void getObjMap(std::map<std::string,UniValue>& kv) const;
    bool checkObject(const std::map<std::string,UniValue::VType>& memberTypes) const;
    const UniValue& operator[](const std::string& key) const;
    const UniValue& operator[](size_t index) const;
    bool exists(const std::string& key) const { size_t i; return findKey(key, i); }
    
      SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
    
    
    {
    {  SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
};
}  // namespace
    
    AuthPropertyIterator& AuthPropertyIterator::operator++() {
  grpc_auth_property_iterator iter = {ctx_, index_, name_};
  property_ = grpc_auth_property_iterator_next(&iter);
  ctx_ = iter.ctx;
  index_ = iter.index;
  name_ = iter.name;
  return *this;
}
    
    #include <grpcpp/security/auth_context.h>
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    // Returns a string representation of the StatusCode enum.
absl::string_view StatusCodeToString(grpc_status_code code);
    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    //////////////////////////////////////////////////////////////////////
    
    struct Label {
  Label() : m_a(nullptr) , m_address(nullptr) {}
  /* implicit */ Label(CodeAddress predefined) : m_a(nullptr) ,
                                                 m_address(predefined) {}
    }
    
    #include 'hphp/runtime/base/apc-local-array.h'
#include 'hphp/runtime/base/mixed-array-defs.h'
#include 'hphp/runtime/base/memory-manager.h'
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace mxnet {
/*!
 * \brief iterator type
 * \tparam DType data type
 */
template<typename DType>
class IIterator : public dmlc::DataIter<DType> {
 public:
  /*!
   * \brief set the parameters and init iter
   * \param kwargs key-value pairs
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*! \brief reset the iterator */
  virtual void BeforeFirst(void) = 0;
  /*! \brief move to next item */
  virtual bool Next(void) = 0;
  /*! \brief get current data */
  virtual const DType &Value(void) const = 0;
  /*! \brief constructor */
  virtual ~IIterator(void) {}
  /*! \brief store the name of each data, it could be used for making NDArrays */
  std::vector<std::string> data_names;
  /*! \brief set data name to each attribute of data */
  inline void SetDataName(const std::string data_name) {
    data_names.push_back(data_name);
  }
};  // class IIterator
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
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    /*!
 *  Copyright (c) 2016 by Contributors
 * \file cv_api.h
 * \brief C API for opencv
 * \author Junyuan Xie
 */
#include <dmlc/base.h>
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
#include <opencv2/opencv.hpp>
#include 'cv_api.h'
#include '../../src/c_api/c_api_common.h'
    
      // get the shape hints
  std::string shape_hints_key = std::string(attr_name) + '_hints';
  if (ret.attrs.count(shape_hints_key)) {
    nnvm::NodeEntryMap<AttrType> shape_hints =
      ret.GetAttr<nnvm::NodeEntryMap<AttrType>>(shape_hints_key);
    for (const auto& kv : shape_hints) {
      nnvm::NodeEntry e = kv.first;
      if (idx.exist(e.node.get())) {
        rshape[idx.entry_id(kv.first)] = kv.second;
      }
    }
  }