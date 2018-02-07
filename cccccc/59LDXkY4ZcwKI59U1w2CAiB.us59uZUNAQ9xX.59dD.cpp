
        
          /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See data_layer.cpp for an example.
   */
  void Transform(const Datum& datum, Blob<Dtype>* transformed_blob);
    
    
    {}  // namespace caffe
    
    namespace caffe {
    }
    
    
    {  int size_;
  Dtype alpha_, beta_, k_;
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
      /**
   * @brief Computes the error gradient w.r.t. the exp inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \frac{\partial E}{\partial y} y \alpha \log_e(gamma)
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    TEST(LogTest, RandomRead) {
  const int N = 500;
  Random write_rnd(301);
  for (int i = 0; i < N; i++) {
    Write(RandomSkewedString(i, &write_rnd));
  }
  Random read_rnd(301);
  for (int i = 0; i < N; i++) {
    ASSERT_EQ(RandomSkewedString(i, &read_rnd), Read());
  }
  ASSERT_EQ('EOF', Read());
}
    
    #include 'db/version_edit.h'
#include 'util/testharness.h'
    
    class Env;
    
    class MemEnvTest {
 public:
  Env* env_;
    }
    
        glDrawArrays(GL_TRIANGLE_FAN, 0, vertexCount);
    
    	uint32 flags = 0;
	flags += settings->drawShapes			* b2Draw::e_shapeBit;
	flags += settings->drawJoints			* b2Draw::e_jointBit;
	flags += settings->drawAABBs			* b2Draw::e_aabbBit;
	flags += settings->drawCOMs				* b2Draw::e_centerOfMassBit;
	m_debugDraw.SetFlags(flags);
    
    	static Test* Create()
	{
		return new ApplyForce;
	}
    
    	void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'd':
			m_platform->SetType(b2_dynamicBody);
			break;
    }
    }
    
    
    {	b2Body* m_body;
	b2Body* m_bullet;
	float32 m_x;
};
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
			fd.friction = 0.6f;
    
    
    {    // If we are within the deletion range and equal to value, drop it.
    // Otherwise, append/keep/push it.
    if (elem == value) {
      if (numKept < totalOccs - num) {
        it.Push();
        ++numKept;
      } else {
        it.Skip();
      }
    } else {
      // Always append the others
      it.Push();
    }
  }
    
      virtual const char* Name() const override {
    return 'TestTablePropertiesCollector';
  }
    
    
    {  while (ParseNextKey() && Compare(key_.GetInternalKey(), target) < 0) {
  }
  if (!Valid()) {
    SeekToLast();
  } else {
    while (Valid() && Compare(key_.GetInternalKey(), target) > 0) {
      Prev();
    }
  }
}
    
      static Slice GetCacheKey(const char* cache_key_prefix,
                           size_t cache_key_prefix_size,
                           const BlockHandle& handle, char* cache_key);
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    namespace rocksdb {
    }
    
    void Node::reset(void)
{
    m_measureFunc.reset(nullptr);
    }
    
    class Node {
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
      const YGNodeRef root = YGNodeNewWithConfig(config);
  YGNodeStyleSetFlexDirection(root, YGFlexDirectionRow);
  YGNodeStyleSetAlignContent(root, YGAlignStretch);
  YGNodeStyleSetFlexWrap(root, YGWrapWrap);
  YGNodeStyleSetWidth(root, 150);
  YGNodeStyleSetHeight(root, 100);
    
    
    {  template <typename T> friend class RefPtr;
  std::atomic<int> m_refcount;
};
    
      // Creates a strong reference from a raw pointer, assuming that is already
  // referenced from some other RefPtr. This should be used sparingly.
  static inline RefPtr<T> assumeAlreadyReffed(T* ptr) {
    return RefPtr<T>(ptr, ConstructionMode::External);
  }
    
      // Resets request_. This method is more efficient than
  // setRequest(std::shared_ptr<Request>());
  void resetRequest();
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    bool AbstractOptionHandler::isHidden() const { return flags_ & FLAG_HIDDEN; }
    
    #endif // D_ABSTRACT_PROXY_REQUEST_COMMAND_H

    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    namespace aria2 {
    }
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
      A2_LOG_ERROR(
      fmt('Failed to lookup %s in your KeyChain', fingerprint.c_str()));
  return false;
    
    
    {  std::shared_ptr<AsyncNameResolver> asyncNameResolver_[2];
  size_t numResolver_;
  int resolverCheck_;
  bool ipv4_;
  bool ipv6_;
};
    
    #include <ostream>