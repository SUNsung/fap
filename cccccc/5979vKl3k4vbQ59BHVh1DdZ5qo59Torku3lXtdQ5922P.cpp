#define INSTANTIATE_LAYER_GPU_FORWARD(classname) \
  template void classname<float>::Forward_gpu( \
      const std::vector<Blob<float>*>& bottom, \
      const std::vector<Blob<float>*>& top); \
  template void classname<double>::Forward_gpu( \
      const std::vector<Blob<double>*>& bottom, \
      const std::vector<Blob<double>*>& top);
    
    namespace caffe {
    }
    
      /** @brief Using the CPU device, compute the layer output. */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) = 0;
  /**
   * @brief Using the GPU device, compute the layer output.
   *        Fall back to Forward_cpu() if unavailable.
   */
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
    // LOG(WARNING) << 'Using CPU code as backup.';
    return Forward_cpu(bottom, top);
  }
    
    #ifndef CAFFE_LAYER_FACTORY_H_
#define CAFFE_LAYER_FACTORY_H_
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    // Returns the box file name corresponding to the given image_filename.
STRING BoxFileName(const STRING& image_filename);
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    bool ParagraphModel::ValidFirstLine(int lmargin, int lindent,
                                    int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
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
    
    // GenericHeap requires 1 template argument:
// Pair will normally be either KDPairInc<Key, Data> or KDPairDec<Key, Data>
// for some arbitrary Key and scalar, smart pointer, or non-ownership pointer
// Data type, according to whether a MIN heap or a MAX heap is desired,
// respectively. Using KDPtrPairInc<Key, Data> or KDPtrPairDec<Key, Data>,
// GenericHeap can also handle simple Data pointers and own them.
// If no additional data is required, Pair can also be a scalar, since
// GenericHeap doesn't look inside it except for operator<.
//
// The heap is stored as a packed binary tree in an array hosted by a
// GenericVector<Pair>, with the invariant that the children of each node are
// both NOT Pair::operator< the parent node. KDPairInc defines Pair::operator<
// to use Key::operator< to generate a MIN heap and KDPairDec defines
// Pair::operator< to use Key::operator> to generate a MAX heap by reversing
// all the comparisons.
// See http://en.wikipedia.org/wiki/Heap_(data_structure) for more detail on
// the basic heap implementation.
//
// Insertion and removal are both O(log n) and, unlike the STL heap, an
// explicit Reshuffle function allows a node to be repositioned in time O(log n)
// after changing its value.
//
// Accessing the element for revaluation is a more complex matter, since the
// index and pointer can be changed arbitrarily by heap operations.
// Revaluation can be done by making the Data type in the Pair derived from or
// contain a DoublePtr as its first data element, making it possible to convert
// the pointer to a Pair using KDPairInc::RecastDataPointer.
template <typename Pair>
class GenericHeap {
 public:
  GenericHeap() = default;
  // The initial size is only a GenericVector::reserve. It is not enforced as
  // the size limit of the heap. Caller must implement their own enforcement.
  explicit GenericHeap(int initial_size) {
    heap_.reserve(initial_size);
  }
    }
    
    #endif
    /**
	 * Find the convex hull of a point cloud using 'Gift-wrap' algorithm - start
     * with an extremal point, and walk around the outside edge by testing
     * angles.
     * 
     * Runs in O(N*S) time where S is number of sides of resulting polygon.
     * Worst case: point cloud is all vertices of convex polygon -> O(N^2).
     * 
     * There may be faster algorithms to do this, should you need one -
     * this is just the simplest. You can get O(N log N) expected time if you
     * try, I think, and O(N) if you restrict inputs to simple polygons.
     * 
     * Returns null if number of vertices passed is less than 3.
     * 
	 * Results should be passed through convex decomposition afterwards
	 * to ensure that each shape has few enough points to be used in Box2d.
	 *
     * FIXME?: May be buggy with colinear points on hull. Couldn't find a test
     * case that resulted in wrong behavior. If one turns up, the solution is to
     * supplement angle check with an equality resolver that always picks the
     * longer edge. I think the current solution is working, though it sometimes
     * creates an extra edge along a line.
     */
	
b2Polygon ConvexHull(b2Vec2* v, int nVert) {
        float32* cloudX = new float32[nVert];
        float32* cloudY = new float32[nVert];
        for (int32 i = 0; i < nVert; ++i) {
            cloudX[i] = v[i].x;
            cloudY[i] = v[i].y;
        }
        b2Polygon result = ConvexHull(cloudX, cloudY, nVert);
		delete[] cloudX;
		delete[] cloudY;
		return result;
}
	
b2Polygon ConvexHull(float32* cloudX, float32* cloudY, int32 nVert) {
		b2Assert(nVert > 2);
        int32* edgeList = new int32[nVert];
        int32 numEdges = 0;
		
	float32 minY = 1e10;
        int32 minYIndex = nVert;
        for (int32 i = 0; i < nVert; ++i) {
            if (cloudY[i] < minY) {
                minY = cloudY[i];
                minYIndex = i;
            }
        }
		
        int32 startIndex = minYIndex;
        int32 winIndex = -1;
        float32 dx = -1.0f;
        float32 dy = 0.0f;
        while (winIndex != minYIndex) {
            float32 newdx = 0.0f;
            float32 newdy = 0.0f;
            float32 maxDot = -2.0f;
            for (int32 i = 0; i < nVert; ++i) {
                if (i == startIndex)
                    continue;
                newdx = cloudX[i] - cloudX[startIndex];
                newdy = cloudY[i] - cloudY[startIndex];
                float32 nrm = sqrtf(newdx * newdx + newdy * newdy);
                nrm = (nrm == 0.0f) ? 1.0f : nrm;
                newdx /= nrm;
                newdy /= nrm;
                
                //Cross and dot products act as proxy for angle
                //without requiring inverse trig.
                //FIXED: don't need cross test
                //float32 newCross = newdx * dy - newdy * dx;
                float32 newDot = newdx * dx + newdy * dy;
                if (newDot > maxDot) {//newCross >= 0.0f && newDot > maxDot) {
                    maxDot = newDot;
                    winIndex = i;
                }
            }
            edgeList[numEdges++] = winIndex;
            dx = cloudX[winIndex] - cloudX[startIndex];
            dy = cloudY[winIndex] - cloudY[startIndex];
            float32 nrm = sqrtf(dx * dx + dy * dy);
            nrm = (nrm == 0.0f) ? 1.0f : nrm;
            dx /= nrm;
            dy /= nrm;
            startIndex = winIndex;
        }
		
        float32* xres = new float32[numEdges];
        float32* yres = new float32[numEdges];
        for (int32 i = 0; i < numEdges; i++) {
            xres[i] = cloudX[edgeList[i]];
            yres[i] = cloudY[edgeList[i]];
			//('%f, %f\n',xres[i],yres[i]);
        }
		
        b2Polygon returnVal(xres, yres, numEdges);
    }
    }
    
    
    
    	// ----------------------------------------------------------------------------------------------------
	//
	Block4x4::Block4x4(void)
	{
		m_pimageSource = nullptr;
		m_uiSourceH = 0;
		m_uiSourceV = 0;
    }
    
    		void SetSourcePixels(void);
    
    	// ----------------------------------------------------------------------------------------------------
	// initialize the generic encoding for a 4x4 block
	// a_pblockParent points to the block associated with this encoding
	// a_errormetric is used to choose the best encoding
	// init the decoded pixels to -1 to mark them as undefined
	// init the error to -1 to mark it as undefined
	//
	void Block4x4Encoding::Init(Block4x4 *a_pblockParent,
								ColorFloatRGBA *a_pafrgbaSource,
								ErrorMetric a_errormetric)
	{
    }
    
    #include 'EtcColorFloatRGBA.h'
    
    #if !defined(OPUS_HAVE_RTCD)
#define OVERRIDE_OPUS_FFT (1)
    
    void silk_decode_pitch(
    opus_int16                  lagIndex,           /* I                                                                */
    opus_int8                   contourIndex,       /* O                                                                */
    opus_int                    pitch_lags[],       /* O    4 pitch values                                              */
    const opus_int              Fs_kHz,             /* I    sampling frequency (kHz)                                    */
    const opus_int              nb_subfr            /* I    number of sub frames                                        */
);
    
    /* (a32 * b32) >> 16 */
#undef silk_SMULWW
static OPUS_INLINE opus_int32 silk_SMULWW_armv4(opus_int32 a, opus_int32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMULWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(a), 'r'(b)
  );
  return (rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMULWW(a, b) (silk_SMULWW_armv4(a, b))
    
        routingTable->setTaskQueue(taskQueue.get());
    routingTable->setTaskFactory(taskFactory.get());
    
    
    {} // namespace aria2

    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    #include 'common.h'
#include <string>
    
    DNSCache::CacheEntry::CacheEntry(const std::string& hostname, uint16_t port)
    : hostname_(hostname), port_(port)
{
}