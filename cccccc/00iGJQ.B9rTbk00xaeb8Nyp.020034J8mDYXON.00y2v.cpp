
        
            enum COLOR_SPACE
    {
        COLOR_SPACE_BT601,
        COLOR_SPACE_BT709
    };
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
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
    
            size_t x = 0;
        for (; x <= colsn - 4; x += 4)
        {
            internal::prefetch(ln0 + x);
            internal::prefetch(ln1 + x);
            internal::prefetch(ln2 + x);
box3x3f32_vert_ll:
            float32x4_t v0 = vld1q_f32(ln0+x);
            float32x4_t v1 = vld1q_f32(ln1+x);
            float32x4_t v2 = vld1q_f32(ln2+x);
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #ifdef CAROTENE_NEON
    
                uint32x4_t lane0 = vld1q_u32(lane + x - 2);
            uint32x4_t lane4 = vld1q_u32(lane + x + 2);
            uint32x4_t lane1 = vld1q_u32(lane + x - 1);
            uint32x4_t lane3 = vld1q_u32(lane + x + 1);
            uint32x4_t lane2 = vld1q_u32(lane + x + 0);
    
            int16x8_t tnext, tc, t0;
        int16x8_t tnext2, tnext3;
        int16x8_t tnext1Old, tnext2Old, tnext3Old;
        int16x8_t tnext4OldOldOld, tnext5OldOldOld;
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    REGISTER_CUDA_OPERATOR(LC2D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC2DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidFirstLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(nullptr) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = nullptr;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = nullptr;
  }
  // Operator= steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = nullptr;
    this->key_ = src.key_;
  }
    }
    
        ProgressWriter::~ProgressWriter()
    {
    }
    
    
    {        // Creating Composite Data Reader that allow to combine deserializers.
        // This should be changed to link statically when SGD uses the new interfaces.
        wstring ioName = L'ioName';
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    else
    {
        wstring readerType = config(L'readerType', L'Cntk.Deserializers.TextFormat');
        wstring ioName = L'ioName';
        // backward support to use only one type of data reader
        // get the name for the reader we want to use, default to CNTKTextFormatReader
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// instead of using std::shuffle which uses unitform_distribution internally.
// TODO: Switching to Boost would eliminate this problem.
template <typename TVector>
inline void RandomShuffleMT(TVector& v, size_t begin, size_t end, std::mt19937_64& rng)
{
    for(size_t i = begin; i < end; ++i)
    {
        const size_t randomLocation = RandMT(i, end, rng);
        std::swap(v[i], v[randomLocation]);
    }
}
    
        virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }