
        
        CV_EXPORTS Mat NormalizePixels(const Mat& imagePoints, const IntrinsicParams& param);
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    
typedef unsigned char byte;
    
      int do_mirror = dmlc::GetEnv('MXNET_BACKWARD_DO_MIRROR', 0);
  auto need_mirror = [do_mirror](const nnvm::Node& node) -> int {
    if (node.is_variable()) return 0;
    const std::string& type = node.attrs.op->name;
    if (type == 'Dropout') return false;
    if (get_node_attr(node, '__force_mirroring__', false)) return true;
    if (do_mirror == 0) return false;
    if (type == 'Convolution') return false;
    if (type == 'FullyConnected') return false;
    if (type == 'Concat') return false;
    if (type == 'SoftmaxOutput') return false;
    if (type == 'BatchNorm') return false;
    if (type == 'CuDNNBatchNorm') return false;
    return true;
  };
    
    namespace mxnet {
/*! \brief CachedOp Parameters */
struct CachedOpConfig : public dmlc::Parameter<CachedOpConfig> {
  uint32_t inline_limit;
  uint32_t forward_bulk_size;
  uint32_t backward_bulk_size;
  bool static_alloc;
  bool static_shape;
  nnvm::Tuple<uint32_t> data_indices;
  nnvm::Tuple<uint32_t> param_indices;
  DMLC_DECLARE_PARAMETER(CachedOpConfig) {
    DMLC_DECLARE_FIELD(static_alloc)
    .set_default(false)
    .describe('Statically allocate memory to improve speed. '
              'Memory usage may increase.');
    DMLC_DECLARE_FIELD(static_shape)
    .set_default(false)
    .describe('Optimize for invariant input shapes between iterations. '
              'Must also set static_alloc to True. '
              'Change of input shapes is still allowed but slower.');
    DMLC_DECLARE_FIELD(inline_limit)
    .set_default(2)
    .describe('Maximum number of operators that can be inlined.');
    DMLC_DECLARE_FIELD(forward_bulk_size)
    .set_default(dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN', 15))
    .describe('Segment size of bulk execution during forward pass.');
    DMLC_DECLARE_FIELD(backward_bulk_size)
    .set_default(dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN', 15))
    .describe('Segment size of bulk execution during backward pass.');
    DMLC_DECLARE_FIELD(data_indices)
    .set_default(nnvm::Tuple<uint32_t>())
    .describe('Position of argument variables.');
    DMLC_DECLARE_FIELD(param_indices)
    .set_default(nnvm::Tuple<uint32_t>())
    .describe('Position of parameters.');
  }
};
    }
    
      MKLDNNConcatFwd(
      int concat_dim,
      const std::vector<mkldnn::memory::primitive_desc> &data_md): fwd_pd(concat_dim, data_md) {
    data.resize(data_md.size());
  }
    
              // add a row of A to lhs_row
          const IType i_start_l = row_ptr_l[i];
          const IType i_end_l = row_ptr_l[i + 1];
          for (IType jj = i_start_l; jj < i_end_l; jj++) {
            IType col = col_indices_l[jj];
            lhs_row[col] += data_l[jj];
    }
    
    template<typename xpu>
void DotBackwardEx(const nnvm::NodeAttrs& attrs,
                   const OpContext& ctx,
                   const std::vector<NDArray>& inputs,
                   const std::vector<OpReqType>& req,
                   const std::vector<NDArray>& outputs) {
  CHECK_EQ(inputs.size(), 3U);
  CHECK_EQ(outputs.size(), 2U);
  CHECK_EQ(req.size(), 2U);
  CHECK(!(req[0] != kNullOp && outputs[0].storage_type() == kCSRStorage))
    << 'sparse dot does not support computing the gradient of csr';
  CHECK(!(req[1] != kNullOp && outputs[1].storage_type() == kCSRStorage))
    << 'sparse dot does not support computing the gradient of csr';
  CHECK_NE(req[1], kWriteInplace) << 'DotBackwardEx does not support WriteInplace';
    }
    
    void OutputImage::CopyFromJpegData(const JPEGData& jpg) {
  for (size_t i = 0; i < jpg.components.size(); ++i) {
    const JPEGComponent& comp = jpg.components[i];
    assert(jpg.max_h_samp_factor % comp.h_samp_factor == 0);
    assert(jpg.max_v_samp_factor % comp.v_samp_factor == 0);
    int factor_x = jpg.max_h_samp_factor / comp.h_samp_factor;
    int factor_y = jpg.max_v_samp_factor / comp.v_samp_factor;
    assert(comp.quant_idx < jpg.quant.size());
    components_[i].CopyFromJpegComponent(comp, factor_x, factor_y,
                                         &jpg.quant[comp.quant_idx].values[0]);
  }
}
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    
    {}  // namespace guetzli
    
    #include <stddef.h>
#include <stdint.h>
    
    #ifndef GUETZLI_JPEG_DATA_WRITER_H_
#define GUETZLI_JPEG_DATA_WRITER_H_
    
    namespace {
    }