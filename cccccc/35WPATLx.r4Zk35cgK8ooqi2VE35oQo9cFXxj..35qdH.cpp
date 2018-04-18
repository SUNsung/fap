
        
        
    {}  // namespace tensorflow
    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
    std::ostream& operator<<(std::ostream& out,
                         const VersionedComputationHandle& versioned_handle) {
  out << versioned_handle.ToString();
  return out;
}
    
    void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
    void ComputeExtrinsicRefine(const Mat& imagePoints, const Mat& objectPoints, Mat& rvec,
                            Mat&  tvec, Mat& J, const int MaxIter,
                            const IntrinsicParams& param, const double thresh_cond);
CV_EXPORTS Mat ComputeHomography(Mat m, Mat M);
    
                template<typename T>
            static __device__ __forceinline__ T atomicAdd(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + val);
                    *address = count;
                } while (*address != count);
    }
    
    
    {
    {
    {} } } // namespace cv::ocl::runtime
    
    extern JSClass  *jsb_cocos2d_Physics3DConeTwistConstraint_class;
extern JSObject *jsb_cocos2d_Physics3DConeTwistConstraint_prototype;
    
    
    
    
    
    
    {
    {				// We are done, terminate the query.
				return false;
			}
		}
    
    
    {	static Test* Create()
	{
		return new AddPair;
	}
};
    
    // Reads the Define Quantization Table (DQT) marker segment and fills in *jpg
// with the parsed data.
bool ProcessDQT(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  if (marker_len == 2) {
    fprintf(stderr, 'DQT marker: no quantization table found\n');
    jpg->error = JPEG_EMPTY_DQT;
    return false;
  }
  while (*pos < start_pos + marker_len && jpg->quant.size() < kMaxQuantTables) {
    VERIFY_LEN(1);
    int quant_table_index = ReadUint8(data, pos);
    int quant_table_precision = quant_table_index >> 4;
    quant_table_index &= 0xf;
    VERIFY_INPUT(quant_table_index, 0, 3, QUANT_TBL_INDEX);
    VERIFY_LEN((quant_table_precision ? 2 : 1) * kDCTBlockSize);
    JPEGQuantTable table;
    table.index = quant_table_index;
    table.precision = quant_table_precision;
    for (int i = 0; i < kDCTBlockSize; ++i) {
      int quant_val = quant_table_precision ?
          ReadUint16(data, pos) :
          ReadUint8(data, pos);
      VERIFY_INPUT(quant_val, 1, 65535, QUANT_VAL);
      table.values[kJPEGNaturalOrder[i]] = quant_val;
    }
    table.is_last = (*pos == start_pos + marker_len);
    jpg->quant.push_back(table);
  }
  VERIFY_MARKER_END();
  return true;
}
    
    // This function will create a Huffman tree.
//
// The catch here is that the tree cannot be arbitrarily deep.
// Brotli specifies a maximum depth of 15 bits for 'code trees'
// and 7 bits for 'code length code trees.'
//
// count_limit is the value that is to be faked as the minimum value
// and this minimum value is raised until the tree matches the
// maximum length requirement.
//
// This algorithm is not of excellent performance for very long data blocks,
// especially when population counts are longer than 2**tree_limit, but
// we are not planning to use this with extremely long blocks.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth) {
  // For block sizes below 64 kB, we never need to do a second iteration
  // of this loop. Probably all of our block sizes will be smaller than
  // that, so this loop is mostly of academic interest. If we actually
  // would need this, we would be better off with the Katajainen algorithm.
  for (uint32_t count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    for (size_t i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = std::max<uint32_t>(data[i], count_limit);
        tree[n++] = HuffmanTree(count, -1, static_cast<int16_t>(i));
      }
    }
    }
    }
    
    // Integer implementation of the Inverse Discrete Cosine Transform (IDCT).
    
    #include 'guetzli/output_image.h'
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
      // Fills in out[] array with the floating-point precision pixel view of the
  // component.
  // REQUIRES: factor_x() == 1 and factor_y() == 1.
  void ToFloatPixels(float* out, int stride) const;