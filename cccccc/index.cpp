
        
        namespace api {
    }
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    net::URLRequestJob* AsarProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  base::FilePath full_path;
  net::FileURLToFilePath(request->url(), &full_path);
  auto* job = new URLRequestAsarJob(request, network_delegate);
  job->Initialize(file_task_runner_, full_path);
  return job;
}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    namespace atom {
    }
    
    
    {}  // namespace atom
    
     private:
  // content::NotificationObserver:
  void Observe(int type,
               const content::NotificationSource& source,
               const content::NotificationDetails& details) override;
    
    class MenuModelAdapter : public views::MenuModelAdapter {
 public:
  explicit MenuModelAdapter(AtomMenuModel* menu_model);
  virtual ~MenuModelAdapter();
    }
    
    namespace atom {
    }
    
    	wchar_t message[1024];
	swprintf_s(message, L'%s\nFunction: %s\nLine: %d', buffer, func, line);
	LocalFree(buffer);
    
    #endif // BOOST_ASIO_BUFFERED_STREAM_FWD_HPP

    
    template<class T, std::size_t N>
class array;
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      descriptor_read_op(int descriptor,
      const MutableBufferSequence& buffers, Handler& handler)
    : descriptor_read_op_base<MutableBufferSequence>(
        descriptor, buffers, &descriptor_read_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
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
    
    #define BOOST_ASIO_SIGNAL_HANDLER_CHECK( \
    handler_type, handler) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
    #if defined(BOOST_ASIO_HAS_EPOLL)
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
    #pragma once
#include <cstring>
#include <string>
#include <sstream>
    
      template <typename U>
  RefPtr<T>& operator=(RefPtr<U>&& ref) {
    unrefIfNecessary(m_ptr);
    m_ptr = ref.m_ptr;
    ref.m_ptr = nullptr;
    return *this;
  }