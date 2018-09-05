  // Thread local context for Caffe. Moved to common.cpp instead of
  // including boost/thread.hpp to avoid a boost/NVCC issues (#1009, #1010)
  // on OSX. Also fails on Linux with CUDA 7.0.18.
  static Caffe& Get();
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
    #include <vector>
    
    namespace caffe {
    }
    
    // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
    
    {  T0 f0_;
};
    
    
$range i 1..n
template <$for i, [[typename T$i]]>
struct TypeList<Types<$for i, [[T$i]]> > {
  typedef typename Types<$for i, [[T$i]]>::type type;
};
    
      ////////////////////////////////////////////////////////////
  //
  // C'tors
    
      s.Set(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file operator.h
 * \brief Operator interface of mxnet.
 * \author Naiyan Wang
 */
#ifndef MXNET_OPERATOR_H_
#define MXNET_OPERATOR_H_
    
    
    { private:
  // destructor
  ~SimpleOpRegistry();
  /*! \brief internal registry map */
  std::map<std::string, SimpleOpRegEntry*> fmap_;
};
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
        // Init caffe's gradient pointer
    if (!init_wd_) {
      init_wd_ = true;
      caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Grad,
                                         wei_.begin(),
                                         in_grad.begin() + param_.num_data,
                                         param_.num_weight);
    }
    
    namespace mxnet {
namespace engine {
    }
    }
    
        float i = sinf(za) * cosf(xa) * r + _center.x;
    float j = sinf(za) * sinf(xa) * r + _center.y;
    float k = cosf(za) * r + _center.z;
    
    bool CatmullRomBy::initWithDuration(float dt, PointArray *points)
{
    if (CardinalSplineTo::initWithDuration(dt, points, 0.5f))
    {
        return true;
    }
    
    return false;
}
    
        /** Inserts a controlPoint at index.
     *
     * @js NA
     * @param controlPoint A control point.
     * @param index Insert the point to array in index.
     */
    void insertControlPoint(const Vec2& controlPoint, ssize_t index);
    
    EASEELASTIC_TEMPLATE_IMPL(EaseElasticIn, tweenfunc::elasticEaseIn, EaseElasticOut);
EASEELASTIC_TEMPLATE_IMPL(EaseElasticOut, tweenfunc::elasticEaseOut, EaseElasticIn);
EASEELASTIC_TEMPLATE_IMPL(EaseElasticInOut, tweenfunc::elasticEaseInOut, EaseElasticInOut);
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, waves, amplitude, horizontal, vertical))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
    // implementation of ProgressFromTo
    
    bool AtlasNode::initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender)
{
    _itemWidth  = tileWidth;
    _itemHeight = tileHeight;
    }
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      virtual Status NewLogger(const std::string& fname,
                           shared_ptr<Logger>* result) override {
    auto status_and_enc_path = EncodePathWithNewBasename(fname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::NewLogger(status_and_enc_path.second, result);
  }
    
      // Store the size of fname in *file_size.
  virtual Status GetFileSize(const std::string& fname, uint64_t* file_size) override {
    auto status = EnvWrapper::GetFileSize(fname, file_size);
    if (!status.ok()) {
      return status;
    }
    size_t prefixLength = provider_->GetPrefixLength();
    assert(*file_size >= prefixLength);
    *file_size -= prefixLength;
    return Status::OK();    
  }
    
    // A wrapper for fadvise, if the platform doesn't support fadvise,
// it will simply return 0.
int Fadvise(int fd, off_t offset, size_t len, int advice) {
#ifdef OS_LINUX
  return posix_fadvise(fd, offset, len, advice);
#else
  (void)fd;
  (void)offset;
  (void)len;
  (void)advice;
  return 0;  // simply do nothing.
#endif
}
    
      virtual Status CreateDirIfMissing(const std::string& dirname) override;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #include 'guetzli/stats.h'
    
    namespace guetzli {
    }
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        return static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR64(&storage, v));
    }
    
    template< >
struct make_storage_type< 1u, true >
{
    typedef mars_boost::int8_t type;
    }