
        
        PyObject* tensor_to_list(const Tensor& tensor) {
  Tensor data = tensor;
  if (data.type().backend() != kCPU) {
    with_no_gil([&]() {
      data = data.toBackend(kCPU);
    });
  }
  auto& type = data.type();
  return recursive_to_list(
      (char*)data.data_ptr(), data.sizes(), data.strides(), 0,
      type.scalarType(), type.elementSizeInBytes());
}
    
    GDCINULL(WebSocketClient);
    
    	virtual bool is_server() const;
	virtual ConnectionStatus get_connection_status() const = 0;
    
    	struct btVehicleWheelContactPoint {
		PhysicsDirectBodyState *m_s;
		PhysicsBody *m_body1;
		Vector3 m_frictionPositionWorld;
		Vector3 m_frictionDirectionWorld;
		real_t m_jacDiagABInv;
		real_t m_maxImpulse;
    }
    
    	GodotAllContactResultCallback(btCollisionObject *p_self_object, PhysicsDirectSpaceState::ShapeResult *p_results, int p_resultMax, const Set<RID> *p_exclude) :
			m_self_object(p_self_object),
			m_results(p_results),
			m_exclude(p_exclude),
			m_resultMax(p_resultMax),
			m_count(0) {}
    
    	void add_custom_node(const String &p_name, const String &p_category, const Ref<Script> &p_script);
	void remove_custom_node(const String &p_name, const String &p_category);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    // Compiler creates a fast path 1D IDCT for X non-zero columns
template <int NONZERO_COLS>
struct Row
{
  static void idct(int* pTemp, const jpgd_block_t* pSrc)
  {
    // ACCESS_COL() will be optimized at compile time to either an array access, or 0.
    #define ACCESS_COL(x) (((x) < NONZERO_COLS) ? (int)pSrc[x] : 0)
    }
    }
    
    #endif

    
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
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {private:
  int descriptor_;
  MutableBufferSequence buffers_;
};
    
    template <typename ConstBufferSequence>
class descriptor_write_op_base : public reactor_op
{
public:
  descriptor_write_op_base(int descriptor,
      const ConstBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_write_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    #ifndef BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
      // Constructor.
  hash_map()
    : size_(0),
      buckets_(0),
      num_buckets_(0)
  {
  }