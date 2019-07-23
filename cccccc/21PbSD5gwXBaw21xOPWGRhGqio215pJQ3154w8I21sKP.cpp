
        
          const std::vector<std::string>& argv = electron::AtomCommandLine::argv();
  for (std::vector<std::string>::const_iterator it = argv.begin();
       it != argv.end(); ++it) {
    to_send.push_back(kTokenDelimiter);
    to_send.append(*it);
  }
    
    
    {}  // namespace api
    
    namespace api {
    }
    
    void ShowOpenDialogSync(const file_dialog::DialogSettings& settings,
                        mate::Arguments* args) {
  std::vector<base::FilePath> paths;
  if (file_dialog::ShowOpenDialogSync(settings, &paths))
    args->Return(paths);
}
    
      bool RegisterAll(const std::vector<ui::Accelerator>& accelerators,
                   const base::Closure& callback);
  bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterSome(const std::vector<ui::Accelerator>& accelerators);
  void UnregisterAll();
    
      // Generate goog.provides() calls.
  void FindProvides(const GeneratorOptions& options, io::Printer* printer,
                    const std::vector<const FileDescriptor*>& file,
                    std::set<std::string>* provided) const;
  void FindProvidesForFile(const GeneratorOptions& options,
                           io::Printer* printer, const FileDescriptor* file,
                           std::set<std::string>* provided) const;
  void FindProvidesForMessage(const GeneratorOptions& options,
                              io::Printer* printer, const Descriptor* desc,
                              std::set<std::string>* provided) const;
  void FindProvidesForEnum(const GeneratorOptions& options,
                           io::Printer* printer, const EnumDescriptor* enumdesc,
                           std::set<std::string>* provided) const;
  // For extension fields at file scope.
  void FindProvidesForFields(const GeneratorOptions& options,
                             io::Printer* printer,
                             const std::vector<const FieldDescriptor*>& fields,
                             std::set<std::string>* provided) const;
  // Print the goog.provides() found by the methods above.
  void GenerateProvides(const GeneratorOptions& options, io::Printer* printer,
                        std::set<std::string>* provided) const;
    
    
    {template<>
inline bool AlmostEquals(double a, double b) {
  return fabs(a - b) < 32 * DBL_EPSILON;
}
}  // namespace internal
    
    TEST_F(JsonObjectWriterTest, EmptyList) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartObject('')
      ->RenderString('test', 'value')
      ->StartList('empty')
      ->EndList()
      ->EndObject();
  EXPECT_EQ('{\'test\':\'value\',\'empty\':[]}', CloseStreamAndGetString());
}
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    void MapLiteTestUtil::SetMapFieldsInitialized(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFieldsInitialized(message);
}
    
    using google::protobuf::FieldDescriptor;
using google::protobuf::Message;
using google::protobuf::Reflection;
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
      // Since the basic IO manipulators are overloaded for both narrow
  // and wide streams, we have to provide this specialized definition
  // of operator <<, even though its body is the same as the
  // templatized version above.  Without this definition, streaming
  // endl or other basic IO manipulators to Message will confuse the
  // compiler.
  Message& operator <<(BasicNarrowIoManip val) {
    *ss_ << val;
    return *this;
  }
    
      ~NativeArray() {
    // Ensures that the user doesn't instantiate NativeArray with a
    // const or reference type.
    static_cast<void>(StaticAssertTypeEqHelper<Element,
        GTEST_REMOVE_REFERENCE_AND_CONST_(Element)>());
    if (relation_to_source_ == kCopy)
      delete[] array_;
  }
    
    template <GTEST_10_TYPENAMES_(T)>
