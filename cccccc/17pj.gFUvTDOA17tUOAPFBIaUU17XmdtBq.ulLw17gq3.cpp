
        
        #include 'swift/Markup/Markup.h'
#include 'llvm/ADT/Optional.h'
    
    #ifdef __APPLE__
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    class IndexDataConsumer {
  virtual void anchor();
    }
    
    
    {
    {} // end namespace Lowering
} // end namespace swift
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    #include 'src/compiler/config.h'
#include 'src/compiler/generator_helpers.h'
    
    
    {}  // namespace grpc_python_generator
    
    namespace grpc {
namespace {
    }
    }
    
    static double time_double(struct timeval* tv) {
  return tv->tv_sec + 1e-6 * tv->tv_usec;
}
#endif
    
    #include 'src/compiler/python_generator.h'
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    /**
 * DataBlock is a simple bump-allocating wrapper around a chunk of memory, with
 * basic tracking for unused memory and a simple interface to allocate it.
 *
 * Memory is allocated from the end of the block unless specifically allocated
 * using allocInner.
 *
 * Unused memory can be freed using free(). If the memory is at the end of the
 * block, the frontier will be moved back.
 *
 * Free memory is coalesced and allocation is done by best-fit.
 */
struct DataBlock {
  DataBlock() = default;
    }
    
    namespace HPHP {
    }
    
    void WeakRefData::invalidateWeakRef(uintptr_t ptr) {
  auto weakmap = s_weakref_data.get();
  auto map_entry = weakmap->find(ptr);
  if (map_entry != weakmap->end()) {
    map_entry->second.lock()->pointee = make_tv<KindOfUninit>();
    weakmap->erase(map_entry);
  }
}
    
    size_t remap_interleaved_2m_pages(void* addr, size_t pages, int prot,
                                  bool shared /* = false */) {
#ifdef __linux__
  assert(reinterpret_cast<uintptr_t>(addr) % size2m == 0);
  assert(addr != nullptr);
    }
    
    // For 2M pages, we want more control over protection and mapping flags.  Note
// that MAP_FIXED can overwrite the existing mapping without checking/failing.
void* mmap_2m(void* addr, int prot, int node, bool map_shared, bool map_fixed);
    
        // Font parameters and metrics.
    struct FontInfo 
    {
        uint32_t    PixelHeight;        // Size this font was generated with.
        float       Ascender;           // The pixel extents above the baseline in pixels (typically positive).
        float       Descender;          // The extents below the baseline in pixels (typically negative).
        float       LineSpacing;        // The baseline-to-baseline distance. Note that it usually is larger than the sum of the ascender and descender taken as absolute values. There is also no guarantee that no glyphs extend above or below subsequent baselines when using this distance. Think of it as a value the designer of the font finds appropriate.
        float       LineGap;            // The spacing in pixels between one row's descent and the next row's ascent.
        float       MaxAdvanceWidth;    // This field gives the maximum horizontal cursor advance for all glyphs in the font.
    };
    
    
    {     // Show/hide OSD keyboard
    if (io.WantTextInput)
    {
        // Some text input widget is active?
        if (!g_osdKeyboardEnabled)
        {
            g_osdKeyboardEnabled = true;
            s3eKeyboardSetInt(S3E_KEYBOARD_GET_CHAR, 1);    // show OSD keyboard
        }
    }
    else
    {
        // No text input widget is active
        if (g_osdKeyboardEnabled)
        {
            g_osdKeyboardEnabled = false;
            s3eKeyboardSetInt(S3E_KEYBOARD_GET_CHAR, 0);    // hide OSD keyboard
        }
    }
}

    
    #include <stdint.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include 'imgui.h'
#include 'imgui_impl_allegro5.h'
    
    #include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions. You may use another OpenGL loader/header such as: glew, glext, glad, glLoadGen, etc.
//#include <glew.h>
//#include <glext.h>
//#include <glad/glad.h>
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // Rendering
        ImGui::Render();
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
        // Initialize Direct3D
    if (CreateDeviceD3D(hwnd) < 0)
    {
        CleanupDeviceD3D();
        UnregisterClass(_T('ImGui Example'), wc.hInstance);
        return 1;
    }
    
    // Returns the next Huffman-coded symbol.
int ReadSymbol(const HuffmanTableEntry* table, BitReaderState* br) {
  int nbits;
  br->FillBitWindow();
  int val = (br->val_ >> (br->bits_left_ - 8)) & 0xff;
  table += val;
  nbits = table->bits - 8;
  if (nbits > 0) {
    br->bits_left_ -= 8;
    table += table->value;
    val = (br->val_ >> (br->bits_left_ - nbits)) & ((1 << nbits) - 1);
    table += val;
  }
  br->bits_left_ -= table->bits;
  return table->value;
}
    
    // Builds a JPEG-style huffman code from the given bit depths.
void BuildHuffmanCode(uint8_t* depth, int* counts, int* values) {
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      ++counts[depth[i]];
    }
  }
  int offset[kJpegHuffmanMaxBitLength + 1] = { 0 };
  for (int i = 1; i <= kJpegHuffmanMaxBitLength; ++i) {
    offset[i] = offset[i - 1] + counts[i - 1];
  }
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      values[offset[depth[i]]++] = i;
    }
  }
}
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    #endif  // GUETZLI_FDCT_H_

    
    namespace guetzli {
    }
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
      if (args[1]->IsUndefined()) {
    db_wrapper->status_ = db_wrapper->db_->Delete(
        rocksdb::WriteOptions(), arg0);
  } else {
    if (!db_wrapper->HasFamilyNamed(arg1, db_wrapper)) {
      return scope.Close(Boolean::New(false));
    }
    db_wrapper->status_ = db_wrapper->db_->Delete(
        rocksdb::WriteOptions(), db_wrapper->columnFamilies_[arg1], arg0);
  }
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
    namespace rocksdb {
    }
    
    
    {    int ret = _GetIoctx(fpath)->stat(fid, &file_size, &mtime);
    if (ret < 0) {
      if (Status::NotFound() == err_to_status(ret)) {
        *file_mtime = static_cast<uint64_t>(mtime);
        s = Status::OK();
      } else {
        s = err_to_status(ret);
      }
    } else {
      s = Status::OK();
    }
  } while (0);
    
    void SyncPoint::SetCallBack(const std::string& point,
  const std::function<void(void*)>& callback) {
  impl_->SetCallBack(point, callback);
}
    
    // This class contains a fixed array of buckets, each
