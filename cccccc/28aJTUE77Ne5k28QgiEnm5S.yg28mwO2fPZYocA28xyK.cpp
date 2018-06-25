
        
        static HRESULT InitDevice()
{
    HRESULT hr = S_OK;
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    constexpr ptrdiff_t STORAGE_SIZE = 10;
constexpr size_t VEC_SIZE = 3;
    
    #define THDPDoubleStorage_CData(obj)  (obj)->cdata
#define THDPFloatStorage_CData(obj)   (obj)->cdata
#define THDPLongStorage_CData(obj)    (obj)->cdata
#define THDPIntStorage_CData(obj)     (obj)->cdata
#define THDPShortStorage_CData(obj)   (obj)->cdata
#define THDPCharStorage_CData(obj)    (obj)->cdata
#define THDPByteStorage_CData(obj)    (obj)->cdata
    
    #define THPStorage TH_CONCAT_3(THP,Real,Storage)
#define THPStorageStr TH_CONCAT_STRING_3(torch.,Real,Storage)
#define THPStorageClass TH_CONCAT_3(THP,Real,StorageClass)
#define THPStorage_(NAME) TH_CONCAT_4(THP,Real,Storage_,NAME)
    
      std::unique_ptr<ManagerServerSocket> srv_socket;
  try {
    char tmpfile[L_tmpnam];
    if (std::tmpnam(tmpfile) == NULL)
      throw std::runtime_error('could not generate a random filename for manager socket');
    // TODO: better strategy for generating tmp names
    // TODO: retry on collisions - this can easily fail
    srv_socket.reset(new ManagerServerSocket(std::string(tmpfile)));
    register_fd(srv_socket->socket_fd);
    print_init_message(tmpfile);
    DEBUG('opened socket %s', tmpfile);
  } catch(...) {
    print_init_message('ERROR');
    throw;
  }
    
    static inline uint64_t decodeUInt64LE(const uint8_t *data) {
  return (((uint64_t)data[0])<< 0) | (((uint64_t)data[1])<< 8) |
         (((uint64_t)data[2])<<16) | (((uint64_t)data[3])<<24) |
         (((uint64_t)data[4])<<32) | (((uint64_t)data[5])<<40) |
         (((uint64_t)data[6])<<48) | (((uint64_t)data[7])<<56);
}
    
    #endif

    
    std::string sockaddrToString(struct sockaddr *addr) {
  char address[INET6_ADDRSTRLEN + 1];
  if (addr->sa_family == AF_INET) {
    struct sockaddr_in *s = reinterpret_cast<struct sockaddr_in*>(addr);
    SYSCHECK(::inet_ntop(AF_INET, &(s->sin_addr), address, INET_ADDRSTRLEN))
    address[INET_ADDRSTRLEN] = '\0';
  } else if (addr->sa_family == AF_INET6) {
    struct sockaddr_in6 *s = reinterpret_cast<struct sockaddr_in6*>(addr);
    SYSCHECK(::inet_ntop(AF_INET6, &(s->sin6_addr), address, INET6_ADDRSTRLEN))
    address[INET6_ADDRSTRLEN] = '\0';
  } else {
    throw std::runtime_error('unsupported protocol');
  }
  return address;
}
    
    
    {	virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
};
    
      Copyright 2003 by
  Francesco Zappa Nardelli
    
      public:
    jpeg_decoder_mem_stream() : m_pSrc_data(NULL), m_ofs(0), m_size(0) { }
    jpeg_decoder_mem_stream(const uint8 *pSrc_data, uint size) : m_pSrc_data(pSrc_data), m_ofs(0), m_size(size) { }
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('error@0.1');
  ASSERT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
}
    
      XGBOOST_DEVICE GradientPairInternal<T> &operator-=(
      const GradientPairInternal<T> &rhs) {
    grad_ -= rhs.grad_;
    hess_ -= rhs.hess_;
    return *this;
  }
    
    DMLC_REGISTER_PARAMETER(MyLogisticParam);
    
    namespace guetzli {
    }
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    #include 'guetzli/jpeg_data.h'
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
    // Functions for reading a jpeg byte stream into a JPEGData object.