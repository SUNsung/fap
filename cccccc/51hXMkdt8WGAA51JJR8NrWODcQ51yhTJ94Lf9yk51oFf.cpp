
        
        #endif  // ATOM_BROWSER_UI_X_EVENT_DISABLER_H_

    
    #include 'ui/gfx/geometry/rect.h'
    
    #ifndef CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_
#define CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    int PowerIphone::get_power_percent_left() {
	if (UpdatePowerInfo()) {
		return percent_left;
	} else {
		return -1;
	}
}
    
    #ifndef STREAM_PEER_SSL_H
#define STREAM_PEER_SSL_H
    
    	ERR_FAIL_COND_V(!connected, ERR_UNCONFIGURED);
    
    	virtual Error put_data(const uint8_t *p_data, int p_bytes);
	virtual Error put_partial_data(const uint8_t *p_data, int p_bytes, int &r_sent);
    
    /// Returns the list of contacts pairs in this order: Local contact, other body contact
struct GodotContactPairContactResultCallback : public btCollisionWorld::ContactResultCallback {
public:
	const btCollisionObject *m_self_object;
	Vector3 *m_results;
	int m_resultMax;
	int m_count;
	const Set<RID> *m_exclude;
    }
    
      // Success/failure error codes.
  enum jpgd_status
  {
    JPGD_SUCCESS = 0, JPGD_FAILED = -1, JPGD_DONE = 1,
    JPGD_BAD_DHT_COUNTS = -256, JPGD_BAD_DHT_INDEX, JPGD_BAD_DHT_MARKER, JPGD_BAD_DQT_MARKER, JPGD_BAD_DQT_TABLE, 
    JPGD_BAD_PRECISION, JPGD_BAD_HEIGHT, JPGD_BAD_WIDTH, JPGD_TOO_MANY_COMPONENTS, 
    JPGD_BAD_SOF_LENGTH, JPGD_BAD_VARIABLE_MARKER, JPGD_BAD_DRI_LENGTH, JPGD_BAD_SOS_LENGTH,
    JPGD_BAD_SOS_COMP_ID, JPGD_W_EXTRA_BYTES_BEFORE_MARKER, JPGD_NO_ARITHMITIC_SUPPORT, JPGD_UNEXPECTED_MARKER,
    JPGD_NOT_JPEG, JPGD_UNSUPPORTED_MARKER, JPGD_BAD_DQT_LENGTH, JPGD_TOO_MANY_BLOCKS,
    JPGD_UNDEFINED_QUANT_TABLE, JPGD_UNDEFINED_HUFF_TABLE, JPGD_NOT_SINGLE_SCAN, JPGD_UNSUPPORTED_COLORSPACE,
    JPGD_UNSUPPORTED_SAMP_FACTORS, JPGD_DECODE_ERROR, JPGD_BAD_RESTART_MARKER, JPGD_ASSERTION_ERROR,
    JPGD_BAD_SOS_SPECTRAL, JPGD_BAD_SOS_SUCCESSIVE, JPGD_STREAM_READ, JPGD_NOTENOUGHMEM
  };
    
  // Input stream interface.
  // Derive from this class to read input data from sources other than files or memory. Set m_eof_flag to true when no more data is available.
  // The decoder is rather greedy: it will keep on calling this method until its internal input buffer is full, or until the EOF flag is set.
  // It the input stream contains data after the JPEG stream's EOI (end of image) marker it will probably be pulled into the internal buffer.
  // Call the get_total_bytes_read() method to determine the actual size of the JPEG stream after successful decoding.
  class jpeg_decoder_stream
  {
  public:
    jpeg_decoder_stream() { }
    virtual ~jpeg_decoder_stream() { }
    }
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    int opus_fft_alloc_arm_neon(kiss_fft_state *st);
void opus_fft_free_arm_neon(kiss_fft_state *st);
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
      uint64_t entry_weight;
  int inclusive_cost;
  int exclusive_cost;
    
      mpz_init(gmpReturn);
  mpz_abs(gmpReturn, gmpData);
    
    
    {   private:
    using CondVarIList =
      folly::IntrusiveList<CondVarNode, &CondVarNode::m_listHook>;
    CondVarIList m_highPriList;
    CondVarIList m_midLowPriList;
  };
  std::vector<CondVarList> m_cond_list_vec;
    
    // When you already have the memory mapped in, remap them it to use huge pages,
