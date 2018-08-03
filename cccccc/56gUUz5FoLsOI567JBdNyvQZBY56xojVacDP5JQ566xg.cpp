
        
        #include 'hphp/runtime/base/execution-context.h'
#include 'hphp/util/struct-log.h'
#include 'hphp/util/timer.h'
#include 'hphp/util/trace.h'
    
    void startBase(ISS& env, Base base) {
  auto& oldState = env.state.mInstrState;
  assert(oldState.base.loc == BaseLoc::None);
  assert(oldState.arrayChain.empty());
  assert(isInitialBaseLoc(base.loc));
  assert(!env.state.mInstrStateDefine);
    }
    
    Type typeSub(Type t1, Type t2)  { return typeSubMulImpl(t1, t2, cellSub); }
Type typeMul(Type t1, Type t2)  { return typeSubMulImpl(t1, t2, cellMul); }
    
      int64_t bufferedLen() { return m_data->m_writepos - m_data->m_readpos; }
    
    #ifndef _MSC_VER
#include <glob.h>
#endif
    
    
    {
    {}}
    
      // Return a StringPiece of up to n characters pointing into m_buf
  folly::StringPiece readStr(unsigned n);
    
    #endif // BOOST_ASIO_DETAIL_CALL_STACK_HPP

    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
      // Erase a key from the map.
  void erase(const K& k)
  {
    iterator it = find(k);
    if (it != values_.end())
      erase(it);
  }
    
    #include <boost/asio/detail/config.hpp>
#include <cerrno>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/error.hpp>
    
    
    {
    {    // Re-register all descriptors with /dev/poll. The changes will be written
    // to the /dev/poll descriptor the next time the reactor is run.
    for (int i = 0; i < max_ops; ++i)
    {
      reactor_op_queue<socket_type>::iterator iter = op_queue_[i].begin();
      reactor_op_queue<socket_type>::iterator end = op_queue_[i].end();
      for (; iter != end; ++iter)
      {
        ::pollfd& pending_ev = add_pending_event_change(iter->first);
        pending_ev.events |= POLLERR | POLLHUP;
        switch (i)
        {
        case read_op: pending_ev.events |= POLLIN; break;
        case write_op: pending_ev.events |= POLLOUT; break;
        case except_op: pending_ev.events |= POLLPRI; break;
        default: break;
        }
      }
    }
    interrupter_.interrupt();
  }
}
    
    namespace apollo {
namespace perception {
    }
    }
    
    #include <memory>
#include <string>
    
    /**
 * @class Planner
 * @brief Planner is a base class for specific planners.
 *        It contains a pure virtual function Plan which must be implemented in
 * derived class.
 */
class Planner {
 public:
  /**
   * @brief Constructor
   */
  Planner() = default;
    }