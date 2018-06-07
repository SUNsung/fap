
        
        #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_

    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {}  // namespace xla

    
    // See docs in ../ops/io_ops.cc.
    
    class TensorSlice {
 public:
  // Construct a tensor slice: you have a number of ways:
  // -- creating an empty slice
  // -- from just a dimension (in this case it will create a full slice)
  // -- from an array of pairs of integers.
  // -- from a TensorSliceProto protocol buffer
  // -- from a string format of 'start,length:start,length...' where each
  //    'start,length' pair represents the slice on one dimension. We allow a
  //    special '-' that means 'everything for this dimension'. One such example
  //    is:  0,10:-:14,1:-:-
  TensorSlice() {}
  explicit TensorSlice(int dim);
  explicit TensorSlice(const TensorSliceProto& proto);
  explicit TensorSlice(std::initializer_list<std::pair<int64, int64>> extents);
    }
    
    namespace tensorflow {
namespace functor {
DEFINE_UNARY2(get_angle, complex64, complex128);
}  // namespace functor
}  // namespace tensorflow
    
    // //////////////////////////////////////////////////////////////////////
// End of content of file: include/json/value.h
// //////////////////////////////////////////////////////////////////////
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateRegistrationCode(io::Printer* printer);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
     private:
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    #endif  // TEST_QPS_TIMER_H

    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
      // gRPC Python
  grpc_python_generator::GeneratorConfiguration grpc_py_config;
  grpc_python_generator::PythonGrpcGenerator grpc_py_generator(grpc_py_config);
  cli.RegisterGenerator('--grpc_python_out', &grpc_py_generator,
                        'Generate Python source file.');
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }
    
      // Only allow implicit upcasts. A downcast will result in a compile error
  // unless you use static_cast (which will end up invoking the explicit
  // operator below).
  template <typename U>
  RefPtr(RefPtr<U>&& ref, typename std::enable_if<std::is_base_of<T,U>::value, U>::type* = nullptr) :
    m_ptr(nullptr)
  {
    *this = std::move(ref);
  }
    
      T* release() {
    T* obj = get();
    pthread_setspecific(m_key, NULL);
    return obj;
  }
    
    inline local_ref<jobject> autobox(alias_ref<jobject> val) {
  return make_local(val);
}