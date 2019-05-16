
        
          void AddDocStringArgs();
  void AddDocStringInputs();
  void AddDocStringAttrs();
  void AddDocStringNameArg();
  void AddOutputGlobals();
  void AddDocStringOutputs();
  void AddBody(const string& prefix);
  void AddBodyNoReturn(const string& apply_prefix);
  void AddExport();
    
    
    {}  // namespace tensorflow
    
    #include 'tensorflow/python/lib/core/py_exception_registry.h'
    
    
    {  // Maps error codes to the corresponding Python exception type.
  std::map<TF_Code, PyObject*> exc_types_;
};
    
    Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle) {
  return Safe_TFE_TensorHandlePtr(handle);
}
    
      static const unsigned kMask = 0xf;  // Mask of all available flags.
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {        // these are measured in elements
        size_t left, right, top, bottom;
    };
    
    
    {            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_src = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            int16x8_t v_dst = vld1q_s16(dst + j);
            int16x4_t v_srclo = vget_low_s16(v_src), v_srchi = vget_high_s16(v_src);
            v_dst = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst))),
                                 vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst))));
            vst1q_s16(dst + j, v_dst);
        }
    
    void add(const Size2D &size,
         const s32 * src0Base, ptrdiff_t src0Stride,
         const s32 * src1Base, ptrdiff_t src1Stride,
         s32 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s32, s64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s32, s64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    void extract2(const Size2D &size,
              const u8 * srcBase, ptrdiff_t srcStride,
              u8 * dstBase, ptrdiff_t dstStride,
              u32 coi)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    
    {            vst1q_s16(dst + j, vshlq_n_s16(v_dst0, shift));
            vst1q_s16(dst + j + 8, vshlq_n_s16(v_dst1, shift));
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_dst = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            vst1q_s16(dst + j, vshlq_n_s16(v_dst, shift));
        }
    
                // calculate values for plain CPU part below if needed
            if (x + 8 >= bwidth)
            {
                ptrdiff_t x3 = x == width ? width - 1 : x;
                ptrdiff_t x4 = border == BORDER_MODE_CONSTANT ? x3 - 1 : std::max<ptrdiff_t>(x3 - 1, 0);
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        s32* dst = internal::getRowPtr(dstBase, dstStride, i);
        //vertical convolution
        ptrdiff_t idx_rm2 = internal::borderInterpolate(i - 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp1 = internal::borderInterpolate(i + 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp2 = internal::borderInterpolate(i + 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
    #include <condition_variable>
#include <mutex>
#include <string>
#include <system_error>
#include <vector>
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 2));
    }
    input_blob_names.push_back(GO(2));
    
    **Result**
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    
    {
    {    private:
        Number m_p;
        Number m_q;
    };
}

    
    Rational RationalMath::Frac(Rational const& rat)
{
    PRAT prat = rat.ToPRAT();
    try
    {
        fracrat(&prat, RATIONAL_BASE, RATIONAL_PRECISION);
    }
    catch (uint32_t error)
    {
        destroyrat(prat);
        throw(error);
    }
    }
    
    
    {
    {    private:
        int32_t m_sign;
        int32_t m_exp;
        std::vector<uint32_t> m_mantissa;
    };
}

    
        if (nullptr != m_pHistoryDisplay)
    {
        unsigned int addedItemIndex = m_pHistoryDisplay->AddToHistory(m_spTokens, m_spCommands, numStr);
        m_pCalcDisplay->OnHistoryItemAdded(addedItemIndex);
    }
    
            try
        {
            subrat(&lhsRat, rhsRat, RATIONAL_PRECISION);
            destroyrat(rhsRat);
        }
        catch (uint32_t error)
        {
            destroyrat(lhsRat);
            destroyrat(rhsRat);
            throw(error);
        }
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    
    {
    {/*!
 * \brief Quantile sketch use WXQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WXQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WXQSummary<DType, RType> > {
};
/*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class GKQuantileSketch :
      public QuantileSketchTemplate<DType, RType, GKSummary<DType, RType> > {
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_QUANTILE_H_

    
    
    {
    {
    {      for (size_t j = 0; j < info.num_row_; ++j) {
        for (int l = 0; l < ngroup; ++l) {
          const unsigned o_offset = j * row_chunk + l * mrow_chunk + i * (ncolumns + 1);
          const unsigned c_offset = j * crow_chunk + l * (ncolumns + 1);
          contribs[o_offset + i] = 0;
          for (size_t k = 0; k < ncolumns + 1; ++k) {
            // fill in the diagonal with additive effects, and off-diagonal with the interactions
            if (k == i) {
              contribs[o_offset + i] += contribs_diag[c_offset + k];
            } else {
              contribs[o_offset + k] = (contribs_on[c_offset + k] - contribs_off[c_offset + k])/2.0;
              contribs[o_offset + i] -= contribs[o_offset + k];
            }
          }
        }
      }
    }
  }
  std::vector<RegTree::FVec> thread_temp;
};
    
    
    {
    {    for (const auto &batch : (*dmat)->GetRowBatches()) {
      for (int i = 0; i < batch.Size(); i++) {
        auto inst = batch[i];
        for (int j = 0; i < inst.size(); i++) {
          ASSERT_EQ(inst[j].fvalue, 1.5);
        }
      }
    }
    delete dmat;
  }
}

    
    
    {
    { public:
  std::string page_id_;
  std::string ref_;
  std::string parent_ref_;
  int index_;
};
}  // namespace WeexCore
    
    namespace WeexCore {
    }