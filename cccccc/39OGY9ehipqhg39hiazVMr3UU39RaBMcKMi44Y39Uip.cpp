
        
        
    {    RNG &rng = ts->get_rng();
    int modelPoints = cvtest::randInt(rng);
    CvSize modelSize = cvSize(2, modelPoints);
    int maxBasicSolutions = cvtest::randInt(rng);
    BareModelEstimator modelEstimator(modelPoints, modelSize, maxBasicSolutions);
    checkSubsetResult = modelEstimator.checkSubsetPublic(&_input, usedPointsCount, checkPartialSubsets);
}
    
    #ifndef OPENCV_CUDA_WARP_REDUCE_HPP__
#define OPENCV_CUDA_WARP_REDUCE_HPP__
    
    CV_EXPORTS_W void absdiff(InputArray src1, Scalar src2, OutputArray dst);
    
    #ifndef OPENGL_NOLOAD_STYLE_HPP
#define OPENGL_NOLOAD_STYLE_HPP
    
    #endif // __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__

    
    #include <THPP/tensors/THTensor.hpp>
    
      template<typename T>
  void allGatherT(std::vector<at::Tensor>& output,
                  at::Tensor& input, THDGroup group_id);
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
      auto const available = dst.thisAvailable && src.thisAvailable;
  if (available != dst.thisAvailable) {
    changed = true;
    dst.thisAvailable = available;
  }
    
    
    {private:
  bool m_skipTop{false};
  bool m_skipInlined{false};
  bool m_withSelf{false};
  bool m_withThis{false};
  bool m_withMetadata{false};
  bool m_withPseudoMain{false};
  bool m_withArgValues{true};
  bool m_withArgNames{false};
  int m_limit{0};
  VMParserFrame* m_parserFrame{nullptr};
  c_WaitableWaitHandle* m_fromWaitHandle{nullptr};
};
    
    thread_local std::atomic<size_t> g_req_num;
__thread size_t t_req_num; // snapshot thread-local copy of g_req_num;
__thread size_t t_gc_num; // nth collection in this request.
__thread bool t_enable_samples;
__thread int64_t t_trigger;
__thread int64_t t_trigger_allocated;
__thread int64_t t_req_age;
__thread MemoryUsageStats t_pre_stats;
    
    	if (streqi(opt.c_str(), L'ALL'))
	{
		userOnly = false;
	}
	else if (streqi(opt.c_str(), L'USER'))
	{
		userOnly = true;
	}
	else
	{
		MessageBox(NULL, L'Unrecognized option for /REGISTER or /UNREGISTER. Must be either ALL or USER.', MB_TITLE, MB_OK);
		exit(1);
	}
    
    
    {    if (options->Has(String::NewSymbol('target_path_id')) ||
        options->Get(String::NewSymbol('target_path_id'))->IsInt32()) {
      target_path_id = (int)(options->Get(
          String::NewSymbol('target_path_id'))->ToInt32()->Value());
    }
  }
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    void SyncPoint::EnableProcessing() {
  impl_->EnableProcessing();
}
    
         using Logger::SetInfoLogLevel;
     using Logger::GetInfoLogLevel;
     // Write an entry to the log file with the specified format.
     virtual void Logv(const char* format, va_list ap);
     // Write an entry to the log file with the specified log level
     // and format.  Any log with level under the internal log level
     // of *this (see @SetInfoLogLevel and @GetInfoLogLevel) will not be
     // printed.
     virtual void Logv(const InfoLogLevel log_level,
         const char* format, va_list ap);
    
    
    {    // Do it
    std::string contents;
    Status s = ReadFileToString(Env::Default(), fname, &contents);
    ASSERT_TRUE(s.ok()) << s.ToString();
    for (int i = 0; i < bytes_to_corrupt; i++) {
      contents[i + offset] ^= 0x80;
    }
    s = WriteStringToFile(Env::Default(), contents, fname);
    ASSERT_TRUE(s.ok()) << s.ToString();
    Options options;
    EnvOptions env_options;
    ASSERT_NOK(VerifySstFileChecksum(options, env_options, fname));
  }
    
      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
   * Finds the last occurrence of any character in `that` in this string.
   * \note Equivalent to `find_last_of(that.data(), size(), that.size())`
   */
  template <std::size_t M>
  constexpr std::size_t find_last_of(
      const BasicFixedString<Char, M>& that) const noexcept {
    return find_last_of(that, size_);
  }
    
      ~HazptrSWMRSet() {
    auto p = head_.load();
    while (p) {
      auto next = p->next_.load();
      delete p;
      p = next;
    }
  }
    
    namespace folly {
    }
    
    #ifndef HAZPTR_ONE_DOMAIN
#define HAZPTR_ONE_DOMAIN false
#endif
    
    #include <string>
    
      virtual void truncate(int64_t length) CXX11_OVERRIDE;
    
    #endif // D_ABSTRACT_OPTION_HANDLER_H

    
    void AnnounceList::shuffle()
{
  for (const auto& tier : tiers_) {
    auto& urls = tier->urls;
    std::shuffle(std::begin(urls), std::end(urls),
                 *SimpleRandomizer::getInstance());
  }
}
    
      /**
   * Returns announce event, such as started, stopped, completed, etc.
   */
  const char* getEventString() const;
    
    void AnnounceTier::nextEventIfAfterStarted()
{
  switch (event) {
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    #include <string>
#include <deque>
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    class AuthConfig;
    
    
    {};

    
        if (nodePtr == nullptr)
        return nullptr;
    
    namespace facebook {
    }
    
    // Creates a strong reference from a raw pointer, assuming that it points to a
// freshly-created object. See the documentation for RefPtr for usage.
template <typename T>
static inline RefPtr<T> adoptRef(T* ptr) {
  return RefPtr<T>::adoptRef(ptr);
}