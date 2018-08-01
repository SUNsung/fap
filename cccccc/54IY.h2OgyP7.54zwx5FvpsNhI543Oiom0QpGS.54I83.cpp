
        
        - (void)appendAction:(ObjectBehaviorAction)action;
- (void)enumerate:(void (^)(ObjectBehaviorAction))block;
- (void)reset;
- (void)dump;
@end
    
    
    {
    {}
}
#endif

    
    namespace swift {
    }
    
    /// A shorthand to clearly indicate that a value is a reference counted and
/// heap-allocated.
template <typename Inner>
using RC = llvm::IntrusiveRefCntPtr<Inner>;
    
    #endif // SWIFT_INDEX_INDEX_H

    
    protected:
  /// The base of the object.
  SILValue Base;
  /// Empty key, tombstone key or normal key.
  KeyKind Kind;
  /// The path to reach the accessed field of the object.
  Optional<ProjectionPath> Path;
    
      /// True if this is the active clause of the #if block.
  bool isActive;
    
    /// Optimizer that requires the loss function to be supplied to the `step()`
/// function, as it may evaluate the loss function multiple times per step.
/// Examples of such algorithms are conjugate gradient and LBFGS. The `step()`
/// function also returns the loss value.
class LossClosureOptimizer : public detail::OptimizerBase {
 public:
  /// A loss function closure, which is expected to return the loss value.
  using LossClosure = std::function<Tensor()>;
  using detail::OptimizerBase::OptimizerBase;
  virtual Tensor step(LossClosure closure) = 0;
};
    
    OptimizerBase::OptimizerBase(const ParameterCursor& cursor) {
  add_parameters(cursor);
}
    
    Tensor rfft(const Tensor& self, const int64_t signal_ndim, const bool normalized,
            const bool onesided) {
  return _fft(self, signal_ndim, /* complex_input */ false,
              /* complex_output */ true, /* inverse */ false, {}, normalized,
              onesided);
}
    
    PyObject *THPDevice_repr(THPDevice *self)
{
  std::ostringstream oss;
  oss << 'device(type=\'' << self->device.type() << '\'';
  if (self->device.has_index()) {
    oss << ', index=' << self->device.index();
  }
  oss << ')';
  return THPUtils_packString(oss.str().c_str());
}
    
    #include 'override_macros.h'
    
    THLongStoragePtr THPUtils_unpackSize(PyObject *arg) {
  THLongStoragePtr result;
  if (!THPUtils_tryUnpackLongs(arg, result)) {
    std::string msg = 'THPUtils_unpackSize() expects a torch.Size (got '';
    msg += Py_TYPE(arg)->tp_name;
    msg += '')';
    throw std::runtime_error(msg);
  }
  return result;
}
    
    Tensor logdet(const Tensor& self) {
  AT_CHECK(at::isFloatingType(self.type().scalarType()) &&
           self.dim() == 2 && self.size(0) == self.size(1),
           'logdet(', self.type(), '{', self.sizes(), '}): expected a 2D square tensor '
           'of floating types');
  double det_P;
  Tensor diag_U, det;
  int info;
  std::tie(det_P, diag_U, info) = _lu_det_P_diag_U_info(self);
  if (info > 0) {
    det = at::zeros({}, self.type());
  } else {
    det = diag_U.prod().mul_(det_P);
  }
  if (det.sign().toCDouble() <= 0) {
    return det.log_();  // in order to get proper -inf (det=0) or nan (det<0)
  } else {
    return diag_U.abs().log().sum();
  }
}
    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
      if (!getenv('HHVM_JIT_TIMER_NO_SORT')) {
    auto totalSort = [] (const TimerName& a, const TimerName& b) {
      return s_counters[a.name].total > s_counters[b.name].total;
    };
    std::sort(begin(names_copy), end(names_copy), totalSort);
  }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    BumpAllocState::BumpAllocState(uintptr_t base, size_t maxCap, LockPolicy p)
  : m_base(base)
  , m_maxCapacity(maxCap)
  , m_lockPolicy(p) {
  auto ret = mmap((void*)base, maxCap, PROT_NONE,
                  MAP_ANONYMOUS | MAP_PRIVATE | MAP_NORESERVE,
                  -1, 0);
  if (ret != (void*)base) {
    char msg[128];
    if (ret == MAP_FAILED) {
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%' PRIxPTR
                    ' to 0x%' PRIxPTR ', errno = %d',
                    base, base + maxCap, errno);
    } else {
      munmap(ret, maxCap);
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%' PRIxPTR
                    ' to 0x%' PRIxPTR ', got 0x%p instead',
                    base, base + maxCap, ret);
    }
    throw std::runtime_error{msg};
  }
}
    
    
    {  BumpExtentAllocator* extAlloc = GetByArenaId<BumpExtentAllocator>(arena_ind);
  do {
    size_t oldSize = extAlloc->m_size.load(std::memory_order_relaxed);
    uintptr_t ret = (extAlloc->m_base + oldSize + alignment - 1) & mask;
    size_t newSize = ret + size - extAlloc->m_base;
    if (newSize <= extAlloc->m_currCapacity) {
      // Looks like existing capacity is enough.
      if (extAlloc->m_size.compare_exchange_weak(oldSize, newSize)) {
        *zero = true;
        *commit = true;
        return reinterpret_cast<void*>(ret);
      }
    } else {
      if (newSize > extAlloc->m_maxCapacity) return nullptr;
      if (extAlloc->m_lockPolicy != LockPolicy::Blocking) {
        if (!extAlloc->m_mutex.try_lock()) {
          return nullptr;
        }
      } else {
        extAlloc->m_mutex.lock();
      }
      bool succ = extAlloc->m_mapper &&
        extAlloc->m_mapper->addMapping(*extAlloc, newSize);
      extAlloc->m_mutex.unlock();
      if (!succ) return nullptr;
    }
  } while (true);
  not_reached();
}
    
      auto src  = getUseVars();
  auto dest = ret->getUseVars();
  auto const nProps = cls->numDeclProperties();
  auto const stop = src + nProps;
  for (; src != stop; ++src, ++dest) {
    tvDup(*src, *dest);
  }
    
      Class* getClass() const {
    return LIKELY(hdr()->ctxIsClass()) ?
      reinterpret_cast<Class*>(hdr()->ctx_bits & ~ClosureHdr::kClassBit) :
      nullptr;
  }
  void setClass(Class* cls) {
    assertx(cls);
    hdr()->ctx_bits = reinterpret_cast<uintptr_t>(cls) | ClosureHdr::kClassBit;
  }
  bool hasClass() const { return hdr()->ctxIsClass(); }
    
    
    
    
    {        ok &= luaval_to_uint32(tolua_S, 2,&arg0, 'cc.SimpleAudioEngine:stopEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect'', nullptr);
            return 0;
        }
        cobj->stopEffect(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:stopEffect',argc, 1);
    return 0;
    
    
    
    int register_all_cocos2dx_csloader(lua_State* tolua_S);
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(1,1);
    
    class ApplyForce : public Test
{
public:
	ApplyForce()
	{
		m_world->SetGravity(b2Vec2(0.0f, 0.0f));
    }
    }
    
    
    { private:
  /* Used by the single writer */
  void locate_lower_bound(const T& v, Atom<Node*>*& prev) const {
    auto curr = prev->load(std::memory_order_relaxed);
    while (curr) {
      if (curr->elem_ >= v) {
        break;
      }
      prev = &(curr->next_);
      curr = curr->next_.load(std::memory_order_relaxed);
    }
    return;
  }
};
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    #include <folly/MPMCQueue.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
    
    FOLLY_ALWAYS_INLINE int __builtin_ctzl(unsigned long x) {
  return __builtin_ctz((unsigned int)x);
}
    
    
    {  HANDLE h = (HANDLE)_get_osfhandle(fd);
  if (h == INVALID_HANDLE_VALUE) {
    return -1;
  }
  if (!SetEndOfFile(h)) {
    return -1;
  }
  return 0;
}
    
    
    {  EXPECT_EQ(1, estimates.quantiles[0].second);
  EXPECT_EQ(2.0 - 0.5, estimates.quantiles[1].second);
  EXPECT_EQ(50.375, estimates.quantiles[2].second);
  EXPECT_EQ(100.0 - 0.5, estimates.quantiles[3].second);
  EXPECT_EQ(100, estimates.quantiles[4].second);
}