struct tuple_size<GTEST_10_TUPLE_(T) > {
  static const int value = 10;
};
    
          // set the state tensors
      dimA[0] = param_.num_layers * (param_.bidirectional ? 2 : 1);
      dimA[1] = param_.batch_size_;
      dimA[2] = param_.state_size;
      strideA[0] = dimA[2] * dimA[1];
      strideA[1] = dimA[2];
      strideA[2] = 1;
      #if MXNET_USE_CUDNN_GE_7200
      int dimB[3];
      int strideB[3];
      dimB[0] = param_.num_layers * (param_.bidirectional ? 2 : 1);
      dimB[1] = param_.batch_size_;
      dimB[2] = param_.projection_size.has_value() ?
                param_.projection_size.value() : param_.state_size;
      strideB[0] = dimB[2] * dimB[1];
      strideB[1] = dimB[2];
      strideB[2] = 1;
      #endif
      #if MXNET_USE_CUDNN_GE_7200
      CUDNN_CALL(cudnnSetTensorNdDescriptor(hx_desc_,
                                            dtype_,
                                            3,
                                            dimB,
                                            strideB));
      #else
      CUDNN_CALL(cudnnSetTensorNdDescriptor(hx_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #endif
      CUDNN_CALL(cudnnSetTensorNdDescriptor(cx_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #if MXNET_USE_CUDNN_GE_7200
      CUDNN_CALL(cudnnSetTensorNdDescriptor(hy_desc_,
                                            dtype_,
                                            3,
                                            dimB,
                                            strideB));
      #else
      CUDNN_CALL(cudnnSetTensorNdDescriptor(hy_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #endif
      CUDNN_CALL(cudnnSetTensorNdDescriptor(cy_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #if MXNET_USE_CUDNN_GE_7200
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dhx_desc_,
                                            dtype_,
                                            3,
                                            dimB,
                                            strideB));
      #else
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dhx_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #endif
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dcx_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #if MXNET_USE_CUDNN_GE_7200
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dhy_desc_,
                                            dtype_,
                                            3,
                                            dimB,
                                            strideB));
      #else
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dhy_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
      #endif
      CUDNN_CALL(cudnnSetTensorNdDescriptor(dcy_desc_,
                                            dtype_,
                                            3,
                                            dimA,
                                            strideA));
    
    static bool FullyConnectedShape(const nnvm::NodeAttrs& attrs,
                                mxnet::ShapeVector *in_shape,
                                mxnet::ShapeVector *out_shape) {
  const FullyConnectedParam& param = nnvm::get<FullyConnectedParam>(attrs.parsed);
  using namespace mshadow;
  if (!param.no_bias) {
    CHECK_EQ(in_shape->size(), 3U) << 'Input:[data, weight, bias]';
  } else {
    CHECK_EQ(in_shape->size(), 2U) << 'Input:[data, weight]';
  }
  CHECK_EQ(out_shape->size(), 1U);
  mxnet::TShape dshape = (*in_shape)[fullc::kData];
  mxnet::TShape oshape = (*out_shape)[0];
  // require data to be known
  if (!mxnet::ndim_is_known(dshape)) return false;
    }
    
    #endif  // MXNET_USE_CUDA
    
                for (int l = 0; l < L; l++) {
              DType* weight_layer_n = workptr;  //  D * (H * D) * ngates * H
              auto user_weight_layer_memory_n
                  = mkldnn::memory({ user_weight_layer_md, cpu_engine }, weight_layer_n);
              op.wx_memory.push_back(user_weight_layer_memory_n);
    }
    
    template<typename DType, typename Rand>
void ShuffleND(DType* const out, const index_t size, const index_t first_axis_len,
                Rand* const prnd, const OpContext& ctx) {
  // Fisher-Yates shuffling
  using namespace mxnet_op;
  const index_t stride = size / first_axis_len;
  auto rand_n = [prnd](index_t n) {
    std::uniform_int_distribution<index_t> dist(0, n - 1);
    return dist(*prnd);
  };
  CHECK_GT(first_axis_len, 0U);
  const size_t stride_bytes = sizeof(DType) * stride;
  Tensor<cpu, 1, char> buf =
    ctx.requested[1].get_space_typed<cpu, 1, char>(Shape1(stride_bytes), ctx.get_stream<cpu>());
  for (index_t i = first_axis_len - 1; i > 0; --i) {
    const index_t j = rand_n(i + 1);
    if (i != j) {
      std::memcpy(buf.dptr_, out + stride * i, stride_bytes);
      std::memcpy(out + stride * i, out + stride * j, stride_bytes);
      std::memcpy(out + stride * j, buf.dptr_, stride_bytes);
    }
  }
}
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }