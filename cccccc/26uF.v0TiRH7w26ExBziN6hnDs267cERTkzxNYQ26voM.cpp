
        
          bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterAll();
    
    #endif  // ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_

    
    #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
      std::unique_ptr<base::ListValue> preferences_;
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
    #include 'third_party/skia/include/core/SkColor.h'
    
    - (void)appendAction:(ObjectBehaviorAction)action;
- (void)enumerate:(void (^)(ObjectBehaviorAction))block;
- (void)reset;
- (void)dump;
@end
    
    
    {} // end namespace swift
    
    // On other platforms swift_once_t is std::once_flag
typedef std::once_flag swift_once_t;
    
    namespace swift {
namespace index {
    }
    }
    
      ResultPlanBuilder(SILGenFunction &SGF, SILLocation loc,
                    const CalleeTypeInfo &calleeTypeInfo)
      : SGF(SGF), loc(loc), calleeTypeInfo(calleeTypeInfo),
        // We reverse the order so we can pop values off the back.
        allResults(reversed(calleeTypeInfo.substFnType->getResults())) {}
    
    
    {
    {
    {      if (Rcpp::as<std::string>(grad_reqs[i]) != 'null') {
        ret->at(i) = NDArray::Empty(NDArray::FromRObject(source_array[i]).dim(), ctx);
        handles->at(i) = NDArray::FromRObject(ret->at(i))->handle;
        grad_req_type->at(i) = req_map[Rcpp::as<std::string>(grad_reqs[i])];
      }
    }
  } catch(const Rcpp::exception& ex) {
    delete ret;
    throw ex;
  }
  return ret;
}
    
    namespace Rcpp {
  template<>
  inline bool is<mxnet::R::MXDataIter>(SEXP x) {
    return internal::is__module__object_fix<mxnet::R::MXDataIter>(x);
  }
  template<>
  inline bool is<mxnet::R::ArrayDataIter>(SEXP x) {
    return internal::is__module__object_fix<mxnet::R::ArrayDataIter>(x);
  }
  // This patch need to be kept even after the Rcpp update merged in.
  template<>
  inline bool is<mxnet::R::DataIter>(SEXP x) {
    return is<mxnet::R::MXDataIter>(x) ||
        is<mxnet::R::ArrayDataIter>(x);
  }
}  // namespace Rcpp
#endif  // MXNET_RCPP_IO_H_
    
    
    {} // namespace mgpu

    
    
    {
    {
    {      switch (nd.storage_type()) {
        case kDefaultStorage: {
          Kernel<op_with_req<mshadow_op::plus, kWriteTo>, cpu>::Launch(
            s, out_data.Size(), out_data.dptr<DType>(), out_data.dptr<DType>(),
            nd_data.dptr<DType>());
          break;
        }
        case kCSRStorage: {
          const TBlob& nd_indices = nd.aux_data(csr::kIdx);
          const TBlob& nd_indptr = nd.aux_data(csr::kIndPtr);
          MSHADOW_IDX_TYPE_SWITCH(nd_indices.type_flag_, IType, {  // indices type
            MSHADOW_IDX_TYPE_SWITCH(nd_indptr.type_flag_, CType, {  // indptr type
              if (nd.storage_initialized()) {
                Kernel<ElemwiseDnsCsrDnsKernel<kWriteTo, mshadow_op::plus>, cpu>::Launch(
                  s, num_rows, out_data.dptr<DType>(), out_data.dptr<DType>(),
                  nd_data.dptr<DType>(), nd_indices.dptr<IType>(),
                  nd_indptr.dptr<CType>(), num_rows, num_cols);
              }
            });
          });
          break;
        }
        case kRowSparseStorage: {
          const TBlob& nd_indices = nd.aux_data(rowsparse::kIdx);
          MSHADOW_IDX_TYPE_SWITCH(nd_indices.type_flag_, IType, {  // indices type
            if (nd.storage_initialized()) {
              const nnvm::dim_t nz_rows = nd_indices.Size();
              Kernel<ElemwiseDnsRspDnsKernel<kWriteTo, mshadow_op::plus>, cpu>::Launch(
                s, nz_rows * num_cols, out_data.dptr<DType>(),
                out_data.dptr<DType>(), nd_data.dptr<DType>(), nd_indices.dptr<IType>(),
                num_rows, nz_rows, num_cols);
            }
          });
          break;
        }
        default:
          LOG(FATAL) << 'unknown storage type ' << nd.storage_type() << 'encountered...';
      }
    }
  });
}
    
      /*!
   * \brief Allow one of the binary inputs to be dense and still produce a sparse output.
   *        Typically used for sparse * dense = sparse.
   *        Note: for csr, it dispatches to fallback other than csr, csr -> csr
   * \param attrs Attributes
   * \param dev_mask Device mask
   * \param dispatch_mode Dispatch Mode
   * \param in_attrs Input storage attributes
   * \param out_attrs Output storage attributes
   * \return true if handled
   */
  static bool PreferSparseStorageType(const nnvm::NodeAttrs& attrs,
                                      int dev_mask,
                                      DispatchMode* dispatch_mode,
                                      std::vector<int> *in_attrs,
                                      std::vector<int> *out_attrs) {
    using namespace common;
    CHECK_EQ(in_attrs->size(), 2U) << ' in operator ' << attrs.name;
    CHECK_EQ(out_attrs->size(), 1U) << ' in operator ' << attrs.name;
    const auto& lhs_stype = in_attrs->at(0);
    const auto& rhs_stype = in_attrs->at(1);
    auto& out_stype = out_attrs->at(0);
    bool dispatched = false;
    const bool invalid_ctx = dev_mask != mshadow::cpu::kDevMask;
    const auto dispatch_ex = invalid_ctx ? DispatchMode::kFComputeFallback :
                             DispatchMode::kFComputeEx;
    if (!dispatched && ContainsOnlyStorage(*in_attrs, kDefaultStorage)) {
      // dns, dns -> dns
      dispatched = storage_type_assign(&out_stype, kDefaultStorage,
                                       dispatch_mode, DispatchMode::kFCompute);
    }
    if (!dispatched && ContainsOnlyStorage(*in_attrs, kRowSparseStorage)) {
        // rsp, rsp -> rsp
        dispatched = storage_type_assign(&out_stype, kRowSparseStorage,
                                         dispatch_mode, dispatch_ex);
    }
    if (!dispatched && ContainsOnlyStorage(*in_attrs, kCSRStorage)) {
        // csr, csr -> csr
        dispatched = storage_type_assign(&out_stype, kCSRStorage,
                                         dispatch_mode, dispatch_ex);
    }
    if (!dispatched &&
        ((lhs_stype == kRowSparseStorage && rhs_stype == kDefaultStorage) ||
         (lhs_stype == kDefaultStorage && rhs_stype == kRowSparseStorage))) {
        // rsp, dns -> rsp
        // dns, rsp -> rsp
        dispatched = storage_type_assign(&out_stype, kRowSparseStorage,
                                         dispatch_mode, dispatch_ex);
    }
    if (!dispatched &&
        ((lhs_stype == kCSRStorage && rhs_stype == kDefaultStorage) ||
         (lhs_stype == kDefaultStorage && rhs_stype == kCSRStorage))) {
        // csr, dns -> csr
        // dns, csr -> csr
        dispatched = storage_type_assign(&out_stype, kCSRStorage,
                                         dispatch_mode, DispatchMode::kFComputeEx);
    }
    if (!dispatched) {
      dispatched = dispatch_fallback(out_attrs, dispatch_mode);
    }
    return dispatched;
  }
    
    template<> inline
