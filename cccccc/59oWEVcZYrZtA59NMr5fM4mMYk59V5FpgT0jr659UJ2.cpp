
        
          if (flags.bit (CHECK_DAWGS) &&
    (word->best_choice->permuter () != SYSTEM_DAWG_PERM) &&
    (word->best_choice->permuter () != FREQ_DAWG_PERM) &&
    (word->best_choice->permuter () != USER_DAWG_PERM) &&
    (word->best_choice->permuter () != NUMBER_PERM)) {
    if (tessedit_adaption_debug) tprintf('word not in dawgs\n');
    return FALSE;
  }
    
    #include          'ocrblock.h'
#include          'ocrrow.h'
#include          'werd.h'
#include          'rect.h'
#include          'params.h'
#include          'tesseractclass.h'
    
    // Sets flags necessary for recognition in the training mode.
// Opens and returns the pointer to the output file.
FILE *Tesseract::init_recog_training(const STRING &fname) {
  if (tessedit_ambigs_training) {
    tessedit_tess_adaption_mode.set_value(0);    // turn off adaption
    tessedit_enable_doc_dict.set_value(0);       // turn off document dictionary
    // Explore all segmentations.
    getDict().stopper_no_acceptable_choices.set_value(1);
  }
    }
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     inT32 xsize,        //image size
                     inT32 ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    
    {}

    
      // ValidFirstLine() and ValidBodyLine() take arguments describing a text line
  // in a block of text which we are trying to model:
  //   lmargin, lindent:  these add up to the distance from the leftmost ink
  //                      in the text line to the surrounding text block's left
  //                      edge.
  //   rmargin, rindent:  these add up to the distance from the rightmost ink
  //                      in the text line to the surrounding text block's right
  //                      edge.
  // The caller determines the division between 'margin' and 'indent', which
  // only actually affect whether we think the line may be centered.
  //
  // If the amount of whitespace matches the amount of whitespace expected on
  // the relevant side of the line (within tolerance_) we say it matches.
    
    int64_t Timer::GetCurrentTimeMicros() {
  timeval tv;
  gettimeofday(&tv, 0);
  return to_usec(tv);
}
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  // We don't know for sure what's live.
  PhysRegSaver(v, abi().gpUnreserved - abi().calleeSaved);
    }
    
    
    {  int n = mbfl_substr_count(&mbs_haystack, &mbs_needle);
  if (n >= 0) {
    return n;
  }
  return false;
}
    
    void Clusterizer::clusterize() {
  struct ArcInfo {
    Vlabel  src;
    Vlabel  dst;
    int64_t wgt;
  };
  jit::vector<ArcInfo> arcInfos;
  for (auto b : m_blocks) {
    for (auto s : succs(m_unit.blocks[b])) {
      arcInfos.push_back({b, s, m_scale.weight(b, s)});
    }
  }
    }
    
    static JobQueueDispatcher<PageletWorker> *s_dispatcher;
static Mutex s_dispatchMutex;
static ServiceData::CounterCallback s_counters(
  [](std::map<std::string, int64_t>& counters) {
    counters['pagelet_inflight_requests'] = PageletServer::GetActiveWorker();
    counters['pagelet_queued_requests'] = PageletServer::GetQueuedJobs();
  }
);
    
    uint32_t numa_node_set;
uint32_t numa_num_nodes;
uint32_t numa_node_mask;
std::vector<bitmask*> node_to_cpu_mask;
bool use_numa = false;
bool threads_bind_local = false;
    
    void ThriftBuffer::write(const Object& data) {
  VariableSerializer vs(m_serializerType);
  String sdata = vs.serialize(VarNR(data), true);
  write(sdata);
}
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
     ********************************************************************/
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
    #undef MULT16_16_Q15_SUB
static inline int MULT16_16_Q15_SUB(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('msub $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    # if !defined(__OPTIMIZE__)
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(_mm_loadl_epi64((__m128i *)(x))))
# else
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(*(__m128i *)(x)))
# endif
    
    #endif // BOOST_ASIO_BUFFERED_STREAM_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/push_options.hpp>
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_WRITE_OP_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #endif // BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP

    
    template <typename Function, typename Context>
inline void invoke(Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    interrupter_.interrupt();
}
    
    
    {
    {
    {  return results;
}
}
}

    
    /// See FLAG, FLAG_ALIAS aliases a flag name to an existing FLAG.
#define FLAG_ALIAS(t, a, n) OSQUERY_FLAG_ALIAS(t, a, n, 0, 0)
    
     protected:
  /**
   * @brief The only method a plugin user should call.
   *
   * Registry plugins are used internally and externally. They may belong
   * to the process making the call or to an external process via a thrift
   * transport.
   *
   * All plugin input and output must be serializable. The plugin types
   * RegistryType usually exposes protected serialization methods for the
   * data structures used by plugins (registry items).
   *
   * @param item_name The plugin identifier to call.
   * @param request The plugin request, usually containing an action request.
   * @param response If successful, the requested information.
   * @return Success if the plugin was called, and response was filled.
   */
  virtual Status call(const std::string& item_name,
                      const PluginRequest& request,
                      PluginResponse& response);
    
    #include <gtest/gtest.h>
    
    namespace osquery {
    }