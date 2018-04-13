
        
        AsarProtocolHandler::~AsarProtocolHandler() {
}
    
    #include <string>
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
      CHROMEG_CALLBACK_1(GlobalMenuBarX11, void, OnItemActivated, DbusmenuMenuitem*,
                     unsigned int);
  CHROMEG_CALLBACK_0(GlobalMenuBarX11, void, OnSubMenuShow, DbusmenuMenuitem*);
    
     private:
  NativeWindow* window_;  // weak ref.
    
    #include 'atom/browser/ui/views/frameless_view.h'
    
    SlowTimer::~SlowTimer() {
  int64_t msec = getTime();
  if (msec >= m_msThreshold && m_msThreshold != 0) {
    Logger::Error('SlowTimer [%' PRId64 'ms] at %s: %s',
                  msec, m_location.c_str(), m_info.c_str());
  }
}
    
      /*
   * allocRaw
   * alloc
   *
   * Simple bump allocator, supporting power-of-two alignment. alloc<T>() is a
   * simple typed wrapper around allocRaw().
   */
  void* allocRaw(size_t sz, size_t align = 16) {
    // Round frontier up to a multiple of align
    align = folly::nextPowTwo(align) - 1;
    auto const nf = (uint8_t*)(((uintptr_t)m_frontier + align) & ~align);
    assertCanEmit(nf - m_frontier + sz);
    setFrontier(nf);
    auto data = m_frontier;
    m_frontier += sz;
    assertx(m_frontier <= m_base + m_size);
    return data;
  }
    
    const char* OfflineCode::getArchName() { return 'PPC64'; }
    
    
    {
    {  if (c1headc2head == max) {
    // flip c1
    std::reverse(c1->targets.begin(), c1->targets.end());
  } else if (c1headc2tail == max) {
    // flip c1 c2
    std::reverse(c1->targets.begin(), c1->targets.end());
    std::reverse(c2->targets.begin(), c2->targets.end());
  } else if (c1tailc2tail == max) {
    // flip c2
    std::reverse(c2->targets.begin(), c2->targets.end());
  }
}
}
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << ' 321 ';
  ss >> vals_in;
  EXPECT_EQ(vals_in[0], 321);
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(SparseBatch::Entry));
    }
  }
    
    struct EvalRMSE : public EvalEWiseBase<EvalRMSE> {
  const char *Name() const override {
    return 'rmse';
  }
  inline bst_float EvalRow(bst_float label, bst_float pred) const {
    bst_float diff = label - pred;
    return diff * diff;
  }
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return std::sqrt(esum / wsum);
  }
};
    
    /*! \brief match error */
struct EvalMultiLogLoss : public EvalMClassBase<EvalMultiLogLoss> {
  const char* Name() const override {
    return 'mlogloss';
  }
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass) {
    const bst_float eps = 1e-16f;
    size_t k = static_cast<size_t>(label);
    if (pred[k] > eps) {
      return -std::log(pred[k]);
    } else {
      return -std::log(eps);
    }
  }
};