
        
          WebView* view = frame->view();
  if (!view)
    return NULL;  // can happen during closing.
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
     private:
  // RenderViewObserver implementation.
   bool OnMessageReceived(const IPC::Message& message) override;
   void DraggableRegionsChanged(blink::WebFrame* frame) override;
   void DidFinishDocumentLoad(blink::WebLocalFrame* frame) override;
   void DidCreateDocumentElement(blink::WebLocalFrame* frame) override;
    
    namespace content {
class Shell;
}
    
    MenuDelegate::MenuDelegate(ObjectManager* object_manager)
    : object_manager_(object_manager) {
}
    
    void MenuItem::Create(const base::DictionaryValue& option) {
  std::string type;
  option.GetString('type', &type);
  submenu_ = NULL;
  gtk_accel_group = NULL;
    }
    
    void MenuItem::SetIcon(const std::string& icon) {
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  is_modified_ = true;
  if (icon.empty()) {
    icon_ = gfx::Image();
    return;
  }
    }
    
    #include <folly/Chrono.h>
#include <folly/portability/GTest.h>
#include <folly/portability/Time.h>
    
    
    {
    {size_t qfind_first_byte_of_byteset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  SparseByteSet s;
  for (auto needle : needles) {
    s.add(uint8_t(needle));
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s.contains(uint8_t(haystack[index]))) {
      return index;
    }
  }
  return std::string::npos;
}
} // namespace detail
} // namespace folly

    
    
    {// Convert the key to int64_t (good for arrays).
//
// int64_t, folly::dynamic (no conversion of value)
template <typename Fn> EnableForArgTypes<Fn, int64_t, folly::dynamic>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k.asInt(), v);
}
// int64_t, int64_t
template <typename Fn> EnableForArgTypes<Fn, int64_t, int64_t>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k.asInt(), v.asInt());
}
// int64_t, bool
template <typename Fn> EnableForArgTypes<Fn, int64_t, bool>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k.asInt(), v.asBool());
}
// int64_t, double
template <typename Fn> EnableForArgTypes<Fn, int64_t, double>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k.asInt(), v.asDouble());
}
// int64_t, std::string
template <typename Fn> EnableForArgTypes<Fn, int64_t, std::string>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k.asInt(), v.asString());
}
} // namespace detail
    
      /*
   * find --
   *
   *
   *   Returns the iterator to the element if found, otherwise end().
   *
   *   As an optional feature, the type of the key to look up (LookupKeyT) is
   *   allowed to be different from the type of keys actually stored (KeyT).
   *
   *   This enables use cases where materializing the key is costly and usually
   *   redudant, e.g., canonicalizing/interning a set of strings and being able
   *   to look up by StringPiece. To use this feature, LookupHashFcn must take
   *   a LookupKeyT, and LookupEqualFcn must take KeyT and LookupKeyT as first
   *   and second parameter, respectively.
   *
   *   See folly/test/ArrayHashArrayTest.cpp for sample usage.
   */
  template <
      typename LookupKeyT = key_type,
      typename LookupHashFcn = hasher,
      typename LookupEqualFcn = key_equal>
  iterator find(LookupKeyT k) {
    return iterator(this,
        findInternal<LookupKeyT, LookupHashFcn, LookupEqualFcn>(k).idx);
  }
    
      if (tryLockMap(nextMapIdx)) {
    // Alloc a new map and shove it in.  We can change whatever
    // we want because other threads are waiting on us...
    size_t numCellsAllocated = (size_t)
      (primarySubMap->capacity_ *
       std::pow(1.0 + kGrowthFrac_, nextMapIdx - 1));
    size_t newSize = size_t(numCellsAllocated * kGrowthFrac_);
    DCHECK(subMaps_[nextMapIdx].load(std::memory_order_relaxed) ==
      (SubMap*)kLockedPtr_);
    // create a new map using the settings stored in the first map
    }
    
      /**
   * Similar to sweep() but calls func() on elements in LIFO order.
   *
   * func() is called for all elements in the list at the moment
   * reverseSweep() is called.  Unlike sweep() it does not loop to ensure the
   * list is empty at some point after the last invocation.  This way callers
   * can reason about the ordering: elements inserted since the last call to
   * reverseSweep() will be provided in LIFO order.
   *
   * Example: if elements are inserted in the order 1-2-3, the callback is
   * invoked 3-2-1.  If the callback moves elements onto a stack, popping off
   * the stack will produce the original insertion order 1-2-3.
   */
  template <typename F>
  void reverseSweep(F&& func) {
    list_.reverseSweep([&](Wrapper* wrapperPtr) mutable {
      std::unique_ptr<Wrapper> wrapper(wrapperPtr);
    }
    }
    
    
    {    void* p = dlsym(m_handle, '__vdso_clock_gettime');
    if (p) {
      folly::chrono::clock_gettime = (int (*)(clockid_t, timespec*))p;
    }
    p = dlsym(m_handle, '__vdso_clock_gettime_ns');
    if (p) {
      folly::chrono::clock_gettime_ns = (int64_t(*)(clockid_t))p;
    }
  }
    
    #include <folly/Portability.h>