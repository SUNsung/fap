
        
        #  define EXPECT_DEBUG_DEATH(statement, regex) \
  EXPECT_DEATH(statement, regex)
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
      // Returns true iff the test failed.
  bool Failed() const;
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2;
}
    
    // ArrayEq() compares two k-dimensional native arrays using the
// elements' operator==, where k can be any integer >= 0.  When k is
// 0, ArrayEq() degenerates into comparing a single pair of values.
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
    #include <memory>
    
    
    {  return 0;
}

    
    // A simple parser for the json db file. It requires the db file to have the
// exact form of [{'location': { 'latitude': 123, 'longitude': 456}, 'name':
// 'the name can be empty' }, { ... } ... The spaces will be stripped.
class Parser {
 public:
  explicit Parser(const std::string& db) : db_(db) {
    // Remove all spaces.
    db_.erase(
        std::remove_if(db_.begin(), db_.end(), isspace),
        db_.end());
    if (!Match('[')) {
      SetFailedAndReturnFalse();
    }
  }
    }
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    namespace grpc_python_generator {
    }
    
    #if TARGET_OS_IPHONE
GRPC_XMACRO_ITEM(isWWAN, IsWWAN)
#endif
GRPC_XMACRO_ITEM(reachable, Reachable)
GRPC_XMACRO_ITEM(transientConnection, TransientConnection)
GRPC_XMACRO_ITEM(connectionRequired, ConnectionRequired)
GRPC_XMACRO_ITEM(connectionOnTraffic, ConnectionOnTraffic)
GRPC_XMACRO_ITEM(interventionRequired, InterventionRequired)
GRPC_XMACRO_ITEM(connectionOnDemand, ConnectionOnDemand)
GRPC_XMACRO_ITEM(isLocalAddress, IsLocalAddress)
GRPC_XMACRO_ITEM(isDirect, IsDirect)

    
      std::shared_ptr<ServerCredentials> GetServerCredentials(
      const grpc::string& type) override {
    if (type == grpc::testing::kInsecureCredentialsType) {
      return InsecureServerCredentials();
    } else if (type == grpc::testing::kTlsCredentialsType) {
      SslServerCredentialsOptions::PemKeyCertPair pkcp = {test_server1_key,
                                                          test_server1_cert};
      SslServerCredentialsOptions ssl_opts;
      ssl_opts.pem_root_certs = '';
      ssl_opts.pem_key_cert_pairs.push_back(pkcp);
      return SslServerCredentials(ssl_opts);
    } else {
      std::unique_lock<std::mutex> lock(mu_);
      auto it(std::find(added_secure_type_names_.begin(),
                        added_secure_type_names_.end(), type));
      if (it == added_secure_type_names_.end()) {
        gpr_log(GPR_ERROR, 'Unsupported credentials type %s.', type.c_str());
        return nullptr;
      }
      return added_secure_type_providers_[it - added_secure_type_names_.begin()]
          ->GetServerCredentials();
    }
  }
  std::vector<grpc::string> GetSecureCredentialsTypeList() override {
    std::vector<grpc::string> types;
    types.push_back(grpc::testing::kTlsCredentialsType);
    std::unique_lock<std::mutex> lock(mu_);
    for (auto it = added_secure_type_names_.begin();
         it != added_secure_type_names_.end(); it++) {
      types.push_back(*it);
    }
    return types;
  }
    
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
    
      // stdio FILE stream class.
  class jpeg_decoder_file_stream : public jpeg_decoder_stream
  {
    jpeg_decoder_file_stream(const jpeg_decoder_file_stream &);
    jpeg_decoder_file_stream &operator =(const jpeg_decoder_file_stream &);
    }
    
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
    
    static const static_codebook*const _floor_512x17_books[]={
  &_huff_book_line_512x17_class1,
  &_huff_book_line_512x17_class2,
  &_huff_book_line_512x17_class3,
    }
    
        {&_44p8_p6_0,&_44p8_p6_1,&_44p8_p5_1},
    {&_44p8_p7_0,&_44p8_p7_1,&_44p8_p7_2,&_44p8_p7_3}
   }
};
static const static_bookblock _resbook_44p_9={
  {
    {0},
    {0,0,&_44p9_p1_0},
    {0,&_44p9_p2_0,0},
    
    const HugePageSize* getHugePageSizeForDevice(dev_t device) {
  // Linear search is just fine.
  for (auto& p : getHugePageSizes()) {
    if (p.mountPoint.empty()) {
      continue;
    }
    if (device == p.device) {
      return &p;
    }
  }
  return nullptr;
}
    
    std::shared_ptr<LogWriter> FileWriterFactory::createWriter(File file) {
  // Determine whether we should use ImmediateFileWriter or AsyncFileWriter
  if (async_) {
    auto asyncWriter = make_shared<AsyncFileWriter>(std::move(file));
    if (maxBufferSize_.hasValue()) {
      asyncWriter->setMaxBufferSize(maxBufferSize_.value());
    }
    return asyncWriter;
  } else {
    if (maxBufferSize_.hasValue()) {
      throw std::invalid_argument(to<string>(
          'the \'max_buffer_size\' option is only valid for async file '
          'handlers'));
    }
    return make_shared<ImmediateFileWriter>(std::move(file));
  }
}
    
    #include <folly/Optional.h>
#include <folly/Range.h>
#include <memory>
    
    
    {
    {  return buffer;
}
} // namespace folly

    
    using folly::StringPiece;
    
    /*
 * This file contains utility functions for parsing and serializing
 * LogConfig strings.
 *
 * This is separate from the LogConfig class itself, to reduce the dependencies
 * of the core logging library.  Other code that wants to use the logging
 * library to log messages but does not need to parse log config strings
 * therefore does not need to depend on the folly JSON library.
 */