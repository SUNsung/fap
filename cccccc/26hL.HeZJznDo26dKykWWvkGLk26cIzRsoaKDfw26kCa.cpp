
        
        #include <algorithm>
    
    
    {                    // make border
                        if (borderType == BORDER_MODE_CONSTANT)
                        {
                            tcurr = vsetq_lane_u16(borderValue, tcurr, 7);
                        }
                        else if (borderType == BORDER_MODE_REFLECT101)
                        {
                            tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 7);
                        }
                        else // borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REPLICATE
                        {
                            tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 7);
                        }
                    continue;
                }
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vmvnq(internal::vceqq(v_src0, v_src1));
    }
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
      // Merges the boxes from start to end, not including end, and deletes
  // the boxes between start and end.
  void MergeBoxes(int start, int end);
    
    
    {}  // namespace tesseract.

    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
     private:
  // Sets the value of total_pages_ behind a mutex.
  void set_total_pages(int total) {
    SVAutoLock lock(&general_mutex_);
    total_pages_ = total;
  }
  void set_memory_used(int64_t memory_used) {
    SVAutoLock lock(&general_mutex_);
    memory_used_ = memory_used;
  }
  // Locks the pages_mutex_ and Loads as many pages can fit in max_memory_
  // starting at index pages_offset_.
  bool ReCachePages();
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
      // Removes the MAXIMUM element of the heap. (MIN from a MAX heap.) If entry is
  // not nullptr, the element is copied into *entry, otherwise it is discarded.
  // Time = O(n). Returns false if the heap was already empty.
  bool PopWorst(Pair* entry) {
    int worst_index = IndexOfWorst();
    if (worst_index < 0) return false;  // It cannot be empty!
    // Extract the worst element from the heap, leaving a hole at worst_index.
    if (entry != nullptr)
      *entry = heap_[worst_index];
    int heap_size = heap_.size() - 1;
    if (heap_size > 0) {
      // Sift the hole upwards to match the last element of the heap_
      Pair hole_pair = heap_[heap_size];
      int hole_index = SiftUp(worst_index, hole_pair);
      heap_[hole_index] = hole_pair;
    }
    heap_.truncate(heap_size);
    return true;
  }
    
    ExtensionResponse::ExtensionResponse(const ExtensionResponse& other20) {
  status = other20.status;
  response = other20.response;
  __isset = other20.__isset;
}
ExtensionResponse& ExtensionResponse::operator=(const ExtensionResponse& other21) {
  status = other21.status;
  response = other21.response;
  __isset = other21.__isset;
  return *this;
}
void ExtensionResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << 'ExtensionResponse(';
  out << 'status=' << to_string(status);
  out << ', ' << 'response=' << to_string(response);
  out << ')';
}
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
    
    {
    {      auto serial = resp.content.find('serial_number');
      if (serial != resp.content.end()) {
        hw_info[serial->second] = resp.content;
      };
    }
  });
    
      // Author: @guliashvili
  // Creation Time: 5/09/2018
  bool isPosixProfilingEnabled();
    
    
    {  // to prevent closing non existing file descriptor
  to_obj.fd_ = -1;
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
    class DB;
    
    
    {}  // namespace rocksdb
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
    // Options to control the behavior of a database (passed to
// DB::Open). A LevelDBOptions object can be initialized as though
// it were a LevelDB Options object, and then it can be converted into
// a RocksDB Options object.
struct LevelDBOptions {
  // -------------------
  // Parameters that affect behavior
    }