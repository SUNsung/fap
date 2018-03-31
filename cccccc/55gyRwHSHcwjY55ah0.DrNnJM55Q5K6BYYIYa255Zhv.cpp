
        
        struct XHProfExtension : Extension {
  XHProfExtension(): Extension('xhprof', '0.9.4') {}
    }
    
    int gettime(clockid_t, struct timespec*);
int64_t gettime_ns(clockid_t);
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {}
    
      if (file_reset(ms) == -1)
    goto done;
    
    
    {  ~DataBlockFull() noexcept override {}
};
    
    bool compareClustersDensity(const Cluster& c1, const Cluster& c2) {
  return (double) c1.samples / c1.size > (double) c2.samples / c2.size;
}
    
    void freeifaddrs(struct ifaddrs* addrs) {
	struct ifaddrs* last = NULL;
	struct ifaddrs* cursor = addrs;
	while (cursor) {
		delete[] cursor->ifa_name;
		delete cursor->ifa_addr;
		delete cursor->ifa_netmask;
		last = cursor;
		cursor = cursor->ifa_next;
		delete last;
	}
}

    
    static const vorbis_mapping_template _mapres_template_16_stereo[3]={
  { _map_nominal, _res_16s_0 }, /* 0 */
  { _map_nominal, _res_16s_1 }, /* 1 */
  { _map_nominal, _res_16s_2 }, /* 2 */
};
    
    
    {  {2,0,32,  &_residue_44_low,
   &_huff_book__44c1_s_long,&_huff_book__44c1_sm_long,
   &_resbook_44s_1,&_resbook_44sm_1}
};
    
    #define toBARK(n)   (13.1f*atan(.00074f*(n))+2.24f*atan((n)*(n)*1.85e-8f)+1e-4f*(n))
#define fromBARK(z) (102.f*(z)-2.f*pow(z,2.f)+.4f*pow(z,3.f)+pow(1.46f,z)-1.f)
#define toMEL(n)    (log(1.f+(n)*.001f)*1442.695f)
#define fromMEL(m)  (1000.f*exp((m)/1442.695f)-1000.f)
    
    # if defined(OPUS_X86_MAY_HAVE_SSE)
#  define MAY_HAVE_SSE(name) name ## _sse
# else
#  define MAY_HAVE_SSE(name) name ## _c
# endif
    
    #undef silk_DIV32
static OPUS_INLINE opus_int32 silk_DIV32(opus_int32 a32, opus_int32 b32){
    ops_count += 64;
    return a32 / b32;
}
    
      bool thrown = false;
  try {
    thpp::IntTensor &a = dynamic_cast<thpp::IntTensor&>(*tensor);
  } catch(std::bad_cast &e) {
    thrown = true;
  }
  assert(thrown);
    
    template<> AT_API Half convert(float f) {
  Half t;
  TH_float2halfbits(&f,&t.x);
  return t;
}
template<> AT_API float convert(Half f) {
  float t;
  TH_halfbits2float(&f.x,&t);
  return t;
}
    
    using key_type = std::tuple<
  CollectiveType, // operation
  THDGroup,       // group
  DeviceType,     // tensors device type
  int,            // CUDA stream id used in the algorithm
  std::size_t,    // input buffer bytes
  std::size_t,    // output buffer bytes
  THDReduceOp,    // reduce op
  rank_type       // src/dest rank
>;
    
    #include 'python_numbers.h'
#include 'torch/csrc/Exceptions.h'
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    struct THPDtype {
  PyObject_HEAD
  at::Type *cdata;
  char name[DTYPE_NAME_LEN + 1];
  bool is_cuda;
  bool is_sparse;
};
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHDoubleTensor(THDoubleTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Double).unsafeTensorFromTH((void*)tensor, true);
}
    
        virtual Status Read(size_t n, Slice* result, char* scratch) {
      ASSERT_TRUE(!returned_partial_) << 'must not Read() after eof/error';
    }
    
    // Tag numbers for serialized VersionEdit.  These numbers are written to
// disk and should not be changed.
enum Tag {
  kComparator           = 1,
  kLogNumber            = 2,
  kNextFileNumber       = 3,
  kLastSequence         = 4,
  kCompactPointer       = 5,
  kDeletedFile          = 6,
  kNewFile              = 7,
  // 8 was used for large value refs
  kPrevLogNumber        = 9
};
    
    #include 'db/version_edit.h'
#include 'util/testharness.h'
    
    std::string Key2(int i) {
  return Key1(i) + '_xxx';
}
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
    
    {  // Note that any live BlockBuilders point to rep_->options and therefore
  // will automatically pick up the updated options.
  rep_->options = options;
  rep_->index_block_options = options;
  rep_->index_block_options.block_restart_interval = 1;
  return Status::OK();
}