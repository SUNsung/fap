
        
        #ifndef SHELL_BROWSER_API_ATOM_API_NET_H_
#define SHELL_BROWSER_API_ATOM_API_NET_H_
    
    LRESULT CALLBACK PowerMonitor::WndProcStatic(HWND hwnd,
                                             UINT message,
                                             WPARAM wparam,
                                             LPARAM lparam) {
  PowerMonitor* msg_wnd =
      reinterpret_cast<PowerMonitor*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));
  if (msg_wnd)
    return msg_wnd->WndProc(hwnd, message, wparam, lparam);
  else
    return ::DefWindowProc(hwnd, message, wparam, lparam);
}
    
      // |WakeLockType::kPreventAppSuspension| keeps system active, but allows
  // screen to be turned off.
  // |WakeLockType::kPreventDisplaySleep| keeps system and screen active, has a
  // higher precedence level than |WakeLockType::kPreventAppSuspension|.
  //
  // Only the highest-precedence blocker type takes effect.
  device::mojom::WakeLockType new_lock_type =
      device::mojom::WakeLockType::kPreventAppSuspension;
  for (const auto& element : wake_lock_types_) {
    if (element.second == device::mojom::WakeLockType::kPreventDisplaySleep) {
      new_lock_type = device::mojom::WakeLockType::kPreventDisplaySleep;
      break;
    }
  }
    
    View::~View() {
  if (delete_view_)
    delete view_;
}
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
      // Constrained fit with a supplied direction vector. Finds the best line_pt,
  // that is one of the supplied points having the median cross product with
  // direction, ignoring points that have a cross product outside of the range
  // [min_dist, max_dist]. Returns the resulting error metric using the same
  // reduced set of points.
  // *Makes use of floating point arithmetic*
  double ConstrainedFit(const FCOORD& direction,
                        double min_dist, double max_dist,
                        bool debug, ICOORD* line_pt);
    
    ELISTIZE(PARA)
    
      /* Initial reject modes (pre NN_ACCEPT) */
  R_POOR_MATCH,         // TEMP Ray's original heuristic (Not used)
  R_NOT_TESS_ACCEPTED,  // TEMP Tess didn't accept WERD
  R_CONTAINS_BLANKS,    // TEMP Tess failed on other chs in WERD
  R_BAD_PERMUTER,       // POTENTIAL Bad permuter for WERD
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    struct Monitor {
 private:
  struct Statistics {
    Timer timer;
    size_t count{0};
    uint64_t nvtx_id;
  };
  std::string label = '';
  std::map<std::string, Statistics> statistics_map;
  Timer self_timer;
    }
    
    namespace xgboost {
namespace common {
    }
    }
    
    
    {
    {} // namespace common
} // namespace xgboost

    
      EXPECT_FALSE(devices.Contains(1));
    
    
    {
    {      if (size_to_read != 0) {
        CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec) + offset_vec[i],
                          size_to_read * sizeof(Entry)),
                 size_to_read * sizeof(Entry))
            << 'Invalid SparsePage file';
        curr_offset += size_to_read;
      }
      i = j;
    }
    // seek to end of record
    if (curr_offset != disk_offset_.back()) {
      fi->Seek(begin + disk_offset_.back() * sizeof(Entry));
    }
    return true;
  }
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD