
        
        void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
    #include 'swift/Basic/PrefixMap.h'
#include 'swift/Basic/QuotedString.h'
#include 'llvm/ADT/SmallString.h'
#include 'llvm/Support/Compiler.h'
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    bool Punycode::decodePunycodeUTF8(StringRef InputPunycode,
                                  std::string &OutUTF8) {
  std::vector<uint32_t> OutCodePoints;
  if (!decodePunycode(InputPunycode, OutCodePoints))
    return false;
    }
    
      bool shouldProvideRPathToLinker() const override;
    
      // Appends the TestPartResult object to the TestPartResultArray
  // received in the constructor.
  //
  // This method is from the TestPartResultReporterInterface
  // interface.
  virtual void ReportTestPartResult(const TestPartResult& result);
 private:
  void Init();
    
      T* value_;
  linked_ptr_internal link_;
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const CartesianProductHolder10& other);
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
    }
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    
    {  // Sets the 0-terminated C string this MyString object represents.
  void Set(const char* c_string);
};
    
        /**
     * Triangulates a polygon using simple ear-clipping algorithm. Returns
     * size of Triangle array unless the polygon can't be triangulated.
     * This should only happen if the polygon self-intersects,
     * though it will not _always_ return null for a bad polygon - it is the
     * caller's responsibility to check for self-intersection, and if it
     * doesn't, it should at least check that the return value is non-null
     * before using. You're warned!
	 *
	 * Triangles may be degenerate, especially if you have identical points
	 * in the input to the algorithm.  Check this before you use them.
     *
     * This is totally unoptimized, so for large polygons it should not be part
     * of the simulation loop.
     *
     * Returns:
     * -1 if algorithm fails (self-intersection most likely)
     * 0 if there are not enough vertices to triangulate anything.
     * Number of triangles if triangulation was successful.
     *
     * results will be filled with results - ear clipping always creates vNum - 2
     * or fewer (due to pinch point polygon snipping), so allocate an array of
	 * this size.
     */
	
int32 TriangulatePolygon(float32* xv, float32* yv, int32 vNum, b2Triangle* results) {
        if (vNum < 3)
            return 0;
    }
    
    		Block4x4Encoding(void);
		//virtual ~Block4x4Encoding(void) =0;
		virtual ~Block4x4Encoding(void) {}
		virtual void InitFromSource(Block4x4 *a_pblockParent,
									ColorFloatRGBA *a_pafrgbaSource,
    
    	// ----------------------------------------------------------------------------------------------------
	//
	Block4x4Encoding_ETC1::Block4x4Encoding_ETC1(void)
	{
		m_mode = MODE_ETC1;
		m_boolDiff = false;
		m_boolFlip = false;
		m_frgbaColor1 = ColorFloatRGBA();
		m_frgbaColor2 = ColorFloatRGBA();
		m_uiCW1 = 0;
		m_uiCW2 = 0;
		for (unsigned int uiPixel = 0; uiPixel < PIXELS; uiPixel++)
		{
			m_auiSelectors[uiPixel] = 0;
			m_afDecodedAlphas[uiPixel] = 1.0f;
		}
    }
    
    class ClipperOffset 
{
public:
  ClipperOffset(double miterLimit = 2.0, double roundPrecision = 0.25);
  ~ClipperOffset();
  void AddPath(const Path& path, JoinType joinType, EndType endType);
  void AddPaths(const Paths& paths, JoinType joinType, EndType endType);
  void Execute(Paths& solution, double delta);
  void Execute(PolyTree& solution, double delta);
  void Clear();
  double MiterLimit;
  double ArcTolerance;
private:
  Paths m_destPolys;
  Path m_srcPoly;
  Path m_destPoly;
  std::vector<DoublePoint> m_normals;
  double m_delta, m_sinA, m_sin, m_cos;
  double m_miterLim, m_StepsPerRad;
  IntPoint m_lowest;
  PolyNode m_polyNodes;
    }
    
    #else  /* not FIXED_POINT*/
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #endif /* OPUS_ARM_INLINE_MEDIA */
    
    #include './exec_pass.h'
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
    template<typename xpu>
void Dequantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                                const float threshold) {
  mxnet::op::mxnet_op::Kernel<dequantize_2bit, xpu>
  ::Launch(s,
          inputs[1].Size(),         // original size
          inputs[1].dptr<float>(),  // out array
          inputs[0].dptr<float>(),  // compressed array
          -1 *threshold,            // negative threshold
          threshold);               // positive threshold
}
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
    
    {
    {
    { private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
      unsigned lrn_n = param_.nsize;
      double alpha = param_.alpha;
      double beta = param_.beta;
      double lrn_k = param_.knorm;
      CHECK_EQ(data.shape_, out.shape_);
      CUDNN_CALL(cudnnCreateLRNDescriptor(&lrn_desc_));
      CUDNN_CALL(cudnnSetLRNDescriptor(lrn_desc_,
                                       lrn_n,
                                       alpha,
                                       beta,
                                       lrn_k));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&shape_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(shape_desc_,
                                            CUDNN_TENSOR_NCHW,
                                            dtype_,
                                            data.shape_[0],
                                            data.shape_[1],
                                            data.shape_[2],
                                            data.shape_[3]));
    }
  }
  bool init_cudnn_;
  LRNParam param_;
  cudnnDataType_t dtype_;
  cudnnLRNDescriptor_t lrn_desc_;
  cudnnTensorDescriptor_t shape_desc_;
};  // class CuDNNLocalResponseNormOp
}  // namespace op
}  // namespace mxnet
#endif  // MXNET_OPERATOR_CUDNN_LRN_INL_H_
