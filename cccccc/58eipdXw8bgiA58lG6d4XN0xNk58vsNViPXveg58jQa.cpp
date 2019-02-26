
        
        #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
    #if defined(__APPLE__)
#include 'Darwin/Cache-Mac.cpp'
#else
    
      auto presumedLoc = clangSrcMgr.getPresumedLoc(clangLoc);
  if (!presumedLoc.getFilename())
    return loc;
  if (presumedLoc.getLine() == 0)
    return SourceLoc();
    
      bool isGetter() const {
    return accessorKind == IAMAccessorKind::Getter;
  }
    
    #include 'swift/Demangling/Demangle.h'
#include 'swift/Demangling/Demangler.h'
#include <cstdio>
    
    // third_party/node
// FIXME: node_webkit.h should include v8 headers
#include 'third_party/node-nw/src/node_webkit.h'
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Base);
};
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    
    {}  // namespace nwapi
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  if (pos < 0 || pos >= (int)menu_items_.size()) return;
    }
    
        enum BORDER_MODE
    {
        BORDER_MODE_UNDEFINED,
        BORDER_MODE_CONSTANT,
        BORDER_MODE_REPLICATE,
        BORDER_MODE_REFLECT,
        BORDER_MODE_REFLECT101,
        BORDER_MODE_WRAP
    };
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_dst1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(f32, s32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vcvt.s32.f32 q4, q6                                     \n\t'
            'vcvt.s32.f32 q5, q7                                     \n\t'
            'vst1.32 {d8-d9},   [%[dst1]]                            \n\t'
            'vst1.32 {d10-d11}, [%[dst2]]                            \n\t'
            : //no output
            : [src1] 'r' (_src + i),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i),
              [dst2] 'r' (_dst + i + 4),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15'
        );
    }
})
#else
CVTS_FUNC(f32, s32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vst1q_s32(_dst + i + 0, vline1_s32);
        vst1q_s32(_dst + i + 4, vline2_s32);
    }
})
#endif
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[8]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[7]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[6]);
    
    	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
    /*! \brief options in the registry to set inplace of operator */
enum SimpleOpInplaceOption {
  /*! \brief do not allow inplace in arguments */
  kNoInplace,
  /*! \brief in unary forward, allow inplace in with out */
  kInplaceInOut,
  /*! \brief in unary backward, allow inplace out_grad with in_grad */
  kInplaceOutIn,
  /*! \brief in binary forward, allow inplace left operand with out */
  kInplaceLhsOut,
  /*! \brief in binary backward, allow inplace out_grad with lhs_grad */
  kInplaceOutLhs
};
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    template<>
void SetDataGradToBlob<mshadow::gpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_gpu_diff(data_ptr);
}
    
    /**!
 * \brief Workaround for missing functions in ::caffe::Layer
 * \warning Do not add or override any virtual functions in this class
 * @tparam Dtype
 */
template <typename Dtype>
class CaffeLayerFriend : public ::caffe::Layer<Dtype> {
  explicit CaffeLayerFriend(const ::caffe::LayerParameter& param) = delete;
 public:
  inline void SetPhase(::caffe::Phase p) {
    this->phase_ = p;
  }
};
    
    
    {  /*! \brief MNISTCass iter params */
  CaffeDataParam param_;
  /*! \brief Shape scalar values */
  index_t batch_size_, channels_, width_, height_;
  /*! \brief Caffe data layer */
  boost::shared_ptr<caffe::Layer<Dtype> >  caffe_data_layer_;
  /*! \brief batch data blob */
  mxnet::TBlob batch_data_;
  /*! \brief batch label blob */
  mxnet::TBlob batch_label_;
  /*! \brief Output blob data for this iteration */
  TBlobBatch out_;
  /*! \brief Bottom and top connection-point blob data */
  std::vector<::caffe::Blob<Dtype>*> bottom_, top_;
  /*! \brief Cleanup these blobs on exit */
  std::list<std::unique_ptr<::caffe::Blob<Dtype>>> cleanup_blobs_;
  /*! \brief type flag of the tensor blob */
  const int type_flag_;
  /*! \brief Blobs done so far */
  std::atomic<size_t>  loc_;
};  // class CaffeDataIter
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
        for (int i = 0; i < param_.num_data; ++i) {
      TShape tshape = (*in_shape)[i];
      if (tshape.ndim() == 0) return false;
      auto blob_ptr = new Blob<float>();
      blob_ptr->Reshape(caffe::TShape2Vector(tshape));
      bot_blobs.push_back(blob_ptr);
    }
    
    class LibSVMIter: public SparseIIterator<DataInst> {
 public:
  LibSVMIter() {}
  virtual ~LibSVMIter() {}
    }
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    
    {  void serialize(const std::string& filename);
};
    
        peerAnnounceStorage->setTaskQueue(taskQueue.get());
    peerAnnounceStorage->setTaskFactory(taskFactory.get());
    
    class DownloadEngine;
