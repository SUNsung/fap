
        
        // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    #endif  // ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_

    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
    #if defined(OS_MACOSX)
// NOTE: if you change the value of kFrameworkName, please don't forget to
// update components/test/run_all_unittests.cc as well.
// TODO(tfarina): Remove the comment above, when you fix components to use plist
// on Mac.
extern const base::FilePath::CharType kFrameworkName[];
#endif  // OS_MACOSX
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    TEST(BloomTest, EmptyFilter) {
  ASSERT_TRUE(! Matches('hello'));
  ASSERT_TRUE(! Matches('world'));
}
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    struct BlockContents;
class Comparator;
    
    template <typename Stream>
class buffered_write_stream;
    
      BOOST_ASIO_DECL static void init_native_buffer(
      native_buffer_type& buf,
      const boost::asio::mutable_buffer& buffer);
    
        // The key associated with the context.
    Key* key_;
    
    
    {private:
  int descriptor_;
  MutableBufferSequence buffers_;
};
    
    #include <boost/asio/detail/posix_fd_set_adapter.hpp>
#include <boost/asio/detail/win_fd_set_adapter.hpp>
    
      // Destructor.
  ~gcc_arm_fenced_block()
  {
    barrier();
  }
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
      // Find an entry in the map.
  const_iterator find(const K& k) const
  {
    if (num_buckets_)
    {
      size_t bucket = calculate_hash_value(k) % num_buckets_;
      const_iterator it = buckets_[bucket].first;
      if (it == values_.end())
        return it;
      const_iterator end_it = buckets_[bucket].last;
      ++end_it;
      while (it != end_it)
      {
        if (it->first == k)
          return it;
        ++it;
      }
    }
    return values_.end();
  }
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
    
    #include <memory>
#include <string>
#include <vector>
    
    CollisionChecker::CollisionChecker(
    const std::vector<const Obstacle*>& obstacles,
    const double ego_vehicle_s,
    const double ego_vehicle_d,
    const std::vector<PathPoint>& discretized_reference_line,
    const ReferenceLineInfo* ptr_reference_line_info,
    const std::shared_ptr<PathTimeGraph>& ptr_path_time_graph) {
  ptr_reference_line_info_ = ptr_reference_line_info;
  ptr_path_time_graph_ = ptr_path_time_graph;
  BuildPredictedEnvironment(obstacles, ego_vehicle_s, ego_vehicle_d,
                            discretized_reference_line);
}
    
    void Box2d::GetAllCorners(std::vector<Vec2d> *const corners) const {
  if (corners == nullptr) {
    return;
  }
  *corners = corners_;
}
    
      /**
   * @brief Rotate from center.
   * @param rotate_angle Angle to rotate.
   */
  void RotateFromCenter(const double rotate_angle);
    
      std::vector<PathTimePoint> GetObstacleSurroundingPoints(
      const std::string& obstacle_id, const double s_dist,
      const double t_density) const;
    
    #include 'modules/perception/traffic_light/interface/base_projection.h'
    
    
    {  std::vector<common::TrajectoryPoint> complete_rtk_trajectory_;
};