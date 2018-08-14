
        
        
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <string>
    
    void RepeatedEnumFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {  
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_repeated_$name$_codec);\n');
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    #include <sstream>
    
    
    {
    {
    {
    {
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ExtensionGenerator);
};
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_MESSAGE_H__

    
    class RepeatedPrimitiveFieldGenerator : public RepeatedFieldGenerator {
  friend FieldGenerator* FieldGenerator::Make(const FieldDescriptor* field,
                                              const Options& options);
    }
    
    namespace {
    }
    
    #undef GOOGLE_COMPILE_ASSERT
#if __cplusplus >= 201103L
#define GOOGLE_COMPILE_ASSERT(expr, msg) static_assert(expr, #msg)
#else
#define GOOGLE_COMPILE_ASSERT(expr, msg) \
  ::google::protobuf::internal::CompileAssert<(bool(expr))> \
          msg[bool(expr) ? 1 : -1]; \
  (void)msg
// Implementation details of COMPILE_ASSERT:
//
// - COMPILE_ASSERT works by defining an array type that has -1
//   elements (and thus is invalid) when the expression is false.
//
// - The simpler definition
//
//     #define COMPILE_ASSERT(expr, msg) typedef char msg[(expr) ? 1 : -1]
//
//   does not work, as gcc supports variable-length arrays whose sizes
//   are determined at run-time (this is gcc's extension and not part
//   of the C++ standard).  As a result, gcc fails to reject the
//   following code with the simple definition:
//
//     int foo;
//     COMPILE_ASSERT(foo, msg); // not supposed to compile as foo is
//                               // not a compile-time constant.
//
// - By using the type CompileAssert<(bool(expr))>, we ensures that
//   expr is a compile-time constant.  (Template arguments must be
//   determined at compile-time.)
//
// - The outter parentheses in CompileAssert<(bool(expr))> are necessary
//   to work around a bug in gcc 3.4.4 and 4.0.1.  If we had written
//
//     CompileAssert<bool(expr)>
//
//   instead, these compilers will refuse to compile
//
//     COMPILE_ASSERT(5 > 0, some_message);
//
//   (They seem to think the '>' in '5 > 0' marks the end of the
//   template argument list.)
//
// - The array size is (bool(expr) ? 1 : -1), instead of simply
//
//     ((expr) ? 1 : -1).
//
//   This is to avoid running into a bug in MS VC 7.1, which
//   causes ((0.0) ? 1 : -1) to incorrectly evaluate to 1.
#endif  // __cplusplus >= 201103L
    
    // Run a command that returns a util::Status.  If the called code returns an
// error status, return that status up out of this method too.
//
// Example:
//   RETURN_IF_ERROR(DoThings(4));
#define RETURN_IF_ERROR(expr) \
  do { \
    /* Using _status below to avoid capture problems if expr is 'status'. */ \
    const ::google::protobuf::util::Status _status = (expr); \
    if (GOOGLE_PREDICT_FALSE(!_status.ok())) return _status; \
  } while (0)
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_DECONV_LAYER_HPP_

    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
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
    
    typedef long long int64;
typedef unsigned long long uint64;
    
    
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
 * \brief Protected CUDA call.
 * \param func Expression to call.
 *
 * It checks for CUDA errors after invocation of the expression.
 */
#define CUDA_CALL(func)                                            \
  {                                                                \
    cudaError_t e = (func);                                        \
    CHECK(e == cudaSuccess || e == cudaErrorCudartUnloading)       \
        << 'CUDA: ' << cudaGetErrorString(e);                      \
  }
    
      // internal instance counter
  unsigned inst_counter_{0};
  // at end
  bool end_{false};
    
     public:
  /*!
   * \brief Rsp-op-Rsp operation which produces a dense result
   * \param attrs Attributes
   * \param dev_mask Device mask
   * \param dispatch_mode Dispatch Mode
   * \param in_attrs Input storage attributes
   * \param out_attrs Output storage attributes
   * \return true if handled
   */
  static bool SparseSparseWithDenseResult(const nnvm::NodeAttrs& attrs,
                                          int dev_mask,
                                          DispatchMode* dispatch_mode,
                                          std::vector<int> *in_attrs,
                                          std::vector<int> *out_attrs);
    
      MSHADOW_SGL_DBL_TYPE_SWITCH(data_r.type_flag_, DType, {     // data type
    MSHADOW_IDX_TYPE_SWITCH(indptr_r.type_flag_, IType, {     // indptr type
      MSHADOW_IDX_TYPE_SWITCH(col_idx_r.type_flag_, CType, {  // colidx type
        /* Allocate workspace */
        CType num_cols_out = out.shape()[1];
        CType rhs_data_size = static_cast<CType>(col_idx_r.shape_.Size());
        size_t workspace_size = 2 * num_cols_out * sizeof(CType);
        Tensor<cpu, 1, char> workspace =
            ctx.requested[0].get_space_typed<cpu, 1, char>(
                Shape1(workspace_size), s);
        CType* col_flg = reinterpret_cast<dim_t*>(workspace.dptr_);
    }
    }
    }
    
    /*!
 * Copyright (c) 2018 by Contributors
 * \file LogUniformGenerator.h
 * \brief log uniform distribution generator
*/
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {} // namespace posix_time
} // namespace boost
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
    #include <boost/asio/detail/push_options.hpp>
    
    #endif  // GUETZLI_FDCT_H_

    
    #include <stdint.h>
    
    void AddApp0Data(JPEGData* jpg) {
  const unsigned char kApp0Data[] = {
      0xe0, 0x00, 0x10,              // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
  };
  jpg->app_data.push_back(
      std::string(reinterpret_cast<const char*>(kApp0Data),
                                 sizeof(kApp0Data)));
}
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
      // Requires that comp is not downsampled.
  void CopyFromJpegComponent(const JPEGComponent& comp,
                             int factor_x, int factor_y,
                             const int* quant);