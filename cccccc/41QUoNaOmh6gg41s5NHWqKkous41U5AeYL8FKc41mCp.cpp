
        
        
    {  ~TemporaryFile() {
    unlink(path.c_str());
  }
};
    
    class GetMergeSingleScalarFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    	//Find node with minimum y value (max x if equal)
	float32 minY = 1e10;
	float32 maxX = -1e10;
	int32 minYIndex = -1;
	for (int32 i = 0; i < nNodes; ++i) {
		if (nodes[i].position.y < minY && nodes[i].nConnected > 1) {
			minY = nodes[i].position.y;
			minYIndex = i;
			maxX = nodes[i].position.x;
		} else if (nodes[i].position.y == minY && nodes[i].position.x > maxX && nodes[i].nConnected > 1) {
			minYIndex = i;
			maxX = nodes[i].position.x;
		}
	}
    
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
    
      /* The AF_Blue_String enumeration values are offsets into the */
  /* `af_blue_strings' array.                                   */
    
    
#define SAMP_MAX 2147483647
#define TWID_MAX 32767
#define TRIG_UPSCALE 1
    
    #define MULT16_16_Q11_32(a,b)     ((a)*(b))
#define MULT16_16_Q11(a,b)     ((a)*(b))
#define MULT16_16_Q13(a,b)     ((a)*(b))
#define MULT16_16_Q14(a,b)     ((a)*(b))
#define MULT16_16_Q15(a,b)     ((a)*(b))
#define MULT16_16_P15(a,b)     ((a)*(b))
#define MULT16_16_P13(a,b)     ((a)*(b))
#define MULT16_16_P14(a,b)     ((a)*(b))
#define MULT16_32_P16(a,b)     ((a)*(b))
    
    int opus_fft_alloc_arm_neon(kiss_fft_state *st);
void opus_fft_free_arm_neon(kiss_fft_state *st);
    
    /** 32x32 multiplication, followed by a 31-bit shift right. Results fits in 32 bits */
#if OPUS_FAST_INT64
#define MULT32_32_Q31(a,b) ((opus_val32)SHR((opus_int64)(a)*(opus_int64)(b),31))
#else
#define MULT32_32_Q31(a,b) ADD32(ADD32(SHL(MULT16_16(SHR((a),16),SHR((b),16)),1), SHR(MULT16_16SU(SHR((a),16),((b)&0x0000ffff)),15)), SHR(MULT16_16SU(SHR((b),16),((a)&0x0000ffff)),15))
#endif
    
    namespace CNTK
{
    class CompositeMinibatchSource final : public MinibatchSource
    {
        static const std::wstring PositionAttributeName;
        static const std::wstring DistributedAfterSampleCountAttributeName;
    }
    }
    
        NDMask::NDMask(const NDShape& shape, const DeviceDescriptor& device)
        : NDMask(shape, AllocateMatrix(shape, device))
    {
        if (shape.Rank() > 2)
            LogicError('NDMask instance shaped '%S' with more than 2 axes is currently unsupported.', shape.AsString().c_str());
    }
    
            if (!learnerParametersNotPartOfModel.empty())
            InvalidArgument('Trainer ctor: %d of the learner parameters '%S' are not part of the model specified', 
                            (int)learnerParametersNotPartOfModel.size(), NamedListString(learnerParametersNotPartOfModel).c_str());
    
    
    {        if (currReaderIter->second->IsLegacyReader())
        {
            return true;
        }
    }
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
        ConfigValuePtr NodeToConfigValuePtr(ComputationNodeBasePtr node)
    {
        assert(node);
        auto valuep = ConfigValuePtr(node, [](const std::wstring& msg) { LogicError('CloneFunction (NodeToConfigValuePtr): Unexpected failure: %ls', msg.c_str()); }, node->NodeName());
        return valuep;
    }
    
    // -----------------------------------------------------------------------
// DiagTimesNode (vector representing the diagonal of a square matrix, data)
// Deprecated because can be implemented with ElementTimes.
// -----------------------------------------------------------------------
    
        Rational Sin(Rational const& rat, ANGLE_TYPE angletype);
    Rational Cos(Rational const& rat, ANGLE_TYPE angletype);
    Rational Tan(Rational const& rat, ANGLE_TYPE angletype);
    Rational ASin(Rational const& rat, ANGLE_TYPE angletype);
    Rational ACos(Rational const& rat, ANGLE_TYPE angletype);
    Rational ATan(Rational const& rat, ANGLE_TYPE angletype);
    
    
    {    return StandardPeers::AutomationNotificationKind::Other;
}