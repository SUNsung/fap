
        
          LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    
    {  int size_;
  Dtype alpha_, beta_, k_;
};
#endif
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \gamma ^ {\alpha x + \beta}
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /// Peek at the incoming data on the stream. Returns the number of bytes read.
  /// Throws an exception on failure.
  template <typename MutableBufferSequence>
  std::size_t peek(const MutableBufferSequence& buffers);
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    template <typename Time_Traits>
std::size_t dev_poll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    const SparsePage& SimpleCSRSource::Value() const {
  return page_;
}
    
    
    {    for (size_t i = 0; i < preds_h.size(); ++i) {
      auto y = info.labels_[i] * 2.0 - 1.0;
      bst_float p = preds_h[i];
      bst_float w = info.GetWeight(i);
      bst_float g, h;
      if (p * y < 1.0) {
        g = -y * w;
        h = w;
      } else {
        g = 0.0;
        h = std::numeric_limits<bst_float>::min();
      }
      gpair[i] = GradientPair(g, h);
    }
  }
    
      /*!
   * \brief generate predictions for given feature matrix
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictBatch(DMatrix* dmat,
                            HostDeviceVector<bst_float>* out_preds,
                            unsigned ntree_limit = 0) = 0;
  /*!
   * \brief online prediction function, predict score for one instance at a time
   *  NOTE: use the batch prediction interface if possible, batch prediction is usually
   *        more efficient than online prediction
   *        This function is NOT threadsafe, make sure you only call from one thread
   *
   * \param inst the instance you want to predict
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction
   * \param root_index the root index
   * \sa Predict
   */
  virtual void PredictInstance(const SparsePage::Inst& inst,
                       std::vector<bst_float>* out_preds,
                       unsigned ntree_limit = 0,
                       unsigned root_index = 0) = 0;
  /*!
   * \brief predict the leaf index of each tree, the output will be nsample * ntree vector
   *        this is only valid in gbtree predictor
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictLeaf(DMatrix* dmat,
                           std::vector<bst_float>* out_preds,
                           unsigned ntree_limit = 0) = 0;
    
    bool js_cocos2dx_studio_ComAudio_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ComAudio_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ComAudio(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ComAudio_stopAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_getEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_stopEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_getBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_willPlayBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_setBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_end(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_start(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_stopBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_pauseBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_isLoop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_resumeAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_pauseAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_preloadBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_playBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_playEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_preloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_setLoop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_unloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_rewindBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_pauseEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_resumeBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_setFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_setEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_getFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_resumeEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComAudio_ComAudio(JSContext *cx, uint32_t argc, jsval *vp);
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
    }
    
    #endif // __cocos2dx_csloader_h__

    
    
    
    
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(1,1);
    
        GLESDebugDraw( float32 ratio );
    
    	static Test* Create()
	{
		return new ApplyForce;
	}
    
    		// Breakable dynamic body
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 40.0f);
			bd.angle = 0.25f * b2_pi;
			m_body1 = m_world->CreateBody(&bd);
    }
    
    
    {			b2EdgeShape shape;
			shape.Set(b2Vec2(-40.0f, 0.0f), b2Vec2(40.0f, 0.0f));
			ground->CreateFixture(&shape, 0.0f);
		}