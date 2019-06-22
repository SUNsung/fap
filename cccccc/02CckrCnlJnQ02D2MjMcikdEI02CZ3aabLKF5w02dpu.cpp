
        
        void absDiff(const Size2D &size,
             const s8 *src0Base, ptrdiff_t src0Stride,
             const s8 *src1Base, ptrdiff_t src1Stride,
             s8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s8>());
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
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, i);
        const u8 * src1 = internal::getRowPtr(src1Base, src1Stride, i);
        u16 * dst = internal::getRowPtr((u16 *)dstBase, dstStride, i);
        size_t j = 0;
    }
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, internal::vmovn(v_dst));
            x+=8;
        }
    }
};
template <typename Op> struct vtail<Op, 1>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<type>::vec64 vec64;
        typedef typename internal::VecTraits<type>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(f32, u8, 8,
    register float32x4_t vmult asm ('q0') = vdupq_n_f32((float)(1 << 16));
    register uint32x4_t  vmask asm ('q1') = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vcvt.u32.f32 q6, q4                                     \n\t'
            'vcvt.u32.f32 q7, q5                                     \n\t'
            'vbic q8, q1, q6                                         \n\t'
            'vbic q9, q1, q7                                         \n\t'
            'vshr.u32 q10, q8, #16                                   \n\t'
            'vshr.u32 q11, q9, #16                                   \n\t'
            'vqsub.u32 q12, q6, q10                                  \n\t'
            'vqsub.u32 q13, q7, q11                                  \n\t'
            'vqrshrn.u32 d28, q12, #16                               \n\t'
            'vqrshrn.u32 d29, q13, #16                               \n\t'
            'vqmovn.u16 d30, q14                                     \n\t'
            'vst1.8 {d30}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vmult), 'w' (vmask)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30'
        );
     }
})
#else
CVT_FUNC(f32, u8, 8,
    float32x4_t vmult = vdupq_n_f32((float)(1 << 16));
    uint32x4_t  vmask = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(s32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                             \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                             \n\t'
            'vcvt.f32.s32 q4, q2                                    \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vmul.f32 q6, q4, q0                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vadd.f32 q8, q6, q1                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vcvt.s32.f32 q10, q8                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vst1.32 {d20-d21}, [%[dst1]]                           \n\t'
            'vst1.32 {d22-d23}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23'
        );
    }
})
#else
CVTS_FUNC1(s32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
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
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vLane8.val[0], vc6u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vLane8.val[1], vc6u16);
                vSum_2_6 = vmlaq_u16(vSum_2_6, vLane8.val[2], vc6u16);
                vSum_3_7 = vmlaq_u16(vSum_3_7, vLane8.val[3], vc6u16);
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
     private:
  ObjectManager* object_manager_;
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    
    {
} // namespace extensions
#endif

    
    
    {
    {            --vNum;
            float32* newx = new float32[vNum];
            float32* newy = new float32[vNum];
            int32 currDest = 0;
            for (int32 i = 0; i < vNum; ++i) {
                if (currDest == earIndex) ++currDest;
                newx[i] = xrem[currDest];
                newy[i] = yrem[currDest];
                ++currDest;
            }
			
            // - add the clipped triangle to the triangle list
            int32 under = (earIndex == 0) ? (vNum) : (earIndex - 1);
            int32 over = (earIndex == vNum) ? 0 : (earIndex + 1);
            b2Triangle toAdd = b2Triangle(xrem[earIndex], yrem[earIndex], xrem[over], yrem[over], xrem[under], yrem[under]);
            buffer[bufferSize].Set(toAdd);
            ++bufferSize;
			
            // - replace the old list with the new one
            delete[] xrem;
            delete[] yrem;
            xrem = newx;
            yrem = newy;
        }
		
        b2Triangle toAdd = b2Triangle(xrem[1], yrem[1], xrem[2], yrem[2],
								  xrem[0], yrem[0]);
        buffer[bufferSize].Set(toAdd);
        ++bufferSize;
		
        delete[] xrem;
        delete[] yrem;
		
        b2Assert(bufferSize == xremLength-2);
		
        for (int32 i = 0; i < bufferSize; i++) {
            results[i].Set(buffer[i]);
        }
		
        delete[] buffer;
		
        return bufferSize;
}
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    		union
		{
			unsigned char auc[BYTES_PER_BLOCK];
			unsigned long int ul;
			Individual individual;
			Differential differential;
			T t;
			H h;
			Planar planar;
		};
    
    		TryDifferential(m_boolMostLikelyFlip, 1, -4, 0);
		TryDifferential(m_boolMostLikelyFlip, 1, 4, 0);
		TryDifferential(m_boolMostLikelyFlip, 1, 0, 4);
		TryDifferential(m_boolMostLikelyFlip, 1, 0, -4);
    
    #ifdef use_int32
  typedef int cInt;
  static cInt const loRange = 0x7FFF;
  static cInt const hiRange = 0x7FFF;
