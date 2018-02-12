
        
          OurReader(OurFeatures const& features);
  bool parse(const char* beginDoc,
             const char* endDoc,
             Value& root,
             bool collectComments = true);
  std::string getFormattedErrorMessages() const;
  std::vector<StructuredError> getStructuredErrors() const;
  bool pushError(const Value& value, const std::string& message);
  bool pushError(const Value& value, const std::string& message, const Value& extra);
  bool good() const;
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    #include <map>
#include <string>
    
    static int make_prefixes(struct ifaddrs* ifaddr, int family, int prefixlen) {
	char* prefix = NULL;
	if (family == AF_INET) {
		sockaddr_in* mask = new sockaddr_in;
		mask->sin_family = AF_INET;
		memset(&mask->sin_addr, 0, sizeof(in_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 32) {
			prefixlen = 32;
		}
		prefix = reinterpret_cast<char*>(&mask->sin_addr);
	} else if (family == AF_INET6) {
		sockaddr_in6* mask = new sockaddr_in6;
		mask->sin6_family = AF_INET6;
		memset(&mask->sin6_addr, 0, sizeof(in6_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 128) {
			prefixlen = 128;
		}
		prefix = reinterpret_cast<char*>(&mask->sin6_addr);
	} else {
		return -1;
	}
	for (int i = 0; i < (prefixlen / 8); i++) {
		*prefix++ = 0xFF;
	}
	char remainder = 0xff;
	remainder <<= (8 - prefixlen % 8);
	*prefix = remainder;
	return 0;
}
    
    
    {  {2,0,32,  &_residue_44_high,
   &_huff_book__16c2_s_long,&_huff_book__16c2_s_long,
   &_resbook_16s_2,&_resbook_16s_2}
};
    
    static const vorbis_residue_template _res_8s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c0_s_single,&_huff_book__8c0_s_single,
   &_resbook_8s_0,&_resbook_8s_0},
};
static const vorbis_residue_template _res_8s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c1_s_single,&_huff_book__8c1_s_single,
   &_resbook_8s_1,&_resbook_8s_1},
};
    
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
    
    
    
        using uS::Node::run;
    using uS::Node::poll;
    using uS::Node::getLoop;
    using Group<SERVER>::onConnection;
    using Group<CLIENT>::onConnection;
    using Group<SERVER>::onTransfer;
    using Group<CLIENT>::onTransfer;
    using Group<SERVER>::onMessage;
    using Group<CLIENT>::onMessage;
    using Group<SERVER>::onDisconnection;
    using Group<CLIENT>::onDisconnection;
    using Group<SERVER>::onPing;
    using Group<CLIENT>::onPing;
    using Group<SERVER>::onPong;
    using Group<CLIENT>::onPong;
    using Group<SERVER>::onError;
    using Group<CLIENT>::onError;
    using Group<SERVER>::onHttpRequest;
    using Group<SERVER>::onHttpData;
    using Group<SERVER>::onHttpConnection;
    using Group<SERVER>::onHttpDisconnection;
    using Group<SERVER>::onHttpUpgrade;
    using Group<SERVER>::onCancelledHttpRequest;
    
        Group(int extensionOptions, unsigned int maxPayload, Hub *hub, uS::NodeData *nodeData);
    void stopListening();