dnnError_t dnnConvolutionCreateBackwardFilter<double>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnConvolutionCreateBackwardFilter_F64(
        pConvolution,
        attributes,
        algorithm,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
        // change all inputs of this new node to share the old one's inputs
    for (int i = 0; i < oldNode->GetNumInputs(); i++)
    {
        newNode->SetInput(i, oldNode->GetInputs()[i]); // TODO: use AttachInput()?
        //oldNode->SetInput(i, nullptr); // BUGBUG: old node should no longer point into the network
    }
    
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
    
    #pragma warning(disable : 4267) // conversion from 'size_t' to 'unsigned int'; happens in CUDA <<<a,b>>> syntax if a and b are size_t
#pragma warning(disable : 4127) // conditional expression is constant; 'if (sizeof(ElemType)==sizeof(float))' triggers this
#pragma warning(disable : 4702) // unreachable code; triggered for unknown reasons
    
    // ===========================================================================
// DoConvertFromDbn() - implements CNTK 'convertdbn' command
// ===========================================================================
    
    #include 'Basics.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptParser.h'
    
    
    {
    {
    {    void setverbosity(int veb)
    {
        verbosity = veb;
        numlattices.setverbosity(veb);
        denlattices.setverbosity(veb);
    }
};
} }

    
        // transpose a 4x4 matrix
    // Passing input as const ref to ensure aligned-ness
    static void transpose(const float4& col0, const float4& col1, const float4& col2, const float4& col3,
                          float4& row0, float4& row1, float4& row2, float4& row3)
    { // note: the temp variable here gets completely eliminated by optimization
        float4 m0 = col0;
        float4 m1 = col1;
        float4 m2 = col2;
        float4 m3 = col3;
        _MM_TRANSPOSE4_PS(m0, m1, m2, m3); // 8 instructions for 16 elements
        row0 = m0;
        row1 = m1;
        row2 = m2;
        row3 = m3;
    }
    
    #include 'db/version_edit.h'
#include 'util/testharness.h'
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
    #endif  // STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_

    
      // Check second filter
  ASSERT_TRUE(reader.KeyMayMatch(3100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'hello'));
    
    void Histogram::Merge(const Histogram& other) {
  if (other.min_ < min_) min_ = other.min_;
  if (other.max_ > max_) max_ = other.max_;
  num_ += other.num_;
  sum_ += other.sum_;
  sum_squares_ += other.sum_squares_;
  for (int b = 0; b < kNumBuckets; b++) {
    buckets_[b] += other.buckets_[b];
  }
}
    
    #ifndef STORAGE_LEVELDB_UTIL_RANDOM_H_
#define STORAGE_LEVELDB_UTIL_RANDOM_H_
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    namespace leveldb {
    }
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    #endif // __cocos2dx_builder_h__

    
    bool js_cocos2dx_physics3d_Physics3DWorld_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DWorld_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DWorld(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DWorld_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_stepSimulate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_needCollisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_collisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setGhostPairCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DObjects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DConstraints(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setDebugDrawEnable(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getPhysicsObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_debugDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_sweepShape(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_Physics3DWorld(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_RotationSkewFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_RotationSkewFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_RotationSkewFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_RotationSkewFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_RotationSkewFrame_RotationSkewFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    
    		if (b2_gjkCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'gjk calls = %d, ave gjk iters = %3.1f, max gjk iters = %d',
				b2_gjkCalls, b2_gjkIters / float32(b2_gjkCalls), b2_gjkMaxIters);
			m_textLine += DRAW_STRING_NEW_LINE;
		}
    
    
/*
 * DumpCrashStack.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    
    {
    {        break;
    }
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class TSpy :  public Spy {
  public:
    TSpy(void* _this): Spy(_this) {}
    }
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
      virtual ~AbstractAuthResolver();
    
      virtual const char* getName() const CXX11_OVERRIDE;
    
      virtual ~AbstractProxyResponseCommand();
    
    
    {} // namespace aria2

    
    
    {} // namespace aria2

    
    std::unique_ptr<AuthConfig> AuthConfig::create(std::string user,
                                               std::string password)
{
  if (user.empty()) {
    return nullptr;
  }
  else {
    return make_unique<AuthConfig>(std::move(user), std::move(password));
  }
}
    
    std::ostream& operator<<(std::ostream& o,
                         const std::shared_ptr<AuthConfig>& authConfig);