
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_

    
    
    {}  // namespace tensorflow
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_tanh_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost * 1,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
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
    
    
    {
    {}  // namespace tpu
}  // namespace tensorflow

    
      ASSERT_FALSE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch2, kGrpcUrl1, true)}));
  ASSERT_TRUE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch2, kGrpcUrl1, false)}));
    
    #ifndef TENSORFLOW_DEBUG_GRPC_TESTLIB_H_
#define TENSORFLOW_DEBUG_GRPC_TESTLIB_H_
    
    
    {  GetReporter()->ReportQPS(*result);
  GetReporter()->ReportLatency(*result);
}
    
    #include <signal.h>
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    #include <string>
    
    
    {  const Result start_;
};
    
    
    {        // loop through the different passes, processing as we go
        // skipThrough (when not null) is a pointer to the following structure in the NetNdl class:
        //     NDLNode<ElemType>* lastNode[ndlPassMax]; // last node we evaluated for each pass
        NDLNode<ElemType>* lastNode = nullptr;
        for (NDLPass ndlPass = ndlPassInitial; ndlPass <= ndlPassUntil; ++ndlPass)
        {
            NDLNode<ElemType>* skipThroughNode = skipThrough ? *skipThrough : nullptr;
            lastNode = ProcessPassNDLScript(script, ndlPass, skipThroughNode, fullValidate, dumpFileName);
            if (skipThrough)
            {
                *skipThrough = lastNode;
                skipThrough++;
            }
        }
    }
    
    // The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DATAWRITER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DATAWRITER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef _WIN32
#if defined(DATAWRITER_EXPORTS)
#define DATAWRITER_API __declspec(dllexport)
#elif defined(DATAWRITER_LOCAL)
#define DATAWRITER_API
#else
#define DATAWRITER_API __declspec(dllimport)
#endif
#else
#define DATAWRITER_API
#endif
    
    
    {public:
    inline hardcoded_array() throw()
    {
    }
    inline hardcoded_array(size_t n) throw()
    {
        check_size(n);
    } // we can instantiate with a size parameter--just checks the size
    inline hardcoded_array(size_t n, const _T& val) throw()
    {
        check_size(n);
        for (size_t i = 0; i < n; i++)
            data[i] = val;
    }
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return _N;
    }
};

    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    
    
    			b2PolygonShape shape;
			shape.Set(vertices, 3);
    
    #include <cstdint>
#include <iosfwd>
#include <typeinfo>
#include <vector>
    
    TEST_F(OrderingTest, to_ordering) {
  EXPECT_EQ(ordering::lt, to_ordering(int(ordering::lt)));
  EXPECT_EQ(ordering::eq, to_ordering(int(ordering::eq)));
  EXPECT_EQ(ordering::gt, to_ordering(int(ordering::gt)));
    }
    
    #include <folly/CPortability.h>
#include <folly/Optional.h>
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
     public:
  HazptrWideCAS() : node_(new Node()) {}
    
    
    {  // equal_range
  for (auto value : {buddy, hello, stake, world, zebra}) {
    EXPECT_TRUE(
        std::make_pair(s.lower_bound(value), s.upper_bound(value)) ==
        s.equal_range(value))
        << value;
  }
}
    
    #ifndef __APPLE__ // TODO #7372389
/// Simple executor that does work in another thread
class ThreadExecutor : public Executor {
  folly::MPMCQueue<Func> funcs;
  std::atomic<bool> done {false};
  std::thread worker;
  folly::Baton<> baton;
    }
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
      /// Set (list: key)[idx] = val. Return true on success, false on fail
  /// May throw RedisListException
  bool Set(const std::string& key, int32_t index, const std::string& value);
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
      if(m_jSliceB != nullptr) {
    env->DeleteGlobalRef(m_jSliceB);
  }
    
    
    {} // namespace aria2
    
    #include 'AbstractCommand.h'
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    #include 'Notifier.h'
    
      virtual bool good() const CXX11_OVERRIDE { return true; }