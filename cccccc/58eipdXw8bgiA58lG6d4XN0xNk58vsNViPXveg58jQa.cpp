
        
          if (engine == LRNParameter_Engine_DEFAULT) {
#ifdef USE_CUDNN
    engine = LRNParameter_Engine_CUDNN;
#else
    engine = LRNParameter_Engine_CAFFE;
#endif
  }
    
    TYPED_TEST(NeuronLayerTest, TestPReLUConsistencyReLU) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter prelu_layer_param;
  LayerParameter relu_layer_param;
  relu_layer_param.mutable_relu_param()->set_negative_slope(0.25);
  PReLULayer<Dtype> prelu(prelu_layer_param);
  ReLULayer<Dtype> relu(relu_layer_param);
  // Set up blobs
  vector<Blob<Dtype>*> blob_bottom_vec_2;
  vector<Blob<Dtype>*> blob_top_vec_2;
  shared_ptr<Blob<Dtype> > blob_bottom_2(new Blob<Dtype>());
  shared_ptr<Blob<Dtype> > blob_top_2(new Blob<Dtype>());
  blob_bottom_vec_2.push_back(blob_bottom_2.get());
  blob_top_vec_2.push_back(blob_top_2.get());
  blob_bottom_2->CopyFrom(*this->blob_bottom_, false, true);
  // SetUp layers
  prelu.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
  relu.SetUp(blob_bottom_vec_2, blob_top_vec_2);
  // Check forward
  prelu.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
  relu.Forward(this->blob_bottom_vec_, blob_top_vec_2);
  for (int s = 0; s < blob_top_2->count(); ++s) {
    EXPECT_EQ(this->blob_top_->cpu_data()[s], blob_top_2->cpu_data()[s]);
  }
  // Check backward
  shared_ptr<Blob<Dtype> > tmp_blob(new Blob<Dtype>());
  tmp_blob->ReshapeLike(*blob_top_2.get());
  FillerParameter filler_param;
  GaussianFiller<Dtype> filler(filler_param);
  filler.Fill(tmp_blob.get());
  caffe_copy(blob_top_2->count(), tmp_blob->cpu_data(),
      this->blob_top_->mutable_cpu_diff());
  caffe_copy(blob_top_2->count(), tmp_blob->cpu_data(),
      blob_top_2->mutable_cpu_diff());
  vector<bool> propagate_down;
  propagate_down.push_back(true);
  prelu.Backward(this->blob_top_vec_, propagate_down, this->blob_bottom_vec_);
  relu.Backward(blob_top_vec_2, propagate_down, blob_bottom_vec_2);
  for (int s = 0; s < blob_bottom_2->count(); ++s) {
    EXPECT_EQ(this->blob_bottom_->cpu_diff()[s], blob_bottom_2->cpu_diff()[s]);
  }
}
    
      /**
   * @brief For an already initialized net, implicitly copies (i.e., using no
   *        additional memory) the pre-trained layers from another Net.
   */
  void ShareTrainedLayersWith(const Net* other);
  // For an already initialized net, CopyTrainedLayersFrom() copies the already
  // trained layers from another net parameter instance.
  /**
   * @brief For an already initialized net, copies the pre-trained layers from
   *        another Net.
   */
  void CopyTrainedLayersFrom(const NetParameter& param);
  void CopyTrainedLayersFrom(const string& trained_filename);
  void CopyTrainedLayersFromBinaryProto(const string& trained_filename);
  void CopyTrainedLayersFromHDF5(const string& trained_filename);
  /// @brief Writes the net to a proto.
  void ToProto(NetParameter* param, bool write_diff = false) const;
  /// @brief Writes the net to an HDF5 file.
  void ToHDF5(const string& filename, bool write_diff = false) const;
    
    template <typename Dtype>
void Net<Dtype>::ShareWeights() {
  for (int i = 0; i < params_.size(); ++i) {
    if (param_owners_[i] < 0) { continue; }
    params_[i]->ShareData(*params_[param_owners_[i]]);
    params_[i]->ShareDiff(*params_[param_owners_[i]]);
  }
}
    
    	if (cc) {
		DEBUG_PRINT('\nFragment Code:\n\n' + String(cc->fragment_globals));
	}
	DEBUG_PRINT('\nFragment Code:\n\n' + String(code_string.get_data()));
#endif
    
    void ShaderGLES3::finish() {
    }
    
    	static Ref<EditorSettings> singleton;
    
    class EditorImportPlugin : public ResourceImporter {
	GDCLASS(EditorImportPlugin, ResourceImporter);
    }
    
    
    {public:
	virtual uint32_t get_import_flags() const;
	virtual void get_extensions(List<String> *r_extensions) const;
	virtual Node *import_scene(const String &p_path, uint32_t p_flags, int p_bake_fps, List<String> *r_missing_deps, Error *r_err = NULL);
	virtual Ref<Animation> import_animation(const String &p_path, uint32_t p_flags, int p_bake_fps);
};
    
    #ifdef __linux__
#if defined __i386 || defined __x86_64
#define BREAKPOINT __asm__ volatile ('int3')
#else   /* not x86/amd64 */
#define BREAKPOINT (raise(SIGTRAP))
#endif  /* x86/amd64 */
#elif defined(__MACH__)
#define BREAKPOINT (raise(SIGTRAP))
#elif defined(_WIN32)
#define BREAKPOINT DebugBreak()
#else
#error 'BREAKPOINT not defined for this operating system'
#endif
    
    
    {                    buf_write_t buf_write(&kv_location.buf);
                    auto leaf_node = static_cast<leaf_node_t *>(buf_write.get_data_write());
                    leaf::remove(sizer,
                                 leaf_node,
                                 keys[i].btree_key(),
                                 repli_timestamp_t::distant_past,
                                 kv_location.buf.get_recency(),
                                 key_modification_proof_t::real_proof());
                }
                check_and_handle_underfull(sizer, &kv_location.buf,
                        &kv_location.last_buf, kv_location.superblock,
                        keys[i].btree_key(),
                        deletion_context->balancing_detacher());
    
                    store.acquire_superblock_for_write(
                    1, write_durability_t::SOFT, &token,
                    &txn, &super_block, &dummy_interruptor);
    
      // Opaque implementation object.  This field is never changed once
  // the object is constructed.  We don't mark it as const here, as
  // doing so will cause a warning in the constructor of UnitTest.
  // Mutable state in *impl_ is protected by mutex_.
  internal::UnitTestImpl* impl_;
    
    
    {  str = tree.DumpModel(fmap, false, 'text');
  ASSERT_EQ(str.find('cover'), std::string::npos);
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetModelRaw
 * Signature: (J[[B)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetModelRaw
  (JNIEnv * jenv, jclass jcls, jlong jhandle, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  bst_ulong len = 0;
  const char* result;
  int ret = XGBoosterGetModelRaw(handle, &len, &result);
    }
    
    template <typename T>
struct TestTransformRange {
  void XGBOOST_DEVICE operator()(size_t _idx,
                                 Span<bst_float> _out, Span<const bst_float> _in) {
    _out[_idx] = _in[_idx];
  }
};
    
    namespace xgboost {
namespace obj {
    }
    }
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
    template <typename T>
void HostDeviceVector<T>::Copy(const HostDeviceVector<T>& other) {
  CHECK_EQ(Size(), other.Size());
  std::copy(other.HostVector().begin(), other.HostVector().end(), HostVector().begin());
}