// and try to interleave across all enabled numa nodes (no guarantee).  Return
// the number of pages that are actually backed by huge pages.
//
// Beware this function wipes out data on existing pages, and yep, that is what
// it is designed to do.
size_t remap_interleaved_2m_pages(void* addr, size_t pages, int prot,
                                  bool map_shared = false);
    
      bool isStatic = false;
  bool isExact = false;
  switch (pushOp) {
    case Op::FPushClsMethodD:
      isExact = true;
      isStatic = true;
      if (!funcName && !clsName) {
        decode_iva(pc);
        funcName = decode_litstr();
        clsName = decode_litstr();
      }
      break;
    case Op::FPushClsMethod:
      isStatic = true;
      break;
    case Op::FPushClsMethodS:
    case Op::FPushClsMethodSD: {
      decode_iva(pc);
      auto const ref = decode_oa<SpecialClsRef>(pc);
      isExact = (ref == SpecialClsRef::Self) || (ref == SpecialClsRef::Parent);
      isStatic = true;
      break;
    }
    case Op::FPushFuncD:
      if (!funcName && !clsName) {
        decode_iva(pc);
        funcName = decode_litstr();
        clsName = nullptr;
      }
      break;
    case Op::FPushCtorD:
      if (!clsName) {
        decode_iva(pc);
        clsName = decode_litstr();
      }
      break;
    default:
      if (!funcName && !clsName) return;
      break;
  }
    
      /// Bind the acceptor to the given local endpoint.
  /**
   * This function binds the socket acceptor to the specified endpoint on the
   * local machine.
   *
   * @param endpoint An endpoint on the local machine to which the socket
   * acceptor will be bound.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::tcp::v4(), 12345);
   * acceptor.open(endpoint.protocol());
   * boost::system::error_code ec;
   * acceptor.bind(endpoint, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  boost::system::error_code bind(const endpoint_type& endpoint,
      boost::system::error_code& ec)
  {
    return this->get_service().bind(this->get_implementation(), endpoint, ec);
  }
    
    /** @defgroup buffer boost::asio::buffer
 *
 * @brief The boost::asio::buffer function is used to create a buffer object to
 * represent raw memory, an array of POD elements, a vector of POD elements,
 * or a std::string.
 *
 * A buffer object represents a contiguous region of memory as a 2-tuple
 * consisting of a pointer and size in bytes. A tuple of the form <tt>{void*,
 * size_t}</tt> specifies a mutable (modifiable) region of memory. Similarly, a
 * tuple of the form <tt>{const void*, size_t}</tt> specifies a const
 * (non-modifiable) region of memory. These two forms correspond to the classes
 * mutable_buffer and const_buffer, respectively. To mirror C++'s conversion
 * rules, a mutable_buffer is implicitly convertible to a const_buffer, and the
 * opposite conversion is not permitted.
 *
 * The simplest use case involves reading or writing a single buffer of a
 * specified size:
 *
 * @code sock.send(boost::asio::buffer(data, size)); @endcode
 *
 * In the above example, the return value of boost::asio::buffer meets the
 * requirements of the ConstBufferSequence concept so that it may be directly
 * passed to the socket's write function. A buffer created for modifiable
 * memory also meets the requirements of the MutableBufferSequence concept.
 *
 * An individual buffer may be created from a builtin array, std::vector,
 * std::array or boost::array of POD elements. This helps prevent buffer
 * overruns by automatically determining the size of the buffer:
 *
 * @code char d1[128];
 * size_t bytes_transferred = sock.receive(boost::asio::buffer(d1));
 *
 * std::vector<char> d2(128);
 * bytes_transferred = sock.receive(boost::asio::buffer(d2));
 *
 * std::array<char, 128> d3;
 * bytes_transferred = sock.receive(boost::asio::buffer(d3));
 *
 * boost::array<char, 128> d4;
 * bytes_transferred = sock.receive(boost::asio::buffer(d4)); @endcode
 *
 * In all three cases above, the buffers created are exactly 128 bytes long.
 * Note that a vector is @e never automatically resized when creating or using
 * a buffer. The buffer size is determined using the vector's <tt>size()</tt>
 * member function, and not its capacity.
 *
 * @par Accessing Buffer Contents
 *
 * The contents of a buffer may be accessed using the @ref buffer_size and
 * @ref buffer_cast functions:
 *
 * @code boost::asio::mutable_buffer b1 = ...;
 * std::size_t s1 = boost::asio::buffer_size(b1);
 * unsigned char* p1 = boost::asio::buffer_cast<unsigned char*>(b1);
 *
 * boost::asio::const_buffer b2 = ...;
 * std::size_t s2 = boost::asio::buffer_size(b2);
 * const void* p2 = boost::asio::buffer_cast<const void*>(b2); @endcode
 *
 * The boost::asio::buffer_cast function permits violations of type safety, so
 * uses of it in application code should be carefully considered.
 *
 * For convenience, the @ref buffer_size function also works on buffer
 * sequences (that is, types meeting the ConstBufferSequence or
 * MutableBufferSequence type requirements). In this case, the function returns
 * the total size of all buffers in the sequence.
 *
 * @par Buffer Copying
 *
 * The @ref buffer_copy function may be used to copy raw bytes between
 * individual buffers and buffer sequences.
 *
 * In particular, when used with the @ref buffer_size, the @ref buffer_copy
 * function can be used to linearise a sequence of buffers. For example:
 *
 * @code vector<const_buffer> buffers = ...;
 *
 * vector<unsigned char> data(boost::asio::buffer_size(buffers));
 * boost::asio::buffer_copy(boost::asio::buffer(data), buffers); @endcode
 *
 * Note that @ref buffer_copy is implemented in terms of @c memcpy, and
 * consequently it cannot be used to copy between overlapping memory regions.
 *
 * @par Buffer Invalidation
 *
 * A buffer object does not have any ownership of the memory it refers to. It
 * is the responsibility of the application to ensure the memory region remains
 * valid until it is no longer required for an I/O operation. When the memory
 * is no longer available, the buffer is said to have been invalidated.
 *
 * For the boost::asio::buffer overloads that accept an argument of type
 * std::vector, the buffer objects returned are invalidated by any vector
 * operation that also invalidates all references, pointers and iterators
 * referring to the elements in the sequence (C++ Std, 23.2.4)
 *
 * For the boost::asio::buffer overloads that accept an argument of type
 * std::basic_string, the buffer objects returned are invalidated according to
 * the rules defined for invalidation of references, pointers and iterators
 * referring to elements of the sequence (C++ Std, 21.3).
 *
 * @par Buffer Arithmetic
 *
 * Buffer objects may be manipulated using simple arithmetic in a safe way
 * which helps prevent buffer overruns. Consider an array initialised as
 * follows:
 *
 * @code boost::array<char, 6> a = { 'a', 'b', 'c', 'd', 'e' }; @endcode
 *
 * A buffer object @c b1 created using:
 *
 * @code b1 = boost::asio::buffer(a); @endcode
 *
 * represents the entire array, <tt>{ 'a', 'b', 'c', 'd', 'e' }</tt>. An
 * optional second argument to the boost::asio::buffer function may be used to
 * limit the size, in bytes, of the buffer:
 *
 * @code b2 = boost::asio::buffer(a, 3); @endcode
 *
 * such that @c b2 represents the data <tt>{ 'a', 'b', 'c' }</tt>. Even if the
 * size argument exceeds the actual size of the array, the size of the buffer
 * object created will be limited to the array size.
 *
 * An offset may be applied to an existing buffer to create a new one:
 *
 * @code b3 = b1 + 2; @endcode
 *
 * where @c b3 will set to represent <tt>{ 'c', 'd', 'e' }</tt>. If the offset
 * exceeds the size of the existing buffer, the newly created buffer will be
 * empty.
 *
 * Both an offset and size may be specified to create a buffer that corresponds
 * to a specific range of bytes within an existing buffer:
 *
 * @code b4 = boost::asio::buffer(b1 + 1, 3); @endcode
 *
 * so that @c b4 will refer to the bytes <tt>{ 'b', 'c', 'd' }</tt>.
 *
 * @par Buffers and Scatter-Gather I/O
 *
 * To read or write using multiple buffers (i.e. scatter-gather I/O), multiple
 * buffer objects may be assigned into a container that supports the
 * MutableBufferSequence (for read) or ConstBufferSequence (for write) concepts:
 *
 * @code
 * char d1[128];
 * std::vector<char> d2(128);
 * boost::array<char, 128> d3;
 *
 * boost::array<mutable_buffer, 3> bufs1 = {
 *   boost::asio::buffer(d1),
 *   boost::asio::buffer(d2),
 *   boost::asio::buffer(d3) };
 * bytes_transferred = sock.receive(bufs1);
 *
 * std::vector<const_buffer> bufs2;
 * bufs2.push_back(boost::asio::buffer(d1));
 * bufs2.push_back(boost::asio::buffer(d2));
 * bufs2.push_back(boost::asio::buffer(d3));
 * bytes_transferred = sock.send(bufs2); @endcode
 */
