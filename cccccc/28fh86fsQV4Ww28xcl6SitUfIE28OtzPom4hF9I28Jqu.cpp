
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
      // Logs information about the dev nodes present on this machine: their
  // existence, permissions, accessibility from this uid/gid.
  static void LogDevNodeDiagnosticInformation();
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    template <typename T>
__global__ void DynamicStitchKernel(const int32 slice_size,
                                    const int32 output_size,
                                    CudaDeviceArrayStruct<int32> input_indices,
                                    CudaDeviceArrayStruct<const T*> input_ptrs,
                                    T* output) {
  int32* data_indices = GetCudaDeviceArrayOnDevice(&input_indices);
  const T** data_ptrs = GetCudaDeviceArrayOnDevice(&input_ptrs);
  CUDA_1D_KERNEL_LOOP(output_index, output_size) {
    const int32 slice_id = output_index / slice_size;
    const int32 slice_offset = output_index % slice_size;
    const int32 input_index = data_indices[slice_id];
    if (input_index != -1) {
      output[output_index] = ldg(data_ptrs[input_index] + slice_offset);
    }
  }
}
    
    
    {
    {
    {        const Tensor& y = outputs[0];
        const Tensor& y_norm = outputs[1];
        // Print out lambda, x, and y.
        std::printf('%06d/%06d %s\n', session_index, step,
                    DebugString(x, y).c_str());
        // Copies y_normalized to x.
        x = y_norm;
      }
    });
  }
    
        FILE *m_pFile;
    bool m_eof_flag, m_error_flag;
    
    
    
    /*Modern gcc (4.x) can compile the naive versions of min and max with cmov if
   given an appropriate architecture, but the branchless bit-twiddling versions
   are just as fast, and do not require any special target architecture.
  Earlier gcc versions (3.x) compiled both code to the same assembly
   instructions, because of the way they represented ((_b)>(_a)) internally.*/
#define OC_MAXI(_a,_b)      ((_a)-((_a)-(_b)&-((_b)>(_a))))
#define OC_MINI(_a,_b)      ((_a)+((_b)-(_a)&-((_b)<(_a))))
/*Clamps an integer into the given range.
  If _a>_c, then the lower bound _a is respected over the upper bound _c (this
   behavior is required to meet our documented API behavior).
  _a: The lower bound.
  _b: The value to clamp.
  _c: The upper boud.*/
#define OC_CLAMPI(_a,_b,_c) (OC_MAXI(_a,OC_MINI(_b,_c)))
#define OC_CLAMP255(_x)     ((unsigned char)((((_x)<0)-1)&((_x)|-((_x)>255))))
/*This has a chance of compiling branchless, and is just as fast as the
   bit-twiddling method, which is slightly less portable, since it relies on a
   sign-extended rightshift, which is not guaranteed by ANSI (but present on
   every relevant platform).*/
#define OC_SIGNI(_a)        (((_a)>0)-((_a)<0))
/*Slightly more portable than relying on a sign-extended right-shift (which is
   not guaranteed by ANSI), and just as fast, since gcc (3.x and 4.x both)
   compile it into the right-shift anyway.*/
#define OC_SIGNMASK(_a)     (-((_a)<0))
/*Divides an integer by a power of two, truncating towards 0.
  _dividend: The integer to divide.
  _shift:    The non-negative power of two to divide by.
  _rmask:    (1<<_shift)-1*/
#define OC_DIV_POW2(_dividend,_shift,_rmask)\
  ((_dividend)+(OC_SIGNMASK(_dividend)&(_rmask))>>(_shift))
/*Divides _x by 65536, truncating towards 0.*/
#define OC_DIV2_16(_x) OC_DIV_POW2(_x,16,0xFFFF)
/*Divides _x by 2, truncating towards 0.*/
#define OC_DIV2(_x) OC_DIV_POW2(_x,1,0x1)
/*Divides _x by 8, truncating towards 0.*/
#define OC_DIV8(_x) OC_DIV_POW2(_x,3,0x7)
/*Divides _x by 16, truncating towards 0.*/
#define OC_DIV16(_x) OC_DIV_POW2(_x,4,0xF)
/*Right shifts _dividend by _shift, adding _rval, and subtracting one for
   negative dividends first.
  When _rval is (1<<_shift-1), this is equivalent to division with rounding
   ties away from zero.*/
#define OC_DIV_ROUND_POW2(_dividend,_shift,_rval)\
  ((_dividend)+OC_SIGNMASK(_dividend)+(_rval)>>(_shift))
/*Divides a _x by 2, rounding towards even numbers.*/
#define OC_DIV2_RE(_x) ((_x)+((_x)>>1&1)>>1)
/*Divides a _x by (1<<(_shift)), rounding towards even numbers.*/
#define OC_DIV_POW2_RE(_x,_shift) \
  ((_x)+((_x)>>(_shift)&1)+((1<<(_shift))-1>>1)>>(_shift))
/*Swaps two integers _a and _b if _a>_b.*/
#define OC_SORT2I(_a,_b) \
  do{ \
    int t__; \
    t__=((_a)^(_b))&-((_b)<(_a)); \
    (_a)^=t__; \
    (_b)^=t__; \
  } \
  while(0)
    
        60,30,500,    3,18.,  1024
  },
  /* 8: 2048 x 27 */
  {
    8,{0,1,2,2,3,3,4,4},{3,4,3,4,3},{0,1,1,2,2},{-1,0,1,2,3},
    {{4},{5,6},{7,8},{-1,9,10,11},{-1,12,13,14}},
    2,{0,2048,   186,46,744, 12,92,372,1500,  28,66,130, 260,520,1112,
       6,20,36,56,  78,110,158,222,  316,440,624,  928,1300,1700},
    
    static const static_bookblock _resbook_8s_0={
  {
    {0},
    {0,0,&_8c0_s_p1_0},
    {0},
    {0,0,&_8c0_s_p3_0},
    {0,0,&_8c0_s_p4_0},
    {0,0,&_8c0_s_p5_0},
    {0,0,&_8c0_s_p6_0},
    {&_8c0_s_p7_0,&_8c0_s_p7_1},
    {&_8c0_s_p8_0,&_8c0_s_p8_1},
    {&_8c0_s_p9_0,&_8c0_s_p9_1,&_8c0_s_p9_2}
   }
};
static const static_bookblock _resbook_8s_1={
  {
    {0},
    {0,0,&_8c1_s_p1_0},
    {0},
    {0,0,&_8c1_s_p3_0},
    {0,0,&_8c1_s_p4_0},
    {0,0,&_8c1_s_p5_0},
    {0,0,&_8c1_s_p6_0},
    {&_8c1_s_p7_0,&_8c1_s_p7_1},
    {&_8c1_s_p8_0,&_8c1_s_p8_1},
    {&_8c1_s_p9_0,&_8c1_s_p9_1,&_8c1_s_p9_2}
   }
};
    
    extern JSClass  *jsb_cocos2d_NavMesh_class;
extern JSObject *jsb_cocos2d_NavMesh_prototype;
    
    
    
    
    
    			float32 x = 20.0f, y1 = 0.0f, dx = 5.0f;
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
    
    {} // namespace detail
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
    void setAssertHandler(AssertHandler assertHandler) {
    gAssertHandler = assertHandler;
}
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
      std::string asFormattedString() const {
    std::stringstream str;
    str << 'Function ' << m_functionName << ' in file ' << m_fileName << ':' << m_lineNumber;
    return str.str();
  }
    
    namespace facebook {
    }
    
    
    {
    {}}
