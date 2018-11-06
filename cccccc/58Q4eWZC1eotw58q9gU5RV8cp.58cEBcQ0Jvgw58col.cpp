
        
          for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    #include <Python.h>
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      static port::Status SynchronousMemcpyD2H(CudaContext* context, void* host_dst,
                                           CUdeviceptr gpu_src, uint64 size);
  static port::Status SynchronousMemcpyH2D(CudaContext* context,
                                           CUdeviceptr gpu_dst,
                                           const void* host_src, uint64 size);
  static port::Status SynchronousMemcpyD2D(CudaContext* context,
                                           CUdeviceptr gpu_dst,
                                           CUdeviceptr gpu_src, uint64 size);
    
    #else
    
    
    {	virtual PhysicsServer::JointType get_type() const = 0;
};
#endif

    
    #include 'func_ref.h'
    
    FileAccessZip::FileAccessZip(const String &p_path, const PackedData::PackedFile &p_file) {
    }
    
    template< bool Signed >
struct operations< 8u, Signed > :
    public msvc_arm_operations< typename make_storage_type< 8u, Signed >::type, operations< 8u, Signed > >
{
    typedef msvc_arm_operations< typename make_storage_type< 8u, Signed >::type, operations< 8u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 8u, Signed >::aligned aligned_storage_type;
    }
    
    #ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif