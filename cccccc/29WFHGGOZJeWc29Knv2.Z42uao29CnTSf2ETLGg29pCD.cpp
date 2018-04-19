
        
        
    {
    {
    {}}}
    
    /*
 * Emit the prologue dispatch for func which contains dvs DV initializers, and
 * return its start address.  The `kind' of translation argument is used to
 * decide what area of the code cache will be used (hot, main, or prof).
 */
TCA emitFuncBodyDispatch(Func* func, const DVFuncletsVec& dvs, TransKind kind);
    
    
double Instruction::ImmFP64() {
  //  ImmFP: abcdefgh (8 bits)
  // Double: aBbb.bbbb.bbcd.efgh.0000.0000.0000.0000
  //         0000.0000.0000.0000.0000.0000.0000.0000 (64 bits)
  // where B is b ^ 1
  uint32_t bits = ImmFP();
  uint64_t bit7 = (bits >> 7) & 0x1;
  uint64_t bit6 = (bits >> 6) & 0x1;
  uint64_t bit5_to_0 = bits & 0x3f;
  uint64_t result = (bit7 << 63) | ((256 - bit6) << 54) | (bit5_to_0 << 48);
    }
    
    #include <cstdint>
#include <string>
    
    #ifndef incl_HPHP_CURL_SHARE_RESOURCE_H
#define incl_HPHP_CURL_SHARE_RESOURCE_H
    
    template <typename PodType, std::size_t N>
inline typename detail::buffer_types<PodType>::container_type
buffer(boost::array<PodType, N>& data)
{
  typedef typename boost::asio::detail::buffer_types<PodType>::buffer_type
    buffer_type;
  typedef typename boost::asio::detail::buffer_types<PodType>::container_type
    container_type;
  return container_type(
      buffer_type(data.c_array(), data.size() * sizeof(PodType)));
}
    
    #endif // BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP

    
      static Buffer first(const Buffers& buffer_sequence)
  {
    typename Buffers::const_iterator iter = buffer_sequence.begin();
    typename Buffers::const_iterator end = buffer_sequence.end();
    for (; iter != end; ++iter)
    {
      Buffer buffer(*iter);
      if (boost::asio::buffer_size(buffer) != 0)
        return buffer;
    }
    return Buffer();
  }
    
    
    {private:
  // The top of the stack of calls for the current thread.
  static tss_ptr<context> top_;
};
    
    template<class T, class TimeSystem>
class base_time;
    
    template <typename MutableBufferSequence>
class descriptor_read_op_base : public reactor_op
{
public:
  descriptor_read_op_base(int descriptor,
      const MutableBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_read_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    #include <boost/asio/detail/config.hpp>
    
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
    
    #define BOOST_ASIO_ACCEPT_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'AcceptHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    #include <boost/asio/detail/config.hpp>
#include <list>
#include <utility>
#include <boost/asio/detail/assert.hpp>
#include <boost/asio/detail/noncopyable.hpp>
    
    #include <boost/asio/detail/push_options.hpp>
    
    
/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSetParam
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSetParam
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jname, jstring jvalue) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char* name = jenv->GetStringUTFChars(jname, 0);
  const char* value = jenv->GetStringUTFChars(jvalue, 0);
  int ret = XGBoosterSetParam(handle, name, value);
  //release
  if (name) jenv->ReleaseStringUTFChars(jname, name);
  if (value) jenv->ReleaseStringUTFChars(jvalue, value);
  return ret;
}
    
    
    {  friend std::ostream &operator<<(std::ostream &os,
                                  const GradientPairInternal<T> &g) {
    os << g.GetGrad() << '/' << g.GetHess();
    return os;
  }
};