// pointing to a skiplist (null if the bucket is empty).
// bucket_count: number of fixed array buckets
// skiplist_height: the max height of the skiplist
// skiplist_branching_factor: probabilistic size ratio between adjacent
//                            link lists in the skiplist
extern MemTableRepFactory* NewHashSkipListRepFactory(
    size_t bucket_count = 1000000, int32_t skiplist_height = 4,
    int32_t skiplist_branching_factor = 4
);
    
    #include 'rocksjni/compaction_filter_factory_jnicallback.h'
#include 'rocksjni/portal.h'
    
    
    {}  //namespace rocksdb
    
    #ifndef JAVA_ROCKSJNI_COMPARATORJNICALLBACK_H_
#define JAVA_ROCKSJNI_COMPARATORJNICALLBACK_H_
    
    void SyncPoint::Data::ClearCallBack(const std::string& point) {
  std::unique_lock<std::mutex> lock(mutex_);
  while (num_callbacks_running_ > 0) {
    cv_.wait(lock);
  }
  callbacks_.erase(point);
}
    
    
    {
    {  void ClearCallBack(const std::string& point);
  void ClearAllCallBacks();
  void EnableProcessing() {
    enabled_ = true;
  }
  void DisableProcessing() {
    enabled_ = false;
  }
  void ClearTrace() {
    std::lock_guard<std::mutex> lock(mutex_);
    cleared_points_.clear();
  }
  bool DisabledByMarker(const std::string& point,
                        std::thread::id thread_id) {
    auto marked_point_iter = marked_thread_id_.find(point);
    return marked_point_iter != marked_thread_id_.end() &&
           thread_id != marked_point_iter->second;
  }
  void Process(const std::string& point, void* cb_arg);
};
}
#endif // NDEBUG

    
    // Wrapper around the platform efficient
// or otherwise preferrable implementation
using Thread = WindowsThread;
    
    HistogramBucketMapper::HistogramBucketMapper() {
  // If you change this, you also need to change
  // size of array buckets_ in HistogramImpl
  bucketValues_ = {1, 2};
  valueIndexMap_ = {{1, 0}, {2, 1}};
  double bucket_val = static_cast<double>(bucketValues_.back());
  while ((bucket_val = 1.5 * bucket_val) <= static_cast<double>(port::kMaxUint64)) {
    bucketValues_.push_back(static_cast<uint64_t>(bucket_val));
    // Extracts two most significant digits to make histogram buckets more
    // human-readable. E.g., 172 becomes 170.
    uint64_t pow_of_ten = 1;
    while (bucketValues_.back() / 10 > 10) {
      bucketValues_.back() /= 10;
      pow_of_ten *= 10;
    }
    bucketValues_.back() *= pow_of_ten;
    valueIndexMap_[bucketValues_.back()] = bucketValues_.size() - 1;
  }
  maxBucketValue_ = bucketValues_.back();
  minBucketValue_ = bucketValues_.front();
}
    
    
    {  s_rule_factory.Register(TrafficRuleConfig::DESTINATION,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new Destination(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::FRONT_VEHICLE,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new FrontVehicle(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::KEEP_CLEAR,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new KeepClear(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::PULL_OVER,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new PullOver(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::REFERENCE_LINE_END,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new ReferenceLineEnd(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::REROUTING,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new Rerouting(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::SIGNAL_LIGHT,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new SignalLight(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::STOP_SIGN,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new StopSign(config);
                          });
}
    
      // @brief: Transform 3D position of objects into targeted space
  // @param [in/out] objects : object lists with 3D positions in camera space,
  // which get transformed into targeted 3D space
  virtual bool Transform(
      std::vector<std::shared_ptr<VisualObject>>* objects) = 0;
    
    
    {  double relative_time = 0.0;
  while (relative_time < FLAGS_trajectory_time_length) {
    std::vector<Box2d> predicted_env;
    for (const Obstacle* obstacle : obstacles_considered) {
      // If an obstacle has no trajectory, it is considered as static.
      // Obstacle::GetPointAtTime has handled this case.
      TrajectoryPoint point = obstacle->GetPointAtTime(relative_time);
      Box2d box = obstacle->GetBoundingBox(point);
      box.LongitudinalExtend(2.0 * FLAGS_lon_collision_buffer);
      box.LateralExtend(2.0 * FLAGS_lat_collision_buffer);
      predicted_env.push_back(std::move(box));
    }
    predicted_bounding_rectangles_.push_back(std::move(predicted_env));
    relative_time += FLAGS_trajectory_time_resolution;
  }
}
    
      /**
   * @brief Determines whether this box overlaps a given line segment
   * @param line_segment The line-segment
   * @return True if they overlap
   */
  bool HasOverlap(const LineSegment2d &line_segment) const;
    
     private:
  std::uint32_t QueryPositionMatchedPoint(
      const common::TrajectoryPoint& start_point,
      const std::vector<common::TrajectoryPoint>& trajectory) const;