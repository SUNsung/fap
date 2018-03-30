
        
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
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    # if defined(OC_COLLECT_METRICS)
typedef struct oc_mode_metrics oc_mode_metrics;
# endif
typedef struct oc_mode_rd      oc_mode_rd;
    
    /** 32x32 multiplication, followed by a 31-bit shift right. Results fits in 32 bits */
#undef MULT32_32_Q31
#define MULT32_32_Q31(a,b) (opus_val32)((((opus_int64)(a)) * ((opus_int64)(b)))>>31)
    
    /*============================================================================
**      On Intel Pentium processors (especially PIII and probably P4), converting
**      from float to int is very slow. To meet the C specs, the code produced by
**      most C compilers targeting Pentium needs to change the FPU rounding mode
**      before the float to int conversion is performed.
**
**      Changing the FPU rounding mode causes the FPU pipeline to be flushed. It
**      is this flushing of the pipeline which is so slow.
**
**      Fortunately the ISO C99 specifications define the functions lrint, lrintf,
**      llrint and llrintf which fix this problem as a side effect.
**
**      On Unix-like systems, the configure process should have detected the
**      presence of these functions. If they weren't found we have to replace them
**      here with a standard C cast.
*/
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    # if !defined(__OPTIMIZE__)
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(_mm_loadl_epi64((__m128i *)(x))))
# else
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(*(__m128i *)(x)))
# endif
    
      /// Cancels one asynchronous operation that is waiting on the timer.
  /**
   * This function forces the completion of one pending asynchronous wait
   * operation against the timer. Handlers are cancelled in FIFO order. The
   * handler for the cancelled operation will be invoked with the
   * boost::asio::error::operation_aborted error code.
   *
   * Cancelling the timer does not change the expiry time.
   *
   * @return The number of asynchronous operations that were cancelled. That is,
   * either 0 or 1.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when cancel_one() is called, then
   * the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t cancel_one()
  {
    boost::system::error_code ec;
    std::size_t s = this->service.cancel_one(this->implementation, ec);
    boost::asio::detail::throw_error(ec, 'cancel_one');
    return s;
  }
    
      static void validate(const boost::array<Elem, 2>& buffer_sequence)
  {
    boost::asio::buffer_cast<const void*>(buffer_sequence[0]);
    boost::asio::buffer_cast<const void*>(buffer_sequence[1]);
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {private:
  byte* bytes_;
  UINT32 length_;
  UINT32 capacity_;
};
    
        // Operation is complete.
    if (bytes > 0)
    {
      ec = boost::system::error_code();
      bytes_transferred = bytes;
    }
    else
      bytes_transferred = 0;
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
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
    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    
    {}  // namespace guetzli
    
    // Definition of error codes for parsing jpeg files.
    
      virtual const char* Name() const override;
    
      const int kNumQueries = 30;
  for (int q=0; q<kNumQueries; ++q) {
    // Generate a random query (Append or Get) and random parameters
    query_t query = (query_t)randomGen.Uniform((int)NUM_OPS);
    std::string key = keys[randomGen.Uniform((int)kKeyCount)];
    std::string word = words[randomGen.Uniform((int)kWordCount)];
    }
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
    
    {  return Status::OK();
}
    
      // ...Code to store on disk or send over a network goes here...
    
    ::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc
    
      // Ensure that a type is prefixed with its namespace whenever it is used
  // outside of its namespace.
  std::string WrapInNameSpace(const Namespace *ns,
                              const std::string &name) const;
    
    // Utilities that can be used with the 'mini reflection' tables present
// in generated code with --reflect-types (only types) or --reflect-names
// (also names).
// This allows basic reflection functionality such as pretty-printing
// that does not require the use of the schema parser or loading of binary
// schema files at runtime (reflection.h).
    
      // If schemas used contain include statements, call this function for every
  // directory the parser should search them for.
  void AddIncludeDirectory(const char *path) { include_paths_.push_back(path); }
    
        std::string namespace_dir = path_;
    auto &namespaces = def.defined_namespace->components;
    for (auto it = namespaces.begin(); it != namespaces.end(); ++it) {
      if (it != namespaces.begin()) namespace_dir += kPathSeparator;
      namespace_dir += *it;
      std::string init_py_filename = namespace_dir + '/__init__.py';
      SaveFile(init_py_filename.c_str(), '', false);
    }
    
    bool LoadFileRaw(const char *name, bool binary, std::string *buf) {
  if (DirExists(name)) return false;
  std::ifstream ifs(name, binary ? std::ifstream::binary : std::ifstream::in);
  if (!ifs.is_open()) return false;
  if (binary) {
    // The fastest way to read a file into a string.
    ifs.seekg(0, std::ios::end);
    auto size = ifs.tellg();
    (*buf).resize(static_cast<size_t>(size));
    ifs.seekg(0, std::ios::beg);
    ifs.read(&(*buf)[0], (*buf).size());
  } else {
    // This is slower, but works correctly on all platforms for text files.
    std::ostringstream oss;
    oss << ifs.rdbuf();
    *buf = oss.str();
  }
  return !ifs.bad();
}