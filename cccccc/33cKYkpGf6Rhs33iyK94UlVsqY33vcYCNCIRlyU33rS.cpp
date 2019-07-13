
        
        TegraCvtColor_Invoker(rgb2gray, rgb2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(bgr2gray, bgr2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2gray, rgbx2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                            dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(bgrx2gray, bgrx2gray, CAROTENE_NS::COLOR_SPACE_BT601, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                                            dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
#define TEGRA_CVTBGRTOGRAY(src_data, src_step, dst_data, dst_step, width, height, depth, scn, swapBlue) \
( \
    depth == CV_8U && CAROTENE_NS::isSupportedConfiguration() ? \
        scn == 3 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_bgr2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        scn == 4 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_bgrx2gray_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        v_dst = internal::vqaddq(v_src0, v_src1);
    }
    
    template <typename T>
inline void inRangeCheck(const Size2D &_size,
                         const T * srcBase, ptrdiff_t srcStride,
                         const T * rng1Base, ptrdiff_t rng1Stride,
                         const T * rng2Base, ptrdiff_t rng2Stride,
                         u8 * dstBase, ptrdiff_t dstStride)
{
    typedef typename internal::VecTraits<T>::vec128 vec128;
    typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
    }
    
                        tprev1 = vextq_s16(tnext1, tnext1, 6);
                    tprev1 = vsetq_lane_s16(vgetq_lane_s16(tprev1, 3),tprev1, 1);
                    tprev1 = vsetq_lane_s16(vgetq_lane_s16(tprev1, 4),tprev1, 0);
                } else if (border == BORDER_MODE_CONSTANT) {
                    tpprev1 = vextq_s16(tnext2, tnext2, 7);
                    tpprev1 = vsetq_lane_s16(borderValue, tpprev1, 0);
    
    bool b2Triangle::IsInside(float32 _x, float32 _y){
	if (_x < x[0] && _x < x[1] && _x < x[2]) return false;
	if (_x > x[0] && _x > x[1] && _x > x[2]) return false;
	if (_y < y[0] && _y < y[1] && _y < y[2]) return false;
	if (_y > y[0] && _y > y[1] && _y > y[2]) return false;
		
		float32 vx2 = _x-x[0]; float32 vy2 = _y-y[0];
		float32 vx1 = x[1]-x[0]; float32 vy1 = y[1]-y[0];
		float32 vx0 = x[2]-x[0]; float32 vy0 = y[2]-y[0];
		
		float32 dot00 = vx0*vx0+vy0*vy0;
		float32 dot01 = vx0*vx1+vy0*vy1;
		float32 dot02 = vx0*vx2+vy0*vy2;
		float32 dot11 = vx1*vx1+vy1*vy1;
		float32 dot12 = vx1*vx2+vy1*vy2;
		float32 invDenom = 1.0f / (dot00*dot11 - dot01*dot01);
		float32 u = (dot11*dot02 - dot01*dot12)*invDenom;
		float32 v = (dot00*dot12 - dot01*dot02)*invDenom;
		
		return ((u>=0)&&(v>=0)&&(u+v<=1));    
}
    
    
    {};
    
    /*
  Explanation of macros dealing with complex math:
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    namespace op
{
    const auto FACE_MAX_FACES = POSE_MAX_PEOPLE;
    }
    
    #endif // OPENPOSE_HAND_HAND_PARAMETERS_HPP

    
      float WXCorePosition::getPosition(const WXCorePositionEdge &edge) {
    float position = 0;
    switch (edge) {
      case kPositionEdgeLeft:
        position = mLeft;
        break;
      case kPositionEdgeTop:
        position = mTop;
        break;
      case kPositionEdgeRight:
        position = mRight;
        break;
      case kPositionEdgeBottom:
        position = mBottom;
        break;
    }
    return position;
  }
    
    class RenderActionAppendTreeCreateFinish : public RenderAction {
 public:
  explicit RenderActionAppendTreeCreateFinish(const std::string &page_id,
                                              const std::string &ref);
    }
    
    
    {
    { public:
  std::string page_id_;
};
}  // namespace WeexCore
    
      static Garbo garbo;
    
      inline void set_measure_function_adapter(MeasureFunctionAdapter *adapter) {
    measure_function_adapter_ = adapter;
  }
    
    
#else /* not __cplusplus */
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
      static local_ref<JByteBuffer> wrapBytes(uint8_t* data, size_t size);
    
    public:
  // Factory method for creating a hybrid object where the arguments
  // are used to initialize the C++ part directly without passing them
  // through java.  This method requires the Java part to have a ctor
  // which takes a HybridData, and for the C++ part to have a ctor
  // compatible with the arguments passed here.  For safety, the ctor
  // can be private, and the hybrid declared a friend of its base, so
  // the hybrid can only be created from here.
  //
  // Exception behavior: This can throw an exception if creating the
  // C++ object fails, or any JNI methods throw.
  template <typename... Args>
  static local_ref<JavaPart> newObjectCxxArgs(Args&&... args) {
    auto hybridData = makeCxxInstance(std::forward<Args>(args)...);
    return JavaPart::newInstance(hybridData);
  }
    
      // begin ctor
  Iterator(global_ref<typename T::javaobject>&& helper)
      : helper_(std::move(helper))
      , i_(-1) {
    ++(*this);
  }
    
    #pragma pop_macro('DEFINE_FIELD_AND_ARRAY_TRAIT')