/*@{*/
    }
    
    #endif // BOOST_ASIO_BUFFERED_STREAM_FWD_HPP

    
      static void validate(const std::array<Elem, 2>& buffer_sequence)
  {
    boost::asio::buffer_cast<const void*>(buffer_sequence[0]);
    boost::asio::buffer_cast<const void*>(buffer_sequence[1]);
  }
    
        // The key associated with the context.
    Key* key_;
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    #include <boost/asio/detail/dev_poll_reactor.hpp>
#include <boost/asio/detail/assert.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/error.hpp>
    
    bool js_cocos2dx_physics3d_PhysicsSprite3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_PhysicsSprite3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_PhysicsSprite3D(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncNodeToPhysics(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncPhysicsToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_getPhysicsObj(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_PhysicsSprite3D(JSContext *cx, uint32_t argc, jsval *vp);
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.PhysicsJoint',0,&tolua_err)) goto tolua_lerror;
#endif
    
    class BodyTypes : public Test
{
public:
	BodyTypes()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    }
    
    
    {				if (i == (e_count >> 1))
				{
					m_middle = body;
				}
				prevBody = body;
			}
    
    
    {
    {			m_bullet->SetLinearVelocity(b2Vec2(0.0f, -50.0f));
		}
	}
    
    
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-8.0f + 8.0f * i, 12.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
    
    static std::unique_ptr<Env> def_env(new NormalizingEnvWrapper(Env::Default()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvBasicTestWithParam,
                        ::testing::Values(def_env.get()));
INSTANTIATE_TEST_CASE_P(EnvDefault, EnvMoreTestWithParam,
                        ::testing::Values(def_env.get()));
    
           * Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
       * Redistributions in binary form must reproduce the above
   copyright notice, this list of conditions and the following disclaimer
   in the documentation and/or other materials provided with the
   distribution.
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      // MemTables are reference counted.  The initial reference count
  // is zero and the caller must call Ref() at least once.
  //
  // earliest_seq should be the current SequenceNumber in the db such that any
  // key inserted into this memtable will have an equal or larger seq number.
  // (When a db is first created, the earliest sequence number will be 0).
  // If the earliest sequence number is not known, kMaxSequenceNumber may be
  // used, but this may prevent some transactions from succeeding until the
  // first key is inserted into the memtable.
  explicit MemTable(const InternalKeyComparator& comparator,
                    const ImmutableCFOptions& ioptions,
                    const MutableCFOptions& mutable_cf_options,
                    WriteBufferManager* write_buffer_manager,
                    SequenceNumber earliest_seq, uint32_t column_family_id);
    
    std::unique_ptr<CompactionFilter> CompactionFilterFactoryJniCallback::CreateCompactionFilter(
    const CompactionFilter::Context& context) {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    DirectComparatorJniCallback::~DirectComparatorJniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    namespace rocksdb {
    }