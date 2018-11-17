
        
                    int16x8_t tail02 = vreinterpretq_s16_u16(vaddl_u8(tail2, tail0));
            int16x8_t tail1x2 = vreinterpretq_s16_u16(vshll_n_u8(tail1, 1));
            int16x8_t taildx = vreinterpretq_s16_u16(vsubl_u8(tail2, tail0));
            int16x8_t taildy = vqaddq_s16(tail02, tail1x2);
    
    #endif
    
    #ifdef CAROTENE_NEON
    if (shift >= 16u)
    {
        for (size_t i = 0; i < size.height; ++i)
        {
            s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
            std::memset(dst, 0, sizeof(s16) * size.width);
        }
        return;
    }
    
    
    {
    {        for (--jd; js < size.width; ++js, --jd)
            dst[jd] = src[js];
    }
}
    
        // the others
    for (size_t i = 1; i < size.height ; ++i)
    {
        src = internal::getRowPtr(srcBase, srcStride, i);
        u32 * prevSum = internal::getRowPtr(sumBase, sumStride, i - 1);
        sum = internal::getRowPtr(sumBase, sumStride, i);
    }
    
    
    {            vst1q_s16(drow + x - 8, t0);
        }
    
    
    {	_FORCE_INLINE_ btTypedConstraint *get_bt_constraint() { return constraint; }
};
#endif

    
    void unregister_dds_types() {
    }
    
    
    {	ERR_FAIL_COND(!zfile);
	unzSeekCurrentFile(zfile, get_len() + p_position);
};
    
    
    {  /*!
   * \brief Create a tree updater given name
   * \param name Name of the tree updater.
   */
  static TreeUpdater* Create(const std::string& name);
};
    
    
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

    
    #include <xgboost/data.h>
#include <algorithm>
#include <vector>
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    SEXP XGBoosterPredict_R(SEXP handle, SEXP dmat, SEXP option_mask, SEXP ntree_limit) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGBoosterPredict(R_ExternalPtrAddr(handle),
                            R_ExternalPtrAddr(dmat),
                            asInteger(option_mask),
                            asInteger(ntree_limit),
                            &olen, &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {  *value = result;
  return true;
}
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    namespace benchmark {
    }
    
    #ifndef BENCHMARK_OS_WINDOWS
#include <sys/time.h>
#include <time.h>
#endif