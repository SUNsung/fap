
        
        
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of ConvolutionLayer.
 *        Fallback to ConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates convolution through forward kernels for filtering and bias
 * plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
 *
 * The CUDNN engine does not have memory overhead for matrix buffers. For many
 * input and filter regimes the CUDNN engine is faster than the CAFFE engine,
 * but for fully-convolutional models and large inputs the CAFFE engine can be
 * faster as long as it fits in memory.
*/
template <typename Dtype>
class CuDNNConvolutionLayer : public ConvolutionLayer<Dtype> {
 public:
  explicit CuDNNConvolutionLayer(const LayerParameter& param)
      : ConvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNConvolutionLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    

    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    #include 'fontinfo.h'
#include 'ndminx.h'
#include 'sampleiterator.h'
#include 'shapeclassifier.h'
#include 'shapetable.h'
#include 'trainingsample.h'
#include 'trainingsampleset.h'
#include 'unicity_table.h'
    
    FLOAT32 DistanceBetween(FPOINT A, FPOINT B);
    
    #include <folly/Optional.h>
    
    
    {  unsigned next_vr{Vreg::V0};
  Vlabel entry;
  jit::vector<Vframe> frames;
  jit::vector<Vblock> blocks;
  jit::hash_map<Vconst,Vreg,Vconst::Hash> constToReg;
  jit::hash_map<size_t,Vconst> regToConst;
  jit::vector<VregList> tuples;
  jit::vector<VcallArgs> vcallArgs;
  jit::vector<VdataBlock> dataBlocks;
  uint16_t cur_voff{0};  // current instruction index managed by Vout
  bool padding{false};
  bool profiling{false};
  folly::Optional<TransContext> context;
  StructuredLogEntry* log_entry{nullptr};
};
    
      if (default_magic) {
    free(default_magic);
    default_magic = NULL;
  }
    
    void OfflineCode::disasm(FILE* file,
                         TCA fileStartAddr,
                         TCA codeStartAddr,
                         uint64_t codeLen,
                         const PerfEventsMap<TCA>& perfEvents,
                         BCMappingInfo bcMappingInfo,
                         bool printAddr,
                         bool printBinary) {
    }
    
    
    {}
    
    bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DPointToPointConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DPointToPointConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_getPivotPointInA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_getPivotPointInB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_setPivotPointInA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_setPivotPointInB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_Physics3DPointToPointConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    			// Top horizontal
			shape.Set(b2Vec2(-20.0f, 20.0f), b2Vec2(20.0f, 20.0f));
			ground->CreateFixture(&sd);
    
    	void Break()
	{
		// Create two bodies from one.
		b2Body* body1 = m_piece1->GetBody();
		b2Vec2 center = body1->GetWorldCenter();
    }
    
        // Try to grow in place.
    //
    // Note that xallocx(MALLOCX_ZERO) will only zero newly allocated memory,
    // even if a previous allocation allocated more than we requested.
    // This is fine; we always use MALLOCX_ZERO with jemalloc and we
    // always expand our allocation to the real size.
    if (prevCapacity * sizeof(ElementWrapper) >= jemallocMinInPlaceExpandable) {
      success =
          (xallocx(threadEntry->elements, newByteSize, 0, MALLOCX_ZERO) ==
           newByteSize);
    }
    
    template <typename T>
struct constexpr_abs_helper<
    T,
    typename std::enable_if<std::is_floating_point<T>::value>::type> {
  static constexpr T go(T t) {
    return t < static_cast<T>(0) ? -t : t;
  }
};
    
    TDigest TDigest::merge(Range<const TDigest*> digests) {
  size_t nCentroids = 0;
  for (auto it = digests.begin(); it != digests.end(); it++) {
    nCentroids += it->centroids_.size();
  }
    }
    
    using namespace folly;
    
      switch (cb.aio_lio_opcode) {
    case IO_CMD_PREAD:
    case IO_CMD_PWRITE:
      os << folly::format(
          'buf={}, offset={}, nbytes={}, ',
          cb.u.c.buf,
          cb.u.c.offset,
          cb.u.c.nbytes);
      break;
    default:
      os << '[TODO: write debug string for '
         << iocbCmdToString(cb.aio_lio_opcode) << '] ';
      break;
  }
    
    TEST(AsyncIO, ZeroAsyncDataPollable) {
  testReads({{0, 0}}, AsyncIO::POLLABLE);
}
    
    
    { private:
  class WriterFactory;
};