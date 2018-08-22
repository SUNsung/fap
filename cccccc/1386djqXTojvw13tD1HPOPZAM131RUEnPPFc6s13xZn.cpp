
        
        Executor::RObjectType Executor::Bind(const Symbol::RObjectType& symbol,
                                     const Context::RObjectType& context,
                                     const Rcpp::List& arg_arrays,
                                     const Rcpp::List& aux_arrays,
                                     const Rcpp::List& grad_reqs) {
  Executor* exec = new Executor();
  try {
    Symbol *sym = Symbol::XPtr(symbol);
    // handles
    std::vector<mx_uint> grad_req_type;
    std::vector<NDArrayHandle> arg_handles, grad_handles, aux_handles;
    // for failure handling
    exec->arg_arrays_ = CreateArrayList(
        arg_arrays, 'arg_arrays',
        sym->ListArguments(),
        context, &arg_handles);
    exec->aux_arrays_ = CreateArrayList(
        aux_arrays, 'aux_arrays',
        sym->ListAuxiliaryStates(),
        context, &aux_handles);
    exec->grad_arrays_ = CreateGradList(
        arg_arrays, grad_reqs,
        sym->ListArguments(),
        context, &grad_handles, &grad_req_type);
    Context ctx(context);
    MX_CALL(MXExecutorBind(
        sym->handle_,
        ctx.dev_type, ctx.dev_id,
        static_cast<mx_uint>(arg_handles.size()), dmlc::BeginPtr(arg_handles),
        dmlc::BeginPtr(grad_handles), dmlc::BeginPtr(grad_req_type),
        static_cast<mx_uint>(aux_handles.size()), dmlc::BeginPtr(aux_handles),
        &(exec->handle_)));
    mx_uint out_size;
    NDArrayHandle *out_arr;
    MX_CALL(MXExecutorOutputs(exec->handle_, &out_size, &out_arr));
    exec->out_arrays_ = CreateOutList(
        out_size, out_arr, sym->ListOuputs());
  } catch(const Rcpp::exception& ex) {
    delete exec;
    throw ex;
  }
  return Rcpp::internal::make_new_object(exec);
}
void Executor::InitRcppModule() {
  using namespace Rcpp;  // NOLINT(*)
  class_<Executor>('MXExecutor')
      .method('update.aux.arrays',
              &Executor::UpdateAuxArray,
              'Update auxilary states array of executor, this will mutate the executor')
      .method('update.arg.arrays',
              &Executor::UpdateArgArray,
              'Update arguments array of executor, this will mutate the executor')
      .method('update.grad.arrays',
              &Executor::UpdateGradArray,
              'Update gradient array of executor, this will mutate the executor')
      .method('forward',
              &Executor::Forward,
              'Peform a forward operation on exec, this will set the outputs.')
      .method('backward',
              &Executor::Backward,
              'Peform a backward operation on exec, this will set the gradients requested.')
      .property('ref.arg.arrays', &Executor::arg_arrays)
      .property('ref.grad.arrays', &Executor::grad_arrays)
      .property('ref.aux.arrays', &Executor::aux_arrays)
      .property('ref.outputs', &Executor::out_arrays)
      .property('arg.arrays', &Executor::GetArgArrays)
      .property('grad.arrays', &Executor::GetGradArrays)
      .property('aux.arrays', &Executor::GetAuxArrays)
      .property('outputs', &Executor::GetOuputArrays);
  function('mx.symbol.bind',
           &Executor::Bind,
           List::create(_['symbol'], _['ctx'],
                        _['arg.arrays'], _['aux.arrays'], _['grad.reqs']),
           'Bind the symbol on argument arrays, generate gradient array according to grad_reqs');
}
    
    namespace mxnet {
namespace R {
/*! \brief The Rcpp Symbol class of MXNet */
class Executor : public MXNetMovable<Executor> {
 public:
  /*! \return typename from R side. */
  inline static const char* TypeName() {
    return 'MXExecutor';
  }
  /*!
   * \return Get reference of the arg arrays of executor.
   */
  const Rcpp::List& arg_arrays() const {
    return *arg_arrays_;
  }
  /*!
   * \return Get reference of the aux arrays of executor.
   */
  const Rcpp::List& aux_arrays() const {
    return *aux_arrays_;
  }
  /*!
   * \return Get reference of gradient arrays of executor.
   */
  const Rcpp::List& grad_arrays() const {
    return *grad_arrays_;
  }
  /*!
   * \return Get reference of gradient arrays of executor.
   */
  const Rcpp::List& out_arrays() const {
    return *out_arrays_;
  }
  /*!
   * \return Get the arg arrays of executor.
   */
  Rcpp::List GetArgArrays() const {
    return CloneArray(*arg_arrays_);
  }
  /*!
   * \return Get the grad arrays of executor.
   */
  Rcpp::List GetGradArrays() const {
    return CloneArray(*grad_arrays_);
  }
  /*!
   * \return Get the auxiliary arrays of executor.
   */
  Rcpp::List GetAuxArrays() const {
    return CloneArray(*aux_arrays_);
  }
  /*!
   * \return Get the outputx arrays of executor.
   */
  Rcpp::List GetOuputArrays() const {
    return CloneArray(*out_arrays_);
  }
  /*!
   * \brief Update the arg_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateArgArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Update the aux_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateAuxArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Update the grad_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateGradArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Peform a forward operation on exec, this will set the out_arrays.
   * \param is_train whether it is training phase.
   * \param kwargs additional parameters.
   * \return a result executor, moved from exec.
   */
  void Forward(bool is_train,
               const Rcpp::List& kwargs);
  /*!
   * \brief Peform a backward operation on exec, this will set the grad_arrays.
   * \param output_grads the gradient on outputs, to be propagated back.
   * \return a result executor, moved from exec.
   */
  void Backward(const Rcpp::List& output_grads);
  /*!
   * \brief Create a new R Executor by bind on symbol
   * \param symbol The R symbol to bind.
   * \param context The device to bind.
   * \param arg_arrays The argument arrays giving the initial value of arguments.
   * \param aux_arrays The auxiliary state arrays giving the initial value of auxiliary states.
   * \param grad_reqs Array of booleans, giving the requirements of gradient.
   */
  static RObjectType Bind(const Symbol::RObjectType& symbol,
                          const Context::RObjectType& context,
                          const Rcpp::List& arg_arrays,
                          const Rcpp::List& aux_arrays,
                          const Rcpp::List& grad_reqs);
  /*! \brief static function to initialize the Rcpp functions */
  static void InitRcppModule();
  // destructor
  ~Executor() {
    delete out_arrays_;
    delete arg_arrays_;
    delete grad_arrays_;
    delete aux_arrays_;
    }
    }
    }
    }
    
    
    {} // namespace mgpu

    
          // Indices
      const Tensor<cpu, 1, IType> indices_l = lhs_is_dense ?
                                              Tensor<cpu, 1, IType>() :
                                              lhs.aux_data(rowsparse::kIdx).FlatTo1D<cpu, IType>(s);
      const Tensor<cpu, 1, IType> indices_r = rhs_is_dense ?
                                              Tensor<cpu, 1, IType>() :
                                              rhs.aux_data(rowsparse::kIdx).FlatTo1D<cpu, IType>(s);
      Tensor<cpu, 1, IType> indices_out = is_dense_result ?
                                          Tensor<cpu, 1, IType>() :
                                          output.aux_data(rowsparse::kIdx).FlatTo1D<cpu, IType>(s);
    
    template<typename xpu>
