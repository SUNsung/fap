
        
        #include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/auto_gil.h'
#include 'torch/csrc/utils/python_scalars.h'
    
    #undef THPTensor_
#undef THPTensor_stateless_
#undef THPTensor
#undef THPTensorStr
#undef THPTensorBaseStr
#undef THPTensorClass
    
    #endif
