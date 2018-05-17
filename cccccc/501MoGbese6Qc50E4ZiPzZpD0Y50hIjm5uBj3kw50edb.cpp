
        
        
    {}  // namespace tesseract.
    
    CCStruct::~CCStruct() {
}
    
    DetLineFit::~DetLineFit() {
}
    
    #ifndef TESSERACT_CCUTIL_QRSEQUENCE_H_
#define TESSERACT_CCUTIL_QRSEQUENCE_H_
    
      // The UNICHARMAP is represented as a tree whose nodes are of type
  // UNICHARMAP_NODE.
  struct UNICHARMAP_NODE {
    }
    
    
    {
}  // namespace routeguide
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    gpr_atm grpc::testing::interop::g_got_sigint;
    
    #include 'test/cpp/qps/usage_timer.h'
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
     private:
  SubProcess(const SubProcess& other);
  SubProcess& operator=(const SubProcess& other);
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/python/python_generator.h>
    
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
    
    	virtual int get_available_bytes() const;
    
    
    {	ADD_SIGNAL(MethodInfo('data_received'));
	ADD_SIGNAL(MethodInfo('connection_established', PropertyInfo(Variant::STRING, 'protocol')));
	ADD_SIGNAL(MethodInfo('connection_closed'));
	ADD_SIGNAL(MethodInfo('connection_error'));
}

    
    #endif // WEBSOCKET_CLIENT_H

    
    		MethodBind *bind = create_method_bind(p_method);
		const Variant *ptr[4] = { &p_def1, &p_def2, &p_def3, &p_def4 };
    
    	void _resolve_single_bilateral(PhysicsDirectBodyState *s, const Vector3 &pos1, PhysicsBody *body2, const Vector3 &pos2, const Vector3 &normal, real_t &impulse, real_t p_rollInfluence);
	real_t _calc_rolling_friction(btVehicleWheelContactPoint &contactPoint);
    
    	GodotRestInfoContactResultCallback(btCollisionObject *p_self_object, PhysicsDirectSpaceState::ShapeRestInfo *p_result, const Set<RID> *p_exclude) :
			m_self_object(p_self_object),
			m_result(p_result),
			m_exclude(p_exclude),
			m_collided(false),
			m_min_distance(0) {}
    
    #include 'editor/create_dialog.h'
#include 'editor/plugins/script_editor_plugin.h'
#include 'editor/property_editor.h'
#include 'editor/property_selector.h'
#include 'scene/gui/graph_edit.h'
#include 'visual_script.h'
class VisualScriptEditorSignalEdit;
class VisualScriptEditorVariableEdit;
    
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
    
    
    {    return init.result.get();
  }
    
    #ifndef BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
    
    namespace boost {
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #define BOOST_ASIO_DEFINE_HANDLER_PTR(op) \
  struct ptr \
  { \
    Handler* h; \
    void* v; \
    op* p; \
    ~ptr() \
    { \
      reset(); \
    } \
    void reset() \
    { \
      if (p) \
      { \
        p->~op(); \
        p = 0; \
      } \
      if (v) \
      { \
        boost_asio_handler_alloc_helpers::deallocate(v, sizeof(op), *h); \
        v = 0; \
      } \
    } \
  } \
  /**/
    
      // Get an iterator for the end of the map.
  const_iterator end() const
  {
    return values_.end();
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_IPP

    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}