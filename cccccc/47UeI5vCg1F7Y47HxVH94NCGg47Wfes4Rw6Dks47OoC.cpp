#include 'swift/AST/SyntaxASTMap.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Stmt.h'
#include 'swift/Syntax/Syntax.h'
    
      virtual void enter(const MarkupASTNode *Node) {}
  virtual void exit(const MarkupASTNode *Node) {}
    
    /// Format a Syntax tree with the given rules.
Syntax format(Syntax Tree);
// TODO: Representation for formatting rules, etc. This is just a figment
// for now.
    
        if( !*state )
        return;
    
        static void CODEGEN_FUNCPTR Switch_Enable(GLenum cap)
    {
        Enable = (PFNENABLEPROC)IntGetProcAddress('glEnable');
        Enable(cap);
    }
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    void Timer::RequestExit() {
  Dump();
}
    
    int64_t gettime_diff_us(const timespec& start, const timespec& end) {
  int64_t dsec = end.tv_sec - start.tv_sec;
  int64_t dnsec = end.tv_nsec - start.tv_nsec;
  return dsec * 1000000 + dnsec / 1000;
}
    
    #ifndef incl_HPHP_TIMER_H_
#define incl_HPHP_TIMER_H_
    
    // Grab the ip address and port of the client that is connected to this proxy.
bool DebuggerProxy::getClientConnectionInfo(VRefParam address,
                                            VRefParam port) {
  Resource s(m_thrift.getSocket().get());
  return HHVM_FN(socket_getpeername)(s, address, port);
}
    
    /*
 * Objects that need to do special clean up at the end of the request
 * may register themselves for this by deriving from Sweepable.  After
 * every request, MemoryManager::sweep() called each Sweepable::sweep()
 * method, allowing objects to clean up resources that are not othewise
 * owned by the current request, for example malloc'd-memory or file handles.
 */
struct Sweepable {
  Sweepable(const Sweepable&) = delete;
  Sweepable& operator=(const Sweepable&) = delete;
    }
    
    /*
 * Make block weights more consistent by enforcing that the weight of each block
 * doesn't exceed the sums of the weights of its predecessors or its successors.
 */
