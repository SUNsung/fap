
        
        std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status) {
  if (!PyList_Check(input_constant_tensor_values)) {
    TF_SetStatus(out_status, TF_INVALID_ARGUMENT, 'Invalid python value');
    return std::vector<string>();
  }
    }
    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Creates a tensor in 'ret' from the input Ndarray.
Status NdarrayToTensor(PyObject* obj, Tensor* ret);
    
    #ifndef PyObject_HEAD
struct _object;
typedef _object PyObject;
#endif
    
    string TryFindKernelClass(const string& serialized_node_def) {
  tensorflow::NodeDef node_def;
  if (!node_def.ParseFromString(serialized_node_def)) {
    LOG(WARNING) << 'Error parsing node_def';
    return '';
  }
    }
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor
    
    // Specifies FFT input and output types, and the direction.
// R, D, C, and Z stand for SP real, DP real, SP complex, and DP complex.
enum class Type {
  kInvalid,
  kC2CForward,
  kC2CInverse,
  kC2R,
  kR2C,
  kZ2ZForward,
  kZ2ZInverse,
  kZ2D,
  kD2Z
};
    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
    
    {  ScrollView* sv_window_;
};
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    namespace tesseract {
    }
    
      // Update the other members if the cost is lower.
  void UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                      int32_t n, int32_t sig_x, int64_t sig_xsq);