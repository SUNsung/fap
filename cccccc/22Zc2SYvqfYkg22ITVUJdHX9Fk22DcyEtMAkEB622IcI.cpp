
        
        v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    namespace nw {
    }
    
    void PointMenuPositionFunc(GtkMenu* menu,
                           int* x,
                           int* y,
                           gboolean* push_in,
                           gpointer userdata) {
  *push_in = TRUE;
    }
    
    
    {} // namespace
    
    NwAppClearAppCacheFunction::NwAppClearAppCacheFunction() {
}
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {  /* size and stride */
  THDTensor_(_resize)(self, nDimension, size, stride);
}
    
    #define THCPDoubleStorage_CData(obj)  (obj)->cdata
#define THCPFloatStorage_CData(obj)   (obj)->cdata
#define THCPLongStorage_CData(obj)    (obj)->cdata
#define THCPIntStorage_CData(obj)     (obj)->cdata
#define THCPShortStorage_CData(obj)   (obj)->cdata
#define THCPCharStorage_CData(obj)    (obj)->cdata
#define THCPByteStorage_CData(obj)    (obj)->cdata
    
    
    {  ManagerSocket socket;
  pid_t pid;
};
    
    
    
    using THDGeneratorPtrTypes = map_to_ptr<std::add_const, THDGeneratorTypes>::type;
using THDTensorPtrTypes = map_to_ptr<std::add_const, THDTensorTypes>::type;
using THDStoragePtrTypes = map_to_ptr<std::add_const, THDStorageTypes>::type;
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    namespace boost {
    }
    
    #if defined(BOOST_ASIO_HEADER_ONLY)
# include <boost/asio/detail/impl/buffer_sequence_adapter.ipp>
#endif // defined(BOOST_ASIO_HEADER_ONLY)
    
    template <typename ConstBufferSequence, typename Handler>
class descriptor_write_op
  : public descriptor_write_op_base<ConstBufferSequence>
{
public:
  BOOST_ASIO_DEFINE_HANDLER_PTR(descriptor_write_op);
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      // Erase an element from the values list by splicing it to the spares list.
  void values_erase(iterator it)
  {
    *it = value_type();
    spares_.splice(spares_.begin(), values_, it);
  }
    
    #endif // defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    int ioctl(int d, state_type& state, long cmd,
    ioctl_arg_type* arg, boost::system::error_code& ec)
{
  if (d == -1)
  {
    ec = boost::asio::error::bad_descriptor;
    return -1;
  }
    }
    
    extern JSClass  *jsb_cocos2d_NavMeshAgent_class;
extern JSObject *jsb_cocos2d_NavMeshAgent_prototype;
    
    
    
    
    
        virtual void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    
    const int32 k_maxContactPoints = 2048;
    
    class AddPair : public Test
{
public:
    }
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    /**
 * Symbolicates a stack trace into a given vector
 *
 * @param symbols The vector to receive the output. The vector is cleared and
 * enough room to keep the frames are reserved.
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT void getStackTraceSymbols(std::vector<StackTraceElement>& symbols,
                                   const std::vector<InstructionPointer>& trace);
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    template <typename T>
inline bool operator!=(std::nullptr_t ptr, const RefPtr<T>& ref) {
  return ref.get() != ptr;
}
    
    
    {}

    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }
    
    #include 'AuthResolver.h'
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    protected:
  virtual bool executeInternal() CXX11_OVERRIDE;
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    void AnnounceList::moveToCompletedAllowedTier()
{
  auto itr = find_wrap_if(std::begin(tiers_), std::end(tiers_), currentTier_,
                          FindCompletedAllowedTier());
  setCurrentTier(std::move(itr));
}
    
    
    {  void nextEventIfAfterStarted();
};
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    std::string AuthConfig::getAuthText() const
{
  std::string s = user_;
  s += ':';
  s += password_;
  return s;
}