class Command;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() CXX11_OVERRIDE;
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
        template <typename OutputIterator>
    void getAllGoodAddrs(OutputIterator out) const
    {
      for (auto& elem : addrEntries_) {
        if (elem.good_) {
          *out++ = elem.addr_;
        }
      }
    }
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    
    {  // Sleep just until `num_bytes` is allowed.
  uint64_t sleep_amount =
      static_cast<uint64_t>(num_bytes /
                            static_cast<long double>(delayed_write_rate_) *
                            kMicrosPerSecond) +
      sleep_debt;
  last_refill_time_ = time_now + sleep_amount;
  return sleep_amount;
}
    
    #include 'rocksdb/env.h'
    
    #include 'rocksdb/db.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/options.h'
    
    
    {  rocksdb::WriteOptions wopts;
  db->Merge(wopts, '0', 'bad');  // This is filtered out
  db->Merge(wopts, '1', 'data1');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '1', 'data2');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '3', 'data3');
  db->CompactRange(rocksdb::CompactRangeOptions(), nullptr, nullptr);
  fprintf(stderr, 'filter.count_ = %d\n', filter.count_);
  assert(filter.count_ == 0);
  fprintf(stderr, 'filter.merge_count_ = %d\n', filter.merge_count_);
  assert(filter.merge_count_ == 6);
}

    
    
    {}  // namespace
    
      delete db;
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
    
    { protected:
  explicit DBWithTTL(DB* db) : StackableDB(db) {}
};
    
      // Compress blocks using the specified compression algorithm.  This
  // parameter can be changed dynamically.
  //
  // Default: kSnappyCompression, which gives lightweight but fast
  // compression.
  //
  // Typical speeds of kSnappyCompression on an Intel(R) Core(TM)2 2.4GHz:
  //    ~200-500MB/s compression
  //    ~400-800MB/s decompression
  // Note that these speeds are significantly faster than most
  // persistent storage speeds, and therefore it is typically never
  // worth switching to kNoCompression.  Even if the input data is
  // incompressible, the kSnappyCompression implementation will
  // efficiently detect that and will switch to uncompressed mode.
  CompressionType compression;
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Speed);
};
    
    using namespace std;
    
        /**
     * @js NA
     * @lua NA
     */
    virtual ~PointArray();
    /**
     * @js NA
     * @lua NA
     */
    PointArray();
    
    /**
@brief Waves action.
@details This action is used for take effect on the target node as waves.
        You can control the effect by these parameters:
        duration, grid size, waves count, amplitude,
        whether waves on horizontal and whether waves on vertical.
*/
class CC_DLL Waves : public Grid3DAction
{
public:
    /**
    @brief Create the action with amplitude, horizontal sin, vertical sin, grid size, waves count and duration.
    @param duration Specify the duration of the Waves action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Waves action.
    @param amplitude Specify the amplitude of the Waves action.
    @param horizontal Specify whether waves on horizontal.
    @param vertical Specify whether waves on vertical.
    @return If the creation success, return a pointer of Waves action; otherwise, return nil.
    */
    static Waves* create(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical);
    }
    
    void ActionManager::actionAllocWithHashElement(tHashElement *element)
{
    // 4 actions per Node by default
    if (element->actions == nullptr)
    {
        element->actions = ccArrayNew(4);
    }else 
    if (element->actions->num == element->actions->max)
    {
        ccArrayDoubleCapacity(element->actions);
    }
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /**
@brief JumpTiles3D action.
@details Move the tiles of a target node across the Z axis.
*/
class CC_DLL JumpTiles3D : public TiledGrid3DAction
{
public:
    /** 
     * @brief Create the action with the number of jumps, the sin amplitude, the grid size and the duration.
     * @param duration Specify the duration of the JumpTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param numberOfJumps Specify the jump tiles count.
     * @param amplitude Specify the amplitude of the JumpTiles3D action.
     * @return If the creation success, return a pointer of JumpTiles3D action; otherwise, return nil.
     */
    static JumpTiles3D* create(float duration, const Size& gridSize, unsigned int numberOfJumps, float amplitude);
    }
    
        for (const auto& anim : animations)
    {
        std::string name = anim.first;
        ValueMap& animationDict = const_cast<ValueMap&>(anim.second.asValueMap());
    }
    
    AtlasNode::~AtlasNode()
{
    CC_SAFE_RELEASE(_textureAtlas);
}