#else
  typedef signed long long cInt;
  static cInt const loRange = 0x3FFFFFFF;
  static cInt const hiRange = 0x3FFFFFFFFFFFFFFFLL;
  typedef signed long long long64;     //used by Int128 class
  typedef unsigned long long ulong64;
    
    /**
  Decompress a block of compressed data and returns the size of the
  decompressed block. If error occurs, e.g. the compressed data is
  corrupted or the output buffer is not large enough, then 0 (zero)
  will be returned instead.
    
    #define C_SUBFROM( res , a)\
    do {(res).r = ADD32((res).r,(a).r);  (res).i = SUB32((res).i,(a).i); \
    }while(0)
    
      // Clients are allowed to register function/arg1/arg2 triples that
  // will be invoked when this iterator is destroyed.
  //
  // Note that unlike all of the preceding methods, this method is
  // not abstract and therefore clients should not override it.
  using CleanupFunction = void (*)(void* arg1, void* arg2);
  void RegisterCleanup(CleanupFunction function, void* arg1, void* arg2);
    
      Status(Status&& rhs) noexcept : state_(rhs.state_) { rhs.state_ = nullptr; }
  Status& operator=(Status&& rhs) noexcept;
    
    namespace leveldb {
    }
    
      // Returns an estimate of the current (uncompressed) size of the block
  // we are building.
  size_t CurrentSizeEstimate() const;
    
    #ifndef STORAGE_LEVELDB_UTIL_ARENA_H_
#define STORAGE_LEVELDB_UTIL_ARENA_H_
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
      // override set_default
  inline FieldEntry<caffe::LayerParameter> &set_default(const std::string &value) {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file iter_prefetcher.h
 * \brief define a prefetcher using threaditer to keep k batch fetched
 */
#ifndef MXNET_IO_ITER_PREFETCHER_H_
#define MXNET_IO_ITER_PREFETCHER_H_
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
    template<typename xpu, typename OP>
void EvalOneHot_(const TBlob &index, const TBlob &rhs,
                 TBlob *ret, RunContext ctx) {
  LOG(INFO) << 'The operator onehot_encode is deprecated; use one_hot instead.';
  using namespace mshadow::expr;
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  // TODO(eric): support mixed type encoding, i.e. int index and float rhs.
  CHECK_EQ(ret->type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(rhs.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(index.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  ret->get<xpu, 2, real_t>(s) =
    one_hot_encode(index.get<xpu, 1, real_t>(s),
                   rhs.shape_[1]);
}
    
    template<typename xpu>
void NDArrayOp<xpu>::Backward(const OpContext &ctx,
                    const std::vector<TBlob> &out_grad,
                    const std::vector<TBlob> &in_data,
                    const std::vector<TBlob> &out_data,
                    const std::vector<OpReqType> &req,
                    const std::vector<TBlob> &in_grad,
                    const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }
    
    template<typename xpu>
void ConcatCompute(const nnvm::NodeAttrs& attrs, const OpContext& ctx,
                   const std::vector<TBlob>& inputs,
                   const std::vector<OpReqType>& req,
                   const std::vector<TBlob>& outputs) {
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  MSHADOW_TYPE_SWITCH(inputs[concat_enum::kData0].type_flag_, DType, {
    ConcatOp<xpu, DType> op;
    op.Init(param);
    op.Forward(ctx, inputs, req, outputs);
  });
}
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
            void Erase() override
        {
            if (IsPacked())
            {
                m_packedData = nullptr;
                m_packedDataLayout = nullptr;
                m_isPacked = false;
            }
            else
                Value::Erase();
        }
    
        static const std::wstring InitializerTypeAttributeName = L'initializerType';
    static const std::wstring OutputRankAttributeName = L'outputRank';
    static const std::wstring FilterRankAttributeName = L'filterRank';
    static const std::wstring ValueAttributeName = L'value';
    static const std::wstring ScaleAttributeName = L'scale';
    static const std::wstring RandomSeedAttributeName = L'randomSeed';
    static const std::wstring KernelWidthAttributeName = L'kernelWidth';
    static const std::wstring KernelHeightAttributeName = L'kernelHeight';
    
    public:
    // constructor
    // This constructs a new model from an existing one by:
    //  - iterating over all nodes
    //  - trying a sequence of edit functions until one made an edit
    //    This is like pattern matching: The first edit function that matches will return an updated node.
    //  - assemble a new network that consists of the old network with edits applied
    // Note that the old model is not edited in-place; instead a new copy is made that shares
    // unchanged nodes with the original one.
    ComputationNetworkWithEdits(const IConfigRecordPtr configp) :
        ComputationNetwork()
    {
        // get config parameters
        let& config = *configp;
        SetTraceLevel(config[L'traceLevel']);
        let& net = config[L'inputModel'].AsRef<ComputationNetwork>();
        let editFunctions = ScriptableObjects::ConfigArray::FlattenedVectorFrom<ConfigLambda>(config[L'editFunctions']);
        let additionalRoots = ScriptableObjects::ConfigArray::FlattenedVectorFrom<ComputationNodeBasePtr>(config[L'additionalRoots']);
    }
    
    
    {} // namespace aria2

    
      ~DHTRoutingTable();
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
      void setTaskQueue(DHTTaskQueue* taskQueue);
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    
    {} // namespace aria2

    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    #include <vector>
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    void RadarState201::Parse(const std::uint8_t* bytes, int32_t length,
                          ContiRadar* conti_radar) const {
  auto state = conti_radar->mutable_radar_state();
  state->set_max_distance(max_dist(bytes, length));
  state->set_output_type(output_type(bytes, length));
  state->set_rcs_threshold(rcs_threshold(bytes, length));
  state->set_radar_power(radar_power(bytes, length));
  state->set_send_quality(send_quality(bytes, length));
  state->set_send_ext_info(send_ext_info(bytes, length));
}
    
    
    { protected:
  SpeedLimit speed_limit_;
};
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
   -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0, -1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0, -1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0, -1,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
      Byte t2(bytes + 2);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }