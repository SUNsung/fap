
        
          if (nDimension != self->nDimension)
    hasRequiredSize = false;
    
    
    {  delete tensor;
  delete tensor2;
  cout << 'OK' << endl;
  return 0;
}

    
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
    
    int ${Storage}::getDevice() const {
  ${storage_device} //storage->device;
}
    
    int64_t ${Tensor}::dim() const {
  if(isScalar())
    return 0;
  int64_t d = ${THTensor_nDimension};
  // See Note [Empty versus 0-dim tensors]
  if (d != 0)
    return d;
  return kEmptySizes.size();
}
    
    namespace torch { namespace utils {
    }
    }