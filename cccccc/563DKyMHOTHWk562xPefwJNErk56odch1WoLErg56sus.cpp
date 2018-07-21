
        
          void GetDeviceLocalityAsync(const string& device, DeviceLocality* locality,
                              StatusCallback) override;
    
    template <typename Container1, typename Container2, typename Cmp>
inline int64 LevenshteinDistance(const Container1& s, const Container2& t,
                                 const Cmp& cmp) {
  return LevenshteinDistance(
      gtl::ArraySlice<typename Container1::value_type>(s.data(), s.size()),
      gtl::ArraySlice<typename Container1::value_type>(t.data(), t.size()),
      cmp);
}
    
    
    {  return Status::OK();
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  EXPECT_THAT(model.GetOutput(), ElementsAreArray({1, 0}));
  EXPECT_THAT(model.GetOutputShape(), ElementsAreArray({1, 1, 2, 1}));
}
    
      /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    void SyntaxASTMap::clearSyntaxMap() {
  SyntaxMap.shrink_and_clear();
}
    
    #pragma mark - NSCalendar verification
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace HPHP {
    }
    
    
    {
    {
    {}}}
    
      // DataBlock can optionally be growable. The initial expansion of DataBlock
  // will allocate a new buffer that is owned by the DataBlock, subsequent
  // expansions will use realloc to expand this block until m_maxGrow has been
  // reached. Only DataBlocks which have a different m_base from m_destBase may
  // be grown, as expansion may move the location of m_destBase.
  struct Deleter final { void operator()(uint8_t* a) const { ::free(a); } };
  std::unique_ptr<uint8_t, Deleter> m_destBuf{nullptr};
    
    Variant *get_intercept_handler(const String& name, int8_t* flag) {
  TRACE(1, 'get_intercept_handler %s flag is %d\n',
        name.get()->data(), (int)*flag);
  if (*flag == -1) {
    Lock lock(s_mutex);
    if (*flag == -1) {
      auto sd = makeStaticString(name.get());
      auto &entry = s_registered_flags[StrNR(sd)];
      entry.second.push_back(flag);
      *flag = entry.first;
    }
    if (!*flag) return nullptr;
  }
    }
    
    //////////////////////////////////////////////////////////////////////
    
      void write(const char *v, int len = -1, bool isArrayKey = false,
             bool noQuotes = false);
    
    void SlabManager::init() {
  if (!s_slabManagers.empty()) return;
#ifdef HAVE_NUMA
  unsigned max_node = numa_max_node();
#else
  unsigned constexpr max_node = 0;
#endif
  const unsigned numNodes = num_numa_nodes(); // number of NUMA node allowed
  s_slabManagers.reserve(max_node + 1);
    }
    
    bool Bump1GMapper::addMappingImpl(BumpAllocState& state, size_t /*newSize*/) {
  // Check quota and alignment before mmap
  if (m_currNumPages >= m_maxNumPages) {
    m_failed = true;
    return false;
  }
  auto const currFrontier = state.frontier();
  if (currFrontier % size1g != 0) return false;
    }
    
      /// Gets the non-blocking mode of the native acceptor implementation.
  /**
   * This function is used to retrieve the non-blocking mode of the underlying
   * native acceptor. This mode has no effect on the behaviour of the acceptor
   * object's synchronous operations.
   *
   * @returns @c true if the underlying acceptor is in non-blocking mode and
   * direct system calls may fail with boost::asio::error::would_block (or the
   * equivalent system error).
   *
   * @note The current non-blocking mode is cached by the acceptor object.
   * Consequently, the return value may be incorrect if the non-blocking mode
   * was set directly on the native acceptor.
   */
  bool native_non_blocking() const
  {
    return this->get_service().native_non_blocking(this->get_implementation());
  }
    
    #endif // BOOST_ASIO_BASIC_WAITABLE_TIMER_HPP

    
    namespace boost {
namespace asio {
    }
    }
    
    namespace boost {
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      /// Clear the buffer.
  void clear()
  {
    begin_offset_ = 0;
    end_offset_ = 0;
  }
    
    class ptime;
    
        // Make a copy of the handler so that the memory can be deallocated before
    // the upcall is made. Even if we're not about to make an upcall, a
    // sub-object of the handler may be the true owner of the memory associated
    // with the handler. Consequently, a local copy of the handler is required
    // to ensure that any owning sub-object remains valid until after we have
    // deallocated the memory here.
    detail::binder2<Handler, boost::system::error_code, std::size_t>
      handler(o->handler_, o->ec_, o->bytes_transferred_);
    p.h = boost::asio::detail::addressof(handler.handler_);
    p.reset();
    
    #include <boost/asio/detail/push_options.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    // Newer gcc, clang need special treatment to suppress unused typedef warnings.
#if defined(__clang__)
# if defined(__apple_build_version__)
#  if (__clang_major__ >= 7)
#   define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
#  endif // (__clang_major__ >= 7)
# elif ((__clang_major__ == 3) && (__clang_minor__ >= 6)) \
    || (__clang_major__ > 3)
#  define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
# endif // ((__clang_major__ == 3) && (__clang_minor__ >= 6))
        //   || (__clang_major__ > 3)
#elif defined(__GNUC__)
# if ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)) || (__GNUC__ > 4)
#  define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
# endif // ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)) || (__GNUC__ > 4)
#endif // defined(__GNUC__)
#if !defined(BOOST_ASIO_UNUSED_TYPEDEF)
# define BOOST_ASIO_UNUSED_TYPEDEF
#endif // !defined(BOOST_ASIO_UNUSED_TYPEDEF)
    
      STDMETHODIMP Buffer(byte** value)
  {
    *value = bytes_;
    return S_OK;
  }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    bool WakeUpLock::IsLocking() {
    return ::wakeupLock_IsLocking(object_);
}
    
    void SimpleIntPack(const void* _data, size_t _datalen, AutoBuffer& _outbuf) {
    SimplePack<unsigned int>(_data, _datalen, _outbuf);
}
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
            if (m_publicservices.end() != m_publicservices.find(T::ServiceName()))
            return (T*)m_publicservices[T::ServiceName()];
    
        template<typename T>
    T* _Service() {
        if (m_dependservices.end() != m_dependservices.find(T::ServiceName()))
            return (T*)m_dependservices[T::ServiceName()];
    }
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};

    
    // char* to jstring
jstring JNU_Chars2Jstring(JNIEnv* _env, const char* pat);
void JNU_FreeJstring(JNIEnv* _env, jstring str);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.