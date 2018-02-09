
        
        int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    #endif  // CAFFE_BASE_CONVOLUTION_LAYER_HPP_

    
    namespace caffe {
    }
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    #include 'caffe/layers/lrn_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
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
    
        cv::Ptr<cv::StereoBM> sm = cv::StereoBM::create(state->numberOfDisparities,
                                                       state->SADWindowSize);
    sm->setPreFilterType(state->preFilterType);
    sm->setPreFilterSize(state->preFilterSize);
    sm->setPreFilterCap(state->preFilterCap);
    sm->setBlockSize(state->SADWindowSize);
    sm->setNumDisparities(state->numberOfDisparities > 0 ? state->numberOfDisparities : 64);
    sm->setTextureThreshold(state->textureThreshold);
    sm->setUniquenessRatio(state->uniquenessRatio);
    sm->setSpeckleRange(state->speckleRange);
    sm->setSpeckleWindowSize(state->speckleWindowSize);
    sm->setDisp12MaxDiff(state->disp12MaxDiff);
    
    # if defined(CLZ64)
/**
 * OC_ILOGNZ_64 - Integer binary logarithm of a non-zero 64-bit value.
 * @_v: A non-zero 64-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_64() instead.
 */
#  define OC_ILOGNZ_64(_v) (CLZ64_OFFS-CLZ64(_v))
/**
 * OC_ILOG_64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_64(_v)   (OC_ILOGNZ_64(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_64(_v) (oc_ilog64(_v))
#  define OC_ILOG_64(_v)   (oc_ilog64(_v))
# endif
    
        60,30,500,    3,18.,  1024
  },
  /* 8: 2048 x 27 */
  {
    8,{0,1,2,2,3,3,4,4},{3,4,3,4,3},{0,1,1,2,2},{-1,0,1,2,3},
    {{4},{5,6},{7,8},{-1,9,10,11},{-1,12,13,14}},
    2,{0,2048,   186,46,744, 12,92,372,1500,  28,66,130, 260,520,1112,
       6,20,36,56,  78,110,158,222,  316,440,624,  928,1300,1700},
    
    static const vorbis_residue_template _res_44p51_n1[]={
  {2,0,30,  &_residue_44p_lo,
   &_huff_book__44pn1_short,&_huff_book__44pn1_short,
   &_resbook_44p_n1,&_resbook_44p_n1},
    }
    
    static const static_bookblock _resbook_44u_n1={
  {
    {0},
    {0,0,&_44un1__p1_0},
    {0,0,&_44un1__p2_0},
    {0,0,&_44un1__p3_0},
    {0,0,&_44un1__p4_0},
    {0,0,&_44un1__p5_0},
    {&_44un1__p6_0,&_44un1__p6_1},
    {&_44un1__p7_0,&_44un1__p7_1,&_44un1__p7_2}
   }
};
static const static_bookblock _resbook_44u_0={
  {
    {0},
    {0,0,&_44u0__p1_0},
    {0,0,&_44u0__p2_0},
    {0,0,&_44u0__p3_0},
    {0,0,&_44u0__p4_0},
    {0,0,&_44u0__p5_0},
    {&_44u0__p6_0,&_44u0__p6_1},
    {&_44u0__p7_0,&_44u0__p7_1,&_44u0__p7_2}
   }
};
static const static_bookblock _resbook_44u_1={
  {
    {0},
    {0,0,&_44u1__p1_0},
    {0,0,&_44u1__p2_0},
    {0,0,&_44u1__p3_0},
    {0,0,&_44u1__p4_0},
    {0,0,&_44u1__p5_0},
    {&_44u1__p6_0,&_44u1__p6_1},
    {&_44u1__p7_0,&_44u1__p7_1,&_44u1__p7_2}
   }
};
static const static_bookblock _resbook_44u_2={
  {
    {0},
    {0,0,&_44u2__p1_0},
    {0,0,&_44u2__p2_0},
    {0,0,&_44u2__p3_0},
    {0,0,&_44u2__p4_0},
    {0,0,&_44u2__p5_0},
    {&_44u2__p6_0,&_44u2__p6_1},
    {&_44u2__p7_0,&_44u2__p7_1,&_44u2__p7_2}
   }
};
static const static_bookblock _resbook_44u_3={
  {
    {0},
    {0,0,&_44u3__p1_0},
    {0,0,&_44u3__p2_0},
    {0,0,&_44u3__p3_0},
    {0,0,&_44u3__p4_0},
    {0,0,&_44u3__p5_0},
    {&_44u3__p6_0,&_44u3__p6_1},
    {&_44u3__p7_0,&_44u3__p7_1,&_44u3__p7_2}
   }
};
static const static_bookblock _resbook_44u_4={
  {
    {0},
    {0,0,&_44u4__p1_0},
    {0,0,&_44u4__p2_0},
    {0,0,&_44u4__p3_0},
    {0,0,&_44u4__p4_0},
    {0,0,&_44u4__p5_0},
    {&_44u4__p6_0,&_44u4__p6_1},
    {&_44u4__p7_0,&_44u4__p7_1,&_44u4__p7_2}
   }
};
static const static_bookblock _resbook_44u_5={
  {
    {0},
    {0,0,&_44u5__p1_0},
    {0,0,&_44u5__p2_0},
    {0,0,&_44u5__p3_0},
    {0,0,&_44u5__p4_0},
    {0,0,&_44u5__p5_0},
    {0,0,&_44u5__p6_0},
    {&_44u5__p7_0,&_44u5__p7_1},
    {&_44u5__p8_0,&_44u5__p8_1},
    {&_44u5__p9_0,&_44u5__p9_1,&_44u5__p9_2}
   }
};
static const static_bookblock _resbook_44u_6={
  {
    {0},
    {0,0,&_44u6__p1_0},
    {0,0,&_44u6__p2_0},
    {0,0,&_44u6__p3_0},
    {0,0,&_44u6__p4_0},
    {0,0,&_44u6__p5_0},
    {0,0,&_44u6__p6_0},
    {&_44u6__p7_0,&_44u6__p7_1},
    {&_44u6__p8_0,&_44u6__p8_1},
    {&_44u6__p9_0,&_44u6__p9_1,&_44u6__p9_2}
   }
};
static const static_bookblock _resbook_44u_7={
  {
    {0},
    {0,0,&_44u7__p1_0},
    {0,0,&_44u7__p2_0},
    {0,0,&_44u7__p3_0},
    {0,0,&_44u7__p4_0},
    {0,0,&_44u7__p5_0},
    {0,0,&_44u7__p6_0},
    {&_44u7__p7_0,&_44u7__p7_1},
    {&_44u7__p8_0,&_44u7__p8_1},
    {&_44u7__p9_0,&_44u7__p9_1,&_44u7__p9_2}
   }
};
static const static_bookblock _resbook_44u_8={
  {
    {0},
    {0,0,&_44u8_p1_0},
    {0,0,&_44u8_p2_0},
    {0,0,&_44u8_p3_0},
    {0,0,&_44u8_p4_0},
    {&_44u8_p5_0,&_44u8_p5_1},
    {&_44u8_p6_0,&_44u8_p6_1},
    {&_44u8_p7_0,&_44u8_p7_1},
    {&_44u8_p8_0,&_44u8_p8_1},
    {&_44u8_p9_0,&_44u8_p9_1,&_44u8_p9_2}
   }
};
static const static_bookblock _resbook_44u_9={
  {
    {0},
    {0,0,&_44u9_p1_0},
    {0,0,&_44u9_p2_0},
    {0,0,&_44u9_p3_0},
    {0,0,&_44u9_p4_0},
    {&_44u9_p5_0,&_44u9_p5_1},
    {&_44u9_p6_0,&_44u9_p6_1},
    {&_44u9_p7_0,&_44u9_p7_1},
    {&_44u9_p8_0,&_44u9_p8_1},
    {&_44u9_p9_0,&_44u9_p9_1,&_44u9_p9_2}
   }
};
    
    # undef c2l
# define c2l(c,l)        (l =((unsigned long)(*((c)++)))    , \
                         l|=((unsigned long)(*((c)++)))<< 8L, \
                         l|=((unsigned long)(*((c)++)))<<16L, \
                         l|=((unsigned long)(*((c)++)))<<24L)
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(s1);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e2);
			des_encrypt3(&data[0],key1,key2,key3);
			}
    }
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      