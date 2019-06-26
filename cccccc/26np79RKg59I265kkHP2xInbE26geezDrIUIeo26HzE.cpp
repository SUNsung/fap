
        
        #include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
    
    
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    </details>
    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      /**
   * @brief Does layer-specific setup: your layer should implement this function
   *        as well as Reshape.
   *
   * @param bottom
   *     the preshaped input blobs, whose data fields store the input data for
   *     this layer
   * @param top
   *     the allocated but unshaped output blobs
   *
   * This method should do one-time layer specific setup. This includes reading
   * and processing relevent parameters from the <code>layer_param_</code>.
   * Setting up the shapes of top blobs and internal buffers should be done in
   * <code>Reshape</code>, which will be called before the forward pass to
   * adjust the top blob sizes.
   */
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
     public:
  // Constructs an empty Message.
  Message();
    
    namespace testing {
    }
    
     private:
  // A string containing a description of the outcome of the last death test.
  static std::string last_death_test_message_;
    
      // Static methods
    
    template <GTEST_6_TYPENAMES_(T)>
inline GTEST_6_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5) {
  return GTEST_6_TUPLE_(T)(f0, f1, f2, f3, f4, f5);
}
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    
    {}  // namespace grpc
    
      Status GetFileContainingExtension(
      ServerContext* context,
      const reflection::v1alpha::ExtensionRequest* request,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  gpr_log(GPR_ERROR,
          'Platforms other than Linux, Windows, and MacOS are not supported.');
  return std::make_pair(busy, total);
}
    
    #include '2d/CCActionInstant.h'
#include '2d/CCNode.h'
#include '2d/CCSprite.h'
    
        void removeActionAtIndex(ssize_t index, struct _hashElement *element);
    void deleteHashElement(struct _hashElement *element);
    void actionAllocWithHashElement(struct _hashElement *element);
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
}
    
        /**
    @brief Show part of the tile.
    @param pos The position index of the tile should be shown.
    @param distance The percentage that the tile should be shown.
    */
    virtual void transformTile(const Vec2& pos, float distance);
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    void ClippingRectangleNode::onBeforeVisitScissor()
{
    if (_clippingEnabled) {
        glEnable(GL_SCISSOR_TEST);
    }
    }
    
    /**
@brief Clipping Rectangle Node.
@details A node that clipped with specified rectangle.
 The region of ClippingRectangleNode doesn't support any transform except scale.
@js NA
*/
class CC_DLL ClippingRectangleNode : public Node
{    
public:
    /**
    @brief Create node with specified clipping region.
    @param clippingRegion Specify the clipping rectangle.
    @return If the creation success, return a pointer of ClippingRectangleNode; otherwise return nil.
    */
    static ClippingRectangleNode* create(const Rect& clippingRegion);
    /**
    @brief Create a clipping rectangle node.
    @return If the creation success, return a pointer of ClippingRectangleNode; otherwise return nil.
    */
    static ClippingRectangleNode* create();
    
    /**
    @brief Get the clipping rectangle.
    @return The clipping rectangle.
    */
    const Rect& getClippingRegion() const {
        return _clippingRegion;
    }
    /**
    @brief Set the clipping rectangle.
    @param clippingRegion Specify the clipping rectangle.
    */
    void setClippingRegion(const Rect& clippingRegion);
    
    /**
    @brief Get whether the clipping is enabled or not.
    @return Whether the clipping is enabled or not. Default is true.
    */
    bool isClippingEnabled() const {
        return _clippingEnabled;
    }
    }
    
    NS_CC_END

    
        virtual void onEnter();
    virtual void onExit();
    virtual void onAdd();
    virtual void onRemove();
    
        /** Unload all texture atlas texture create by special file name.
     CAUTION : All component use this font texture should be reset font name, though the file name is same!
               otherwise, it will cause program crash!
    */
    static void unloadFontAtlasTTF(const std::string& fontFileName);
    
    
    {};
    
      QJsonDocument jsonConfig = QJsonDocument::fromJson(data);
    
    void TabViewModel::setCurrentTab(int i) { m_currentTabIndex = i; }
    
    template <class T>
TabViewModel::ModelFactory getTabModelFactory() {
  return TabViewModel::ModelFactory(
      [](QSharedPointer<RedisClient::Connection> c, int dbIndex) {
        return QSharedPointer<TabModel>(new T(c, dbIndex),
                                        &QObject::deleteLater);
      });
}

    
    // Creates a strong reference from a raw pointer, assuming that it points to a
// freshly-created object. See the documentation for RefPtr for usage.
template <typename T>
static inline RefPtr<T> adoptRef(T* ptr) {
  return RefPtr<T>::adoptRef(ptr);
}
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
      // Define a method that calls into the represented Java class
  local_ref<JFile::javaobject> getCacheDir() {
    static auto method = getClass()->getMethod<JFile::javaobject()>('getCacheDir');
    return method(self());
  }
    
    class JFile : public JavaClass<JFile> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/io/File;';
    }
    
    
    {
    {
} // namespace jni
} // namespace facebook
