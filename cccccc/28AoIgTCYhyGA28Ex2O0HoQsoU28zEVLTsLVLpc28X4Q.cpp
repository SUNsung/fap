
        
        
    {        // Matrix row is used 'cacheablecolsV' times from the cache. If too small,
        // then it is also not efficient. So apply a looser upper bound.
        // Needs to be at least 4 to allow for dotprod4() optimization (4 columns of V in parallel)
        if (cacheablecolsV < 16)
            cacheablecolsV = 16;
        return cacheablecolsV;
    }
    
    
    {
    {
    {}}}

    
        bnNodes = m_net->SortByGlobalEvalOrder(bnNodes);
    for (auto& node : bnNodes)
    {
        let bnNode = static_pointer_cast<BatchNormalizationNode<ElemType>>(node);
        size_t actualMBSize = 0;
    }
    
        // other goodies I came across (intrin.h):
    //  - _mm_prefetch
    //  - _mm_stream_ps --store without polluting cache
    //  - unknown: _mm_addsub_ps, _mm_hsub_ps, _mm_movehdup_ps, _mm_moveldup_ps, _mm_blend_ps, _mm_blendv_ps, _mm_insert_ps, _mm_extract_ps, _mm_round_ps
    //  - _mm_dp_ps dot product! http://msdn.microsoft.com/en-us/library/bb514054.aspx
    //    Not so interesting for long vectors, we get better numerical precision with parallel adds and hadd at the end
    
        template<template<typename> class ValueContainer> 
    void ForwardPassT(const std::vector < ValueBuffer<ElemType, ValueContainer> >& inputs,
                      std::vector < ValueBuffer<ElemType, ValueContainer> >& outputs, bool resetRNN);
    
    TEST(LogTest, MarginalTrailer2) {
  // Make a trailer that is exactly the same length as an empty record.
  const int n = kBlockSize - 2*kHeaderSize;
  Write(BigString('foo', n));
  ASSERT_EQ(kBlockSize - kHeaderSize, WrittenBytes());
  Write('bar');
  ASSERT_EQ(BigString('foo', n), Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(0, DroppedBytes());
  ASSERT_EQ('', ReportMessage());
}
    
      // compact database
  std::string start_key = Key1(0);
  std::string end_key = Key1(kNumKeys - 1);
  leveldb::Slice least(start_key.data(), start_key.size());
  leveldb::Slice greatest(end_key.data(), end_key.size());
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
    
    {  Status result = metaindex_handle_.DecodeFrom(input);
  if (result.ok()) {
    result = index_handle_.DecodeFrom(input);
  }
  if (result.ok()) {
    // We skip over any leftover data (just padding for now) in 'input'
    const char* end = magic_ptr + 8;
    *input = Slice(end, input->data() + input->size() - end);
  }
  return result;
}
    
    
    {  unsigned char data[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
  ASSERT_EQ(0xd9963a56, Value(reinterpret_cast<char*>(data), sizeof(data)));
}
    
    // The FALLTHROUGH_INTENDED macro can be used to annotate implicit fall-through
// between switch labels. The real definition should be provided externally.
// This one is a fallback version for unsupported compilers.
#ifndef FALLTHROUGH_INTENDED
#define FALLTHROUGH_INTENDED do { } while (0)
#endif
    
    double Histogram::StandardDeviation() const {
  if (num_ == 0.0) return 0;
  double variance = (sum_squares_ * num_ - sum_ * sum_) / (num_ * num_);
  return sqrt(variance);
}
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      // Return the maximum size for data in the buffer.
  size_type capacity() const
  {
    return buffer_.size();
  }
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    extern JSClass  *jsb_cocos2d_Physics3DComponent_class;
extern JSObject *jsb_cocos2d_Physics3DComponent_prototype;
    
    bool js_cocos2dx_studio_BoneNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BoneNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BoneNode(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BoneNode_getDebugDrawWidth(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getChildBones(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getAllSubBones(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getVisibleSkinsRect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getAllSubSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_displaySkin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_addSkin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getRootSkeletonNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawLength(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getVisibleSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawWidth(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getDebugDrawLength(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getDebugDrawColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_BoneNode(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    
    
    void GLESDebugDraw::DrawTransform(const b2Transform& xf)
{
    b2Vec2 p1 = xf.p, p2;
    const float32 k_axisScale = 0.4f;
    p2 = p1 + k_axisScale * xf.q.GetXAxis();
    DrawSegment(p1, p2, b2Color(1,0,0));
    }
    
    
    {			// Bottom horizontal
			shape.Set(b2Vec2(-20.0f, -20.0f), b2Vec2(20.0f, -20.0f));
			ground->CreateFixture(&sd);
		}
    
    	b2Body* m_body1;
	b2Vec2 m_velocity;
	float32 m_angularVelocity;
	b2PolygonShape m_shape1;
	b2PolygonShape m_shape2;
	b2Fixture* m_piece1;
	b2Fixture* m_piece2;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    
    {  EXPECT_EQ(D.cols(), 5);
  EXPECT_EQ(D.rows(), 1);
  EXPECT_FLOAT_EQ(D(0, 0), 0);
  EXPECT_FLOAT_EQ(D(0, 1), 0);
  EXPECT_FLOAT_EQ(D(0, 2), 0);
  EXPECT_FLOAT_EQ(D(0, 3), 0);
  EXPECT_FLOAT_EQ(D(0, 4), 0);
}
    
      for (StopSignLaneVehicles::iterator it = watch_vehicles->begin();
       it != watch_vehicles->end();
       /*no increment*/) {
    std::vector<std::string>& vehicle_ids = it->second;
    // clean obstacles not in current perception
    for (auto obstacle_it = vehicle_ids.begin();
         obstacle_it != vehicle_ids.end();
         /*no increment*/) {
      if (obstacle_ids.count(*obstacle_it) == 0) {
        ADEBUG << 'lane[' << it->first << '] obstacle[' << *obstacle_it
               << '] not exist any more. erase.';
        obstacle_it = vehicle_ids.erase(obstacle_it);
      } else {
        ++obstacle_it;
      }
    }
    if (vehicle_ids.empty()) {
      watch_vehicles->erase(it++);
    } else {
      ++it;
    }
  }
    
    #include 'modules/planning/common/obstacle.h'
    
    bool Polygon2d::Contains(const LineSegment2d &line_segment) const {
  if (line_segment.length() <= kMathEpsilon) {
    return IsPointIn(line_segment.start());
  }
  CHECK_GE(points_.size(), 3);
  if (!IsPointIn(line_segment.start())) {
    return false;
  }
  if (!IsPointIn(line_segment.end())) {
    return false;
  }
  if (!is_convex_) {
    std::vector<LineSegment2d> overlaps = GetAllOverlaps(line_segment);
    double total_length = 0;
    for (const auto &overlap_seg : overlaps) {
      total_length += overlap_seg.length();
    }
    return total_length >= line_segment.length() - kMathEpsilon;
  }
  return true;
}
    
      /**
   * @brief Compute the distance from a point to the boundary of the polygon.
   *        This distance is equal to the minimal distance from the point
   *        to the edges of the polygon.
   * @param point The point to compute whose distance to the polygon.
   * @return The distance from the point to the polygon's boundary.
   */
  double DistanceToBoundary(const Vec2d &point) const;
    
    
    {
    {    AINFO << 'Lidar to ' << camera_names_[i] << ' transform: ';
    AINFO << camera_coeffient.camera_extrinsic;
  }
  camera_coeffient_.resize(camera_names_.size());
  camera_coeffient_[kLongFocusIdx] = camera_coeffients['camera_25mm_focus'];
  camera_coeffient_[kShortFocusIdx] = camera_coeffients['camera_6mm_focus'];
  // auto &short_focus_camera_coeffient = camera_coeffients['camera_6mm_focus'];
  // auto &long_focus_camera_coeffient = camera_coeffients['camera_25mm_focus'];
  camera_coeffient_[kLongFocusIdx].camera_extrinsic =
      camera_coeffient_[kLongFocusIdx].camera_extrinsic *
      camera_coeffient_[kShortFocusIdx].camera_extrinsic;
  AINFO << 'Lidar to long(25mm): ';
  AINFO << camera_coeffient_[kLongFocusIdx].camera_extrinsic;
  return true;
}
    
      virtual ~MultiCamerasProjection() = default;
  virtual bool Init();
  virtual bool Project(const CarPose &pose, const ProjectOption &option,
                       Light *light) const;
  std::string name() const { return 'TLPreprocessor'; }
    
    bool UnityRecognize::Init() {
  if (!GetProtoFromFile(FLAGS_traffic_light_recognizer_config, &config_)) {
    AERROR << 'Cannot get config proto from file: '
           << FLAGS_traffic_light_recognizer_config;
    return false;
  }
    }
    
    
    {  /**
   * @brief Compute a trajectory for execution.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  virtual apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) = 0;
};