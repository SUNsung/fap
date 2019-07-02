
        
        void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void add(const Size2D &size,
         const u32 * src0Base, ptrdiff_t src0Stride,
         const u32 * src1Base, ptrdiff_t src1Stride,
         u32 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u32, u64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u32, u64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    #endif
    
    namespace CAROTENE_NS {
    }
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
    namespace CAROTENE_NS {
    }
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
      // only define functions returning device_ptr
  // if HostDeviceVector.h is included from a .cu file
#ifdef __CUDACC__
  thrust::device_ptr<T> tbegin(int device);  // NOLINT
  thrust::device_ptr<T> tend(int device);  // NOLINT
  thrust::device_ptr<const T> tcbegin(int device) const;  // NOLINT
  thrust::device_ptr<const T> tcend(int device) const;  // NOLINT
  thrust::device_ptr<const T> tbegin(int device) const {  // NOLINT
    return tcbegin(device);
  }
  thrust::device_ptr<const T> tend(int device) const { return tcend(device); }  // NOLINT
    
    namespace xgboost {
namespace metric {
    }
    }
    
    
    {}  // namespace xgboost
    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher_.reset(TreeUpdater::Create('sync', tparam_));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
    syncher_->Init(args);
  }
  // update the tree, do pruning
  void Update(HostDeviceVector<GradientPair> *gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param_.learning_rate;
    param_.learning_rate = lr / trees.size();
    for (auto tree : trees) {
      this->DoPrune(*tree);
    }
    param_.learning_rate = lr;
    syncher_->Update(gpair, p_fmat, trees);
  }
    }
    
    
    {
    {  }
  {
    auto updater = std::unique_ptr<xgboost::LinearUpdater>(
        xgboost::LinearUpdater::Create('shotgun', &lparam));
    EXPECT_ANY_THROW(updater->Init({{'feature_selector', 'random'}}));
  }
  delete mat;
}