
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    int SubProcess::Communicate(const string* stdin_input, string* stdout_output,
                            string* stderr_output) {
  struct pollfd fds[kNFds];
  size_t nbytes[kNFds];
  string* iobufs[kNFds];
  int fd_count = 0;
    }
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    
    { private:
  Env* const env_;
  uint64 offset_;
  std::unique_ptr<RandomAccessFile> file_;
  std::unique_ptr<io::RecordReader> reader_;
  string compression_type_ = '';
};
    
        void SetName(const std::wstring& name)
    {
        m_name = name;
    }
    const std::wstring& GetName();
    int GetSectionCount() const
    {
        return m_sectionHeader->dataSections;
    }
    size_t GetRecordCount() const
    {
        return m_sectionHeader->elementsPerRecord != 0 ? m_sectionHeader->elementsCount / m_sectionHeader->elementsPerRecord : m_sectionHeader->elementsCount;
    }
    
        mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAsparse, mBsparse);
    
    #pragma once
    
    #include 'Basics.h'
#include 'Matrix.h'
#include 'Config.h' // for ConfigParameters
#include 'ScriptableObjects.h'
#include <map>
#include <string>
    
        // other goodies I came across (intrin.h):
    //  - _mm_prefetch
    //  - _mm_stream_ps --store without polluting cache
    //  - unknown: _mm_addsub_ps, _mm_hsub_ps, _mm_movehdup_ps, _mm_moveldup_ps, _mm_blend_ps, _mm_blendv_ps, _mm_insert_ps, _mm_extract_ps, _mm_round_ps
    //  - _mm_dp_ps dot product! http://msdn.microsoft.com/en-us/library/bb514054.aspx
    //    Not so interesting for long vectors, we get better numerical precision with parallel adds and hadd at the end
    
    #ifndef let
#define let const auto
#endif
    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
    struct BlockContents {
  Slice data;           // Actual contents of data
  bool cachable;        // True iff data can be cached
  bool heap_allocated;  // True iff caller should delete[] data.data()
};
    
    bool js_cocos2dx_navmesh_NavMeshObstacle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshObstacle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshObstacle(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshObstacle_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_initWith(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_NavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
        mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
    
    
    {
    {
    {			if (settings->drawFrictionImpulse == 1)
			{
				b2Vec2 tangent = b2Cross(point->normal, 1.0f);
				b2Vec2 p1 = point->position;
				b2Vec2 p2 = p1 + k_impulseScale * point->tangentImpulse * tangent;
				m_debugDraw.DrawSegment(p1, p2, b2Color(0.9f, 0.9f, 0.3f));
			}
		}
	}
}
    
    #define	RAND_LIMIT	32767
#define DRAW_STRING_NEW_LINE 25
    
        CALL_STATIC_TYPE(jobject, Object)
    CALL_STATIC_TYPE(jboolean, Boolean)
    CALL_STATIC_TYPE(jbyte, Byte)
    CALL_STATIC_TYPE(jchar, Char)
    CALL_STATIC_TYPE(jshort, Short)
    CALL_STATIC_TYPE(jint, Int)
    CALL_STATIC_TYPE(jlong, Long)
    CALL_STATIC_TYPE(jfloat, Float)
    CALL_STATIC_TYPE(jdouble, Double)
    
      InstructionPointer absoluteProgramCounter() const noexcept {
    return absoluteProgramCounter_;
  }
    
    TEST_F(YogaTest_HadOverflowTests, spacing_overflow_in_nested_nodes) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeInsertChild(root, child1, 1);
  const YGNodeRef child1_1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1_1, 80);
  YGNodeStyleSetHeight(child1_1, 40);
  YGNodeStyleSetMargin(child1_1, YGEdgeBottom, 5);
  YGNodeInsertChild(child1, child1_1, 0);
    }
    
        void setExperimentalFeatureEnabled(int feature, bool enabled);
    void setPointScaleFactor(float pixelsInPoint);
 
 public: // Getters
    
        // The following functions cannot be const because they could discard const qualifiers (ex: constNode->getChild(0)->getParent() wouldn't be const)