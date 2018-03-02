
        
        class StatusPropagationTest : public ::testing::TestWithParam<StatusTestParam> {
 protected:
  PartialRunMgr partial_run_mgr_;
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    bool SubProcess::Start() {
  mutex_lock procLock(proc_mu_);
  mutex_lock dataLock(data_mu_);
  if (running_) {
    LOG(ERROR) << 'Start called after the process was started.';
    return false;
  }
  if ((exec_path_ == nullptr) || (exec_argv_ == nullptr)) {
    LOG(ERROR) << 'Start called without setting a program.';
    return false;
  }
    }
    
    #include 'tensorflow/stream_executor/cuda/cuda_driver.h'
#include 'tensorflow/stream_executor/cuda/cuda_stream.h'
#include 'tensorflow/stream_executor/event.h'
#include 'tensorflow/stream_executor/lib/status.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {} // namespace swift
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    
    {} // end namespace swift
    
    
    {} // end namespace swift
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
    void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
    void dls::compute_eigenvec(const cv::Mat& Mtilde, cv::Mat& eigenval_real, cv::Mat& eigenval_imag,
                                                  cv::Mat& eigenvec_real, cv::Mat& eigenvec_imag)
{
#ifdef HAVE_EIGEN
    Eigen::MatrixXd Mtilde_eig, zeros_eig;
    cv::cv2eigen(Mtilde, Mtilde_eig);
    cv::cv2eigen(cv::Mat::zeros(27, 27, CV_64F), zeros_eig);
    }
    
    // fit second order curve to a set of 2D points
inline void fitCurve2Order(const std::vector<Point2f>& /*points*/, std::vector<float>& /*curve*/)
{
    // TBD
}
    
        static void CODEGEN_FUNCPTR Switch_BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
    {
        BlendEquationSeparate = (PFNBLENDEQUATIONSEPARATEPROC)IntGetProcAddress('glBlendEquationSeparate');
        BlendEquationSeparate(modeRGB, modeAlpha);
    }
    
    #include 'precomp.hpp'
    
      switch (arr->tag()) {
    case RepoAuthType::Array::Tag::Packed: {
      for (uint32_t idx = 0; idx < arr->size(); ++idx) {
        auto rat = arr->packedElem(idx);
        assert(rat.resolved());
        if (rat.mayHaveArrData()) check(rat.array());
      }
      break;
    }
    case RepoAuthType::Array::Tag::PackedN: {
      auto rat = arr->elemType();
      assert(rat.resolved());
      if (rat.mayHaveArrData()) check(rat.array());
      break;
    }
  }
    
    /////////////////////////////////////////////////////////////////////////////
    
      if (m_log_entry) {
    m_log_entry->setInt(std::string(s_names[(size_t)m_name].str) + '_micros',
                        elapsed / 1000);
  }
    
    
    {  switch (t) {
    case SystemCPU: return to_usec(ru.ru_stime);
    case UserCPU:   return to_usec(ru.ru_utime);
    case TotalCPU:  return to_usec(ru.ru_stime) + to_usec(ru.ru_utime);
    default: always_assert(false);
  }
}
    
    
    {  v << vcall{
    CallSpec::direct(pthread_getspecific),
    v.makeVcallArgs({{v.cns(datum.tls->m_key)}}),
    v.makeTuple({d}),
    Fixup{},
    DestType::SSA
  };
}
    
    /**
 * Fast check for the most common form of the UTF-8 encoding identifier.
 */
ALWAYS_INLINE
static bool isUtf8(const Variant& encoding) {
  return encoding.getStringDataOrNull() == s_utf_8.get();
}
    
    
static Variant HHVM_FUNCTION(gmp_strval,
                             const Variant& data,
                             const int64_t base /* = 10 */) {
  mpz_t gmpData;
    }
    
      /**
   * Gracefully stop this web server. We will stop accepting new connections
   * and finish ongoing requests without being interrupted in the middle of
   * them. Note this is a non-blocking call and it will return immediately.
   * At background, it will eventually make the thread calling start() quit.
   */
  virtual void stop() = 0;
    
    Variant HHVM_FUNCTION(posix_getlogin) {
#if !defined(__APPLE__) && !defined(__FreeBSD__)
  char buf[L_cuserid];
#else
  char buf[MAXLOGNAME];
#endif
  if (!getlogin_r(buf, sizeof(buf) - 1)) {
    return String(buf, CopyString);
  }
  return false;
}
    
    namespace irgen {
    }
    
    namespace A2STR {
    }
    
      std::unique_ptr<AuthConfig> getDefaultAuthConfig() const;
    
    #ifdef __MINGW32__
  HANDLE fd_;
  // The handle for memory mapped file. mmap equivalent in Windows.
  HANDLE mapView_;
#else  // !__MINGW32__
  int fd_;
#endif // !__MINGW32__
    
    class AbstractHttpServerResponseCommand : public Command {
private:
  DownloadEngine* e_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<HttpServer> httpServer_;
  Timer timeoutTimer_;
  bool readCheck_;
  bool writeCheck_;
    }
    
    void AnnounceList::announceSuccess()
{
  if (currentTrackerInitialized_) {
    (*currentTier_)->nextEvent();
    auto url = *currentTracker_;
    (*currentTier_)->urls.erase(currentTracker_);
    (*currentTier_)->urls.push_front(std::move(url));
    currentTier_ = std::begin(tiers_);
    currentTracker_ = std::begin((*currentTier_)->urls);
  }
}
    
      // Don't allow copying
  AnnounceTier(const AnnounceTier&) = delete;
  AnnounceTier& operator=(const AnnounceTier&) = delete;