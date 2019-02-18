
        
        
    {
    {}  // namespace swig
}  // namespace tensorflow
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Workarounds for Python 2 vs 3 API differences.
#if PY_MAJOR_VERSION < 3
    
    // Converts the given numpy ndarray to a (safe) TF_Tensor. The returned
// TF_Tensor in `out_tensor` may have its own Python reference to `ndarray`s
// data. After `out_tensor` is destroyed, this reference must (eventually) be
// decremented via ClearDecrefCache().
//
// `out_tensor` must be non-null. Caller retains ownership of `ndarray`.
Status PyArrayToTF_Tensor(PyObject* ndarray, Safe_TF_TensorPtr* out_tensor);
    
    void ImportNumpy() {
  import_array1();
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Indicates a set of options for a device's usage, which generally must be
// provided at StreamExecutor device-initialization time.
//
// These are intended to be useful-but-not-mandatorily-supported options for
// using devices on the underlying platform. Presently, if the option requested
// is not available on the target platform, a warning will be emitted.
struct DeviceOptions {
 public:
  // When it is observed that more memory has to be allocated for thread stacks,
  // this flag prevents it from ever being deallocated. Potentially saves
  // thrashing the thread stack memory allocation, but at the potential cost of
  // some memory space.
  static const unsigned kDoNotReclaimStackAllocation = 0x1;
    }
    
      // Returns a pointer to the described executor (if one with a matching config
  // has been created), or a NOT_FOUND status.
  port::StatusOr<StreamExecutor*> Get(const StreamExecutorConfig& config);
    
      // This is a substitution function from the generic parameters of the
  // conforming type to the synthetic environment.
  //
  // For structs, enums and protocols, this is a 1:1 mapping; for classes,
  // we increase the depth of each generic parameter by 1 so that we can
  // introduce a class-bound 'Self' parameter.
  //
  // This is a raw function rather than a substitution map because we need to
  // keep generic parameters as generic, even if the conformanceSig (the best
  // way to create the substitution map) equates them to concrete types.
  auto conformanceToSyntheticTypeFn = [&](SubstitutableType *type) {
    auto *genericParam = cast<GenericTypeParamType>(type);
    if (covariantSelf) {
      return GenericTypeParamType::get(genericParam->getDepth() + 1,
                                       genericParam->getIndex(), ctx);
    }
    }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    % for start_code_point, end_code_point, value in break_table.property_value_ranges:
%   if start_code_point == 0:
  if (C <= ${end_code_point})
%   else:
  if (C >= ${start_code_point} && C <= ${end_code_point})
%   end
    return GraphemeClusterBreakProperty::${value};
% end
    
      // The canonical type decl we will import as a member of
  EffectiveClangContext effectiveDC = {};
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
      std::string getTargetForLinker() const override;
    
        /** Colorize an icon (given filename) with the icon color */
    QIcon SingleColorIcon(const QString& filename) const;
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
        /** In:
     *    Eric Brier and Marc Joye, Weierstrass Elliptic Curves and Side-Channel Attacks.
     *    In D. Naccache and P. Paillier, Eds., Public Key Cryptography, vol. 2274 of Lecture Notes in Computer Science, pages 335-345. Springer-Verlag, 2002.
     *  we find as solution for a unified addition/doubling formula:
     *    lambda = ((x1 + x2)^2 - x1 * x2 + a) / (y1 + y2), with a = 0 for secp256k1's curve equation.
     *    x3 = lambda^2 - (x1 + x2)
     *    2*y3 = lambda * (x1 + x2 - 2 * x3) - (y1 + y2).
     *
     *  Substituting x_i = Xi / Zi^2 and yi = Yi / Zi^3, for i=1,2,3, gives:
     *    U1 = X1*Z2^2, U2 = X2*Z1^2
     *    S1 = Y1*Z2^3, S2 = Y2*Z1^3
     *    Z = Z1*Z2
     *    T = U1+U2
     *    M = S1+S2
     *    Q = T*M^2
     *    R = T^2-U1*U2
     *    X3 = 4*(R^2-Q)
     *    Y3 = 4*(R*(3*Q-2*R^2)-M^4)
     *    Z3 = 2*M*Z
     *  (Note that the paper uses xi = Xi / Zi and yi = Yi / Zi instead.)
     *
     *  This formula has the benefit of being the same for both addition
     *  of distinct points and doubling. However, it breaks down in the
     *  case that either point is infinity, or that y1 = -y2. We handle
     *  these cases in the following ways:
     *
     *    - If b is infinity we simply bail by means of a VERIFY_CHECK.
     *
     *    - If a is infinity, we detect this, and at the end of the
     *      computation replace the result (which will be meaningless,
     *      but we compute to be constant-time) with b.x : b.y : 1.
     *
     *    - If a = -b, we have y1 = -y2, which is a degenerate case.
     *      But here the answer is infinity, so we simply set the
     *      infinity flag of the result, overriding the computed values
     *      without even needing to cmov.
     *
     *    - If y1 = -y2 but x1 != x2, which does occur thanks to certain
     *      properties of our curve (specifically, 1 has nontrivial cube
     *      roots in our field, and the curve equation has no x coefficient)
     *      then the answer is not infinity but also not given by the above
     *      equation. In this case, we cmov in place an alternate expression
     *      for lambda. Specifically (y1 - y2)/(x1 - x2). Where both these
     *      expressions for lambda are defined, they are equal, and can be
     *      obtained from each other by multiplication by (y1 + y2)/(y1 + y2)
     *      then substitution of x^3 + 7 for y^2 (using the curve equation).
     *      For all pairs of nonzero points (a, b) at least one is defined,
     *      so this covers everything.
     */
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    inline std::string format(const char* fmt)
{
    std::ostringstream oss;
    format(oss, fmt);
    return oss.str();
}
    
        obj.clear();
    BOOST_CHECK(obj.empty());
    BOOST_CHECK_EQUAL(obj.size(), 0);
    BOOST_CHECK_EQUAL(obj.getType(), UniValue::VNULL);
    
    #define QUARTERROUND(a,b,c,d) \
  a += b; d = rotl32(d ^ a, 16); \
  c += d; b = rotl32(b ^ c, 12); \
  a += b; d = rotl32(d ^ a, 8); \
  c += d; b = rotl32(b ^ c, 7);
    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
    ; ROTATE_ARGS
; Rotate values of symbols a...h
%macro ROTATE_ARGS 0
%xdefine TMP_ h
%xdefine h g
%xdefine g f
%xdefine f e
%xdefine e d
%xdefine d c
%xdefine c b
%xdefine b a
%xdefine a TMP_
%endm
    
    bool AtLeastOneAnnotationMatchesSubstring(
    const string& file_content,
    const std::vector<const GeneratedCodeInfo::Annotation*>& annotations,
    const string& expected_text) {
  for (std::vector<const GeneratedCodeInfo::Annotation*>::const_iterator
           i = annotations.begin(),
           e = annotations.end();
       i != e; ++i) {
    const GeneratedCodeInfo::Annotation* annotation = *i;
    uint32 begin = annotation->begin();
    uint32 end = annotation->end();
    if (end < begin || end > file_content.size()) {
      return false;
    }
    if (file_content.substr(begin, end - begin) == expected_text) {
      return true;
    }
  }
  return false;
}
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
      std::vector<const FileDescriptor*> parsed_files;
  for (int i = 0; i < request.file_to_generate_size(); i++) {
    parsed_files.push_back(pool.FindFileByName(request.file_to_generate(i)));
    if (parsed_files.back() == NULL) {
      *error_msg = 'protoc asked plugin to generate a file but '
                   'did not provide a descriptor for the file: ' +
                   request.file_to_generate(i);
      return false;
    }
  }
    
    void absDiff(const Size2D &size,
             const s32 *src0Base, ptrdiff_t src0Stride,
             const s32 *src1Base, ptrdiff_t src1Stride,
             s32 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s32>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    
    {    void operator() (const f32 * src0, const f32 * src1, f32 * dst) const
    {
        dst[0] = alpha*src0[0] + beta*src1[0] + gamma;
    }
};
    
    struct BitwiseAnd
{
    typedef u8 type;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, s32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vst1.32 {d22-d23}, [%[dst1]]                           \n\t'
            'vst1.32 {d24-d25}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25'
        );
    }
})
#else
CVTS_FUNC(s16, s32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vst1q_s32(_dst + i + 0, vline1_s32);
        vst1q_s32(_dst + i + 4, vline2_s32);
    }
})
#endif
    
    f64 dotProduct(const Size2D &_size,
               const s8 * src0Base, ptrdiff_t src0Stride,
               const s8 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    
    {        process(src, j, size.width, i,
                minVal, minLocPtr, minLocCount, minLocCapacity,
                maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
    }
    
    
    {            vst3(dst + jd - step_tail3, v_dst);
        }
    
    	// Now that we have `commandStr`, it's OK to change `exePath`...
	PathRemoveFileSpec(exePath);
    
    namespace dmlc {
namespace data {
    }
    }
    
    SEXP XGDMatrixNumRow_R(SEXP handle) {
  bst_ulong nrow;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumRow(R_ExternalPtrAddr(handle), &nrow));
  R_API_END();
  return ScalarInteger(static_cast<int>(nrow));
}
    
    #include <dmlc/registry.h>
#include <vector>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include './base.h'
#include './data.h'
#include './objective.h'
#include './feature_map.h'
#include '../../src/common/host_device_vector.h'
    
    namespace osquery {
    }
    
    const size_t kDistributedAccelerationInterval = 5;
    
    namespace rj = rapidjson;
    
    class ExtensionManagerNull : virtual public ExtensionManagerIf , virtual public ExtensionNull {
 public:
  virtual ~ExtensionManagerNull() {}
  void extensions(InternalExtensionList& /* _return */) {
    return;
  }
  void options(InternalOptionList& /* _return */) {
    return;
  }
  void registerExtension(ExtensionStatus& /* _return */, const InternalExtensionInfo& /* info */, const ExtensionRegistry& /* registry */) {
    return;
  }
  void deregisterExtension(ExtensionStatus& /* _return */, const ExtensionRouteUUID /* uuid */) {
    return;
  }
  void query(ExtensionResponse& /* _return */, const std::string& /* sql */) {
    return;
  }
  void getQueryColumns(ExtensionResponse& /* _return */, const std::string& /* sql */) {
    return;
  }
};
    
    #endif

    
    #include <algorithm>
#include <ostream>
    
    std::pair<std::string, DiffResults> getSerializedDiffResultsJSON() {
  auto results = getSerializedDiffResults();
  std::string output;
  results.first.toString(output);
  return std::make_pair(output, std::move(results.second));
}
    
    namespace osquery {
namespace tables {
    }
    }
    
      STDMETHODIMP RegisterOutputCallbacks::QueryInterface(
      THIS_ _In_ REFIID InterfaceId, _Out_ PVOID* Interface) {
    *Interface = nullptr;
    if (IsEqualIID(InterfaceId, __uuidof(IUnknown)) ||
        IsEqualIID(InterfaceId, __uuidof(IDebugOutputCallbacks))) {
      *Interface = (IDebugOutputCallbacks*)this;
      AddRef();
      return S_OK;
    } else {
      return E_NOINTERFACE;
    }
  }
    
            int res = 1;
        int index = nextDifferentCharacterIndex(nums, 1);
        int i = 1;
        while(index < nums.size()){
            res ++;
            nums[i++] = nums[index];
            index = nextDifferentCharacterIndex(nums, index + 1);
        }
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
    {    return 0;
}
    
    
    {
    {        if(node){
            res.push_back(node->val);
            preorderTraversal(node->left, res);
            preorderTraversal(node->right, res);
        }
    }
};
    
    
    {
    {        stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
            if(cur != NULL){
                res.push_back(cur->val);
                stack.push(cur);
                cur = cur->left;
            }
            else{
                cur = stack.top();
                stack.pop();
                cur = cur->right;
            }
        }
        return res;
    }
};
    
    #include <iostream>
#include <vector>
#include <stack>