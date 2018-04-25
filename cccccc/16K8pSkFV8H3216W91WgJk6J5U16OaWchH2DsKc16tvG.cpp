
        
        
    {
    {    data_channel->broadcast(*int_tensor, group_ranks[0], group);
    ASSERT_TENSOR_VALUE(int, *int_tensor, 2000)
  } else {
    auto int_tensor = buildTensor({1, 2, 3, 4, 5}, 1000);
    data_channel->broadcast(*int_tensor, group_ranks[0], group);
    ASSERT_TENSOR_VALUE(int, *int_tensor, 1000)
  }
}
    
      for (auto s: tensor->sizes())
    assert(s == 2);
  for (int i = 0; i < 2; i++)
    assert(reinterpret_cast<float*>(tensor->data())[i] == 5);
    
    
    {template<> bool overflows<Half, double>(double f) {
  return f > 65504 || f < -65504;
}
template<> bool overflows<Half, int64_t>(int64_t f) {
  return f > 65504 || f < -65504;
}
} // namespace at

    
    bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    #include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/auto_gil.h'
#include 'torch/csrc/utils/python_scalars.h'
    
      Tensor dBias = at::zeros_like(bias);
  auto tmp = dOutput.sum(0, false);
  dBias.copy_(tmp.sum(0));
    
    #define THCPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPDoubleStorageClass)
#define THCPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPFloatStorageClass)
#define THCPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPHalfStorageClass)
#define THCPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPLongStorageClass)
#define THCPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPIntStorageClass)
#define THCPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPShortStorageClass)
#define THCPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPCharStorageClass)
#define THCPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPByteStorageClass)
    
      YGNodeStyleSetFlexShrink(child1, 1);
    
     public:
    
    
    {    YGNodeSetMeasureFunc(m_node, &globalMeasureFunc);
}
    
        method(markDirty);
    method(isDirty);
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
      T& operator*() const {
    return *m_ptr;
  }