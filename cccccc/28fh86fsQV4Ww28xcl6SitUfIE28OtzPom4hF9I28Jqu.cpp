
        
            /* Check bad contexts and NULLs for signing */
    ecount = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(none, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(sign, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(vrfy, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, NULL, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, NULL, privkey, NULL, NULL) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, NULL, NULL, NULL) == 0);
    CHECK(ecount == 5);
    /* This will fail or succeed randomly, and in either case will not ARG_CHECK failure */
    secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, recovery_test_nonce_function, NULL);
    CHECK(ecount == 5);
    /* These will all fail, but not in ARG_CHECK way */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, zero_privkey, NULL, NULL) == 0);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, over_privkey, NULL, NULL) == 0);
    /* This one will succeed. */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 5);
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    /* Given a BlockIndex with the provided nbits,
 * verify that the expected difficulty results.
 */
static void TestDifficulty(uint32_t nbits, double expected_difficulty)
{
    CBlockIndex* block_index = CreateBlockIndexWithNbits(nbits);
    double difficulty = GetDifficulty(block_index);
    delete block_index;
    }
    
    BOOST_AUTO_TEST_CASE(util_ParseTorReplyMapping)
{
    // Data we should receive during normal usage
    CheckParseTorReplyMapping(
        'METHODS=COOKIE,SAFECOOKIE COOKIEFILE=\'/home/x/.tor/control_auth_cookie\'', {
            {'METHODS', 'COOKIE,SAFECOOKIE'},
            {'COOKIEFILE', '/home/x/.tor/control_auth_cookie'},
        });
    CheckParseTorReplyMapping(
        'METHODS=NULL', {
            {'METHODS', 'NULL'},
        });
    CheckParseTorReplyMapping(
        'METHODS=HASHEDPASSWORD', {
            {'METHODS', 'HASHEDPASSWORD'},
        });
    CheckParseTorReplyMapping(
        'Tor=\'0.2.9.8 (git-a0df013ea241b026)\'', {
            {'Tor', '0.2.9.8 (git-a0df013ea241b026)'},
        });
    CheckParseTorReplyMapping(
        'SERVERHASH=aaaa SERVERNONCE=bbbb', {
            {'SERVERHASH', 'aaaa'},
            {'SERVERNONCE', 'bbbb'},
        });
    CheckParseTorReplyMapping(
        'ServiceID=exampleonion1234', {
            {'ServiceID', 'exampleonion1234'},
        });
    CheckParseTorReplyMapping(
        'PrivateKey=RSA1024:BLOB', {
            {'PrivateKey', 'RSA1024:BLOB'},
        });
    CheckParseTorReplyMapping(
        'ClientAuth=bob:BLOB', {
            {'ClientAuth', 'bob:BLOB'},
        });
    }
    
    bool UniValue::get_bool() const
{
    if (typ != VBOOL)
        throw std::runtime_error('JSON value is not a boolean as expected');
    return getBool();
}
    
        double vd = -7.21;
    UniValue v7(vd);
    BOOST_CHECK(v7.isNum());
    BOOST_CHECK_EQUAL(v7.getValStr(), '-7.21');
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    #include <grpcpp/support/channel_arguments.h>
    
    
    {}  // namespace grpc
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
    
    // server minute
const ViewDescriptor& ServerSentBytesPerRpcMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/sent_bytes_per_rpc/minute')
          .set_measure(kRpcServerSentBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    void DynamicThreadPool::DynamicThread::ThreadFunc() {
  pool_->ThreadFunc();
  // Now that we have killed ourselves, we should reduce the thread count
  std::unique_lock<std::mutex> lock(pool_->mu_);
  pool_->nthreads_--;
  // Move ourselves to dead list
  pool_->dead_threads_.push_back(this);
    }
    
    #endif  // GPR_LINUX

    
    
    {    static bool IsVariable(const nnvm::NodePtr& node) {
      AGInfo& info = Get(node);
      return info.grad_req != kNullOp && info.outputs.size() == 1
             && info.out_grads.size() == 1;
    }
  };
  /*! \brief whether operator recording is on. */
  bool is_training() const {
    return is_train_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_training(bool is_train) {
      bool old = is_train_;
      is_train_ = is_train;
      return old;
  }
  /*! \brief whether operator recording is on. */
  bool is_recording() const {
    return is_recording_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_recording(bool is_recording) {
      bool old = is_recording_;
      is_recording_ = is_recording;
      return old;
  }
  /*! \brief to record operator, return corresponding node. */
  void RecordOp(nnvm::NodeAttrs&& attrs,
                const std::vector<NDArray*>& inputs,
                const std::vector<NDArray*>& outputs,
                const OpStatePtr& state = OpStatePtr(),
                std::vector<bool>* p_save_inputs = nullptr,
                std::vector<bool>* p_save_outputs = nullptr);
  /*! \brief */
  OpStatePtr Invoke(const Context& default_ctx,
                    const nnvm::NodeAttrs& attrs,
                    const std::vector<NDArray*>& inputs,
                    const std::vector<NDArray*>& outputs);
  /*! \brief */
  OpStatePtr InvokeOp(const Context& ctx,
                      const nnvm::NodeAttrs& attrs,
                      const std::vector<NDArray*>& inputs,
                      const std::vector<NDArray*>& outputs,
                      const std::vector<OpReqType>& req,
                      const DispatchMode dispatch_mode,
                      OpStatePtr state = OpStatePtr());
  /*! \brief mark variables for computing gradients. */
  void MarkVariables(const std::vector<NDArray*>& variables,
                     const std::vector<mx_uint>& grad_reqs,
                     const std::vector<NDArray*>& gradients);
  /*! \brief compute the gradient of outputs w.r.t variables. */
  std::vector<NDArray*> Backward(const std::vector<NDArray*>& outputs,
                                 const std::vector<NDArray*>& ograds,
                                 const std::vector<NDArray*>& variables,
                                 bool is_train, bool retain_graph,
                                 bool create_graph);
  /*! \return AutogradRuntime singleton */
  static Imperative* Get();
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    
    {  DMLC_DECLARE_PARAMETER(CaffeOpParam) { DMLC_DECLARE_FIELD(prototxt).set_default('layer{}')
    .describe('Caffe's layer parameter');
    DMLC_DECLARE_FIELD(num_data).set_default(1)
    .describe('Operator input number');
    DMLC_DECLARE_FIELD(num_weight).set_default(0)
    .describe('Weight number');
    DMLC_DECLARE_FIELD(num_out).set_default(1)
    .describe('Operator output number');
  }
};
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_op.cc
 * \brief caffe operator
 * \author Haoran Wang
*/
#include './caffe_op-inl.h'
namespace mxnet {
namespace op {
    }
    }
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}