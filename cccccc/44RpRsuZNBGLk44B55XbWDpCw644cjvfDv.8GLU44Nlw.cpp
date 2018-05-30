
        
        
    {}  // namespace atom

    
    struct DraggableRegion {
  bool draggable;
  gfx::Rect bounds;
    }
    
    #endif  // CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_

    
    class DocComment {
  const Decl *D;
  const swift::markup::Document *Doc = nullptr;
  const swift::markup::CommentParts Parts;
    }
    
    #ifndef SWIFT_INDEX_INDEXDATACONSUMER_H
#define SWIFT_INDEX_INDEXDATACONSUMER_H
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    PowerIphone::PowerIphone() :
		nsecs_left(-1),
		percent_left(-1),
		power_state(OS::POWERSTATE_UNKNOWN) {
	// TODO Auto-generated constructor stub
}
    
    StreamPeerMbedTLS::~StreamPeerMbedTLS() {
	disconnect_from_stream();
}
    
    	virtual void poll() = 0;
	virtual Error connect_to_host(String p_host, String p_path, uint16_t p_port, bool p_ssl, PoolVector<String> p_protocol = PoolVector<String>()) = 0;
	virtual void disconnect_from_host() = 0;
	virtual IP_Address get_connected_host() const = 0;
	virtual uint16_t get_connected_port() const = 0;
    
    int jpeg_decoder_mem_stream::read(uint8 *pBuf, int max_bytes_to_read, bool *pEOF_flag)
{
  *pEOF_flag = false;
    }
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
      function:
    last mod: $Id: ocintrin.h 16503 2009-08-22 18:14:02Z giles $