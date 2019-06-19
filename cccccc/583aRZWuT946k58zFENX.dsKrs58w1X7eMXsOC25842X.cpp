
        
        // Hash function for PyBfloat16. We use the identity function, which is a weak
// hash function.
HashType PyBfloat16_Hash(PyObject* self) {
  bfloat16 x = reinterpret_cast<PyBfloat16*>(self)->value;
  return x.value;
}
    
    #include <Python.h>
    
    namespace tensorflow {
    }
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
      // Computes real-to-complex FFT in forward direction.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<float> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<double> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    namespace stream_executor {
namespace host {
    }
    }
    
      // Begins the timer at the present point in the stream.
  bool Start(Stream *stream);
    
      // Indicates a preference for more L1 cache than shared memory.
  kPreferL1,