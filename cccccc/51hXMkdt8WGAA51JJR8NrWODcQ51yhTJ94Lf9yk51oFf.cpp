
        
        
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
extern std::string LockFileName(const std::string& dbname);
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(),contents.size()-1));
  ASSERT_EQ('Put(foo, bar)@200'
            'ParseError()',
            PrintContents(&batch));
}
    
      // Three-way comparison.  Returns value:
  //   < 0 iff 'a' < 'b',
  //   == 0 iff 'a' == 'b',
  //   > 0 iff 'a' > 'b'
  virtual int Compare(const Slice& a, const Slice& b) const = 0;
    
    #include <fstream>  // NOLINT(readability/streams)
#include <string>
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \left\{
   *        \begin{array}{lr}
   *            x                  & \mathrm{if} \; x > 0 \\
   *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$.  
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
    void initNuma() {
  if (getenv('HHVM_DISABLE_NUMA')) {
    return;
  }
  // When linked dynamically numa_init() is called before JEMallocInitializer()
  // numa_init is not exported by libnuma.so so it will be NULL
  // however when linked statically numa_init() is not guaranteed to be called
  // before JEMallocInitializer(), so call it here.
  if (&numa_init) {
    numa_init();
  }
  if (numa_available() < 0) return;
    }
    
      switch (file_fsmagic(ms, inname, &sb, stream)) {
  case -1:    /* error */
    goto done;
  case 0:      /* nothing found */
    break;
  default:    /* matched it and printed type */
    rv = 0;
    goto done;
  }
    
    namespace HPHP { namespace jit {
    }
    }
    
        HFTRACE(1, 'merging %s -> %s: %u\n', predCluster->toString().c_str(),
            cluster->toString().c_str(), cg.targets[fid].samples);
    
    
Instruction* Instruction::ImmPCOffsetTarget(Instruction* from) {
  ptrdiff_t offset;
  if (IsPCRelAddressing()) {
    // PC-relative addressing. Only ADR is supported.
    offset = ImmPCRel();
  } else if (IsLoadOrStore()) {
    offset = ImmLLiteral() << kInstructionSizeLog2;
  } else {
    // All PC-relative branches.
    assert(BranchType() != UnknownBranchType);
    // Relative branch offsets are instruction-size-aligned.
    offset = ImmBranch() << kInstructionSizeLog2;
  }
  return (!from ? this : from) + offset;
}
    
    #include 'test/cpp/qps/report.h'
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    #include <gflags/gflags.h>
#include <grpc/grpc.h>
#include <grpc/support/time.h>
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
    
    {}  // namespace grpc
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    bool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
    
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
    
    
    
    
    
    
    
    
    
    
    
    
    {    CHECK_GL_ERROR_DEBUG();
}
    
    		// Breakable dynamic body
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 40.0f);
			bd.angle = 0.25f * b2_pi;
			m_body1 = m_world->CreateBody(&bd);
    }
    
    #endif