void RangeCompute(const nnvm::NodeAttrs& attrs,
                  const OpContext& ctx,
                  const std::vector<TBlob>& inputs,
                  const std::vector<OpReqType>& req,
                  const std::vector<TBlob>& outputs) {
  using namespace mxnet_op;
  Stream<xpu> *s = ctx.get_stream<xpu>();
  const RangeParam& param = nnvm::get<RangeParam>(attrs.parsed);
  MSHADOW_TYPE_SWITCH(outputs[0].type_flag_, DType, {
      // Force unsigned params to take two's complement form on ARM to ensure consistency with x86
      // results.  Casting negative floats to unsigned types is undefined in the CPP standard.
      auto step = std::is_signed<DType>() ? param.step : static_cast<int>(param.step);
      auto start = std::is_signed<DType>() ? param.start : static_cast<int>(param.start);
      Kernel<range_fwd, xpu>::Launch(s,
                                     outputs[0].Size(),
                                     static_cast<int>(param.repeat),
                                     static_cast<DType>(start),
                                     static_cast<DType>(step),
                                     req[0],
                                     outputs[0].dptr<DType>());
  });
}
    
    
    {
    {}  // namespace io
}  // namespace mxnet

    
    #endif // _LOG_UNIFORM_GENERATOR_H
    
    /*!
 * \brief Generic bidirectional sanity test
 */
TEST(COREOP_PERF, ExecuteBidirectional) {
  std::cout << 'NEGATIVE CLIP GRADIENT' << std::endl;
  RunCoreOpBidirectional(false, { {'lr', '0.01' }, { 'clip_gradient', '-1' } },
                         'sgd_mom_update',
                         COREOP_BWD_OP_NAME_VALUE_NONE);
  std::cout << 'POSITIVE CLIP GRADIENT' << std::endl;
  RunCoreOpBidirectional(false, { {'lr', '0.01' }, { 'clip_gradient', '1' } },
                         'sgd_mom_update',
                         COREOP_BWD_OP_NAME_VALUE_NONE);
}
    
    const int kNumKeys = 1100000;
    
    #include 'leveldb/db.h'
#include 'util/testharness.h'
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
    #ifndef STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
#define STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
    // A very simple random number generator.  Not especially good at
// generating truly random bits, but good enough for our needs in this
// package.
class Random {
 private:
  uint32_t seed_;
 public:
  explicit Random(uint32_t s) : seed_(s & 0x7fffffffu) {
    // Avoid bad seeds.
    if (seed_ == 0 || seed_ == 2147483647L) {
      seed_ = 1;
    }
  }
  uint32_t Next() {
    static const uint32_t M = 2147483647L;   // 2^31-1
    static const uint64_t A = 16807;  // bits 14, 8, 7, 5, 2, 1, 0
    // We are computing
    //       seed_ = (seed_ * A) % M,    where M = 2^31-1
    //
    // seed_ must not be zero or M, or else all subsequent computed values
    // will be zero or M respectively.  For all other values, seed_ will end
    // up cycling through every number in [1,M-1]
    uint64_t product = seed_ * A;
    }
    }
    
      std::string Key(int i) {
    char buf[100];
    snprintf(buf, sizeof(buf), 'key%06d', i);
    return std::string(buf);
  }
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    struct Options;
    
    #pragma once
    
    static void PLIST_parse_file(benchmark::State& state) {
  while (state.KeepRunning()) {
    pt::ptree tree;
    auto status = parsePlist(kTestDataPath + 'test.plist', tree);
  }
}
    
    #include <aws/firehose/FirehoseClient.h>
#include <aws/firehose/model/PutRecordBatchResponseEntry.h>
#include <aws/firehose/model/Record.h>