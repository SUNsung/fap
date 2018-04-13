
        
        #endif

    
    #include '../master_worker/common/RPC.hpp'
#include 'TH/THStorage.h'
    
    int64_t size(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.sizes()[dim];
}