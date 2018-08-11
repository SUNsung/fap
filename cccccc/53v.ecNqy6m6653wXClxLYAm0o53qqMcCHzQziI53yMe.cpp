
        
        #define THC_GENERIC_FILE 'torch/csrc/generic/utils.cpp'
#include <THC/THCGenerateAllTypes.h>
    
    PyObject * THPUtils_dispatchStateless(
    PyObject *tensor, const char *name, PyObject *args, PyObject *kwargs)
{
  THPObjectPtr methods(PyObject_GetAttrString(tensor, THP_STATELESS_ATTRIBUTE_NAME));
  if (!methods) {
    return PyErr_Format(
        PyExc_TypeError,
        'Type %s doesn't implement stateless methods',
        classOrTypename(tensor));
  }
  THPObjectPtr method(PyObject_GetAttrString(methods, name));
  if (!method) {
    return PyErr_Format(
        PyExc_TypeError,
        'Type %s doesn't implement stateless method %s',
        classOrTypename(tensor),
        name);
  }
  return PyObject_Call(method.get(), args, kwargs);
}
    
        auto* output_data = output->template mutable_data<float>();
    size_t block_size = input.size_from_dim(1);
    size_t n_blocks = input.dim(0);
    
    PyObject * THPWrapper_New(void *data, void (*destructor)(void*))
{
  PyObject *args = PyTuple_New(0);
  if (!args) {
    return NULL;
  }
  PyObject *result = PyObject_Call(THPWrapperClass, args, NULL);
  if (result) {
    THPWrapper* wrapper = (THPWrapper*) result;
    wrapper->data = data;
    wrapper->destructor = destructor;
  }
  Py_DECREF(args);
  return result;
}
    
    
    {    {Functions::exit, exitWorker}
};
    
    #pragma once
    
      ~HazptrLockFreeLIFO() {
    Node* next;
    for (auto node = head(); node; node = next) {
      next = node->next();
      node->retire();
    }
    hazptr_cleanup<Atom>();
  }
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
     public:
  WTCallback(PrivateConstructorTag, EventBase* base) : base_(base) {}
    
    /**
 * Declare *allocx() and mallctl*() as weak symbols. These will be provided by
 * jemalloc if we are using jemalloc, or will be nullptr if we are using another
 * malloc implementation.
 */
extern 'C' void* mallocx(size_t, int)
__attribute__((__weak__));
extern 'C' void* rallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t xallocx(void*, size_t, size_t, int)
__attribute__((__weak__));
extern 'C' size_t sallocx(const void*, int)
__attribute__((__weak__));
extern 'C' void dallocx(void*, int)
__attribute__((__weak__));
extern 'C' void sdallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t nallocx(size_t, int)
__attribute__((__weak__));
extern 'C' int mallctl(const char*, void*, size_t*, void*, size_t)
__attribute__((__weak__));
extern 'C' int mallctlnametomib(const char*, size_t*, size_t*)
__attribute__((__weak__));
extern 'C' int mallctlbymib(const size_t*, size_t, void*, size_t*, void*,
                            size_t)
__attribute__((__weak__));
    
    FOLLY_ALWAYS_INLINE int __builtin_popcount(unsigned int x) {
  return int(__popcnt(x));
}
    
    
    {  EXPECT_EQ(0, set->size());
  EXPECT_THROW(std::move(f).get(), std::runtime_error);
}

    
    TEST(NonCopyableLambda, Function) {
  Promise<int> promise;
    }