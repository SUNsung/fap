
        
          /**
   * Moves the iterator to the beginning of the text line.
   * This class implements this functionality by moving it to the zero indexed
   * blob of the first (leftmost) word of the row.
   */
  virtual void RestartRow();
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // datadir may still be empty:
  if (datadir.length() == 0) {
    datadir = './';
  }
    
    
    {  // Top-level iteration. Shape index in sparse charset_map space.
  int shape_index_;
  int num_shapes_;
  // Index to the character class within a shape.
  int shape_char_index_;
  int num_shape_chars_;
  // Index to the font within a shape/class pair.
  int shape_font_index_;
  int num_shape_fonts_;
  // The lowest level iteration. sample_index_/num_samples_ counts samples
  // in the current shape/class/font combination.
  int sample_index_;
  int num_samples_;
};
    
    #endif  // TESSERACT_TEXTORD_CCPHOTODETECT_H_

    
    void block_edges(Pix *t_image,         // thresholded image
                 PDBLK *block,         // block in image
                 C_OUTLINE_IT* outline_it);
void make_margins(PDBLK *block,            // block in image
                  BLOCK_LINE_IT *line_it,  // for old style
                  uint8_t *pixels,           // pixels to strip
                  uint8_t margin,            // white-out pixel
                  int16_t left,              // block edges
                  int16_t right,
                  int16_t y);                // line coord                 );
void line_edges(int16_t x,                     // coord of line start
                int16_t y,                     // coord of line
                int16_t xext,                  // width of line
                uint8_t uppercolour,           // start of prev line
                uint8_t * bwpos,               // thresholded line
                CRACKEDGE ** prevline,       // edges in progress
                CRACKEDGE **free_cracks,
                C_OUTLINE_IT* outline_it);
CRACKEDGE *h_edge(int sign,                  // sign of edge
                  CRACKEDGE * join,          // edge to join to
                  CrackPos* pos);
CRACKEDGE *v_edge(int sign,                  // sign of edge
                  CRACKEDGE * join,          // edge to join to
                  CrackPos* pos);
void join_edges(CRACKEDGE *edge1,            // edges to join
                CRACKEDGE *edge2,            // no specific order
                CRACKEDGE **free_cracks,
                C_OUTLINE_IT* outline_it);
void free_crackedges(CRACKEDGE *start);
    
      // Build the projection profile given the input_block containing lists of
  // blobs, a rotation to convert to image coords,
  // and a full-resolution nontext_map, marking out areas to avoid.
  // During construction, we have the following assumptions:
  // The rotation is a multiple of 90 degrees, ie no deskew yet.
  // The blobs have had their left and right rules set to also limit
  // the range of projection.
  void ConstructProjection(TO_BLOCK* input_block,
                           const FCOORD& rotation, Pix* nontext_map);
    
    
    {  return 0;
}

    
    #endif

    
    class MetricsServiceImpl final : public MetricsService::Service {
 public:
  grpc::Status GetAllGauges(ServerContext* context, const EmptyMessage* request,
                            ServerWriter<GaugeResponse>* writer) override;
    }
    
    #ifdef FACEBOOK
  uint64_t time;
  if (!fb_perf_get_thread_cputime_ns(&time)) {
    time += s_extra_request_nanoseconds;
    ts->tv_sec = time / sec_to_ns;
    ts->tv_nsec = time % sec_to_ns;
    return 0;
  }
#endif
    
    #ifndef incl_HPHP_TIMER_H_
#define incl_HPHP_TIMER_H_
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  // We don't know for sure what's live.
  PhysRegSaver(v, abi().gpUnreserved - abi().calleeSaved);
    }
    
    
    {
    {      // If this address spans cache lines, on x64 this is not an atomic store.
      // This being the case, use caution when overwriting code that is
      // reachable by multiple threads: make sure it doesn't span cache lines.
      *reinterpret_cast<uint64_t*>(dest()) = u.qword;
    } else {
      memcpy(dest(), bs, n);
    }
    m_frontier += n;
  }
    
    ALWAYS_INLINE
APCObject::APCObject(ClassOrName cls, uint32_t propCount)
  : m_handle(APCKind::SharedObject)
  , m_cls{cls}
  , m_propCount{propCount}
  , m_persistent{0}
  , m_no_wakeup{0}
  , m_fast_init{0}
{}
    
    inline size_t ObjectData::objOffFromMemoNode(const Class* cls) {
  assertx(cls->hasMemoSlots());
  assertx(!cls->getNativeDataInfo());
  return cls->numMemoSlots() * sizeof(MemoSlot) + sizeof(MemoNode);
}
    
    
    {#ifdef HAVE_NUMA
  if (m_interleaveMask) {
    unsigned long mask = m_interleaveMask;
    mbind(newPages, kChunkSize, MPOL_INTERLEAVE,
          &mask, 32 /* max node */, 0 /* flag */);
  }
#endif
  return true;
}
    
      // Fault the page in.  This guarantees availablility of memory, and avoids
  // SIGBUS when the huge page isn't really available.  In many cases
  // RLIMIT_MEMLOCK isn't big enough for us to lock 1G.  Fortunately that
  // is unnecessary here; a byte should work equally well.
  if (mlock(ret, 1)) {
    snprintf(s_errorMsg, maxErrorMsgLen, 'mlock() failed for %p: ', ret);
    record_err_msg();
    munmap(ret, size1g);
    return nullptr;
  }
    
    
    {
    {    std::ostringstream oss;
    std::copy(line.begin() + options_index,
              line.end(),
              std::ostream_iterator<std::string>(oss, ' '));
    r['options'] = oss.str();
    results.push_back(r);
  }
}
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    #include 'osquery/core/process.h'
#include 'osquery/filesystem/fileops.h'
#include 'osquery/tests/test_util.h'
    
    TEST_F(RocksDBDatabasePluginTests, test_corruption) {
  ASSERT_TRUE(pathExists(path_));
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    }
    
    
    {  /// The observed uptime of the system at event time.
  uint32_t uptime{0};
};
    
    #include <boost/algorithm/string/join.hpp>
    
    bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConeTwistConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConeTwistConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getBFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan1(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_GetPointForAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulseNormalized(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistSpan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getAFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_enableMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_Physics3DConeTwistConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic'', nullptr);
        return 0;
    }
#endif
    
    
#endif // __cocos2dx_experimental_h__

    
    
    
    
    {    CHECK_GL_ERROR_DEBUG();
}

    
    bool Test::MouseDown(const b2Vec2& p)
{
	m_mouseWorld = p;
	
	if (m_mouseJoint != nullptr)
	{
		return false;
	}
    }
    
    			m_world->CreateJoint(&pjd);
    
    #endif
