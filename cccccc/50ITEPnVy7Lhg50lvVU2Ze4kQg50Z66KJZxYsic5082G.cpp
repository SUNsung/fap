
        
        #if defined(UNIX_ENABLED) || defined(PTHREAD_ENABLED)
    
    	if (!is_connection_available()) {
		return Ref<StreamPeerTCP>();
	};
    
    #include 'thread_posix.h'
#include 'script_language.h'
    
    	p_path = fix_path(p_path);
    
    #ifdef WINDOWS_ENABLED
    
    #include 'rw_lock_windows.h'
    
    void ThreadWindows::make_default() {
    }
    
    /*!
 * \brief Check if alignas(*) keyword is supported. (g++ 4.8 or higher)
 */
#if defined(__GNUC__) && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 8) || __GNUC__ > 4)
#define XGBOOST_ALIGNAS(X) alignas(X)
#else
#define XGBOOST_ALIGNAS(X)
#endif
    
      virtual void PredictContribution(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false,
                                   int condition = 0,
                                   unsigned condition_feature = 0) = 0;
    
    namespace xgboost {
namespace common {
using MemoryFixSizeBuffer = rabit::utils::MemoryFixSizeBuffer;
using MemoryBufferStream = rabit::utils::MemoryBufferStream;
    }
    }
    
        if (row_indices_.empty()) {  // edge case: empty instance set
      // assign arbitrary address here, to bypass nullptr check
      // (nullptr usually indicates a nonexistent rowset, but we want to
      //  indicate a valid rowset that happens to have zero length and occupies
      //  the whole instance set)
      // this is okay, as BuildHist will compute (end-begin) as the set size
      const size_t* begin = reinterpret_cast<size_t*>(20);
      const size_t* end = begin;
      elem_of_each_node_.emplace_back(Elem(begin, end, 0));
      return;
    }
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
      /**
   * @brief Stop the CAN client.
   */
  virtual void Stop() = 0;
    
      if (!is_started_) {
    AERROR << 'Esd can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    send_frames_[i].id = frames[i].id;
    send_frames_[i].len = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
  }
    
     private:
  std::unique_ptr<std::thread> thread_;
  bool is_running_ = false;
  // CanClient, MessageManager pointer life is managed by outer program
  CanClient *can_client_ = nullptr;
  MessageManager<SensorType> *pt_manager_ = nullptr;
  bool enable_log_ = false;
  bool is_init_ = false;
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
     protected:
  template <class T, bool need_check>
  void AddRecvProtocolData();
    
    #include 'modules/drivers/canbus/common/byte.h'