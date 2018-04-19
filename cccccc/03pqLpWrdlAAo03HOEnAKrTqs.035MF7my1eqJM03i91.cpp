
        
        Vtuple Vunit::makeTuple(VregList&& regs) {
  auto i = tuples.size();
  tuples.emplace_back(std::move(regs));
  return Vtuple{i};
}
    
    /*
 * Source operands for vcall/vinvoke instructions, packed into a struct for
 * convenience and to keep the instructions compact.
 */
struct VcallArgs {
  VregList args;
  VregList simdArgs;
  VregList stkArgs;
  VregList indRetArgs;
};
    
      Offset defaultOff = bcOff(env) + iv.vec32()[iv.size() - 1];
  Offset zeroOff = 0;
  if (base <= 0 && (base + nTargets) > 0) {
    zeroOff = bcOff(env) + iv.vec32()[0 - base];
  } else {
    zeroOff = defaultOff;
  }
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    static int populate_ifaddrs(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* bytes,
		     size_t len) {
	if (set_ifname(ifaddr, msg->ifa_index) != 0) {
		return -1;
	}
	if (set_flags(ifaddr) != 0) {
		return -1;
	}
	if (set_addresses(ifaddr, msg, bytes, len) != 0) {
		return -1;
	}
	if (make_prefixes(ifaddr, msg->ifa_family, msg->ifa_prefixlen) != 0) {
		return -1;
	}
	return 0;
}
    
    void StreamPeerSSL::_bind_methods() {
    }
    
    	friend class Main;
	static bool initialize_certs;
    
    
    {	available = true;
}
    
    
    {	if (_is_multiplayer) {
		emit_signal('connection_failed');
	} else {
		emit_signal('connection_closed');
	}
}
    
    
    {	static void init_languages();
	static void finish_languages();
};
    
    class EditorHelp : public VBoxContainer {
	GDCLASS(EditorHelp, VBoxContainer);
    }
    
    
    {
    {			ofs.y += h;
		}
	} else {
		ofs.y += h;
	}
    
    	updating_graph = true;
    
    	Label *select_func_text;
    
    #endif

    
      std::vector<std::shared_ptr<thpp::IntTensor>> tensors;
  std::vector<thpp::Tensor*> raw_tensors;
  if (data_channel->getRank() == 0) {
    for (std::size_t i = 0; i < data_channel->getNumProcesses(); ++i) {
      tensors.push_back(buildTensor<int>({1, 2, 3, 4, 5}, i));
      raw_tensors.push_back(tensors.back().get());
    }
  }
    
    
    {private:
  enum class Tag { HAS_d, HAS_i, HAS_t };
  Tag tag;
  union {
    double d;
    int64_t i;
  } v;
  detail::TensorBase t;
  friend struct Type;
};
    
    namespace at {
    }
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
      std::vector<uint8_t> ToSRGB() const;
    
    #endif  // GUETZLI_PREPROCESS_DOWNSAMPLE_H_

    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    
    {    pclose(stream);
}
    
    #ifndef DUMPCRASHSTACK_H_
#define DUMPCRASHSTACK_H_
    
        void Lock(int64_t _timelock);  // ms
    void Lock();
    void Unlock();
    bool IsLocking();
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
    #include 'comm/debugger/testspy.h'