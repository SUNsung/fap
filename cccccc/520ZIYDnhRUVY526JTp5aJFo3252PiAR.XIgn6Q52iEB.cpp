
        
        grpc::string SecureAuthContext::GetPeerIdentityPropertyName() const {
  if (!ctx_) {
    return '';
  }
  const char* name = grpc_auth_context_peer_identity_property_name(ctx_);
  return name == nullptr ? '' : name;
}
    
    #include <grpc/support/port_platform.h>
    
    void ProtoServerReflectionPlugin::Finish(grpc::ServerInitializer* si) {
  reflection_service_->SetServiceList(si->GetServiceList());
}
    
    void DynamicThreadPool::ThreadFunc() {
  for (;;) {
    // Wait until work is available or we are shutting down.
    std::unique_lock<std::mutex> lock(mu_);
    if (!shutdown_ && callbacks_.empty()) {
      // If there are too many threads waiting, then quit this thread
      if (threads_waiting_ >= reserve_threads_) {
        break;
      }
      threads_waiting_++;
      cv_.wait(lock);
      threads_waiting_--;
    }
    // Drain callbacks before considering shutdown to ensure all work
    // gets completed.
    if (!callbacks_.empty()) {
      auto cb = callbacks_.front();
      callbacks_.pop();
      lock.unlock();
      cb();
    } else if (shutdown_) {
      break;
    }
  }
}
    
    #include 'src/core/lib/gprpp/thd.h'
#include 'src/cpp/server/thread_pool_interface.h'
    
    #if (defined(__CYGWIN__) || defined(__CYGWIN32__)) && !defined(BOOST_REGEX_NO_W32)
#error 'Sorry, can't mix <windows.h> with STL code and gcc compiler: if you ran configure, try again with configure --disable-ms-windows'
#define BOOST_REGEX_FI_WIN32_MAP
#define BOOST_REGEX_FI_POSIX_DIR
#elif (defined(__WIN32__) || defined(_WIN32) || defined(WIN32)) && !defined(BOOST_REGEX_NO_W32)
#define BOOST_REGEX_FI_WIN32_MAP
#define BOOST_REGEX_FI_WIN32_DIR
#else
#define BOOST_REGEX_FI_POSIX_MAP
#define BOOST_REGEX_FI_POSIX_DIR
#endif
    
    
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_set()
{
   if(position == last)
      return false;
   if(static_cast<const re_set*>(pstate)->_map[static_cast<unsigned char>(traits_inst.translate(*position, icase))])
   {
      pstate = pstate->next.p;
      ++position;
      return true;
   }
   return false;
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    class BOOST_REGEX_DECL raw_storage
{
public:
   typedef std::size_t           size_type;
   typedef unsigned char*        pointer;
private:
   pointer last, start, end;
public:
    }
    
    //  D. J. Bernstein's Fast Fourier Transform algorithm on 4 elements.
inline void FFT4(Complex* a) {
  double t1, t2, t3, t4, t5, t6, t7, t8;
  t5 = a[2].real;
  t1 = a[0].real - t5;
  t7 = a[3].real;
  t5 += a[0].real;
  t3 = a[1].real - t7;
  t7 += a[1].real;
  t8 = t5 + t7;
  a[0].real = t8;
  t5 -= t7;
  a[1].real = t5;
  t6 = a[2].imag;
  t2 = a[0].imag - t6;
  t6 += a[0].imag;
  t5 = a[3].imag;
  a[2].imag = t2 + t3;
  t2 -= t3;
  a[3].imag = t2;
  t4 = a[1].imag - t5;
  a[3].real = t1 + t4;
  t1 -= t4;
  a[2].real = t1;
  t5 += a[1].imag;
  a[0].imag = t6 + t5;
  t6 -= t5;
  a[1].imag = t6;
}
    
    // We don't really need to round before descaling, since we
// still have 4 bits of precision left as final scaled output.
#define DESCALE(a)  static_cast<coeff_t>((a) >> 16)
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};