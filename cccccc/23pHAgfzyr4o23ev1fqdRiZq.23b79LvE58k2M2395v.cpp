
        
        #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    namespace caffe {
    }
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    template <typename T>
template <typename Tag, typename VaultTag>
SingletonHolder<T>& SingletonHolder<T>::singleton() {
  /* library-local */ static auto entry =
      createGlobal<SingletonHolder<T>, std::pair<Tag, VaultTag>>([]() {
        return new SingletonHolder<T>({typeid(T), typeid(Tag)},
                                      *SingletonVault::singleton<VaultTag>());
      });
  return *entry;
}
    
      void registerSingleton(CreateFunc c, TeardownFunc t);
  void registerSingletonMock(CreateFunc c, TeardownFunc t);
  bool hasLiveInstance() override;
  void createInstance() override;
  bool creationStarted() override;
  void preDestroyInstance(ReadMostlyMainPtrDeleter<>&) override;
  void destroyInstance() override;
    
    Init::Init(int* argc, char*** argv, bool removeFlags) {
  init(argc, argv, removeFlags);
}
    
      int curErrNo = errno;
  if (lseek(fd, origLoc, SEEK_SET) == (off_t)-1) {
    if (res == -1) {
      errno = curErrNo;
    }
    return -1;
  }
  errno = curErrNo;
    
    // If we are targeting a mobile device, do not use thread caching as a
// precaution. Performance is potentially suboptimal without thread
// local support
#if FOLLY_MOBILE
#define HAZPTR_TC false
#else
#define HAZPTR_TC true
#endif
#endif
    
    /**
 * AllocatorHasTrivialDeallocate
 *
 * Unambiguously inherits std::integral_constant<bool, V> for some bool V.
 *
 * Describes whether a C++ Aallocator has trivial, i.e. no-op, deallocate().
 *
 * Also may be used to describe types which may be used with
 * CxxAllocatorAdaptor.
 */
template <typename Alloc>
struct AllocatorHasTrivialDeallocate : std::false_type {};
    
    using namespace folly;
    
    TEST(NonCopyableLambda, unique_ptr) {
  Promise<Unit> promise;
  auto int_ptr = std::make_unique<int>(1);
    }