void fixBlockWeights(Vunit& unit);
    
    void numa_bind_to(void* start, size_t size, int node) {
  if (!use_numa) return;
  numa_tonode_memory(start, size, node);
}
    
    void ThriftBuffer::skip(int8_t type) {
  switch (type) {
    case T_STOP:
    case T_VOID:
      return;
    case T_STRUCT:
      while (true) {
        int8_t ttype; read(ttype); // get field type
        if (ttype == T_STOP) break;
        read(nullptr, 2); // skip field number, I16
        skip(ttype); // skip field payload
      }
      return;
    case T_BOOL:
    case T_BYTE:
      read(nullptr, 1);
      return;
    case T_I16:
      read(nullptr, 2);
      return;
    case T_I32:
      read(nullptr, 4);
      return;
    case T_U64:
    case T_I64:
    case T_DOUBLE:
      read(nullptr, 8);
      return;
    //case T_UTF7: // aliases T_STRING
    case T_UTF8:
    case T_UTF16:
    case T_STRING: {
      int32_t len; read(len);
      read(nullptr, len);
      } return;
    case T_MAP: {
      int8_t keytype; read(keytype);
      int8_t valtype; read(valtype);
      int32_t size; read(size);
      for (int32_t i = 0; i < size; ++i) {
        skip(keytype);
        skip(valtype);
      }
    } return;
    case T_LIST:
    case T_SET: {
      int8_t valtype; read(valtype);
      int32_t size; read(size);
      for (int32_t i = 0; i < size; ++i) {
        skip(valtype);
      }
    } return;
  };
    }
    
      Array members = Array::Create();
  for (int count=0; gr.gr_mem[count] != NULL; count++) {
    members.append(String(gr.gr_mem[count], CopyString));
  }
    
    #include 'hphp/runtime/vm/hhbc.h'
    
    int getifaddrs(struct ifaddrs** result) {
	int fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
	if (fd < 0) {
		return -1;
	}
	netlinkrequest ifaddr_request;
	memset(&ifaddr_request, 0, sizeof(ifaddr_request));
	ifaddr_request.header.nlmsg_flags = NLM_F_ROOT | NLM_F_REQUEST;
	ifaddr_request.header.nlmsg_type = RTM_GETADDR;
	ifaddr_request.header.nlmsg_len = NLMSG_LENGTH(sizeof(ifaddrmsg));
	ssize_t count = send(fd, &ifaddr_request, ifaddr_request.header.nlmsg_len, 0);
	if (static_cast<size_t>(count) != ifaddr_request.header.nlmsg_len) {
		close(fd);
		return -1;
	}
	struct ifaddrs* start = NULL;
	struct ifaddrs* current = NULL;
	char buf[kMaxReadSize];
	ssize_t amount_read = recv(fd, &buf, kMaxReadSize, 0);
	while (amount_read > 0) {
		nlmsghdr* header = reinterpret_cast<nlmsghdr*>(&buf[0]);
		size_t header_size = static_cast<size_t>(amount_read);
		for ( ; NLMSG_OK(header, header_size);
		      header = NLMSG_NEXT(header, header_size)) {
			switch (header->nlmsg_type) {
			case NLMSG_DONE:
				// Success. Return.
				*result = start;
				close(fd);
				return 0;
			case NLMSG_ERROR:
				close(fd);
				freeifaddrs(start);
				return -1;
			case RTM_NEWADDR: {
				ifaddrmsg* address_msg =
						reinterpret_cast<ifaddrmsg*>(NLMSG_DATA(header));
				rtattr* rta = IFA_RTA(address_msg);
				ssize_t payload_len = IFA_PAYLOAD(header);
				while (RTA_OK(rta, payload_len)) {
					if (rta->rta_type == IFA_ADDRESS) {
						int family = address_msg->ifa_family;
						if (family == AF_INET || family == AF_INET6) {
							ifaddrs* newest = new ifaddrs;
							memset(newest, 0, sizeof(ifaddrs));
							if (current) {
								current->ifa_next = newest;
							} else {
								start = newest;
							}
							if (populate_ifaddrs(newest, address_msg, RTA_DATA(rta),
									     RTA_PAYLOAD(rta)) != 0) {
								freeifaddrs(start);
								*result = NULL;
								return -1;
							}
							current = newest;
						}
					}
					rta = RTA_NEXT(rta, payload_len);
				}
				break;
			}
			}
		}
		amount_read = recv(fd, &buf, kMaxReadSize, 0);
	}
	close(fd);
	freeifaddrs(start);
	return -1;
}
    
    
#include <ft2build.h>
    
    
int             oc_has_mode_metrics;
oc_mode_metrics OC_MODE_METRICS[64][3][2][OC_SAD_BINS];
# endif
    
    #undef MULT16_32_Q15
static inline int MULT16_32_Q15(int a, int b)
{
    int c;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (c): 'i' (15));
    return c;
}
    
    #undef    silk_LSHIFT8
static OPUS_INLINE opus_int8 silk_LSHIFT8(opus_int8 a, opus_int32 shift){
    opus_int8 ret;
    ops_count += 1;
    ret = a << shift;
    return ret;
}
#undef    silk_LSHIFT16
static OPUS_INLINE opus_int16 silk_LSHIFT16(opus_int16 a, opus_int32 shift){
    opus_int16 ret;
    ops_count += 1;
    ret = a << shift;
    return ret;
}
#undef    silk_LSHIFT32
static OPUS_INLINE opus_int32 silk_LSHIFT32(opus_int32 a, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a << shift;
    return ret;
}
#undef    silk_LSHIFT64
static OPUS_INLINE opus_int64 silk_LSHIFT64(opus_int64 a, opus_int shift){
    ops_count += 1;
    return a << shift;
}
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
      void DeleteFileInternal(const std::string& fname) {
    if (file_map_.find(fname) == file_map_.end()) {
      return;
    }
    }
    
      inline int Compare(const Slice& a, const Slice& b) const {
    return comparator_->Compare(a, b);
  }
    
      void StartBlock(uint64_t block_offset);
  void AddKey(const Slice& key);
  Slice Finish();
    
    Iterator::~Iterator() {
  if (cleanup_.function != NULL) {
    (*cleanup_.function)(cleanup_.arg1, cleanup_.arg2);
    for (Cleanup* c = cleanup_.next; c != NULL; ) {
      (*c->function)(c->arg1, c->arg2);
      Cleanup* next = c->next;
      delete c;
      c = next;
    }
  }
}
    
    
    
        glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
    
    		b2Body* body2 = m_world->CreateBody(&bd);
		m_piece2 = body2->CreateFixture(&m_shape2, 1.0f);